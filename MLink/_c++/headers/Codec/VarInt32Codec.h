#pragma once
#ifndef SRPROTOBUF_VARINT32CODEC_H
#define SRPROTOBUF_VARINT32CODEC_H

#include <cstdint>
#include <stdexcept>

#include "TagCodecEnums.h"

namespace SRProtobufCPP {


	class VarInt32Codec {
	public:
		static const TagCodecEnums::TagType TagType = TagCodecEnums::TagType::Varint;

		static unsigned char* Encode(uint8_t*& pos, uint32_t value) {
			while (value > 127) {
				*pos++ = static_cast<uint8_t>((value & 0x7F) | 0x80);
				value >>= 7;
			}
			*pos++ = static_cast<uint8_t>(value);
			return pos;
		}

		static uint32_t Decode(const uint8_t*& pos, const uint8_t* max) {
			int tmp = *pos++;
			if (tmp < 128) {
				return static_cast<uint32_t>(tmp);
			}
			int result = tmp & 0x7F;
			if ((tmp = *pos++) < 128) {
				result |= tmp << 7;
			}
			else {
				result |= (tmp & 0x7F) << 7;
				if ((tmp = *pos++) < 128) {
					result |= tmp << 14;
				}
				else {
					result |= (tmp & 0x7F) << 14;
					if ((tmp = *pos++) < 128) {
						result |= tmp << 21;
					}
					else {
						result |= (tmp & 0x7F) << 21;
						result |= (tmp = *pos++) << 28;
						if (tmp >= 128) {
							// Discard upper 32 bits.
							// Note that this has to use ReadRawByte() as we only ensure we've
							// got at least 5 bytes at the start of the method. This lets us
							// use the fast path in more cases, and we rarely hit this section of code.
							for (int i = 0; i < 5; i++) {
								if (*pos++ < 128) {
									return static_cast<uint32_t>(result);
								}
							}
							throw std::runtime_error("Unable to parse VarInt32Codec.Decode");
						}
					}
				}
			}
			return static_cast<uint32_t>(result);
		}

		static int Size(uint32_t value) {
			if ((value & (0xFFFFFFFF << 7)) == 0) {
				return 1;
			}
			if ((value & (0xFFFFFFFF << 14)) == 0) {
				return 2;
			}
			if ((value & (0xFFFFFFFF << 21)) == 0) {
				return 3;
			}
			if ((value & (0xFFFFFFFF << 28)) == 0) {
				return 4;
			}
			return 5;
		}
	};

} // namespace SRProtobufCPP

#endif // SRPROTOBUF_VARINT32CODEC_H
