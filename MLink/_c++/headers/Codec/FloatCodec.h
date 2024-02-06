#pragma once
#ifndef SRPROTOBUF_FLOATCODEC_H
#define SRPROTOBUF_FLOATCODEC_H

#include <cstdint>
#include <cstring>
#include "TagCodec.h"
#include <limits>
#include <algorithm>

namespace sys {

    const unsigned one = 1U;

    inline bool little_endian()
    {
        return reinterpret_cast<const char*>(&one) + sizeof(unsigned) - 1;
    }

    inline bool big_endian()
    {
        return !little_endian();
    }

} // sys

namespace SRProtobufCPP {

    class FloatCodec {
	public:
		static const int Size = sizeof(float);
		static const TagCodecEnums::TagType TagType = TagCodecEnums::TagType::Fixed32;

		static uint8_t* Encode(uint8_t*& pos, float value) {
			float reversedValue = value;
			if (!std::numeric_limits<float>::is_iec559 && !std::numeric_limits<float>::is_bounded) {
				// Use memcpy to handle special floating-point types (e.g., IEEE 754 quadruple precision)
				std::memcpy(&reversedValue, &value, Size);
			}
			if (sys::big_endian()) {
				ReverseByteOrder(reinterpret_cast<uint8_t*>(&reversedValue), Size);
			}
			std::memcpy(pos, &reversedValue, Size);
			return pos + Size;
		}

		static float Decode(const uint8_t*& pos, const uint8_t* max) {
			if (pos + Size > max) {
				return ParseFloatSlow(pos, max);
			}

			float result;
			std::memcpy(&result, pos, Size);

			if (sys::big_endian()) {
				ReverseByteOrder(reinterpret_cast<uint8_t*>(&result), Size);
			}

			pos += Size;
			return result;
		}

	private:
		static float ParseFloatSlow(const uint8_t*& pos, const uint8_t* max) {
			float result;
			std::memcpy(&result, pos, Size);
			ReverseByteOrder(reinterpret_cast<uint8_t*>(&result), Size);
			pos += Size;
			return result;
		}

		static void ReverseByteOrder(uint8_t* data, size_t size) {
			std::reverse(data, data + size);
		}
	};

} // namespace SRProtobufCPP

#endif // SRPROTOBUF_FLOATCODEC_H
