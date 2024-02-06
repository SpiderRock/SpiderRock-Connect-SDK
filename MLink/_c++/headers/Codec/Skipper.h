#pragma once
#ifndef SRPROTOBUF_SKIPPER_H
#define SRPROTOBUF_SKIPPER_H

#include "TagCodec.h"
#include "VarInt64Codec.h"
#include "Fixed64Codec.h"
#include "LengthCodec.h"
#include "Fixed32Codec.h"
#include <stdexcept>

namespace SRProtobufCPP {
    using namespace TagCodecEnums;

	class Skipper {
	public:
		static void Skip(const uint8_t*& pos, TagType tagType, const uint8_t* max) {
			switch (tagType) {
			case TagType::Varint:
				VarInt64Codec::Skip(pos, max);
				break;
			case TagType::Fixed64:
				Fixed64Codec::Skip(pos, max);
				break;
			case TagType::LengthDelimited:
			{
				int length = LengthCodec::Decode(pos, max);
				if (pos + length > max)
					throw std::runtime_error("Indexed out of bounds");
				pos += length;
			}
			break;
			case TagType::StartGroup:
			case TagType::EndGroup:
				throw std::runtime_error("Unable to handle deprecated tag type");
			case TagType::Fixed32:
				Fixed32Codec::Skip(pos, max);
				break;
			default:
				throw std::runtime_error("Unrecognized tag type");
			}
		}
	};

} // namespace SRProtobufCPP

#endif // SRPROTOBUF_SKIPPER_H
