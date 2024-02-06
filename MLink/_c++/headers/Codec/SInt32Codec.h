#pragma once
#ifndef SRPROTOBUF_SINT32CODEC_H
#define SRPROTOBUF_SINT32CODEC_H

#include <cstdint>
#include <cstdlib>
#include "VarInt32Codec.h"

namespace SRProtobufCPP {

	class SInt32Codec {
	public:
		static uint32_t EncodeZigZag32(int32_t n) {
			return static_cast<uint32_t>((n << 1) ^ (n >> 31));
		}

		static int32_t DecodeZigZag32(uint32_t n) {
			return static_cast<int32_t>((n >> 1) ^ -static_cast<int32_t>(n & 1));			
		}

		static uint8_t* Encode(uint8_t*& pos, int32_t value) {
			return VarInt32Codec::Encode(pos, EncodeZigZag32(value));
		}

		static int32_t Decode(const uint8_t*& pos, const uint8_t* max) {
			return DecodeZigZag32(VarInt32Codec::Decode(pos, max));
		}

		static int Size(int32_t value) {
			return VarInt32Codec::Size(EncodeZigZag32(value));
		}
	};

} // namespace SRProtobufCPP

#endif // SRPROTOBUF_SINT32CODEC_H
