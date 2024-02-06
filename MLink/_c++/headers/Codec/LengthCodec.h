#pragma once
#ifndef SRPROTOBUF_LENGTHCODEC_H
#define SRPROTOBUF_LENGTHCODEC_H

#include <cstdint>
#include "VarInt32Codec.h"

namespace SRProtobufCPP {

	class LengthCodec {
	public:
		static uint8_t* Encode(uint8_t*& pos, int value) {
			return VarInt32Codec::Encode(pos, static_cast<uint32_t>(value));
		}

		static int Decode(const uint8_t*& pos, const uint8_t* max) {
			return static_cast<int>(VarInt32Codec::Decode(pos, max));
		}

		static int Size(int value) {
			return VarInt32Codec::Size(static_cast<uint32_t>(value));
		}
	};

} // namespace SRProtobufCPP

#endif // SRPROTOBUF_LENGTHCODEC_H

