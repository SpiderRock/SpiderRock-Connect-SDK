#pragma once
#ifndef SRPROTOBUF_DATETIMECODEC_H
#define SRPROTOBUF_DATETIMECODEC_H

#include <cstdint>
#include <chrono>
#include "TagCodec.h"
#include "VarInt32Codec.h"
#include "VarInt64Codec.h"

namespace SRProtobufCPP {

	class DateTimeCodec {
	public:
		static const uint64_t BclSecondsAtUnixEpoch = 62135596800;
		static const int NanosPerTick = 100;
        static const TagCodecEnums::TagType TagType = TagCodecEnums::TagType::LengthDelimited;

		static std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds> Decode(const uint8_t*& pos, const uint8_t* max) {
			int64_t seconds = 0;
			int32_t nanos = 0;
			uint32_t tag;

			while (pos < max && (tag = TagCodec::Decode(pos, max)) != 0) {
				auto tagDecomposed = TagCodec::Decompose(tag);
				switch (tagDecomposed.first) {
				default:
					// log unknown field
					break;

				case 1:
					seconds = static_cast<int64_t>(VarInt64Codec::Decode(pos, max));
					break;
				case 2:
					nanos = static_cast<int32_t>(VarInt32Codec::Decode(pos, max));
					break;
				}
			}

			// Convert the seconds and nanos to std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>
            std::chrono::nanoseconds duration = std::chrono::duration_cast<std::chrono::nanoseconds>(
				std::chrono::seconds(seconds) + std::chrono::nanoseconds(nanos)
				);

			// Construct the std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>
            std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds> epoch; // The epoch of std::chrono::system_clock
			return epoch + duration;
		}


		static int Size(const std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>& value) {
			auto seconds = std::chrono::duration_cast<std::chrono::seconds>(value.time_since_epoch()).count();
			auto nanos = std::chrono::duration_cast<std::chrono::nanoseconds>(value.time_since_epoch()).count() % std::nano::den;

			return TagCodec::Size(1, VarInt64Codec::TagType) +
				VarInt64Codec::Size(static_cast<uint64_t>(seconds)) +
				TagCodec::Size(2, VarInt32Codec::TagType) +
				VarInt32Codec::Size(static_cast<uint32_t>(nanos));
		}

		static uint8_t* Encode(uint8_t*& pos, const std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>& value) {
			auto durationSeconds = std::chrono::duration_cast<std::chrono::seconds>(value.time_since_epoch()).count();
			auto durationNanos = std::chrono::duration_cast<std::chrono::nanoseconds>(value.time_since_epoch()).count() % std::nano::den;

			TagCodec::Encode(pos, 1, VarInt64Codec::TagType);
			VarInt64Codec::Encode(pos, static_cast<uint64_t>(durationSeconds));

			TagCodec::Encode(pos, 2, VarInt32Codec::TagType);
			VarInt32Codec::Encode(pos, static_cast<uint32_t>(durationNanos));
            return pos;
		}
	};

} // namespace SRProtobufCPP

#endif // SRPROTOBUF_DATETIMECODEC_H
