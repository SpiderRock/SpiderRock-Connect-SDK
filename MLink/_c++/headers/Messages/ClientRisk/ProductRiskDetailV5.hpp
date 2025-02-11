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

    #ifndef _period_end_time__GUARD__
    #define _period_end_time__GUARD__
    DECL_STRONG_TYPE(period_end_time, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_period_end_time__GUARD__

    #ifndef _view_group1__GUARD__
    #define _view_group1__GUARD__
    DECL_STRONG_TYPE(view_group1, string);
    #endif//_view_group1__GUARD__

    #ifndef _view_group2__GUARD__
    #define _view_group2__GUARD__
    DECL_STRONG_TYPE(view_group2, string);
    #endif//_view_group2__GUARD__

    #ifndef _view_group3__GUARD__
    #define _view_group3__GUARD__
    DECL_STRONG_TYPE(view_group3, string);
    #endif//_view_group3__GUARD__

    #ifndef _fut_status__GUARD__
    #define _fut_status__GUARD__
    DECL_STRONG_TYPE(fut_status, spiderrock::protobuf::api::FutStatus);
    #endif//_fut_status__GUARD__

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

    #ifndef _symbol_type__GUARD__
    #define _symbol_type__GUARD__
    DECL_STRONG_TYPE(symbol_type, spiderrock::protobuf::api::SymbolType);
    #endif//_symbol_type__GUARD__

    #ifndef _name__GUARD__
    #define _name__GUARD__
    DECL_STRONG_TYPE(name, string);
    #endif//_name__GUARD__

    #ifndef _beta__GUARD__
    #define _beta__GUARD__
    DECL_STRONG_TYPE(beta, float);
    #endif//_beta__GUARD__

    #ifndef _beta_source__GUARD__
    #define _beta_source__GUARD__
    DECL_STRONG_TYPE(beta_source, spiderrock::protobuf::api::BetaSource);
    #endif//_beta_source__GUARD__

    #ifndef _fut_volume__GUARD__
    #define _fut_volume__GUARD__
    DECL_STRONG_TYPE(fut_volume, float);
    #endif//_fut_volume__GUARD__

    #ifndef _opt_volume__GUARD__
    #define _opt_volume__GUARD__
    DECL_STRONG_TYPE(opt_volume, float);
    #endif//_opt_volume__GUARD__

    #ifndef _margin_type__GUARD__
    #define _margin_type__GUARD__
    DECL_STRONG_TYPE(margin_type, spiderrock::protobuf::api::MarginType);
    #endif//_margin_type__GUARD__

    #ifndef _is_yield_based__GUARD__
    #define _is_yield_based__GUARD__
    DECL_STRONG_TYPE(is_yield_based, spiderrock::protobuf::api::YesNo);
    #endif//_is_yield_based__GUARD__

    #ifndef _short_term_vol__GUARD__
    #define _short_term_vol__GUARD__
    DECL_STRONG_TYPE(short_term_vol, float);
    #endif//_short_term_vol__GUARD__

    #ifndef _point_value__float__GUARD__
    #define _point_value__float__GUARD__
    DECL_STRONG_TYPE(point_value__float, float);
    #endif//_point_value__float__GUARD__

    #ifndef _point_currency__GUARD__
    #define _point_currency__GUARD__
    DECL_STRONG_TYPE(point_currency, spiderrock::protobuf::api::Currency);
    #endif//_point_currency__GUARD__

    #ifndef _underliers_per_cn__GUARD__
    #define _underliers_per_cn__GUARD__
    DECL_STRONG_TYPE(underliers_per_cn, int32);
    #endif//_underliers_per_cn__GUARD__

    #ifndef _underlier_type__UnderlierType__GUARD__
    #define _underlier_type__UnderlierType__GUARD__
    DECL_STRONG_TYPE(underlier_type__UnderlierType, spiderrock::protobuf::api::UnderlierType);
    #endif//_underlier_type__UnderlierType__GUARD__

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

    
    class ProductRiskDetailV5_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ProductRiskDetailV5_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to ProductRiskDetailV5_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const accnt & value) { set_accnt(value); }
        void set(const trade_date & value) { set_trade_date(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        ProductRiskDetailV5_PKey() {}

        virtual ~ProductRiskDetailV5_PKey() {
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
    

    class ProductRiskDetailV5 {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::ProductRiskDetailV5_PKey;
        using period_end_time = spiderrock::protobuf::api::period_end_time;
        using view_group1 = spiderrock::protobuf::api::view_group1;
        using view_group2 = spiderrock::protobuf::api::view_group2;
        using view_group3 = spiderrock::protobuf::api::view_group3;
        using fut_status = spiderrock::protobuf::api::fut_status;
        using opt_status = spiderrock::protobuf::api::opt_status;
        using risk_class = spiderrock::protobuf::api::risk_class;
        using theo_model = spiderrock::protobuf::api::theo_model;
        using theo_model2 = spiderrock::protobuf::api::theo_model2;
        using hedge_delta_rule = spiderrock::protobuf::api::hedge_delta_rule;
        using hold_reason = spiderrock::protobuf::api::hold_reason;
        using binary_days = spiderrock::protobuf::api::binary_days;
        using ctrl_update = spiderrock::protobuf::api::ctrl_update;
        using symbol_type = spiderrock::protobuf::api::symbol_type;
        using name = spiderrock::protobuf::api::name;
        using beta = spiderrock::protobuf::api::beta;
        using beta_source = spiderrock::protobuf::api::beta_source;
        using fut_volume = spiderrock::protobuf::api::fut_volume;
        using opt_volume = spiderrock::protobuf::api::opt_volume;
        using margin_type = spiderrock::protobuf::api::margin_type;
        using is_yield_based = spiderrock::protobuf::api::is_yield_based;
        using short_term_vol = spiderrock::protobuf::api::short_term_vol;
        using point_value = spiderrock::protobuf::api::point_value__float;
        using point_currency = spiderrock::protobuf::api::point_currency;
        using underliers_per_cn = spiderrock::protobuf::api::underliers_per_cn;
        using underlier_type = spiderrock::protobuf::api::underlier_type__UnderlierType;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        period_end_time m_period_end_time{};
        view_group1 m_view_group1{};
        view_group2 m_view_group2{};
        view_group3 m_view_group3{};
        fut_status m_fut_status{};
        opt_status m_opt_status{};
        risk_class m_risk_class{};
        theo_model m_theo_model{};
        theo_model2 m_theo_model2{};
        hedge_delta_rule m_hedge_delta_rule{};
        hold_reason m_hold_reason{};
        binary_days m_binary_days{};
        ctrl_update m_ctrl_update{};
        symbol_type m_symbol_type{};
        name m_name{};
        beta m_beta{};
        beta_source m_beta_source{};
        fut_volume m_fut_volume{};
        opt_volume m_opt_volume{};
        margin_type m_margin_type{};
        is_yield_based m_is_yield_based{};
        short_term_vol m_short_term_vol{};
        point_value m_point_value{};
        point_currency m_point_currency{};
        underliers_per_cn m_underliers_per_cn{};
        underlier_type m_underlier_type{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        period_end_time get_period_end_time() const {
            return m_period_end_time;
        }		
        view_group1 get_view_group1() const {
            return m_view_group1;
        }		
        view_group2 get_view_group2() const {
            return m_view_group2;
        }		
        view_group3 get_view_group3() const {
            return m_view_group3;
        }		
        fut_status get_fut_status() const {
            return m_fut_status;
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
        symbol_type get_symbol_type() const {
            return m_symbol_type;
        }		
        name get_name() const {
            return m_name;
        }		
        beta get_beta() const {
            return m_beta;
        }		
        beta_source get_beta_source() const {
            return m_beta_source;
        }		
        fut_volume get_fut_volume() const {
            return m_fut_volume;
        }		
        opt_volume get_opt_volume() const {
            return m_opt_volume;
        }		
        margin_type get_margin_type() const {
            return m_margin_type;
        }		
        is_yield_based get_is_yield_based() const {
            return m_is_yield_based;
        }		
        short_term_vol get_short_term_vol() const {
            return m_short_term_vol;
        }		
        point_value get_point_value() const {
            return m_point_value;
        }		
        point_currency get_point_currency() const {
            return m_point_currency;
        }		
        underliers_per_cn get_underliers_per_cn() const {
            return m_underliers_per_cn;
        }		
        underlier_type get_underlier_type() const {
            return m_underlier_type;
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
        void set_period_end_time(const period_end_time& value)  {
            m_period_end_time = value;
        }
        void set_view_group1(const view_group1& value)  {
            m_view_group1 = value;
        }
        void set_view_group2(const view_group2& value)  {
            m_view_group2 = value;
        }
        void set_view_group3(const view_group3& value)  {
            m_view_group3 = value;
        }
        void set_fut_status(const fut_status& value)  {
            m_fut_status = value;
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
        void set_symbol_type(const symbol_type& value)  {
            m_symbol_type = value;
        }
        void set_name(const name& value)  {
            m_name = value;
        }
        void set_beta(const beta& value)  {
            m_beta = value;
        }
        void set_beta_source(const beta_source& value)  {
            m_beta_source = value;
        }
        void set_fut_volume(const fut_volume& value)  {
            m_fut_volume = value;
        }
        void set_opt_volume(const opt_volume& value)  {
            m_opt_volume = value;
        }
        void set_margin_type(const margin_type& value)  {
            m_margin_type = value;
        }
        void set_is_yield_based(const is_yield_based& value)  {
            m_is_yield_based = value;
        }
        void set_short_term_vol(const short_term_vol& value)  {
            m_short_term_vol = value;
        }
        void set_point_value(const point_value& value)  {
            m_point_value = value;
        }
        void set_point_currency(const point_currency& value)  {
            m_point_currency = value;
        }
        void set_underliers_per_cn(const underliers_per_cn& value)  {
            m_underliers_per_cn = value;
        }
        void set_underlier_type(const underlier_type& value)  {
            m_underlier_type = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ProductRiskDetailV5::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const period_end_time & value) {
            set_period_end_time(value);
        }
        void set(const view_group1 & value) {
            set_view_group1(value);
        }
        void set(const view_group2 & value) {
            set_view_group2(value);
        }
        void set(const view_group3 & value) {
            set_view_group3(value);
        }
        void set(const fut_status & value) {
            set_fut_status(value);
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
        void set(const symbol_type & value) {
            set_symbol_type(value);
        }
        void set(const name & value) {
            set_name(value);
        }
        void set(const beta & value) {
            set_beta(value);
        }
        void set(const beta_source & value) {
            set_beta_source(value);
        }
        void set(const fut_volume & value) {
            set_fut_volume(value);
        }
        void set(const opt_volume & value) {
            set_opt_volume(value);
        }
        void set(const margin_type & value) {
            set_margin_type(value);
        }
        void set(const is_yield_based & value) {
            set_is_yield_based(value);
        }
        void set(const short_term_vol & value) {
            set_short_term_vol(value);
        }
        void set(const point_value & value) {
            set_point_value(value);
        }
        void set(const point_currency & value) {
            set_point_currency(value);
        }
        void set(const underliers_per_cn & value) {
            set_underliers_per_cn(value);
        }
        void set(const underlier_type & value) {
            set_underlier_type(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const ProductRiskDetailV5 & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_period_end_time);
            set(value.m_view_group1);
            set(value.m_view_group2);
            set(value.m_view_group3);
            set(value.m_fut_status);
            set(value.m_opt_status);
            set(value.m_risk_class);
            set(value.m_theo_model);
            set(value.m_theo_model2);
            set(value.m_hedge_delta_rule);
            set(value.m_hold_reason);
            set(value.m_binary_days);
            set(value.m_ctrl_update);
            set(value.m_symbol_type);
            set(value.m_name);
            set(value.m_beta);
            set(value.m_beta_source);
            set(value.m_fut_volume);
            set(value.m_opt_volume);
            set(value.m_margin_type);
            set(value.m_is_yield_based);
            set(value.m_short_term_vol);
            set(value.m_point_value);
            set(value.m_point_currency);
            set(value.m_underliers_per_cn);
            set(value.m_underlier_type);
            set(value.m_timestamp);
        }

        ProductRiskDetailV5() {
            m__meta.set_message_type("ProductRiskDetailV5");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4810, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4810, length);
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
             *this = ProductRiskDetailV5{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludePeriodEndTime() const {
            return (m_period_end_time.time_since_epoch().count() != 0);
        }
        bool IncludeViewGroup1() const {
            return !(m_view_group1.empty());
        }
        bool IncludeViewGroup2() const {
            return !(m_view_group2.empty());
        }
        bool IncludeViewGroup3() const {
            return !(m_view_group3.empty());
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
        bool IncludeName() const {
            return !(m_name.empty());
        }
        bool IncludeBeta() const {
            return !(m_beta == 0.0);
        }
        bool IncludeFutVolume() const {
            return !(m_fut_volume == 0.0);
        }
        bool IncludeOptVolume() const {
            return !(m_opt_volume == 0.0);
        }
        bool IncludeShortTermVol() const {
            return !(m_short_term_vol == 0.0);
        }
        bool IncludePointValue() const {
            return !(m_point_value == 0.0);
        }
        bool IncludeUnderliersPerCn() const {
            return !(m_underliers_per_cn == 0);
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
            if ( IncludePeriodEndTime()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(100, m_period_end_time);
            }
            if ( IncludeViewGroup1()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_view_group1);
            }
            if ( IncludeViewGroup2()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(109,m_view_group2);
            }
            if ( IncludeViewGroup3()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(112,m_view_group3);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FutStatus>(m_fut_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptStatus>(m_opt_status)));
            if ( IncludeRiskClass()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(121,m_risk_class);
            }
            if ( IncludeTheoModel()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(124,m_theo_model);
            }
            if ( IncludeTheoModel2()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(127,m_theo_model2);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeDeltaRule>(m_hedge_delta_rule)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HoldReason>(m_hold_reason)));
            if ( IncludeBinaryDays()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_binary_days);
            }
            if ( IncludeCtrlUpdate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(139, m_ctrl_update);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>(m_symbol_type)));
            if ( IncludeName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(145,m_name);
            }
            if ( IncludeBeta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(148,m_beta);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BetaSource>(m_beta_source)));
            if ( IncludeFutVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(154,m_fut_volume);
            }
            if ( IncludeOptVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_opt_volume);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(160,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarginType>(m_margin_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(163,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_yield_based)));
            if ( IncludeShortTermVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_short_term_vol);
            }
            if ( IncludePointValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(169,m_point_value);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(172,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            if ( IncludeUnderliersPerCn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(175,m_underliers_per_cn);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(178,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>(m_underlier_type)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(181, m_timestamp);
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
            if ( IncludePeriodEndTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 100, m_period_end_time);
            }
            if ( IncludeViewGroup1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_view_group1));
            }
            if ( IncludeViewGroup2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,109,static_cast<string>(m_view_group2));
            }
            if ( IncludeViewGroup3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,112,static_cast<string>(m_view_group3));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FutStatus>(m_fut_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptStatus>(m_opt_status)));
            if ( IncludeRiskClass()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,121,static_cast<string>(m_risk_class));
            }
            if ( IncludeTheoModel()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,124,static_cast<string>(m_theo_model));
            }
            if ( IncludeTheoModel2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,127,static_cast<string>(m_theo_model2));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeDeltaRule>(m_hedge_delta_rule)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HoldReason>(m_hold_reason)));
            if ( IncludeBinaryDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_binary_days);
            }
            if ( IncludeCtrlUpdate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 139, m_ctrl_update);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>(m_symbol_type)));
            if ( IncludeName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,145,static_cast<string>(m_name));
            }
            if ( IncludeBeta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,148,m_beta);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BetaSource>(m_beta_source)));
            if ( IncludeFutVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,154,m_fut_volume);
            }
            if ( IncludeOptVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_opt_volume);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,160,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarginType>(m_margin_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,163,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_yield_based)));
            if ( IncludeShortTermVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_short_term_vol);
            }
            if ( IncludePointValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,169,m_point_value);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,172,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            if ( IncludeUnderliersPerCn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,175,m_underliers_per_cn);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,178,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>(m_underlier_type)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 181, m_timestamp);
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
                            m_period_end_time = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_view_group1 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_view_group2 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_view_group3 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_fut_status = static_cast<spiderrock::protobuf::api::FutStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_opt_status = static_cast<spiderrock::protobuf::api::OptStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_risk_class = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_theo_model = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_theo_model2 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 130: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_delta_rule = static_cast<spiderrock::protobuf::api::HedgeDeltaRule>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 133: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hold_reason = static_cast<spiderrock::protobuf::api::HoldReason>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_binary_days = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_ctrl_update = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 142: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_symbol_type = static_cast<spiderrock::protobuf::api::SymbolType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
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
                            m_fut_volume = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
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
                            m_margin_type = static_cast<spiderrock::protobuf::api::MarginType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 163: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_yield_based = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_short_term_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_point_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 172: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_point_currency = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_underliers_per_cn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 178: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_underlier_type = static_cast<spiderrock::protobuf::api::UnderlierType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 181: {
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

    template<> inline const auto ProductRiskDetailV5::get<ProductRiskDetailV5::_meta>() const { return ProductRiskDetailV5::_meta{ m__meta}; }
    template<> inline const auto ProductRiskDetailV5::get<ProductRiskDetailV5::pkey>() const { return ProductRiskDetailV5::pkey{ m_pkey}; }
    template<> inline const auto ProductRiskDetailV5::get<ProductRiskDetailV5::period_end_time>() const { return m_period_end_time; }
    template<> inline const auto ProductRiskDetailV5::get<ProductRiskDetailV5::view_group1>() const { return m_view_group1; }
    template<> inline const auto ProductRiskDetailV5::get<ProductRiskDetailV5::view_group2>() const { return m_view_group2; }
    template<> inline const auto ProductRiskDetailV5::get<ProductRiskDetailV5::view_group3>() const { return m_view_group3; }
    template<> inline const auto ProductRiskDetailV5::get<ProductRiskDetailV5::fut_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FutStatus>( m_fut_status)); }
    template<> inline const auto ProductRiskDetailV5::get<ProductRiskDetailV5::opt_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptStatus>( m_opt_status)); }
    template<> inline const auto ProductRiskDetailV5::get<ProductRiskDetailV5::risk_class>() const { return m_risk_class; }
    template<> inline const auto ProductRiskDetailV5::get<ProductRiskDetailV5::theo_model>() const { return m_theo_model; }
    template<> inline const auto ProductRiskDetailV5::get<ProductRiskDetailV5::theo_model2>() const { return m_theo_model2; }
    template<> inline const auto ProductRiskDetailV5::get<ProductRiskDetailV5::hedge_delta_rule>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeDeltaRule>( m_hedge_delta_rule)); }
    template<> inline const auto ProductRiskDetailV5::get<ProductRiskDetailV5::hold_reason>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HoldReason>( m_hold_reason)); }
    template<> inline const auto ProductRiskDetailV5::get<ProductRiskDetailV5::binary_days>() const { return m_binary_days; }
    template<> inline const auto ProductRiskDetailV5::get<ProductRiskDetailV5::ctrl_update>() const { return m_ctrl_update; }
    template<> inline const auto ProductRiskDetailV5::get<ProductRiskDetailV5::symbol_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>( m_symbol_type)); }
    template<> inline const auto ProductRiskDetailV5::get<ProductRiskDetailV5::name>() const { return m_name; }
    template<> inline const auto ProductRiskDetailV5::get<ProductRiskDetailV5::beta>() const { return m_beta; }
    template<> inline const auto ProductRiskDetailV5::get<ProductRiskDetailV5::beta_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BetaSource>( m_beta_source)); }
    template<> inline const auto ProductRiskDetailV5::get<ProductRiskDetailV5::fut_volume>() const { return m_fut_volume; }
    template<> inline const auto ProductRiskDetailV5::get<ProductRiskDetailV5::opt_volume>() const { return m_opt_volume; }
    template<> inline const auto ProductRiskDetailV5::get<ProductRiskDetailV5::margin_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarginType>( m_margin_type)); }
    template<> inline const auto ProductRiskDetailV5::get<ProductRiskDetailV5::is_yield_based>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_yield_based)); }
    template<> inline const auto ProductRiskDetailV5::get<ProductRiskDetailV5::short_term_vol>() const { return m_short_term_vol; }
    template<> inline const auto ProductRiskDetailV5::get<ProductRiskDetailV5::point_value>() const { return m_point_value; }
    template<> inline const auto ProductRiskDetailV5::get<ProductRiskDetailV5::point_currency>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>( m_point_currency)); }
    template<> inline const auto ProductRiskDetailV5::get<ProductRiskDetailV5::underliers_per_cn>() const { return m_underliers_per_cn; }
    template<> inline const auto ProductRiskDetailV5::get<ProductRiskDetailV5::underlier_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>( m_underlier_type)); }
    template<> inline const auto ProductRiskDetailV5::get<ProductRiskDetailV5::timestamp>() const { return m_timestamp; }
    template<> inline const auto ProductRiskDetailV5_PKey::get<ProductRiskDetailV5_PKey::ticker>() const { return ProductRiskDetailV5_PKey::ticker{m_ticker}; }
    template<> inline const auto ProductRiskDetailV5_PKey::get<ProductRiskDetailV5_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto ProductRiskDetailV5_PKey::get<ProductRiskDetailV5_PKey::trade_date>() const { return ProductRiskDetailV5_PKey::trade_date{m_trade_date}; }
    template<> inline const auto ProductRiskDetailV5_PKey::get<ProductRiskDetailV5_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const ProductRiskDetailV5_PKey& m) {
        o << "\"ticker\":{" << m.get<ProductRiskDetailV5_PKey::ticker>() << "}";
        o << ",\"accnt\":\"" << m.get<ProductRiskDetailV5_PKey::accnt>() << "\"";
        o << ",\"trade_date\":{" << m.get<ProductRiskDetailV5_PKey::trade_date>() << "}";
        o << ",\"client_firm\":\"" << m.get<ProductRiskDetailV5_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const ProductRiskDetailV5& m) {
        o << "\"_meta\":{" << m.get<ProductRiskDetailV5::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<ProductRiskDetailV5::pkey>() << "}";
        {
            std::time_t tt = m.get<ProductRiskDetailV5::period_end_time>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"period_end_time\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"view_group1\":\"" << m.get<ProductRiskDetailV5::view_group1>() << "\"";
        o << ",\"view_group2\":\"" << m.get<ProductRiskDetailV5::view_group2>() << "\"";
        o << ",\"view_group3\":\"" << m.get<ProductRiskDetailV5::view_group3>() << "\"";
        o << ",\"fut_status\":" << (int64_t)m.get<ProductRiskDetailV5::fut_status>();
        o << ",\"opt_status\":" << (int64_t)m.get<ProductRiskDetailV5::opt_status>();
        o << ",\"risk_class\":\"" << m.get<ProductRiskDetailV5::risk_class>() << "\"";
        o << ",\"theo_model\":\"" << m.get<ProductRiskDetailV5::theo_model>() << "\"";
        o << ",\"theo_model2\":\"" << m.get<ProductRiskDetailV5::theo_model2>() << "\"";
        o << ",\"hedge_delta_rule\":" << (int64_t)m.get<ProductRiskDetailV5::hedge_delta_rule>();
        o << ",\"hold_reason\":" << (int64_t)m.get<ProductRiskDetailV5::hold_reason>();
        o << ",\"binary_days\":" << m.get<ProductRiskDetailV5::binary_days>();
        {
            std::time_t tt = m.get<ProductRiskDetailV5::ctrl_update>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"ctrl_update\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"symbol_type\":" << (int64_t)m.get<ProductRiskDetailV5::symbol_type>();
        o << ",\"name\":\"" << m.get<ProductRiskDetailV5::name>() << "\"";
        o << ",\"beta\":" << m.get<ProductRiskDetailV5::beta>();
        o << ",\"beta_source\":" << (int64_t)m.get<ProductRiskDetailV5::beta_source>();
        o << ",\"fut_volume\":" << m.get<ProductRiskDetailV5::fut_volume>();
        o << ",\"opt_volume\":" << m.get<ProductRiskDetailV5::opt_volume>();
        o << ",\"margin_type\":" << (int64_t)m.get<ProductRiskDetailV5::margin_type>();
        o << ",\"is_yield_based\":" << (int64_t)m.get<ProductRiskDetailV5::is_yield_based>();
        o << ",\"short_term_vol\":" << m.get<ProductRiskDetailV5::short_term_vol>();
        o << ",\"point_value\":" << m.get<ProductRiskDetailV5::point_value>();
        o << ",\"point_currency\":" << (int64_t)m.get<ProductRiskDetailV5::point_currency>();
        o << ",\"underliers_per_cn\":" << m.get<ProductRiskDetailV5::underliers_per_cn>();
        o << ",\"underlier_type\":" << (int64_t)m.get<ProductRiskDetailV5::underlier_type>();
        {
            std::time_t tt = m.get<ProductRiskDetailV5::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}