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

    #ifndef _price_source__GUARD__
    #define _price_source__GUARD__
    DECL_STRONG_TYPE(price_source, spiderrock::protobuf::api::IdxSrc);
    #endif//_price_source__GUARD__

    #ifndef _data_source__GUARD__
    #define _data_source__GUARD__
    DECL_STRONG_TYPE(data_source, spiderrock::protobuf::api::IdxDataSource);
    #endif//_data_source__GUARD__

    #ifndef _idx_bid__GUARD__
    #define _idx_bid__GUARD__
    DECL_STRONG_TYPE(idx_bid, double);
    #endif//_idx_bid__GUARD__

    #ifndef _idx_ask__GUARD__
    #define _idx_ask__GUARD__
    DECL_STRONG_TYPE(idx_ask, double);
    #endif//_idx_ask__GUARD__

    #ifndef _idx_price__GUARD__
    #define _idx_price__GUARD__
    DECL_STRONG_TYPE(idx_price, double);
    #endif//_idx_price__GUARD__

    #ifndef _net_timestamp__GUARD__
    #define _net_timestamp__GUARD__
    DECL_STRONG_TYPE(net_timestamp, int64);
    #endif//_net_timestamp__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    
    class IndexQuote_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to IndexQuote_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to IndexQuote_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }


        IndexQuote_PKey() {}

        virtual ~IndexQuote_PKey() {
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
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout);
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
    

    class IndexQuote {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::IndexQuote_PKey;
        using price_source = spiderrock::protobuf::api::price_source;
        using data_source = spiderrock::protobuf::api::data_source;
        using idx_bid = spiderrock::protobuf::api::idx_bid;
        using idx_ask = spiderrock::protobuf::api::idx_ask;
        using idx_price = spiderrock::protobuf::api::idx_price;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        price_source m_price_source{};
        data_source m_data_source{};
        idx_bid m_idx_bid{};
        idx_ask m_idx_ask{};
        idx_price m_idx_price{};
        net_timestamp m_net_timestamp{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        price_source get_price_source() const {
            return m_price_source;
        }		
        data_source get_data_source() const {
            return m_data_source;
        }		
        idx_bid get_idx_bid() const {
            return m_idx_bid;
        }		
        idx_ask get_idx_ask() const {
            return m_idx_ask;
        }		
        idx_price get_idx_price() const {
            return m_idx_price;
        }		
        net_timestamp get_net_timestamp() const {
            return m_net_timestamp;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
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
        void set_price_source(const price_source& value)  {
            m_price_source = value;
        }
        void set_data_source(const data_source& value)  {
            m_data_source = value;
        }
        void set_idx_bid(const idx_bid& value)  {
            m_idx_bid = value;
        }
        void set_idx_ask(const idx_ask& value)  {
            m_idx_ask = value;
        }
        void set_idx_price(const idx_price& value)  {
            m_idx_price = value;
        }
        void set_net_timestamp(const net_timestamp& value)  {
            m_net_timestamp = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to IndexQuote::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const price_source & value) {
            set_price_source(value);
        }
        void set(const data_source & value) {
            set_data_source(value);
        }
        void set(const idx_bid & value) {
            set_idx_bid(value);
        }
        void set(const idx_ask & value) {
            set_idx_ask(value);
        }
        void set(const idx_price & value) {
            set_idx_price(value);
        }
        void set(const net_timestamp & value) {
            set_net_timestamp(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const IndexQuote & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_price_source);
            set(value.m_data_source);
            set(value.m_idx_bid);
            set(value.m_idx_ask);
            set(value.m_idx_price);
            set(value.m_net_timestamp);
            set(value.m_timestamp);
        }

        IndexQuote() {
            m__meta.set_message_type("IndexQuote");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2675, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2675, length);
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
             *this = IndexQuote{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeIdxBid() const {
            return !(m_idx_bid == 0.0);
        }
        bool IncludeIdxAsk() const {
            return !(m_idx_ask == 0.0);
        }
        bool IncludeIdxPrice() const {
            return !(m_idx_price == 0.0);
        }
        bool IncludeNetTimestamp() const {
            return !(m_net_timestamp == 0);
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::IdxSrc>(m_price_source)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::IdxDataSource>(m_data_source)));
            if ( IncludeIdxBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(103,m_idx_bid);
            }
            if ( IncludeIdxAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(106,m_idx_ask);
            }
            if ( IncludeIdxPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(109,m_idx_price);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(112,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(115, m_timestamp);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::IdxSrc>(m_price_source)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::IdxDataSource>(m_data_source)));
            if ( IncludeIdxBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,103,m_idx_bid);
            }
            if ( IncludeIdxAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,106,m_idx_ask);
            }
            if ( IncludeIdxPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,109,m_idx_price);
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,112,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 115, m_timestamp);
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
                    case 100: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_source = static_cast<spiderrock::protobuf::api::IdxSrc>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 101: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_data_source = static_cast<spiderrock::protobuf::api::IdxDataSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_idx_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_idx_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_idx_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto IndexQuote::get<IndexQuote::_meta>() const { return IndexQuote::_meta{ m__meta}; }
    template<> inline const auto IndexQuote::get<IndexQuote::pkey>() const { return IndexQuote::pkey{ m_pkey}; }
    template<> inline const auto IndexQuote::get<IndexQuote::price_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::IdxSrc>( m_price_source)); }
    template<> inline const auto IndexQuote::get<IndexQuote::data_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::IdxDataSource>( m_data_source)); }
    template<> inline const auto IndexQuote::get<IndexQuote::idx_bid>() const { return m_idx_bid; }
    template<> inline const auto IndexQuote::get<IndexQuote::idx_ask>() const { return m_idx_ask; }
    template<> inline const auto IndexQuote::get<IndexQuote::idx_price>() const { return m_idx_price; }
    template<> inline const auto IndexQuote::get<IndexQuote::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto IndexQuote::get<IndexQuote::timestamp>() const { return m_timestamp; }
    template<> inline const auto IndexQuote_PKey::get<IndexQuote_PKey::ticker>() const { return IndexQuote_PKey::ticker{m_ticker}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const IndexQuote_PKey& m) {
        o << "\"ticker\":{" << m.get<IndexQuote_PKey::ticker>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const IndexQuote& m) {
        o << "\"_meta\":{" << m.get<IndexQuote::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<IndexQuote::pkey>() << "}";
        o << ",\"price_source\":" << (int64_t)m.get<IndexQuote::price_source>();
        o << ",\"data_source\":" << (int64_t)m.get<IndexQuote::data_source>();
        o << ",\"idx_bid\":" << m.get<IndexQuote::idx_bid>();
        o << ",\"idx_ask\":" << m.get<IndexQuote::idx_ask>();
        o << ",\"idx_price\":" << m.get<IndexQuote::idx_price>();
        o << ",\"net_timestamp\":" << m.get<IndexQuote::net_timestamp>();
        {
            std::time_t tt = m.get<IndexQuote::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}