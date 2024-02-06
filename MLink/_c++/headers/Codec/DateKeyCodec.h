#pragma once
#ifndef DATEKEYCODEC_H
#define DATEKEYCODEC_H

#include <cstdint>
#include <algorithm>
#include <chrono>
#include <iostream>
#include "DateKeyLayout.h"
#include "TagCodec.h"
#include "IntCodec.h"


namespace SRProtobufCPP {

	class DateKeyCodec {

    public:
		static const TagCodecEnums::TagType TagType = TagCodecEnums::TagType::LengthDelimited;
        static uint8_t* Encode(uint8_t*& pos, int year, int month, int day) {
           
            pos = TagCodec::Encode(pos, 1, IntCodec::TagType);
            pos = IntCodec::Encode(pos, year);
            pos = TagCodec::Encode(pos, 2, IntCodec::TagType);
            pos = IntCodec::Encode(pos, month);
            pos = TagCodec::Encode(pos, 3, IntCodec::TagType);
            pos = IntCodec::Encode(pos, day);         

            return pos;
        }

	    static DateKeyLayout Decode(const uint8_t*& pos, const uint8_t* max) {
            uint32_t tag;
            int year = 0, month = 0, day = 0;
            while (pos < max && (tag = TagCodec::Decode(pos, max)) != 0) {
                auto tagDecomposed = TagCodec::Decompose(tag);
                switch (tagDecomposed.first) {
                default:
                    // log unknown field
                    Skipper::Skip(pos, tagDecomposed.second, max);
                    break;

                case 1:
                    if (tagDecomposed.second == IntCodec::TagType) {
                        year = IntCodec::Decode(pos, max);
                    }
                    break;
                case 2:
                    if (tagDecomposed.second == IntCodec::TagType) {
                        month = IntCodec::Decode(pos, max);
                    }
                    break;
                case 3:
                    if (tagDecomposed.second == IntCodec::TagType) {
                        day = IntCodec::Decode(pos, max);
                    }
                    break;
                }
            }

            return DateKeyLayout(year, month, day);

        }

        static int Size(int year, int month, int day) {
            int size =  TagCodec::Size(1, IntCodec::TagType) +
                IntCodec::Size(year) +
                TagCodec::Size(2, IntCodec::TagType) +
                IntCodec::Size(month) +
                TagCodec::Size(3, IntCodec::TagType) +
                IntCodec::Size(day);
            return size;
        }

	};
}

#endif // DATEKEYCODEC_H
