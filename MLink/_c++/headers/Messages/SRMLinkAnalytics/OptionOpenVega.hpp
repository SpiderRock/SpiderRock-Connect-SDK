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

    #ifndef _trading_date__DateKey__GUARD__
    #define _trading_date__DateKey__GUARD__
    DECL_STRONG_TYPE(trading_date__DateKey, DateKey);
    #endif//_trading_date__DateKey__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _open_int__GUARD__
    #define _open_int__GUARD__
    DECL_STRONG_TYPE(open_int, int32);
    #endif//_open_int__GUARD__

    #ifndef _volume__GUARD__
    #define _volume__GUARD__
    DECL_STRONG_TYPE(volume, int32);
    #endif//_volume__GUARD__

    #ifndef _open_vega__GUARD__
    #define _open_vega__GUARD__
    DECL_STRONG_TYPE(open_vega, float);
    #endif//_open_vega__GUARD__

    #ifndef _vega_volume__GUARD__
    #define _vega_volume__GUARD__
    DECL_STRONG_TYPE(vega_volume, float);
    #endif//_vega_volume__GUARD__

    #ifndef _num_options__GUARD__
    #define _num_options__GUARD__
    DECL_STRONG_TYPE(num_options, int32);
    #endif//_num_options__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ekey__GUARD__
    #define _ekey__GUARD__
    DECL_STRONG_TYPE(ekey, ExpiryKey);
    #endif//_ekey__GUARD__

    
    class OptionOpenVega_PKey {
        public:
        //using statements for all types used in this class
        using ekey = spiderrock::protobuf::api::ekey;

        private:
        ekey m_ekey{};

        public:
		ekey get_ekey() const {
            return m_ekey;
        }
        void set_ekey(const ekey& value)  {
            m_ekey = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionOpenVega_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionOpenVega_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ekey & value) { set_ekey(value); }


        OptionOpenVega_PKey() {}

        virtual ~OptionOpenVega_PKey() {
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
        bool IncludeEkey() const {
            return (m_ekey.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_ekey;
                m_ekey.setCodecExpiryKey(expiryKeyLayout_ekey);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(10,expiryKeyLayout_ekey);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_ekey;
                m_ekey.setCodecExpiryKey(expiryKeyLayout_ekey);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 10, expiryKeyLayout_ekey);
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
                        m_ekey.setFromCodec(expiryKey);
                        break;
                    }
                }
            }
        }

    };
    

    class OptionOpenVega {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::OptionOpenVega_PKey;
        using trading_date = spiderrock::protobuf::api::trading_date__DateKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using open_int = spiderrock::protobuf::api::open_int;
        using volume = spiderrock::protobuf::api::volume;
        using open_vega = spiderrock::protobuf::api::open_vega;
        using vega_volume = spiderrock::protobuf::api::vega_volume;
        using num_options = spiderrock::protobuf::api::num_options;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        trading_date m_trading_date{};
        ticker m_ticker{};
        open_int m_open_int{};
        volume m_volume{};
        open_vega m_open_vega{};
        vega_volume m_vega_volume{};
        num_options m_num_options{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        trading_date get_trading_date() const {
            return m_trading_date;
        }		
        ticker get_ticker() const {
            return m_ticker;
        }		
        open_int get_open_int() const {
            return m_open_int;
        }		
        volume get_volume() const {
            return m_volume;
        }		
        open_vega get_open_vega() const {
            return m_open_vega;
        }		
        vega_volume get_vega_volume() const {
            return m_vega_volume;
        }		
        num_options get_num_options() const {
            return m_num_options;
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
        void set_trading_date(const trading_date& value)  {
            m_trading_date = value;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_open_int(const open_int& value)  {
            m_open_int = value;
        }
        void set_volume(const volume& value)  {
            m_volume = value;
        }
        void set_open_vega(const open_vega& value)  {
            m_open_vega = value;
        }
        void set_vega_volume(const vega_volume& value)  {
            m_vega_volume = value;
        }
        void set_num_options(const num_options& value)  {
            m_num_options = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionOpenVega::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const trading_date & value) {
            set_trading_date(value);
        }
        void set(const ticker & value) {
            set_ticker(value);
        }
        void set(const open_int & value) {
            set_open_int(value);
        }
        void set(const volume & value) {
            set_volume(value);
        }
        void set(const open_vega & value) {
            set_open_vega(value);
        }
        void set(const vega_volume & value) {
            set_vega_volume(value);
        }
        void set(const num_options & value) {
            set_num_options(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const OptionOpenVega & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_trading_date);
            set(value.m_ticker);
            set(value.m_open_int);
            set(value.m_volume);
            set(value.m_open_vega);
            set(value.m_vega_volume);
            set(value.m_num_options);
            set(value.m_timestamp);
        }

        OptionOpenVega() {
            m__meta.set_message_type("OptionOpenVega");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3235, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3235, length);
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
             *this = OptionOpenVega{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeTradingDate() const {
            return (m_trading_date.ByteSizeLong() > 0);
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeOpenInt() const {
            return !(m_open_int == 0);
        }
        bool IncludeVolume() const {
            return !(m_volume == 0);
        }
        bool IncludeOpenVega() const {
            return !(m_open_vega == 0.0);
        }
        bool IncludeVegaVolume() const {
            return !(m_vega_volume == 0.0);
        }
        bool IncludeNumOptions() const {
            return !(m_num_options == 0);
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
            if ( IncludeTradingDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(100, m_trading_date.get_year(), m_trading_date.get_month(), m_trading_date.get_day());
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(103, tickerKeyLayout_ticker);
            }
            if ( IncludeOpenInt()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(106,m_open_int);
            }
            if ( IncludeVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(109,m_volume);
            }
            if ( IncludeOpenVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_open_vega);
            }
            if ( IncludeVegaVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_vega_volume);
            }
            if ( IncludeNumOptions()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(118,m_num_options);
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
            if ( IncludeTradingDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,100, m_trading_date.get_year(), m_trading_date.get_month(), m_trading_date.get_day());
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 103, tickerKeyLayout_ticker);
            }
            if ( IncludeOpenInt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,106,m_open_int);
            }
            if ( IncludeVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,109,m_volume);
            }
            if ( IncludeOpenVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_open_vega);
            }
            if ( IncludeVegaVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_vega_volume);
            }
            if ( IncludeNumOptions()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,118,m_num_options);
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
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                            m_trading_date.set_year(dateKey.year());
                            m_trading_date.set_month(dateKey.month());
                            m_trading_date.set_day(dateKey.day());
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_open_int = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_open_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vega_volume = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_options = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
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

    template<> inline const auto OptionOpenVega::get<OptionOpenVega::_meta>() const { return OptionOpenVega::_meta{ m__meta}; }
    template<> inline const auto OptionOpenVega::get<OptionOpenVega::pkey>() const { return OptionOpenVega::pkey{ m_pkey}; }
    template<> inline const auto OptionOpenVega::get<OptionOpenVega::trading_date>() const { return OptionOpenVega::trading_date{ m_trading_date}; }
    template<> inline const auto OptionOpenVega::get<OptionOpenVega::ticker>() const { return OptionOpenVega::ticker{ m_ticker}; }
    template<> inline const auto OptionOpenVega::get<OptionOpenVega::open_int>() const { return m_open_int; }
    template<> inline const auto OptionOpenVega::get<OptionOpenVega::volume>() const { return m_volume; }
    template<> inline const auto OptionOpenVega::get<OptionOpenVega::open_vega>() const { return m_open_vega; }
    template<> inline const auto OptionOpenVega::get<OptionOpenVega::vega_volume>() const { return m_vega_volume; }
    template<> inline const auto OptionOpenVega::get<OptionOpenVega::num_options>() const { return m_num_options; }
    template<> inline const auto OptionOpenVega::get<OptionOpenVega::timestamp>() const { return m_timestamp; }
    template<> inline const auto OptionOpenVega_PKey::get<OptionOpenVega_PKey::ekey>() const { return OptionOpenVega_PKey::ekey{m_ekey}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const OptionOpenVega_PKey& m) {
        o << "\"ekey\":{" << m.get<OptionOpenVega_PKey::ekey>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const OptionOpenVega& m) {
        o << "\"_meta\":{" << m.get<OptionOpenVega::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<OptionOpenVega::pkey>() << "}";
        o << ",\"trading_date\":{" << m.get<OptionOpenVega::trading_date>() << "}";
        o << ",\"ticker\":{" << m.get<OptionOpenVega::ticker>() << "}";
        o << ",\"open_int\":" << m.get<OptionOpenVega::open_int>();
        o << ",\"volume\":" << m.get<OptionOpenVega::volume>();
        o << ",\"open_vega\":" << m.get<OptionOpenVega::open_vega>();
        o << ",\"vega_volume\":" << m.get<OptionOpenVega::vega_volume>();
        o << ",\"num_options\":" << m.get<OptionOpenVega::num_options>();
        {
            std::time_t tt = m.get<OptionOpenVega::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}