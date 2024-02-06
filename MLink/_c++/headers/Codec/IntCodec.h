#pragma once
#include <cstdint>
#include "Int32Codec.h"

namespace SRProtobufCPP {

	class IntCodec {
	public:
		static const TagCodecEnums::TagType TagType = Int32Codec::TagType;

		static inline uint8_t* Encode(uint8_t*& pos, int value);
		static inline int Decode(const uint8_t*& pos, const uint8_t* max);
		static inline int Size(int value);
	};
	inline uint8_t* IntCodec::Encode(uint8_t*& pos, int value) {
		return Int32Codec::Encode(pos, value);
	}

	inline int IntCodec::Decode(const uint8_t*& pos, const uint8_t* max) {
		return Int32Codec::Decode(pos, max);
	}

	inline int IntCodec::Size(int value) {
		return Int32Codec::Size(value);
	}

} // namespace SRProtobufCPP
