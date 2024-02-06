#pragma once
#ifndef SRPROTOBUF_FIXED32CODEC_H
#define SRPROTOBUF_FIXED32CODEC_H

#include <cstdint>
#include "LittleEndian32Codec.h"
#include "TagCodec.h"

namespace SRProtobufCPP {

	class Fixed32Codec {
	public:
		static const TagCodecEnums::TagType TagType = TagCodecEnums::TagType::Fixed32;

		static uint8_t* Encode(uint8_t*& p, uint32_t value) {
			return LittleEndian32Codec::Encode(p, value);
		}

		static uint32_t Decode(const uint8_t*& pos, const uint8_t* max) {
			return LittleEndian32Codec::Decode(pos, max);
		}

		static void Skip(const uint8_t*& pos, const uint8_t* max) {
			LittleEndian32Codec::Skip(pos, max);
		}

		static int Size(uint32_t value) {
			return LittleEndian32Codec::Size;
		}
	};

} // namespace SRProtobufCPP

#endif // SRPROTOBUF_FIXED32CODEC_H

