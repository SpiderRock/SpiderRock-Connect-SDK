#pragma once

#include "FieldCodec1.h"
#include "MessageMetadataCodec.h"
#include "TickerKeyCodec.h"
#include "ExpiryKeyCodec.h"
#include "OptionKeyCodec.h"

namespace SRProtobufCPP {

    // !!!!! See FieldCodec1.h for most of the functions in this namespace
   
    namespace FieldCodec {

        static uint8_t* EncodeMessageMetadata(uint8_t*& pos, int fieldNumber, const MessageMetadata& value) {
            pos = TagCodec::Encode(pos, fieldNumber, MessageMetadataCodec::TagType);
            pos = LengthCodec::Encode(pos, MessageMetadataCodec::Size(value));
            return MessageMetadataCodec::Encode(pos, value);
        }

        static void DecodeMessageMetadata(const uint8_t*& pos, const uint8_t* max, MessageMetadata& target) {
            int length = LengthCodec::Decode(pos, max);
            int remainingBytes = static_cast<int>(max - pos);
            length = std::min(length, remainingBytes);
            MessageMetadataCodec::Decode(pos, pos + length, target);
        }

		static int MessageMetadataFieldSize(int fieldNumber, const MessageMetadata& value) {
            int MbusInfoSize = MessageMetadataCodec::Size(value);
            return TagCodec::Size(fieldNumber) +
                LengthCodec::Size(MbusInfoSize) +
                MbusInfoSize;
        }

        static uint8_t* EncodeTickerKey(uint8_t*& pos, int fieldNumber, const SRProtobufCPP::TickerKeyLayout& value) {
            pos = TagCodec::Encode(pos, fieldNumber, TickerKeyCodec::TagType);
            pos = LengthCodec::Encode(pos, TickerKeyCodec::Size(value));
            return TickerKeyCodec::Encode(pos, value);
        }

        static TickerKeyLayout DecodeTickerKey(const uint8_t*& pos, const uint8_t* max) {
            auto length = LengthCodec::Decode(pos, max);
            return TickerKeyCodec::Decode(pos, pos + std::min(max - pos, static_cast<std::ptrdiff_t>(length)));
        }

        static int TickerKeyFieldSize(int fieldNumber, const TickerKeyLayout& value) {
            int tickerkeySize = TickerKeyCodec::Size(value);
            return TagCodec::Size(fieldNumber) +
                LengthCodec::Size(tickerkeySize) +
                tickerkeySize;
        }

        static uint8_t* EncodeOptionKey(uint8_t*& pos, int fieldNumber, const OptionKeyLayout& value) {
            pos = TagCodec::Encode(pos, fieldNumber, OptionKeyCodec::TagType);
            pos = LengthCodec::Encode(pos, OptionKeyCodec::Size(value));
            return OptionKeyCodec::Encode(pos, value);
        }

        static OptionKeyLayout DecodeOptionKey(const uint8_t*& pos, const uint8_t* max) {
            auto length = LengthCodec::Decode(pos, max);
            return OptionKeyCodec::Decode(pos, pos + std::min(max - pos, static_cast<std::ptrdiff_t>(length)));
        }

        static int OptionKeyFieldSize(int fieldNumber, const OptionKeyLayout& value) {
            int okeySize = OptionKeyCodec::Size(value);
            return TagCodec::Size(fieldNumber) +
                LengthCodec::Size(okeySize) +
                okeySize;
        }

        static uint8_t* EncodeExpiryKey(uint8_t*& pos, int fieldNumber, const ExpiryKeyLayout& value) {
            pos = TagCodec::Encode(pos, fieldNumber, ExpiryKeyCodec::TagType);
            pos = LengthCodec::Encode(pos, ExpiryKeyCodec::Size(value));
            return ExpiryKeyCodec::Encode(pos, value);
        }

        static ExpiryKeyLayout DecodeExpiryKey(const uint8_t*& pos, const uint8_t* max) {
            int length = LengthCodec::Decode(pos, max);
            return ExpiryKeyCodec::Decode(pos, pos + std::min(static_cast<int>(max - pos), length));
        }

        static int ExpiryKeyFieldSize(int fieldNumber, const ExpiryKeyLayout& value) {
            int expiryKeySize = ExpiryKeyCodec::Size(value);
            return TagCodec::Size(fieldNumber) +
                LengthCodec::Size(expiryKeySize) +
                expiryKeySize;
        }
    }
	
} // namespace SRProtobufCPP

