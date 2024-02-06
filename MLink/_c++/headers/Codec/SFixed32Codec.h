#pragma once
#include <cstdint>
#include "TagCodec.h"
#include "LittleEndian32Codec.h"

namespace SRProtobufCPP {

	class SFixed32Codec {
	public:
		using TagType = TagCodec::TagType;

		static uint8_t* Encode(uint8_t*& pos, int value) {
			return LittleEndian32Codec::Encode(pos, static_cast<uint32_t>(value));
		}

		static int Decode(const uint8_t*& pos, const uint8_t* max) {
			return static_cast<int>(LittleEndian32Codec::Decode(pos, max));
		}

		static void Skip(const uint8_t*& pos, const uint8_t* max) {
			LittleEndian32Codec::Skip(pos, max);
		}

		static int Size(int value) {
			return LittleEndian32Codec::Size;
		}
	};

} // namespace SRProtobufCPP
