#pragma once
#ifndef SRPROTOBUF_UINT32CODEC_H
#define SRPROTOBUF_UINT32CODEC_H

#include <cstdint>
#include <cstdlib>
#include "VarInt32Codec.h"

namespace SRProtobufCPP {

	class UInt32Codec {
	public:
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

#endif // SRPROTOBUF_UINT32CODEC_H
