#pragma once
#pragma once

#ifndef SRPROTOBUF_VARINT64CODEC_H
#define SRPROTOBUF_VARINT64CODEC_H

#include "TagCodec.h"
#include <stdexcept>

namespace SRProtobufCPP {

	class VarInt64Codec {
	public:
		static const TagCodecEnums::TagType TagType = TagCodecEnums::TagType::Varint;

		static uint8_t* Encode(uint8_t*& p, uint64_t value) {
			while (value > 127) {
				*p++ = static_cast<uint8_t>((value & 0x7F) | 0x80);
				value >>= 7;
			}
			*p++ = static_cast<uint8_t>(value);
			return p;
		}

		static uint64_t Decode(const uint8_t*& pos, const uint8_t* max) {
			if (pos + 10 > max) {
				return ParseRawVarint64SlowPath(pos, max);
			}

			uint64_t result = *pos++;
			if (result < 128) {
				return result;
			}
			result &= 0x7f;
			int shift = 7;
			do {
				uint8_t b = *pos++;
				result |= static_cast<uint64_t>(b & 0x7F) << shift;
				if (b < 0x80) {
					return result;
				}
				shift += 7;
			} while (shift < 64);

			throw std::runtime_error("Unable to parse VarInt64Codec.Decode");
		}

		static void Skip(const uint8_t*& pos, const uint8_t* max) {
			Decode(pos, max);
		}

		static int Size(uint64_t value) {
			if ((value & (0xffffffffffffffffull << 7)) == 0) {
				return 1;
			}
			if ((value & (0xffffffffffffffffull << 14)) == 0) {
				return 2;
			}
			if ((value & (0xffffffffffffffffull << 21)) == 0) {
				return 3;
			}
			if ((value & (0xffffffffffffffffull << 28)) == 0) {
				return 4;
			}
			if ((value & (0xffffffffffffffffull << 35)) == 0) {
				return 5;
			}
			if ((value & (0xffffffffffffffffull << 42)) == 0) {
				return 6;
			}
			if ((value & (0xffffffffffffffffull << 49)) == 0) {
				return 7;
			}
			if ((value & (0xffffffffffffffffull << 56)) == 0) {
				return 8;
			}
			if ((value & (0xffffffffffffffffull << 63)) == 0) {
				return 9;
			}
			return 10;
		}

	private:
		static uint64_t ParseRawVarint64SlowPath(const uint8_t*& pos, const uint8_t* max) {
			int shift = 0;
			uint64_t result = 0;
			do {
				uint8_t b = *pos++;
				result |= static_cast<uint64_t>(b & 0x7F) << shift;
				if (b < 0x80) {
					return result;
				}
				shift += 7;
			} while (shift < 64);

			throw std::runtime_error("Unable to parse VarInt64Codec.Decode");
		}
	};

} // namespace SRProtobufCPP

#endif // SRPROTOBUF_VARINT64CODEC_H
