#pragma once

#include <cstdint>
#include <chrono>
#include "TickerKeyCodec.h"
#include "ExpiryKeyLayout.h"
#include "DateKeyLayout.h"

namespace SRProtobufCPP {

	class ExpiryKeyCodec {

	public:
        static const TagCodecEnums::TagType TagType = TagCodecEnums::TagType::LengthDelimited;  
				
		static uint8_t* Encode(uint8_t*& pos, const ExpiryKeyLayout& value) {
            TickerKeyLayout tickerKey(value.assetType, value.tickerSrc, value.ticker);
            pos = TickerKeyCodec::Encode(pos, tickerKey);
            return FieldCodec::EncodeDateKey(pos, 4, value.year, value.month, value.day);
        }

		static ExpiryKeyLayout Decode(const uint8_t*& pos, const uint8_t* max) {
            AssetType at = AssetType::None;
            TickerSrc ts = TickerSrc::None;
            TickerLayout ticker;

            uint32_t tag;
            int year = 0, month = 0, day = 0;

            while (pos < max && (tag = TagCodec::Decode(pos, max)) != 0) {
                int fieldNumber;
                TagCodecEnums::TagType tagType;
                auto tagDecomposed = TagCodec::Decompose(tag);
                fieldNumber = tagDecomposed.first;
                tagType = tagDecomposed.second;
                switch (fieldNumber) {
                default:
                    Skipper::Skip(pos, tagType, max);
                    //log unknown field
                    break;
                case 1: 
                    if (tagType == EnumCodec::TagType) {
                        at = static_cast<AssetType>(EnumCodec::Decode(pos, max));
                    }
                    break;
                case 2: 
                    if (tagType == EnumCodec::TagType) {
                        ts = static_cast<TickerSrc>(EnumCodec::Decode(pos, max));
                    }
                    break;
                case 3: 
                    if (tagType == StringCodec::TagType) {
                        ticker = FieldCodec::DecodeString<TickerLayout>(pos, max);
                    }
                    break;
                case 4:
                    if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                        DateKeyLayout dkl(FieldCodec::DecodeDateKey(pos, max));
                        year = dkl.year();
                        month = dkl.month();
                        day = dkl.day();
                    }
                    break;
                }

            }

            return ExpiryKeyLayout(at, ts, ticker, year, month, day);
        }

		static int Size(const ExpiryKeyLayout& value) {
            TickerKeyLayout tickerKey(value.assetType, value.tickerSrc, value.ticker);
            return TickerKeyCodec::Size(tickerKey) +
                FieldCodec::DateKeyFieldSize(4, value.year, value.month, value.day);
        }
	};	

} // namespace SRProtobufCPP
