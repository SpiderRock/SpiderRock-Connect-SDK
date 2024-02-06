#pragma once
#ifndef SRPROTOBUF_UINTCODEC_H
#define SRPROTOBUF_UINTCODEC_H

#include <cstdint>
#include <cstddef>
#include <stdexcept>
#include <utility>
#include "Fixed32Codec.h"

namespace SRProtobufCPP {

	class UIntCodec {
	public:
		static const TagCodecEnums::TagType TagType = TagCodecEnums::TagType::Varint;

		static uint8_t* Encode(uint8_t*& pos, uint32_t value) {
			return VarInt32Codec::Encode(pos, value);
		}

		static uint32_t Decode(const uint8_t*& pos, const uint8_t* max) {
			return VarInt32Codec::Decode(pos, max);
		}

		static int Size(uint32_t value) {
			return VarInt32Codec::Size(value);
		}
	};

} // namespace SRProtobufCPP

#endif // SRPROTOBUF_UINTCODEC_H
