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

    #ifndef _time_zone__GUARD__
    #define _time_zone__GUARD__
    DECL_STRONG_TYPE(time_zone, spiderrock::protobuf::api::SRTimeZone);
    #endif//_time_zone__GUARD__

    #ifndef _market_day_type__GUARD__
    #define _market_day_type__GUARD__
    DECL_STRONG_TYPE(market_day_type, spiderrock::protobuf::api::MarketDayType);
    #endif//_market_day_type__GUARD__

    #ifndef _sr_close_mark_time__GUARD__
    #define _sr_close_mark_time__GUARD__
    DECL_STRONG_TYPE(sr_close_mark_time, std::chrono::nanoseconds);
    #endif//_sr_close_mark_time__GUARD__

    #ifndef _has_early_session__GUARD__
    #define _has_early_session__GUARD__
    DECL_STRONG_TYPE(has_early_session, spiderrock::protobuf::api::YesNo);
    #endif//_has_early_session__GUARD__

    #ifndef _early_pre_open_time__GUARD__
    #define _early_pre_open_time__GUARD__
    DECL_STRONG_TYPE(early_pre_open_time, std::chrono::nanoseconds);
    #endif//_early_pre_open_time__GUARD__

    #ifndef _early_session_open_time__GUARD__
    #define _early_session_open_time__GUARD__
    DECL_STRONG_TYPE(early_session_open_time, std::chrono::nanoseconds);
    #endif//_early_session_open_time__GUARD__

    #ifndef _early_session_close_time__GUARD__
    #define _early_session_close_time__GUARD__
    DECL_STRONG_TYPE(early_session_close_time, std::chrono::nanoseconds);
    #endif//_early_session_close_time__GUARD__

    #ifndef _has_regular_session__GUARD__
    #define _has_regular_session__GUARD__
    DECL_STRONG_TYPE(has_regular_session, spiderrock::protobuf::api::YesNo);
    #endif//_has_regular_session__GUARD__

    #ifndef _reg_pre_open_time__GUARD__
    #define _reg_pre_open_time__GUARD__
    DECL_STRONG_TYPE(reg_pre_open_time, std::chrono::nanoseconds);
    #endif//_reg_pre_open_time__GUARD__

    #ifndef _reg_session_open_time__GUARD__
    #define _reg_session_open_time__GUARD__
    DECL_STRONG_TYPE(reg_session_open_time, std::chrono::nanoseconds);
    #endif//_reg_session_open_time__GUARD__

    #ifndef _reg_session_close_time__GUARD__
    #define _reg_session_close_time__GUARD__
    DECL_STRONG_TYPE(reg_session_close_time, std::chrono::nanoseconds);
    #endif//_reg_session_close_time__GUARD__

    #ifndef _has_late_session__GUARD__
    #define _has_late_session__GUARD__
    DECL_STRONG_TYPE(has_late_session, spiderrock::protobuf::api::YesNo);
    #endif//_has_late_session__GUARD__

    #ifndef _late_pre_open_time__GUARD__
    #define _late_pre_open_time__GUARD__
    DECL_STRONG_TYPE(late_pre_open_time, std::chrono::nanoseconds);
    #endif//_late_pre_open_time__GUARD__

    #ifndef _late_session_open_time__GUARD__
    #define _late_session_open_time__GUARD__
    DECL_STRONG_TYPE(late_session_open_time, std::chrono::nanoseconds);
    #endif//_late_session_open_time__GUARD__

    #ifndef _late_session_close_time__GUARD__
    #define _late_session_close_time__GUARD__
    DECL_STRONG_TYPE(late_session_close_time, std::chrono::nanoseconds);
    #endif//_late_session_close_time__GUARD__

    #ifndef _has_ex_early_close__GUARD__
    #define _has_ex_early_close__GUARD__
    DECL_STRONG_TYPE(has_ex_early_close, spiderrock::protobuf::api::YesNo);
    #endif//_has_ex_early_close__GUARD__

    #ifndef _ex_early_close_time__GUARD__
    #define _ex_early_close_time__GUARD__
    DECL_STRONG_TYPE(ex_early_close_time, std::chrono::nanoseconds);
    #endif//_ex_early_close_time__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _sec_type__SpdrKeyType__GUARD__
    #define _sec_type__SpdrKeyType__GUARD__
    DECL_STRONG_TYPE(sec_type__SpdrKeyType, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__SpdrKeyType__GUARD__

    #ifndef _trade_date__GUARD__
    #define _trade_date__GUARD__
    DECL_STRONG_TYPE(trade_date, DateKey);
    #endif//_trade_date__GUARD__

    #ifndef _trading_period__TradingPeriod__GUARD__
    #define _trading_period__TradingPeriod__GUARD__
    DECL_STRONG_TYPE(trading_period__TradingPeriod, spiderrock::protobuf::api::TradingPeriod);
    #endif//_trading_period__TradingPeriod__GUARD__

    
    class MarketHoursConfig_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using trade_date = spiderrock::protobuf::api::trade_date;
        using trading_period = spiderrock::protobuf::api::trading_period__TradingPeriod;

        private:
        ticker m_ticker{};
        sec_type m_sec_type{};
        trade_date m_trade_date{};
        trading_period m_trading_period{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
        sec_type get_sec_type() const {
            return m_sec_type;
        }
		trade_date get_trade_date() const {
            return m_trade_date;
        }
        trading_period get_trading_period() const {
            return m_trading_period;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        void set_trade_date(const trade_date& value)  {
            m_trade_date = value;
        }
        void set_trading_period(const trading_period& value)  {
            m_trading_period = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to MarketHoursConfig_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to MarketHoursConfig_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const sec_type & value) { set_sec_type(value); }
        void set(const trade_date & value) { set_trade_date(value); }
        void set(const trading_period & value) { set_trading_period(value); }


        MarketHoursConfig_PKey() {}

        virtual ~MarketHoursConfig_PKey() {
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
        bool IncludeTradeDate() const {
            return (m_trade_date.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout_ticker);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeTradeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(12, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradingPeriod>(m_trading_period)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout_ticker);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeTradeDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,12, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradingPeriod>(m_trading_period)));
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
                    case 11: {m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 12: {
                        auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                        m_trade_date.set_year(dateKey.year());
                        m_trade_date.set_month(dateKey.month());
                        m_trade_date.set_day(dateKey.day());
                        break;
                    }
                    case 13: {m_trading_period = static_cast<spiderrock::protobuf::api::TradingPeriod>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class MarketHoursConfig {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::MarketHoursConfig_PKey;
        using time_zone = spiderrock::protobuf::api::time_zone;
        using market_day_type = spiderrock::protobuf::api::market_day_type;
        using sr_close_mark_time = spiderrock::protobuf::api::sr_close_mark_time;
        using has_early_session = spiderrock::protobuf::api::has_early_session;
        using early_pre_open_time = spiderrock::protobuf::api::early_pre_open_time;
        using early_session_open_time = spiderrock::protobuf::api::early_session_open_time;
        using early_session_close_time = spiderrock::protobuf::api::early_session_close_time;
        using has_regular_session = spiderrock::protobuf::api::has_regular_session;
        using reg_pre_open_time = spiderrock::protobuf::api::reg_pre_open_time;
        using reg_session_open_time = spiderrock::protobuf::api::reg_session_open_time;
        using reg_session_close_time = spiderrock::protobuf::api::reg_session_close_time;
        using has_late_session = spiderrock::protobuf::api::has_late_session;
        using late_pre_open_time = spiderrock::protobuf::api::late_pre_open_time;
        using late_session_open_time = spiderrock::protobuf::api::late_session_open_time;
        using late_session_close_time = spiderrock::protobuf::api::late_session_close_time;
        using has_ex_early_close = spiderrock::protobuf::api::has_ex_early_close;
        using ex_early_close_time = spiderrock::protobuf::api::ex_early_close_time;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        time_zone m_time_zone{};
        market_day_type m_market_day_type{};
        sr_close_mark_time m_sr_close_mark_time{};
        has_early_session m_has_early_session{};
        early_pre_open_time m_early_pre_open_time{};
        early_session_open_time m_early_session_open_time{};
        early_session_close_time m_early_session_close_time{};
        has_regular_session m_has_regular_session{};
        reg_pre_open_time m_reg_pre_open_time{};
        reg_session_open_time m_reg_session_open_time{};
        reg_session_close_time m_reg_session_close_time{};
        has_late_session m_has_late_session{};
        late_pre_open_time m_late_pre_open_time{};
        late_session_open_time m_late_session_open_time{};
        late_session_close_time m_late_session_close_time{};
        has_ex_early_close m_has_ex_early_close{};
        ex_early_close_time m_ex_early_close_time{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        time_zone get_time_zone() const {
            return m_time_zone;
        }		
        market_day_type get_market_day_type() const {
            return m_market_day_type;
        }		
        sr_close_mark_time get_sr_close_mark_time() const {
            return m_sr_close_mark_time;
        }		
        has_early_session get_has_early_session() const {
            return m_has_early_session;
        }		
        early_pre_open_time get_early_pre_open_time() const {
            return m_early_pre_open_time;
        }		
        early_session_open_time get_early_session_open_time() const {
            return m_early_session_open_time;
        }		
        early_session_close_time get_early_session_close_time() const {
            return m_early_session_close_time;
        }		
        has_regular_session get_has_regular_session() const {
            return m_has_regular_session;
        }		
        reg_pre_open_time get_reg_pre_open_time() const {
            return m_reg_pre_open_time;
        }		
        reg_session_open_time get_reg_session_open_time() const {
            return m_reg_session_open_time;
        }		
        reg_session_close_time get_reg_session_close_time() const {
            return m_reg_session_close_time;
        }		
        has_late_session get_has_late_session() const {
            return m_has_late_session;
        }		
        late_pre_open_time get_late_pre_open_time() const {
            return m_late_pre_open_time;
        }		
        late_session_open_time get_late_session_open_time() const {
            return m_late_session_open_time;
        }		
        late_session_close_time get_late_session_close_time() const {
            return m_late_session_close_time;
        }		
        has_ex_early_close get_has_ex_early_close() const {
            return m_has_ex_early_close;
        }		
        ex_early_close_time get_ex_early_close_time() const {
            return m_ex_early_close_time;
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
        void set_time_zone(const time_zone& value)  {
            m_time_zone = value;
        }
        void set_market_day_type(const market_day_type& value)  {
            m_market_day_type = value;
        }
        void set_sr_close_mark_time(const sr_close_mark_time& value)  {
            m_sr_close_mark_time = value;
        }
        void set_has_early_session(const has_early_session& value)  {
            m_has_early_session = value;
        }
        void set_early_pre_open_time(const early_pre_open_time& value)  {
            m_early_pre_open_time = value;
        }
        void set_early_session_open_time(const early_session_open_time& value)  {
            m_early_session_open_time = value;
        }
        void set_early_session_close_time(const early_session_close_time& value)  {
            m_early_session_close_time = value;
        }
        void set_has_regular_session(const has_regular_session& value)  {
            m_has_regular_session = value;
        }
        void set_reg_pre_open_time(const reg_pre_open_time& value)  {
            m_reg_pre_open_time = value;
        }
        void set_reg_session_open_time(const reg_session_open_time& value)  {
            m_reg_session_open_time = value;
        }
        void set_reg_session_close_time(const reg_session_close_time& value)  {
            m_reg_session_close_time = value;
        }
        void set_has_late_session(const has_late_session& value)  {
            m_has_late_session = value;
        }
        void set_late_pre_open_time(const late_pre_open_time& value)  {
            m_late_pre_open_time = value;
        }
        void set_late_session_open_time(const late_session_open_time& value)  {
            m_late_session_open_time = value;
        }
        void set_late_session_close_time(const late_session_close_time& value)  {
            m_late_session_close_time = value;
        }
        void set_has_ex_early_close(const has_ex_early_close& value)  {
            m_has_ex_early_close = value;
        }
        void set_ex_early_close_time(const ex_early_close_time& value)  {
            m_ex_early_close_time = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to MarketHoursConfig::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const time_zone & value) {
            set_time_zone(value);
        }
        void set(const market_day_type & value) {
            set_market_day_type(value);
        }
        void set(const sr_close_mark_time & value) {
            set_sr_close_mark_time(value);
        }
        void set(const has_early_session & value) {
            set_has_early_session(value);
        }
        void set(const early_pre_open_time & value) {
            set_early_pre_open_time(value);
        }
        void set(const early_session_open_time & value) {
            set_early_session_open_time(value);
        }
        void set(const early_session_close_time & value) {
            set_early_session_close_time(value);
        }
        void set(const has_regular_session & value) {
            set_has_regular_session(value);
        }
        void set(const reg_pre_open_time & value) {
            set_reg_pre_open_time(value);
        }
        void set(const reg_session_open_time & value) {
            set_reg_session_open_time(value);
        }
        void set(const reg_session_close_time & value) {
            set_reg_session_close_time(value);
        }
        void set(const has_late_session & value) {
            set_has_late_session(value);
        }
        void set(const late_pre_open_time & value) {
            set_late_pre_open_time(value);
        }
        void set(const late_session_open_time & value) {
            set_late_session_open_time(value);
        }
        void set(const late_session_close_time & value) {
            set_late_session_close_time(value);
        }
        void set(const has_ex_early_close & value) {
            set_has_ex_early_close(value);
        }
        void set(const ex_early_close_time & value) {
            set_ex_early_close_time(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const MarketHoursConfig & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_time_zone);
            set(value.m_market_day_type);
            set(value.m_sr_close_mark_time);
            set(value.m_has_early_session);
            set(value.m_early_pre_open_time);
            set(value.m_early_session_open_time);
            set(value.m_early_session_close_time);
            set(value.m_has_regular_session);
            set(value.m_reg_pre_open_time);
            set(value.m_reg_session_open_time);
            set(value.m_reg_session_close_time);
            set(value.m_has_late_session);
            set(value.m_late_pre_open_time);
            set(value.m_late_session_open_time);
            set(value.m_late_session_close_time);
            set(value.m_has_ex_early_close);
            set(value.m_ex_early_close_time);
            set(value.m_timestamp);
        }

        MarketHoursConfig() {
            m__meta.set_message_type("MarketHoursConfig");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4485, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4485, length);
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
             *this = MarketHoursConfig{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeSrCloseMarkTime() const {
            return (m_sr_close_mark_time.count() != 0);
        }
        bool IncludeEarlyPreOpenTime() const {
            return (m_early_pre_open_time.count() != 0);
        }
        bool IncludeEarlySessionOpenTime() const {
            return (m_early_session_open_time.count() != 0);
        }
        bool IncludeEarlySessionCloseTime() const {
            return (m_early_session_close_time.count() != 0);
        }
        bool IncludeRegPreOpenTime() const {
            return (m_reg_pre_open_time.count() != 0);
        }
        bool IncludeRegSessionOpenTime() const {
            return (m_reg_session_open_time.count() != 0);
        }
        bool IncludeRegSessionCloseTime() const {
            return (m_reg_session_close_time.count() != 0);
        }
        bool IncludeLatePreOpenTime() const {
            return (m_late_pre_open_time.count() != 0);
        }
        bool IncludeLateSessionOpenTime() const {
            return (m_late_session_open_time.count() != 0);
        }
        bool IncludeLateSessionCloseTime() const {
            return (m_late_session_close_time.count() != 0);
        }
        bool IncludeExEarlyCloseTime() const {
            return (m_ex_early_close_time.count() != 0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SRTimeZone>(m_time_zone)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketDayType>(m_market_day_type)));
            if ( IncludeSrCloseMarkTime()) {
                totalSize += SRProtobufCPP::FieldCodec::TimeSpanFieldSize(102, m_sr_close_mark_time);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_early_session)));
            if ( IncludeEarlyPreOpenTime()) {
                totalSize += SRProtobufCPP::FieldCodec::TimeSpanFieldSize(104, m_early_pre_open_time);
            }
            if ( IncludeEarlySessionOpenTime()) {
                totalSize += SRProtobufCPP::FieldCodec::TimeSpanFieldSize(105, m_early_session_open_time);
            }
            if ( IncludeEarlySessionCloseTime()) {
                totalSize += SRProtobufCPP::FieldCodec::TimeSpanFieldSize(106, m_early_session_close_time);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(107,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_regular_session)));
            if ( IncludeRegPreOpenTime()) {
                totalSize += SRProtobufCPP::FieldCodec::TimeSpanFieldSize(108, m_reg_pre_open_time);
            }
            if ( IncludeRegSessionOpenTime()) {
                totalSize += SRProtobufCPP::FieldCodec::TimeSpanFieldSize(109, m_reg_session_open_time);
            }
            if ( IncludeRegSessionCloseTime()) {
                totalSize += SRProtobufCPP::FieldCodec::TimeSpanFieldSize(110, m_reg_session_close_time);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(111,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_late_session)));
            if ( IncludeLatePreOpenTime()) {
                totalSize += SRProtobufCPP::FieldCodec::TimeSpanFieldSize(112, m_late_pre_open_time);
            }
            if ( IncludeLateSessionOpenTime()) {
                totalSize += SRProtobufCPP::FieldCodec::TimeSpanFieldSize(113, m_late_session_open_time);
            }
            if ( IncludeLateSessionCloseTime()) {
                totalSize += SRProtobufCPP::FieldCodec::TimeSpanFieldSize(114, m_late_session_close_time);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_ex_early_close)));
            if ( IncludeExEarlyCloseTime()) {
                totalSize += SRProtobufCPP::FieldCodec::TimeSpanFieldSize(116, m_ex_early_close_time);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(117, m_timestamp);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SRTimeZone>(m_time_zone)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketDayType>(m_market_day_type)));
            if ( IncludeSrCloseMarkTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeTimeSpan(dest, 102, m_sr_close_mark_time);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_early_session)));
            if ( IncludeEarlyPreOpenTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeTimeSpan(dest, 104, m_early_pre_open_time);
            }
            if ( IncludeEarlySessionOpenTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeTimeSpan(dest, 105, m_early_session_open_time);
            }
            if ( IncludeEarlySessionCloseTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeTimeSpan(dest, 106, m_early_session_close_time);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,107,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_regular_session)));
            if ( IncludeRegPreOpenTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeTimeSpan(dest, 108, m_reg_pre_open_time);
            }
            if ( IncludeRegSessionOpenTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeTimeSpan(dest, 109, m_reg_session_open_time);
            }
            if ( IncludeRegSessionCloseTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeTimeSpan(dest, 110, m_reg_session_close_time);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,111,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_late_session)));
            if ( IncludeLatePreOpenTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeTimeSpan(dest, 112, m_late_pre_open_time);
            }
            if ( IncludeLateSessionOpenTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeTimeSpan(dest, 113, m_late_session_open_time);
            }
            if ( IncludeLateSessionCloseTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeTimeSpan(dest, 114, m_late_session_close_time);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_ex_early_close)));
            if ( IncludeExEarlyCloseTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeTimeSpan(dest, 116, m_ex_early_close_time);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 117, m_timestamp);
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
                            m_time_zone = static_cast<spiderrock::protobuf::api::SRTimeZone>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 101: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_market_day_type = static_cast<spiderrock::protobuf::api::MarketDayType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 102: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_sr_close_mark_time = SRProtobufCPP::FieldCodec::DecodeTimeSpan(pos,max);
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_early_session = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 104: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_early_pre_open_time = SRProtobufCPP::FieldCodec::DecodeTimeSpan(pos,max);
                        }
                        break;
                    }
                    case 105: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_early_session_open_time = SRProtobufCPP::FieldCodec::DecodeTimeSpan(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_early_session_close_time = SRProtobufCPP::FieldCodec::DecodeTimeSpan(pos,max);
                        }
                        break;
                    }
                    case 107: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_regular_session = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 108: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_reg_pre_open_time = SRProtobufCPP::FieldCodec::DecodeTimeSpan(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_reg_session_open_time = SRProtobufCPP::FieldCodec::DecodeTimeSpan(pos,max);
                        }
                        break;
                    }
                    case 110: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_reg_session_close_time = SRProtobufCPP::FieldCodec::DecodeTimeSpan(pos,max);
                        }
                        break;
                    }
                    case 111: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_late_session = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_late_pre_open_time = SRProtobufCPP::FieldCodec::DecodeTimeSpan(pos,max);
                        }
                        break;
                    }
                    case 113: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_late_session_open_time = SRProtobufCPP::FieldCodec::DecodeTimeSpan(pos,max);
                        }
                        break;
                    }
                    case 114: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_late_session_close_time = SRProtobufCPP::FieldCodec::DecodeTimeSpan(pos,max);
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_ex_early_close = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 116: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_ex_early_close_time = SRProtobufCPP::FieldCodec::DecodeTimeSpan(pos,max);
                        }
                        break;
                    }
                    case 117: {
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

    template<> inline const auto MarketHoursConfig::get<MarketHoursConfig::_meta>() const { return MarketHoursConfig::_meta{ m__meta}; }
    template<> inline const auto MarketHoursConfig::get<MarketHoursConfig::pkey>() const { return MarketHoursConfig::pkey{ m_pkey}; }
    template<> inline const auto MarketHoursConfig::get<MarketHoursConfig::time_zone>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SRTimeZone>( m_time_zone)); }
    template<> inline const auto MarketHoursConfig::get<MarketHoursConfig::market_day_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketDayType>( m_market_day_type)); }
    template<> inline const auto MarketHoursConfig::get<MarketHoursConfig::sr_close_mark_time>() const { return m_sr_close_mark_time; }
    template<> inline const auto MarketHoursConfig::get<MarketHoursConfig::has_early_session>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_early_session)); }
    template<> inline const auto MarketHoursConfig::get<MarketHoursConfig::early_pre_open_time>() const { return m_early_pre_open_time; }
    template<> inline const auto MarketHoursConfig::get<MarketHoursConfig::early_session_open_time>() const { return m_early_session_open_time; }
    template<> inline const auto MarketHoursConfig::get<MarketHoursConfig::early_session_close_time>() const { return m_early_session_close_time; }
    template<> inline const auto MarketHoursConfig::get<MarketHoursConfig::has_regular_session>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_regular_session)); }
    template<> inline const auto MarketHoursConfig::get<MarketHoursConfig::reg_pre_open_time>() const { return m_reg_pre_open_time; }
    template<> inline const auto MarketHoursConfig::get<MarketHoursConfig::reg_session_open_time>() const { return m_reg_session_open_time; }
    template<> inline const auto MarketHoursConfig::get<MarketHoursConfig::reg_session_close_time>() const { return m_reg_session_close_time; }
    template<> inline const auto MarketHoursConfig::get<MarketHoursConfig::has_late_session>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_late_session)); }
    template<> inline const auto MarketHoursConfig::get<MarketHoursConfig::late_pre_open_time>() const { return m_late_pre_open_time; }
    template<> inline const auto MarketHoursConfig::get<MarketHoursConfig::late_session_open_time>() const { return m_late_session_open_time; }
    template<> inline const auto MarketHoursConfig::get<MarketHoursConfig::late_session_close_time>() const { return m_late_session_close_time; }
    template<> inline const auto MarketHoursConfig::get<MarketHoursConfig::has_ex_early_close>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_ex_early_close)); }
    template<> inline const auto MarketHoursConfig::get<MarketHoursConfig::ex_early_close_time>() const { return m_ex_early_close_time; }
    template<> inline const auto MarketHoursConfig::get<MarketHoursConfig::timestamp>() const { return m_timestamp; }
    template<> inline const auto MarketHoursConfig_PKey::get<MarketHoursConfig_PKey::ticker>() const { return MarketHoursConfig_PKey::ticker{m_ticker}; }
    template<> inline const auto MarketHoursConfig_PKey::get<MarketHoursConfig_PKey::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type));}
    template<> inline const auto MarketHoursConfig_PKey::get<MarketHoursConfig_PKey::trade_date>() const { return MarketHoursConfig_PKey::trade_date{m_trade_date}; }
    template<> inline const auto MarketHoursConfig_PKey::get<MarketHoursConfig_PKey::trading_period>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradingPeriod>(m_trading_period));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const MarketHoursConfig_PKey& m) {
        o << "\"ticker\":{" << m.get<MarketHoursConfig_PKey::ticker>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<MarketHoursConfig_PKey::sec_type>();
        o << ",\"trade_date\":{" << m.get<MarketHoursConfig_PKey::trade_date>() << "}";
        o << ",\"trading_period\":" << (int64_t)m.get<MarketHoursConfig_PKey::trading_period>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const MarketHoursConfig& m) {
        o << "\"_meta\":{" << m.get<MarketHoursConfig::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<MarketHoursConfig::pkey>() << "}";
        o << ",\"time_zone\":" << (int64_t)m.get<MarketHoursConfig::time_zone>();
        o << ",\"market_day_type\":" << (int64_t)m.get<MarketHoursConfig::market_day_type>();
        o << ",\"sr_close_mark_time\":\"" << m.get<MarketHoursConfig::sr_close_mark_time>().count() << "\"";
        o << ",\"has_early_session\":" << (int64_t)m.get<MarketHoursConfig::has_early_session>();
        o << ",\"early_pre_open_time\":\"" << m.get<MarketHoursConfig::early_pre_open_time>().count() << "\"";
        o << ",\"early_session_open_time\":\"" << m.get<MarketHoursConfig::early_session_open_time>().count() << "\"";
        o << ",\"early_session_close_time\":\"" << m.get<MarketHoursConfig::early_session_close_time>().count() << "\"";
        o << ",\"has_regular_session\":" << (int64_t)m.get<MarketHoursConfig::has_regular_session>();
        o << ",\"reg_pre_open_time\":\"" << m.get<MarketHoursConfig::reg_pre_open_time>().count() << "\"";
        o << ",\"reg_session_open_time\":\"" << m.get<MarketHoursConfig::reg_session_open_time>().count() << "\"";
        o << ",\"reg_session_close_time\":\"" << m.get<MarketHoursConfig::reg_session_close_time>().count() << "\"";
        o << ",\"has_late_session\":" << (int64_t)m.get<MarketHoursConfig::has_late_session>();
        o << ",\"late_pre_open_time\":\"" << m.get<MarketHoursConfig::late_pre_open_time>().count() << "\"";
        o << ",\"late_session_open_time\":\"" << m.get<MarketHoursConfig::late_session_open_time>().count() << "\"";
        o << ",\"late_session_close_time\":\"" << m.get<MarketHoursConfig::late_session_close_time>().count() << "\"";
        o << ",\"has_ex_early_close\":" << (int64_t)m.get<MarketHoursConfig::has_ex_early_close>();
        o << ",\"ex_early_close_time\":\"" << m.get<MarketHoursConfig::ex_early_close_time>().count() << "\"";
        {
            std::time_t tt = m.get<MarketHoursConfig::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}