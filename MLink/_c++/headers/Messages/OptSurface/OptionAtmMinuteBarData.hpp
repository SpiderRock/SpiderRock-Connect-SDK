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

    #ifndef _start_time__GUARD__
    #define _start_time__GUARD__
    DECL_STRONG_TYPE(start_time, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_start_time__GUARD__

    #ifndef _start_time_minute__GUARD__
    #define _start_time_minute__GUARD__
    DECL_STRONG_TYPE(start_time_minute, string);
    #endif//_start_time_minute__GUARD__

    #ifndef _end_time__GUARD__
    #define _end_time__GUARD__
    DECL_STRONG_TYPE(end_time, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_end_time__GUARD__

    #ifndef _end_time_minute__GUARD__
    #define _end_time_minute__GUARD__
    DECL_STRONG_TYPE(end_time_minute, string);
    #endif//_end_time_minute__GUARD__

    #ifndef _u_prc__double__GUARD__
    #define _u_prc__double__GUARD__
    DECL_STRONG_TYPE(u_prc__double, double);
    #endif//_u_prc__double__GUARD__

    #ifndef _years__float__GUARD__
    #define _years__float__GUARD__
    DECL_STRONG_TYPE(years__float, float);
    #endif//_years__float__GUARD__

    #ifndef _rate__float__GUARD__
    #define _rate__float__GUARD__
    DECL_STRONG_TYPE(rate__float, float);
    #endif//_rate__float__GUARD__

    #ifndef _sdiv__float__GUARD__
    #define _sdiv__float__GUARD__
    DECL_STRONG_TYPE(sdiv__float, float);
    #endif//_sdiv__float__GUARD__

    #ifndef _ddiv__GUARD__
    #define _ddiv__GUARD__
    DECL_STRONG_TYPE(ddiv, float);
    #endif//_ddiv__GUARD__

    #ifndef _u_prc_ratio__GUARD__
    #define _u_prc_ratio__GUARD__
    DECL_STRONG_TYPE(u_prc_ratio, double);
    #endif//_u_prc_ratio__GUARD__

    #ifndef _ivol__GUARD__
    #define _ivol__GUARD__
    DECL_STRONG_TYPE(ivol, float);
    #endif//_ivol__GUARD__

    #ifndef _ivxx__GUARD__
    #define _ivxx__GUARD__
    DECL_STRONG_TYPE(ivxx, float);
    #endif//_ivxx__GUARD__

    #ifndef _iv_cen__GUARD__
    #define _iv_cen__GUARD__
    DECL_STRONG_TYPE(iv_cen, float);
    #endif//_iv_cen__GUARD__

    #ifndef _slope__GUARD__
    #define _slope__GUARD__
    DECL_STRONG_TYPE(slope, float);
    #endif//_slope__GUARD__

    #ifndef _v_width__GUARD__
    #define _v_width__GUARD__
    DECL_STRONG_TYPE(v_width, float);
    #endif//_v_width__GUARD__

    #ifndef _ref_strike__GUARD__
    #define _ref_strike__GUARD__
    DECL_STRONG_TYPE(ref_strike, float);
    #endif//_ref_strike__GUARD__

    #ifndef _ivol_hi__GUARD__
    #define _ivol_hi__GUARD__
    DECL_STRONG_TYPE(ivol_hi, float);
    #endif//_ivol_hi__GUARD__

    #ifndef _ivol_lo__GUARD__
    #define _ivol_lo__GUARD__
    DECL_STRONG_TYPE(ivol_lo, float);
    #endif//_ivol_lo__GUARD__

    #ifndef _ivxx_hi__GUARD__
    #define _ivxx_hi__GUARD__
    DECL_STRONG_TYPE(ivxx_hi, float);
    #endif//_ivxx_hi__GUARD__

    #ifndef _ivxx_lo__GUARD__
    #define _ivxx_lo__GUARD__
    DECL_STRONG_TYPE(ivxx_lo, float);
    #endif//_ivxx_lo__GUARD__

    #ifndef _iv_cen_hi__GUARD__
    #define _iv_cen_hi__GUARD__
    DECL_STRONG_TYPE(iv_cen_hi, float);
    #endif//_iv_cen_hi__GUARD__

    #ifndef _iv_cen_lo__GUARD__
    #define _iv_cen_lo__GUARD__
    DECL_STRONG_TYPE(iv_cen_lo, float);
    #endif//_iv_cen_lo__GUARD__

    #ifndef _sdiv_hi__GUARD__
    #define _sdiv_hi__GUARD__
    DECL_STRONG_TYPE(sdiv_hi, float);
    #endif//_sdiv_hi__GUARD__

    #ifndef _sdiv_lo__GUARD__
    #define _sdiv_lo__GUARD__
    DECL_STRONG_TYPE(sdiv_lo, float);
    #endif//_sdiv_lo__GUARD__

    #ifndef _u_prc_ratio_hi__GUARD__
    #define _u_prc_ratio_hi__GUARD__
    DECL_STRONG_TYPE(u_prc_ratio_hi, double);
    #endif//_u_prc_ratio_hi__GUARD__

    #ifndef _u_prc_ratio_lo__GUARD__
    #define _u_prc_ratio_lo__GUARD__
    DECL_STRONG_TYPE(u_prc_ratio_lo, double);
    #endif//_u_prc_ratio_lo__GUARD__

    #ifndef _slope_hi__GUARD__
    #define _slope_hi__GUARD__
    DECL_STRONG_TYPE(slope_hi, float);
    #endif//_slope_hi__GUARD__

    #ifndef _slope_lo__GUARD__
    #define _slope_lo__GUARD__
    DECL_STRONG_TYPE(slope_lo, float);
    #endif//_slope_lo__GUARD__

    #ifndef _var_swap_fv__GUARD__
    #define _var_swap_fv__GUARD__
    DECL_STRONG_TYPE(var_swap_fv, float);
    #endif//_var_swap_fv__GUARD__

    #ifndef _max_divol__GUARD__
    #define _max_divol__GUARD__
    DECL_STRONG_TYPE(max_divol, float);
    #endif//_max_divol__GUARD__

    #ifndef _max_dsdiv__GUARD__
    #define _max_dsdiv__GUARD__
    DECL_STRONG_TYPE(max_dsdiv, float);
    #endif//_max_dsdiv__GUARD__

    #ifndef _u_prc_spy__GUARD__
    #define _u_prc_spy__GUARD__
    DECL_STRONG_TYPE(u_prc_spy, double);
    #endif//_u_prc_spy__GUARD__

    #ifndef _ivol_spy__GUARD__
    #define _ivol_spy__GUARD__
    DECL_STRONG_TYPE(ivol_spy, float);
    #endif//_ivol_spy__GUARD__

    #ifndef _ivxx_spy__GUARD__
    #define _ivxx_spy__GUARD__
    DECL_STRONG_TYPE(ivxx_spy, float);
    #endif//_ivxx_spy__GUARD__

    #ifndef _market_segment__GUARD__
    #define _market_segment__GUARD__
    DECL_STRONG_TYPE(market_segment, spiderrock::protobuf::api::MarketSegment);
    #endif//_market_segment__GUARD__

    #ifndef _ts__GUARD__
    #define _ts__GUARD__
    DECL_STRONG_TYPE(ts, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_ts__GUARD__

    #ifndef _ekey__GUARD__
    #define _ekey__GUARD__
    DECL_STRONG_TYPE(ekey, ExpiryKey);
    #endif//_ekey__GUARD__

    #ifndef _trading_date__GUARD__
    #define _trading_date__GUARD__
    DECL_STRONG_TYPE(trading_date, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_trading_date__GUARD__

    #ifndef _minute__GUARD__
    #define _minute__GUARD__
    DECL_STRONG_TYPE(minute, int32);
    #endif//_minute__GUARD__

    
    class OptionAtmMinuteBarData_PKey {
        public:
        //using statements for all types used in this class
        using ekey = spiderrock::protobuf::api::ekey;
        using trading_date = spiderrock::protobuf::api::trading_date;
        using minute = spiderrock::protobuf::api::minute;

        private:
        ekey m_ekey{};
        trading_date m_trading_date{};
        minute m_minute{};

        public:
		ekey get_ekey() const {
            return m_ekey;
        }
        trading_date get_trading_date() const {
            return m_trading_date;
        }
        minute get_minute() const {
            return m_minute;
        }
        void set_ekey(const ekey& value)  {
            m_ekey = value;
        }
        void set_trading_date(const trading_date& value)  {
            m_trading_date = value;
        }
        void set_minute(const minute& value)  {
            m_minute = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionAtmMinuteBarData_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionAtmMinuteBarData_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ekey & value) { set_ekey(value); }
        void set(const trading_date & value) { set_trading_date(value); }
        void set(const minute & value) { set_minute(value); }


        OptionAtmMinuteBarData_PKey() {}

        virtual ~OptionAtmMinuteBarData_PKey() {
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
        bool IncludeTradingDate() const {
            return (m_trading_date.time_since_epoch().count() != 0);
        }
        bool IncludeMinute() const {
            return !(m_minute == 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout;
                m_ekey.setCodecExpiryKey(expiryKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(10,expiryKeyLayout);
            }
            if ( IncludeTradingDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(11, m_trading_date);
            }
            if ( IncludeMinute()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(12,m_minute);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout;
                m_ekey.setCodecExpiryKey(expiryKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 10, expiryKeyLayout);
            }
            if ( IncludeTradingDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 11, m_trading_date);
            }
            if ( IncludeMinute()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,12,m_minute);
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
                    case 11: {
                        m_trading_date = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        break;
                    }
                    case 12: {m_minute = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class OptionAtmMinuteBarData {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::OptionAtmMinuteBarData_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using start_time = spiderrock::protobuf::api::start_time;
        using start_time_minute = spiderrock::protobuf::api::start_time_minute;
        using end_time = spiderrock::protobuf::api::end_time;
        using end_time_minute = spiderrock::protobuf::api::end_time_minute;
        using u_prc = spiderrock::protobuf::api::u_prc__double;
        using years = spiderrock::protobuf::api::years__float;
        using rate = spiderrock::protobuf::api::rate__float;
        using sdiv = spiderrock::protobuf::api::sdiv__float;
        using ddiv = spiderrock::protobuf::api::ddiv;
        using u_prc_ratio = spiderrock::protobuf::api::u_prc_ratio;
        using ivol = spiderrock::protobuf::api::ivol;
        using ivxx = spiderrock::protobuf::api::ivxx;
        using iv_cen = spiderrock::protobuf::api::iv_cen;
        using slope = spiderrock::protobuf::api::slope;
        using v_width = spiderrock::protobuf::api::v_width;
        using ref_strike = spiderrock::protobuf::api::ref_strike;
        using ivol_hi = spiderrock::protobuf::api::ivol_hi;
        using ivol_lo = spiderrock::protobuf::api::ivol_lo;
        using ivxx_hi = spiderrock::protobuf::api::ivxx_hi;
        using ivxx_lo = spiderrock::protobuf::api::ivxx_lo;
        using iv_cen_hi = spiderrock::protobuf::api::iv_cen_hi;
        using iv_cen_lo = spiderrock::protobuf::api::iv_cen_lo;
        using sdiv_hi = spiderrock::protobuf::api::sdiv_hi;
        using sdiv_lo = spiderrock::protobuf::api::sdiv_lo;
        using u_prc_ratio_hi = spiderrock::protobuf::api::u_prc_ratio_hi;
        using u_prc_ratio_lo = spiderrock::protobuf::api::u_prc_ratio_lo;
        using slope_hi = spiderrock::protobuf::api::slope_hi;
        using slope_lo = spiderrock::protobuf::api::slope_lo;
        using var_swap_fv = spiderrock::protobuf::api::var_swap_fv;
        using max_divol = spiderrock::protobuf::api::max_divol;
        using max_dsdiv = spiderrock::protobuf::api::max_dsdiv;
        using u_prc_spy = spiderrock::protobuf::api::u_prc_spy;
        using ivol_spy = spiderrock::protobuf::api::ivol_spy;
        using ivxx_spy = spiderrock::protobuf::api::ivxx_spy;
        using market_segment = spiderrock::protobuf::api::market_segment;
        using ts = spiderrock::protobuf::api::ts;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        start_time m_start_time{};
        start_time_minute m_start_time_minute{};
        end_time m_end_time{};
        end_time_minute m_end_time_minute{};
        u_prc m_u_prc{};
        years m_years{};
        rate m_rate{};
        sdiv m_sdiv{};
        ddiv m_ddiv{};
        u_prc_ratio m_u_prc_ratio{};
        ivol m_ivol{};
        ivxx m_ivxx{};
        iv_cen m_iv_cen{};
        slope m_slope{};
        v_width m_v_width{};
        ref_strike m_ref_strike{};
        ivol_hi m_ivol_hi{};
        ivol_lo m_ivol_lo{};
        ivxx_hi m_ivxx_hi{};
        ivxx_lo m_ivxx_lo{};
        iv_cen_hi m_iv_cen_hi{};
        iv_cen_lo m_iv_cen_lo{};
        sdiv_hi m_sdiv_hi{};
        sdiv_lo m_sdiv_lo{};
        u_prc_ratio_hi m_u_prc_ratio_hi{};
        u_prc_ratio_lo m_u_prc_ratio_lo{};
        slope_hi m_slope_hi{};
        slope_lo m_slope_lo{};
        var_swap_fv m_var_swap_fv{};
        max_divol m_max_divol{};
        max_dsdiv m_max_dsdiv{};
        u_prc_spy m_u_prc_spy{};
        ivol_spy m_ivol_spy{};
        ivxx_spy m_ivxx_spy{};
        market_segment m_market_segment{};
        ts m_ts{};

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
        start_time get_start_time() const {
            return m_start_time;
        }		
        start_time_minute get_start_time_minute() const {
            return m_start_time_minute;
        }		
        end_time get_end_time() const {
            return m_end_time;
        }		
        end_time_minute get_end_time_minute() const {
            return m_end_time_minute;
        }		
        u_prc get_u_prc() const {
            return m_u_prc;
        }		
        years get_years() const {
            return m_years;
        }		
        rate get_rate() const {
            return m_rate;
        }		
        sdiv get_sdiv() const {
            return m_sdiv;
        }		
        ddiv get_ddiv() const {
            return m_ddiv;
        }		
        u_prc_ratio get_u_prc_ratio() const {
            return m_u_prc_ratio;
        }		
        ivol get_ivol() const {
            return m_ivol;
        }		
        ivxx get_ivxx() const {
            return m_ivxx;
        }		
        iv_cen get_iv_cen() const {
            return m_iv_cen;
        }		
        slope get_slope() const {
            return m_slope;
        }		
        v_width get_v_width() const {
            return m_v_width;
        }		
        ref_strike get_ref_strike() const {
            return m_ref_strike;
        }		
        ivol_hi get_ivol_hi() const {
            return m_ivol_hi;
        }		
        ivol_lo get_ivol_lo() const {
            return m_ivol_lo;
        }		
        ivxx_hi get_ivxx_hi() const {
            return m_ivxx_hi;
        }		
        ivxx_lo get_ivxx_lo() const {
            return m_ivxx_lo;
        }		
        iv_cen_hi get_iv_cen_hi() const {
            return m_iv_cen_hi;
        }		
        iv_cen_lo get_iv_cen_lo() const {
            return m_iv_cen_lo;
        }		
        sdiv_hi get_sdiv_hi() const {
            return m_sdiv_hi;
        }		
        sdiv_lo get_sdiv_lo() const {
            return m_sdiv_lo;
        }		
        u_prc_ratio_hi get_u_prc_ratio_hi() const {
            return m_u_prc_ratio_hi;
        }		
        u_prc_ratio_lo get_u_prc_ratio_lo() const {
            return m_u_prc_ratio_lo;
        }		
        slope_hi get_slope_hi() const {
            return m_slope_hi;
        }		
        slope_lo get_slope_lo() const {
            return m_slope_lo;
        }		
        var_swap_fv get_var_swap_fv() const {
            return m_var_swap_fv;
        }		
        max_divol get_max_divol() const {
            return m_max_divol;
        }		
        max_dsdiv get_max_dsdiv() const {
            return m_max_dsdiv;
        }		
        u_prc_spy get_u_prc_spy() const {
            return m_u_prc_spy;
        }		
        ivol_spy get_ivol_spy() const {
            return m_ivol_spy;
        }		
        ivxx_spy get_ivxx_spy() const {
            return m_ivxx_spy;
        }		
        market_segment get_market_segment() const {
            return m_market_segment;
        }		
        ts get_ts() const {
            return m_ts;
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
        void set_start_time(const start_time& value)  {
            m_start_time = value;
        }
        void set_start_time_minute(const start_time_minute& value)  {
            m_start_time_minute = value;
        }
        void set_end_time(const end_time& value)  {
            m_end_time = value;
        }
        void set_end_time_minute(const end_time_minute& value)  {
            m_end_time_minute = value;
        }
        void set_u_prc(const u_prc& value)  {
            m_u_prc = value;
        }
        void set_years(const years& value)  {
            m_years = value;
        }
        void set_rate(const rate& value)  {
            m_rate = value;
        }
        void set_sdiv(const sdiv& value)  {
            m_sdiv = value;
        }
        void set_ddiv(const ddiv& value)  {
            m_ddiv = value;
        }
        void set_u_prc_ratio(const u_prc_ratio& value)  {
            m_u_prc_ratio = value;
        }
        void set_ivol(const ivol& value)  {
            m_ivol = value;
        }
        void set_ivxx(const ivxx& value)  {
            m_ivxx = value;
        }
        void set_iv_cen(const iv_cen& value)  {
            m_iv_cen = value;
        }
        void set_slope(const slope& value)  {
            m_slope = value;
        }
        void set_v_width(const v_width& value)  {
            m_v_width = value;
        }
        void set_ref_strike(const ref_strike& value)  {
            m_ref_strike = value;
        }
        void set_ivol_hi(const ivol_hi& value)  {
            m_ivol_hi = value;
        }
        void set_ivol_lo(const ivol_lo& value)  {
            m_ivol_lo = value;
        }
        void set_ivxx_hi(const ivxx_hi& value)  {
            m_ivxx_hi = value;
        }
        void set_ivxx_lo(const ivxx_lo& value)  {
            m_ivxx_lo = value;
        }
        void set_iv_cen_hi(const iv_cen_hi& value)  {
            m_iv_cen_hi = value;
        }
        void set_iv_cen_lo(const iv_cen_lo& value)  {
            m_iv_cen_lo = value;
        }
        void set_sdiv_hi(const sdiv_hi& value)  {
            m_sdiv_hi = value;
        }
        void set_sdiv_lo(const sdiv_lo& value)  {
            m_sdiv_lo = value;
        }
        void set_u_prc_ratio_hi(const u_prc_ratio_hi& value)  {
            m_u_prc_ratio_hi = value;
        }
        void set_u_prc_ratio_lo(const u_prc_ratio_lo& value)  {
            m_u_prc_ratio_lo = value;
        }
        void set_slope_hi(const slope_hi& value)  {
            m_slope_hi = value;
        }
        void set_slope_lo(const slope_lo& value)  {
            m_slope_lo = value;
        }
        void set_var_swap_fv(const var_swap_fv& value)  {
            m_var_swap_fv = value;
        }
        void set_max_divol(const max_divol& value)  {
            m_max_divol = value;
        }
        void set_max_dsdiv(const max_dsdiv& value)  {
            m_max_dsdiv = value;
        }
        void set_u_prc_spy(const u_prc_spy& value)  {
            m_u_prc_spy = value;
        }
        void set_ivol_spy(const ivol_spy& value)  {
            m_ivol_spy = value;
        }
        void set_ivxx_spy(const ivxx_spy& value)  {
            m_ivxx_spy = value;
        }
        void set_market_segment(const market_segment& value)  {
            m_market_segment = value;
        }
        void set_ts(const ts& value)  {
            m_ts = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionAtmMinuteBarData::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const start_time & value) {
            set_start_time(value);
        }
        void set(const start_time_minute & value) {
            set_start_time_minute(value);
        }
        void set(const end_time & value) {
            set_end_time(value);
        }
        void set(const end_time_minute & value) {
            set_end_time_minute(value);
        }
        void set(const u_prc & value) {
            set_u_prc(value);
        }
        void set(const years & value) {
            set_years(value);
        }
        void set(const rate & value) {
            set_rate(value);
        }
        void set(const sdiv & value) {
            set_sdiv(value);
        }
        void set(const ddiv & value) {
            set_ddiv(value);
        }
        void set(const u_prc_ratio & value) {
            set_u_prc_ratio(value);
        }
        void set(const ivol & value) {
            set_ivol(value);
        }
        void set(const ivxx & value) {
            set_ivxx(value);
        }
        void set(const iv_cen & value) {
            set_iv_cen(value);
        }
        void set(const slope & value) {
            set_slope(value);
        }
        void set(const v_width & value) {
            set_v_width(value);
        }
        void set(const ref_strike & value) {
            set_ref_strike(value);
        }
        void set(const ivol_hi & value) {
            set_ivol_hi(value);
        }
        void set(const ivol_lo & value) {
            set_ivol_lo(value);
        }
        void set(const ivxx_hi & value) {
            set_ivxx_hi(value);
        }
        void set(const ivxx_lo & value) {
            set_ivxx_lo(value);
        }
        void set(const iv_cen_hi & value) {
            set_iv_cen_hi(value);
        }
        void set(const iv_cen_lo & value) {
            set_iv_cen_lo(value);
        }
        void set(const sdiv_hi & value) {
            set_sdiv_hi(value);
        }
        void set(const sdiv_lo & value) {
            set_sdiv_lo(value);
        }
        void set(const u_prc_ratio_hi & value) {
            set_u_prc_ratio_hi(value);
        }
        void set(const u_prc_ratio_lo & value) {
            set_u_prc_ratio_lo(value);
        }
        void set(const slope_hi & value) {
            set_slope_hi(value);
        }
        void set(const slope_lo & value) {
            set_slope_lo(value);
        }
        void set(const var_swap_fv & value) {
            set_var_swap_fv(value);
        }
        void set(const max_divol & value) {
            set_max_divol(value);
        }
        void set(const max_dsdiv & value) {
            set_max_dsdiv(value);
        }
        void set(const u_prc_spy & value) {
            set_u_prc_spy(value);
        }
        void set(const ivol_spy & value) {
            set_ivol_spy(value);
        }
        void set(const ivxx_spy & value) {
            set_ivxx_spy(value);
        }
        void set(const market_segment & value) {
            set_market_segment(value);
        }
        void set(const ts & value) {
            set_ts(value);
        }

        void set(const OptionAtmMinuteBarData & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_start_time);
            set(value.m_start_time_minute);
            set(value.m_end_time);
            set(value.m_end_time_minute);
            set(value.m_u_prc);
            set(value.m_years);
            set(value.m_rate);
            set(value.m_sdiv);
            set(value.m_ddiv);
            set(value.m_u_prc_ratio);
            set(value.m_ivol);
            set(value.m_ivxx);
            set(value.m_iv_cen);
            set(value.m_slope);
            set(value.m_v_width);
            set(value.m_ref_strike);
            set(value.m_ivol_hi);
            set(value.m_ivol_lo);
            set(value.m_ivxx_hi);
            set(value.m_ivxx_lo);
            set(value.m_iv_cen_hi);
            set(value.m_iv_cen_lo);
            set(value.m_sdiv_hi);
            set(value.m_sdiv_lo);
            set(value.m_u_prc_ratio_hi);
            set(value.m_u_prc_ratio_lo);
            set(value.m_slope_hi);
            set(value.m_slope_lo);
            set(value.m_var_swap_fv);
            set(value.m_max_divol);
            set(value.m_max_dsdiv);
            set(value.m_u_prc_spy);
            set(value.m_ivol_spy);
            set(value.m_ivxx_spy);
            set(value.m_market_segment);
            set(value.m_ts);
        }

        OptionAtmMinuteBarData() {
            m__meta.set_message_type("OptionAtmMinuteBarData");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 6820, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 6820, length);
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
             *this = OptionAtmMinuteBarData{};
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
        bool IncludeStartTime() const {
            return (m_start_time.time_since_epoch().count() != 0);
        }
        bool IncludeStartTimeMinute() const {
            return !(m_start_time_minute.empty());
        }
        bool IncludeEndTime() const {
            return (m_end_time.time_since_epoch().count() != 0);
        }
        bool IncludeEndTimeMinute() const {
            return !(m_end_time_minute.empty());
        }
        bool IncludeUPrc() const {
            return !(m_u_prc == 0.0);
        }
        bool IncludeYears() const {
            return !(m_years == 0.0);
        }
        bool IncludeRate() const {
            return !(m_rate == 0.0);
        }
        bool IncludeSdiv() const {
            return !(m_sdiv == 0.0);
        }
        bool IncludeDdiv() const {
            return !(m_ddiv == 0.0);
        }
        bool IncludeUPrcRatio() const {
            return !(m_u_prc_ratio == 0.0);
        }
        bool IncludeIvol() const {
            return !(m_ivol == 0.0);
        }
        bool IncludeIvxx() const {
            return !(m_ivxx == 0.0);
        }
        bool IncludeIvCen() const {
            return !(m_iv_cen == 0.0);
        }
        bool IncludeSlope() const {
            return !(m_slope == 0.0);
        }
        bool IncludeVWidth() const {
            return !(m_v_width == 0.0);
        }
        bool IncludeRefStrike() const {
            return !(m_ref_strike == 0.0);
        }
        bool IncludeIvolHi() const {
            return !(m_ivol_hi == 0.0);
        }
        bool IncludeIvolLo() const {
            return !(m_ivol_lo == 0.0);
        }
        bool IncludeIvxxHi() const {
            return !(m_ivxx_hi == 0.0);
        }
        bool IncludeIvxxLo() const {
            return !(m_ivxx_lo == 0.0);
        }
        bool IncludeIvCenHi() const {
            return !(m_iv_cen_hi == 0.0);
        }
        bool IncludeIvCenLo() const {
            return !(m_iv_cen_lo == 0.0);
        }
        bool IncludeSdivHi() const {
            return !(m_sdiv_hi == 0.0);
        }
        bool IncludeSdivLo() const {
            return !(m_sdiv_lo == 0.0);
        }
        bool IncludeUPrcRatioHi() const {
            return !(m_u_prc_ratio_hi == 0.0);
        }
        bool IncludeUPrcRatioLo() const {
            return !(m_u_prc_ratio_lo == 0.0);
        }
        bool IncludeSlopeHi() const {
            return !(m_slope_hi == 0.0);
        }
        bool IncludeSlopeLo() const {
            return !(m_slope_lo == 0.0);
        }
        bool IncludeVarSwapFv() const {
            return !(m_var_swap_fv == 0.0);
        }
        bool IncludeMaxDivol() const {
            return !(m_max_divol == 0.0);
        }
        bool IncludeMaxDsdiv() const {
            return !(m_max_dsdiv == 0.0);
        }
        bool IncludeUPrcSpy() const {
            return !(m_u_prc_spy == 0.0);
        }
        bool IncludeIvolSpy() const {
            return !(m_ivol_spy == 0.0);
        }
        bool IncludeIvxxSpy() const {
            return !(m_ivxx_spy == 0.0);
        }
        bool IncludeTs() const {
            return (m_ts.time_since_epoch().count() != 0);
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
            if ( IncludeStartTime()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(103, m_start_time);
            }
            if ( IncludeStartTimeMinute()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_start_time_minute);
            }
            if ( IncludeEndTime()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(109, m_end_time);
            }
            if ( IncludeEndTimeMinute()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(112,m_end_time_minute);
            }
            if ( IncludeUPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(115,m_u_prc);
            }
            if ( IncludeYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_years);
            }
            if ( IncludeRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_rate);
            }
            if ( IncludeSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_sdiv);
            }
            if ( IncludeDdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_ddiv);
            }
            if ( IncludeUPrcRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(130,m_u_prc_ratio);
            }
            if ( IncludeIvol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_ivol);
            }
            if ( IncludeIvxx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_ivxx);
            }
            if ( IncludeIvCen()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_iv_cen);
            }
            if ( IncludeSlope()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_slope);
            }
            if ( IncludeVWidth()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(145,m_v_width);
            }
            if ( IncludeRefStrike()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(148,m_ref_strike);
            }
            if ( IncludeIvolHi()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(151,m_ivol_hi);
            }
            if ( IncludeIvolLo()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(154,m_ivol_lo);
            }
            if ( IncludeIvxxHi()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_ivxx_hi);
            }
            if ( IncludeIvxxLo()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(160,m_ivxx_lo);
            }
            if ( IncludeIvCenHi()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_iv_cen_hi);
            }
            if ( IncludeIvCenLo()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_iv_cen_lo);
            }
            if ( IncludeSdivHi()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(169,m_sdiv_hi);
            }
            if ( IncludeSdivLo()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(172,m_sdiv_lo);
            }
            if ( IncludeUPrcRatioHi()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(175,m_u_prc_ratio_hi);
            }
            if ( IncludeUPrcRatioLo()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(178,m_u_prc_ratio_lo);
            }
            if ( IncludeSlopeHi()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(181,m_slope_hi);
            }
            if ( IncludeSlopeLo()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(184,m_slope_lo);
            }
            if ( IncludeVarSwapFv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(187,m_var_swap_fv);
            }
            if ( IncludeMaxDivol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(190,m_max_divol);
            }
            if ( IncludeMaxDsdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(193,m_max_dsdiv);
            }
            if ( IncludeUPrcSpy()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(196,m_u_prc_spy);
            }
            if ( IncludeIvolSpy()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(199,m_ivol_spy);
            }
            if ( IncludeIvxxSpy()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(202,m_ivxx_spy);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(205,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSegment>(m_market_segment)));
            if ( IncludeTs()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(208, m_ts);
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
            if ( IncludeStartTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 103, m_start_time);
            }
            if ( IncludeStartTimeMinute()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_start_time_minute));
            }
            if ( IncludeEndTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 109, m_end_time);
            }
            if ( IncludeEndTimeMinute()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,112,static_cast<string>(m_end_time_minute));
            }
            if ( IncludeUPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,115,m_u_prc);
            }
            if ( IncludeYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_years);
            }
            if ( IncludeRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_rate);
            }
            if ( IncludeSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_sdiv);
            }
            if ( IncludeDdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_ddiv);
            }
            if ( IncludeUPrcRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,130,m_u_prc_ratio);
            }
            if ( IncludeIvol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_ivol);
            }
            if ( IncludeIvxx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_ivxx);
            }
            if ( IncludeIvCen()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_iv_cen);
            }
            if ( IncludeSlope()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_slope);
            }
            if ( IncludeVWidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,145,m_v_width);
            }
            if ( IncludeRefStrike()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,148,m_ref_strike);
            }
            if ( IncludeIvolHi()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,151,m_ivol_hi);
            }
            if ( IncludeIvolLo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,154,m_ivol_lo);
            }
            if ( IncludeIvxxHi()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_ivxx_hi);
            }
            if ( IncludeIvxxLo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,160,m_ivxx_lo);
            }
            if ( IncludeIvCenHi()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_iv_cen_hi);
            }
            if ( IncludeIvCenLo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_iv_cen_lo);
            }
            if ( IncludeSdivHi()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,169,m_sdiv_hi);
            }
            if ( IncludeSdivLo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,172,m_sdiv_lo);
            }
            if ( IncludeUPrcRatioHi()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,175,m_u_prc_ratio_hi);
            }
            if ( IncludeUPrcRatioLo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,178,m_u_prc_ratio_lo);
            }
            if ( IncludeSlopeHi()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,181,m_slope_hi);
            }
            if ( IncludeSlopeLo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,184,m_slope_lo);
            }
            if ( IncludeVarSwapFv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,187,m_var_swap_fv);
            }
            if ( IncludeMaxDivol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,190,m_max_divol);
            }
            if ( IncludeMaxDsdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,193,m_max_dsdiv);
            }
            if ( IncludeUPrcSpy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,196,m_u_prc_spy);
            }
            if ( IncludeIvolSpy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,199,m_ivol_spy);
            }
            if ( IncludeIvxxSpy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,202,m_ivxx_spy);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,205,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSegment>(m_market_segment)));
            if ( IncludeTs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 208, m_ts);
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
                    case 103: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_start_time = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_start_time_minute = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_end_time = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_end_time_minute = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ddiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc_ratio = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ivol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ivxx = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_iv_cen = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_slope = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_v_width = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ref_strike = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ivol_hi = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ivol_lo = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ivxx_hi = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ivxx_lo = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_iv_cen_hi = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_iv_cen_lo = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sdiv_hi = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sdiv_lo = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc_ratio_hi = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc_ratio_lo = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_slope_hi = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_slope_lo = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_var_swap_fv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_divol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_dsdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc_spy = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ivol_spy = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ivxx_spy = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 205: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_market_segment = static_cast<spiderrock::protobuf::api::MarketSegment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_ts = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::_meta>() const { return OptionAtmMinuteBarData::_meta{ m__meta}; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::pkey>() const { return OptionAtmMinuteBarData::pkey{ m_pkey}; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::ticker>() const { return OptionAtmMinuteBarData::ticker{ m_ticker}; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::start_time>() const { return m_start_time; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::start_time_minute>() const { return m_start_time_minute; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::end_time>() const { return m_end_time; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::end_time_minute>() const { return m_end_time_minute; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::u_prc>() const { return m_u_prc; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::years>() const { return m_years; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::rate>() const { return m_rate; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::sdiv>() const { return m_sdiv; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::ddiv>() const { return m_ddiv; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::u_prc_ratio>() const { return m_u_prc_ratio; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::ivol>() const { return m_ivol; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::ivxx>() const { return m_ivxx; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::iv_cen>() const { return m_iv_cen; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::slope>() const { return m_slope; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::v_width>() const { return m_v_width; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::ref_strike>() const { return m_ref_strike; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::ivol_hi>() const { return m_ivol_hi; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::ivol_lo>() const { return m_ivol_lo; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::ivxx_hi>() const { return m_ivxx_hi; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::ivxx_lo>() const { return m_ivxx_lo; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::iv_cen_hi>() const { return m_iv_cen_hi; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::iv_cen_lo>() const { return m_iv_cen_lo; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::sdiv_hi>() const { return m_sdiv_hi; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::sdiv_lo>() const { return m_sdiv_lo; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::u_prc_ratio_hi>() const { return m_u_prc_ratio_hi; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::u_prc_ratio_lo>() const { return m_u_prc_ratio_lo; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::slope_hi>() const { return m_slope_hi; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::slope_lo>() const { return m_slope_lo; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::var_swap_fv>() const { return m_var_swap_fv; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::max_divol>() const { return m_max_divol; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::max_dsdiv>() const { return m_max_dsdiv; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::u_prc_spy>() const { return m_u_prc_spy; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::ivol_spy>() const { return m_ivol_spy; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::ivxx_spy>() const { return m_ivxx_spy; }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::market_segment>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSegment>( m_market_segment)); }
    template<> inline const auto OptionAtmMinuteBarData::get<OptionAtmMinuteBarData::ts>() const { return m_ts; }
    template<> inline const auto OptionAtmMinuteBarData_PKey::get<OptionAtmMinuteBarData_PKey::ekey>() const { return OptionAtmMinuteBarData_PKey::ekey{m_ekey}; }
    template<> inline const auto OptionAtmMinuteBarData_PKey::get<OptionAtmMinuteBarData_PKey::trading_date>() const { return m_trading_date; }
    template<> inline const auto OptionAtmMinuteBarData_PKey::get<OptionAtmMinuteBarData_PKey::minute>() const { return m_minute; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const OptionAtmMinuteBarData_PKey& m) {
        o << "\"ekey\":{" << m.get<OptionAtmMinuteBarData_PKey::ekey>() << "}";
        {
            std::time_t tt = m.get<OptionAtmMinuteBarData_PKey::trading_date>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"trading_date\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"minute\":" << m.get<OptionAtmMinuteBarData_PKey::minute>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const OptionAtmMinuteBarData& m) {
        o << "\"_meta\":{" << m.get<OptionAtmMinuteBarData::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<OptionAtmMinuteBarData::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<OptionAtmMinuteBarData::ticker>() << "}";
        {
            std::time_t tt = m.get<OptionAtmMinuteBarData::start_time>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"start_time\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"start_time_minute\":\"" << m.get<OptionAtmMinuteBarData::start_time_minute>() << "\"";
        {
            std::time_t tt = m.get<OptionAtmMinuteBarData::end_time>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"end_time\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"end_time_minute\":\"" << m.get<OptionAtmMinuteBarData::end_time_minute>() << "\"";
        o << ",\"u_prc\":" << m.get<OptionAtmMinuteBarData::u_prc>();
        o << ",\"years\":" << m.get<OptionAtmMinuteBarData::years>();
        o << ",\"rate\":" << m.get<OptionAtmMinuteBarData::rate>();
        o << ",\"sdiv\":" << m.get<OptionAtmMinuteBarData::sdiv>();
        o << ",\"ddiv\":" << m.get<OptionAtmMinuteBarData::ddiv>();
        o << ",\"u_prc_ratio\":" << m.get<OptionAtmMinuteBarData::u_prc_ratio>();
        o << ",\"ivol\":" << m.get<OptionAtmMinuteBarData::ivol>();
        o << ",\"ivxx\":" << m.get<OptionAtmMinuteBarData::ivxx>();
        o << ",\"iv_cen\":" << m.get<OptionAtmMinuteBarData::iv_cen>();
        o << ",\"slope\":" << m.get<OptionAtmMinuteBarData::slope>();
        o << ",\"v_width\":" << m.get<OptionAtmMinuteBarData::v_width>();
        o << ",\"ref_strike\":" << m.get<OptionAtmMinuteBarData::ref_strike>();
        o << ",\"ivol_hi\":" << m.get<OptionAtmMinuteBarData::ivol_hi>();
        o << ",\"ivol_lo\":" << m.get<OptionAtmMinuteBarData::ivol_lo>();
        o << ",\"ivxx_hi\":" << m.get<OptionAtmMinuteBarData::ivxx_hi>();
        o << ",\"ivxx_lo\":" << m.get<OptionAtmMinuteBarData::ivxx_lo>();
        o << ",\"iv_cen_hi\":" << m.get<OptionAtmMinuteBarData::iv_cen_hi>();
        o << ",\"iv_cen_lo\":" << m.get<OptionAtmMinuteBarData::iv_cen_lo>();
        o << ",\"sdiv_hi\":" << m.get<OptionAtmMinuteBarData::sdiv_hi>();
        o << ",\"sdiv_lo\":" << m.get<OptionAtmMinuteBarData::sdiv_lo>();
        o << ",\"u_prc_ratio_hi\":" << m.get<OptionAtmMinuteBarData::u_prc_ratio_hi>();
        o << ",\"u_prc_ratio_lo\":" << m.get<OptionAtmMinuteBarData::u_prc_ratio_lo>();
        o << ",\"slope_hi\":" << m.get<OptionAtmMinuteBarData::slope_hi>();
        o << ",\"slope_lo\":" << m.get<OptionAtmMinuteBarData::slope_lo>();
        o << ",\"var_swap_fv\":" << m.get<OptionAtmMinuteBarData::var_swap_fv>();
        o << ",\"max_divol\":" << m.get<OptionAtmMinuteBarData::max_divol>();
        o << ",\"max_dsdiv\":" << m.get<OptionAtmMinuteBarData::max_dsdiv>();
        o << ",\"u_prc_spy\":" << m.get<OptionAtmMinuteBarData::u_prc_spy>();
        o << ",\"ivol_spy\":" << m.get<OptionAtmMinuteBarData::ivol_spy>();
        o << ",\"ivxx_spy\":" << m.get<OptionAtmMinuteBarData::ivxx_spy>();
        o << ",\"market_segment\":" << (int64_t)m.get<OptionAtmMinuteBarData::market_segment>();
        {
            std::time_t tt = m.get<OptionAtmMinuteBarData::ts>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"ts\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}