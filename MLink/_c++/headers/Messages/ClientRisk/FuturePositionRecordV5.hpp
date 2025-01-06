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

    #ifndef _agg_group__GUARD__
    #define _agg_group__GUARD__
    DECL_STRONG_TYPE(agg_group, string);
    #endif//_agg_group__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _underliers_per_cn__GUARD__
    #define _underliers_per_cn__GUARD__
    DECL_STRONG_TYPE(underliers_per_cn, int32);
    #endif//_underliers_per_cn__GUARD__

    #ifndef _underlier_type__UnderlierType__GUARD__
    #define _underlier_type__UnderlierType__GUARD__
    DECL_STRONG_TYPE(underlier_type__UnderlierType, spiderrock::protobuf::api::UnderlierType);
    #endif//_underlier_type__UnderlierType__GUARD__

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

    #ifndef _fut_prc__GUARD__
    #define _fut_prc__GUARD__
    DECL_STRONG_TYPE(fut_prc, double);
    #endif//_fut_prc__GUARD__

    #ifndef _fut_bid__GUARD__
    #define _fut_bid__GUARD__
    DECL_STRONG_TYPE(fut_bid, double);
    #endif//_fut_bid__GUARD__

    #ifndef _fut_ask__GUARD__
    #define _fut_ask__GUARD__
    DECL_STRONG_TYPE(fut_ask, double);
    #endif//_fut_ask__GUARD__

    #ifndef _fut_mark__GUARD__
    #define _fut_mark__GUARD__
    DECL_STRONG_TYPE(fut_mark, double);
    #endif//_fut_mark__GUARD__

    #ifndef _fut_mark_err_codes__GUARD__
    #define _fut_mark_err_codes__GUARD__
    DECL_STRONG_TYPE(fut_mark_err_codes, spiderrock::protobuf::api::MarkErrorCode);
    #endif//_fut_mark_err_codes__GUARD__

    #ifndef _fut_mark_source__GUARD__
    #define _fut_mark_source__GUARD__
    DECL_STRONG_TYPE(fut_mark_source, spiderrock::protobuf::api::UMarkSource);
    #endif//_fut_mark_source__GUARD__

    #ifndef _fut_opn_mid_mark__GUARD__
    #define _fut_opn_mid_mark__GUARD__
    DECL_STRONG_TYPE(fut_opn_mid_mark, double);
    #endif//_fut_opn_mid_mark__GUARD__

    #ifndef _fut_opn_clr_mark__GUARD__
    #define _fut_opn_clr_mark__GUARD__
    DECL_STRONG_TYPE(fut_opn_clr_mark, double);
    #endif//_fut_opn_clr_mark__GUARD__

    #ifndef _fut_opn_pos_prv__GUARD__
    #define _fut_opn_pos_prv__GUARD__
    DECL_STRONG_TYPE(fut_opn_pos_prv, int32);
    #endif//_fut_opn_pos_prv__GUARD__

    #ifndef _fut_opn_pos_clr__GUARD__
    #define _fut_opn_pos_clr__GUARD__
    DECL_STRONG_TYPE(fut_opn_pos_clr, int32);
    #endif//_fut_opn_pos_clr__GUARD__

    #ifndef _fut_opn_pos__GUARD__
    #define _fut_opn_pos__GUARD__
    DECL_STRONG_TYPE(fut_opn_pos, int32);
    #endif//_fut_opn_pos__GUARD__

    #ifndef _fut_opn_pos_src__GUARD__
    #define _fut_opn_pos_src__GUARD__
    DECL_STRONG_TYPE(fut_opn_pos_src, spiderrock::protobuf::api::PositionSource);
    #endif//_fut_opn_pos_src__GUARD__

    #ifndef _cn_bot__GUARD__
    #define _cn_bot__GUARD__
    DECL_STRONG_TYPE(cn_bot, int32);
    #endif//_cn_bot__GUARD__

    #ifndef _cn_sld__GUARD__
    #define _cn_sld__GUARD__
    DECL_STRONG_TYPE(cn_sld, int32);
    #endif//_cn_sld__GUARD__

    #ifndef _cn_bot_trd__GUARD__
    #define _cn_bot_trd__GUARD__
    DECL_STRONG_TYPE(cn_bot_trd, int32);
    #endif//_cn_bot_trd__GUARD__

    #ifndef _cn_sld_trd__GUARD__
    #define _cn_sld_trd__GUARD__
    DECL_STRONG_TYPE(cn_sld_trd, int32);
    #endif//_cn_sld_trd__GUARD__

    #ifndef _cn_bot_hdg__GUARD__
    #define _cn_bot_hdg__GUARD__
    DECL_STRONG_TYPE(cn_bot_hdg, int32);
    #endif//_cn_bot_hdg__GUARD__

    #ifndef _cn_sld_hdg__GUARD__
    #define _cn_sld_hdg__GUARD__
    DECL_STRONG_TYPE(cn_sld_hdg, int32);
    #endif//_cn_sld_hdg__GUARD__

    #ifndef _cn_bot_trh__GUARD__
    #define _cn_bot_trh__GUARD__
    DECL_STRONG_TYPE(cn_bot_trh, int32);
    #endif//_cn_bot_trh__GUARD__

    #ifndef _cn_sld_trh__GUARD__
    #define _cn_sld_trh__GUARD__
    DECL_STRONG_TYPE(cn_sld_trh, int32);
    #endif//_cn_sld_trh__GUARD__

    #ifndef _cn_bot_opn__GUARD__
    #define _cn_bot_opn__GUARD__
    DECL_STRONG_TYPE(cn_bot_opn, int32);
    #endif//_cn_bot_opn__GUARD__

    #ifndef _cn_sld_opn__GUARD__
    #define _cn_sld_opn__GUARD__
    DECL_STRONG_TYPE(cn_sld_opn, int32);
    #endif//_cn_sld_opn__GUARD__

    #ifndef _cn_opened__GUARD__
    #define _cn_opened__GUARD__
    DECL_STRONG_TYPE(cn_opened, int32);
    #endif//_cn_opened__GUARD__

    #ifndef _cn_closed__GUARD__
    #define _cn_closed__GUARD__
    DECL_STRONG_TYPE(cn_closed, int32);
    #endif//_cn_closed__GUARD__

    #ifndef _fut_mny_bot__GUARD__
    #define _fut_mny_bot__GUARD__
    DECL_STRONG_TYPE(fut_mny_bot, double);
    #endif//_fut_mny_bot__GUARD__

    #ifndef _fut_mny_sld__GUARD__
    #define _fut_mny_sld__GUARD__
    DECL_STRONG_TYPE(fut_mny_sld, double);
    #endif//_fut_mny_sld__GUARD__

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

    #ifndef _beta__GUARD__
    #define _beta__GUARD__
    DECL_STRONG_TYPE(beta, float);
    #endif//_beta__GUARD__

    #ifndef _beta_source__GUARD__
    #define _beta_source__GUARD__
    DECL_STRONG_TYPE(beta_source, spiderrock::protobuf::api::BetaSource);
    #endif//_beta_source__GUARD__

    #ifndef _days__GUARD__
    #define _days__GUARD__
    DECL_STRONG_TYPE(days, int32);
    #endif//_days__GUARD__

    #ifndef _rate__float__GUARD__
    #define _rate__float__GUARD__
    DECL_STRONG_TYPE(rate__float, float);
    #endif//_rate__float__GUARD__

    #ifndef _years__float__GUARD__
    #define _years__float__GUARD__
    DECL_STRONG_TYPE(years__float, float);
    #endif//_years__float__GUARD__

    #ifndef _rh__GUARD__
    #define _rh__GUARD__
    DECL_STRONG_TYPE(rh, float);
    #endif//_rh__GUARD__

    #ifndef _ve__GUARD__
    #define _ve__GUARD__
    DECL_STRONG_TYPE(ve, float);
    #endif//_ve__GUARD__

    #ifndef _rate_pr__GUARD__
    #define _rate_pr__GUARD__
    DECL_STRONG_TYPE(rate_pr, float);
    #endif//_rate_pr__GUARD__

    #ifndef _years_pr__GUARD__
    #define _years_pr__GUARD__
    DECL_STRONG_TYPE(years_pr, float);
    #endif//_years_pr__GUARD__

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

    #ifndef _fkey__GUARD__
    #define _fkey__GUARD__
    DECL_STRONG_TYPE(fkey, ExpiryKey);
    #endif//_fkey__GUARD__

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

    
    class FuturePositionRecordV5_PKey {
        public:
        //using statements for all types used in this class
        using fkey = spiderrock::protobuf::api::fkey;
        using accnt = spiderrock::protobuf::api::accnt;
        using trade_date = spiderrock::protobuf::api::trade_date;
        using risk_session = spiderrock::protobuf::api::risk_session;
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        fkey m_fkey{};
        accnt m_accnt{};
        trade_date m_trade_date{};
        risk_session m_risk_session{};
        client_firm m_client_firm{};

        public:
		fkey get_fkey() const {
            return m_fkey;
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
        void set_fkey(const fkey& value)  {
            m_fkey = value;
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to FuturePositionRecordV5_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to FuturePositionRecordV5_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const fkey & value) { set_fkey(value); }
        void set(const accnt & value) { set_accnt(value); }
        void set(const trade_date & value) { set_trade_date(value); }
        void set(const risk_session & value) { set_risk_session(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        FuturePositionRecordV5_PKey() {}

        virtual ~FuturePositionRecordV5_PKey() {
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
        bool IncludeFkey() const {
            return (m_fkey.ByteSizeLong() > 0);
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
            if ( IncludeFkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_fkey;
                m_fkey.setCodecExpiryKey(expiryKeyLayout_fkey);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(10,expiryKeyLayout_fkey);
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
            if ( IncludeFkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_fkey;
                m_fkey.setCodecExpiryKey(expiryKeyLayout_fkey);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 10, expiryKeyLayout_fkey);
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
                    case 10: {auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                        m_fkey.setFromCodec(expiryKey);
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
    

    class FuturePositionRecordV5 {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::FuturePositionRecordV5_PKey;
        using risk_server_code = spiderrock::protobuf::api::risk_server_code;
        using agg_group = spiderrock::protobuf::api::agg_group;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using underliers_per_cn = spiderrock::protobuf::api::underliers_per_cn;
        using underlier_type = spiderrock::protobuf::api::underlier_type__UnderlierType;
        using tick_value = spiderrock::protobuf::api::tick_value;
        using point_value = spiderrock::protobuf::api::point_value__float;
        using point_currency = spiderrock::protobuf::api::point_currency;
        using price_format = spiderrock::protobuf::api::price_format;
        using fut_prc = spiderrock::protobuf::api::fut_prc;
        using fut_bid = spiderrock::protobuf::api::fut_bid;
        using fut_ask = spiderrock::protobuf::api::fut_ask;
        using fut_mark = spiderrock::protobuf::api::fut_mark;
        using fut_mark_err_codes = spiderrock::protobuf::api::fut_mark_err_codes;
        using fut_mark_source = spiderrock::protobuf::api::fut_mark_source;
        using fut_opn_mid_mark = spiderrock::protobuf::api::fut_opn_mid_mark;
        using fut_opn_clr_mark = spiderrock::protobuf::api::fut_opn_clr_mark;
        using fut_opn_pos_prv = spiderrock::protobuf::api::fut_opn_pos_prv;
        using fut_opn_pos_clr = spiderrock::protobuf::api::fut_opn_pos_clr;
        using fut_opn_pos = spiderrock::protobuf::api::fut_opn_pos;
        using fut_opn_pos_src = spiderrock::protobuf::api::fut_opn_pos_src;
        using cn_bot = spiderrock::protobuf::api::cn_bot;
        using cn_sld = spiderrock::protobuf::api::cn_sld;
        using cn_bot_trd = spiderrock::protobuf::api::cn_bot_trd;
        using cn_sld_trd = spiderrock::protobuf::api::cn_sld_trd;
        using cn_bot_hdg = spiderrock::protobuf::api::cn_bot_hdg;
        using cn_sld_hdg = spiderrock::protobuf::api::cn_sld_hdg;
        using cn_bot_trh = spiderrock::protobuf::api::cn_bot_trh;
        using cn_sld_trh = spiderrock::protobuf::api::cn_sld_trh;
        using cn_bot_opn = spiderrock::protobuf::api::cn_bot_opn;
        using cn_sld_opn = spiderrock::protobuf::api::cn_sld_opn;
        using cn_opened = spiderrock::protobuf::api::cn_opened;
        using cn_closed = spiderrock::protobuf::api::cn_closed;
        using fut_mny_bot = spiderrock::protobuf::api::fut_mny_bot;
        using fut_mny_sld = spiderrock::protobuf::api::fut_mny_sld;
        using day_pnl = spiderrock::protobuf::api::day_pnl;
        using opn_pnl_mid_mark = spiderrock::protobuf::api::opn_pnl_mid_mark;
        using opn_pnl_clr_mark = spiderrock::protobuf::api::opn_pnl_clr_mark;
        using beta = spiderrock::protobuf::api::beta;
        using beta_source = spiderrock::protobuf::api::beta_source;
        using days = spiderrock::protobuf::api::days;
        using rate = spiderrock::protobuf::api::rate__float;
        using years = spiderrock::protobuf::api::years__float;
        using rh = spiderrock::protobuf::api::rh;
        using ve = spiderrock::protobuf::api::ve;
        using rate_pr = spiderrock::protobuf::api::rate_pr;
        using years_pr = spiderrock::protobuf::api::years_pr;
        using margin_udn = spiderrock::protobuf::api::margin_udn;
        using margin_uup = spiderrock::protobuf::api::margin_uup;
        using num_executions = spiderrock::protobuf::api::num_executions;
        using max_exec_dttm = spiderrock::protobuf::api::max_exec_dttm;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        risk_server_code m_risk_server_code{};
        agg_group m_agg_group{};
        ticker m_ticker{};
        underliers_per_cn m_underliers_per_cn{};
        underlier_type m_underlier_type{};
        tick_value m_tick_value{};
        point_value m_point_value{};
        point_currency m_point_currency{};
        price_format m_price_format{};
        fut_prc m_fut_prc{};
        fut_bid m_fut_bid{};
        fut_ask m_fut_ask{};
        fut_mark m_fut_mark{};
        fut_mark_err_codes m_fut_mark_err_codes{};
        fut_mark_source m_fut_mark_source{};
        fut_opn_mid_mark m_fut_opn_mid_mark{};
        fut_opn_clr_mark m_fut_opn_clr_mark{};
        fut_opn_pos_prv m_fut_opn_pos_prv{};
        fut_opn_pos_clr m_fut_opn_pos_clr{};
        fut_opn_pos m_fut_opn_pos{};
        fut_opn_pos_src m_fut_opn_pos_src{};
        cn_bot m_cn_bot{};
        cn_sld m_cn_sld{};
        cn_bot_trd m_cn_bot_trd{};
        cn_sld_trd m_cn_sld_trd{};
        cn_bot_hdg m_cn_bot_hdg{};
        cn_sld_hdg m_cn_sld_hdg{};
        cn_bot_trh m_cn_bot_trh{};
        cn_sld_trh m_cn_sld_trh{};
        cn_bot_opn m_cn_bot_opn{};
        cn_sld_opn m_cn_sld_opn{};
        cn_opened m_cn_opened{};
        cn_closed m_cn_closed{};
        fut_mny_bot m_fut_mny_bot{};
        fut_mny_sld m_fut_mny_sld{};
        day_pnl m_day_pnl{};
        opn_pnl_mid_mark m_opn_pnl_mid_mark{};
        opn_pnl_clr_mark m_opn_pnl_clr_mark{};
        beta m_beta{};
        beta_source m_beta_source{};
        days m_days{};
        rate m_rate{};
        years m_years{};
        rh m_rh{};
        ve m_ve{};
        rate_pr m_rate_pr{};
        years_pr m_years_pr{};
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
        agg_group get_agg_group() const {
            return m_agg_group;
        }		
        ticker get_ticker() const {
            return m_ticker;
        }		
        underliers_per_cn get_underliers_per_cn() const {
            return m_underliers_per_cn;
        }		
        underlier_type get_underlier_type() const {
            return m_underlier_type;
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
        fut_prc get_fut_prc() const {
            return m_fut_prc;
        }		
        fut_bid get_fut_bid() const {
            return m_fut_bid;
        }		
        fut_ask get_fut_ask() const {
            return m_fut_ask;
        }		
        fut_mark get_fut_mark() const {
            return m_fut_mark;
        }		
        fut_mark_err_codes get_fut_mark_err_codes() const {
            return m_fut_mark_err_codes;
        }		
        fut_mark_source get_fut_mark_source() const {
            return m_fut_mark_source;
        }		
        fut_opn_mid_mark get_fut_opn_mid_mark() const {
            return m_fut_opn_mid_mark;
        }		
        fut_opn_clr_mark get_fut_opn_clr_mark() const {
            return m_fut_opn_clr_mark;
        }		
        fut_opn_pos_prv get_fut_opn_pos_prv() const {
            return m_fut_opn_pos_prv;
        }		
        fut_opn_pos_clr get_fut_opn_pos_clr() const {
            return m_fut_opn_pos_clr;
        }		
        fut_opn_pos get_fut_opn_pos() const {
            return m_fut_opn_pos;
        }		
        fut_opn_pos_src get_fut_opn_pos_src() const {
            return m_fut_opn_pos_src;
        }		
        cn_bot get_cn_bot() const {
            return m_cn_bot;
        }		
        cn_sld get_cn_sld() const {
            return m_cn_sld;
        }		
        cn_bot_trd get_cn_bot_trd() const {
            return m_cn_bot_trd;
        }		
        cn_sld_trd get_cn_sld_trd() const {
            return m_cn_sld_trd;
        }		
        cn_bot_hdg get_cn_bot_hdg() const {
            return m_cn_bot_hdg;
        }		
        cn_sld_hdg get_cn_sld_hdg() const {
            return m_cn_sld_hdg;
        }		
        cn_bot_trh get_cn_bot_trh() const {
            return m_cn_bot_trh;
        }		
        cn_sld_trh get_cn_sld_trh() const {
            return m_cn_sld_trh;
        }		
        cn_bot_opn get_cn_bot_opn() const {
            return m_cn_bot_opn;
        }		
        cn_sld_opn get_cn_sld_opn() const {
            return m_cn_sld_opn;
        }		
        cn_opened get_cn_opened() const {
            return m_cn_opened;
        }		
        cn_closed get_cn_closed() const {
            return m_cn_closed;
        }		
        fut_mny_bot get_fut_mny_bot() const {
            return m_fut_mny_bot;
        }		
        fut_mny_sld get_fut_mny_sld() const {
            return m_fut_mny_sld;
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
        beta get_beta() const {
            return m_beta;
        }		
        beta_source get_beta_source() const {
            return m_beta_source;
        }		
        days get_days() const {
            return m_days;
        }		
        rate get_rate() const {
            return m_rate;
        }		
        years get_years() const {
            return m_years;
        }		
        rh get_rh() const {
            return m_rh;
        }		
        ve get_ve() const {
            return m_ve;
        }		
        rate_pr get_rate_pr() const {
            return m_rate_pr;
        }		
        years_pr get_years_pr() const {
            return m_years_pr;
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
        void set_agg_group(const agg_group& value)  {
            m_agg_group = value;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_underliers_per_cn(const underliers_per_cn& value)  {
            m_underliers_per_cn = value;
        }
        void set_underlier_type(const underlier_type& value)  {
            m_underlier_type = value;
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
        void set_fut_prc(const fut_prc& value)  {
            m_fut_prc = value;
        }
        void set_fut_bid(const fut_bid& value)  {
            m_fut_bid = value;
        }
        void set_fut_ask(const fut_ask& value)  {
            m_fut_ask = value;
        }
        void set_fut_mark(const fut_mark& value)  {
            m_fut_mark = value;
        }
        void set_fut_mark_err_codes(const fut_mark_err_codes& value)  {
            m_fut_mark_err_codes = value;
        }
        void set_fut_mark_source(const fut_mark_source& value)  {
            m_fut_mark_source = value;
        }
        void set_fut_opn_mid_mark(const fut_opn_mid_mark& value)  {
            m_fut_opn_mid_mark = value;
        }
        void set_fut_opn_clr_mark(const fut_opn_clr_mark& value)  {
            m_fut_opn_clr_mark = value;
        }
        void set_fut_opn_pos_prv(const fut_opn_pos_prv& value)  {
            m_fut_opn_pos_prv = value;
        }
        void set_fut_opn_pos_clr(const fut_opn_pos_clr& value)  {
            m_fut_opn_pos_clr = value;
        }
        void set_fut_opn_pos(const fut_opn_pos& value)  {
            m_fut_opn_pos = value;
        }
        void set_fut_opn_pos_src(const fut_opn_pos_src& value)  {
            m_fut_opn_pos_src = value;
        }
        void set_cn_bot(const cn_bot& value)  {
            m_cn_bot = value;
        }
        void set_cn_sld(const cn_sld& value)  {
            m_cn_sld = value;
        }
        void set_cn_bot_trd(const cn_bot_trd& value)  {
            m_cn_bot_trd = value;
        }
        void set_cn_sld_trd(const cn_sld_trd& value)  {
            m_cn_sld_trd = value;
        }
        void set_cn_bot_hdg(const cn_bot_hdg& value)  {
            m_cn_bot_hdg = value;
        }
        void set_cn_sld_hdg(const cn_sld_hdg& value)  {
            m_cn_sld_hdg = value;
        }
        void set_cn_bot_trh(const cn_bot_trh& value)  {
            m_cn_bot_trh = value;
        }
        void set_cn_sld_trh(const cn_sld_trh& value)  {
            m_cn_sld_trh = value;
        }
        void set_cn_bot_opn(const cn_bot_opn& value)  {
            m_cn_bot_opn = value;
        }
        void set_cn_sld_opn(const cn_sld_opn& value)  {
            m_cn_sld_opn = value;
        }
        void set_cn_opened(const cn_opened& value)  {
            m_cn_opened = value;
        }
        void set_cn_closed(const cn_closed& value)  {
            m_cn_closed = value;
        }
        void set_fut_mny_bot(const fut_mny_bot& value)  {
            m_fut_mny_bot = value;
        }
        void set_fut_mny_sld(const fut_mny_sld& value)  {
            m_fut_mny_sld = value;
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
        void set_beta(const beta& value)  {
            m_beta = value;
        }
        void set_beta_source(const beta_source& value)  {
            m_beta_source = value;
        }
        void set_days(const days& value)  {
            m_days = value;
        }
        void set_rate(const rate& value)  {
            m_rate = value;
        }
        void set_years(const years& value)  {
            m_years = value;
        }
        void set_rh(const rh& value)  {
            m_rh = value;
        }
        void set_ve(const ve& value)  {
            m_ve = value;
        }
        void set_rate_pr(const rate_pr& value)  {
            m_rate_pr = value;
        }
        void set_years_pr(const years_pr& value)  {
            m_years_pr = value;
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to FuturePositionRecordV5::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const agg_group & value) {
            set_agg_group(value);
        }
        void set(const ticker & value) {
            set_ticker(value);
        }
        void set(const underliers_per_cn & value) {
            set_underliers_per_cn(value);
        }
        void set(const underlier_type & value) {
            set_underlier_type(value);
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
        void set(const fut_prc & value) {
            set_fut_prc(value);
        }
        void set(const fut_bid & value) {
            set_fut_bid(value);
        }
        void set(const fut_ask & value) {
            set_fut_ask(value);
        }
        void set(const fut_mark & value) {
            set_fut_mark(value);
        }
        void set(const fut_mark_err_codes & value) {
            set_fut_mark_err_codes(value);
        }
        void set(const fut_mark_source & value) {
            set_fut_mark_source(value);
        }
        void set(const fut_opn_mid_mark & value) {
            set_fut_opn_mid_mark(value);
        }
        void set(const fut_opn_clr_mark & value) {
            set_fut_opn_clr_mark(value);
        }
        void set(const fut_opn_pos_prv & value) {
            set_fut_opn_pos_prv(value);
        }
        void set(const fut_opn_pos_clr & value) {
            set_fut_opn_pos_clr(value);
        }
        void set(const fut_opn_pos & value) {
            set_fut_opn_pos(value);
        }
        void set(const fut_opn_pos_src & value) {
            set_fut_opn_pos_src(value);
        }
        void set(const cn_bot & value) {
            set_cn_bot(value);
        }
        void set(const cn_sld & value) {
            set_cn_sld(value);
        }
        void set(const cn_bot_trd & value) {
            set_cn_bot_trd(value);
        }
        void set(const cn_sld_trd & value) {
            set_cn_sld_trd(value);
        }
        void set(const cn_bot_hdg & value) {
            set_cn_bot_hdg(value);
        }
        void set(const cn_sld_hdg & value) {
            set_cn_sld_hdg(value);
        }
        void set(const cn_bot_trh & value) {
            set_cn_bot_trh(value);
        }
        void set(const cn_sld_trh & value) {
            set_cn_sld_trh(value);
        }
        void set(const cn_bot_opn & value) {
            set_cn_bot_opn(value);
        }
        void set(const cn_sld_opn & value) {
            set_cn_sld_opn(value);
        }
        void set(const cn_opened & value) {
            set_cn_opened(value);
        }
        void set(const cn_closed & value) {
            set_cn_closed(value);
        }
        void set(const fut_mny_bot & value) {
            set_fut_mny_bot(value);
        }
        void set(const fut_mny_sld & value) {
            set_fut_mny_sld(value);
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
        void set(const beta & value) {
            set_beta(value);
        }
        void set(const beta_source & value) {
            set_beta_source(value);
        }
        void set(const days & value) {
            set_days(value);
        }
        void set(const rate & value) {
            set_rate(value);
        }
        void set(const years & value) {
            set_years(value);
        }
        void set(const rh & value) {
            set_rh(value);
        }
        void set(const ve & value) {
            set_ve(value);
        }
        void set(const rate_pr & value) {
            set_rate_pr(value);
        }
        void set(const years_pr & value) {
            set_years_pr(value);
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

        void set(const FuturePositionRecordV5 & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_risk_server_code);
            set(value.m_agg_group);
            set(value.m_ticker);
            set(value.m_underliers_per_cn);
            set(value.m_underlier_type);
            set(value.m_tick_value);
            set(value.m_point_value);
            set(value.m_point_currency);
            set(value.m_price_format);
            set(value.m_fut_prc);
            set(value.m_fut_bid);
            set(value.m_fut_ask);
            set(value.m_fut_mark);
            set(value.m_fut_mark_err_codes);
            set(value.m_fut_mark_source);
            set(value.m_fut_opn_mid_mark);
            set(value.m_fut_opn_clr_mark);
            set(value.m_fut_opn_pos_prv);
            set(value.m_fut_opn_pos_clr);
            set(value.m_fut_opn_pos);
            set(value.m_fut_opn_pos_src);
            set(value.m_cn_bot);
            set(value.m_cn_sld);
            set(value.m_cn_bot_trd);
            set(value.m_cn_sld_trd);
            set(value.m_cn_bot_hdg);
            set(value.m_cn_sld_hdg);
            set(value.m_cn_bot_trh);
            set(value.m_cn_sld_trh);
            set(value.m_cn_bot_opn);
            set(value.m_cn_sld_opn);
            set(value.m_cn_opened);
            set(value.m_cn_closed);
            set(value.m_fut_mny_bot);
            set(value.m_fut_mny_sld);
            set(value.m_day_pnl);
            set(value.m_opn_pnl_mid_mark);
            set(value.m_opn_pnl_clr_mark);
            set(value.m_beta);
            set(value.m_beta_source);
            set(value.m_days);
            set(value.m_rate);
            set(value.m_years);
            set(value.m_rh);
            set(value.m_ve);
            set(value.m_rate_pr);
            set(value.m_years_pr);
            set(value.m_margin_udn);
            set(value.m_margin_uup);
            set(value.m_num_executions);
            set(value.m_max_exec_dttm);
            set(value.m_timestamp);
        }

        FuturePositionRecordV5() {
            m__meta.set_message_type("FuturePositionRecordV5");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4775, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4775, length);
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
             *this = FuturePositionRecordV5{};
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
        bool IncludeAggGroup() const {
            return !(m_agg_group.empty());
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeUnderliersPerCn() const {
            return !(m_underliers_per_cn == 0);
        }
        bool IncludeTickValue() const {
            return !(m_tick_value == 0.0);
        }
        bool IncludePointValue() const {
            return !(m_point_value == 0.0);
        }
        bool IncludeFutPrc() const {
            return !(m_fut_prc == 0.0);
        }
        bool IncludeFutBid() const {
            return !(m_fut_bid == 0.0);
        }
        bool IncludeFutAsk() const {
            return !(m_fut_ask == 0.0);
        }
        bool IncludeFutMark() const {
            return !(m_fut_mark == 0.0);
        }
        bool IncludeFutOpnMidMark() const {
            return !(m_fut_opn_mid_mark == 0.0);
        }
        bool IncludeFutOpnClrMark() const {
            return !(m_fut_opn_clr_mark == 0.0);
        }
        bool IncludeFutOpnPosPrv() const {
            return !(m_fut_opn_pos_prv == 0);
        }
        bool IncludeFutOpnPosClr() const {
            return !(m_fut_opn_pos_clr == 0);
        }
        bool IncludeFutOpnPos() const {
            return !(m_fut_opn_pos == 0);
        }
        bool IncludeCnBot() const {
            return !(m_cn_bot == 0);
        }
        bool IncludeCnSld() const {
            return !(m_cn_sld == 0);
        }
        bool IncludeCnBotTrd() const {
            return !(m_cn_bot_trd == 0);
        }
        bool IncludeCnSldTrd() const {
            return !(m_cn_sld_trd == 0);
        }
        bool IncludeCnBotHdg() const {
            return !(m_cn_bot_hdg == 0);
        }
        bool IncludeCnSldHdg() const {
            return !(m_cn_sld_hdg == 0);
        }
        bool IncludeCnBotTrh() const {
            return !(m_cn_bot_trh == 0);
        }
        bool IncludeCnSldTrh() const {
            return !(m_cn_sld_trh == 0);
        }
        bool IncludeCnBotOpn() const {
            return !(m_cn_bot_opn == 0);
        }
        bool IncludeCnSldOpn() const {
            return !(m_cn_sld_opn == 0);
        }
        bool IncludeCnOpened() const {
            return !(m_cn_opened == 0);
        }
        bool IncludeCnClosed() const {
            return !(m_cn_closed == 0);
        }
        bool IncludeFutMnyBot() const {
            return !(m_fut_mny_bot == 0.0);
        }
        bool IncludeFutMnySld() const {
            return !(m_fut_mny_sld == 0.0);
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
        bool IncludeBeta() const {
            return !(m_beta == 0.0);
        }
        bool IncludeDays() const {
            return !(m_days == 0);
        }
        bool IncludeRate() const {
            return !(m_rate == 0.0);
        }
        bool IncludeYears() const {
            return !(m_years == 0.0);
        }
        bool IncludeRh() const {
            return !(m_rh == 0.0);
        }
        bool IncludeVe() const {
            return !(m_ve == 0.0);
        }
        bool IncludeRatePr() const {
            return !(m_rate_pr == 0.0);
        }
        bool IncludeYearsPr() const {
            return !(m_years_pr == 0.0);
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
            if ( IncludeAggGroup()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_agg_group);
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(109, tickerKeyLayout_ticker);
            }
            if ( IncludeUnderliersPerCn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(112,m_underliers_per_cn);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>(m_underlier_type)));
            if ( IncludeTickValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_tick_value);
            }
            if ( IncludePointValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_point_value);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format)));
            if ( IncludeFutPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(130,m_fut_prc);
            }
            if ( IncludeFutBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(133,m_fut_bid);
            }
            if ( IncludeFutAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(136,m_fut_ask);
            }
            if ( IncludeFutMark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(139,m_fut_mark);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarkErrorCode>(m_fut_mark_err_codes)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UMarkSource>(m_fut_mark_source)));
            if ( IncludeFutOpnMidMark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(148,m_fut_opn_mid_mark);
            }
            if ( IncludeFutOpnClrMark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(151,m_fut_opn_clr_mark);
            }
            if ( IncludeFutOpnPosPrv()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(154,m_fut_opn_pos_prv);
            }
            if ( IncludeFutOpnPosClr()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(157,m_fut_opn_pos_clr);
            }
            if ( IncludeFutOpnPos()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(160,m_fut_opn_pos);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(163,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionSource>(m_fut_opn_pos_src)));
            if ( IncludeCnBot()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(166,m_cn_bot);
            }
            if ( IncludeCnSld()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(169,m_cn_sld);
            }
            if ( IncludeCnBotTrd()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(172,m_cn_bot_trd);
            }
            if ( IncludeCnSldTrd()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(175,m_cn_sld_trd);
            }
            if ( IncludeCnBotHdg()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(178,m_cn_bot_hdg);
            }
            if ( IncludeCnSldHdg()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(181,m_cn_sld_hdg);
            }
            if ( IncludeCnBotTrh()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(184,m_cn_bot_trh);
            }
            if ( IncludeCnSldTrh()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(187,m_cn_sld_trh);
            }
            if ( IncludeCnBotOpn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(190,m_cn_bot_opn);
            }
            if ( IncludeCnSldOpn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(193,m_cn_sld_opn);
            }
            if ( IncludeCnOpened()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(196,m_cn_opened);
            }
            if ( IncludeCnClosed()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(199,m_cn_closed);
            }
            if ( IncludeFutMnyBot()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(202,m_fut_mny_bot);
            }
            if ( IncludeFutMnySld()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(205,m_fut_mny_sld);
            }
            if ( IncludeDayPnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(208,m_day_pnl);
            }
            if ( IncludeOpnPnlMidMark()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(211,m_opn_pnl_mid_mark);
            }
            if ( IncludeOpnPnlClrMark()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(214,m_opn_pnl_clr_mark);
            }
            if ( IncludeBeta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(217,m_beta);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(220,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BetaSource>(m_beta_source)));
            if ( IncludeDays()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(223,m_days);
            }
            if ( IncludeRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(226,m_rate);
            }
            if ( IncludeYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(229,m_years);
            }
            if ( IncludeRh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(232,m_rh);
            }
            if ( IncludeVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(235,m_ve);
            }
            if ( IncludeRatePr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(238,m_rate_pr);
            }
            if ( IncludeYearsPr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(241,m_years_pr);
            }
            if ( IncludeMarginUdn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(251,m_margin_udn);
            }
            if ( IncludeMarginUup()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(252,m_margin_uup);
            }
            if ( IncludeNumExecutions()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(244,m_num_executions);
            }
            if ( IncludeMaxExecDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(247, m_max_exec_dttm);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(250, m_timestamp);
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
            if ( IncludeAggGroup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_agg_group));
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 109, tickerKeyLayout_ticker);
            }
            if ( IncludeUnderliersPerCn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,112,m_underliers_per_cn);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>(m_underlier_type)));
            if ( IncludeTickValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_tick_value);
            }
            if ( IncludePointValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_point_value);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format)));
            if ( IncludeFutPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,130,m_fut_prc);
            }
            if ( IncludeFutBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,133,m_fut_bid);
            }
            if ( IncludeFutAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,136,m_fut_ask);
            }
            if ( IncludeFutMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,139,m_fut_mark);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarkErrorCode>(m_fut_mark_err_codes)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UMarkSource>(m_fut_mark_source)));
            if ( IncludeFutOpnMidMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,148,m_fut_opn_mid_mark);
            }
            if ( IncludeFutOpnClrMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,151,m_fut_opn_clr_mark);
            }
            if ( IncludeFutOpnPosPrv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,154,m_fut_opn_pos_prv);
            }
            if ( IncludeFutOpnPosClr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,157,m_fut_opn_pos_clr);
            }
            if ( IncludeFutOpnPos()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,160,m_fut_opn_pos);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,163,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionSource>(m_fut_opn_pos_src)));
            if ( IncludeCnBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,166,m_cn_bot);
            }
            if ( IncludeCnSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,169,m_cn_sld);
            }
            if ( IncludeCnBotTrd()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,172,m_cn_bot_trd);
            }
            if ( IncludeCnSldTrd()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,175,m_cn_sld_trd);
            }
            if ( IncludeCnBotHdg()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,178,m_cn_bot_hdg);
            }
            if ( IncludeCnSldHdg()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,181,m_cn_sld_hdg);
            }
            if ( IncludeCnBotTrh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,184,m_cn_bot_trh);
            }
            if ( IncludeCnSldTrh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,187,m_cn_sld_trh);
            }
            if ( IncludeCnBotOpn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,190,m_cn_bot_opn);
            }
            if ( IncludeCnSldOpn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,193,m_cn_sld_opn);
            }
            if ( IncludeCnOpened()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,196,m_cn_opened);
            }
            if ( IncludeCnClosed()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,199,m_cn_closed);
            }
            if ( IncludeFutMnyBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,202,m_fut_mny_bot);
            }
            if ( IncludeFutMnySld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,205,m_fut_mny_sld);
            }
            if ( IncludeDayPnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,208,m_day_pnl);
            }
            if ( IncludeOpnPnlMidMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,211,m_opn_pnl_mid_mark);
            }
            if ( IncludeOpnPnlClrMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,214,m_opn_pnl_clr_mark);
            }
            if ( IncludeBeta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,217,m_beta);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,220,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BetaSource>(m_beta_source)));
            if ( IncludeDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,223,m_days);
            }
            if ( IncludeRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,226,m_rate);
            }
            if ( IncludeYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,229,m_years);
            }
            if ( IncludeRh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,232,m_rh);
            }
            if ( IncludeVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,235,m_ve);
            }
            if ( IncludeRatePr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,238,m_rate_pr);
            }
            if ( IncludeYearsPr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,241,m_years_pr);
            }
            if ( IncludeMarginUdn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,251,m_margin_udn);
            }
            if ( IncludeMarginUup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,252,m_margin_uup);
            }
            if ( IncludeNumExecutions()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,244,m_num_executions);
            }
            if ( IncludeMaxExecDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 247, m_max_exec_dttm);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 250, m_timestamp);
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
                            m_agg_group = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_underliers_per_cn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_underlier_type = static_cast<spiderrock::protobuf::api::UnderlierType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_tick_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_point_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_point_currency = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 127: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_format = static_cast<spiderrock::protobuf::api::PriceFormat>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fut_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fut_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fut_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fut_mark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 142: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_fut_mark_err_codes = static_cast<spiderrock::protobuf::api::MarkErrorCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 145: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_fut_mark_source = static_cast<spiderrock::protobuf::api::UMarkSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fut_opn_mid_mark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fut_opn_clr_mark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fut_opn_pos_prv = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fut_opn_pos_clr = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fut_opn_pos = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 163: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_fut_opn_pos_src = static_cast<spiderrock::protobuf::api::PositionSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cn_bot = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cn_sld = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cn_bot_trd = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cn_sld_trd = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cn_bot_hdg = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cn_sld_hdg = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cn_bot_trh = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cn_sld_trh = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cn_bot_opn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cn_sld_opn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cn_opened = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cn_closed = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fut_mny_bot = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fut_mny_sld = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_mid_mark = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_clr_mark = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
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
                    case 223: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_days = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 226: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 229: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 232: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 238: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rate_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 241: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_years_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 251: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_udn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 252: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_uup = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 244: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_executions = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 247: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_max_exec_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 250: {
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

    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::_meta>() const { return FuturePositionRecordV5::_meta{ m__meta}; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::pkey>() const { return FuturePositionRecordV5::pkey{ m_pkey}; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::risk_server_code>() const { return m_risk_server_code; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::agg_group>() const { return m_agg_group; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::ticker>() const { return FuturePositionRecordV5::ticker{ m_ticker}; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::underliers_per_cn>() const { return m_underliers_per_cn; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::underlier_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>( m_underlier_type)); }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::tick_value>() const { return m_tick_value; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::point_value>() const { return m_point_value; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::point_currency>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>( m_point_currency)); }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::price_format>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>( m_price_format)); }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::fut_prc>() const { return m_fut_prc; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::fut_bid>() const { return m_fut_bid; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::fut_ask>() const { return m_fut_ask; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::fut_mark>() const { return m_fut_mark; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::fut_mark_err_codes>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarkErrorCode>( m_fut_mark_err_codes)); }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::fut_mark_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UMarkSource>( m_fut_mark_source)); }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::fut_opn_mid_mark>() const { return m_fut_opn_mid_mark; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::fut_opn_clr_mark>() const { return m_fut_opn_clr_mark; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::fut_opn_pos_prv>() const { return m_fut_opn_pos_prv; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::fut_opn_pos_clr>() const { return m_fut_opn_pos_clr; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::fut_opn_pos>() const { return m_fut_opn_pos; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::fut_opn_pos_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionSource>( m_fut_opn_pos_src)); }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::cn_bot>() const { return m_cn_bot; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::cn_sld>() const { return m_cn_sld; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::cn_bot_trd>() const { return m_cn_bot_trd; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::cn_sld_trd>() const { return m_cn_sld_trd; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::cn_bot_hdg>() const { return m_cn_bot_hdg; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::cn_sld_hdg>() const { return m_cn_sld_hdg; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::cn_bot_trh>() const { return m_cn_bot_trh; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::cn_sld_trh>() const { return m_cn_sld_trh; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::cn_bot_opn>() const { return m_cn_bot_opn; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::cn_sld_opn>() const { return m_cn_sld_opn; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::cn_opened>() const { return m_cn_opened; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::cn_closed>() const { return m_cn_closed; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::fut_mny_bot>() const { return m_fut_mny_bot; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::fut_mny_sld>() const { return m_fut_mny_sld; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::day_pnl>() const { return m_day_pnl; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::opn_pnl_mid_mark>() const { return m_opn_pnl_mid_mark; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::opn_pnl_clr_mark>() const { return m_opn_pnl_clr_mark; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::beta>() const { return m_beta; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::beta_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BetaSource>( m_beta_source)); }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::days>() const { return m_days; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::rate>() const { return m_rate; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::years>() const { return m_years; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::rh>() const { return m_rh; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::ve>() const { return m_ve; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::rate_pr>() const { return m_rate_pr; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::years_pr>() const { return m_years_pr; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::margin_udn>() const { return m_margin_udn; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::margin_uup>() const { return m_margin_uup; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::num_executions>() const { return m_num_executions; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::max_exec_dttm>() const { return m_max_exec_dttm; }
    template<> inline const auto FuturePositionRecordV5::get<FuturePositionRecordV5::timestamp>() const { return m_timestamp; }
    template<> inline const auto FuturePositionRecordV5_PKey::get<FuturePositionRecordV5_PKey::fkey>() const { return FuturePositionRecordV5_PKey::fkey{m_fkey}; }
    template<> inline const auto FuturePositionRecordV5_PKey::get<FuturePositionRecordV5_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto FuturePositionRecordV5_PKey::get<FuturePositionRecordV5_PKey::trade_date>() const { return FuturePositionRecordV5_PKey::trade_date{m_trade_date}; }
    template<> inline const auto FuturePositionRecordV5_PKey::get<FuturePositionRecordV5_PKey::risk_session>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskSession>(m_risk_session));}
    template<> inline const auto FuturePositionRecordV5_PKey::get<FuturePositionRecordV5_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const FuturePositionRecordV5_PKey& m) {
        o << "\"fkey\":{" << m.get<FuturePositionRecordV5_PKey::fkey>() << "}";
        o << ",\"accnt\":\"" << m.get<FuturePositionRecordV5_PKey::accnt>() << "\"";
        o << ",\"trade_date\":{" << m.get<FuturePositionRecordV5_PKey::trade_date>() << "}";
        o << ",\"risk_session\":" << (int64_t)m.get<FuturePositionRecordV5_PKey::risk_session>();
        o << ",\"client_firm\":\"" << m.get<FuturePositionRecordV5_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const FuturePositionRecordV5& m) {
        o << "\"_meta\":{" << m.get<FuturePositionRecordV5::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<FuturePositionRecordV5::pkey>() << "}";
        o << ",\"risk_server_code\":\"" << m.get<FuturePositionRecordV5::risk_server_code>() << "\"";
        o << ",\"agg_group\":\"" << m.get<FuturePositionRecordV5::agg_group>() << "\"";
        o << ",\"ticker\":{" << m.get<FuturePositionRecordV5::ticker>() << "}";
        o << ",\"underliers_per_cn\":" << m.get<FuturePositionRecordV5::underliers_per_cn>();
        o << ",\"underlier_type\":" << (int64_t)m.get<FuturePositionRecordV5::underlier_type>();
        o << ",\"tick_value\":" << m.get<FuturePositionRecordV5::tick_value>();
        o << ",\"point_value\":" << m.get<FuturePositionRecordV5::point_value>();
        o << ",\"point_currency\":" << (int64_t)m.get<FuturePositionRecordV5::point_currency>();
        o << ",\"price_format\":" << (int64_t)m.get<FuturePositionRecordV5::price_format>();
        o << ",\"fut_prc\":" << m.get<FuturePositionRecordV5::fut_prc>();
        o << ",\"fut_bid\":" << m.get<FuturePositionRecordV5::fut_bid>();
        o << ",\"fut_ask\":" << m.get<FuturePositionRecordV5::fut_ask>();
        o << ",\"fut_mark\":" << m.get<FuturePositionRecordV5::fut_mark>();
        o << ",\"fut_mark_err_codes\":" << (int64_t)m.get<FuturePositionRecordV5::fut_mark_err_codes>();
        o << ",\"fut_mark_source\":" << (int64_t)m.get<FuturePositionRecordV5::fut_mark_source>();
        o << ",\"fut_opn_mid_mark\":" << m.get<FuturePositionRecordV5::fut_opn_mid_mark>();
        o << ",\"fut_opn_clr_mark\":" << m.get<FuturePositionRecordV5::fut_opn_clr_mark>();
        o << ",\"fut_opn_pos_prv\":" << m.get<FuturePositionRecordV5::fut_opn_pos_prv>();
        o << ",\"fut_opn_pos_clr\":" << m.get<FuturePositionRecordV5::fut_opn_pos_clr>();
        o << ",\"fut_opn_pos\":" << m.get<FuturePositionRecordV5::fut_opn_pos>();
        o << ",\"fut_opn_pos_src\":" << (int64_t)m.get<FuturePositionRecordV5::fut_opn_pos_src>();
        o << ",\"cn_bot\":" << m.get<FuturePositionRecordV5::cn_bot>();
        o << ",\"cn_sld\":" << m.get<FuturePositionRecordV5::cn_sld>();
        o << ",\"cn_bot_trd\":" << m.get<FuturePositionRecordV5::cn_bot_trd>();
        o << ",\"cn_sld_trd\":" << m.get<FuturePositionRecordV5::cn_sld_trd>();
        o << ",\"cn_bot_hdg\":" << m.get<FuturePositionRecordV5::cn_bot_hdg>();
        o << ",\"cn_sld_hdg\":" << m.get<FuturePositionRecordV5::cn_sld_hdg>();
        o << ",\"cn_bot_trh\":" << m.get<FuturePositionRecordV5::cn_bot_trh>();
        o << ",\"cn_sld_trh\":" << m.get<FuturePositionRecordV5::cn_sld_trh>();
        o << ",\"cn_bot_opn\":" << m.get<FuturePositionRecordV5::cn_bot_opn>();
        o << ",\"cn_sld_opn\":" << m.get<FuturePositionRecordV5::cn_sld_opn>();
        o << ",\"cn_opened\":" << m.get<FuturePositionRecordV5::cn_opened>();
        o << ",\"cn_closed\":" << m.get<FuturePositionRecordV5::cn_closed>();
        o << ",\"fut_mny_bot\":" << m.get<FuturePositionRecordV5::fut_mny_bot>();
        o << ",\"fut_mny_sld\":" << m.get<FuturePositionRecordV5::fut_mny_sld>();
        o << ",\"day_pnl\":" << m.get<FuturePositionRecordV5::day_pnl>();
        o << ",\"opn_pnl_mid_mark\":" << m.get<FuturePositionRecordV5::opn_pnl_mid_mark>();
        o << ",\"opn_pnl_clr_mark\":" << m.get<FuturePositionRecordV5::opn_pnl_clr_mark>();
        o << ",\"beta\":" << m.get<FuturePositionRecordV5::beta>();
        o << ",\"beta_source\":" << (int64_t)m.get<FuturePositionRecordV5::beta_source>();
        o << ",\"days\":" << m.get<FuturePositionRecordV5::days>();
        o << ",\"rate\":" << m.get<FuturePositionRecordV5::rate>();
        o << ",\"years\":" << m.get<FuturePositionRecordV5::years>();
        o << ",\"rh\":" << m.get<FuturePositionRecordV5::rh>();
        o << ",\"ve\":" << m.get<FuturePositionRecordV5::ve>();
        o << ",\"rate_pr\":" << m.get<FuturePositionRecordV5::rate_pr>();
        o << ",\"years_pr\":" << m.get<FuturePositionRecordV5::years_pr>();
        o << ",\"margin_udn\":" << m.get<FuturePositionRecordV5::margin_udn>();
        o << ",\"margin_uup\":" << m.get<FuturePositionRecordV5::margin_uup>();
        o << ",\"num_executions\":" << m.get<FuturePositionRecordV5::num_executions>();
        {
            std::time_t tt = m.get<FuturePositionRecordV5::max_exec_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"max_exec_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<FuturePositionRecordV5::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}