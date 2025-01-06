#pragma once

#include <ostream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <cstdio>
#include "MessageMetadataCodec.h"
#include "OptionKeyCodec.h"
#include "ExpiryKeyCodec.h"
#include "TickerKeyCodec.h"
#include "DateKeyCodec.h"
#include "DateTimeCodec.h"
#include "TimeSpanCodec.h"
#include "FieldCodec.h"
#include "LengthCodec.h"
#include "Skipper.h"
#include "spiderrock_common.hpp"
#include "spiderrock_protobuf_base.hpp"
#include "spiderrock_enum.hpp"

namespace spiderrock {
namespace protobuf {
namespace api {

    //declare statements for all types utilized by this message (#ifdef guards protect in case they have been previously defined)

    #ifndef __meta__GUARD__
    #define __meta__GUARD__
    DECL_STRONG_TYPE(_meta, MessageMetadata);
    #endif//__meta__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _text__GUARD__
    #define _text__GUARD__
    DECL_STRONG_TYPE(text, string);
    #endif//_text__GUARD__

    #ifndef _merge_type__GUARD__
    #define _merge_type__GUARD__
    DECL_STRONG_TYPE(merge_type, spiderrock::protobuf::api::MergeType);
    #endif//_merge_type__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _dividend_slot__GUARD__
    #define _dividend_slot__GUARD__
    DECL_STRONG_TYPE(dividend_slot, spiderrock::protobuf::api::DividendSlot);
    #endif//_dividend_slot__GUARD__

    #ifndef _div_date__GUARD__
    #define _div_date__GUARD__
    DECL_STRONG_TYPE(div_date, DateKey);
    #endif//_div_date__GUARD__

    #ifndef _div_value__GUARD__
    #define _div_value__GUARD__
    DECL_STRONG_TYPE(div_value, float);
    #endif//_div_value__GUARD__

    #ifndef _div_currency__GUARD__
    #define _div_currency__GUARD__
    DECL_STRONG_TYPE(div_currency, string);
    #endif//_div_currency__GUARD__

    #ifndef _div_kind__GUARD__
    #define _div_kind__GUARD__
    DECL_STRONG_TYPE(div_kind, spiderrock::protobuf::api::DivKind);
    #endif//_div_kind__GUARD__

    #ifndef _div_source__GUARD__
    #define _div_source__GUARD__
    DECL_STRONG_TYPE(div_source, spiderrock::protobuf::api::DivSource);
    #endif//_div_source__GUARD__

    #ifndef _div_freq__GUARD__
    #define _div_freq__GUARD__
    DECL_STRONG_TYPE(div_freq, spiderrock::protobuf::api::DivFreq);
    #endif//_div_freq__GUARD__

    
    class UserDividendOverride_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using dividend_slot = spiderrock::protobuf::api::dividend_slot;

        private:
        ticker m_ticker{};
        client_firm m_client_firm{};
        dividend_slot m_dividend_slot{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        dividend_slot get_dividend_slot() const {
            return m_dividend_slot;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_dividend_slot(const dividend_slot& value)  {
            m_dividend_slot = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserDividendOverride_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to UserDividendOverride_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const client_firm & value) { set_client_firm(value); }
        void set(const dividend_slot & value) { set_dividend_slot(value); }


        UserDividendOverride_PKey() {}

        virtual ~UserDividendOverride_PKey() {
        }
        //templatized set functions that can take multiple arguments simultaneously
        template <typename Arg>
        void set_params(Arg && arg) {
            set(arg);
        }
        template <typename Arg, typename... Args>
        void set_params(Arg && arg, Args &&... args) {
            set(arg);
            set_params(args...);
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout_ticker);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_client_firm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DividendSlot>(m_dividend_slot)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout_ticker);
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_client_firm));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DividendSlot>(m_dividend_slot)));
        }

        const void Decode(const  uint8_t*& pos, const  uint8_t* max) {
            uint32_t tag = 0;
            int fieldNumber;
            SRProtobufCPP::TagCodecEnums::TagType tagType;
            while (pos < max && (tag = SRProtobufCPP::TagCodec::Decode(pos, max)) != 0) {
                auto tagDecomposed = SRProtobufCPP::TagCodec::Decompose(tag);
                tagType = tagDecomposed.second;
                fieldNumber = tagDecomposed.first;
                switch (fieldNumber) {
                    default:
                        // Add unknown tag field number logging
                        SRProtobufCPP::Skipper::Skip(pos, tagType, max);
                        break;
                    case 10: {
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_ticker.setFromCodec(tickerKey);
                        break;
                    }
                    case 11: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 12: {m_dividend_slot = static_cast<spiderrock::protobuf::api::DividendSlot>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    
    class UserDividendOverride_DateAmt {
        public:
        //using statements for all types used in this class
        using div_date = spiderrock::protobuf::api::div_date;
        using div_value = spiderrock::protobuf::api::div_value;
        using div_currency = spiderrock::protobuf::api::div_currency;
        using div_kind = spiderrock::protobuf::api::div_kind;
        using div_source = spiderrock::protobuf::api::div_source;
        using div_freq = spiderrock::protobuf::api::div_freq;

        private:
        div_date m_div_date{};
        div_value m_div_value{};
        div_currency m_div_currency{};
        div_kind m_div_kind{};
        div_source m_div_source{};
        div_freq m_div_freq{};

        public:
		div_date get_div_date() const {
            return m_div_date;
        }
        div_value get_div_value() const {
            return m_div_value;
        }
        div_currency get_div_currency() const {
            return m_div_currency;
        }
        div_kind get_div_kind() const {
            return m_div_kind;
        }
        div_source get_div_source() const {
            return m_div_source;
        }
        div_freq get_div_freq() const {
            return m_div_freq;
        }
        void set_div_date(const div_date& value)  {
            m_div_date = value;
        }
        void set_div_value(const div_value& value)  {
            m_div_value = value;
        }
        void set_div_currency(const div_currency& value)  {
            m_div_currency = value;
        }
        void set_div_kind(const div_kind& value)  {
            m_div_kind = value;
        }
        void set_div_source(const div_source& value)  {
            m_div_source = value;
        }
        void set_div_freq(const div_freq& value)  {
            m_div_freq = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserDividendOverride_DateAmt::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to UserDividendOverride_DateAmt::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const div_date & value) { set_div_date(value); }
        void set(const div_value & value) { set_div_value(value); }
        void set(const div_currency & value) { set_div_currency(value); }
        void set(const div_kind & value) { set_div_kind(value); }
        void set(const div_source & value) { set_div_source(value); }
        void set(const div_freq & value) { set_div_freq(value); }


        UserDividendOverride_DateAmt() {}

        virtual ~UserDividendOverride_DateAmt() {
        }
        //templatized set functions that can take multiple arguments simultaneously
        template <typename Arg>
        void set_params(Arg && arg) {
            set(arg);
        }
        template <typename Arg, typename... Args>
        void set_params(Arg && arg, Args &&... args) {
            set(arg);
            set_params(args...);
        }

        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(112, m_div_date.get_year(), m_div_date.get_month(), m_div_date.get_day());
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_div_value);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(118,m_div_currency);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DivKind>(m_div_kind)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DivSource>(m_div_source)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DivFreq>(m_div_freq)));
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,112, m_div_date.get_year(), m_div_date.get_month(), m_div_date.get_day());
            
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_div_value);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,118,static_cast<string>(m_div_currency));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DivKind>(m_div_kind)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DivSource>(m_div_source)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DivFreq>(m_div_freq)));
            return dest;
        }

        const void Decode(const  uint8_t*& pos, const  uint8_t* max) {
            uint32_t tag = 0;
            int fieldNumber;
            SRProtobufCPP::TagCodecEnums::TagType tagType;
            while (pos < max && (tag = SRProtobufCPP::TagCodec::Decode(pos, max)) != 0) {
                auto tagDecomposed = SRProtobufCPP::TagCodec::Decompose(tag);
                tagType = tagDecomposed.second;
                fieldNumber = tagDecomposed.first;
                switch (fieldNumber) {
                    default:
                        // Add unknown tag field number logging
                        SRProtobufCPP::Skipper::Skip(pos, tagType, max);
                        break;
                    case 112: {
                        auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                        m_div_date.set_year(dateKey.year());
                        m_div_date.set_month(dateKey.month());
                        m_div_date.set_day(dateKey.day());
                        break;
                    }
                    case 115: {m_div_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 118: {m_div_currency = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 121: {m_div_kind = static_cast<spiderrock::protobuf::api::DivKind>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 124: {m_div_source = static_cast<spiderrock::protobuf::api::DivSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 127: {m_div_freq = static_cast<spiderrock::protobuf::api::DivFreq>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class UserDividendOverride {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::UserDividendOverride_PKey;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using text = spiderrock::protobuf::api::text;
        using merge_type = spiderrock::protobuf::api::merge_type;
        using date_amt = spiderrock::protobuf::api::UserDividendOverride_DateAmt;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        timestamp m_timestamp{};
        text m_text{};
        merge_type m_merge_type{};
        std::vector<date_amt> m_date_amt{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }		
        text get_text() const {
            return m_text;
        }		
        merge_type get_merge_type() const {
            return m_merge_type;
        }
        const std::vector<date_amt>& get_date_amt_list() const {
            return m_date_amt;
        }
        const date_amt& get_date_amt(const int i) const {
            return m_date_amt.at(i);
        }
        size_t getMLinkHeaderLength() const
        {
            return _mlinkHeaderLength;
        }
        void set__meta(const _meta& value)  {
            m__meta = value;
        }
        void set_pkey(const pkey& value)  {
            m_pkey = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_text(const text& value)  {
            m_text = value;
        }
        void set_merge_type(const merge_type& value)  {
            m_merge_type = value;
        }
        void set_date_amt_list(const std::vector<date_amt>& list)  {
            m_date_amt = list;
        }
        void add_date_amt(const date_amt& item) {
            m_date_amt.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserDividendOverride::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserDividendOverride::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserDividendOverride::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const text & value) {
            set_text(value);
        }
        void set(const merge_type & value) {
            set_merge_type(value);
        }
        void set(const date_amt & value) {
            add_date_amt(value);
        }

        void set(const UserDividendOverride & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_timestamp);
            set(value.m_text);
            set(value.m_merge_type);set_date_amt_list(value.m_date_amt);
        }

        UserDividendOverride() {
            m__meta.set_message_type("UserDividendOverride");
        }


        //templatized set functions that can take multiple arguments simultaneously
        template <typename Arg>
        void set_params(Arg && arg) {
            set(arg);
        }
        template <typename Arg, typename... Args>
        void set_params(Arg && arg, Args &&... args) {
            set(arg);
            set_params(args...);
        }

        bool SerializeToArray(void* data, size_t size) const  {
            size_t length = ByteSizeLong();
            if (size <  _mlinkHeaderLength + length) return false;
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3630, length);
            //Encode the message
            uint8_t* encodePos = reinterpret_cast<uint8_t*>(static_cast<char*>(data) +  _mlinkHeaderLength);
            auto max = encodePos + length;
            Encode(encodePos, max);
            //End of encoding
            return true;
        }

        bool SerializeToString(std::string *s) const {
            size_t length = ByteSizeLong();
            s->resize( _mlinkHeaderLength + length);
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3630, length);
            return SerializeToArray(const_cast<char*>(s->data()) + _mlinkHeaderLength, length);
        }

        bool ParseFromString(const string& data) {
			return ParseFromArray(data.data(), data.size());
        }
        bool ParseFromArray(const void* data, size_t size) {
            const unsigned char* pos = reinterpret_cast<const unsigned char*>(data);
            const unsigned char* max = pos + size;
            while (pos < max) {
               Decode(pos, max);
            }
            return true;
        }

        void Clear() {
             *this = UserDividendOverride{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeText() const {
            return !(m_text.empty());
        }
        bool IncludeDateAmt() const {
            return (!m_date_amt.empty());
        }

        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeMeta()) {
                SRProtobufCPP::MessageMetadata messageMetadata{};
                m__meta.setCodecMessageMetadata(messageMetadata);
                totalSize += SRProtobufCPP::FieldCodec::MessageMetadataFieldSize(1, messageMetadata);
            }
            if ( IncludePkey()) {
			    size_t pKeyLength = m_pkey.ByteSizeLong();
                totalSize += SRProtobufCPP::TagCodec::Size(2, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                totalSize += SRProtobufCPP::LengthCodec::Size(static_cast<int>(pKeyLength));
                totalSize += pKeyLength;
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(100, m_timestamp);
            }
            if ( IncludeText()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_text);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MergeType>(m_merge_type)));
            if ( IncludeDateAmt()) {
                for (auto& item : m_date_amt) {
					totalSize += SRProtobufCPP::TagCodec::Size(109, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeMeta()) {
                SRProtobufCPP::MessageMetadata messageMetadata{};
                m__meta.setCodecMessageMetadata(messageMetadata);
                dest = SRProtobufCPP::FieldCodec::EncodeMessageMetadata(dest,1, messageMetadata);
            }
            if ( IncludePkey()) {
                dest = SRProtobufCPP::TagCodec::Encode(dest,2, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(m_pkey.ByteSizeLong()));
                m_pkey.Encode(dest,max);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 100, m_timestamp);
            }
            if ( IncludeText()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_text));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MergeType>(m_merge_type)));
            if ( IncludeDateAmt()) {
                for (auto& item : m_date_amt) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 109, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
        }

        const void Decode(const uint8_t*& pos, const uint8_t* max) {
            uint32_t tag = 0;
            int fieldNumber;
            SRProtobufCPP::TagCodecEnums::TagType tagType;
            while (pos < max && (tag = SRProtobufCPP::TagCodec::Decode(pos, max)) != 0) {
                auto tagDecomposed = SRProtobufCPP::TagCodec::Decompose(tag);
                tagType = tagDecomposed.second;
                fieldNumber = tagDecomposed.first;
                switch (fieldNumber) {
                    default:
                        // Add unknown tag field number logging
                        SRProtobufCPP::Skipper::Skip(pos, tagType, max);
                        break;
                    case 1: {
                        if (tagType == SRProtobufCPP::MessageMetadataCodec::TagType) {
                            SRProtobufCPP::MessageMetadata codecMessageMetadata{};
                            SRProtobufCPP::FieldCodec::DecodeMessageMetadata(pos,max, codecMessageMetadata);
                            m__meta.setMessageMetadataFromCodec(codecMessageMetadata);
                        }
                        break;
                    }
                    case 2: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            m_pkey.Decode(pos, pos + std::min(max - pos, static_cast<std::ptrdiff_t>(length)));
                        }
                        break;
                    }
                    case 100: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_text = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_merge_type = static_cast<spiderrock::protobuf::api::MergeType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            date_amt item_date_amt;
                            item_date_amt.Decode(pos, pos+length);  
                            m_date_amt.emplace_back(item_date_amt);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto UserDividendOverride::get<UserDividendOverride::_meta>() const { return UserDividendOverride::_meta{ m__meta}; }
    template<> inline const auto UserDividendOverride::get<UserDividendOverride::pkey>() const { return UserDividendOverride::pkey{ m_pkey}; }
    template<> inline const auto UserDividendOverride::get<UserDividendOverride::timestamp>() const { return m_timestamp; }
    template<> inline const auto UserDividendOverride::get<UserDividendOverride::text>() const { return m_text; }
    template<> inline const auto UserDividendOverride::get<UserDividendOverride::merge_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MergeType>( m_merge_type)); }
    template<> inline const auto UserDividendOverride::get<UserDividendOverride::date_amt>(int i) const { return UserDividendOverride::date_amt{ get_date_amt(i)}; }
    template<> inline int UserDividendOverride::count<UserDividendOverride::date_amt>() const { return static_cast<int>( m_date_amt.size()); }
    template<> inline const auto UserDividendOverride_PKey::get<UserDividendOverride_PKey::ticker>() const { return UserDividendOverride_PKey::ticker{m_ticker}; }
    template<> inline const auto UserDividendOverride_PKey::get<UserDividendOverride_PKey::client_firm>() const { return m_client_firm; }
    template<> inline const auto UserDividendOverride_PKey::get<UserDividendOverride_PKey::dividend_slot>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DividendSlot>(m_dividend_slot));}
    
    template<> inline const auto UserDividendOverride_DateAmt::get<UserDividendOverride_DateAmt::div_date>() const { return UserDividendOverride_DateAmt::div_date{m_div_date}; }
    template<> inline const auto UserDividendOverride_DateAmt::get<UserDividendOverride_DateAmt::div_value>() const { return m_div_value; }
    template<> inline const auto UserDividendOverride_DateAmt::get<UserDividendOverride_DateAmt::div_currency>() const { return m_div_currency; }
    template<> inline const auto UserDividendOverride_DateAmt::get<UserDividendOverride_DateAmt::div_kind>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DivKind>(m_div_kind));}
    template<> inline const auto UserDividendOverride_DateAmt::get<UserDividendOverride_DateAmt::div_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DivSource>(m_div_source));}
    template<> inline const auto UserDividendOverride_DateAmt::get<UserDividendOverride_DateAmt::div_freq>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DivFreq>(m_div_freq));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const UserDividendOverride_PKey& m) {
        o << "\"ticker\":{" << m.get<UserDividendOverride_PKey::ticker>() << "}";
        o << ",\"client_firm\":\"" << m.get<UserDividendOverride_PKey::client_firm>() << "\"";
        o << ",\"dividend_slot\":" << (int64_t)m.get<UserDividendOverride_PKey::dividend_slot>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const UserDividendOverride_DateAmt& m) {
        o << "\"div_date\":{" << m.get<UserDividendOverride_DateAmt::div_date>() << "}";
        o << ",\"div_value\":" << m.get<UserDividendOverride_DateAmt::div_value>();
        o << ",\"div_currency\":\"" << m.get<UserDividendOverride_DateAmt::div_currency>() << "\"";
        o << ",\"div_kind\":" << (int64_t)m.get<UserDividendOverride_DateAmt::div_kind>();
        o << ",\"div_source\":" << (int64_t)m.get<UserDividendOverride_DateAmt::div_source>();
        o << ",\"div_freq\":" << (int64_t)m.get<UserDividendOverride_DateAmt::div_freq>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const UserDividendOverride& m) {
        o << "\"_meta\":{" << m.get<UserDividendOverride::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<UserDividendOverride::pkey>() << "}";
        {
            std::time_t tt = m.get<UserDividendOverride::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"text\":\"" << m.get<UserDividendOverride::text>() << "\"";
        o << ",\"merge_type\":" << (int64_t)m.get<UserDividendOverride::merge_type>();
        o << ",\"date_amt\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<UserDividendOverride::date_amt>(); ++i) {
                o << delim << m.get<UserDividendOverride::date_amt>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}