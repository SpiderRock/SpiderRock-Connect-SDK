#pragma once
#include "TagCodec.h"
#include "ByteCodec.h"
#include "BoolCodec.h"
#include "DoubleCodec.h"
#include "EnumCodec.h"
#include "UShortCodec.h"
#include "ULongCodec.h"
#include "UIntCodec.h"
#include "DateTimeCodec.h"
#include "TimeSpanCodec.h"
#include "Text1Codec.h"
#include "Text2Codec.h"
#include "ShortCodec.h"
#include "LongCodec.h"
#include "FloatCodec.h"
#include "FlagCodec.h"
#include "DateKeyCodec.h"
#include "StringCodec.h"
#include "TagCodec.h"
#include "TickerKeyLayout.h"
#include "DateKeyLayout.h"
#include "ExpiryKeyLayout.h"
#include "OptionKeyLayout.h"
#include "IntCodec.h"
#include "MessageMetadata.h"
#include <iostream>
#include <algorithm>

namespace SRProtobufCPP {

    namespace FieldCodec {
        static uint8_t* EncodeEnum(uint8_t*& pos, int fieldNumber, uint8_t value) {
            pos = TagCodec::Encode(pos, fieldNumber, EnumCodec::TagType);
            return EnumCodec::Encode(pos, value);
        }

        static uint8_t DecodeEnum(const uint8_t*& pos, const uint8_t* max) {
            return EnumCodec::Decode(pos, max);
        }

        static int EnumFieldSize(int fieldNumber, uint8_t value) {
            return TagCodec::Size(fieldNumber) + EnumCodec::Size(value);
        }

        static inline uint8_t* EncodeByte(uint8_t*& pos, int fieldNumber, uint8_t value) {
            pos = TagCodec::Encode(pos, fieldNumber, ByteCodec::TagType);
            return ByteCodec::Encode(pos, value);
        }

        static inline uint8_t DecodeByte(const uint8_t*& pos, const uint8_t* max) {
            return ByteCodec::Decode(pos, max);
        }

        static inline int ByteFieldSize(int fieldNumber, uint8_t value) {
            return TagCodec::Size(fieldNumber) + ByteCodec::Size(value);
        }
        static inline uint8_t* EncodeBool(uint8_t*& pos, int fieldNumber, bool value) {
            pos = TagCodec::Encode(pos, fieldNumber, BoolCodec::TagType);
            return BoolCodec::Encode(pos, value);
        }

        static inline bool DecodeBool(const uint8_t*& pos, const uint8_t* max) {
            return BoolCodec::Decode(pos, max);
        }

        static inline int BoolFieldSize(int fieldNumber, bool value) {
            return TagCodec::Size(fieldNumber, TagCodecEnums::TagType::Varint) + BoolCodec::Size;
        }

        static inline uint8_t* EncodeDouble(uint8_t*& pos, int fieldNumber, double value) {
            pos = TagCodec::Encode(pos, fieldNumber, DoubleCodec::TagType);
            return DoubleCodec::Encode(pos, value);
        }

        static inline double DecodeDouble(const uint8_t*& pos, const uint8_t* max) {
            return DoubleCodec::Decode(pos, max);
        }

        static inline int DoubleFieldSize(int fieldNumber, double value) {
            return TagCodec::Size(fieldNumber) + DoubleCodec::Size;
        }

        static inline uint8_t* EncodeUShort(uint8_t*& pos, int fieldNumber, uint16_t value) {
            pos = TagCodec::Encode(pos, fieldNumber, UShortCodec::TagType);
            return UShortCodec::Encode(pos, value);
        }

        static inline uint16_t DecodeUShort(const uint8_t*& pos, const uint8_t* max) {
            return UShortCodec::Decode(pos, max);
        }

        static inline int UShortFieldSize(int fieldNumber, uint16_t value) {
            return TagCodec::Size(fieldNumber) + UShortCodec::Size(value);
        }

        static inline uint8_t* EncodeULong(uint8_t*& pos, int fieldNumber, uint64_t value) {
            pos = TagCodec::Encode(pos, fieldNumber, ULongCodec::TagType);
            return ULongCodec::Encode(pos, value);
        }

        static inline uint64_t DecodeULong(const uint8_t*& pos, const uint8_t* max) {
            return ULongCodec::Decode(pos, max);
        }

        static inline int ULongFieldSize(int fieldNumber, uint64_t value) {
            return TagCodec::Size(fieldNumber) + ULongCodec::Size(value);
        }

        static inline uint8_t* EncodeUInt(uint8_t*& pos, int fieldNumber, uint32_t value) {
            pos = TagCodec::Encode(pos, fieldNumber, UIntCodec::TagType);
            return UIntCodec::Encode(pos, value);
        }

        static inline uint32_t DecodeUInt(const uint8_t*& pos, const uint8_t* max) {
            return UIntCodec::Decode(pos, max);
        }

        static inline int UIntFieldSize(int fieldNumber, uint32_t value) {
            return TagCodec::Size(fieldNumber) + UIntCodec::Size(value);
        }

        static inline uint8_t* EncodeTimeSpan(uint8_t*& pos, int fieldNumber, std::chrono::nanoseconds value) {
            pos = TagCodec::Encode(pos, fieldNumber, TimeSpanCodec::TagType);
            pos = LengthCodec::Encode(pos, TimeSpanCodec::Size(value));
            return TimeSpanCodec::Encode(pos, value);
        }

        static inline std::chrono::nanoseconds DecodeTimeSpan(const uint8_t*& pos, const uint8_t* max) {
            auto length = LengthCodec::Decode(pos, max);
            return TimeSpanCodec::Decode(pos, pos + std::min(static_cast<std::ptrdiff_t>(max - pos), static_cast<std::ptrdiff_t>(length)));
        }

        static inline int TimeSpanFieldSize(int fieldNumber, std::chrono::nanoseconds value) {
            return TagCodec::Size(fieldNumber) +
                LengthCodec::Size(TimeSpanCodec::Size(value)) +
                TimeSpanCodec::Size(value);
        }

        static inline uint8_t* EncodeDateTime(uint8_t*& pos, int fieldNumber, const std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>& value) {
            pos = TagCodec::Encode(pos, fieldNumber, DateTimeCodec::TagType);
            pos = LengthCodec::Encode(pos, DateTimeCodec::Size(value));
            return DateTimeCodec::Encode(pos, value);
        }

        static inline std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds> DecodeDateTime(const uint8_t*& pos, const uint8_t* max) {
            auto length = LengthCodec::Decode(pos, max);
            return DateTimeCodec::Decode(pos, pos + std::min(static_cast<std::ptrdiff_t>(max - pos), static_cast<std::ptrdiff_t>(length)));
        }

        static inline int DateTimeFieldSize(int fieldNumber, const std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>& value) {
            return TagCodec::Size(fieldNumber) +
                LengthCodec::Size(DateTimeCodec::Size(value)) +
                DateTimeCodec::Size(value);
        }

        static inline uint8_t* EncodeText1(uint8_t*& pos, int fieldNumber, const Text1String& value) {
            Text1Codec text1Codec;
            pos = TagCodec::Encode(pos, fieldNumber, Text1Codec::TagType);
            pos = LengthCodec::Encode(pos, text1Codec.Size(value));
            return text1Codec.Encode(pos, value);
        }

        static inline void DecodeText1(const uint8_t*& pos, const uint8_t* max, Text1String& target) {
            Text1Codec text1Codec;
            int length = LengthCodec::Decode(pos, max);
            text1Codec.Decode(pos, target, length);
        }

        static inline uint8_t* EncodeText2(uint8_t*& pos, int fieldNumber, const Text2String& value) {
            Text2Codec text2Codec;
            pos = TagCodec::Encode(pos, fieldNumber, Text2Codec::TagType);
            pos = LengthCodec::Encode(pos, text2Codec.Size(value));
            return text2Codec.Encode(pos, value);
        }

        static inline void DecodeText2(const uint8_t*& pos, const uint8_t* max, Text2String& target) {
            Text2Codec text2Codec;
            int length = LengthCodec::Decode(pos, max);
            text2Codec.Decode(pos, target, length);
        }

        static inline uint8_t* EncodeShort(uint8_t*& pos, int fieldNumber, short value) {
            pos = TagCodec::Encode(pos, fieldNumber, ShortCodec::TagType);
            return ShortCodec::Encode(pos, value);
        }

        static inline short DecodeShort(const uint8_t*& pos, const uint8_t* max) {
            return ShortCodec::Decode(pos, max);
        }

        static inline int ShortFieldSize(int fieldNumber, short value) {
            return TagCodec::Size(fieldNumber) + ShortCodec::Size(value);
        }

        static inline uint8_t* EncodeLong(uint8_t*& pos, int fieldNumber, int64_t value) {
            pos = TagCodec::Encode(pos, fieldNumber, LongCodec::TagType);
            return LongCodec::Encode(pos, value);
        }

        static inline int64_t DecodeLong(const uint8_t*& pos, const uint8_t* max) {
            return LongCodec::Decode(pos, max);
        }

        static inline int LongFieldSize(int fieldNumber, int64_t value) {
            return TagCodec::Size(fieldNumber) + LongCodec::Size(value);
        }

        static inline uint8_t* EncodeFloat(uint8_t*& pos, int fieldNumber, float value) {
            pos = TagCodec::Encode(pos, fieldNumber, FloatCodec::TagType);
            pos = FloatCodec::Encode(pos, value);
            return pos;
        }

        static inline float DecodeFloat(const uint8_t*& pos, const uint8_t* max) {
            return FloatCodec::Decode(pos, max);
        }

        static inline int FloatFieldSize(int fieldNumber, float value = 0.0f) {
            return TagCodec::Size(fieldNumber) +
                FloatCodec::Size;
        }

        static inline uint8_t* EncodeFlag(uint8_t*& pos, int fieldNumber, uint8_t value) {
            pos = TagCodec::Encode(pos, fieldNumber, FlagCodec::TagType);
            return FlagCodec::Encode(pos, value);
        }

        static inline uint8_t DecodeFlag(const uint8_t*& pos, const uint8_t* max) {
            return FlagCodec::Decode(pos, max);
        }

        static inline int FlagFieldSize(int fieldNumber, uint8_t value) {
            return TagCodec::Size(fieldNumber) +
                FlagCodec::Size(value);
        }

        template <typename DateKeyLayout>
        static inline uint8_t* EncodeDateKey(uint8_t*& pos, int fieldNumber, DateKeyLayout value)
        {
            return EncodeDateKey(pos, fieldNumber, value.Year, value.Month, value.Day);
        }

        static inline uint8_t* EncodeDateKey(uint8_t*& pos, int fieldNumber, int year, int month, int day)
        {
            pos = TagCodec::Encode(pos, fieldNumber, DateKeyCodec::TagType);
            pos = LengthCodec::Encode(pos, DateKeyCodec::Size(year, month, day));
            return DateKeyCodec::Encode(pos, year, month, day);
        }

        static inline DateKeyLayout DecodeDateKey(const uint8_t*& pos, const uint8_t* max)
        {
            auto length = LengthCodec::Decode(pos, max);
            // Ensure that length does not exceed the remaining bytes
            const uint8_t* end = pos + std::min(length, static_cast<int>(max - pos));
            return DateKeyCodec::Decode(pos, end);
        }

        static inline int DateKeyFieldSize(int fieldNumber, int year, int month, int day)
        {
            int dateKeySize = DateKeyCodec::Size(year, month, day);
            return TagCodec::Size(fieldNumber) +
                LengthCodec::Size(dateKeySize) +
                dateKeySize;
        }

        template <typename T>
        static inline uint8_t* EncodeString(uint8_t*& pos, int fieldNumber, const T& value) {
            pos = TagCodec::Encode(pos, fieldNumber, StringCodec::TagType);
            pos = LengthCodec::Encode(pos, StringCodec::Size(value));
            StringCodec::Encode(pos, value); 
            return pos + StringCodec::Size(value); 
        }

        static inline uint8_t* EncodeString(uint8_t*& pos, int fieldNumber, const std::string& value) {
            pos = TagCodec::Encode(pos, fieldNumber, StringCodec::TagType);
            pos = LengthCodec::Encode(pos, StringCodec::Size(value));
            return StringCodec::Encode(pos, value);
        }

        template <typename T>
        static inline void DecodeString(const uint8_t*& pos, const uint8_t* max, T& target) {
            int length = LengthCodec::Decode(pos, max);
            StringCodec::Decode(pos, target, length);
        }

        static inline std::string DecodeString(const uint8_t*& pos, const uint8_t* max) {
            int length = LengthCodec::Decode(pos, max);
            return StringCodec::Decode(pos, length);
        }

        template <typename T>
        static inline T DecodeString(const uint8_t*& pos, const uint8_t* max) {
            int length = LengthCodec::Decode(pos, max);
            return StringCodec::Decode<T>(pos, length);
        }

        static inline int StringFieldSize(int fieldNumber, const std::string& value) {
            int stringSize = StringCodec::Size(value);
            return TagCodec::Size(fieldNumber) +
                LengthCodec::Size(stringSize) +
                stringSize;
        }

        template <typename T>
        static inline int StringFieldSize(int fieldNumber, const T& value) {
            int stringSize = StringCodec::Size(value);
            return TagCodec::Size(fieldNumber) +
                LengthCodec::Size(stringSize) +
                stringSize;
        }

        static uint8_t* EncodeInt(uint8_t*& pos, int fieldNumber, int value) {
            pos = TagCodec::Encode(pos, fieldNumber, IntCodec::TagType);
            return IntCodec::Encode(pos, value);
        }

        static int DecodeInt(const uint8_t*& pos, const uint8_t* max) {

            return IntCodec::Decode(pos, max);
        }

        static int IntFieldSize(int fieldNumber, int value) {
            return TagCodec::Size(fieldNumber) + IntCodec::Size(value);
        }


    }

} // namespace SRProtobufCPP

