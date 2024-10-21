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

    #ifndef _locate_quan__GUARD__
    #define _locate_quan__GUARD__
    DECL_STRONG_TYPE(locate_quan, int32);
    #endif//_locate_quan__GUARD__

    #ifndef _locate_quan_used__GUARD__
    #define _locate_quan_used__GUARD__
    DECL_STRONG_TYPE(locate_quan_used, int32);
    #endif//_locate_quan_used__GUARD__

    #ifndef _available_locate_quan__GUARD__
    #define _available_locate_quan__GUARD__
    DECL_STRONG_TYPE(available_locate_quan, int32);
    #endif//_available_locate_quan__GUARD__

    #ifndef _is_locate_exempt__GUARD__
    #define _is_locate_exempt__GUARD__
    DECL_STRONG_TYPE(is_locate_exempt, spiderrock::protobuf::api::YesNo);
    #endif//_is_locate_exempt__GUARD__

    #ifndef _engine_name__GUARD__
    #define _engine_name__GUARD__
    DECL_STRONG_TYPE(engine_name, string);
    #endif//_engine_name__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _core_client_firm__GUARD__
    #define _core_client_firm__GUARD__
    DECL_STRONG_TYPE(core_client_firm, string);
    #endif//_core_client_firm__GUARD__

    #ifndef _locate_firm__GUARD__
    #define _locate_firm__GUARD__
    DECL_STRONG_TYPE(locate_firm, string);
    #endif//_locate_firm__GUARD__

    #ifndef _locate_pool__GUARD__
    #define _locate_pool__GUARD__
    DECL_STRONG_TYPE(locate_pool, string);
    #endif//_locate_pool__GUARD__

    #ifndef _trade_date__GUARD__
    #define _trade_date__GUARD__
    DECL_STRONG_TYPE(trade_date, DateKey);
    #endif//_trade_date__GUARD__

    
    class AvailableStockLocates_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using core_client_firm = spiderrock::protobuf::api::core_client_firm;
        using locate_firm = spiderrock::protobuf::api::locate_firm;
        using locate_pool = spiderrock::protobuf::api::locate_pool;
        using trade_date = spiderrock::protobuf::api::trade_date;

        private:
        ticker m_ticker{};
        core_client_firm m_core_client_firm{};
        locate_firm m_locate_firm{};
        locate_pool m_locate_pool{};
        trade_date m_trade_date{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
        core_client_firm get_core_client_firm() const {
            return m_core_client_firm;
        }
        locate_firm get_locate_firm() const {
            return m_locate_firm;
        }
        locate_pool get_locate_pool() const {
            return m_locate_pool;
        }
		trade_date get_trade_date() const {
            return m_trade_date;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_core_client_firm(const core_client_firm& value)  {
            m_core_client_firm = value;
        }
        void set_locate_firm(const locate_firm& value)  {
            m_locate_firm = value;
        }
        void set_locate_pool(const locate_pool& value)  {
            m_locate_pool = value;
        }
        void set_trade_date(const trade_date& value)  {
            m_trade_date = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AvailableStockLocates_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to AvailableStockLocates_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const core_client_firm & value) { set_core_client_firm(value); }
        void set(const locate_firm & value) { set_locate_firm(value); }
        void set(const locate_pool & value) { set_locate_pool(value); }
        void set(const trade_date & value) { set_trade_date(value); }


        AvailableStockLocates_PKey() {}

        virtual ~AvailableStockLocates_PKey() {
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
        bool IncludeCoreClientFirm() const {
            return !(m_core_client_firm.empty());
        }
        bool IncludeLocateFirm() const {
            return !(m_locate_firm.empty());
        }
        bool IncludeLocatePool() const {
            return !(m_locate_pool.empty());
        }
        bool IncludeTradeDate() const {
            return (m_trade_date.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout);
            }
            if ( IncludeCoreClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_core_client_firm);
            }
            if ( IncludeLocateFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(12,m_locate_firm);
            }
            if ( IncludeLocatePool()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(13,m_locate_pool);
            }
            if ( IncludeTradeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(15, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout);
            }
            if ( IncludeCoreClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_core_client_firm));
            }
            if ( IncludeLocateFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,12,static_cast<string>(m_locate_firm));
            }
            if ( IncludeLocatePool()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,13,static_cast<string>(m_locate_pool));
            }
            if ( IncludeTradeDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,15, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
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
                    case 11: {m_core_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 12: {m_locate_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 13: {m_locate_pool = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 15: {
                        auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                        m_trade_date.set_year(dateKey.year());
                        m_trade_date.set_month(dateKey.month());
                        m_trade_date.set_day(dateKey.day());
                        break;
                    }
                }
            }
        }

    };
    

    class AvailableStockLocates {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::AvailableStockLocates_PKey;
        using locate_quan = spiderrock::protobuf::api::locate_quan;
        using locate_quan_used = spiderrock::protobuf::api::locate_quan_used;
        using available_locate_quan = spiderrock::protobuf::api::available_locate_quan;
        using is_locate_exempt = spiderrock::protobuf::api::is_locate_exempt;
        using engine_name = spiderrock::protobuf::api::engine_name;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        locate_quan m_locate_quan{};
        locate_quan_used m_locate_quan_used{};
        available_locate_quan m_available_locate_quan{};
        is_locate_exempt m_is_locate_exempt{};
        engine_name m_engine_name{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        locate_quan get_locate_quan() const {
            return m_locate_quan;
        }		
        locate_quan_used get_locate_quan_used() const {
            return m_locate_quan_used;
        }		
        available_locate_quan get_available_locate_quan() const {
            return m_available_locate_quan;
        }		
        is_locate_exempt get_is_locate_exempt() const {
            return m_is_locate_exempt;
        }		
        engine_name get_engine_name() const {
            return m_engine_name;
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
        void set_locate_quan(const locate_quan& value)  {
            m_locate_quan = value;
        }
        void set_locate_quan_used(const locate_quan_used& value)  {
            m_locate_quan_used = value;
        }
        void set_available_locate_quan(const available_locate_quan& value)  {
            m_available_locate_quan = value;
        }
        void set_is_locate_exempt(const is_locate_exempt& value)  {
            m_is_locate_exempt = value;
        }
        void set_engine_name(const engine_name& value)  {
            m_engine_name = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AvailableStockLocates::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const locate_quan & value) {
            set_locate_quan(value);
        }
        void set(const locate_quan_used & value) {
            set_locate_quan_used(value);
        }
        void set(const available_locate_quan & value) {
            set_available_locate_quan(value);
        }
        void set(const is_locate_exempt & value) {
            set_is_locate_exempt(value);
        }
        void set(const engine_name & value) {
            set_engine_name(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const AvailableStockLocates & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_locate_quan);
            set(value.m_locate_quan_used);
            set(value.m_available_locate_quan);
            set(value.m_is_locate_exempt);
            set(value.m_engine_name);
            set(value.m_timestamp);
        }

        AvailableStockLocates() {
            m__meta.set_message_type("AvailableStockLocates");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1725, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1725, length);
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
             *this = AvailableStockLocates{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeLocateQuan() const {
            return !(m_locate_quan == 0);
        }
        bool IncludeLocateQuanUsed() const {
            return !(m_locate_quan_used == 0);
        }
        bool IncludeAvailableLocateQuan() const {
            return !(m_available_locate_quan == 0);
        }
        bool IncludeEngineName() const {
            return !(m_engine_name.empty());
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
            if ( IncludeLocateQuan()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(100,m_locate_quan);
            }
            if ( IncludeLocateQuanUsed()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(103,m_locate_quan_used);
            }
            if ( IncludeAvailableLocateQuan()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(106,m_available_locate_quan);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_locate_exempt)));
            if ( IncludeEngineName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(116,m_engine_name);
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
            if ( IncludeLocateQuan()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,100,m_locate_quan);
            }
            if ( IncludeLocateQuanUsed()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,103,m_locate_quan_used);
            }
            if ( IncludeAvailableLocateQuan()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,106,m_available_locate_quan);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_locate_exempt)));
            if ( IncludeEngineName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,116,static_cast<string>(m_engine_name));
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
                    case 100: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_locate_quan = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_locate_quan_used = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_available_locate_quan = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_locate_exempt = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 116: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_engine_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
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

    template<> inline const auto AvailableStockLocates::get<AvailableStockLocates::_meta>() const { return AvailableStockLocates::_meta{ m__meta}; }
    template<> inline const auto AvailableStockLocates::get<AvailableStockLocates::pkey>() const { return AvailableStockLocates::pkey{ m_pkey}; }
    template<> inline const auto AvailableStockLocates::get<AvailableStockLocates::locate_quan>() const { return m_locate_quan; }
    template<> inline const auto AvailableStockLocates::get<AvailableStockLocates::locate_quan_used>() const { return m_locate_quan_used; }
    template<> inline const auto AvailableStockLocates::get<AvailableStockLocates::available_locate_quan>() const { return m_available_locate_quan; }
    template<> inline const auto AvailableStockLocates::get<AvailableStockLocates::is_locate_exempt>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_locate_exempt)); }
    template<> inline const auto AvailableStockLocates::get<AvailableStockLocates::engine_name>() const { return m_engine_name; }
    template<> inline const auto AvailableStockLocates::get<AvailableStockLocates::timestamp>() const { return m_timestamp; }
    template<> inline const auto AvailableStockLocates_PKey::get<AvailableStockLocates_PKey::ticker>() const { return AvailableStockLocates_PKey::ticker{m_ticker}; }
    template<> inline const auto AvailableStockLocates_PKey::get<AvailableStockLocates_PKey::core_client_firm>() const { return m_core_client_firm; }
    template<> inline const auto AvailableStockLocates_PKey::get<AvailableStockLocates_PKey::locate_firm>() const { return m_locate_firm; }
    template<> inline const auto AvailableStockLocates_PKey::get<AvailableStockLocates_PKey::locate_pool>() const { return m_locate_pool; }
    template<> inline const auto AvailableStockLocates_PKey::get<AvailableStockLocates_PKey::trade_date>() const { return AvailableStockLocates_PKey::trade_date{m_trade_date}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const AvailableStockLocates_PKey& m) {
        o << "\"ticker\":{" << m.get<AvailableStockLocates_PKey::ticker>() << "}";
        o << ",\"core_client_firm\":\"" << m.get<AvailableStockLocates_PKey::core_client_firm>() << "\"";
        o << ",\"locate_firm\":\"" << m.get<AvailableStockLocates_PKey::locate_firm>() << "\"";
        o << ",\"locate_pool\":\"" << m.get<AvailableStockLocates_PKey::locate_pool>() << "\"";
        o << ",\"trade_date\":{" << m.get<AvailableStockLocates_PKey::trade_date>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const AvailableStockLocates& m) {
        o << "\"_meta\":{" << m.get<AvailableStockLocates::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<AvailableStockLocates::pkey>() << "}";
        o << ",\"locate_quan\":" << m.get<AvailableStockLocates::locate_quan>();
        o << ",\"locate_quan_used\":" << m.get<AvailableStockLocates::locate_quan_used>();
        o << ",\"available_locate_quan\":" << m.get<AvailableStockLocates::available_locate_quan>();
        o << ",\"is_locate_exempt\":" << (int64_t)m.get<AvailableStockLocates::is_locate_exempt>();
        o << ",\"engine_name\":\"" << m.get<AvailableStockLocates::engine_name>() << "\"";
        {
            std::time_t tt = m.get<AvailableStockLocates::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}