#pragma once

#include "TagCodec.h"
#include "Int32Codec.h"

namespace SRProtobufCPP {

	class ByteCodec {
	public:
		static const TagCodecEnums::TagType TagType = TagCodecEnums::TagType::Varint;

		static inline uint8_t* Encode(uint8_t*& pos, uint8_t value) {
			return Int32Codec::Encode(pos, value);
		}

		static inline uint8_t Decode(const uint8_t*& pos, const uint8_t* max) {
			uint8_t result = static_cast<uint8_t>(Int32Codec::Decode(pos, max));
			return result;
		}

		static inline int Size(uint8_t value) {
			return Int32Codec::Size(value);
		}
	};

} // namespace SRProtobufCPP
