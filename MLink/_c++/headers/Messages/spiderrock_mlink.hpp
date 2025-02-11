#pragma once

#include <vector>
#include <string>
#include <sstream>
#include <thread>
#include <cstdio>
#include <chrono>

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
#include "spiderrock_mlink_windows.hpp"
#else 
#include <string.h>
#include <time.h>

inline int localtime_s(struct tm *buf, const time_t *timer) {
	struct tm *ptm = localtime(timer);
	if (ptm == nullptr) return errno;
	*buf = *ptm;
	return 0;
}

#define strncpy_s(a,b,c,d) strncpy((a),(c),(d))
#include "spiderrock_mlink_linux.hpp"
#include "MLinkWs/MLinkStream.hpp"
#include "MLinkWs/MLinkSignalReady.hpp"
#endif


namespace spiderrock {
	namespace mlink {

		using Context = details::Context;

		class MLinkSession
		{
			Context &context;
			std::unique_ptr<ISocket> socket;

		public:
			MLinkSession(Context &context) : context(context) {}

			 bool connect(const std::string& url, const std::string& apikey) {
                int maxRetries = 3;
                int retryCount = 0;

                while (retryCount < maxRetries) {
                    auto result = details::connect(url, apikey, context, socket);

                    if (hasError()) {
                        std::cout << "Error: " << getErrorString() << std::endl;
                        retryCount++;

                        if (retryCount < maxRetries) {
                            std::cout << "Retrying in 10 seconds..." << std::endl;
                            // Sleep for 10 seconds before retrying
                            std::this_thread::sleep_for(std::chrono::seconds(10));
                        }
                    }
                    else {
                        return result;  // Connection successful
                    }
                }

                // If all retries fail, handle the error and exit
                handle_error<std::runtime_error>("Exiting due to repeated connection failures");
                return false;  // Return false if all retries fail
            }
			
			void onDisconnect() {  
                shutdown();
                cleanup();
                std::cout << "Disconnected from the server." << std::endl;
            }
			
			void cleanup()
			{
				if (socket) {
					socket->cleanup();
				}
			}

			void shutdown()
			{
				if (socket) {
					socket->shutdown();
				}
			}

			void close()
			{
				if (socket) {
					socket->close();
				}
			}

			int read(char *buffer, size_t size) {
				if (!socket) {
					handle_error<std::runtime_error>("Exiting due to error");
					return -1;
				}
				return socket->read(buffer, size);
			}

			int write(const char *buffer, size_t len) {
				if (!socket) {
					handle_error<std::runtime_error>("Exiting due to error");
					return -1;
				}
				return socket->write(buffer, len);
			}

			int getLastError() {
				if (!socket) {
					handle_error<std::runtime_error>("Exiting due to error");
					return -1;
				}
				return socket->getLastError();
			}

            bool isProtobuf() const {
                if (!socket) {
                    return false;
                }
                return socket->isProtobuf();
            }
			
			bool isWebSocketMessageDone() const { 
                if (!socket) {
                    return false;
                }
                return socket->isWebSocketMessageDone();
			}
			
			 bool hasError() const {
                return socket && socket->hasError();
            }

            std::string getErrorString() const {
                if (socket) {
                    return socket->getErrorString();
                }
                else {
                    return "Socket is not initialized.";
                }
            }

            // Templatized error handling function
            template <typename ExceptionType>
            void handle_error(const std::string& message) const {
                if (socket) {
                    std::cout<< message + ": " + socket->getErrorString();
                }
                else {
                    std::cout<< message + ": Socket is not initialized.";
                }
            }
		};

		template <int buffer_size = 17*4096>
		class SubscriptionManager {
            MLinkSession& session;
            std::thread th;
            std::atomic_bool notDone;
            bool inUse;

        public:
            struct SubscriptionMessage {
                char messageName[64];
                char pKey[64];
                char queryLabel[64];
                char viewFilter[64];
                bool subscribe;  // true = subscribe, false = unsubscribe

                SubscriptionMessage(const char* messageName, const char* pKey, bool subscribe) {
                    strncpy_s(this->messageName, 64, messageName, 64);
                    strncpy_s(this->pKey, 64, pKey, 64);
                    this->subscribe = subscribe;
                }
                SubscriptionMessage(const char* messageName, const char* pKey, const char* queryLabel, const char* viewFilter, bool subscribe) {
                    strncpy_s(this->messageName, 64, messageName, 64);
                    strncpy_s(this->pKey, 64, pKey, 64);
                    strncpy_s(this->queryLabel, 64, queryLabel, 64);
                    strncpy_s(this->viewFilter, 64, viewFilter, 64);
                    this->subscribe = subscribe;
                }
            };

			SubscriptionManager(MLinkSession& session) : session(session) { inUse = true; }

			template <typename FuncT>
			void start(FuncT&& func) {
				th = std::thread([this, func]() {
					char buffer[buffer_size];
					notDone.store(true,std::memory_order_relaxed);
					while (notDone.load(std::memory_order_relaxed)) {
						int bytesRead = session.read(buffer, buffer_size);
						while ( !session.hasError() && !session.isWebSocketMessageDone() && bytesRead < buffer_size ) {
							bytesRead += session.read(buffer + bytesRead, buffer_size-bytesRead);
						}
						if (bytesRead > 0) {
							func(buffer, bytesRead);
						}
						else if (session.getLastError() != 0) {
                            std::string errorString = "Exiting due to error " + std::to_string(session.getLastError()) + " ";
                            session.handle_error<std::runtime_error>(errorString);
                            session.onDisconnect();
                            inUse = false;
							break;
						}
					}
				});
				while(!th.joinable())
				{
				std::this_thread::sleep_for(std::chrono::milliseconds{10});
				}
			}
			
			bool safeToReuse() // if you want to resue the Subscription Manager object.
            {
                return !inUse;
            }

			void stop() //safe to call from any thread
            {
                notDone.store(false, std::memory_order_relaxed);
            }

            void join() {
                if (th.joinable()) {                    
                    th.join();
                }
            }
			
			void shutDown() {
				session.shutdown();
			}

			void signalReady() {
				if (session.isProtobuf()) {
					spiderrock::protobuf::api::MLinkSignalReady msg{};
					const size_t encodedSize = msg.ByteSizeLong();
					const size_t headerSize = msg.getMLinkHeaderLength();
					const size_t totalSize = encodedSize + headerSize;
					constexpr size_t memsz = 256;
					char buffer[memsz];
					msg.SerializeToArray(buffer, memsz);
					session.write(buffer, totalSize);
				}
				else {
					constexpr size_t memsz = 256;
					char buffer[memsz];
					size_t pos = 0;
					pos += std::snprintf(buffer + pos, memsz - pos, "{\"header\":{\"mTyp\":\"MLinkSignalReady\"},\"message\":{}}");
					session.write(buffer, pos);
				}
			}
			
			void stream(SubscriptionMessage&& item, int activeLatency) {

                spiderrock::protobuf::api::MLinkStream  mlinkStream;
                mlinkStream.set_active_latency(activeLatency);
                mlinkStream.set_msg_name(item.messageName);
                mlinkStream.set_query_label(item.queryLabel);
				mlinkStream.set_where_clause(item.pKey);

                const size_t encodedSize = mlinkStream.ByteSizeLong();
                const size_t headerSize = mlinkStream.getMLinkHeaderLength();
                const size_t totalSize = encodedSize + headerSize;
                char* charBuffer = new char[totalSize];
                mlinkStream.SerializeToArray(charBuffer, totalSize);

                session.write(charBuffer, totalSize);
				delete[] charBuffer;
            }

			void stream(spiderrock::protobuf::api::MLinkStream& mlinkStream) {

                const size_t encodedSize = mlinkStream.ByteSizeLong();
                const size_t headerSize = mlinkStream.getMLinkHeaderLength();
                const size_t totalSize = encodedSize + headerSize;
                char* charBuffer = new char[totalSize];
                mlinkStream.SerializeToArray(charBuffer, totalSize);

                session.write(charBuffer, totalSize);
				delete[] charBuffer;
            }
			
			template <typename ProtobufMessageType>
            void SendMessage(const ProtobufMessageType& t) {

                const size_t encodedSize = t.ByteSizeLong();
                const size_t headerSize = t.getMLinkHeaderLength();
                const size_t totalSize = encodedSize + headerSize;
                char* charBuffer = new char[totalSize];
                t.SerializeToArray(charBuffer, totalSize);

                session.write(charBuffer, totalSize);
                delete[] charBuffer;
            }

			void subscribe(std::vector<SubscriptionMessage> &&list, int activeLatency, bool reset) {
                bool requires_framing = false;

                if (session.isProtobuf()) {
                    requires_framing = true;
                }

                const char* framing = requires_framing ? "\r\nJ03386000000" : "";

                size_t memsz = list.size() * sizeof(SubscriptionMessage) + 1024;

				char* buffer = (char*)alloca(memsz);
				
				size_t pos = 0;

				pos += std::snprintf(buffer + pos, memsz - pos, "%s{\"header\":{\"mTyp\":\"MLinkSubscribe\"},\"message\":{", framing);
				pos += std::snprintf(buffer + pos, memsz - pos, "\"activeLatency\":%d", activeLatency);

				if (reset) {
					pos += std::snprintf(buffer + pos, memsz - pos, ",\"doReset\":\"Yes\"");
				}

				int count_sub = 0, count_unsub = 0;
				for (auto item : list) {
					if (!item.subscribe) { // unsubscribe
						++count_unsub;
					}
					else {
						++count_sub;
					}
				}

				if (count_unsub) {
					pos += std::snprintf(buffer + pos, memsz - pos, ",\"Unsubscribe\":[");
					for (auto item : list) {
						const char *unsub_delim = "";
						if (!item.subscribe) { // unsubscribe
							pos += std::snprintf(buffer + pos, memsz - pos, "%s{\"msgName\":\"%s\",\"msgPKey\":\"%s\"}", unsub_delim, item.messageName, item.pKey);
							unsub_delim = ",";
						}
					}
					pos += std::snprintf(buffer + pos, memsz - pos, "]");
				}
				if (count_sub) {
					pos += std::snprintf(buffer + pos, memsz - pos, ",\"Subscribe\":[");
					for (auto item : list) {
						const char *sub_delim = "";
						if (item.subscribe) { // subscribe
							pos += std::snprintf(buffer + pos, memsz - pos, "%s{\"msgName\":\"%s\",\"msgPKey\":\"%s\"}", sub_delim, item.messageName, item.pKey);
							sub_delim = ",";
						}
					}
					pos += std::snprintf(buffer + pos, memsz - pos, "]");
				}
				pos += std::snprintf(buffer + pos, memsz - pos, "}}");

                if (requires_framing) {
                    size_t size = pos - 14;
                    for (int i = 13; i > 7 && size > 0; --i) {
                        buffer[i] = size % 10 + '0';
                        size /= 10;
                    }
                }

				session.write(buffer, pos);
			}
        };
	}
}