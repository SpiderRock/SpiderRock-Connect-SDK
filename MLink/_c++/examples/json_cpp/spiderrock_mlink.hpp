#pragma once

#include <vector>
#include <string>
#include <sstream>
#include <thread>
#include <cstdio>

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

			bool connect(const std::string & url, const std::string & apikey, const std::string & password)
			{
				return details::connect(url, apikey, password, context, socket);
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
					return -1;
				}
				return socket->read(buffer, size);
			}

			int write(const char *buffer, size_t len) {
				if (!socket) {
					return -1;
				}
				return socket->write(buffer, len);
			}

			int getLastError() {
				if (!socket) {
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
		};

		template <int buffer_size = 17*4096>
		class SubscriptionManager {
			MLinkSession &session;
			std::thread th;			
            std::atomic_bool notDone;

		public:
			struct SubscriptionMessage {
				char messageName[64];
				char pKey[64];
				char queryLabel[64];
				bool subscribe;  // true = subscribe, false = unsubscribe

				SubscriptionMessage(const char *messageName, const char *pKey, bool subscribe) {
					strncpy_s(this->messageName, 64, messageName, 64);
					strncpy_s(this->pKey, 64, pKey, 64);
					this->subscribe = subscribe;
				}

				SubscriptionMessage(const char *messageName, const char *pKey, const char *queryLabel, bool subscribe) {
					strncpy_s(this->messageName, 64, messageName, 64);
					strncpy_s(this->pKey, 64, pKey, 64);
                    strncpy_s(this->queryLabel, 64, queryLabel, 64);
					this->subscribe = subscribe;
				}
			};

			SubscriptionManager(MLinkSession &session) : session(session) {}

			template <typename FuncT>
			void start(FuncT&& func) {
				th = std::thread([this, func]() {
					char buffer[buffer_size];
					notDone.store(true,std::memory_order_relaxed);
					while (notDone.load(std::memory_order_relaxed)) {
						int bytesRead = session.read(buffer, buffer_size);
						while (!session.isWebSocketMessageDone() && bytesRead < buffer_size) {
							bytesRead += session.read(buffer + bytesRead, buffer_size-bytesRead);
						}
						if (bytesRead > 0) {
							func(buffer, bytesRead);
						}
						else if (session.getLastError() != 0) {
							break;
						}
					}
				});
				while(!th.joinable())
				{
				std::this_thread::sleep_for(std::chrono::milliseconds{10});
				}
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