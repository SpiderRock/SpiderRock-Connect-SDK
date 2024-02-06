#pragma once
#ifndef FLAGCODEC_H
#define FLAGCODEC_H

#include <cstdint>
#include "Int32Codec.h"
#include "TagCodec.h"

namespace SRProtobufCPP {

	class FlagCodec {
	public:
		static const TagCodecEnums::TagType TagType = Int32Codec::TagType;

		static uint8_t* Encode(uint8_t*& pos, uint8_t value) {
			return Int32Codec::Encode(pos, static_cast<int>(value));
		}

		static uint8_t Decode(const uint8_t*& pos, const uint8_t* max) {
			return static_cast<uint8_t>(Int32Codec::Decode(pos, max));
		}

		static int Size(int value) {
			return Int32Codec::Size(value);
		}
	};
}

#endif // FLAGCODEC_H
