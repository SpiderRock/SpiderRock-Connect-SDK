#pragma once
#ifndef SRPROTOBUF_LONGCODEC_H
#define SRPROTOBUF_LONGCODEC_H

#include "TagCodec.h"
#include "Int64Codec.h"

namespace SRProtobufCPP {

	class LongCodec {
	public:
		static const TagCodecEnums::TagType TagType = TagCodecEnums::TagType::Varint;

		static uint8_t* Encode(uint8_t*& pos, int64_t value) {
			return Int64Codec::Encode(pos, value);
		}

		static int64_t Decode(const uint8_t*& pos, const uint8_t* max) {
			return Int64Codec::Decode(pos, max);
		}

		static int Size(int64_t value) {
			return Int64Codec::Size(value);
		}
	};

} // namespace SRProtobufCPP

#endif // SRPROTOBUF_LONGCODEC_H
