#pragma once

#ifndef TAGCODEC_H
#define TAGCODEC_H

#include <cstdint>
#include <vector>
#include "VarInt32Codec.h"
#include "TagCodecEnums.h"


namespace SRProtobufCPP {
    using namespace TagCodecEnums;

	class VarInt32Codec; 
	class TagCodec {
	private:
		static const int TagTypeBits = 3;
		static const uint32_t TagTypeMask = (1 << TagTypeBits) - 1;
	public:

        // TagType enumeration definition
		static uint32_t Size(int fieldNumber, TagType type = TagType::Varint) {
            return VarInt32Codec::Size(MakeTag(fieldNumber, type));
        }

		static uint32_t MakeTag(int fieldNumber, TagType wireType) {
            return static_cast<uint32_t>(fieldNumber << static_cast<uint32_t>(TagCodec::TagTypeBits)) | static_cast<uint32_t>(wireType);
        }

		static unsigned char* Encode(unsigned char*& pos, int fieldNumber, TagType type) {
            return VarInt32Codec::Encode(pos, MakeTag(fieldNumber, type));
        }

		static unsigned char* Encode(unsigned char*& pos, unsigned char rawTag) {
            return VarInt32Codec::Encode(pos, static_cast<uint32_t>(rawTag));
        }

		static uint32_t Decode(const unsigned char*& pos, const unsigned char* max) {
            uint32_t tag = 0;
            if (pos + 2 <= max) {
                auto val = *pos++;
                if (val < 128) {
                    tag = static_cast<uint32_t>(val);
                }
                else {
                    int result = val & 0x7F;
                    if ((val = *pos++) < 128) {
                        result |= val << 7;
                        tag = static_cast<uint32_t>(result);
                    }
                    else {
                        pos -= 2;
                        tag = VarInt32Codec::Decode(pos, max);

                    }
                }
            }
            else {
                tag = VarInt32Codec::Decode(pos, max);

            }
            return tag;
        }

		static TagType GetTagWireType(uint32_t tag) {
            return static_cast<TagType>(tag & static_cast<uint32_t>(TagCodec::TagTypeMask));
        }

		static int GetTagFieldNumber(uint32_t tag) {
            return static_cast<int>(tag >> static_cast<uint32_t>(TagCodec::TagTypeBits));
        }

		static std::pair<int, TagType> Decompose(uint32_t tag) {
            return std::make_pair(GetTagFieldNumber(tag), GetTagWireType(tag));
        }
	};


}

#endif // TAGCODEC_H

#pragma once
