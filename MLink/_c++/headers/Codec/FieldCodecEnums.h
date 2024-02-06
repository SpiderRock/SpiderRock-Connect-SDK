#pragma once

#include <cstdint>
#include "FieldCodec.h"

namespace SRProtobufCPP {

	enum class TagType : std::uint8_t {
		LengthDelimited = 0, // Use appropriate value here according to your requirements
		// Add other tag types if needed
	};
	class FieldCodecUtils {
	public:
		static uint8_t* EncodeString(uint8_t*& pos, int fieldNumber, const std::string& value) {
			// Encode the string field using length-delimited format.
			pos = FieldCodec::EncodeEnum(pos, fieldNumber, static_cast<std::uint8_t>(StringCodec::TagType));
			pos = LengthCodec::Encode(pos, value.size());
			std::memcpy(pos, value.data(), value.size());
			return pos + value.size();
		}

		static int FieldSize(int fieldNumber, const std::string& value) {
			// Calculate the size of the string field.
			return FieldCodec::EnumFieldSize(fieldNumber, static_cast<std::uint8_t>(StringCodec::TagType)) +
				LengthCodec::Size(value.size()) +
				value.size();
		}
	};

	class FieldCodecEnums {
	public:
		static uint8_t* Encode(uint8_t*& pos, int fieldNumber, std::uint8_t value) {
			// Encode the enum value as a varint.
			return FieldCodec::EncodeEnum(pos, fieldNumber, value);
		}

		static std::uint8_t Decode(const uint8_t*& pos, const uint8_t* max) {
			// Decode the varint and return the enum value.
			return FieldCodec::DecodeEnum(pos, max);
		}

		static int FieldSize(int fieldNumber, std::uint8_t value) {
			// Calculate the size of the enum field.
			return FieldCodec::EnumFieldSize(fieldNumber, value);
		}
	};

} // namespace SRProtobufCPP
