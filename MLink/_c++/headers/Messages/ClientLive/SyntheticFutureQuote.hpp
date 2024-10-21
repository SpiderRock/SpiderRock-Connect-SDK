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

    #ifndef _bid_price__double__GUARD__
    #define _bid_price__double__GUARD__
    DECL_STRONG_TYPE(bid_price__double, double);
    #endif//_bid_price__double__GUARD__

    #ifndef _ask_price__double__GUARD__
    #define _ask_price__double__GUARD__
    DECL_STRONG_TYPE(ask_price__double, double);
    #endif//_ask_price__double__GUARD__

    #ifndef _bid_size__int32__GUARD__
    #define _bid_size__int32__GUARD__
    DECL_STRONG_TYPE(bid_size__int32, int32);
    #endif//_bid_size__int32__GUARD__

    #ifndef _ask_size__int32__GUARD__
    #define _ask_size__int32__GUARD__
    DECL_STRONG_TYPE(ask_size__int32, int32);
    #endif//_ask_size__int32__GUARD__

    #ifndef _bid_source__GUARD__
    #define _bid_source__GUARD__
    DECL_STRONG_TYPE(bid_source, spiderrock::protobuf::api::SyntheticSource);
    #endif//_bid_source__GUARD__

    #ifndef _ask_source__GUARD__
    #define _ask_source__GUARD__
    DECL_STRONG_TYPE(ask_source, spiderrock::protobuf::api::SyntheticSource);
    #endif//_ask_source__GUARD__

    #ifndef _market_status__GUARD__
    #define _market_status__GUARD__
    DECL_STRONG_TYPE(market_status, spiderrock::protobuf::api::MarketStatus);
    #endif//_market_status__GUARD__

    #ifndef _net_timestamp__GUARD__
    #define _net_timestamp__GUARD__
    DECL_STRONG_TYPE(net_timestamp, int64);
    #endif//_net_timestamp__GUARD__

    #ifndef _fkey__GUARD__
    #define _fkey__GUARD__
    DECL_STRONG_TYPE(fkey, ExpiryKey);
    #endif//_fkey__GUARD__

    
    class SyntheticFutureQuote_PKey {
        public:
        //using statements for all types used in this class
        using fkey = spiderrock::protobuf::api::fkey;

        private:
        fkey m_fkey{};

        public:
		fkey get_fkey() const {
            return m_fkey;
        }
        void set_fkey(const fkey& value)  {
            m_fkey = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SyntheticFutureQuote_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SyntheticFutureQuote_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const fkey & value) { set_fkey(value); }


        SyntheticFutureQuote_PKey() {}

        virtual ~SyntheticFutureQuote_PKey() {
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
        bool IncludeFkey() const {
            return (m_fkey.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeFkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout;
                m_fkey.setCodecExpiryKey(expiryKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(10,expiryKeyLayout);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeFkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout;
                m_fkey.setCodecExpiryKey(expiryKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 10, expiryKeyLayout);
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
                    case 10: {auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                        m_fkey.setFromCodec(expiryKey);
                        break;
                    }
                }
            }
        }

    };
    

    class SyntheticFutureQuote {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SyntheticFutureQuote_PKey;
        using bid_price = spiderrock::protobuf::api::bid_price__double;
        using ask_price = spiderrock::protobuf::api::ask_price__double;
        using bid_size = spiderrock::protobuf::api::bid_size__int32;
        using ask_size = spiderrock::protobuf::api::ask_size__int32;
        using bid_source = spiderrock::protobuf::api::bid_source;
        using ask_source = spiderrock::protobuf::api::ask_source;
        using market_status = spiderrock::protobuf::api::market_status;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        bid_price m_bid_price{};
        ask_price m_ask_price{};
        bid_size m_bid_size{};
        ask_size m_ask_size{};
        bid_source m_bid_source{};
        ask_source m_ask_source{};
        market_status m_market_status{};
        net_timestamp m_net_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        bid_price get_bid_price() const {
            return m_bid_price;
        }		
        ask_price get_ask_price() const {
            return m_ask_price;
        }		
        bid_size get_bid_size() const {
            return m_bid_size;
        }		
        ask_size get_ask_size() const {
            return m_ask_size;
        }		
        bid_source get_bid_source() const {
            return m_bid_source;
        }		
        ask_source get_ask_source() const {
            return m_ask_source;
        }		
        market_status get_market_status() const {
            return m_market_status;
        }		
        net_timestamp get_net_timestamp() const {
            return m_net_timestamp;
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
        void set_bid_price(const bid_price& value)  {
            m_bid_price = value;
        }
        void set_ask_price(const ask_price& value)  {
            m_ask_price = value;
        }
        void set_bid_size(const bid_size& value)  {
            m_bid_size = value;
        }
        void set_ask_size(const ask_size& value)  {
            m_ask_size = value;
        }
        void set_bid_source(const bid_source& value)  {
            m_bid_source = value;
        }
        void set_ask_source(const ask_source& value)  {
            m_ask_source = value;
        }
        void set_market_status(const market_status& value)  {
            m_market_status = value;
        }
        void set_net_timestamp(const net_timestamp& value)  {
            m_net_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SyntheticFutureQuote::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const bid_price & value) {
            set_bid_price(value);
        }
        void set(const ask_price & value) {
            set_ask_price(value);
        }
        void set(const bid_size & value) {
            set_bid_size(value);
        }
        void set(const ask_size & value) {
            set_ask_size(value);
        }
        void set(const bid_source & value) {
            set_bid_source(value);
        }
        void set(const ask_source & value) {
            set_ask_source(value);
        }
        void set(const market_status & value) {
            set_market_status(value);
        }
        void set(const net_timestamp & value) {
            set_net_timestamp(value);
        }

        void set(const SyntheticFutureQuote & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_bid_price);
            set(value.m_ask_price);
            set(value.m_bid_size);
            set(value.m_ask_size);
            set(value.m_bid_source);
            set(value.m_ask_source);
            set(value.m_market_status);
            set(value.m_net_timestamp);
        }

        SyntheticFutureQuote() {
            m__meta.set_message_type("SyntheticFutureQuote");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2695, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2695, length);
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
             *this = SyntheticFutureQuote{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeBidPrice() const {
            return !(m_bid_price == 0.0);
        }
        bool IncludeAskPrice() const {
            return !(m_ask_price == 0.0);
        }
        bool IncludeBidSize() const {
            return !(m_bid_size == 0);
        }
        bool IncludeAskSize() const {
            return !(m_ask_size == 0);
        }
        bool IncludeNetTimestamp() const {
            return !(m_net_timestamp == 0);
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
            if ( IncludeBidPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(100,m_bid_price);
            }
            if ( IncludeAskPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(103,m_ask_price);
            }
            if ( IncludeBidSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(106,m_bid_size);
            }
            if ( IncludeAskSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(109,m_ask_size);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SyntheticSource>(m_bid_source)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SyntheticSource>(m_ask_source)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketStatus>(m_market_status)));
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(121,m_net_timestamp);
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
            if ( IncludeBidPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,100,m_bid_price);
            }
            if ( IncludeAskPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,103,m_ask_price);
            }
            if ( IncludeBidSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,106,m_bid_size);
            }
            if ( IncludeAskSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,109,m_ask_size);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SyntheticSource>(m_bid_source)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SyntheticSource>(m_ask_source)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketStatus>(m_market_status)));
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,121,m_net_timestamp);
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
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_bid_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ask_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_bid_source = static_cast<spiderrock::protobuf::api::SyntheticSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ask_source = static_cast<spiderrock::protobuf::api::SyntheticSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_market_status = static_cast<spiderrock::protobuf::api::MarketStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto SyntheticFutureQuote::get<SyntheticFutureQuote::_meta>() const { return SyntheticFutureQuote::_meta{ m__meta}; }
    template<> inline const auto SyntheticFutureQuote::get<SyntheticFutureQuote::pkey>() const { return SyntheticFutureQuote::pkey{ m_pkey}; }
    template<> inline const auto SyntheticFutureQuote::get<SyntheticFutureQuote::bid_price>() const { return m_bid_price; }
    template<> inline const auto SyntheticFutureQuote::get<SyntheticFutureQuote::ask_price>() const { return m_ask_price; }
    template<> inline const auto SyntheticFutureQuote::get<SyntheticFutureQuote::bid_size>() const { return m_bid_size; }
    template<> inline const auto SyntheticFutureQuote::get<SyntheticFutureQuote::ask_size>() const { return m_ask_size; }
    template<> inline const auto SyntheticFutureQuote::get<SyntheticFutureQuote::bid_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SyntheticSource>( m_bid_source)); }
    template<> inline const auto SyntheticFutureQuote::get<SyntheticFutureQuote::ask_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SyntheticSource>( m_ask_source)); }
    template<> inline const auto SyntheticFutureQuote::get<SyntheticFutureQuote::market_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketStatus>( m_market_status)); }
    template<> inline const auto SyntheticFutureQuote::get<SyntheticFutureQuote::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto SyntheticFutureQuote_PKey::get<SyntheticFutureQuote_PKey::fkey>() const { return SyntheticFutureQuote_PKey::fkey{m_fkey}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SyntheticFutureQuote_PKey& m) {
        o << "\"fkey\":{" << m.get<SyntheticFutureQuote_PKey::fkey>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SyntheticFutureQuote& m) {
        o << "\"_meta\":{" << m.get<SyntheticFutureQuote::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SyntheticFutureQuote::pkey>() << "}";
        o << ",\"bid_price\":" << m.get<SyntheticFutureQuote::bid_price>();
        o << ",\"ask_price\":" << m.get<SyntheticFutureQuote::ask_price>();
        o << ",\"bid_size\":" << m.get<SyntheticFutureQuote::bid_size>();
        o << ",\"ask_size\":" << m.get<SyntheticFutureQuote::ask_size>();
        o << ",\"bid_source\":" << (int64_t)m.get<SyntheticFutureQuote::bid_source>();
        o << ",\"ask_source\":" << (int64_t)m.get<SyntheticFutureQuote::ask_source>();
        o << ",\"market_status\":" << (int64_t)m.get<SyntheticFutureQuote::market_status>();
        o << ",\"net_timestamp\":" << m.get<SyntheticFutureQuote::net_timestamp>();
        return o;
    }

}
}
}