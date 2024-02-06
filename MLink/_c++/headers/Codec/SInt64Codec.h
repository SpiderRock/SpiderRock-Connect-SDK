#pragma once
#ifndef SRPROTOBUF_SINT64CODEC_H
#define SRPROTOBUF_SINT64CODEC_H

#include <cstdint>
#include <cstdlib>
#include "VarInt64Codec.h"

namespace SRProtobufCPP {

	class SInt64Codec {
	public:
		static uint64_t EncodeZigZag64(int64_t n) {
			return static_cast<uint64_t>((n << 1) ^ (n >> 63));
		}

		static int64_t DecodeZigZag64(uint64_t n) {
			return static_cast<int64_t>((n >> 1) ^ -static_cast<int64_t>(n & 1));			
		}

		static uint8_t* Encode(uint8_t*& pos, int64_t value) {
			return VarInt64Codec::Encode(pos, EncodeZigZag64(value));
		}

		static int64_t Decode(const uint8_t*& pos, const uint8_t* max) {
			return DecodeZigZag64(VarInt64Codec::Decode(pos, max));
		}

		static int Size(int64_t value) {
			return VarInt64Codec::Size(EncodeZigZag64(value));
		}
	};

} // namespace SRProtobufCPP

#endif // SRPROTOBUF_SINT64CODEC_H
