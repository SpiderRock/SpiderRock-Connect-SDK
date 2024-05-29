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

    #ifndef _mrk_price__float__GUARD__
    #define _mrk_price__float__GUARD__
    DECL_STRONG_TYPE(mrk_price__float, float);
    #endif//_mrk_price__float__GUARD__

    #ifndef _expiry__GUARD__
    #define _expiry__GUARD__
    DECL_STRONG_TYPE(expiry, DateKey);
    #endif//_expiry__GUARD__

    #ifndef _src_timestamp__GUARD__
    #define _src_timestamp__GUARD__
    DECL_STRONG_TYPE(src_timestamp, int64);
    #endif//_src_timestamp__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _name__GUARD__
    #define _name__GUARD__
    DECL_STRONG_TYPE(name, string);
    #endif//_name__GUARD__

    #ifndef _days__GUARD__
    #define _days__GUARD__
    DECL_STRONG_TYPE(days, int32);
    #endif//_days__GUARD__

    
    class NationsIndexPrice_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using name = spiderrock::protobuf::api::name;
        using days = spiderrock::protobuf::api::days;

        private:
        ticker m_ticker{};
        name m_name{};
        days m_days{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
        name get_name() const {
            return m_name;
        }
        days get_days() const {
            return m_days;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_name(const name& value)  {
            m_name = value;
        }
        void set_days(const days& value)  {
            m_days = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to NationsIndexPrice_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to NationsIndexPrice_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const name & value) { set_name(value); }
        void set(const days & value) { set_days(value); }


        NationsIndexPrice_PKey() {}

        virtual ~NationsIndexPrice_PKey() {
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
        bool IncludeName() const {
            return !(m_name.empty());
        }
        bool IncludeDays() const {
            return !(m_days == 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout);
            }
            if ( IncludeName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_name);
            }
            if ( IncludeDays()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(12,m_days);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout);
            }
            if ( IncludeName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_name));
            }
            if ( IncludeDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,12,m_days);
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
                    case 11: {m_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 12: {m_days = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class NationsIndexPrice {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::NationsIndexPrice_PKey;
        using mrk_price = spiderrock::protobuf::api::mrk_price__float;
        using expiry = spiderrock::protobuf::api::expiry;
        using src_timestamp = spiderrock::protobuf::api::src_timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        mrk_price m_mrk_price{};
        expiry m_expiry{};
        src_timestamp m_src_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        mrk_price get_mrk_price() const {
            return m_mrk_price;
        }		
        expiry get_expiry() const {
            return m_expiry;
        }		
        src_timestamp get_src_timestamp() const {
            return m_src_timestamp;
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
        void set_mrk_price(const mrk_price& value)  {
            m_mrk_price = value;
        }
        void set_expiry(const expiry& value)  {
            m_expiry = value;
        }
        void set_src_timestamp(const src_timestamp& value)  {
            m_src_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to NationsIndexPrice::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const mrk_price & value) {
            set_mrk_price(value);
        }
        void set(const expiry & value) {
            set_expiry(value);
        }
        void set(const src_timestamp & value) {
            set_src_timestamp(value);
        }

        void set(const NationsIndexPrice & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_mrk_price);
            set(value.m_expiry);
            set(value.m_src_timestamp);
        }

        NationsIndexPrice() {
            m__meta.set_message_type("NationsIndexPrice");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 7800, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 7800, length);
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
             *this = NationsIndexPrice{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeMrkPrice() const {
            return !(m_mrk_price == 0.0);
        }
        bool IncludeExpiry() const {
            return (m_expiry.ByteSizeLong() > 0);
        }
        bool IncludeSrcTimestamp() const {
            return !(m_src_timestamp == 0);
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
            if ( IncludeMrkPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(100,m_mrk_price);
            }
            if ( IncludeExpiry()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(103, m_expiry.get_year(), m_expiry.get_month(), m_expiry.get_day());
            }
            if ( IncludeSrcTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(106,m_src_timestamp);
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
            if ( IncludeMrkPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,100,m_mrk_price);
            }
            if ( IncludeExpiry()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,103, m_expiry.get_year(), m_expiry.get_month(), m_expiry.get_day());
            }
            if ( IncludeSrcTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,106,m_src_timestamp);
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
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mrk_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                            m_expiry.set_year(dateKey.year());
                            m_expiry.set_month(dateKey.month());
                            m_expiry.set_day(dateKey.day());
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_src_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto NationsIndexPrice::get<NationsIndexPrice::_meta>() const { return NationsIndexPrice::_meta{ m__meta}; }
    template<> inline const auto NationsIndexPrice::get<NationsIndexPrice::pkey>() const { return NationsIndexPrice::pkey{ m_pkey}; }
    template<> inline const auto NationsIndexPrice::get<NationsIndexPrice::mrk_price>() const { return m_mrk_price; }
    template<> inline const auto NationsIndexPrice::get<NationsIndexPrice::expiry>() const { return NationsIndexPrice::expiry{ m_expiry}; }
    template<> inline const auto NationsIndexPrice::get<NationsIndexPrice::src_timestamp>() const { return m_src_timestamp; }
    template<> inline const auto NationsIndexPrice_PKey::get<NationsIndexPrice_PKey::ticker>() const { return NationsIndexPrice_PKey::ticker{m_ticker}; }
    template<> inline const auto NationsIndexPrice_PKey::get<NationsIndexPrice_PKey::name>() const { return m_name; }
    template<> inline const auto NationsIndexPrice_PKey::get<NationsIndexPrice_PKey::days>() const { return m_days; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const NationsIndexPrice_PKey& m) {
        o << "\"ticker\":{" << m.get<NationsIndexPrice_PKey::ticker>() << "}";
        o << ",\"name\":\"" << m.get<NationsIndexPrice_PKey::name>() << "\"";
        o << ",\"days\":" << m.get<NationsIndexPrice_PKey::days>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const NationsIndexPrice& m) {
        o << "\"_meta\":{" << m.get<NationsIndexPrice::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<NationsIndexPrice::pkey>() << "}";
        o << ",\"mrk_price\":" << m.get<NationsIndexPrice::mrk_price>();
        o << ",\"expiry\":{" << m.get<NationsIndexPrice::expiry>() << "}";
        o << ",\"src_timestamp\":" << m.get<NationsIndexPrice::src_timestamp>();
        return o;
    }

}
}
}