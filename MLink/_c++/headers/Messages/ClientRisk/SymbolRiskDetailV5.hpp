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

    #ifndef _client_tags__GUARD__
    #define _client_tags__GUARD__
    DECL_STRONG_TYPE(client_tags, string);
    #endif//_client_tags__GUARD__

    #ifndef _stk_status__GUARD__
    #define _stk_status__GUARD__
    DECL_STRONG_TYPE(stk_status, spiderrock::protobuf::api::StkStatus);
    #endif//_stk_status__GUARD__

    #ifndef _opt_status__GUARD__
    #define _opt_status__GUARD__
    DECL_STRONG_TYPE(opt_status, spiderrock::protobuf::api::OptStatus);
    #endif//_opt_status__GUARD__

    #ifndef _risk_class__GUARD__
    #define _risk_class__GUARD__
    DECL_STRONG_TYPE(risk_class, string);
    #endif//_risk_class__GUARD__

    #ifndef _theo_model__GUARD__
    #define _theo_model__GUARD__
    DECL_STRONG_TYPE(theo_model, string);
    #endif//_theo_model__GUARD__

    #ifndef _theo_model2__GUARD__
    #define _theo_model2__GUARD__
    DECL_STRONG_TYPE(theo_model2, string);
    #endif//_theo_model2__GUARD__

    #ifndef _hedge_delta_rule__GUARD__
    #define _hedge_delta_rule__GUARD__
    DECL_STRONG_TYPE(hedge_delta_rule, spiderrock::protobuf::api::HedgeDeltaRule);
    #endif//_hedge_delta_rule__GUARD__

    #ifndef _hold_reason__GUARD__
    #define _hold_reason__GUARD__
    DECL_STRONG_TYPE(hold_reason, spiderrock::protobuf::api::HoldReason);
    #endif//_hold_reason__GUARD__

    #ifndef _binary_days__GUARD__
    #define _binary_days__GUARD__
    DECL_STRONG_TYPE(binary_days, float);
    #endif//_binary_days__GUARD__

    #ifndef _ctrl_update__GUARD__
    #define _ctrl_update__GUARD__
    DECL_STRONG_TYPE(ctrl_update, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_ctrl_update__GUARD__

    #ifndef _period_end_time__GUARD__
    #define _period_end_time__GUARD__
    DECL_STRONG_TYPE(period_end_time, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_period_end_time__GUARD__

    #ifndef _symbol_type__GUARD__
    #define _symbol_type__GUARD__
    DECL_STRONG_TYPE(symbol_type, spiderrock::protobuf::api::SymbolType);
    #endif//_symbol_type__GUARD__

    #ifndef _name__GUARD__
    #define _name__GUARD__
    DECL_STRONG_TYPE(name, string);
    #endif//_name__GUARD__

    #ifndef _industry__int32__GUARD__
    #define _industry__int32__GUARD__
    DECL_STRONG_TYPE(industry__int32, int32);
    #endif//_industry__int32__GUARD__

    #ifndef _sector__GUARD__
    #define _sector__GUARD__
    DECL_STRONG_TYPE(sector, string);
    #endif//_sector__GUARD__

    #ifndef _beta__GUARD__
    #define _beta__GUARD__
    DECL_STRONG_TYPE(beta, float);
    #endif//_beta__GUARD__

    #ifndef _beta_source__GUARD__
    #define _beta_source__GUARD__
    DECL_STRONG_TYPE(beta_source, spiderrock::protobuf::api::BetaSource);
    #endif//_beta_source__GUARD__

    #ifndef _stk_volume__GUARD__
    #define _stk_volume__GUARD__
    DECL_STRONG_TYPE(stk_volume, float);
    #endif//_stk_volume__GUARD__

    #ifndef _opt_volume__GUARD__
    #define _opt_volume__GUARD__
    DECL_STRONG_TYPE(opt_volume, float);
    #endif//_opt_volume__GUARD__

    #ifndef _tape_code__GUARD__
    #define _tape_code__GUARD__
    DECL_STRONG_TYPE(tape_code, spiderrock::protobuf::api::TapeCode);
    #endif//_tape_code__GUARD__

    #ifndef _margin_type__GUARD__
    #define _margin_type__GUARD__
    DECL_STRONG_TYPE(margin_type, spiderrock::protobuf::api::MarginType);
    #endif//_margin_type__GUARD__

    #ifndef _point_currency__GUARD__
    #define _point_currency__GUARD__
    DECL_STRONG_TYPE(point_currency, spiderrock::protobuf::api::Currency);
    #endif//_point_currency__GUARD__

    #ifndef _d_amt__GUARD__
    #define _d_amt__GUARD__
    DECL_STRONG_TYPE(d_amt, float);
    #endif//_d_amt__GUARD__

    #ifndef _d_days__GUARD__
    #define _d_days__GUARD__
    DECL_STRONG_TYPE(d_days, int32);
    #endif//_d_days__GUARD__

    #ifndef _e_days__GUARD__
    #define _e_days__GUARD__
    DECL_STRONG_TYPE(e_days, int32);
    #endif//_e_days__GUARD__

    #ifndef _locate_quan__GUARD__
    #define _locate_quan__GUARD__
    DECL_STRONG_TYPE(locate_quan, int32);
    #endif//_locate_quan__GUARD__

    #ifndef _available_locate_quan__GUARD__
    #define _available_locate_quan__GUARD__
    DECL_STRONG_TYPE(available_locate_quan, int32);
    #endif//_available_locate_quan__GUARD__

    #ifndef _gc_flag__GUARD__
    #define _gc_flag__GUARD__
    DECL_STRONG_TYPE(gc_flag, spiderrock::protobuf::api::YesNo);
    #endif//_gc_flag__GUARD__

    #ifndef _gc_rate__GUARD__
    #define _gc_rate__GUARD__
    DECL_STRONG_TYPE(gc_rate, float);
    #endif//_gc_rate__GUARD__

    #ifndef _borrow_rate__GUARD__
    #define _borrow_rate__GUARD__
    DECL_STRONG_TYPE(borrow_rate, float);
    #endif//_borrow_rate__GUARD__

    #ifndef _st_min_ivol__GUARD__
    #define _st_min_ivol__GUARD__
    DECL_STRONG_TYPE(st_min_ivol, float);
    #endif//_st_min_ivol__GUARD__

    #ifndef _st_max_ivol__GUARD__
    #define _st_max_ivol__GUARD__
    DECL_STRONG_TYPE(st_max_ivol, float);
    #endif//_st_max_ivol__GUARD__

    #ifndef _earn_mult__GUARD__
    #define _earn_mult__GUARD__
    DECL_STRONG_TYPE(earn_mult, float);
    #endif//_earn_mult__GUARD__

    #ifndef _earn_mult_err__GUARD__
    #define _earn_mult_err__GUARD__
    DECL_STRONG_TYPE(earn_mult_err, float);
    #endif//_earn_mult_err__GUARD__

    #ifndef _base_vol__GUARD__
    #define _base_vol__GUARD__
    DECL_STRONG_TYPE(base_vol, float);
    #endif//_base_vol__GUARD__

    #ifndef _tail_vol__GUARD__
    #define _tail_vol__GUARD__
    DECL_STRONG_TYPE(tail_vol, float);
    #endif//_tail_vol__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _trade_date__GUARD__
    #define _trade_date__GUARD__
    DECL_STRONG_TYPE(trade_date, DateKey);
    #endif//_trade_date__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    
    class SymbolRiskDetailV5_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using accnt = spiderrock::protobuf::api::accnt;
        using trade_date = spiderrock::protobuf::api::trade_date;
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        ticker m_ticker{};
        accnt m_accnt{};
        trade_date m_trade_date{};
        client_firm m_client_firm{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
        accnt get_accnt() const {
            return m_accnt;
        }
		trade_date get_trade_date() const {
            return m_trade_date;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_trade_date(const trade_date& value)  {
            m_trade_date = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SymbolRiskDetailV5_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SymbolRiskDetailV5_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const accnt & value) { set_accnt(value); }
        void set(const trade_date & value) { set_trade_date(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        SymbolRiskDetailV5_PKey() {}

        virtual ~SymbolRiskDetailV5_PKey() {
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
        bool IncludeAccnt() const {
            return !(m_accnt.empty());
        }
        bool IncludeTradeDate() const {
            return (m_trade_date.ByteSizeLong() > 0);
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout_ticker);
            }
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_accnt);
            }
            if ( IncludeTradeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(12, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(13,m_client_firm);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout_ticker);
            }
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_accnt));
            }
            if ( IncludeTradeDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,12, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,13,static_cast<string>(m_client_firm));
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
                    case 11: {m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 12: {
                        auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                        m_trade_date.set_year(dateKey.year());
                        m_trade_date.set_month(dateKey.month());
                        m_trade_date.set_day(dateKey.day());
                        break;
                    }
                    case 13: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SymbolRiskDetailV5 {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SymbolRiskDetailV5_PKey;
        using client_tags = spiderrock::protobuf::api::client_tags;
        using stk_status = spiderrock::protobuf::api::stk_status;
        using opt_status = spiderrock::protobuf::api::opt_status;
        using risk_class = spiderrock::protobuf::api::risk_class;
        using theo_model = spiderrock::protobuf::api::theo_model;
        using theo_model2 = spiderrock::protobuf::api::theo_model2;
        using hedge_delta_rule = spiderrock::protobuf::api::hedge_delta_rule;
        using hold_reason = spiderrock::protobuf::api::hold_reason;
        using binary_days = spiderrock::protobuf::api::binary_days;
        using ctrl_update = spiderrock::protobuf::api::ctrl_update;
        using period_end_time = spiderrock::protobuf::api::period_end_time;
        using symbol_type = spiderrock::protobuf::api::symbol_type;
        using name = spiderrock::protobuf::api::name;
        using industry = spiderrock::protobuf::api::industry__int32;
        using sector = spiderrock::protobuf::api::sector;
        using beta = spiderrock::protobuf::api::beta;
        using beta_source = spiderrock::protobuf::api::beta_source;
        using stk_volume = spiderrock::protobuf::api::stk_volume;
        using opt_volume = spiderrock::protobuf::api::opt_volume;
        using tape_code = spiderrock::protobuf::api::tape_code;
        using margin_type = spiderrock::protobuf::api::margin_type;
        using point_currency = spiderrock::protobuf::api::point_currency;
        using d_amt = spiderrock::protobuf::api::d_amt;
        using d_days = spiderrock::protobuf::api::d_days;
        using e_days = spiderrock::protobuf::api::e_days;
        using locate_quan = spiderrock::protobuf::api::locate_quan;
        using available_locate_quan = spiderrock::protobuf::api::available_locate_quan;
        using gc_flag = spiderrock::protobuf::api::gc_flag;
        using gc_rate = spiderrock::protobuf::api::gc_rate;
        using borrow_rate = spiderrock::protobuf::api::borrow_rate;
        using st_min_ivol = spiderrock::protobuf::api::st_min_ivol;
        using st_max_ivol = spiderrock::protobuf::api::st_max_ivol;
        using earn_mult = spiderrock::protobuf::api::earn_mult;
        using earn_mult_err = spiderrock::protobuf::api::earn_mult_err;
        using base_vol = spiderrock::protobuf::api::base_vol;
        using tail_vol = spiderrock::protobuf::api::tail_vol;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        client_tags m_client_tags{};
        stk_status m_stk_status{};
        opt_status m_opt_status{};
        risk_class m_risk_class{};
        theo_model m_theo_model{};
        theo_model2 m_theo_model2{};
        hedge_delta_rule m_hedge_delta_rule{};
        hold_reason m_hold_reason{};
        binary_days m_binary_days{};
        ctrl_update m_ctrl_update{};
        period_end_time m_period_end_time{};
        symbol_type m_symbol_type{};
        name m_name{};
        industry m_industry{};
        sector m_sector{};
        beta m_beta{};
        beta_source m_beta_source{};
        stk_volume m_stk_volume{};
        opt_volume m_opt_volume{};
        tape_code m_tape_code{};
        margin_type m_margin_type{};
        point_currency m_point_currency{};
        d_amt m_d_amt{};
        d_days m_d_days{};
        e_days m_e_days{};
        locate_quan m_locate_quan{};
        available_locate_quan m_available_locate_quan{};
        gc_flag m_gc_flag{};
        gc_rate m_gc_rate{};
        borrow_rate m_borrow_rate{};
        st_min_ivol m_st_min_ivol{};
        st_max_ivol m_st_max_ivol{};
        earn_mult m_earn_mult{};
        earn_mult_err m_earn_mult_err{};
        base_vol m_base_vol{};
        tail_vol m_tail_vol{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        client_tags get_client_tags() const {
            return m_client_tags;
        }		
        stk_status get_stk_status() const {
            return m_stk_status;
        }		
        opt_status get_opt_status() const {
            return m_opt_status;
        }		
        risk_class get_risk_class() const {
            return m_risk_class;
        }		
        theo_model get_theo_model() const {
            return m_theo_model;
        }		
        theo_model2 get_theo_model2() const {
            return m_theo_model2;
        }		
        hedge_delta_rule get_hedge_delta_rule() const {
            return m_hedge_delta_rule;
        }		
        hold_reason get_hold_reason() const {
            return m_hold_reason;
        }		
        binary_days get_binary_days() const {
            return m_binary_days;
        }		
        ctrl_update get_ctrl_update() const {
            return m_ctrl_update;
        }		
        period_end_time get_period_end_time() const {
            return m_period_end_time;
        }		
        symbol_type get_symbol_type() const {
            return m_symbol_type;
        }		
        name get_name() const {
            return m_name;
        }		
        industry get_industry() const {
            return m_industry;
        }		
        sector get_sector() const {
            return m_sector;
        }		
        beta get_beta() const {
            return m_beta;
        }		
        beta_source get_beta_source() const {
            return m_beta_source;
        }		
        stk_volume get_stk_volume() const {
            return m_stk_volume;
        }		
        opt_volume get_opt_volume() const {
            return m_opt_volume;
        }		
        tape_code get_tape_code() const {
            return m_tape_code;
        }		
        margin_type get_margin_type() const {
            return m_margin_type;
        }		
        point_currency get_point_currency() const {
            return m_point_currency;
        }		
        d_amt get_d_amt() const {
            return m_d_amt;
        }		
        d_days get_d_days() const {
            return m_d_days;
        }		
        e_days get_e_days() const {
            return m_e_days;
        }		
        locate_quan get_locate_quan() const {
            return m_locate_quan;
        }		
        available_locate_quan get_available_locate_quan() const {
            return m_available_locate_quan;
        }		
        gc_flag get_gc_flag() const {
            return m_gc_flag;
        }		
        gc_rate get_gc_rate() const {
            return m_gc_rate;
        }		
        borrow_rate get_borrow_rate() const {
            return m_borrow_rate;
        }		
        st_min_ivol get_st_min_ivol() const {
            return m_st_min_ivol;
        }		
        st_max_ivol get_st_max_ivol() const {
            return m_st_max_ivol;
        }		
        earn_mult get_earn_mult() const {
            return m_earn_mult;
        }		
        earn_mult_err get_earn_mult_err() const {
            return m_earn_mult_err;
        }		
        base_vol get_base_vol() const {
            return m_base_vol;
        }		
        tail_vol get_tail_vol() const {
            return m_tail_vol;
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
        void set_client_tags(const client_tags& value)  {
            m_client_tags = value;
        }
        void set_stk_status(const stk_status& value)  {
            m_stk_status = value;
        }
        void set_opt_status(const opt_status& value)  {
            m_opt_status = value;
        }
        void set_risk_class(const risk_class& value)  {
            m_risk_class = value;
        }
        void set_theo_model(const theo_model& value)  {
            m_theo_model = value;
        }
        void set_theo_model2(const theo_model2& value)  {
            m_theo_model2 = value;
        }
        void set_hedge_delta_rule(const hedge_delta_rule& value)  {
            m_hedge_delta_rule = value;
        }
        void set_hold_reason(const hold_reason& value)  {
            m_hold_reason = value;
        }
        void set_binary_days(const binary_days& value)  {
            m_binary_days = value;
        }
        void set_ctrl_update(const ctrl_update& value)  {
            m_ctrl_update = value;
        }
        void set_period_end_time(const period_end_time& value)  {
            m_period_end_time = value;
        }
        void set_symbol_type(const symbol_type& value)  {
            m_symbol_type = value;
        }
        void set_name(const name& value)  {
            m_name = value;
        }
        void set_industry(const industry& value)  {
            m_industry = value;
        }
        void set_sector(const sector& value)  {
            m_sector = value;
        }
        void set_beta(const beta& value)  {
            m_beta = value;
        }
        void set_beta_source(const beta_source& value)  {
            m_beta_source = value;
        }
        void set_stk_volume(const stk_volume& value)  {
            m_stk_volume = value;
        }
        void set_opt_volume(const opt_volume& value)  {
            m_opt_volume = value;
        }
        void set_tape_code(const tape_code& value)  {
            m_tape_code = value;
        }
        void set_margin_type(const margin_type& value)  {
            m_margin_type = value;
        }
        void set_point_currency(const point_currency& value)  {
            m_point_currency = value;
        }
        void set_d_amt(const d_amt& value)  {
            m_d_amt = value;
        }
        void set_d_days(const d_days& value)  {
            m_d_days = value;
        }
        void set_e_days(const e_days& value)  {
            m_e_days = value;
        }
        void set_locate_quan(const locate_quan& value)  {
            m_locate_quan = value;
        }
        void set_available_locate_quan(const available_locate_quan& value)  {
            m_available_locate_quan = value;
        }
        void set_gc_flag(const gc_flag& value)  {
            m_gc_flag = value;
        }
        void set_gc_rate(const gc_rate& value)  {
            m_gc_rate = value;
        }
        void set_borrow_rate(const borrow_rate& value)  {
            m_borrow_rate = value;
        }
        void set_st_min_ivol(const st_min_ivol& value)  {
            m_st_min_ivol = value;
        }
        void set_st_max_ivol(const st_max_ivol& value)  {
            m_st_max_ivol = value;
        }
        void set_earn_mult(const earn_mult& value)  {
            m_earn_mult = value;
        }
        void set_earn_mult_err(const earn_mult_err& value)  {
            m_earn_mult_err = value;
        }
        void set_base_vol(const base_vol& value)  {
            m_base_vol = value;
        }
        void set_tail_vol(const tail_vol& value)  {
            m_tail_vol = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SymbolRiskDetailV5::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const client_tags & value) {
            set_client_tags(value);
        }
        void set(const stk_status & value) {
            set_stk_status(value);
        }
        void set(const opt_status & value) {
            set_opt_status(value);
        }
        void set(const risk_class & value) {
            set_risk_class(value);
        }
        void set(const theo_model & value) {
            set_theo_model(value);
        }
        void set(const theo_model2 & value) {
            set_theo_model2(value);
        }
        void set(const hedge_delta_rule & value) {
            set_hedge_delta_rule(value);
        }
        void set(const hold_reason & value) {
            set_hold_reason(value);
        }
        void set(const binary_days & value) {
            set_binary_days(value);
        }
        void set(const ctrl_update & value) {
            set_ctrl_update(value);
        }
        void set(const period_end_time & value) {
            set_period_end_time(value);
        }
        void set(const symbol_type & value) {
            set_symbol_type(value);
        }
        void set(const name & value) {
            set_name(value);
        }
        void set(const industry & value) {
            set_industry(value);
        }
        void set(const sector & value) {
            set_sector(value);
        }
        void set(const beta & value) {
            set_beta(value);
        }
        void set(const beta_source & value) {
            set_beta_source(value);
        }
        void set(const stk_volume & value) {
            set_stk_volume(value);
        }
        void set(const opt_volume & value) {
            set_opt_volume(value);
        }
        void set(const tape_code & value) {
            set_tape_code(value);
        }
        void set(const margin_type & value) {
            set_margin_type(value);
        }
        void set(const point_currency & value) {
            set_point_currency(value);
        }
        void set(const d_amt & value) {
            set_d_amt(value);
        }
        void set(const d_days & value) {
            set_d_days(value);
        }
        void set(const e_days & value) {
            set_e_days(value);
        }
        void set(const locate_quan & value) {
            set_locate_quan(value);
        }
        void set(const available_locate_quan & value) {
            set_available_locate_quan(value);
        }
        void set(const gc_flag & value) {
            set_gc_flag(value);
        }
        void set(const gc_rate & value) {
            set_gc_rate(value);
        }
        void set(const borrow_rate & value) {
            set_borrow_rate(value);
        }
        void set(const st_min_ivol & value) {
            set_st_min_ivol(value);
        }
        void set(const st_max_ivol & value) {
            set_st_max_ivol(value);
        }
        void set(const earn_mult & value) {
            set_earn_mult(value);
        }
        void set(const earn_mult_err & value) {
            set_earn_mult_err(value);
        }
        void set(const base_vol & value) {
            set_base_vol(value);
        }
        void set(const tail_vol & value) {
            set_tail_vol(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const SymbolRiskDetailV5 & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_client_tags);
            set(value.m_stk_status);
            set(value.m_opt_status);
            set(value.m_risk_class);
            set(value.m_theo_model);
            set(value.m_theo_model2);
            set(value.m_hedge_delta_rule);
            set(value.m_hold_reason);
            set(value.m_binary_days);
            set(value.m_ctrl_update);
            set(value.m_period_end_time);
            set(value.m_symbol_type);
            set(value.m_name);
            set(value.m_industry);
            set(value.m_sector);
            set(value.m_beta);
            set(value.m_beta_source);
            set(value.m_stk_volume);
            set(value.m_opt_volume);
            set(value.m_tape_code);
            set(value.m_margin_type);
            set(value.m_point_currency);
            set(value.m_d_amt);
            set(value.m_d_days);
            set(value.m_e_days);
            set(value.m_locate_quan);
            set(value.m_available_locate_quan);
            set(value.m_gc_flag);
            set(value.m_gc_rate);
            set(value.m_borrow_rate);
            set(value.m_st_min_ivol);
            set(value.m_st_max_ivol);
            set(value.m_earn_mult);
            set(value.m_earn_mult_err);
            set(value.m_base_vol);
            set(value.m_tail_vol);
            set(value.m_timestamp);
        }

        SymbolRiskDetailV5() {
            m__meta.set_message_type("SymbolRiskDetailV5");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4860, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4860, length);
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
             *this = SymbolRiskDetailV5{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeClientTags() const {
            return !(m_client_tags.empty());
        }
        bool IncludeRiskClass() const {
            return !(m_risk_class.empty());
        }
        bool IncludeTheoModel() const {
            return !(m_theo_model.empty());
        }
        bool IncludeTheoModel2() const {
            return !(m_theo_model2.empty());
        }
        bool IncludeBinaryDays() const {
            return !(m_binary_days == 0.0);
        }
        bool IncludeCtrlUpdate() const {
            return (m_ctrl_update.time_since_epoch().count() != 0);
        }
        bool IncludePeriodEndTime() const {
            return (m_period_end_time.time_since_epoch().count() != 0);
        }
        bool IncludeName() const {
            return !(m_name.empty());
        }
        bool IncludeIndustry() const {
            return !(m_industry == 0);
        }
        bool IncludeSector() const {
            return !(m_sector.empty());
        }
        bool IncludeBeta() const {
            return !(m_beta == 0.0);
        }
        bool IncludeStkVolume() const {
            return !(m_stk_volume == 0.0);
        }
        bool IncludeOptVolume() const {
            return !(m_opt_volume == 0.0);
        }
        bool IncludeDAmt() const {
            return !(m_d_amt == 0.0);
        }
        bool IncludeDDays() const {
            return !(m_d_days == 0);
        }
        bool IncludeEDays() const {
            return !(m_e_days == 0);
        }
        bool IncludeLocateQuan() const {
            return !(m_locate_quan == 0);
        }
        bool IncludeAvailableLocateQuan() const {
            return !(m_available_locate_quan == 0);
        }
        bool IncludeGcRate() const {
            return !(m_gc_rate == 0.0);
        }
        bool IncludeBorrowRate() const {
            return !(m_borrow_rate == 0.0);
        }
        bool IncludeStMinIvol() const {
            return !(m_st_min_ivol == 0.0);
        }
        bool IncludeStMaxIvol() const {
            return !(m_st_max_ivol == 0.0);
        }
        bool IncludeEarnMult() const {
            return !(m_earn_mult == 0.0);
        }
        bool IncludeEarnMultErr() const {
            return !(m_earn_mult_err == 0.0);
        }
        bool IncludeBaseVol() const {
            return !(m_base_vol == 0.0);
        }
        bool IncludeTailVol() const {
            return !(m_tail_vol == 0.0);
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
            if ( IncludeClientTags()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_client_tags);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkStatus>(m_stk_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptStatus>(m_opt_status)));
            if ( IncludeRiskClass()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(112,m_risk_class);
            }
            if ( IncludeTheoModel()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(115,m_theo_model);
            }
            if ( IncludeTheoModel2()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(118,m_theo_model2);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeDeltaRule>(m_hedge_delta_rule)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HoldReason>(m_hold_reason)));
            if ( IncludeBinaryDays()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_binary_days);
            }
            if ( IncludeCtrlUpdate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(130, m_ctrl_update);
            }
            if ( IncludePeriodEndTime()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(133, m_period_end_time);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>(m_symbol_type)));
            if ( IncludeName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(139,m_name);
            }
            if ( IncludeIndustry()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(142,m_industry);
            }
            if ( IncludeSector()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(145,m_sector);
            }
            if ( IncludeBeta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(148,m_beta);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BetaSource>(m_beta_source)));
            if ( IncludeStkVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(154,m_stk_volume);
            }
            if ( IncludeOptVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_opt_volume);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(160,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TapeCode>(m_tape_code)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(163,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarginType>(m_margin_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(166,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            if ( IncludeDAmt()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(169,m_d_amt);
            }
            if ( IncludeDDays()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(172,m_d_days);
            }
            if ( IncludeEDays()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(175,m_e_days);
            }
            if ( IncludeLocateQuan()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(178,m_locate_quan);
            }
            if ( IncludeAvailableLocateQuan()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(181,m_available_locate_quan);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_gc_flag)));
            if ( IncludeGcRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(187,m_gc_rate);
            }
            if ( IncludeBorrowRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(190,m_borrow_rate);
            }
            if ( IncludeStMinIvol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(193,m_st_min_ivol);
            }
            if ( IncludeStMaxIvol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(196,m_st_max_ivol);
            }
            if ( IncludeEarnMult()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(199,m_earn_mult);
            }
            if ( IncludeEarnMultErr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(202,m_earn_mult_err);
            }
            if ( IncludeBaseVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(205,m_base_vol);
            }
            if ( IncludeTailVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(208,m_tail_vol);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(211, m_timestamp);
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
            if ( IncludeClientTags()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_client_tags));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkStatus>(m_stk_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptStatus>(m_opt_status)));
            if ( IncludeRiskClass()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,112,static_cast<string>(m_risk_class));
            }
            if ( IncludeTheoModel()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,115,static_cast<string>(m_theo_model));
            }
            if ( IncludeTheoModel2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,118,static_cast<string>(m_theo_model2));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeDeltaRule>(m_hedge_delta_rule)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HoldReason>(m_hold_reason)));
            if ( IncludeBinaryDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_binary_days);
            }
            if ( IncludeCtrlUpdate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 130, m_ctrl_update);
            }
            if ( IncludePeriodEndTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 133, m_period_end_time);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>(m_symbol_type)));
            if ( IncludeName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,139,static_cast<string>(m_name));
            }
            if ( IncludeIndustry()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,142,m_industry);
            }
            if ( IncludeSector()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,145,static_cast<string>(m_sector));
            }
            if ( IncludeBeta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,148,m_beta);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BetaSource>(m_beta_source)));
            if ( IncludeStkVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,154,m_stk_volume);
            }
            if ( IncludeOptVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_opt_volume);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,160,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TapeCode>(m_tape_code)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,163,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarginType>(m_margin_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,166,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            if ( IncludeDAmt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,169,m_d_amt);
            }
            if ( IncludeDDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,172,m_d_days);
            }
            if ( IncludeEDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,175,m_e_days);
            }
            if ( IncludeLocateQuan()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,178,m_locate_quan);
            }
            if ( IncludeAvailableLocateQuan()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,181,m_available_locate_quan);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_gc_flag)));
            if ( IncludeGcRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,187,m_gc_rate);
            }
            if ( IncludeBorrowRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,190,m_borrow_rate);
            }
            if ( IncludeStMinIvol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,193,m_st_min_ivol);
            }
            if ( IncludeStMaxIvol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,196,m_st_max_ivol);
            }
            if ( IncludeEarnMult()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,199,m_earn_mult);
            }
            if ( IncludeEarnMultErr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,202,m_earn_mult_err);
            }
            if ( IncludeBaseVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,205,m_base_vol);
            }
            if ( IncludeTailVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,208,m_tail_vol);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 211, m_timestamp);
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
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_client_tags = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_stk_status = static_cast<spiderrock::protobuf::api::StkStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_opt_status = static_cast<spiderrock::protobuf::api::OptStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_risk_class = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_theo_model = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_theo_model2 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 121: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_delta_rule = static_cast<spiderrock::protobuf::api::HedgeDeltaRule>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 124: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hold_reason = static_cast<spiderrock::protobuf::api::HoldReason>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_binary_days = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_ctrl_update = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_period_end_time = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 136: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_symbol_type = static_cast<spiderrock::protobuf::api::SymbolType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_industry = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_sector = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 151: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_beta_source = static_cast<spiderrock::protobuf::api::BetaSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_stk_volume = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opt_volume = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 160: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_tape_code = static_cast<spiderrock::protobuf::api::TapeCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 163: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_margin_type = static_cast<spiderrock::protobuf::api::MarginType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 166: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_point_currency = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_d_amt = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_d_days = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_e_days = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_locate_quan = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_available_locate_quan = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 184: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_gc_flag = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_gc_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_borrow_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_st_min_ivol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_st_max_ivol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_earn_mult = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_earn_mult_err = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_base_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_tail_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 211: {
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

    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::_meta>() const { return SymbolRiskDetailV5::_meta{ m__meta}; }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::pkey>() const { return SymbolRiskDetailV5::pkey{ m_pkey}; }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::client_tags>() const { return m_client_tags; }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::stk_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkStatus>( m_stk_status)); }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::opt_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptStatus>( m_opt_status)); }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::risk_class>() const { return m_risk_class; }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::theo_model>() const { return m_theo_model; }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::theo_model2>() const { return m_theo_model2; }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::hedge_delta_rule>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeDeltaRule>( m_hedge_delta_rule)); }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::hold_reason>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HoldReason>( m_hold_reason)); }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::binary_days>() const { return m_binary_days; }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::ctrl_update>() const { return m_ctrl_update; }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::period_end_time>() const { return m_period_end_time; }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::symbol_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>( m_symbol_type)); }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::name>() const { return m_name; }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::industry>() const { return m_industry; }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::sector>() const { return m_sector; }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::beta>() const { return m_beta; }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::beta_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BetaSource>( m_beta_source)); }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::stk_volume>() const { return m_stk_volume; }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::opt_volume>() const { return m_opt_volume; }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::tape_code>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TapeCode>( m_tape_code)); }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::margin_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarginType>( m_margin_type)); }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::point_currency>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>( m_point_currency)); }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::d_amt>() const { return m_d_amt; }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::d_days>() const { return m_d_days; }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::e_days>() const { return m_e_days; }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::locate_quan>() const { return m_locate_quan; }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::available_locate_quan>() const { return m_available_locate_quan; }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::gc_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_gc_flag)); }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::gc_rate>() const { return m_gc_rate; }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::borrow_rate>() const { return m_borrow_rate; }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::st_min_ivol>() const { return m_st_min_ivol; }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::st_max_ivol>() const { return m_st_max_ivol; }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::earn_mult>() const { return m_earn_mult; }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::earn_mult_err>() const { return m_earn_mult_err; }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::base_vol>() const { return m_base_vol; }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::tail_vol>() const { return m_tail_vol; }
    template<> inline const auto SymbolRiskDetailV5::get<SymbolRiskDetailV5::timestamp>() const { return m_timestamp; }
    template<> inline const auto SymbolRiskDetailV5_PKey::get<SymbolRiskDetailV5_PKey::ticker>() const { return SymbolRiskDetailV5_PKey::ticker{m_ticker}; }
    template<> inline const auto SymbolRiskDetailV5_PKey::get<SymbolRiskDetailV5_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto SymbolRiskDetailV5_PKey::get<SymbolRiskDetailV5_PKey::trade_date>() const { return SymbolRiskDetailV5_PKey::trade_date{m_trade_date}; }
    template<> inline const auto SymbolRiskDetailV5_PKey::get<SymbolRiskDetailV5_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SymbolRiskDetailV5_PKey& m) {
        o << "\"ticker\":{" << m.get<SymbolRiskDetailV5_PKey::ticker>() << "}";
        o << ",\"accnt\":\"" << m.get<SymbolRiskDetailV5_PKey::accnt>() << "\"";
        o << ",\"trade_date\":{" << m.get<SymbolRiskDetailV5_PKey::trade_date>() << "}";
        o << ",\"client_firm\":\"" << m.get<SymbolRiskDetailV5_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SymbolRiskDetailV5& m) {
        o << "\"_meta\":{" << m.get<SymbolRiskDetailV5::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SymbolRiskDetailV5::pkey>() << "}";
        o << ",\"client_tags\":\"" << m.get<SymbolRiskDetailV5::client_tags>() << "\"";
        o << ",\"stk_status\":" << (int64_t)m.get<SymbolRiskDetailV5::stk_status>();
        o << ",\"opt_status\":" << (int64_t)m.get<SymbolRiskDetailV5::opt_status>();
        o << ",\"risk_class\":\"" << m.get<SymbolRiskDetailV5::risk_class>() << "\"";
        o << ",\"theo_model\":\"" << m.get<SymbolRiskDetailV5::theo_model>() << "\"";
        o << ",\"theo_model2\":\"" << m.get<SymbolRiskDetailV5::theo_model2>() << "\"";
        o << ",\"hedge_delta_rule\":" << (int64_t)m.get<SymbolRiskDetailV5::hedge_delta_rule>();
        o << ",\"hold_reason\":" << (int64_t)m.get<SymbolRiskDetailV5::hold_reason>();
        o << ",\"binary_days\":" << m.get<SymbolRiskDetailV5::binary_days>();
        {
            std::time_t tt = m.get<SymbolRiskDetailV5::ctrl_update>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"ctrl_update\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<SymbolRiskDetailV5::period_end_time>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"period_end_time\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"symbol_type\":" << (int64_t)m.get<SymbolRiskDetailV5::symbol_type>();
        o << ",\"name\":\"" << m.get<SymbolRiskDetailV5::name>() << "\"";
        o << ",\"industry\":" << m.get<SymbolRiskDetailV5::industry>();
        o << ",\"sector\":\"" << m.get<SymbolRiskDetailV5::sector>() << "\"";
        o << ",\"beta\":" << m.get<SymbolRiskDetailV5::beta>();
        o << ",\"beta_source\":" << (int64_t)m.get<SymbolRiskDetailV5::beta_source>();
        o << ",\"stk_volume\":" << m.get<SymbolRiskDetailV5::stk_volume>();
        o << ",\"opt_volume\":" << m.get<SymbolRiskDetailV5::opt_volume>();
        o << ",\"tape_code\":" << (int64_t)m.get<SymbolRiskDetailV5::tape_code>();
        o << ",\"margin_type\":" << (int64_t)m.get<SymbolRiskDetailV5::margin_type>();
        o << ",\"point_currency\":" << (int64_t)m.get<SymbolRiskDetailV5::point_currency>();
        o << ",\"d_amt\":" << m.get<SymbolRiskDetailV5::d_amt>();
        o << ",\"d_days\":" << m.get<SymbolRiskDetailV5::d_days>();
        o << ",\"e_days\":" << m.get<SymbolRiskDetailV5::e_days>();
        o << ",\"locate_quan\":" << m.get<SymbolRiskDetailV5::locate_quan>();
        o << ",\"available_locate_quan\":" << m.get<SymbolRiskDetailV5::available_locate_quan>();
        o << ",\"gc_flag\":" << (int64_t)m.get<SymbolRiskDetailV5::gc_flag>();
        o << ",\"gc_rate\":" << m.get<SymbolRiskDetailV5::gc_rate>();
        o << ",\"borrow_rate\":" << m.get<SymbolRiskDetailV5::borrow_rate>();
        o << ",\"st_min_ivol\":" << m.get<SymbolRiskDetailV5::st_min_ivol>();
        o << ",\"st_max_ivol\":" << m.get<SymbolRiskDetailV5::st_max_ivol>();
        o << ",\"earn_mult\":" << m.get<SymbolRiskDetailV5::earn_mult>();
        o << ",\"earn_mult_err\":" << m.get<SymbolRiskDetailV5::earn_mult_err>();
        o << ",\"base_vol\":" << m.get<SymbolRiskDetailV5::base_vol>();
        o << ",\"tail_vol\":" << m.get<SymbolRiskDetailV5::tail_vol>();
        {
            std::time_t tt = m.get<SymbolRiskDetailV5::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}