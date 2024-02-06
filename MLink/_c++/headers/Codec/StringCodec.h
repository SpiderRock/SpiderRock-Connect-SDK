#pragma once
#ifndef SRPROTOBUF_STRINGCODEC_H
#define SRPROTOBUF_STRINGCODEC_H

#include <cstdint>
#include <string>
#include <cstring>
#include "TagCodec.h"

namespace SRProtobufCPP {

	class StringCodec {
	public:
		static const TagCodecEnums::TagType TagType = TagCodecEnums::TagType::LengthDelimited;

		static uint8_t* Encode(uint8_t*& pos, const std::string& value) {
			std::memcpy(pos, value.data(), value.size());
			return pos + value.size();
		}

		template <typename T>
		static size_t Encode(uint8_t*& pos, const T& value) {
			return value.CopyTo(pos);
		}

		static std::string Decode(const uint8_t*& pos, int length) {
			std::string res(reinterpret_cast<const char*>(pos), length);
			pos += length;
			return res;
		}

		template <typename T>
		static T Decode(const uint8_t*& pos, int length) {
			T target;
			target.CopyFrom(pos, length);
			pos += length;
			return target;
		}

		template <typename T>
		static void Decode(const uint8_t*& pos, T& target, int length) {
			target.CopyFrom(pos, length);
			pos += length;
		}

		
		template <typename T>
		static int Size(const T& value) {
			return static_cast<int>(value.size()); 
		}
		
		static int Size(const std::string& value) {
			return static_cast<int>(value.size());
		}
	};

} // namespace SRProtobufCPP

#endif // SRPROTOBUF_STRINGCODEC_H
