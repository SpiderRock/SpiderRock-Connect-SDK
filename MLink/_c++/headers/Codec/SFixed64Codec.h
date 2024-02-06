#pragma once
#include <cstdint>
#include "TagCodec.h"
#include "LittleEndian64Codec.h"

namespace SRProtobufCPP {

	class SFixed64Codec {
	public:
		using TagType = TagCodec::TagType;

		static uint8_t* Encode(uint8_t*& pos, long value) {
			return LittleEndian64Codec::Encode(pos, static_cast<uint64_t>(value));
		}

		static long Decode(const uint8_t*& pos, const uint8_t* max) {
			return static_cast<long>(LittleEndian64Codec::Decode(pos, max));
		}

		static void Skip(const uint8_t*& pos, const uint8_t* max) {
			LittleEndian64Codec::Skip(pos, max);
		}

		static int Size(long value) {
			return LittleEndian64Codec::Size;
		}
	};

} // namespace SRProtobufCPP
