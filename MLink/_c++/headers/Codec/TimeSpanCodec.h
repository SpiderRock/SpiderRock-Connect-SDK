#ifndef SRPROTOBUF_TIMESPANCODEC_H
#define SRPROTOBUF_TIMESPANCODEC_H

#include <cstdint>
#include <cstddef>
#include <stdexcept>
#include <utility>
#include <chrono>
#include "TagCodec.h"
#include "Int64Codec.h"
#include "Int32Codec.h"
#include "LengthCodec.h"

namespace SRProtobufCPP {

	class TimeSpanCodec {
	public:
		static const TagCodecEnums::TagType TagType = TagCodecEnums::TagType::LengthDelimited;
		static const int NanosPerTick = 100;

		static uint8_t* Encode(uint8_t*& pos, const std::chrono::nanoseconds &value) {
            auto seconds = std::chrono::duration_cast<std::chrono::seconds>(value).count();
            auto nanos = std::chrono::duration_cast<std::chrono::nanoseconds>(value).count() % std::nano::den;

			pos = TagCodec::Encode(pos, 1, Int64Codec::TagType);
			pos = Int64Codec::Encode(pos, seconds);

			pos = TagCodec::Encode(pos, 2, Int32Codec::TagType);
			pos = Int32Codec::Encode(pos, (int32_t)nanos);
			return pos;
		}

		static std::chrono::nanoseconds Decode(const uint8_t*& pos, const uint8_t* max) {
			long long seconds = 0;
			int nanos = 0;
			uint32_t tag;
			while (pos < max && (tag = TagCodec::Decode(pos, max)) != 0) {
				std::pair<uint32_t, TagCodecEnums::TagType> tagInfo = Decompose(tag);
				uint32_t fieldNumber = tagInfo.first;
                TagCodecEnums::TagType tagType = tagInfo.second;
				switch (fieldNumber) {
				default:
					// log unknown field
					break;

				case 1:
					if (tagType == Int64Codec::TagType) {
						seconds = Int64Codec::Decode(pos, max);
					}
					break;
				case 2:
					if (tagType == Int32Codec::TagType) {
						nanos = Int32Codec::Decode(pos, max);
					}
					break;
				}
			}

            std::chrono::nanoseconds duration = std::chrono::duration_cast<std::chrono::nanoseconds>(
                std::chrono::seconds(seconds) + std::chrono::nanoseconds(nanos)
                );
            return duration;
		}

		static int Size(std::chrono::nanoseconds value) {
            auto seconds = std::chrono::duration_cast<std::chrono::seconds>(value).count();
            auto nanos = std::chrono::duration_cast<std::chrono::nanoseconds>(value).count() % std::nano::den;
            return TagCodec::Size(1, Int64Codec::TagType) +
				Int64Codec::Size(seconds) +
				TagCodec::Size(2, Int32Codec::TagType) +
				Int32Codec::Size((int32_t)nanos);
		}

	private:
		static std::pair<uint32_t, TagCodecEnums::TagType> Decompose(uint32_t tag) {
			return { tag >> 3, static_cast<TagCodecEnums::TagType>(tag & 0x07) };
		}
	};

} // namespace SRProtobufCPP

#endif // SRPROTOBUF_TIMESPANCODEC_H
