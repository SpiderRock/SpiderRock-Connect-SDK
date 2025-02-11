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

    #ifndef _security_id__int32__GUARD__
    #define _security_id__int32__GUARD__
    DECL_STRONG_TYPE(security_id__int32, int32);
    #endif//_security_id__int32__GUARD__

    #ifndef _alt_id__GUARD__
    #define _alt_id__GUARD__
    DECL_STRONG_TYPE(alt_id, int32);
    #endif//_alt_id__GUARD__

    #ifndef _day_number__GUARD__
    #define _day_number__GUARD__
    DECL_STRONG_TYPE(day_number, int32);
    #endif//_day_number__GUARD__

    #ifndef _openprice__GUARD__
    #define _openprice__GUARD__
    DECL_STRONG_TYPE(openprice, float);
    #endif//_openprice__GUARD__

    #ifndef _highprice__GUARD__
    #define _highprice__GUARD__
    DECL_STRONG_TYPE(highprice, float);
    #endif//_highprice__GUARD__

    #ifndef _lowprice__GUARD__
    #define _lowprice__GUARD__
    DECL_STRONG_TYPE(lowprice, float);
    #endif//_lowprice__GUARD__

    #ifndef _closeprice__GUARD__
    #define _closeprice__GUARD__
    DECL_STRONG_TYPE(closeprice, float);
    #endif//_closeprice__GUARD__

    #ifndef _pr_close__GUARD__
    #define _pr_close__GUARD__
    DECL_STRONG_TYPE(pr_close, float);
    #endif//_pr_close__GUARD__

    #ifndef _pr_close_unadj__GUARD__
    #define _pr_close_unadj__GUARD__
    DECL_STRONG_TYPE(pr_close_unadj, float);
    #endif//_pr_close_unadj__GUARD__

    #ifndef _week52_high__GUARD__
    #define _week52_high__GUARD__
    DECL_STRONG_TYPE(week52_high, double);
    #endif//_week52_high__GUARD__

    #ifndef _week52_high_date__GUARD__
    #define _week52_high_date__GUARD__
    DECL_STRONG_TYPE(week52_high_date, DateKey);
    #endif//_week52_high_date__GUARD__

    #ifndef _week52_low__GUARD__
    #define _week52_low__GUARD__
    DECL_STRONG_TYPE(week52_low, double);
    #endif//_week52_low__GUARD__

    #ifndef _week52_low_date__GUARD__
    #define _week52_low_date__GUARD__
    DECL_STRONG_TYPE(week52_low_date, DateKey);
    #endif//_week52_low_date__GUARD__

    #ifndef _avg_volume__GUARD__
    #define _avg_volume__GUARD__
    DECL_STRONG_TYPE(avg_volume, float);
    #endif//_avg_volume__GUARD__

    #ifndef _ccvar__GUARD__
    #define _ccvar__GUARD__
    DECL_STRONG_TYPE(ccvar, double);
    #endif//_ccvar__GUARD__

    #ifndef _hlvar__GUARD__
    #define _hlvar__GUARD__
    DECL_STRONG_TYPE(hlvar, double);
    #endif//_hlvar__GUARD__

    #ifndef _dayreturn__GUARD__
    #define _dayreturn__GUARD__
    DECL_STRONG_TYPE(dayreturn, float);
    #endif//_dayreturn__GUARD__

    #ifndef _returnfactor__GUARD__
    #define _returnfactor__GUARD__
    DECL_STRONG_TYPE(returnfactor, float);
    #endif//_returnfactor__GUARD__

    #ifndef _cumreturnfactor__GUARD__
    #define _cumreturnfactor__GUARD__
    DECL_STRONG_TYPE(cumreturnfactor, float);
    #endif//_cumreturnfactor__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _tradingdate__GUARD__
    #define _tradingdate__GUARD__
    DECL_STRONG_TYPE(tradingdate, DateKey);
    #endif//_tradingdate__GUARD__

    
    class TickerAnalytics_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using tradingdate = spiderrock::protobuf::api::tradingdate;

        private:
        ticker m_ticker{};
        tradingdate m_tradingdate{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
		tradingdate get_tradingdate() const {
            return m_tradingdate;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_tradingdate(const tradingdate& value)  {
            m_tradingdate = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to TickerAnalytics_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to TickerAnalytics_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const tradingdate & value) { set_tradingdate(value); }


        TickerAnalytics_PKey() {}

        virtual ~TickerAnalytics_PKey() {
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
        bool IncludeTradingdate() const {
            return (m_tradingdate.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout_ticker);
            }
            if ( IncludeTradingdate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(11, m_tradingdate.get_year(), m_tradingdate.get_month(), m_tradingdate.get_day());
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout_ticker);
            }
            if ( IncludeTradingdate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,11, m_tradingdate.get_year(), m_tradingdate.get_month(), m_tradingdate.get_day());
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
                    case 11: {
                        auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                        m_tradingdate.set_year(dateKey.year());
                        m_tradingdate.set_month(dateKey.month());
                        m_tradingdate.set_day(dateKey.day());
                        break;
                    }
                }
            }
        }

    };
    

    class TickerAnalytics {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::TickerAnalytics_PKey;
        using security_id = spiderrock::protobuf::api::security_id__int32;
        using alt_id = spiderrock::protobuf::api::alt_id;
        using day_number = spiderrock::protobuf::api::day_number;
        using openprice = spiderrock::protobuf::api::openprice;
        using highprice = spiderrock::protobuf::api::highprice;
        using lowprice = spiderrock::protobuf::api::lowprice;
        using closeprice = spiderrock::protobuf::api::closeprice;
        using pr_close = spiderrock::protobuf::api::pr_close;
        using pr_close_unadj = spiderrock::protobuf::api::pr_close_unadj;
        using week52_high = spiderrock::protobuf::api::week52_high;
        using week52_high_date = spiderrock::protobuf::api::week52_high_date;
        using week52_low = spiderrock::protobuf::api::week52_low;
        using week52_low_date = spiderrock::protobuf::api::week52_low_date;
        using avg_volume = spiderrock::protobuf::api::avg_volume;
        using ccvar = spiderrock::protobuf::api::ccvar;
        using hlvar = spiderrock::protobuf::api::hlvar;
        using dayreturn = spiderrock::protobuf::api::dayreturn;
        using returnfactor = spiderrock::protobuf::api::returnfactor;
        using cumreturnfactor = spiderrock::protobuf::api::cumreturnfactor;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        security_id m_security_id{};
        alt_id m_alt_id{};
        day_number m_day_number{};
        openprice m_openprice{};
        highprice m_highprice{};
        lowprice m_lowprice{};
        closeprice m_closeprice{};
        pr_close m_pr_close{};
        pr_close_unadj m_pr_close_unadj{};
        week52_high m_week52_high{};
        week52_high_date m_week52_high_date{};
        week52_low m_week52_low{};
        week52_low_date m_week52_low_date{};
        avg_volume m_avg_volume{};
        ccvar m_ccvar{};
        hlvar m_hlvar{};
        dayreturn m_dayreturn{};
        returnfactor m_returnfactor{};
        cumreturnfactor m_cumreturnfactor{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        security_id get_security_id() const {
            return m_security_id;
        }		
        alt_id get_alt_id() const {
            return m_alt_id;
        }		
        day_number get_day_number() const {
            return m_day_number;
        }		
        openprice get_openprice() const {
            return m_openprice;
        }		
        highprice get_highprice() const {
            return m_highprice;
        }		
        lowprice get_lowprice() const {
            return m_lowprice;
        }		
        closeprice get_closeprice() const {
            return m_closeprice;
        }		
        pr_close get_pr_close() const {
            return m_pr_close;
        }		
        pr_close_unadj get_pr_close_unadj() const {
            return m_pr_close_unadj;
        }		
        week52_high get_week52_high() const {
            return m_week52_high;
        }		
        week52_high_date get_week52_high_date() const {
            return m_week52_high_date;
        }		
        week52_low get_week52_low() const {
            return m_week52_low;
        }		
        week52_low_date get_week52_low_date() const {
            return m_week52_low_date;
        }		
        avg_volume get_avg_volume() const {
            return m_avg_volume;
        }		
        ccvar get_ccvar() const {
            return m_ccvar;
        }		
        hlvar get_hlvar() const {
            return m_hlvar;
        }		
        dayreturn get_dayreturn() const {
            return m_dayreturn;
        }		
        returnfactor get_returnfactor() const {
            return m_returnfactor;
        }		
        cumreturnfactor get_cumreturnfactor() const {
            return m_cumreturnfactor;
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
        void set_security_id(const security_id& value)  {
            m_security_id = value;
        }
        void set_alt_id(const alt_id& value)  {
            m_alt_id = value;
        }
        void set_day_number(const day_number& value)  {
            m_day_number = value;
        }
        void set_openprice(const openprice& value)  {
            m_openprice = value;
        }
        void set_highprice(const highprice& value)  {
            m_highprice = value;
        }
        void set_lowprice(const lowprice& value)  {
            m_lowprice = value;
        }
        void set_closeprice(const closeprice& value)  {
            m_closeprice = value;
        }
        void set_pr_close(const pr_close& value)  {
            m_pr_close = value;
        }
        void set_pr_close_unadj(const pr_close_unadj& value)  {
            m_pr_close_unadj = value;
        }
        void set_week52_high(const week52_high& value)  {
            m_week52_high = value;
        }
        void set_week52_high_date(const week52_high_date& value)  {
            m_week52_high_date = value;
        }
        void set_week52_low(const week52_low& value)  {
            m_week52_low = value;
        }
        void set_week52_low_date(const week52_low_date& value)  {
            m_week52_low_date = value;
        }
        void set_avg_volume(const avg_volume& value)  {
            m_avg_volume = value;
        }
        void set_ccvar(const ccvar& value)  {
            m_ccvar = value;
        }
        void set_hlvar(const hlvar& value)  {
            m_hlvar = value;
        }
        void set_dayreturn(const dayreturn& value)  {
            m_dayreturn = value;
        }
        void set_returnfactor(const returnfactor& value)  {
            m_returnfactor = value;
        }
        void set_cumreturnfactor(const cumreturnfactor& value)  {
            m_cumreturnfactor = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to TickerAnalytics::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const security_id & value) {
            set_security_id(value);
        }
        void set(const alt_id & value) {
            set_alt_id(value);
        }
        void set(const day_number & value) {
            set_day_number(value);
        }
        void set(const openprice & value) {
            set_openprice(value);
        }
        void set(const highprice & value) {
            set_highprice(value);
        }
        void set(const lowprice & value) {
            set_lowprice(value);
        }
        void set(const closeprice & value) {
            set_closeprice(value);
        }
        void set(const pr_close & value) {
            set_pr_close(value);
        }
        void set(const pr_close_unadj & value) {
            set_pr_close_unadj(value);
        }
        void set(const week52_high & value) {
            set_week52_high(value);
        }
        void set(const week52_high_date & value) {
            set_week52_high_date(value);
        }
        void set(const week52_low & value) {
            set_week52_low(value);
        }
        void set(const week52_low_date & value) {
            set_week52_low_date(value);
        }
        void set(const avg_volume & value) {
            set_avg_volume(value);
        }
        void set(const ccvar & value) {
            set_ccvar(value);
        }
        void set(const hlvar & value) {
            set_hlvar(value);
        }
        void set(const dayreturn & value) {
            set_dayreturn(value);
        }
        void set(const returnfactor & value) {
            set_returnfactor(value);
        }
        void set(const cumreturnfactor & value) {
            set_cumreturnfactor(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const TickerAnalytics & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_security_id);
            set(value.m_alt_id);
            set(value.m_day_number);
            set(value.m_openprice);
            set(value.m_highprice);
            set(value.m_lowprice);
            set(value.m_closeprice);
            set(value.m_pr_close);
            set(value.m_pr_close_unadj);
            set(value.m_week52_high);
            set(value.m_week52_high_date);
            set(value.m_week52_low);
            set(value.m_week52_low_date);
            set(value.m_avg_volume);
            set(value.m_ccvar);
            set(value.m_hlvar);
            set(value.m_dayreturn);
            set(value.m_returnfactor);
            set(value.m_cumreturnfactor);
            set(value.m_timestamp);
        }

        TickerAnalytics() {
            m__meta.set_message_type("TickerAnalytics");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3255, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3255, length);
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
             *this = TickerAnalytics{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeSecurityId() const {
            return !(m_security_id == 0);
        }
        bool IncludeAltId() const {
            return !(m_alt_id == 0);
        }
        bool IncludeDayNumber() const {
            return !(m_day_number == 0);
        }
        bool IncludeOpenprice() const {
            return !(m_openprice == 0.0);
        }
        bool IncludeHighprice() const {
            return !(m_highprice == 0.0);
        }
        bool IncludeLowprice() const {
            return !(m_lowprice == 0.0);
        }
        bool IncludeCloseprice() const {
            return !(m_closeprice == 0.0);
        }
        bool IncludePrClose() const {
            return !(m_pr_close == 0.0);
        }
        bool IncludePrCloseUnadj() const {
            return !(m_pr_close_unadj == 0.0);
        }
        bool IncludeWeek52High() const {
            return !(m_week52_high == 0.0);
        }
        bool IncludeWeek52HighDate() const {
            return (m_week52_high_date.ByteSizeLong() > 0);
        }
        bool IncludeWeek52Low() const {
            return !(m_week52_low == 0.0);
        }
        bool IncludeWeek52LowDate() const {
            return (m_week52_low_date.ByteSizeLong() > 0);
        }
        bool IncludeAvgVolume() const {
            return !(m_avg_volume == 0.0);
        }
        bool IncludeCcvar() const {
            return !(m_ccvar == 0.0);
        }
        bool IncludeHlvar() const {
            return !(m_hlvar == 0.0);
        }
        bool IncludeDayreturn() const {
            return !(m_dayreturn == 0.0);
        }
        bool IncludeReturnfactor() const {
            return !(m_returnfactor == 0.0);
        }
        bool IncludeCumreturnfactor() const {
            return !(m_cumreturnfactor == 0.0);
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
            if ( IncludeSecurityId()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(100,m_security_id);
            }
            if ( IncludeAltId()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(103,m_alt_id);
            }
            if ( IncludeDayNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(106,m_day_number);
            }
            if ( IncludeOpenprice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_openprice);
            }
            if ( IncludeHighprice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_highprice);
            }
            if ( IncludeLowprice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_lowprice);
            }
            if ( IncludeCloseprice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_closeprice);
            }
            if ( IncludePrClose()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_pr_close);
            }
            if ( IncludePrCloseUnadj()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_pr_close_unadj);
            }
            if ( IncludeWeek52High()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(127,m_week52_high);
            }
            if ( IncludeWeek52HighDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(130, m_week52_high_date.get_year(), m_week52_high_date.get_month(), m_week52_high_date.get_day());
            }
            if ( IncludeWeek52Low()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(133,m_week52_low);
            }
            if ( IncludeWeek52LowDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(136, m_week52_low_date.get_year(), m_week52_low_date.get_month(), m_week52_low_date.get_day());
            }
            if ( IncludeAvgVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_avg_volume);
            }
            if ( IncludeCcvar()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(142,m_ccvar);
            }
            if ( IncludeHlvar()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(145,m_hlvar);
            }
            if ( IncludeDayreturn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(148,m_dayreturn);
            }
            if ( IncludeReturnfactor()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(151,m_returnfactor);
            }
            if ( IncludeCumreturnfactor()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(154,m_cumreturnfactor);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(157, m_timestamp);
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
            if ( IncludeSecurityId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,100,m_security_id);
            }
            if ( IncludeAltId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,103,m_alt_id);
            }
            if ( IncludeDayNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,106,m_day_number);
            }
            if ( IncludeOpenprice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_openprice);
            }
            if ( IncludeHighprice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_highprice);
            }
            if ( IncludeLowprice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_lowprice);
            }
            if ( IncludeCloseprice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_closeprice);
            }
            if ( IncludePrClose()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_pr_close);
            }
            if ( IncludePrCloseUnadj()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_pr_close_unadj);
            }
            if ( IncludeWeek52High()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,127,m_week52_high);
            }
            if ( IncludeWeek52HighDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,130, m_week52_high_date.get_year(), m_week52_high_date.get_month(), m_week52_high_date.get_day());
            }
            if ( IncludeWeek52Low()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,133,m_week52_low);
            }
            if ( IncludeWeek52LowDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,136, m_week52_low_date.get_year(), m_week52_low_date.get_month(), m_week52_low_date.get_day());
            }
            if ( IncludeAvgVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_avg_volume);
            }
            if ( IncludeCcvar()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,142,m_ccvar);
            }
            if ( IncludeHlvar()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,145,m_hlvar);
            }
            if ( IncludeDayreturn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,148,m_dayreturn);
            }
            if ( IncludeReturnfactor()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,151,m_returnfactor);
            }
            if ( IncludeCumreturnfactor()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,154,m_cumreturnfactor);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 157, m_timestamp);
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
                            m_security_id = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_alt_id = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_day_number = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_openprice = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_highprice = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_lowprice = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_closeprice = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pr_close = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pr_close_unadj = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_week52_high = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                            m_week52_high_date.set_year(dateKey.year());
                            m_week52_high_date.set_month(dateKey.month());
                            m_week52_high_date.set_day(dateKey.day());
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_week52_low = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                            m_week52_low_date.set_year(dateKey.year());
                            m_week52_low_date.set_month(dateKey.month());
                            m_week52_low_date.set_day(dateKey.day());
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_avg_volume = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ccvar = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_hlvar = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_dayreturn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_returnfactor = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cumreturnfactor = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 157: {
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

    template<> inline const auto TickerAnalytics::get<TickerAnalytics::_meta>() const { return TickerAnalytics::_meta{ m__meta}; }
    template<> inline const auto TickerAnalytics::get<TickerAnalytics::pkey>() const { return TickerAnalytics::pkey{ m_pkey}; }
    template<> inline const auto TickerAnalytics::get<TickerAnalytics::security_id>() const { return m_security_id; }
    template<> inline const auto TickerAnalytics::get<TickerAnalytics::alt_id>() const { return m_alt_id; }
    template<> inline const auto TickerAnalytics::get<TickerAnalytics::day_number>() const { return m_day_number; }
    template<> inline const auto TickerAnalytics::get<TickerAnalytics::openprice>() const { return m_openprice; }
    template<> inline const auto TickerAnalytics::get<TickerAnalytics::highprice>() const { return m_highprice; }
    template<> inline const auto TickerAnalytics::get<TickerAnalytics::lowprice>() const { return m_lowprice; }
    template<> inline const auto TickerAnalytics::get<TickerAnalytics::closeprice>() const { return m_closeprice; }
    template<> inline const auto TickerAnalytics::get<TickerAnalytics::pr_close>() const { return m_pr_close; }
    template<> inline const auto TickerAnalytics::get<TickerAnalytics::pr_close_unadj>() const { return m_pr_close_unadj; }
    template<> inline const auto TickerAnalytics::get<TickerAnalytics::week52_high>() const { return m_week52_high; }
    template<> inline const auto TickerAnalytics::get<TickerAnalytics::week52_high_date>() const { return TickerAnalytics::week52_high_date{ m_week52_high_date}; }
    template<> inline const auto TickerAnalytics::get<TickerAnalytics::week52_low>() const { return m_week52_low; }
    template<> inline const auto TickerAnalytics::get<TickerAnalytics::week52_low_date>() const { return TickerAnalytics::week52_low_date{ m_week52_low_date}; }
    template<> inline const auto TickerAnalytics::get<TickerAnalytics::avg_volume>() const { return m_avg_volume; }
    template<> inline const auto TickerAnalytics::get<TickerAnalytics::ccvar>() const { return m_ccvar; }
    template<> inline const auto TickerAnalytics::get<TickerAnalytics::hlvar>() const { return m_hlvar; }
    template<> inline const auto TickerAnalytics::get<TickerAnalytics::dayreturn>() const { return m_dayreturn; }
    template<> inline const auto TickerAnalytics::get<TickerAnalytics::returnfactor>() const { return m_returnfactor; }
    template<> inline const auto TickerAnalytics::get<TickerAnalytics::cumreturnfactor>() const { return m_cumreturnfactor; }
    template<> inline const auto TickerAnalytics::get<TickerAnalytics::timestamp>() const { return m_timestamp; }
    template<> inline const auto TickerAnalytics_PKey::get<TickerAnalytics_PKey::ticker>() const { return TickerAnalytics_PKey::ticker{m_ticker}; }
    template<> inline const auto TickerAnalytics_PKey::get<TickerAnalytics_PKey::tradingdate>() const { return TickerAnalytics_PKey::tradingdate{m_tradingdate}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const TickerAnalytics_PKey& m) {
        o << "\"ticker\":{" << m.get<TickerAnalytics_PKey::ticker>() << "}";
        o << ",\"tradingdate\":{" << m.get<TickerAnalytics_PKey::tradingdate>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const TickerAnalytics& m) {
        o << "\"_meta\":{" << m.get<TickerAnalytics::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<TickerAnalytics::pkey>() << "}";
        o << ",\"security_id\":" << m.get<TickerAnalytics::security_id>();
        o << ",\"alt_id\":" << m.get<TickerAnalytics::alt_id>();
        o << ",\"day_number\":" << m.get<TickerAnalytics::day_number>();
        o << ",\"openprice\":" << m.get<TickerAnalytics::openprice>();
        o << ",\"highprice\":" << m.get<TickerAnalytics::highprice>();
        o << ",\"lowprice\":" << m.get<TickerAnalytics::lowprice>();
        o << ",\"closeprice\":" << m.get<TickerAnalytics::closeprice>();
        o << ",\"pr_close\":" << m.get<TickerAnalytics::pr_close>();
        o << ",\"pr_close_unadj\":" << m.get<TickerAnalytics::pr_close_unadj>();
        o << ",\"week52_high\":" << m.get<TickerAnalytics::week52_high>();
        o << ",\"week52_high_date\":{" << m.get<TickerAnalytics::week52_high_date>() << "}";
        o << ",\"week52_low\":" << m.get<TickerAnalytics::week52_low>();
        o << ",\"week52_low_date\":{" << m.get<TickerAnalytics::week52_low_date>() << "}";
        o << ",\"avg_volume\":" << m.get<TickerAnalytics::avg_volume>();
        o << ",\"ccvar\":" << m.get<TickerAnalytics::ccvar>();
        o << ",\"hlvar\":" << m.get<TickerAnalytics::hlvar>();
        o << ",\"dayreturn\":" << m.get<TickerAnalytics::dayreturn>();
        o << ",\"returnfactor\":" << m.get<TickerAnalytics::returnfactor>();
        o << ",\"cumreturnfactor\":" << m.get<TickerAnalytics::cumreturnfactor>();
        {
            std::time_t tt = m.get<TickerAnalytics::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}