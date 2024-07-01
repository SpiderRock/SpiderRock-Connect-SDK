#pragma once

#include <memory>
#include <locale>
#include <codecvt>
#include <string>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <filesystem>
#include "spiderrock_mlink_base.hpp"

#include <boost/beast.hpp>
#include <boost/beast/ssl/ssl_stream.hpp>
#include <boost/url.hpp>

namespace beast = boost::beast;         // from <boost/beast.hpp>                                                                                                                                                                 
namespace http = beast::http;           // from <boost/beast/http.hpp>                                                                                                                                                            
namespace websocket = beast::websocket; // from <boost/beast/websocket.hpp>                                                                                                                                                       
namespace net = boost::asio;            // from <boost/asio.hpp>                                                                                                                                                                  
namespace ssl = boost::asio::ssl;       // from <boost/asio/ssl.hpp>                                                                                                                                                              
using tcp = boost::asio::ip::tcp;       // from <boost/asio/ip/tcp.hpp>                                                                                                                                                           

namespace spiderrock {
    namespace mlink {
	
        namespace details {
                class Context {
                public:
                Context() {
                }
                
                ~Context() {
                }
            };

            static void load_certificates_from_directory(ssl::context& ctx, const std::string& cert_dir) {
                boost::system::error_code ec;
                for (const auto& entry : std::filesystem::directory_iterator(cert_dir)) {
                    if (entry.path().extension() == ".pem") {
                        std::ifstream file(entry.path());
                        if (file) {
                             std::ostringstream sstr;
                             sstr << file.rdbuf();
                             std::string cert = sstr.str();
                             ctx.add_certificate_authority(boost::asio::buffer(cert.data(), cert.size()), ec);
                             if (ec) {
                                throw boost::system::system_error{ec};
                              }
                        }
                    }
                }
            }

            static void load_root_certificates(ssl::context& ctx) {
                // List of directories to search for CA certificates
                std::vector<std::string> cert_dirs = {
                    "/etc/ssl/certs/",               // Debian/Ubuntu
                    "/etc/pki/tls/certs/",           // Red Hat/CentOS/Fedora
                    "/usr/local/share/ca-certificates/" // Custom CA certificates
                };

                for (const auto& dir : cert_dirs) {
                    if (std::filesystem::exists(dir) && std::filesystem::is_directory(dir)) {
                         load_certificates_from_directory(ctx, dir);
                      }
                }
            }                                                                                                                                                                                                                           

            template <bool UsingSSL>
            class WebSocket : public ISocket {
                using SocketType = typename std::conditional<UsingSSL, websocket::stream<beast::ssl_stream<tcp::socket>>, websocket::stream<tcp::socket>>::type;
                ssl::context ctx{ssl::context::tlsv13_client};

                net::io_context ioc;
                std::unique_ptr<SocketType> ws;

                bool is_protobuf = false;
                int last_error = 0;

                public:
                WebSocket() {
                    if constexpr (UsingSSL) {
                        load_root_certificates(ctx);
                        ws = std::make_unique<SocketType>(ioc, ctx);
                    }
                    else {
                        ws = std::make_unique<SocketType>(ioc);
                    }

                    ws->binary(true);
                }

                virtual ~WebSocket() {}

                bool connect(const std::string & host, const std::string & port, const std::string & path, const std::string & query, const std::string & apikey)
                {
                    if (path.find("proto") != std::string::npos) {
                        is_protobuf = true;
                    }

                    try 
                    {
                        tcp::resolver resolver(ioc);
                        auto const results = resolver.resolve(host, port);

                        std::string host_port;
                        if constexpr (UsingSSL) {
                            auto ep = net::connect(get_lowest_layer(*ws), results);

                            if(! SSL_set_tlsext_host_name(ws->next_layer().native_handle(), host.c_str()))
                                throw beast::system_error(
                                    beast::error_code(
                                        static_cast<int>(::ERR_get_error()),
                                        net::error::get_ssl_category()),
                                    "Failed to set SNI Hostname");

                            ws->next_layer().handshake(ssl::stream_base::client);

                            host_port = host + std::to_string(ep.port());
                        }
                        else {
                            auto ep = net::connect(ws->next_layer(), results);

                            host_port = host + std::to_string(ep.port());
                        }

                        std::string authentication_key = std::string(apikey);
                        // Set a decorator to add the authorization key                                                                                                                                                                           
                        ws->set_option(websocket::stream_base::decorator(
                            [&authentication_key](websocket::request_type& req)
                            {
                                req.set(http::field::authorization,
                                    "Bearer " + authentication_key);
                            }));

                        // Perform the websocket handshake                                                                                                                                                                                        
                        ws->handshake(host, path);

                        return true;
                    }
                    catch (const boost::system::system_error &err)
                    {
                        last_error = err.code().value();
                        return false;
                    }
                }

                virtual void shutdown() override
                {
                    close();
                }

                void close() override
                {
                    if (ws) {
                        ws->close(websocket::close_code::normal);
                        ws = nullptr;
                    }
                }

                void cleanup() override
                {
                    close();
                }

                int read(char *buffer, size_t size) override
                {
                    net::mutable_buffer buf(buffer, size);
                    try {
                        return ws->read_some(buf); 
                    }
                    catch (const boost::system::system_error &err) 
                    {
                        last_error = err.code().value();
                        if (last_error == ECANCELED) return 0;
                        return -last_error;
                    }
                }

                int write(const char *buffer, size_t len) override
                {
                    return ws->write(net::buffer(buffer, len));
                }

                int getLastError() override { return last_error; }

                size_t get(const std::string &request, http::response<http::dynamic_body> &response)
                {
                    return -1;
                }

                bool isProtobuf() const override { return is_protobuf; }

 				bool isWebSocketMessageDone() const override { return ws->is_message_done(); }
				
				// Error handling functions
				bool hasError() const override {
					// Check if the stored error code indicates an error.
					return last_error != 0;
				}

				std::string getErrorString() const override {
					// Return the error message based on the stored error code.
					if (hasError()) {
						return boost::system::system_error(boost::system::error_code(last_error, boost::system::generic_category())).what();
					} 
					else {
						return "No error.";
					}
				}
				private:
					void setLastError(int errorCode) {
					// Store the error code.
					last_error = errorCode;
				}

           };


            template <bool UsingSSL>
            class HttpSocket : public ISocket {
                using SocketType = typename std::conditional<UsingSSL, beast::ssl_stream<beast::tcp_stream>, beast::tcp_stream>::type;
                ssl::context ctx{ssl::context::tlsv13_client};

                net::io_context ioc;
                std::unique_ptr<SocketType> ws;
                http::parser<false, http::buffer_body> parser;
                beast::flat_buffer flatbuffer;

                std::string host;
                std::string authentication_key;

                int last_error = 0;

                public:
                HttpSocket() {
                    if constexpr (UsingSSL) {
                        load_root_certificates(ctx);
                        ws = std::make_unique<SocketType>(ioc, ctx);
                    }
                    else {
                        ws = std::make_unique<SocketType>(ioc);
                    }
                }

                virtual ~HttpSocket() {}

                bool connect(const std::string & host, const std::string & port, const std::string & path, const std::string & query, const std::string & apikey)
                {
                    try 
                    {
                        tcp::resolver resolver(ioc);
                        auto const results = resolver.resolve(host, port);

                        if constexpr (UsingSSL) {
                            beast::get_lowest_layer(*ws).connect(results);
                            if(! SSL_set_tlsext_host_name(ws->native_handle(), host.c_str()))
                                throw beast::system_error(
                                    beast::error_code(
                                        static_cast<int>(::ERR_get_error()),
                                        net::error::get_ssl_category()),
                                    "Failed to set SNI Hostname");

                            ws->handshake(ssl::stream_base::client);
                        }
                        else {
                            beast::get_lowest_layer(*ws).connect(results);
                        }

                        this->host = host;
                        authentication_key = std::string(apikey);

                        std::string target = "/rest/jsonf?apikey=" + authentication_key + "&" + query;
                        http::request<http::string_body> req{http::verb::get, target, 11};
                        req.set(http::field::host, host);
                        req.set(http::field::user_agent, BOOST_BEAST_VERSION_STRING);
                        http::write(*ws, req);

                        beast::error_code ec;

                        http::read_header(*ws, flatbuffer, parser, ec);
                        if (ec) return false;

                        return true;
                    }
                    catch (const boost::system::system_error &err)
                    {
                        last_error = err.code().value();
                        return false;
                    }
                }

                virtual void shutdown() override
                {
                    close();
                }

                void close() override
                {
                    if (ws) {
                        beast::get_lowest_layer(*ws).close();
                        ws = nullptr;
                    }
                }

                void cleanup() override
                {
                    close();
                }

                int read(char *buffer, size_t size) override
                {
                    if (parser.is_done()) return 0;
                    parser.get().body().data = buffer;
                    parser.get().body().size = size;
                    beast::error_code ec;
                    http::read(*ws, flatbuffer, parser, ec);
                    if (ec == http::error::need_buffer) ec = {};
                    if (ec) return -ec.value();
                    return size - parser.get().body().size;
                }

                int write(const char *buffer, size_t len) override
                {
                    return -1;
                }

                int getLastError() override { return last_error; }
				
				bool isWebSocketMessageDone() const override { return true; }
				
				 // Error handling functions
				bool hasError() const override {
					// Check if the stored error code indicates an error.
					return last_error != 0;
				}

				std::string getErrorString() const override {
				// Return the error message based on the stored error code.
					if (hasError()) {
						return boost::system::system_error(boost::system::error_code(last_error, boost::system::generic_category())).what();
					} 
					else {
						return "No error.";
					}
				}
				
            };


            static bool connect(const std::string & url, const std::string & apikey, details::Context &context, std::unique_ptr<ISocket> &socket)
            {
                using namespace boost::urls;

                url_view uv(url);

                if (uv.scheme() == "ws") {
                    socket = std::make_unique<WebSocket<false>>();
                    auto ws = static_cast<WebSocket<false>*>(socket.get());
                    return ws->connect(uv.host(), uv.port(), uv.path(), uv.query(), apikey);
                } else if (uv.scheme() == "wss") {
                    socket = std::make_unique<WebSocket<true>>();
                    auto ws = static_cast<WebSocket<true>*>(socket.get());
                    return ws->connect(uv.host(), "443", uv.path(), uv.query(), apikey);
                } else if (uv.scheme() == "http") {
                    socket = std::make_unique<HttpSocket<false>>();
                    auto ws = static_cast<HttpSocket<false>*>(socket.get());
                    return ws->connect(uv.host(), uv.port(), uv.path(), uv.query(), apikey);
                } else if (uv.scheme() == "https") {
                    socket = std::make_unique<HttpSocket<true>>();
                    auto ws = static_cast<HttpSocket<true>*>(socket.get());
                    return ws->connect(uv.host(), uv.port(), uv.path(), uv.query(), apikey);
                } else {
                    std::stringstream ss;
                    ss << "Bad url: " << url;
                    throw std::invalid_argument(ss.str());
                }
            }
        }
    }
}