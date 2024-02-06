#pragma once
#ifndef SRPROTOBUF_VARLENGTHSTRINGCODEC_H
#define SRPROTOBUF_VARLENGTHSTRINGCODEC_H

#include <cstdint>
#include <cstring>

#include "TagCodec.h"

namespace SRProtobufCPP {

	template <typename T, size_t maxLength>
	class VarLengthStringCodec {
	public:
		explicit VarLengthStringCodec() {}

		static const TagCodecEnums::TagType TagType = TagCodecEnums::TagType::LengthDelimited;

		uint8_t* Encode(uint8_t*& pos, const T& value) {
			auto length = value.Length();
			std::memcpy(pos, value.Data(), length);
			return pos + length;
		}

		void Decode(const uint8_t*& pos, T& target, int length) {
			if (length > (int)maxLength) {
				throw std::runtime_error("Decoded string length exceeds maximum allowed length.");
			}

			target.SetLength(length);
			std::memcpy(target.MutableData(), pos, length);
			pos += length;
		}

		int Size(const T& value) const {
			return value.Length();
		}
	};

} // namespace SRProtobufCPP

#endif // SRPROTOBUF_VARLENGTHSTRINGCODEC_H
