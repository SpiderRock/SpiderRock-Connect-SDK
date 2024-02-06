#pragma once
#ifndef SRPROTOBUF_SHORTCODEC_H
#define SRPROTOBUF_SHORTCODEC_H

#include "TagCodec.h"
#include "Int32Codec.h"
#include <cstdint>

namespace SRProtobufCPP {

	class ShortCodec {
	public:
		static const TagCodecEnums::TagType TagType = TagCodecEnums::TagType::Varint;

		static uint8_t* Encode(uint8_t*& pos, short value) {
			return Int32Codec::Encode(pos, value);
		}

		static short Decode(const uint8_t*& pos, const uint8_t* max) {
			return static_cast<short>(Int32Codec::Decode(pos, max));
		}

		static int Size(short value) {
			return Int32Codec::Size(value);
		}
	};

} // namespace SRProtobufCPP

#endif // SRPROTOBUF_SHORTCODEC_H
