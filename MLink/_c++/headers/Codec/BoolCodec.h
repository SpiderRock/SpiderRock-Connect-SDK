#pragma once
#include "TagCodec.h"
#include <cstddef>

namespace SRProtobufCPP {

	class BoolCodec {
	public:
		static const TagCodecEnums::TagType TagType = TagCodecEnums::TagType::Varint;
		static const std::size_t Size = 1;

		static inline uint8_t* Encode(uint8_t*& pos, bool value) {
			*pos++ = value ? static_cast<uint8_t>(1) : static_cast<uint8_t>(0);
			return pos;
		}

		static inline bool Decode(const uint8_t*& pos, const uint8_t* max) {
           return *pos++ == static_cast<uint8_t>(1) ? true : false;            			
		}
	};



}