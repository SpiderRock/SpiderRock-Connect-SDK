#pragma once

#include "VarInt32Codec.h" 
namespace SRProtobufCPP
{
	class Int32Codec {
	public:

		static const TagCodecEnums::TagType TagType = TagCodecEnums::TagType::Varint;		

		static inline uint8_t* Encode(uint8_t*& pos, std::int32_t value) {
            if (value >= 0)
            {
                return VarInt32Codec::Encode(pos, value);
            }
            // Must sign-extend.
            return VarInt64Codec::Encode(pos, value);
        }
		
		static inline std::int32_t Decode(const uint8_t*& pos, const uint8_t* max) {			
			return VarInt32Codec::Decode(pos, max);
		}

		static inline int Size(std::int32_t value) {
            if (value >= 0)
            {
                return VarInt32Codec::Size(value);
            }

            return VarInt64Codec::Size(value);
        }
	};
}
