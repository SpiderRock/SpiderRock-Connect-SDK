#pragma once

namespace spiderrock {
	namespace mlink {

		class ISocket {
		public:
		
		   // Error handling functions
            virtual bool hasError() const = 0;
            virtual std::string getErrorString() const = 0;
			virtual ~ISocket() = default;

			virtual void shutdown() = 0;
			virtual void close() = 0;
			virtual void cleanup() = 0;

			virtual int read(char *buffer, size_t size) = 0;
			virtual int write(const char *buffer, size_t len) = 0;

			virtual int getLastError() = 0;

            virtual bool isProtobuf() const { return false; }
			
			virtual bool isWebSocketMessageDone() const = 0;

		};

	}
}