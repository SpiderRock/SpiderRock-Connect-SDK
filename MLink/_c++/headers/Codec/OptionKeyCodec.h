#pragma once
#include "TagCodec.h"
#include "Enums.h"
#include "Skipper.h"
#include "OptionKeyLayout.h"
#include "ExpiryKeyCodec.h"
#include <tuple>
#include <chrono>

namespace SRProtobufCPP {
	class OptionKeyCodec {

	public:
		static const TagCodecEnums::TagType TagType = TagCodecEnums::TagType::LengthDelimited;

		static uint8_t* Encode(uint8_t*& pos, const OptionKeyLayout& value) {
            ExpiryKeyLayout expiryKey = static_cast<ExpiryKeyLayout>(value);

            pos = ExpiryKeyCodec::Encode(pos, expiryKey);
            pos = FieldCodec::EncodeDouble(pos, 5, value.Strike);
            return FieldCodec::EncodeEnum(pos, 6, static_cast<uint8_t>(value.callPut) + 1);
        }


		static OptionKeyLayout Decode(const uint8_t*& pos, const uint8_t* max) {
            AssetType at = AssetType::None;
            TickerSrc ts = TickerSrc::None;
            TickerLayout ticker;
            //DateKeyLayout dkl;
            int year = 0, month = 0, day = 0;
            double strike = 0;
            CallPut cp = CallPut::None;

            while (pos < max) {
                auto tag = TagCodec::Decode(pos, max);
                if (tag == 0)
                    break;

                int fieldNumber;
                TagCodecEnums::TagType tagType;
                std::tie(fieldNumber, tagType) = TagCodec::Decompose(tag);

                switch (fieldNumber) {
                default:
                    Skipper::Skip(pos, tagType, max);
                    // log unknown field
                    break;
                case 1:
                    if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                        at = static_cast<AssetType>(EnumCodec::Decode(pos, max));
                    }
                    break;
                case 2:
                    if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                        ts = static_cast<TickerSrc>(EnumCodec::Decode(pos, max));
                    }
                    break;
                case 3:
                    if (tagType == SRProtobufCPP::StringCodec::TagType) {
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
                case 5:
                    if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                        strike = FieldCodec::DecodeDouble(pos, max);
                    }
                    break;
                case 6:
                    if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                        cp = static_cast<CallPut>(FieldCodec::DecodeEnum(pos, max) - 1);
                    }
                    break;
                }
            }


            return OptionKeyLayout(at, ts, ticker, year, month, day, strike, cp);
        }

		static int Size(const OptionKeyLayout& value) {
            ExpiryKeyLayout expiryKey = static_cast<ExpiryKeyLayout>(value);

            return ExpiryKeyCodec::Size(expiryKey) +
                FieldCodec::DoubleFieldSize(5, value.Strike) +
                FieldCodec::EnumFieldSize(6, static_cast<uint8_t>(value.callPut) + 1);
        }
	};

	
}