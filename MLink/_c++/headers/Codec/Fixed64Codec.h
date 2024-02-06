#pragma once
#ifndef SRPROTOBUF_FIXED64CODEC_H
#define SRPROTOBUF_FIXED64CODEC_H

#include <cstdint>
#include "LittleEndian64Codec.h"
#include "TagCodec.h"

namespace SRProtobufCPP {

	class Fixed64Codec {
	public:
		static const TagCodecEnums::TagType TagType = TagCodecEnums::TagType::Fixed64;

		static uint8_t* Encode(uint8_t*& pos, uint64_t value) {
			return LittleEndian64Codec::Encode(pos, value);
		}

		static uint64_t Decode(const uint8_t*& pos, const uint8_t* max) {
			return LittleEndian64Codec::Decode(pos, max);
		}

		static void Skip(const uint8_t*& pos, const uint8_t* max) {
			LittleEndian64Codec::Skip(pos, max);
		}

		static int Size(uint64_t value) {
			return LittleEndian64Codec::Size;
		}
	};

} // namespace SRProtobufCPP

#endif // SRPROTOBUF_FIXED64CODEC_H
