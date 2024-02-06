#pragma once
#ifndef SRPROTOBUF_USHORTCODEC_H
#define SRPROTOBUF_USHORTCODEC_H

#include <cstdint>
#include <cstddef>
#include <stdexcept>
#include <utility>
#include <algorithm>

#include "TagCodec.h"
#include "VarInt32Codec.h"

namespace SRProtobufCPP {

	class UShortCodec {
	public:
		static const TagCodecEnums::TagType TagType = TagCodecEnums::TagType::Varint;

		static uint8_t* Encode(uint8_t*& pos, uint16_t value) {
			return VarInt32Codec::Encode(pos, value);
		}

		static uint16_t Decode(const uint8_t*& pos, const uint8_t* max) {
			return static_cast<uint16_t>(VarInt32Codec::Decode(pos, max));
		}

		static int Size(uint16_t value) {
			return VarInt32Codec::Size(value);
		}
	};

} // namespace SRProtobufCPP

#endif // SRPROTOBUF_USHORTCODEC_H
