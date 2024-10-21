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

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _side__GUARD__
    #define _side__GUARD__
    DECL_STRONG_TYPE(side, spiderrock::protobuf::api::BuySell);
    #endif//_side__GUARD__

    #ifndef _prt_size__GUARD__
    #define _prt_size__GUARD__
    DECL_STRONG_TYPE(prt_size, int32);
    #endif//_prt_size__GUARD__

    #ifndef _prt_price__double__GUARD__
    #define _prt_price__double__GUARD__
    DECL_STRONG_TYPE(prt_price__double, double);
    #endif//_prt_price__double__GUARD__

    #ifndef _prt_exch__OptExch__GUARD__
    #define _prt_exch__OptExch__GUARD__
    DECL_STRONG_TYPE(prt_exch__OptExch, spiderrock::protobuf::api::OptExch);
    #endif//_prt_exch__OptExch__GUARD__

    #ifndef _src_timestamp__GUARD__
    #define _src_timestamp__GUARD__
    DECL_STRONG_TYPE(src_timestamp, int64);
    #endif//_src_timestamp__GUARD__

    #ifndef _net_timestamp__GUARD__
    #define _net_timestamp__GUARD__
    DECL_STRONG_TYPE(net_timestamp, int64);
    #endif//_net_timestamp__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _skey__GUARD__
    #define _skey__GUARD__
    DECL_STRONG_TYPE(skey, TickerKey);
    #endif//_skey__GUARD__

    
    class SpreadPrint_PKey {
        public:
        //using statements for all types used in this class
        using skey = spiderrock::protobuf::api::skey;

        private:
        skey m_skey{};

        public:
		skey get_skey() const {
            return m_skey;
        }
        void set_skey(const skey& value)  {
            m_skey = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadPrint_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadPrint_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const skey & value) { set_skey(value); }


        SpreadPrint_PKey() {}

        virtual ~SpreadPrint_PKey() {
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
        bool IncludeSkey() const {
            return (m_skey.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeSkey()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_skey.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeSkey()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_skey.setCodecTickerKey(tickerKeyLayout);
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
                        m_skey.setFromCodec(tickerKey);
                        break;
                    }
                }
            }
        }

    };
    

    class SpreadPrint {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpreadPrint_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using side = spiderrock::protobuf::api::side;
        using prt_size = spiderrock::protobuf::api::prt_size;
        using prt_price = spiderrock::protobuf::api::prt_price__double;
        using prt_exch = spiderrock::protobuf::api::prt_exch__OptExch;
        using src_timestamp = spiderrock::protobuf::api::src_timestamp;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        side m_side{};
        prt_size m_prt_size{};
        prt_price m_prt_price{};
        prt_exch m_prt_exch{};
        src_timestamp m_src_timestamp{};
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
        ticker get_ticker() const {
            return m_ticker;
        }		
        side get_side() const {
            return m_side;
        }		
        prt_size get_prt_size() const {
            return m_prt_size;
        }		
        prt_price get_prt_price() const {
            return m_prt_price;
        }		
        prt_exch get_prt_exch() const {
            return m_prt_exch;
        }		
        src_timestamp get_src_timestamp() const {
            return m_src_timestamp;
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
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_side(const side& value)  {
            m_side = value;
        }
        void set_prt_size(const prt_size& value)  {
            m_prt_size = value;
        }
        void set_prt_price(const prt_price& value)  {
            m_prt_price = value;
        }
        void set_prt_exch(const prt_exch& value)  {
            m_prt_exch = value;
        }
        void set_src_timestamp(const src_timestamp& value)  {
            m_src_timestamp = value;
        }
        void set_net_timestamp(const net_timestamp& value)  {
            m_net_timestamp = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadPrint::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const ticker & value) {
            set_ticker(value);
        }
        void set(const side & value) {
            set_side(value);
        }
        void set(const prt_size & value) {
            set_prt_size(value);
        }
        void set(const prt_price & value) {
            set_prt_price(value);
        }
        void set(const prt_exch & value) {
            set_prt_exch(value);
        }
        void set(const src_timestamp & value) {
            set_src_timestamp(value);
        }
        void set(const net_timestamp & value) {
            set_net_timestamp(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const SpreadPrint & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_side);
            set(value.m_prt_size);
            set(value.m_prt_price);
            set(value.m_prt_exch);
            set(value.m_src_timestamp);
            set(value.m_net_timestamp);
            set(value.m_timestamp);
        }

        SpreadPrint() {
            m__meta.set_message_type("SpreadPrint");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2930, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2930, length);
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
             *this = SpreadPrint{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludePrtSize() const {
            return !(m_prt_size == 0);
        }
        bool IncludePrtPrice() const {
            return !(m_prt_price == 0.0);
        }
        bool IncludeSrcTimestamp() const {
            return !(m_src_timestamp == 0);
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
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(100, tickerKeyLayout);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side)));
            if ( IncludePrtSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(106,m_prt_size);
            }
            if ( IncludePrtPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(109,m_prt_price);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_prt_exch)));
            if ( IncludeSrcTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(115,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(118,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(121, m_timestamp);
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
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 100, tickerKeyLayout);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side)));
            if ( IncludePrtSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,106,m_prt_size);
            }
            if ( IncludePrtPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,109,m_prt_price);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_prt_exch)));
            if ( IncludeSrcTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,115,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,118,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 121, m_timestamp);
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
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_prt_exch = static_cast<spiderrock::protobuf::api::OptExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_src_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 121: {
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

    template<> inline const auto SpreadPrint::get<SpreadPrint::_meta>() const { return SpreadPrint::_meta{ m__meta}; }
    template<> inline const auto SpreadPrint::get<SpreadPrint::pkey>() const { return SpreadPrint::pkey{ m_pkey}; }
    template<> inline const auto SpreadPrint::get<SpreadPrint::ticker>() const { return SpreadPrint::ticker{ m_ticker}; }
    template<> inline const auto SpreadPrint::get<SpreadPrint::side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_side)); }
    template<> inline const auto SpreadPrint::get<SpreadPrint::prt_size>() const { return m_prt_size; }
    template<> inline const auto SpreadPrint::get<SpreadPrint::prt_price>() const { return m_prt_price; }
    template<> inline const auto SpreadPrint::get<SpreadPrint::prt_exch>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>( m_prt_exch)); }
    template<> inline const auto SpreadPrint::get<SpreadPrint::src_timestamp>() const { return m_src_timestamp; }
    template<> inline const auto SpreadPrint::get<SpreadPrint::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto SpreadPrint::get<SpreadPrint::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpreadPrint_PKey::get<SpreadPrint_PKey::skey>() const { return SpreadPrint_PKey::skey{m_skey}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpreadPrint_PKey& m) {
        o << "\"skey\":{" << m.get<SpreadPrint_PKey::skey>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpreadPrint& m) {
        o << "\"_meta\":{" << m.get<SpreadPrint::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpreadPrint::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<SpreadPrint::ticker>() << "}";
        o << ",\"side\":" << (int64_t)m.get<SpreadPrint::side>();
        o << ",\"prt_size\":" << m.get<SpreadPrint::prt_size>();
        o << ",\"prt_price\":" << m.get<SpreadPrint::prt_price>();
        o << ",\"prt_exch\":" << (int64_t)m.get<SpreadPrint::prt_exch>();
        o << ",\"src_timestamp\":" << m.get<SpreadPrint::src_timestamp>();
        o << ",\"net_timestamp\":" << m.get<SpreadPrint::net_timestamp>();
        {
            std::time_t tt = m.get<SpreadPrint::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}