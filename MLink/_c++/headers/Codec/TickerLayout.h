#include <cstring>
#include <string>

namespace SRProtobufCPP {

	struct TickerLayout {
        std::string Value;

        public:
		// Constructors
       
		TickerLayout() {}
		
        TickerLayout(const std::string& value) {
            Value = value.substr(0, 12);
        }

        int Length() const {
            return static_cast<int>(Value.length());
        }

        // Methods
        int CompareTo(const TickerLayout& other) const {
            return Value.compare(other.Value);
        }

        bool Equals(const TickerLayout& other) const {
            return Value == other.Value;
        }

        bool Equals(const std::string& value) const {
            return Value == value;
        }

        bool Contains(char value) const {
            return Value.find(value) != std::string::npos;
        }

        bool StartsWith(const std::string& value) const {
            return Value.compare(0, value.length(), value) == 0;
        }

        void TrimEnd() {
            size_t pos = Value.find_last_not_of(' ');
            if (pos != std::string::npos) {
                Value = Value.substr(0, pos + 1);
            }
            else {
                Value.clear();
            }
        }

        void Clear() {
            Value.clear();
        }

        // Overloaded operators
        bool operator==(const TickerLayout& other) const {
            return Equals(other);
        }

        bool operator!=(const TickerLayout& other) const {
            return !Equals(other);
        }

        bool operator<(const TickerLayout& other) const {
            return CompareTo(other) < 0;
        }

        bool operator>(const TickerLayout& other) const {
            return CompareTo(other) > 0;
        }

        bool operator<=(const TickerLayout& other) const {
            return CompareTo(other) <= 0;
        }

        bool operator>=(const TickerLayout& other) const {
            return CompareTo(other) >= 0;
        }

       
        std::size_t size() const {
            return Value.size();
           
        }

		// Conversion to string
		const std::string& toString() const {
         
            return Value;
		}

		// Copy data from a buffer
		std::size_t CopyFrom(const void* buffer, std::size_t maxLength) {
            const char* src = reinterpret_cast<const char*>(buffer);
            auto len = std::min(maxLength, (size_t)12);
            Value.assign(src, len);
            return len;
          
		}
        
		
		std::size_t CopyTo(void* buffer) const {
            char* dest = reinterpret_cast<char*>(buffer);
            auto count = Value.copy(dest, 12);
            while (count < 12) {
                dest[count++] = 0;
            }           
			return 12;
		}        
		
	};

} // namespace SRProtobufCPP
