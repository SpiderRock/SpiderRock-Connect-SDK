#pragma once

#include <cstdint>
#include <cstring>
#include "TagCodec.h" 
#include "LittleEndian64Codec.h"

namespace SRProtobufCPP {

	class DoubleCodec {
	public:
		static const int Size = sizeof(double);
		static const TagCodecEnums::TagType TagType = TagCodecEnums::TagType::Fixed64;

		static inline uint8_t* Encode(uint8_t*& pos, double value) {
			uint64_t intValue;
			std::memcpy(&intValue, &value, Size);
			return LittleEndian64Codec::Encode(pos, intValue);
		}

		static inline double Decode(const uint8_t*& pos, const uint8_t* max) {
			uint64_t intValue = LittleEndian64Codec::Decode(pos, max);
			double result;
			std::memcpy(&result, &intValue, Size);
			return result;
		}
	};

} // namespace SRProtobufCPP
#pragma once
