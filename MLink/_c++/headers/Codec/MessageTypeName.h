#pragma once
#include <cstdint>
#include <cstring>
#include <string>
#include <algorithm>

namespace SRProtobufCPP {

	struct MessageTypeName {
		
		int64_t data1;
		int64_t data2;
		int64_t data3;
		int64_t data4;
		
		bool Equals(const MessageTypeName& other) const {
			return data1 == other.data1 && data2 == other.data2 && data3 == other.data3 && data4 == other.data4;
		}

		std::string ToString() const {
			return Value();
		}

		
		std::size_t GetHashCode() const {
			std::size_t hashCode = static_cast<std::size_t>(data1);
			hashCode = (hashCode * 3) ^ static_cast<std::size_t>(data2);
			hashCode = (hashCode * 3) ^ static_cast<std::size_t>(data3);
			hashCode = (hashCode * 3) ^ static_cast<std::size_t>(data4);
			return hashCode;
		}
        	
		int Length() const {
			const char* charsPtr = reinterpret_cast<const char*>(this);
			int s = 0, e = 32;

			while (s < e) {
				int m = s + (e - s) / 2;

				if (charsPtr[m] == 0) {
					e = m;
				}
				else {
					s = m + 1;
				}
			}

			return s;
		}
        	
		int CompareTo(const MessageTypeName& other) const {
			int x, y, r;
			int64_t x64, y64;
			x64 = data1; y64 = other.data1;
			if (x64 != y64) {
				for (int i = 0; i < 8; i++, x64 >>= 8, y64 >>= 8) {
					x = static_cast<int>(x64);
					y = static_cast<int>(y64);
					if ((r = x - y) != 0) return r;
					if (x == 0) return 0;
				}
			}
			x64 = data2; y64 = other.data2;
			if (x64 != y64) {
				for (int i = 0; i < 8; i++, x64 >>= 8, y64 >>= 8) {
					x = static_cast<int>(x64);
					y = static_cast<int>(y64);
					if ((r = x - y) != 0) return r;
					if (x == 0) return 0;
				}
			}
			x64 = data3; y64 = other.data3;
			if (x64 != y64) {
				for (int i = 0; i < 8; i++, x64 >>= 8, y64 >>= 8) {
					x = static_cast<int>(x64);
					y = static_cast<int>(y64);
					if ((r = x - y) != 0) return r;
					if (x == 0) return 0;
				}
			}
			x64 = data4; y64 = other.data4;
			if (x64 != y64) {
				for (int i = 0; i < 8; i++, x64 >>= 8, y64 >>= 8) {
					x = static_cast<int>(x64);
					y = static_cast<int>(y64);
					if ((r = x - y) != 0) return r;
					if (x == 0) return 0;
				}
			}
			return 0;
		}
        		
		bool Equals(const std::string& value) const {
			if (value.empty()) return IsEmpty();

			const char* charsPtr = reinterpret_cast<const char*>(this);
			for (std::size_t i = 0; i < 32; i++) {
				int mine = static_cast<int>(charsPtr[i]);
				int theirs = static_cast<int>(value[i]);
				if (mine != theirs) return false;
				if (mine == 0) break;
			}
			return true;
		}
        		
		bool IsEmpty() const {
			return (static_cast<uint8_t>(data1) == 0);
		}
        		
		bool StartsWith(const std::string& value) const {
			if (value.empty()) return true;
			if (value.length() > 32) return false;

			const char* charsPtr = reinterpret_cast<const char*>(this);
			for (std::size_t i = 0; i < value.length(); i++) {
				if (charsPtr[i] != value[i]) return false;
			}
			return true;
		}
        		
		std::string Value() const {
			if (IsEmpty()) return std::string();

			const char* charsPtr = reinterpret_cast<const char*>(this);
			if (charsPtr[31] == 0) return std::string(reinterpret_cast<const char*>(this));
			return std::string(reinterpret_cast<const char*>(this), 32);
		}
        		
		void Value(const std::string& value) {
			if (value.empty()) {
				_Zero(reinterpret_cast<uint8_t*>(this), 32);
				return;
			}

			char* charsPtr = reinterpret_cast<char*>(this);
			std::copy_n(value.begin(), std::min(value.length(), static_cast<std::size_t>(32)), charsPtr);
			std::fill_n(charsPtr + value.length(), 32 - value.length(), 0);
		}

		// Clear method
		void Clear() {
			data1 = 0;
			data2 = 0;
			data3 = 0;
			data4 = 0;
		}

		int CopyTo(void* buffer) const
		{
			std::uint8_t* dest = static_cast<std::uint8_t*>(buffer);

			*(reinterpret_cast<std::int64_t*>(dest)) = data1; dest += 8;
			*(reinterpret_cast<std::int64_t*>(dest)) = data2; dest += 8;
			*(reinterpret_cast<std::int64_t*>(dest)) = data3; dest += 8;
			*(reinterpret_cast<std::int64_t*>(dest)) = data4;

			return 32;
		}


		// Helper function to zero out memory
		static void _Zero(uint8_t* dest, int len) {
			std::fill_n(dest, len, 0);
		}
	};
}
