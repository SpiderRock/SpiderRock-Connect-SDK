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

    #ifndef _last_modified__GUARD__
    #define _last_modified__GUARD__
    DECL_STRONG_TYPE(last_modified, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_last_modified__GUARD__

    #ifndef _text__GUARD__
    #define _text__GUARD__
    DECL_STRONG_TYPE(text, string);
    #endif//_text__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

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

    #ifndef _div_override_source__GUARD__
    #define _div_override_source__GUARD__
    DECL_STRONG_TYPE(div_override_source, spiderrock::protobuf::api::DivOverrideSource);
    #endif//_div_override_source__GUARD__

    
    class GlobalDividends_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;

        private:
        ticker m_ticker{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to GlobalDividends_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to GlobalDividends_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }


        GlobalDividends_PKey() {}

        virtual ~GlobalDividends_PKey() {
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


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout_ticker);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout_ticker);
            }
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
                }
            }
        }

    };
    
    class GlobalDividends_DateAmt {
        public:
        //using statements for all types used in this class
        using div_date = spiderrock::protobuf::api::div_date;
        using div_value = spiderrock::protobuf::api::div_value;
        using div_currency = spiderrock::protobuf::api::div_currency;
        using div_kind = spiderrock::protobuf::api::div_kind;
        using div_source = spiderrock::protobuf::api::div_source;
        using div_freq = spiderrock::protobuf::api::div_freq;
        using div_override_source = spiderrock::protobuf::api::div_override_source;

        private:
        div_date m_div_date{};
        div_value m_div_value{};
        div_currency m_div_currency{};
        div_kind m_div_kind{};
        div_source m_div_source{};
        div_freq m_div_freq{};
        div_override_source m_div_override_source{};

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
        div_override_source get_div_override_source() const {
            return m_div_override_source;
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
        void set_div_override_source(const div_override_source& value)  {
            m_div_override_source = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to GlobalDividends_DateAmt::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to GlobalDividends_DateAmt::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const div_date & value) { set_div_date(value); }
        void set(const div_value & value) { set_div_value(value); }
        void set(const div_currency & value) { set_div_currency(value); }
        void set(const div_kind & value) { set_div_kind(value); }
        void set(const div_source & value) { set_div_source(value); }
        void set(const div_freq & value) { set_div_freq(value); }
        void set(const div_override_source & value) { set_div_override_source(value); }


        GlobalDividends_DateAmt() {}

        virtual ~GlobalDividends_DateAmt() {
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DivOverrideSource>(m_div_override_source)));
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,112, m_div_date.get_year(), m_div_date.get_month(), m_div_date.get_day());
            
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_div_value);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,118,static_cast<string>(m_div_currency));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DivKind>(m_div_kind)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DivSource>(m_div_source)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DivFreq>(m_div_freq)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DivOverrideSource>(m_div_override_source)));
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
                    case 130: {m_div_override_source = static_cast<spiderrock::protobuf::api::DivOverrideSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class GlobalDividends {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::GlobalDividends_PKey;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using last_modified = spiderrock::protobuf::api::last_modified;
        using text = spiderrock::protobuf::api::text;
        using date_amt = spiderrock::protobuf::api::GlobalDividends_DateAmt;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        timestamp m_timestamp{};
        last_modified m_last_modified{};
        text m_text{};
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
        last_modified get_last_modified() const {
            return m_last_modified;
        }		
        text get_text() const {
            return m_text;
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
        void set_last_modified(const last_modified& value)  {
            m_last_modified = value;
        }
        void set_text(const text& value)  {
            m_text = value;
        }
        void set_date_amt_list(const std::vector<date_amt>& list)  {
            m_date_amt = list;
        }
        void add_date_amt(const date_amt& item) {
            m_date_amt.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to GlobalDividends::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to GlobalDividends::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to GlobalDividends::count()"); return 0;}  // specializations for valid types are listed below the class definition

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
        void set(const last_modified & value) {
            set_last_modified(value);
        }
        void set(const text & value) {
            set_text(value);
        }
        void set(const date_amt & value) {
            add_date_amt(value);
        }

        void set(const GlobalDividends & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_timestamp);
            set(value.m_last_modified);
            set(value.m_text);set_date_amt_list(value.m_date_amt);
        }

        GlobalDividends() {
            m__meta.set_message_type("GlobalDividends");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3590, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3590, length);
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
             *this = GlobalDividends{};
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
        bool IncludeLastModified() const {
            return (m_last_modified.time_since_epoch().count() != 0);
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
            if ( IncludeLastModified()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(103, m_last_modified);
            }
            if ( IncludeText()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_text);
            }
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
            if ( IncludeLastModified()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 103, m_last_modified);
            }
            if ( IncludeText()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_text));
            }
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
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_last_modified = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_text = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
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

    template<> inline const auto GlobalDividends::get<GlobalDividends::_meta>() const { return GlobalDividends::_meta{ m__meta}; }
    template<> inline const auto GlobalDividends::get<GlobalDividends::pkey>() const { return GlobalDividends::pkey{ m_pkey}; }
    template<> inline const auto GlobalDividends::get<GlobalDividends::timestamp>() const { return m_timestamp; }
    template<> inline const auto GlobalDividends::get<GlobalDividends::last_modified>() const { return m_last_modified; }
    template<> inline const auto GlobalDividends::get<GlobalDividends::text>() const { return m_text; }
    template<> inline const auto GlobalDividends::get<GlobalDividends::date_amt>(int i) const { return GlobalDividends::date_amt{ get_date_amt(i)}; }
    template<> inline int GlobalDividends::count<GlobalDividends::date_amt>() const { return static_cast<int>( m_date_amt.size()); }
    template<> inline const auto GlobalDividends_PKey::get<GlobalDividends_PKey::ticker>() const { return GlobalDividends_PKey::ticker{m_ticker}; }
    
    template<> inline const auto GlobalDividends_DateAmt::get<GlobalDividends_DateAmt::div_date>() const { return GlobalDividends_DateAmt::div_date{m_div_date}; }
    template<> inline const auto GlobalDividends_DateAmt::get<GlobalDividends_DateAmt::div_value>() const { return m_div_value; }
    template<> inline const auto GlobalDividends_DateAmt::get<GlobalDividends_DateAmt::div_currency>() const { return m_div_currency; }
    template<> inline const auto GlobalDividends_DateAmt::get<GlobalDividends_DateAmt::div_kind>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DivKind>(m_div_kind));}
    template<> inline const auto GlobalDividends_DateAmt::get<GlobalDividends_DateAmt::div_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DivSource>(m_div_source));}
    template<> inline const auto GlobalDividends_DateAmt::get<GlobalDividends_DateAmt::div_freq>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DivFreq>(m_div_freq));}
    template<> inline const auto GlobalDividends_DateAmt::get<GlobalDividends_DateAmt::div_override_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DivOverrideSource>(m_div_override_source));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const GlobalDividends_PKey& m) {
        o << "\"ticker\":{" << m.get<GlobalDividends_PKey::ticker>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const GlobalDividends_DateAmt& m) {
        o << "\"div_date\":{" << m.get<GlobalDividends_DateAmt::div_date>() << "}";
        o << ",\"div_value\":" << m.get<GlobalDividends_DateAmt::div_value>();
        o << ",\"div_currency\":\"" << m.get<GlobalDividends_DateAmt::div_currency>() << "\"";
        o << ",\"div_kind\":" << (int64_t)m.get<GlobalDividends_DateAmt::div_kind>();
        o << ",\"div_source\":" << (int64_t)m.get<GlobalDividends_DateAmt::div_source>();
        o << ",\"div_freq\":" << (int64_t)m.get<GlobalDividends_DateAmt::div_freq>();
        o << ",\"div_override_source\":" << (int64_t)m.get<GlobalDividends_DateAmt::div_override_source>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const GlobalDividends& m) {
        o << "\"_meta\":{" << m.get<GlobalDividends::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<GlobalDividends::pkey>() << "}";
        {
            std::time_t tt = m.get<GlobalDividends::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<GlobalDividends::last_modified>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"last_modified\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"text\":\"" << m.get<GlobalDividends::text>() << "\"";
        o << ",\"date_amt\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<GlobalDividends::date_amt>(); ++i) {
                o << delim << m.get<GlobalDividends::date_amt>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}