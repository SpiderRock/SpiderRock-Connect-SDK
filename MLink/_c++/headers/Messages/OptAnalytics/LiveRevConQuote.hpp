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

    #ifndef _x_axis__GUARD__
    #define _x_axis__GUARD__
    DECL_STRONG_TYPE(x_axis, float);
    #endif//_x_axis__GUARD__

    #ifndef _c_de__GUARD__
    #define _c_de__GUARD__
    DECL_STRONG_TYPE(c_de, float);
    #endif//_c_de__GUARD__

    #ifndef _p_de__GUARD__
    #define _p_de__GUARD__
    DECL_STRONG_TYPE(p_de, float);
    #endif//_p_de__GUARD__

    #ifndef _u_prc__double__GUARD__
    #define _u_prc__double__GUARD__
    DECL_STRONG_TYPE(u_prc__double, double);
    #endif//_u_prc__double__GUARD__

    #ifndef _atm_vol__GUARD__
    #define _atm_vol__GUARD__
    DECL_STRONG_TYPE(atm_vol, float);
    #endif//_atm_vol__GUARD__

    #ifndef _years__float__GUARD__
    #define _years__float__GUARD__
    DECL_STRONG_TYPE(years__float, float);
    #endif//_years__float__GUARD__

    #ifndef _global_rate__GUARD__
    #define _global_rate__GUARD__
    DECL_STRONG_TYPE(global_rate, float);
    #endif//_global_rate__GUARD__

    #ifndef _ddiv__GUARD__
    #define _ddiv__GUARD__
    DECL_STRONG_TYPE(ddiv, float);
    #endif//_ddiv__GUARD__

    #ifndef _ddiv_pv__float__GUARD__
    #define _ddiv_pv__float__GUARD__
    DECL_STRONG_TYPE(ddiv_pv__float, float);
    #endif//_ddiv_pv__float__GUARD__

    #ifndef _ddiv_source__GUARD__
    #define _ddiv_source__GUARD__
    DECL_STRONG_TYPE(ddiv_source, spiderrock::protobuf::api::DDivSource);
    #endif//_ddiv_source__GUARD__

    #ifndef _i_days__int32__GUARD__
    #define _i_days__int32__GUARD__
    DECL_STRONG_TYPE(i_days__int32, int32);
    #endif//_i_days__int32__GUARD__

    #ifndef _strike_pv__float__GUARD__
    #define _strike_pv__float__GUARD__
    DECL_STRONG_TYPE(strike_pv__float, float);
    #endif//_strike_pv__float__GUARD__

    #ifndef _fair_svol__GUARD__
    #define _fair_svol__GUARD__
    DECL_STRONG_TYPE(fair_svol, float);
    #endif//_fair_svol__GUARD__

    #ifndef _fair_sdiv__GUARD__
    #define _fair_sdiv__GUARD__
    DECL_STRONG_TYPE(fair_sdiv, float);
    #endif//_fair_sdiv__GUARD__

    #ifndef _fair_call_prc__GUARD__
    #define _fair_call_prc__GUARD__
    DECL_STRONG_TYPE(fair_call_prc, float);
    #endif//_fair_call_prc__GUARD__

    #ifndef _fair_call_prc_e__GUARD__
    #define _fair_call_prc_e__GUARD__
    DECL_STRONG_TYPE(fair_call_prc_e, float);
    #endif//_fair_call_prc_e__GUARD__

    #ifndef _fair_put_prc__GUARD__
    #define _fair_put_prc__GUARD__
    DECL_STRONG_TYPE(fair_put_prc, float);
    #endif//_fair_put_prc__GUARD__

    #ifndef _fair_put_prc_e__GUARD__
    #define _fair_put_prc_e__GUARD__
    DECL_STRONG_TYPE(fair_put_prc_e, float);
    #endif//_fair_put_prc_e__GUARD__

    #ifndef _rc_fair_prc__GUARD__
    #define _rc_fair_prc__GUARD__
    DECL_STRONG_TYPE(rc_fair_prc, float);
    #endif//_rc_fair_prc__GUARD__

    #ifndef _rc_eex_prem__float__GUARD__
    #define _rc_eex_prem__float__GUARD__
    DECL_STRONG_TYPE(rc_eex_prem__float, float);
    #endif//_rc_eex_prem__float__GUARD__

    #ifndef _fair_loan_pv__GUARD__
    #define _fair_loan_pv__GUARD__
    DECL_STRONG_TYPE(fair_loan_pv, float);
    #endif//_fair_loan_pv__GUARD__

    #ifndef _fair_loan_rate__GUARD__
    #define _fair_loan_rate__GUARD__
    DECL_STRONG_TYPE(fair_loan_rate, float);
    #endif//_fair_loan_rate__GUARD__

    #ifndef _rc_bid_loan_pv__GUARD__
    #define _rc_bid_loan_pv__GUARD__
    DECL_STRONG_TYPE(rc_bid_loan_pv, float);
    #endif//_rc_bid_loan_pv__GUARD__

    #ifndef _rc_ask_loan_pv__GUARD__
    #define _rc_ask_loan_pv__GUARD__
    DECL_STRONG_TYPE(rc_ask_loan_pv, float);
    #endif//_rc_ask_loan_pv__GUARD__

    #ifndef _calc_error__GUARD__
    #define _calc_error__GUARD__
    DECL_STRONG_TYPE(calc_error, string);
    #endif//_calc_error__GUARD__

    #ifndef _cp_oi__GUARD__
    #define _cp_oi__GUARD__
    DECL_STRONG_TYPE(cp_oi, int32);
    #endif//_cp_oi__GUARD__

    #ifndef _cp_vlm__GUARD__
    #define _cp_vlm__GUARD__
    DECL_STRONG_TYPE(cp_vlm, int32);
    #endif//_cp_vlm__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _okey__GUARD__
    #define _okey__GUARD__
    DECL_STRONG_TYPE(okey, OptionKey);
    #endif//_okey__GUARD__

    #ifndef _trade_date__GUARD__
    #define _trade_date__GUARD__
    DECL_STRONG_TYPE(trade_date, DateKey);
    #endif//_trade_date__GUARD__

    
    class LiveRevConQuote_PKey {
        public:
        //using statements for all types used in this class
        using okey = spiderrock::protobuf::api::okey;
        using trade_date = spiderrock::protobuf::api::trade_date;

        private:
        okey m_okey{};
        trade_date m_trade_date{};

        public:
		okey get_okey() const {
            return m_okey;
        }
		trade_date get_trade_date() const {
            return m_trade_date;
        }
        void set_okey(const okey& value)  {
            m_okey = value;
        }
        void set_trade_date(const trade_date& value)  {
            m_trade_date = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveRevConQuote_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveRevConQuote_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const okey & value) { set_okey(value); }
        void set(const trade_date & value) { set_trade_date(value); }


        LiveRevConQuote_PKey() {}

        virtual ~LiveRevConQuote_PKey() {
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
        bool IncludeOkey() const {
            return (m_okey.ByteSizeLong() > 0);
        }
        bool IncludeTradeDate() const {
            return (m_trade_date.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout;
                m_okey.setCodecOptionKey(optionKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(10,optionKeyLayout);
            }
            if ( IncludeTradeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(11, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout;
                m_okey.setCodecOptionKey(optionKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 10, optionKeyLayout);
            }
            if ( IncludeTradeDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,11, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
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
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_okey.setFromCodec(optionKey);
                        break;
                    }
                    case 11: {
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
    

    class LiveRevConQuote {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::LiveRevConQuote_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using x_axis = spiderrock::protobuf::api::x_axis;
        using c_de = spiderrock::protobuf::api::c_de;
        using p_de = spiderrock::protobuf::api::p_de;
        using u_prc = spiderrock::protobuf::api::u_prc__double;
        using atm_vol = spiderrock::protobuf::api::atm_vol;
        using years = spiderrock::protobuf::api::years__float;
        using global_rate = spiderrock::protobuf::api::global_rate;
        using ddiv = spiderrock::protobuf::api::ddiv;
        using ddiv_pv = spiderrock::protobuf::api::ddiv_pv__float;
        using ddiv_source = spiderrock::protobuf::api::ddiv_source;
        using i_days = spiderrock::protobuf::api::i_days__int32;
        using strike_pv = spiderrock::protobuf::api::strike_pv__float;
        using fair_svol = spiderrock::protobuf::api::fair_svol;
        using fair_sdiv = spiderrock::protobuf::api::fair_sdiv;
        using fair_call_prc = spiderrock::protobuf::api::fair_call_prc;
        using fair_call_prc_e = spiderrock::protobuf::api::fair_call_prc_e;
        using fair_put_prc = spiderrock::protobuf::api::fair_put_prc;
        using fair_put_prc_e = spiderrock::protobuf::api::fair_put_prc_e;
        using rc_fair_prc = spiderrock::protobuf::api::rc_fair_prc;
        using rc_eex_prem = spiderrock::protobuf::api::rc_eex_prem__float;
        using fair_loan_pv = spiderrock::protobuf::api::fair_loan_pv;
        using fair_loan_rate = spiderrock::protobuf::api::fair_loan_rate;
        using rc_bid_loan_pv = spiderrock::protobuf::api::rc_bid_loan_pv;
        using rc_ask_loan_pv = spiderrock::protobuf::api::rc_ask_loan_pv;
        using calc_error = spiderrock::protobuf::api::calc_error;
        using cp_oi = spiderrock::protobuf::api::cp_oi;
        using cp_vlm = spiderrock::protobuf::api::cp_vlm;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        x_axis m_x_axis{};
        c_de m_c_de{};
        p_de m_p_de{};
        u_prc m_u_prc{};
        atm_vol m_atm_vol{};
        years m_years{};
        global_rate m_global_rate{};
        ddiv m_ddiv{};
        ddiv_pv m_ddiv_pv{};
        ddiv_source m_ddiv_source{};
        i_days m_i_days{};
        strike_pv m_strike_pv{};
        fair_svol m_fair_svol{};
        fair_sdiv m_fair_sdiv{};
        fair_call_prc m_fair_call_prc{};
        fair_call_prc_e m_fair_call_prc_e{};
        fair_put_prc m_fair_put_prc{};
        fair_put_prc_e m_fair_put_prc_e{};
        rc_fair_prc m_rc_fair_prc{};
        rc_eex_prem m_rc_eex_prem{};
        fair_loan_pv m_fair_loan_pv{};
        fair_loan_rate m_fair_loan_rate{};
        rc_bid_loan_pv m_rc_bid_loan_pv{};
        rc_ask_loan_pv m_rc_ask_loan_pv{};
        calc_error m_calc_error{};
        cp_oi m_cp_oi{};
        cp_vlm m_cp_vlm{};
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
        x_axis get_x_axis() const {
            return m_x_axis;
        }		
        c_de get_c_de() const {
            return m_c_de;
        }		
        p_de get_p_de() const {
            return m_p_de;
        }		
        u_prc get_u_prc() const {
            return m_u_prc;
        }		
        atm_vol get_atm_vol() const {
            return m_atm_vol;
        }		
        years get_years() const {
            return m_years;
        }		
        global_rate get_global_rate() const {
            return m_global_rate;
        }		
        ddiv get_ddiv() const {
            return m_ddiv;
        }		
        ddiv_pv get_ddiv_pv() const {
            return m_ddiv_pv;
        }		
        ddiv_source get_ddiv_source() const {
            return m_ddiv_source;
        }		
        i_days get_i_days() const {
            return m_i_days;
        }		
        strike_pv get_strike_pv() const {
            return m_strike_pv;
        }		
        fair_svol get_fair_svol() const {
            return m_fair_svol;
        }		
        fair_sdiv get_fair_sdiv() const {
            return m_fair_sdiv;
        }		
        fair_call_prc get_fair_call_prc() const {
            return m_fair_call_prc;
        }		
        fair_call_prc_e get_fair_call_prc_e() const {
            return m_fair_call_prc_e;
        }		
        fair_put_prc get_fair_put_prc() const {
            return m_fair_put_prc;
        }		
        fair_put_prc_e get_fair_put_prc_e() const {
            return m_fair_put_prc_e;
        }		
        rc_fair_prc get_rc_fair_prc() const {
            return m_rc_fair_prc;
        }		
        rc_eex_prem get_rc_eex_prem() const {
            return m_rc_eex_prem;
        }		
        fair_loan_pv get_fair_loan_pv() const {
            return m_fair_loan_pv;
        }		
        fair_loan_rate get_fair_loan_rate() const {
            return m_fair_loan_rate;
        }		
        rc_bid_loan_pv get_rc_bid_loan_pv() const {
            return m_rc_bid_loan_pv;
        }		
        rc_ask_loan_pv get_rc_ask_loan_pv() const {
            return m_rc_ask_loan_pv;
        }		
        calc_error get_calc_error() const {
            return m_calc_error;
        }		
        cp_oi get_cp_oi() const {
            return m_cp_oi;
        }		
        cp_vlm get_cp_vlm() const {
            return m_cp_vlm;
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
        void set_x_axis(const x_axis& value)  {
            m_x_axis = value;
        }
        void set_c_de(const c_de& value)  {
            m_c_de = value;
        }
        void set_p_de(const p_de& value)  {
            m_p_de = value;
        }
        void set_u_prc(const u_prc& value)  {
            m_u_prc = value;
        }
        void set_atm_vol(const atm_vol& value)  {
            m_atm_vol = value;
        }
        void set_years(const years& value)  {
            m_years = value;
        }
        void set_global_rate(const global_rate& value)  {
            m_global_rate = value;
        }
        void set_ddiv(const ddiv& value)  {
            m_ddiv = value;
        }
        void set_ddiv_pv(const ddiv_pv& value)  {
            m_ddiv_pv = value;
        }
        void set_ddiv_source(const ddiv_source& value)  {
            m_ddiv_source = value;
        }
        void set_i_days(const i_days& value)  {
            m_i_days = value;
        }
        void set_strike_pv(const strike_pv& value)  {
            m_strike_pv = value;
        }
        void set_fair_svol(const fair_svol& value)  {
            m_fair_svol = value;
        }
        void set_fair_sdiv(const fair_sdiv& value)  {
            m_fair_sdiv = value;
        }
        void set_fair_call_prc(const fair_call_prc& value)  {
            m_fair_call_prc = value;
        }
        void set_fair_call_prc_e(const fair_call_prc_e& value)  {
            m_fair_call_prc_e = value;
        }
        void set_fair_put_prc(const fair_put_prc& value)  {
            m_fair_put_prc = value;
        }
        void set_fair_put_prc_e(const fair_put_prc_e& value)  {
            m_fair_put_prc_e = value;
        }
        void set_rc_fair_prc(const rc_fair_prc& value)  {
            m_rc_fair_prc = value;
        }
        void set_rc_eex_prem(const rc_eex_prem& value)  {
            m_rc_eex_prem = value;
        }
        void set_fair_loan_pv(const fair_loan_pv& value)  {
            m_fair_loan_pv = value;
        }
        void set_fair_loan_rate(const fair_loan_rate& value)  {
            m_fair_loan_rate = value;
        }
        void set_rc_bid_loan_pv(const rc_bid_loan_pv& value)  {
            m_rc_bid_loan_pv = value;
        }
        void set_rc_ask_loan_pv(const rc_ask_loan_pv& value)  {
            m_rc_ask_loan_pv = value;
        }
        void set_calc_error(const calc_error& value)  {
            m_calc_error = value;
        }
        void set_cp_oi(const cp_oi& value)  {
            m_cp_oi = value;
        }
        void set_cp_vlm(const cp_vlm& value)  {
            m_cp_vlm = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveRevConQuote::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const x_axis & value) {
            set_x_axis(value);
        }
        void set(const c_de & value) {
            set_c_de(value);
        }
        void set(const p_de & value) {
            set_p_de(value);
        }
        void set(const u_prc & value) {
            set_u_prc(value);
        }
        void set(const atm_vol & value) {
            set_atm_vol(value);
        }
        void set(const years & value) {
            set_years(value);
        }
        void set(const global_rate & value) {
            set_global_rate(value);
        }
        void set(const ddiv & value) {
            set_ddiv(value);
        }
        void set(const ddiv_pv & value) {
            set_ddiv_pv(value);
        }
        void set(const ddiv_source & value) {
            set_ddiv_source(value);
        }
        void set(const i_days & value) {
            set_i_days(value);
        }
        void set(const strike_pv & value) {
            set_strike_pv(value);
        }
        void set(const fair_svol & value) {
            set_fair_svol(value);
        }
        void set(const fair_sdiv & value) {
            set_fair_sdiv(value);
        }
        void set(const fair_call_prc & value) {
            set_fair_call_prc(value);
        }
        void set(const fair_call_prc_e & value) {
            set_fair_call_prc_e(value);
        }
        void set(const fair_put_prc & value) {
            set_fair_put_prc(value);
        }
        void set(const fair_put_prc_e & value) {
            set_fair_put_prc_e(value);
        }
        void set(const rc_fair_prc & value) {
            set_rc_fair_prc(value);
        }
        void set(const rc_eex_prem & value) {
            set_rc_eex_prem(value);
        }
        void set(const fair_loan_pv & value) {
            set_fair_loan_pv(value);
        }
        void set(const fair_loan_rate & value) {
            set_fair_loan_rate(value);
        }
        void set(const rc_bid_loan_pv & value) {
            set_rc_bid_loan_pv(value);
        }
        void set(const rc_ask_loan_pv & value) {
            set_rc_ask_loan_pv(value);
        }
        void set(const calc_error & value) {
            set_calc_error(value);
        }
        void set(const cp_oi & value) {
            set_cp_oi(value);
        }
        void set(const cp_vlm & value) {
            set_cp_vlm(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const LiveRevConQuote & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_x_axis);
            set(value.m_c_de);
            set(value.m_p_de);
            set(value.m_u_prc);
            set(value.m_atm_vol);
            set(value.m_years);
            set(value.m_global_rate);
            set(value.m_ddiv);
            set(value.m_ddiv_pv);
            set(value.m_ddiv_source);
            set(value.m_i_days);
            set(value.m_strike_pv);
            set(value.m_fair_svol);
            set(value.m_fair_sdiv);
            set(value.m_fair_call_prc);
            set(value.m_fair_call_prc_e);
            set(value.m_fair_put_prc);
            set(value.m_fair_put_prc_e);
            set(value.m_rc_fair_prc);
            set(value.m_rc_eex_prem);
            set(value.m_fair_loan_pv);
            set(value.m_fair_loan_rate);
            set(value.m_rc_bid_loan_pv);
            set(value.m_rc_ask_loan_pv);
            set(value.m_calc_error);
            set(value.m_cp_oi);
            set(value.m_cp_vlm);
            set(value.m_timestamp);
        }

        LiveRevConQuote() {
            m__meta.set_message_type("LiveRevConQuote");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1125, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1125, length);
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
             *this = LiveRevConQuote{};
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
        bool IncludeXAxis() const {
            return !(m_x_axis == 0.0);
        }
        bool IncludeCDe() const {
            return !(m_c_de == 0.0);
        }
        bool IncludePDe() const {
            return !(m_p_de == 0.0);
        }
        bool IncludeUPrc() const {
            return !(m_u_prc == 0.0);
        }
        bool IncludeAtmVol() const {
            return !(m_atm_vol == 0.0);
        }
        bool IncludeYears() const {
            return !(m_years == 0.0);
        }
        bool IncludeGlobalRate() const {
            return !(m_global_rate == 0.0);
        }
        bool IncludeDdiv() const {
            return !(m_ddiv == 0.0);
        }
        bool IncludeDdivPv() const {
            return !(m_ddiv_pv == 0.0);
        }
        bool IncludeIDays() const {
            return !(m_i_days == 0);
        }
        bool IncludeStrikePv() const {
            return !(m_strike_pv == 0.0);
        }
        bool IncludeFairSvol() const {
            return !(m_fair_svol == 0.0);
        }
        bool IncludeFairSdiv() const {
            return !(m_fair_sdiv == 0.0);
        }
        bool IncludeFairCallPrc() const {
            return !(m_fair_call_prc == 0.0);
        }
        bool IncludeFairCallPrcE() const {
            return !(m_fair_call_prc_e == 0.0);
        }
        bool IncludeFairPutPrc() const {
            return !(m_fair_put_prc == 0.0);
        }
        bool IncludeFairPutPrcE() const {
            return !(m_fair_put_prc_e == 0.0);
        }
        bool IncludeRcFairPrc() const {
            return !(m_rc_fair_prc == 0.0);
        }
        bool IncludeRcEexPrem() const {
            return !(m_rc_eex_prem == 0.0);
        }
        bool IncludeFairLoanPv() const {
            return !(m_fair_loan_pv == 0.0);
        }
        bool IncludeFairLoanRate() const {
            return !(m_fair_loan_rate == 0.0);
        }
        bool IncludeRcBidLoanPv() const {
            return !(m_rc_bid_loan_pv == 0.0);
        }
        bool IncludeRcAskLoanPv() const {
            return !(m_rc_ask_loan_pv == 0.0);
        }
        bool IncludeCalcError() const {
            return !(m_calc_error.empty());
        }
        bool IncludeCpOi() const {
            return !(m_cp_oi == 0);
        }
        bool IncludeCpVlm() const {
            return !(m_cp_vlm == 0);
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
            if ( IncludeXAxis()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(101,m_x_axis);
            }
            if ( IncludeCDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(102,m_c_de);
            }
            if ( IncludePDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(103,m_p_de);
            }
            if ( IncludeUPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(104,m_u_prc);
            }
            if ( IncludeAtmVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(105,m_atm_vol);
            }
            if ( IncludeYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_years);
            }
            if ( IncludeGlobalRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(107,m_global_rate);
            }
            if ( IncludeDdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(108,m_ddiv);
            }
            if ( IncludeDdivPv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_ddiv_pv);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(110,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DDivSource>(m_ddiv_source)));
            if ( IncludeIDays()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(111,m_i_days);
            }
            if ( IncludeStrikePv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_strike_pv);
            }
            if ( IncludeFairSvol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(113,m_fair_svol);
            }
            if ( IncludeFairSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(114,m_fair_sdiv);
            }
            if ( IncludeFairCallPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_fair_call_prc);
            }
            if ( IncludeFairCallPrcE()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(116,m_fair_call_prc_e);
            }
            if ( IncludeFairPutPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(117,m_fair_put_prc);
            }
            if ( IncludeFairPutPrcE()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_fair_put_prc_e);
            }
            if ( IncludeRcFairPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(119,m_rc_fair_prc);
            }
            if ( IncludeRcEexPrem()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(120,m_rc_eex_prem);
            }
            if ( IncludeFairLoanPv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_fair_loan_pv);
            }
            if ( IncludeFairLoanRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(122,m_fair_loan_rate);
            }
            if ( IncludeRcBidLoanPv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(123,m_rc_bid_loan_pv);
            }
            if ( IncludeRcAskLoanPv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_rc_ask_loan_pv);
            }
            if ( IncludeCalcError()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(125,m_calc_error);
            }
            if ( IncludeCpOi()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(126,m_cp_oi);
            }
            if ( IncludeCpVlm()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(127,m_cp_vlm);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(128, m_timestamp);
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
            if ( IncludeXAxis()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,101,m_x_axis);
            }
            if ( IncludeCDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,102,m_c_de);
            }
            if ( IncludePDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,103,m_p_de);
            }
            if ( IncludeUPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,104,m_u_prc);
            }
            if ( IncludeAtmVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,105,m_atm_vol);
            }
            if ( IncludeYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_years);
            }
            if ( IncludeGlobalRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,107,m_global_rate);
            }
            if ( IncludeDdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,108,m_ddiv);
            }
            if ( IncludeDdivPv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_ddiv_pv);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,110,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DDivSource>(m_ddiv_source)));
            if ( IncludeIDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,111,m_i_days);
            }
            if ( IncludeStrikePv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_strike_pv);
            }
            if ( IncludeFairSvol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,113,m_fair_svol);
            }
            if ( IncludeFairSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,114,m_fair_sdiv);
            }
            if ( IncludeFairCallPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_fair_call_prc);
            }
            if ( IncludeFairCallPrcE()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,116,m_fair_call_prc_e);
            }
            if ( IncludeFairPutPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,117,m_fair_put_prc);
            }
            if ( IncludeFairPutPrcE()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_fair_put_prc_e);
            }
            if ( IncludeRcFairPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,119,m_rc_fair_prc);
            }
            if ( IncludeRcEexPrem()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,120,m_rc_eex_prem);
            }
            if ( IncludeFairLoanPv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_fair_loan_pv);
            }
            if ( IncludeFairLoanRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,122,m_fair_loan_rate);
            }
            if ( IncludeRcBidLoanPv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,123,m_rc_bid_loan_pv);
            }
            if ( IncludeRcAskLoanPv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_rc_ask_loan_pv);
            }
            if ( IncludeCalcError()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,125,static_cast<string>(m_calc_error));
            }
            if ( IncludeCpOi()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,126,m_cp_oi);
            }
            if ( IncludeCpVlm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,127,m_cp_vlm);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 128, m_timestamp);
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
                    case 101: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_x_axis = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 102: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_c_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_p_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 104: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 105: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 107: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_global_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 108: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ddiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ddiv_pv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 110: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ddiv_source = static_cast<spiderrock::protobuf::api::DDivSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 111: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_i_days = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_strike_pv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 113: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fair_svol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 114: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fair_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fair_call_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 116: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fair_call_prc_e = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 117: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fair_put_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fair_put_prc_e = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 119: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rc_fair_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 120: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rc_eex_prem = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fair_loan_pv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 122: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fair_loan_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 123: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rc_bid_loan_pv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rc_ask_loan_pv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 125: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_calc_error = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 126: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cp_oi = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cp_vlm = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 128: {
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

    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::_meta>() const { return LiveRevConQuote::_meta{ m__meta}; }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::pkey>() const { return LiveRevConQuote::pkey{ m_pkey}; }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::ticker>() const { return LiveRevConQuote::ticker{ m_ticker}; }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::x_axis>() const { return m_x_axis; }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::c_de>() const { return m_c_de; }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::p_de>() const { return m_p_de; }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::u_prc>() const { return m_u_prc; }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::atm_vol>() const { return m_atm_vol; }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::years>() const { return m_years; }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::global_rate>() const { return m_global_rate; }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::ddiv>() const { return m_ddiv; }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::ddiv_pv>() const { return m_ddiv_pv; }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::ddiv_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DDivSource>( m_ddiv_source)); }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::i_days>() const { return m_i_days; }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::strike_pv>() const { return m_strike_pv; }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::fair_svol>() const { return m_fair_svol; }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::fair_sdiv>() const { return m_fair_sdiv; }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::fair_call_prc>() const { return m_fair_call_prc; }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::fair_call_prc_e>() const { return m_fair_call_prc_e; }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::fair_put_prc>() const { return m_fair_put_prc; }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::fair_put_prc_e>() const { return m_fair_put_prc_e; }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::rc_fair_prc>() const { return m_rc_fair_prc; }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::rc_eex_prem>() const { return m_rc_eex_prem; }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::fair_loan_pv>() const { return m_fair_loan_pv; }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::fair_loan_rate>() const { return m_fair_loan_rate; }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::rc_bid_loan_pv>() const { return m_rc_bid_loan_pv; }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::rc_ask_loan_pv>() const { return m_rc_ask_loan_pv; }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::calc_error>() const { return m_calc_error; }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::cp_oi>() const { return m_cp_oi; }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::cp_vlm>() const { return m_cp_vlm; }
    template<> inline const auto LiveRevConQuote::get<LiveRevConQuote::timestamp>() const { return m_timestamp; }
    template<> inline const auto LiveRevConQuote_PKey::get<LiveRevConQuote_PKey::okey>() const { return LiveRevConQuote_PKey::okey{m_okey}; }
    template<> inline const auto LiveRevConQuote_PKey::get<LiveRevConQuote_PKey::trade_date>() const { return LiveRevConQuote_PKey::trade_date{m_trade_date}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const LiveRevConQuote_PKey& m) {
        o << "\"okey\":{" << m.get<LiveRevConQuote_PKey::okey>() << "}";
        o << ",\"trade_date\":{" << m.get<LiveRevConQuote_PKey::trade_date>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const LiveRevConQuote& m) {
        o << "\"_meta\":{" << m.get<LiveRevConQuote::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<LiveRevConQuote::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<LiveRevConQuote::ticker>() << "}";
        o << ",\"x_axis\":" << m.get<LiveRevConQuote::x_axis>();
        o << ",\"c_de\":" << m.get<LiveRevConQuote::c_de>();
        o << ",\"p_de\":" << m.get<LiveRevConQuote::p_de>();
        o << ",\"u_prc\":" << m.get<LiveRevConQuote::u_prc>();
        o << ",\"atm_vol\":" << m.get<LiveRevConQuote::atm_vol>();
        o << ",\"years\":" << m.get<LiveRevConQuote::years>();
        o << ",\"global_rate\":" << m.get<LiveRevConQuote::global_rate>();
        o << ",\"ddiv\":" << m.get<LiveRevConQuote::ddiv>();
        o << ",\"ddiv_pv\":" << m.get<LiveRevConQuote::ddiv_pv>();
        o << ",\"ddiv_source\":" << (int64_t)m.get<LiveRevConQuote::ddiv_source>();
        o << ",\"i_days\":" << m.get<LiveRevConQuote::i_days>();
        o << ",\"strike_pv\":" << m.get<LiveRevConQuote::strike_pv>();
        o << ",\"fair_svol\":" << m.get<LiveRevConQuote::fair_svol>();
        o << ",\"fair_sdiv\":" << m.get<LiveRevConQuote::fair_sdiv>();
        o << ",\"fair_call_prc\":" << m.get<LiveRevConQuote::fair_call_prc>();
        o << ",\"fair_call_prc_e\":" << m.get<LiveRevConQuote::fair_call_prc_e>();
        o << ",\"fair_put_prc\":" << m.get<LiveRevConQuote::fair_put_prc>();
        o << ",\"fair_put_prc_e\":" << m.get<LiveRevConQuote::fair_put_prc_e>();
        o << ",\"rc_fair_prc\":" << m.get<LiveRevConQuote::rc_fair_prc>();
        o << ",\"rc_eex_prem\":" << m.get<LiveRevConQuote::rc_eex_prem>();
        o << ",\"fair_loan_pv\":" << m.get<LiveRevConQuote::fair_loan_pv>();
        o << ",\"fair_loan_rate\":" << m.get<LiveRevConQuote::fair_loan_rate>();
        o << ",\"rc_bid_loan_pv\":" << m.get<LiveRevConQuote::rc_bid_loan_pv>();
        o << ",\"rc_ask_loan_pv\":" << m.get<LiveRevConQuote::rc_ask_loan_pv>();
        o << ",\"calc_error\":\"" << m.get<LiveRevConQuote::calc_error>() << "\"";
        o << ",\"cp_oi\":" << m.get<LiveRevConQuote::cp_oi>();
        o << ",\"cp_vlm\":" << m.get<LiveRevConQuote::cp_vlm>();
        {
            std::time_t tt = m.get<LiveRevConQuote::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}