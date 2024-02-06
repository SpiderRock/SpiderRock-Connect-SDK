#pragma once
#ifndef TICKERKEYCODEC_H
#define TICKERKEYCODEC_H

#include <cstdint>
#include <vector>
#include "TagCodec.h"
#include "Skipper.h"
#include "TickerKeyLayout.h"
#include "FieldCodec1.h"


namespace SRProtobufCPP {

	class TickerKeyCodec {
	private:

	public:
		static const TagCodecEnums::TagType TagType = TagCodecEnums::TagType::LengthDelimited;

		static uint8_t* Encode(uint8_t*& pos, const TickerKeyLayout& value) {
            pos = FieldCodec::EncodeEnum(pos, 1, static_cast<uint8_t>(value.assetType));
            pos = FieldCodec::EncodeEnum(pos, 2, static_cast<uint8_t>(value.tickerSrc));
            pos = FieldCodec::EncodeString(pos, 3, value.ticker);
            return pos;
        }


		static TickerKeyLayout Decode(const uint8_t*& pos, const uint8_t* max) {
            AssetType at = AssetType::None;
            TickerSrc ts = TickerSrc::None;
            TickerLayout ticker;
            uint32_t tag;

            while (pos < max && (tag = TagCodec::Decode(pos, max)) != 0) {
                int fieldNumber;
                TagCodecEnums::TagType tagType;
                auto tagDecomposed = TagCodec::Decompose(tag);
                fieldNumber = tagDecomposed.first;
                tagType = tagDecomposed.second;
                switch (fieldNumber) {
                default:
                    Skipper::Skip(pos, tagType, max);
                    // log unknown field
                    break;
                case 1:
                    at = static_cast<AssetType>(FieldCodec::DecodeEnum(pos, max));
                    break;
                case 2:
                    ts = static_cast<TickerSrc>(FieldCodec::DecodeEnum(pos, max));
                    break;
                case 3:
                    ticker = FieldCodec::DecodeString<TickerLayout>(pos, max);
                    break;
                }
            }

            return TickerKeyLayout(at, ts, ticker);
        }


		static int Size(const TickerKeyLayout& value) {
            return FieldCodec::EnumFieldSize(1, static_cast<uint8_t>(value.assetType)) +
                FieldCodec::EnumFieldSize(2, static_cast<uint8_t>(value.tickerSrc)) +
                FieldCodec::StringFieldSize(3, value.ticker.toString());
        }
	};

} // namespace SRProtobufCPP

#endif // TICKERKEYCODEC_H
