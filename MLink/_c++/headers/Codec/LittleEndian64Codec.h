#pragma once

#include <cstdint>
#include <cstring>
#include <stdexcept>
#include "TagCodec.h"

namespace SRProtobufCPP {

	class LittleEndian64Codec {
	public:
		static const int Size = sizeof(uint64_t);
		static const TagCodecEnums::TagType TagType = TagCodecEnums::TagType::Fixed64;

		static inline uint8_t* Encode(uint8_t*& p, uint64_t value) {
			std::memcpy(p, &value, Size);
			return p + Size;
		}

		static inline uint64_t Decode(const uint8_t*& pos, const uint8_t* max) {
			if (pos + Size <= max) {
				uint64_t result;
				std::memcpy(&result, pos, Size);
				pos += Size;
				return result;
			}
			else {
				return ParseRawLittleEndian64SlowPath(pos, max);
			}
		}

		static inline void Skip(const uint8_t*& pos, const uint8_t* max) {
			if (pos + Size > max) {
				throw std::runtime_error("Indexed out of bounds");
			}
			pos += Size;
		}

	private:
		static inline uint64_t ParseRawLittleEndian64SlowPath(const uint8_t*& pos, const uint8_t* max) {
			uint64_t result = 0;
			for (int shift = 0; shift < 64 && pos < max; shift += 8) {
				result |= static_cast<uint64_t>(*pos++) << shift;
			}
			return result;
		}
	};

} // namespace SRProtobufCPP
