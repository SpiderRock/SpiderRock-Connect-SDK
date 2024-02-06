#pragma once

#include <cstdint>
#include <exception>
#include "TagCodec.h" 

namespace SRProtobufCPP {

	class LittleEndian32Codec {
	public:
		static const TagCodecEnums::TagType TagType = TagCodecEnums::TagType::Fixed32;
		static const int Size = 4;

		static inline uint8_t* Encode(uint8_t*& pos, uint32_t value) {
			for (int i = 0; i < Size; i++) {
				*pos++ = static_cast<uint8_t>(value);
				value >>= 8;
			}
			return pos;
		}

		static inline uint32_t Decode(const uint8_t*& pos, const uint8_t* max) {
			if (pos + Size <= max) {
				uint32_t result = 0;
				for (int i = 0; i < Size; i++) {
					result |= static_cast<uint32_t>(*pos++) << (i * 8);
				}
				return result;
			}
			else {
				return ParseRawLittleEndian32SlowPath(pos, max);
			}
		}

		static inline void Skip(const uint8_t*& pos, const uint8_t* max) {
			if (pos + Size > max) {
				throw std::range_error("Indexed out of bounds");
			}
			pos += Size;
		}

	private:
		static inline uint32_t ParseRawLittleEndian32SlowPath(const uint8_t*& pos, const uint8_t* max) {
			uint32_t b1 = *pos++;
			uint32_t b2 = *pos++;
			uint32_t b3 = *pos++;
			uint32_t b4 = *pos++;
			return b1 | (b2 << 8) | (b3 << 16) | (b4 << 24);
		}
	};

} // namespace SRProtobufCPP
