#pragma once
#ifndef SRPROTOBUF_ULONGCODEC_H
#define SRPROTOBUF_ULONGCODEC_H

#include <cstdint>
#include <cstddef>
#include <stdexcept>
#include <utility>
#include "Fixed64Codec.h"

namespace SRProtobufCPP {

	class ULongCodec {
	public:
		static const TagCodecEnums::TagType TagType = TagCodecEnums::TagType::Varint;

		static uint8_t* Encode(uint8_t*& pos, uint64_t value) {
			return VarInt64Codec::Encode(pos, value);
		}

		static uint64_t Decode(const uint8_t*& pos, const uint8_t* max) {
			return VarInt64Codec::Decode(pos, max);
		}

		static int Size(uint64_t value) {
			return VarInt64Codec::Size(value);
		}
	};

} // namespace SRProtobufCPP

#endif // SRPROTOBUF_ULONGCODEC_H
