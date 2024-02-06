#pragma once
#include <cstdint>
#include "VarInt64Codec.h"

namespace SRProtobufCPP {

	class Int64Codec {
	public:
		static const TagCodecEnums::TagType TagType = TagCodecEnums::TagType::Varint;

		static uint8_t* Encode(uint8_t*& pos, int64_t value) {
			return VarInt64Codec::Encode(pos, static_cast<uint64_t>(value));
		}

		static int64_t Decode(const uint8_t*& pos, const uint8_t* max) {
			return static_cast<int64_t>(VarInt64Codec::Decode(pos, max));  
		}

		static int Size(int64_t value) {
			return VarInt64Codec::Size(static_cast<uint64_t>(value));
		}
	};

} // namespace SRProtobufCPP
