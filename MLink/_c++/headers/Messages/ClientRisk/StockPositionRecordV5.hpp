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

    #ifndef _risk_server_code__GUARD__
    #define _risk_server_code__GUARD__
    DECL_STRONG_TYPE(risk_server_code, string);
    #endif//_risk_server_code__GUARD__

    #ifndef _pri_agg_group__GUARD__
    #define _pri_agg_group__GUARD__
    DECL_STRONG_TYPE(pri_agg_group, string);
    #endif//_pri_agg_group__GUARD__

    #ifndef _sec_agg_group__GUARD__
    #define _sec_agg_group__GUARD__
    DECL_STRONG_TYPE(sec_agg_group, string);
    #endif//_sec_agg_group__GUARD__

    #ifndef _symbol_type__GUARD__
    #define _symbol_type__GUARD__
    DECL_STRONG_TYPE(symbol_type, spiderrock::protobuf::api::SymbolType);
    #endif//_symbol_type__GUARD__

    #ifndef _tick_value__GUARD__
    #define _tick_value__GUARD__
    DECL_STRONG_TYPE(tick_value, float);
    #endif//_tick_value__GUARD__

    #ifndef _point_value__float__GUARD__
    #define _point_value__float__GUARD__
    DECL_STRONG_TYPE(point_value__float, float);
    #endif//_point_value__float__GUARD__

    #ifndef _point_currency__GUARD__
    #define _point_currency__GUARD__
    DECL_STRONG_TYPE(point_currency, spiderrock::protobuf::api::Currency);
    #endif//_point_currency__GUARD__

    #ifndef _price_format__GUARD__
    #define _price_format__GUARD__
    DECL_STRONG_TYPE(price_format, spiderrock::protobuf::api::PriceFormat);
    #endif//_price_format__GUARD__

    #ifndef _stk_prc__GUARD__
    #define _stk_prc__GUARD__
    DECL_STRONG_TYPE(stk_prc, float);
    #endif//_stk_prc__GUARD__

    #ifndef _stk_bid__GUARD__
    #define _stk_bid__GUARD__
    DECL_STRONG_TYPE(stk_bid, float);
    #endif//_stk_bid__GUARD__

    #ifndef _stk_ask__GUARD__
    #define _stk_ask__GUARD__
    DECL_STRONG_TYPE(stk_ask, float);
    #endif//_stk_ask__GUARD__

    #ifndef _stk_mark__GUARD__
    #define _stk_mark__GUARD__
    DECL_STRONG_TYPE(stk_mark, double);
    #endif//_stk_mark__GUARD__

    #ifndef _stk_mark_err_codes__GUARD__
    #define _stk_mark_err_codes__GUARD__
    DECL_STRONG_TYPE(stk_mark_err_codes, spiderrock::protobuf::api::MarkErrorCode);
    #endif//_stk_mark_err_codes__GUARD__

    #ifndef _stk_mark_source__GUARD__
    #define _stk_mark_source__GUARD__
    DECL_STRONG_TYPE(stk_mark_source, spiderrock::protobuf::api::UMarkSource);
    #endif//_stk_mark_source__GUARD__

    #ifndef _stk_opn_mid_mark__GUARD__
    #define _stk_opn_mid_mark__GUARD__
    DECL_STRONG_TYPE(stk_opn_mid_mark, double);
    #endif//_stk_opn_mid_mark__GUARD__

    #ifndef _stk_opn_clr_mark__GUARD__
    #define _stk_opn_clr_mark__GUARD__
    DECL_STRONG_TYPE(stk_opn_clr_mark, double);
    #endif//_stk_opn_clr_mark__GUARD__

    #ifndef _stk_opn_pos_prv__GUARD__
    #define _stk_opn_pos_prv__GUARD__
    DECL_STRONG_TYPE(stk_opn_pos_prv, int32);
    #endif//_stk_opn_pos_prv__GUARD__

    #ifndef _stk_opn_pos_clr__GUARD__
    #define _stk_opn_pos_clr__GUARD__
    DECL_STRONG_TYPE(stk_opn_pos_clr, int32);
    #endif//_stk_opn_pos_clr__GUARD__

    #ifndef _stk_opn_pos__GUARD__
    #define _stk_opn_pos__GUARD__
    DECL_STRONG_TYPE(stk_opn_pos, int32);
    #endif//_stk_opn_pos__GUARD__

    #ifndef _stk_opn_pos_src__GUARD__
    #define _stk_opn_pos_src__GUARD__
    DECL_STRONG_TYPE(stk_opn_pos_src, spiderrock::protobuf::api::PositionSource);
    #endif//_stk_opn_pos_src__GUARD__

    #ifndef _sh_bot__GUARD__
    #define _sh_bot__GUARD__
    DECL_STRONG_TYPE(sh_bot, int32);
    #endif//_sh_bot__GUARD__

    #ifndef _sh_sld__GUARD__
    #define _sh_sld__GUARD__
    DECL_STRONG_TYPE(sh_sld, int32);
    #endif//_sh_sld__GUARD__

    #ifndef _sh_sld_shrt__GUARD__
    #define _sh_sld_shrt__GUARD__
    DECL_STRONG_TYPE(sh_sld_shrt, int32);
    #endif//_sh_sld_shrt__GUARD__

    #ifndef _sh_bot_hdg__GUARD__
    #define _sh_bot_hdg__GUARD__
    DECL_STRONG_TYPE(sh_bot_hdg, int32);
    #endif//_sh_bot_hdg__GUARD__

    #ifndef _sh_sld_hdg__GUARD__
    #define _sh_sld_hdg__GUARD__
    DECL_STRONG_TYPE(sh_sld_hdg, int32);
    #endif//_sh_sld_hdg__GUARD__

    #ifndef _sh_bot_trh__GUARD__
    #define _sh_bot_trh__GUARD__
    DECL_STRONG_TYPE(sh_bot_trh, int32);
    #endif//_sh_bot_trh__GUARD__

    #ifndef _sh_sld_trh__GUARD__
    #define _sh_sld_trh__GUARD__
    DECL_STRONG_TYPE(sh_sld_trh, int32);
    #endif//_sh_sld_trh__GUARD__

    #ifndef _sh_bot_opn__GUARD__
    #define _sh_bot_opn__GUARD__
    DECL_STRONG_TYPE(sh_bot_opn, int32);
    #endif//_sh_bot_opn__GUARD__

    #ifndef _sh_sld_opn__GUARD__
    #define _sh_sld_opn__GUARD__
    DECL_STRONG_TYPE(sh_sld_opn, int32);
    #endif//_sh_sld_opn__GUARD__

    #ifndef _sh_bot_trd__GUARD__
    #define _sh_bot_trd__GUARD__
    DECL_STRONG_TYPE(sh_bot_trd, int32);
    #endif//_sh_bot_trd__GUARD__

    #ifndef _sh_sld_trd__GUARD__
    #define _sh_sld_trd__GUARD__
    DECL_STRONG_TYPE(sh_sld_trd, int32);
    #endif//_sh_sld_trd__GUARD__

    #ifndef _stk_mny_bot__GUARD__
    #define _stk_mny_bot__GUARD__
    DECL_STRONG_TYPE(stk_mny_bot, double);
    #endif//_stk_mny_bot__GUARD__

    #ifndef _stk_mny_sld__GUARD__
    #define _stk_mny_sld__GUARD__
    DECL_STRONG_TYPE(stk_mny_sld, double);
    #endif//_stk_mny_sld__GUARD__

    #ifndef _day_pnl__GUARD__
    #define _day_pnl__GUARD__
    DECL_STRONG_TYPE(day_pnl, float);
    #endif//_day_pnl__GUARD__

    #ifndef _opn_pnl_mid_mark__GUARD__
    #define _opn_pnl_mid_mark__GUARD__
    DECL_STRONG_TYPE(opn_pnl_mid_mark, float);
    #endif//_opn_pnl_mid_mark__GUARD__

    #ifndef _opn_pnl_clr_mark__GUARD__
    #define _opn_pnl_clr_mark__GUARD__
    DECL_STRONG_TYPE(opn_pnl_clr_mark, float);
    #endif//_opn_pnl_clr_mark__GUARD__

    #ifndef _ex_div_amt__GUARD__
    #define _ex_div_amt__GUARD__
    DECL_STRONG_TYPE(ex_div_amt, float);
    #endif//_ex_div_amt__GUARD__

    #ifndef _borrow_rate__GUARD__
    #define _borrow_rate__GUARD__
    DECL_STRONG_TYPE(borrow_rate, float);
    #endif//_borrow_rate__GUARD__

    #ifndef _beta__GUARD__
    #define _beta__GUARD__
    DECL_STRONG_TYPE(beta, float);
    #endif//_beta__GUARD__

    #ifndef _beta_source__GUARD__
    #define _beta_source__GUARD__
    DECL_STRONG_TYPE(beta_source, spiderrock::protobuf::api::BetaSource);
    #endif//_beta_source__GUARD__

    #ifndef _margin_udn__GUARD__
    #define _margin_udn__GUARD__
    DECL_STRONG_TYPE(margin_udn, float);
    #endif//_margin_udn__GUARD__

    #ifndef _margin_uup__GUARD__
    #define _margin_uup__GUARD__
    DECL_STRONG_TYPE(margin_uup, float);
    #endif//_margin_uup__GUARD__

    #ifndef _num_executions__GUARD__
    #define _num_executions__GUARD__
    DECL_STRONG_TYPE(num_executions, int32);
    #endif//_num_executions__GUARD__

    #ifndef _max_exec_dttm__GUARD__
    #define _max_exec_dttm__GUARD__
    DECL_STRONG_TYPE(max_exec_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_max_exec_dttm__GUARD__

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

    #ifndef _risk_session__GUARD__
    #define _risk_session__GUARD__
    DECL_STRONG_TYPE(risk_session, spiderrock::protobuf::api::RiskSession);
    #endif//_risk_session__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    
    class StockPositionRecordV5_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using accnt = spiderrock::protobuf::api::accnt;
        using trade_date = spiderrock::protobuf::api::trade_date;
        using risk_session = spiderrock::protobuf::api::risk_session;
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        ticker m_ticker{};
        accnt m_accnt{};
        trade_date m_trade_date{};
        risk_session m_risk_session{};
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
        risk_session get_risk_session() const {
            return m_risk_session;
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
        void set_risk_session(const risk_session& value)  {
            m_risk_session = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockPositionRecordV5_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to StockPositionRecordV5_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const accnt & value) { set_accnt(value); }
        void set(const trade_date & value) { set_trade_date(value); }
        void set(const risk_session & value) { set_risk_session(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        StockPositionRecordV5_PKey() {}

        virtual ~StockPositionRecordV5_PKey() {
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskSession>(m_risk_session)));
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(14,m_client_firm);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskSession>(m_risk_session)));
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,14,static_cast<string>(m_client_firm));
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
                    case 13: {m_risk_session = static_cast<spiderrock::protobuf::api::RiskSession>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 14: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class StockPositionRecordV5 {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::StockPositionRecordV5_PKey;
        using risk_server_code = spiderrock::protobuf::api::risk_server_code;
        using pri_agg_group = spiderrock::protobuf::api::pri_agg_group;
        using sec_agg_group = spiderrock::protobuf::api::sec_agg_group;
        using symbol_type = spiderrock::protobuf::api::symbol_type;
        using tick_value = spiderrock::protobuf::api::tick_value;
        using point_value = spiderrock::protobuf::api::point_value__float;
        using point_currency = spiderrock::protobuf::api::point_currency;
        using price_format = spiderrock::protobuf::api::price_format;
        using stk_prc = spiderrock::protobuf::api::stk_prc;
        using stk_bid = spiderrock::protobuf::api::stk_bid;
        using stk_ask = spiderrock::protobuf::api::stk_ask;
        using stk_mark = spiderrock::protobuf::api::stk_mark;
        using stk_mark_err_codes = spiderrock::protobuf::api::stk_mark_err_codes;
        using stk_mark_source = spiderrock::protobuf::api::stk_mark_source;
        using stk_opn_mid_mark = spiderrock::protobuf::api::stk_opn_mid_mark;
        using stk_opn_clr_mark = spiderrock::protobuf::api::stk_opn_clr_mark;
        using stk_opn_pos_prv = spiderrock::protobuf::api::stk_opn_pos_prv;
        using stk_opn_pos_clr = spiderrock::protobuf::api::stk_opn_pos_clr;
        using stk_opn_pos = spiderrock::protobuf::api::stk_opn_pos;
        using stk_opn_pos_src = spiderrock::protobuf::api::stk_opn_pos_src;
        using sh_bot = spiderrock::protobuf::api::sh_bot;
        using sh_sld = spiderrock::protobuf::api::sh_sld;
        using sh_sld_shrt = spiderrock::protobuf::api::sh_sld_shrt;
        using sh_bot_hdg = spiderrock::protobuf::api::sh_bot_hdg;
        using sh_sld_hdg = spiderrock::protobuf::api::sh_sld_hdg;
        using sh_bot_trh = spiderrock::protobuf::api::sh_bot_trh;
        using sh_sld_trh = spiderrock::protobuf::api::sh_sld_trh;
        using sh_bot_opn = spiderrock::protobuf::api::sh_bot_opn;
        using sh_sld_opn = spiderrock::protobuf::api::sh_sld_opn;
        using sh_bot_trd = spiderrock::protobuf::api::sh_bot_trd;
        using sh_sld_trd = spiderrock::protobuf::api::sh_sld_trd;
        using stk_mny_bot = spiderrock::protobuf::api::stk_mny_bot;
        using stk_mny_sld = spiderrock::protobuf::api::stk_mny_sld;
        using day_pnl = spiderrock::protobuf::api::day_pnl;
        using opn_pnl_mid_mark = spiderrock::protobuf::api::opn_pnl_mid_mark;
        using opn_pnl_clr_mark = spiderrock::protobuf::api::opn_pnl_clr_mark;
        using ex_div_amt = spiderrock::protobuf::api::ex_div_amt;
        using borrow_rate = spiderrock::protobuf::api::borrow_rate;
        using beta = spiderrock::protobuf::api::beta;
        using beta_source = spiderrock::protobuf::api::beta_source;
        using margin_udn = spiderrock::protobuf::api::margin_udn;
        using margin_uup = spiderrock::protobuf::api::margin_uup;
        using num_executions = spiderrock::protobuf::api::num_executions;
        using max_exec_dttm = spiderrock::protobuf::api::max_exec_dttm;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        risk_server_code m_risk_server_code{};
        pri_agg_group m_pri_agg_group{};
        sec_agg_group m_sec_agg_group{};
        symbol_type m_symbol_type{};
        tick_value m_tick_value{};
        point_value m_point_value{};
        point_currency m_point_currency{};
        price_format m_price_format{};
        stk_prc m_stk_prc{};
        stk_bid m_stk_bid{};
        stk_ask m_stk_ask{};
        stk_mark m_stk_mark{};
        stk_mark_err_codes m_stk_mark_err_codes{};
        stk_mark_source m_stk_mark_source{};
        stk_opn_mid_mark m_stk_opn_mid_mark{};
        stk_opn_clr_mark m_stk_opn_clr_mark{};
        stk_opn_pos_prv m_stk_opn_pos_prv{};
        stk_opn_pos_clr m_stk_opn_pos_clr{};
        stk_opn_pos m_stk_opn_pos{};
        stk_opn_pos_src m_stk_opn_pos_src{};
        sh_bot m_sh_bot{};
        sh_sld m_sh_sld{};
        sh_sld_shrt m_sh_sld_shrt{};
        sh_bot_hdg m_sh_bot_hdg{};
        sh_sld_hdg m_sh_sld_hdg{};
        sh_bot_trh m_sh_bot_trh{};
        sh_sld_trh m_sh_sld_trh{};
        sh_bot_opn m_sh_bot_opn{};
        sh_sld_opn m_sh_sld_opn{};
        sh_bot_trd m_sh_bot_trd{};
        sh_sld_trd m_sh_sld_trd{};
        stk_mny_bot m_stk_mny_bot{};
        stk_mny_sld m_stk_mny_sld{};
        day_pnl m_day_pnl{};
        opn_pnl_mid_mark m_opn_pnl_mid_mark{};
        opn_pnl_clr_mark m_opn_pnl_clr_mark{};
        ex_div_amt m_ex_div_amt{};
        borrow_rate m_borrow_rate{};
        beta m_beta{};
        beta_source m_beta_source{};
        margin_udn m_margin_udn{};
        margin_uup m_margin_uup{};
        num_executions m_num_executions{};
        max_exec_dttm m_max_exec_dttm{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        risk_server_code get_risk_server_code() const {
            return m_risk_server_code;
        }		
        pri_agg_group get_pri_agg_group() const {
            return m_pri_agg_group;
        }		
        sec_agg_group get_sec_agg_group() const {
            return m_sec_agg_group;
        }		
        symbol_type get_symbol_type() const {
            return m_symbol_type;
        }		
        tick_value get_tick_value() const {
            return m_tick_value;
        }		
        point_value get_point_value() const {
            return m_point_value;
        }		
        point_currency get_point_currency() const {
            return m_point_currency;
        }		
        price_format get_price_format() const {
            return m_price_format;
        }		
        stk_prc get_stk_prc() const {
            return m_stk_prc;
        }		
        stk_bid get_stk_bid() const {
            return m_stk_bid;
        }		
        stk_ask get_stk_ask() const {
            return m_stk_ask;
        }		
        stk_mark get_stk_mark() const {
            return m_stk_mark;
        }		
        stk_mark_err_codes get_stk_mark_err_codes() const {
            return m_stk_mark_err_codes;
        }		
        stk_mark_source get_stk_mark_source() const {
            return m_stk_mark_source;
        }		
        stk_opn_mid_mark get_stk_opn_mid_mark() const {
            return m_stk_opn_mid_mark;
        }		
        stk_opn_clr_mark get_stk_opn_clr_mark() const {
            return m_stk_opn_clr_mark;
        }		
        stk_opn_pos_prv get_stk_opn_pos_prv() const {
            return m_stk_opn_pos_prv;
        }		
        stk_opn_pos_clr get_stk_opn_pos_clr() const {
            return m_stk_opn_pos_clr;
        }		
        stk_opn_pos get_stk_opn_pos() const {
            return m_stk_opn_pos;
        }		
        stk_opn_pos_src get_stk_opn_pos_src() const {
            return m_stk_opn_pos_src;
        }		
        sh_bot get_sh_bot() const {
            return m_sh_bot;
        }		
        sh_sld get_sh_sld() const {
            return m_sh_sld;
        }		
        sh_sld_shrt get_sh_sld_shrt() const {
            return m_sh_sld_shrt;
        }		
        sh_bot_hdg get_sh_bot_hdg() const {
            return m_sh_bot_hdg;
        }		
        sh_sld_hdg get_sh_sld_hdg() const {
            return m_sh_sld_hdg;
        }		
        sh_bot_trh get_sh_bot_trh() const {
            return m_sh_bot_trh;
        }		
        sh_sld_trh get_sh_sld_trh() const {
            return m_sh_sld_trh;
        }		
        sh_bot_opn get_sh_bot_opn() const {
            return m_sh_bot_opn;
        }		
        sh_sld_opn get_sh_sld_opn() const {
            return m_sh_sld_opn;
        }		
        sh_bot_trd get_sh_bot_trd() const {
            return m_sh_bot_trd;
        }		
        sh_sld_trd get_sh_sld_trd() const {
            return m_sh_sld_trd;
        }		
        stk_mny_bot get_stk_mny_bot() const {
            return m_stk_mny_bot;
        }		
        stk_mny_sld get_stk_mny_sld() const {
            return m_stk_mny_sld;
        }		
        day_pnl get_day_pnl() const {
            return m_day_pnl;
        }		
        opn_pnl_mid_mark get_opn_pnl_mid_mark() const {
            return m_opn_pnl_mid_mark;
        }		
        opn_pnl_clr_mark get_opn_pnl_clr_mark() const {
            return m_opn_pnl_clr_mark;
        }		
        ex_div_amt get_ex_div_amt() const {
            return m_ex_div_amt;
        }		
        borrow_rate get_borrow_rate() const {
            return m_borrow_rate;
        }		
        beta get_beta() const {
            return m_beta;
        }		
        beta_source get_beta_source() const {
            return m_beta_source;
        }		
        margin_udn get_margin_udn() const {
            return m_margin_udn;
        }		
        margin_uup get_margin_uup() const {
            return m_margin_uup;
        }		
        num_executions get_num_executions() const {
            return m_num_executions;
        }		
        max_exec_dttm get_max_exec_dttm() const {
            return m_max_exec_dttm;
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
        void set_risk_server_code(const risk_server_code& value)  {
            m_risk_server_code = value;
        }
        void set_pri_agg_group(const pri_agg_group& value)  {
            m_pri_agg_group = value;
        }
        void set_sec_agg_group(const sec_agg_group& value)  {
            m_sec_agg_group = value;
        }
        void set_symbol_type(const symbol_type& value)  {
            m_symbol_type = value;
        }
        void set_tick_value(const tick_value& value)  {
            m_tick_value = value;
        }
        void set_point_value(const point_value& value)  {
            m_point_value = value;
        }
        void set_point_currency(const point_currency& value)  {
            m_point_currency = value;
        }
        void set_price_format(const price_format& value)  {
            m_price_format = value;
        }
        void set_stk_prc(const stk_prc& value)  {
            m_stk_prc = value;
        }
        void set_stk_bid(const stk_bid& value)  {
            m_stk_bid = value;
        }
        void set_stk_ask(const stk_ask& value)  {
            m_stk_ask = value;
        }
        void set_stk_mark(const stk_mark& value)  {
            m_stk_mark = value;
        }
        void set_stk_mark_err_codes(const stk_mark_err_codes& value)  {
            m_stk_mark_err_codes = value;
        }
        void set_stk_mark_source(const stk_mark_source& value)  {
            m_stk_mark_source = value;
        }
        void set_stk_opn_mid_mark(const stk_opn_mid_mark& value)  {
            m_stk_opn_mid_mark = value;
        }
        void set_stk_opn_clr_mark(const stk_opn_clr_mark& value)  {
            m_stk_opn_clr_mark = value;
        }
        void set_stk_opn_pos_prv(const stk_opn_pos_prv& value)  {
            m_stk_opn_pos_prv = value;
        }
        void set_stk_opn_pos_clr(const stk_opn_pos_clr& value)  {
            m_stk_opn_pos_clr = value;
        }
        void set_stk_opn_pos(const stk_opn_pos& value)  {
            m_stk_opn_pos = value;
        }
        void set_stk_opn_pos_src(const stk_opn_pos_src& value)  {
            m_stk_opn_pos_src = value;
        }
        void set_sh_bot(const sh_bot& value)  {
            m_sh_bot = value;
        }
        void set_sh_sld(const sh_sld& value)  {
            m_sh_sld = value;
        }
        void set_sh_sld_shrt(const sh_sld_shrt& value)  {
            m_sh_sld_shrt = value;
        }
        void set_sh_bot_hdg(const sh_bot_hdg& value)  {
            m_sh_bot_hdg = value;
        }
        void set_sh_sld_hdg(const sh_sld_hdg& value)  {
            m_sh_sld_hdg = value;
        }
        void set_sh_bot_trh(const sh_bot_trh& value)  {
            m_sh_bot_trh = value;
        }
        void set_sh_sld_trh(const sh_sld_trh& value)  {
            m_sh_sld_trh = value;
        }
        void set_sh_bot_opn(const sh_bot_opn& value)  {
            m_sh_bot_opn = value;
        }
        void set_sh_sld_opn(const sh_sld_opn& value)  {
            m_sh_sld_opn = value;
        }
        void set_sh_bot_trd(const sh_bot_trd& value)  {
            m_sh_bot_trd = value;
        }
        void set_sh_sld_trd(const sh_sld_trd& value)  {
            m_sh_sld_trd = value;
        }
        void set_stk_mny_bot(const stk_mny_bot& value)  {
            m_stk_mny_bot = value;
        }
        void set_stk_mny_sld(const stk_mny_sld& value)  {
            m_stk_mny_sld = value;
        }
        void set_day_pnl(const day_pnl& value)  {
            m_day_pnl = value;
        }
        void set_opn_pnl_mid_mark(const opn_pnl_mid_mark& value)  {
            m_opn_pnl_mid_mark = value;
        }
        void set_opn_pnl_clr_mark(const opn_pnl_clr_mark& value)  {
            m_opn_pnl_clr_mark = value;
        }
        void set_ex_div_amt(const ex_div_amt& value)  {
            m_ex_div_amt = value;
        }
        void set_borrow_rate(const borrow_rate& value)  {
            m_borrow_rate = value;
        }
        void set_beta(const beta& value)  {
            m_beta = value;
        }
        void set_beta_source(const beta_source& value)  {
            m_beta_source = value;
        }
        void set_margin_udn(const margin_udn& value)  {
            m_margin_udn = value;
        }
        void set_margin_uup(const margin_uup& value)  {
            m_margin_uup = value;
        }
        void set_num_executions(const num_executions& value)  {
            m_num_executions = value;
        }
        void set_max_exec_dttm(const max_exec_dttm& value)  {
            m_max_exec_dttm = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockPositionRecordV5::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const risk_server_code & value) {
            set_risk_server_code(value);
        }
        void set(const pri_agg_group & value) {
            set_pri_agg_group(value);
        }
        void set(const sec_agg_group & value) {
            set_sec_agg_group(value);
        }
        void set(const symbol_type & value) {
            set_symbol_type(value);
        }
        void set(const tick_value & value) {
            set_tick_value(value);
        }
        void set(const point_value & value) {
            set_point_value(value);
        }
        void set(const point_currency & value) {
            set_point_currency(value);
        }
        void set(const price_format & value) {
            set_price_format(value);
        }
        void set(const stk_prc & value) {
            set_stk_prc(value);
        }
        void set(const stk_bid & value) {
            set_stk_bid(value);
        }
        void set(const stk_ask & value) {
            set_stk_ask(value);
        }
        void set(const stk_mark & value) {
            set_stk_mark(value);
        }
        void set(const stk_mark_err_codes & value) {
            set_stk_mark_err_codes(value);
        }
        void set(const stk_mark_source & value) {
            set_stk_mark_source(value);
        }
        void set(const stk_opn_mid_mark & value) {
            set_stk_opn_mid_mark(value);
        }
        void set(const stk_opn_clr_mark & value) {
            set_stk_opn_clr_mark(value);
        }
        void set(const stk_opn_pos_prv & value) {
            set_stk_opn_pos_prv(value);
        }
        void set(const stk_opn_pos_clr & value) {
            set_stk_opn_pos_clr(value);
        }
        void set(const stk_opn_pos & value) {
            set_stk_opn_pos(value);
        }
        void set(const stk_opn_pos_src & value) {
            set_stk_opn_pos_src(value);
        }
        void set(const sh_bot & value) {
            set_sh_bot(value);
        }
        void set(const sh_sld & value) {
            set_sh_sld(value);
        }
        void set(const sh_sld_shrt & value) {
            set_sh_sld_shrt(value);
        }
        void set(const sh_bot_hdg & value) {
            set_sh_bot_hdg(value);
        }
        void set(const sh_sld_hdg & value) {
            set_sh_sld_hdg(value);
        }
        void set(const sh_bot_trh & value) {
            set_sh_bot_trh(value);
        }
        void set(const sh_sld_trh & value) {
            set_sh_sld_trh(value);
        }
        void set(const sh_bot_opn & value) {
            set_sh_bot_opn(value);
        }
        void set(const sh_sld_opn & value) {
            set_sh_sld_opn(value);
        }
        void set(const sh_bot_trd & value) {
            set_sh_bot_trd(value);
        }
        void set(const sh_sld_trd & value) {
            set_sh_sld_trd(value);
        }
        void set(const stk_mny_bot & value) {
            set_stk_mny_bot(value);
        }
        void set(const stk_mny_sld & value) {
            set_stk_mny_sld(value);
        }
        void set(const day_pnl & value) {
            set_day_pnl(value);
        }
        void set(const opn_pnl_mid_mark & value) {
            set_opn_pnl_mid_mark(value);
        }
        void set(const opn_pnl_clr_mark & value) {
            set_opn_pnl_clr_mark(value);
        }
        void set(const ex_div_amt & value) {
            set_ex_div_amt(value);
        }
        void set(const borrow_rate & value) {
            set_borrow_rate(value);
        }
        void set(const beta & value) {
            set_beta(value);
        }
        void set(const beta_source & value) {
            set_beta_source(value);
        }
        void set(const margin_udn & value) {
            set_margin_udn(value);
        }
        void set(const margin_uup & value) {
            set_margin_uup(value);
        }
        void set(const num_executions & value) {
            set_num_executions(value);
        }
        void set(const max_exec_dttm & value) {
            set_max_exec_dttm(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const StockPositionRecordV5 & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_risk_server_code);
            set(value.m_pri_agg_group);
            set(value.m_sec_agg_group);
            set(value.m_symbol_type);
            set(value.m_tick_value);
            set(value.m_point_value);
            set(value.m_point_currency);
            set(value.m_price_format);
            set(value.m_stk_prc);
            set(value.m_stk_bid);
            set(value.m_stk_ask);
            set(value.m_stk_mark);
            set(value.m_stk_mark_err_codes);
            set(value.m_stk_mark_source);
            set(value.m_stk_opn_mid_mark);
            set(value.m_stk_opn_clr_mark);
            set(value.m_stk_opn_pos_prv);
            set(value.m_stk_opn_pos_clr);
            set(value.m_stk_opn_pos);
            set(value.m_stk_opn_pos_src);
            set(value.m_sh_bot);
            set(value.m_sh_sld);
            set(value.m_sh_sld_shrt);
            set(value.m_sh_bot_hdg);
            set(value.m_sh_sld_hdg);
            set(value.m_sh_bot_trh);
            set(value.m_sh_sld_trh);
            set(value.m_sh_bot_opn);
            set(value.m_sh_sld_opn);
            set(value.m_sh_bot_trd);
            set(value.m_sh_sld_trd);
            set(value.m_stk_mny_bot);
            set(value.m_stk_mny_sld);
            set(value.m_day_pnl);
            set(value.m_opn_pnl_mid_mark);
            set(value.m_opn_pnl_clr_mark);
            set(value.m_ex_div_amt);
            set(value.m_borrow_rate);
            set(value.m_beta);
            set(value.m_beta_source);
            set(value.m_margin_udn);
            set(value.m_margin_uup);
            set(value.m_num_executions);
            set(value.m_max_exec_dttm);
            set(value.m_timestamp);
        }

        StockPositionRecordV5() {
            m__meta.set_message_type("StockPositionRecordV5");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4850, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4850, length);
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
             *this = StockPositionRecordV5{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeRiskServerCode() const {
            return !(m_risk_server_code.empty());
        }
        bool IncludePriAggGroup() const {
            return !(m_pri_agg_group.empty());
        }
        bool IncludeSecAggGroup() const {
            return !(m_sec_agg_group.empty());
        }
        bool IncludeTickValue() const {
            return !(m_tick_value == 0.0);
        }
        bool IncludePointValue() const {
            return !(m_point_value == 0.0);
        }
        bool IncludeStkPrc() const {
            return !(m_stk_prc == 0.0);
        }
        bool IncludeStkBid() const {
            return !(m_stk_bid == 0.0);
        }
        bool IncludeStkAsk() const {
            return !(m_stk_ask == 0.0);
        }
        bool IncludeStkMark() const {
            return !(m_stk_mark == 0.0);
        }
        bool IncludeStkOpnMidMark() const {
            return !(m_stk_opn_mid_mark == 0.0);
        }
        bool IncludeStkOpnClrMark() const {
            return !(m_stk_opn_clr_mark == 0.0);
        }
        bool IncludeStkOpnPosPrv() const {
            return !(m_stk_opn_pos_prv == 0);
        }
        bool IncludeStkOpnPosClr() const {
            return !(m_stk_opn_pos_clr == 0);
        }
        bool IncludeStkOpnPos() const {
            return !(m_stk_opn_pos == 0);
        }
        bool IncludeShBot() const {
            return !(m_sh_bot == 0);
        }
        bool IncludeShSld() const {
            return !(m_sh_sld == 0);
        }
        bool IncludeShSldShrt() const {
            return !(m_sh_sld_shrt == 0);
        }
        bool IncludeShBotHdg() const {
            return !(m_sh_bot_hdg == 0);
        }
        bool IncludeShSldHdg() const {
            return !(m_sh_sld_hdg == 0);
        }
        bool IncludeShBotTrh() const {
            return !(m_sh_bot_trh == 0);
        }
        bool IncludeShSldTrh() const {
            return !(m_sh_sld_trh == 0);
        }
        bool IncludeShBotOpn() const {
            return !(m_sh_bot_opn == 0);
        }
        bool IncludeShSldOpn() const {
            return !(m_sh_sld_opn == 0);
        }
        bool IncludeShBotTrd() const {
            return !(m_sh_bot_trd == 0);
        }
        bool IncludeShSldTrd() const {
            return !(m_sh_sld_trd == 0);
        }
        bool IncludeStkMnyBot() const {
            return !(m_stk_mny_bot == 0.0);
        }
        bool IncludeStkMnySld() const {
            return !(m_stk_mny_sld == 0.0);
        }
        bool IncludeDayPnl() const {
            return !(m_day_pnl == 0.0);
        }
        bool IncludeOpnPnlMidMark() const {
            return !(m_opn_pnl_mid_mark == 0.0);
        }
        bool IncludeOpnPnlClrMark() const {
            return !(m_opn_pnl_clr_mark == 0.0);
        }
        bool IncludeExDivAmt() const {
            return !(m_ex_div_amt == 0.0);
        }
        bool IncludeBorrowRate() const {
            return !(m_borrow_rate == 0.0);
        }
        bool IncludeBeta() const {
            return !(m_beta == 0.0);
        }
        bool IncludeMarginUdn() const {
            return !(m_margin_udn == 0.0);
        }
        bool IncludeMarginUup() const {
            return !(m_margin_uup == 0.0);
        }
        bool IncludeNumExecutions() const {
            return !(m_num_executions == 0);
        }
        bool IncludeMaxExecDttm() const {
            return (m_max_exec_dttm.time_since_epoch().count() != 0);
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
            if ( IncludeRiskServerCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_risk_server_code);
            }
            if ( IncludePriAggGroup()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_pri_agg_group);
            }
            if ( IncludeSecAggGroup()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(109,m_sec_agg_group);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>(m_symbol_type)));
            if ( IncludeTickValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_tick_value);
            }
            if ( IncludePointValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_point_value);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format)));
            if ( IncludeStkPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_stk_prc);
            }
            if ( IncludeStkBid()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_stk_bid);
            }
            if ( IncludeStkAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_stk_ask);
            }
            if ( IncludeStkMark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(136,m_stk_mark);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarkErrorCode>(m_stk_mark_err_codes)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UMarkSource>(m_stk_mark_source)));
            if ( IncludeStkOpnMidMark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(145,m_stk_opn_mid_mark);
            }
            if ( IncludeStkOpnClrMark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(148,m_stk_opn_clr_mark);
            }
            if ( IncludeStkOpnPosPrv()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(151,m_stk_opn_pos_prv);
            }
            if ( IncludeStkOpnPosClr()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(154,m_stk_opn_pos_clr);
            }
            if ( IncludeStkOpnPos()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(157,m_stk_opn_pos);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(160,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionSource>(m_stk_opn_pos_src)));
            if ( IncludeShBot()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(163,m_sh_bot);
            }
            if ( IncludeShSld()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(166,m_sh_sld);
            }
            if ( IncludeShSldShrt()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(169,m_sh_sld_shrt);
            }
            if ( IncludeShBotHdg()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(172,m_sh_bot_hdg);
            }
            if ( IncludeShSldHdg()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(175,m_sh_sld_hdg);
            }
            if ( IncludeShBotTrh()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(178,m_sh_bot_trh);
            }
            if ( IncludeShSldTrh()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(181,m_sh_sld_trh);
            }
            if ( IncludeShBotOpn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(184,m_sh_bot_opn);
            }
            if ( IncludeShSldOpn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(187,m_sh_sld_opn);
            }
            if ( IncludeShBotTrd()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(190,m_sh_bot_trd);
            }
            if ( IncludeShSldTrd()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(193,m_sh_sld_trd);
            }
            if ( IncludeStkMnyBot()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(196,m_stk_mny_bot);
            }
            if ( IncludeStkMnySld()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(199,m_stk_mny_sld);
            }
            if ( IncludeDayPnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(202,m_day_pnl);
            }
            if ( IncludeOpnPnlMidMark()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(205,m_opn_pnl_mid_mark);
            }
            if ( IncludeOpnPnlClrMark()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(208,m_opn_pnl_clr_mark);
            }
            if ( IncludeExDivAmt()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(211,m_ex_div_amt);
            }
            if ( IncludeBorrowRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(214,m_borrow_rate);
            }
            if ( IncludeBeta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(217,m_beta);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(220,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BetaSource>(m_beta_source)));
            if ( IncludeMarginUdn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(230,m_margin_udn);
            }
            if ( IncludeMarginUup()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(231,m_margin_uup);
            }
            if ( IncludeNumExecutions()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(223,m_num_executions);
            }
            if ( IncludeMaxExecDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(226, m_max_exec_dttm);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(229, m_timestamp);
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
            if ( IncludeRiskServerCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_risk_server_code));
            }
            if ( IncludePriAggGroup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_pri_agg_group));
            }
            if ( IncludeSecAggGroup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,109,static_cast<string>(m_sec_agg_group));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>(m_symbol_type)));
            if ( IncludeTickValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_tick_value);
            }
            if ( IncludePointValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_point_value);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format)));
            if ( IncludeStkPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_stk_prc);
            }
            if ( IncludeStkBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_stk_bid);
            }
            if ( IncludeStkAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_stk_ask);
            }
            if ( IncludeStkMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,136,m_stk_mark);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarkErrorCode>(m_stk_mark_err_codes)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UMarkSource>(m_stk_mark_source)));
            if ( IncludeStkOpnMidMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,145,m_stk_opn_mid_mark);
            }
            if ( IncludeStkOpnClrMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,148,m_stk_opn_clr_mark);
            }
            if ( IncludeStkOpnPosPrv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,151,m_stk_opn_pos_prv);
            }
            if ( IncludeStkOpnPosClr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,154,m_stk_opn_pos_clr);
            }
            if ( IncludeStkOpnPos()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,157,m_stk_opn_pos);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,160,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionSource>(m_stk_opn_pos_src)));
            if ( IncludeShBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,163,m_sh_bot);
            }
            if ( IncludeShSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,166,m_sh_sld);
            }
            if ( IncludeShSldShrt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,169,m_sh_sld_shrt);
            }
            if ( IncludeShBotHdg()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,172,m_sh_bot_hdg);
            }
            if ( IncludeShSldHdg()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,175,m_sh_sld_hdg);
            }
            if ( IncludeShBotTrh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,178,m_sh_bot_trh);
            }
            if ( IncludeShSldTrh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,181,m_sh_sld_trh);
            }
            if ( IncludeShBotOpn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,184,m_sh_bot_opn);
            }
            if ( IncludeShSldOpn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,187,m_sh_sld_opn);
            }
            if ( IncludeShBotTrd()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,190,m_sh_bot_trd);
            }
            if ( IncludeShSldTrd()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,193,m_sh_sld_trd);
            }
            if ( IncludeStkMnyBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,196,m_stk_mny_bot);
            }
            if ( IncludeStkMnySld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,199,m_stk_mny_sld);
            }
            if ( IncludeDayPnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,202,m_day_pnl);
            }
            if ( IncludeOpnPnlMidMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,205,m_opn_pnl_mid_mark);
            }
            if ( IncludeOpnPnlClrMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,208,m_opn_pnl_clr_mark);
            }
            if ( IncludeExDivAmt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,211,m_ex_div_amt);
            }
            if ( IncludeBorrowRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,214,m_borrow_rate);
            }
            if ( IncludeBeta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,217,m_beta);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,220,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BetaSource>(m_beta_source)));
            if ( IncludeMarginUdn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,230,m_margin_udn);
            }
            if ( IncludeMarginUup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,231,m_margin_uup);
            }
            if ( IncludeNumExecutions()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,223,m_num_executions);
            }
            if ( IncludeMaxExecDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 226, m_max_exec_dttm);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 229, m_timestamp);
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
                            m_risk_server_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_pri_agg_group = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_sec_agg_group = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_symbol_type = static_cast<spiderrock::protobuf::api::SymbolType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_tick_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_point_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_point_currency = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 124: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_format = static_cast<spiderrock::protobuf::api::PriceFormat>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_stk_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_stk_bid = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_stk_ask = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_stk_mark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 139: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_stk_mark_err_codes = static_cast<spiderrock::protobuf::api::MarkErrorCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 142: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_stk_mark_source = static_cast<spiderrock::protobuf::api::UMarkSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_stk_opn_mid_mark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_stk_opn_clr_mark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_stk_opn_pos_prv = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_stk_opn_pos_clr = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_stk_opn_pos = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 160: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_stk_opn_pos_src = static_cast<spiderrock::protobuf::api::PositionSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_bot = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_sld = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_sld_shrt = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_bot_hdg = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_sld_hdg = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_bot_trh = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_sld_trh = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_bot_opn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_sld_opn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_bot_trd = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_sld_trd = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_stk_mny_bot = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_stk_mny_sld = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_mid_mark = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_clr_mark = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ex_div_amt = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_borrow_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 220: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_beta_source = static_cast<spiderrock::protobuf::api::BetaSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 230: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_udn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 231: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_uup = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_executions = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 226: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_max_exec_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 229: {
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

    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::_meta>() const { return StockPositionRecordV5::_meta{ m__meta}; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::pkey>() const { return StockPositionRecordV5::pkey{ m_pkey}; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::risk_server_code>() const { return m_risk_server_code; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::pri_agg_group>() const { return m_pri_agg_group; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::sec_agg_group>() const { return m_sec_agg_group; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::symbol_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>( m_symbol_type)); }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::tick_value>() const { return m_tick_value; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::point_value>() const { return m_point_value; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::point_currency>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>( m_point_currency)); }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::price_format>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>( m_price_format)); }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::stk_prc>() const { return m_stk_prc; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::stk_bid>() const { return m_stk_bid; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::stk_ask>() const { return m_stk_ask; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::stk_mark>() const { return m_stk_mark; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::stk_mark_err_codes>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarkErrorCode>( m_stk_mark_err_codes)); }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::stk_mark_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UMarkSource>( m_stk_mark_source)); }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::stk_opn_mid_mark>() const { return m_stk_opn_mid_mark; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::stk_opn_clr_mark>() const { return m_stk_opn_clr_mark; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::stk_opn_pos_prv>() const { return m_stk_opn_pos_prv; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::stk_opn_pos_clr>() const { return m_stk_opn_pos_clr; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::stk_opn_pos>() const { return m_stk_opn_pos; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::stk_opn_pos_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionSource>( m_stk_opn_pos_src)); }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::sh_bot>() const { return m_sh_bot; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::sh_sld>() const { return m_sh_sld; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::sh_sld_shrt>() const { return m_sh_sld_shrt; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::sh_bot_hdg>() const { return m_sh_bot_hdg; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::sh_sld_hdg>() const { return m_sh_sld_hdg; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::sh_bot_trh>() const { return m_sh_bot_trh; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::sh_sld_trh>() const { return m_sh_sld_trh; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::sh_bot_opn>() const { return m_sh_bot_opn; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::sh_sld_opn>() const { return m_sh_sld_opn; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::sh_bot_trd>() const { return m_sh_bot_trd; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::sh_sld_trd>() const { return m_sh_sld_trd; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::stk_mny_bot>() const { return m_stk_mny_bot; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::stk_mny_sld>() const { return m_stk_mny_sld; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::day_pnl>() const { return m_day_pnl; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::opn_pnl_mid_mark>() const { return m_opn_pnl_mid_mark; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::opn_pnl_clr_mark>() const { return m_opn_pnl_clr_mark; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::ex_div_amt>() const { return m_ex_div_amt; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::borrow_rate>() const { return m_borrow_rate; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::beta>() const { return m_beta; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::beta_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BetaSource>( m_beta_source)); }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::margin_udn>() const { return m_margin_udn; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::margin_uup>() const { return m_margin_uup; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::num_executions>() const { return m_num_executions; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::max_exec_dttm>() const { return m_max_exec_dttm; }
    template<> inline const auto StockPositionRecordV5::get<StockPositionRecordV5::timestamp>() const { return m_timestamp; }
    template<> inline const auto StockPositionRecordV5_PKey::get<StockPositionRecordV5_PKey::ticker>() const { return StockPositionRecordV5_PKey::ticker{m_ticker}; }
    template<> inline const auto StockPositionRecordV5_PKey::get<StockPositionRecordV5_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto StockPositionRecordV5_PKey::get<StockPositionRecordV5_PKey::trade_date>() const { return StockPositionRecordV5_PKey::trade_date{m_trade_date}; }
    template<> inline const auto StockPositionRecordV5_PKey::get<StockPositionRecordV5_PKey::risk_session>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskSession>(m_risk_session));}
    template<> inline const auto StockPositionRecordV5_PKey::get<StockPositionRecordV5_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const StockPositionRecordV5_PKey& m) {
        o << "\"ticker\":{" << m.get<StockPositionRecordV5_PKey::ticker>() << "}";
        o << ",\"accnt\":\"" << m.get<StockPositionRecordV5_PKey::accnt>() << "\"";
        o << ",\"trade_date\":{" << m.get<StockPositionRecordV5_PKey::trade_date>() << "}";
        o << ",\"risk_session\":" << (int64_t)m.get<StockPositionRecordV5_PKey::risk_session>();
        o << ",\"client_firm\":\"" << m.get<StockPositionRecordV5_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const StockPositionRecordV5& m) {
        o << "\"_meta\":{" << m.get<StockPositionRecordV5::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<StockPositionRecordV5::pkey>() << "}";
        o << ",\"risk_server_code\":\"" << m.get<StockPositionRecordV5::risk_server_code>() << "\"";
        o << ",\"pri_agg_group\":\"" << m.get<StockPositionRecordV5::pri_agg_group>() << "\"";
        o << ",\"sec_agg_group\":\"" << m.get<StockPositionRecordV5::sec_agg_group>() << "\"";
        o << ",\"symbol_type\":" << (int64_t)m.get<StockPositionRecordV5::symbol_type>();
        o << ",\"tick_value\":" << m.get<StockPositionRecordV5::tick_value>();
        o << ",\"point_value\":" << m.get<StockPositionRecordV5::point_value>();
        o << ",\"point_currency\":" << (int64_t)m.get<StockPositionRecordV5::point_currency>();
        o << ",\"price_format\":" << (int64_t)m.get<StockPositionRecordV5::price_format>();
        o << ",\"stk_prc\":" << m.get<StockPositionRecordV5::stk_prc>();
        o << ",\"stk_bid\":" << m.get<StockPositionRecordV5::stk_bid>();
        o << ",\"stk_ask\":" << m.get<StockPositionRecordV5::stk_ask>();
        o << ",\"stk_mark\":" << m.get<StockPositionRecordV5::stk_mark>();
        o << ",\"stk_mark_err_codes\":" << (int64_t)m.get<StockPositionRecordV5::stk_mark_err_codes>();
        o << ",\"stk_mark_source\":" << (int64_t)m.get<StockPositionRecordV5::stk_mark_source>();
        o << ",\"stk_opn_mid_mark\":" << m.get<StockPositionRecordV5::stk_opn_mid_mark>();
        o << ",\"stk_opn_clr_mark\":" << m.get<StockPositionRecordV5::stk_opn_clr_mark>();
        o << ",\"stk_opn_pos_prv\":" << m.get<StockPositionRecordV5::stk_opn_pos_prv>();
        o << ",\"stk_opn_pos_clr\":" << m.get<StockPositionRecordV5::stk_opn_pos_clr>();
        o << ",\"stk_opn_pos\":" << m.get<StockPositionRecordV5::stk_opn_pos>();
        o << ",\"stk_opn_pos_src\":" << (int64_t)m.get<StockPositionRecordV5::stk_opn_pos_src>();
        o << ",\"sh_bot\":" << m.get<StockPositionRecordV5::sh_bot>();
        o << ",\"sh_sld\":" << m.get<StockPositionRecordV5::sh_sld>();
        o << ",\"sh_sld_shrt\":" << m.get<StockPositionRecordV5::sh_sld_shrt>();
        o << ",\"sh_bot_hdg\":" << m.get<StockPositionRecordV5::sh_bot_hdg>();
        o << ",\"sh_sld_hdg\":" << m.get<StockPositionRecordV5::sh_sld_hdg>();
        o << ",\"sh_bot_trh\":" << m.get<StockPositionRecordV5::sh_bot_trh>();
        o << ",\"sh_sld_trh\":" << m.get<StockPositionRecordV5::sh_sld_trh>();
        o << ",\"sh_bot_opn\":" << m.get<StockPositionRecordV5::sh_bot_opn>();
        o << ",\"sh_sld_opn\":" << m.get<StockPositionRecordV5::sh_sld_opn>();
        o << ",\"sh_bot_trd\":" << m.get<StockPositionRecordV5::sh_bot_trd>();
        o << ",\"sh_sld_trd\":" << m.get<StockPositionRecordV5::sh_sld_trd>();
        o << ",\"stk_mny_bot\":" << m.get<StockPositionRecordV5::stk_mny_bot>();
        o << ",\"stk_mny_sld\":" << m.get<StockPositionRecordV5::stk_mny_sld>();
        o << ",\"day_pnl\":" << m.get<StockPositionRecordV5::day_pnl>();
        o << ",\"opn_pnl_mid_mark\":" << m.get<StockPositionRecordV5::opn_pnl_mid_mark>();
        o << ",\"opn_pnl_clr_mark\":" << m.get<StockPositionRecordV5::opn_pnl_clr_mark>();
        o << ",\"ex_div_amt\":" << m.get<StockPositionRecordV5::ex_div_amt>();
        o << ",\"borrow_rate\":" << m.get<StockPositionRecordV5::borrow_rate>();
        o << ",\"beta\":" << m.get<StockPositionRecordV5::beta>();
        o << ",\"beta_source\":" << (int64_t)m.get<StockPositionRecordV5::beta_source>();
        o << ",\"margin_udn\":" << m.get<StockPositionRecordV5::margin_udn>();
        o << ",\"margin_uup\":" << m.get<StockPositionRecordV5::margin_uup>();
        o << ",\"num_executions\":" << m.get<StockPositionRecordV5::num_executions>();
        {
            std::time_t tt = m.get<StockPositionRecordV5::max_exec_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"max_exec_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<StockPositionRecordV5::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}