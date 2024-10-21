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

    #ifndef _is_disabled__GUARD__
    #define _is_disabled__GUARD__
    DECL_STRONG_TYPE(is_disabled, spiderrock::protobuf::api::YesNo);
    #endif//_is_disabled__GUARD__

    #ifndef _expiry_qty_avail__GUARD__
    #define _expiry_qty_avail__GUARD__
    DECL_STRONG_TYPE(expiry_qty_avail, int32);
    #endif//_expiry_qty_avail__GUARD__

    #ifndef _ticker_qty_avail__GUARD__
    #define _ticker_qty_avail__GUARD__
    DECL_STRONG_TYPE(ticker_qty_avail, int32);
    #endif//_ticker_qty_avail__GUARD__

    #ifndef _transact_fee__GUARD__
    #define _transact_fee__GUARD__
    DECL_STRONG_TYPE(transact_fee, double);
    #endif//_transact_fee__GUARD__

    #ifndef _stock_rate__GUARD__
    #define _stock_rate__GUARD__
    DECL_STRONG_TYPE(stock_rate, double);
    #endif//_stock_rate__GUARD__

    #ifndef _money_rate__GUARD__
    #define _money_rate__GUARD__
    DECL_STRONG_TYPE(money_rate, double);
    #endif//_money_rate__GUARD__

    #ifndef _ddiv_pv__double__GUARD__
    #define _ddiv_pv__double__GUARD__
    DECL_STRONG_TYPE(ddiv_pv__double, double);
    #endif//_ddiv_pv__double__GUARD__

    #ifndef _div_control__GUARD__
    #define _div_control__GUARD__
    DECL_STRONG_TYPE(div_control, spiderrock::protobuf::api::DivControl);
    #endif//_div_control__GUARD__

    #ifndef _respond_flex__GUARD__
    #define _respond_flex__GUARD__
    DECL_STRONG_TYPE(respond_flex, spiderrock::protobuf::api::YesNo);
    #endif//_respond_flex__GUARD__

    #ifndef _inc_fees_in_resp__GUARD__
    #define _inc_fees_in_resp__GUARD__
    DECL_STRONG_TYPE(inc_fees_in_resp, spiderrock::protobuf::api::YesNo);
    #endif//_inc_fees_in_resp__GUARD__

    #ifndef _round_rule__GUARD__
    #define _round_rule__GUARD__
    DECL_STRONG_TYPE(round_rule, spiderrock::protobuf::api::RoundRule);
    #endif//_round_rule__GUARD__

    #ifndef _open_expiry_qty__GUARD__
    #define _open_expiry_qty__GUARD__
    DECL_STRONG_TYPE(open_expiry_qty, int32);
    #endif//_open_expiry_qty__GUARD__

    #ifndef _open_ticker_qty__GUARD__
    #define _open_ticker_qty__GUARD__
    DECL_STRONG_TYPE(open_ticker_qty, int32);
    #endif//_open_ticker_qty__GUARD__

    #ifndef _cum_fill_qty__GUARD__
    #define _cum_fill_qty__GUARD__
    DECL_STRONG_TYPE(cum_fill_qty, int32);
    #endif//_cum_fill_qty__GUARD__

    #ifndef _cum_fill_money__GUARD__
    #define _cum_fill_money__GUARD__
    DECL_STRONG_TYPE(cum_fill_money, double);
    #endif//_cum_fill_money__GUARD__

    #ifndef _avg_fill_rate__GUARD__
    #define _avg_fill_rate__GUARD__
    DECL_STRONG_TYPE(avg_fill_rate, double);
    #endif//_avg_fill_rate__GUARD__

    #ifndef _is_div_control_disabled__GUARD__
    #define _is_div_control_disabled__GUARD__
    DECL_STRONG_TYPE(is_div_control_disabled, spiderrock::protobuf::api::YesNo);
    #endif//_is_div_control_disabled__GUARD__

    #ifndef _u_bid__double__GUARD__
    #define _u_bid__double__GUARD__
    DECL_STRONG_TYPE(u_bid__double, double);
    #endif//_u_bid__double__GUARD__

    #ifndef _u_ask__double__GUARD__
    #define _u_ask__double__GUARD__
    DECL_STRONG_TYPE(u_ask__double, double);
    #endif//_u_ask__double__GUARD__

    #ifndef _i_days__double__GUARD__
    #define _i_days__double__GUARD__
    DECL_STRONG_TYPE(i_days__double, double);
    #endif//_i_days__double__GUARD__

    #ifndef _i_years__GUARD__
    #define _i_years__GUARD__
    DECL_STRONG_TYPE(i_years, double);
    #endif//_i_years__GUARD__

    #ifndef _strike__double__GUARD__
    #define _strike__double__GUARD__
    DECL_STRONG_TYPE(strike__double, double);
    #endif//_strike__double__GUARD__

    #ifndef _rc_eex_prem__double__GUARD__
    #define _rc_eex_prem__double__GUARD__
    DECL_STRONG_TYPE(rc_eex_prem__double, double);
    #endif//_rc_eex_prem__double__GUARD__

    #ifndef _strike_pv__double__GUARD__
    #define _strike_pv__double__GUARD__
    DECL_STRONG_TYPE(strike_pv__double, double);
    #endif//_strike_pv__double__GUARD__

    #ifndef _stock_lend_pv__GUARD__
    #define _stock_lend_pv__GUARD__
    DECL_STRONG_TYPE(stock_lend_pv, double);
    #endif//_stock_lend_pv__GUARD__

    #ifndef _rev_con_prem__GUARD__
    #define _rev_con_prem__GUARD__
    DECL_STRONG_TYPE(rev_con_prem, double);
    #endif//_rev_con_prem__GUARD__

    #ifndef _eff_rev_con_limit__GUARD__
    #define _eff_rev_con_limit__GUARD__
    DECL_STRONG_TYPE(eff_rev_con_limit, double);
    #endif//_eff_rev_con_limit__GUARD__

    #ifndef _limit_price__GUARD__
    #define _limit_price__GUARD__
    DECL_STRONG_TYPE(limit_price, double);
    #endif//_limit_price__GUARD__

    #ifndef _eff_stock_lend_pv__GUARD__
    #define _eff_stock_lend_pv__GUARD__
    DECL_STRONG_TYPE(eff_stock_lend_pv, double);
    #endif//_eff_stock_lend_pv__GUARD__

    #ifndef _eff_stock_rate__GUARD__
    #define _eff_stock_rate__GUARD__
    DECL_STRONG_TYPE(eff_stock_rate, double);
    #endif//_eff_stock_rate__GUARD__

    #ifndef _modified_by__GUARD__
    #define _modified_by__GUARD__
    DECL_STRONG_TYPE(modified_by, string);
    #endif//_modified_by__GUARD__

    #ifndef _modified_in__GUARD__
    #define _modified_in__GUARD__
    DECL_STRONG_TYPE(modified_in, spiderrock::protobuf::api::SysEnvironment);
    #endif//_modified_in__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _root__GUARD__
    #define _root__GUARD__
    DECL_STRONG_TYPE(root, TickerKey);
    #endif//_root__GUARD__

    #ifndef _expiry__GUARD__
    #define _expiry__GUARD__
    DECL_STRONG_TYPE(expiry, DateKey);
    #endif//_expiry__GUARD__

    #ifndef _resp_side__GUARD__
    #define _resp_side__GUARD__
    DECL_STRONG_TYPE(resp_side, spiderrock::protobuf::api::BuySell);
    #endif//_resp_side__GUARD__

    
    class ResponderMarkupRC_PKey {
        public:
        //using statements for all types used in this class
        using accnt = spiderrock::protobuf::api::accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using root = spiderrock::protobuf::api::root;
        using expiry = spiderrock::protobuf::api::expiry;
        using resp_side = spiderrock::protobuf::api::resp_side;

        private:
        accnt m_accnt{};
        client_firm m_client_firm{};
        root m_root{};
        expiry m_expiry{};
        resp_side m_resp_side{};

        public:
        accnt get_accnt() const {
            return m_accnt;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
		root get_root() const {
            return m_root;
        }
		expiry get_expiry() const {
            return m_expiry;
        }
        resp_side get_resp_side() const {
            return m_resp_side;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_root(const root& value)  {
            m_root = value;
        }
        void set_expiry(const expiry& value)  {
            m_expiry = value;
        }
        void set_resp_side(const resp_side& value)  {
            m_resp_side = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ResponderMarkupRC_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to ResponderMarkupRC_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const client_firm & value) { set_client_firm(value); }
        void set(const root & value) { set_root(value); }
        void set(const expiry & value) { set_expiry(value); }
        void set(const resp_side & value) { set_resp_side(value); }


        ResponderMarkupRC_PKey() {}

        virtual ~ResponderMarkupRC_PKey() {
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
        bool IncludeAccnt() const {
            return !(m_accnt.empty());
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }
        bool IncludeRoot() const {
            return (m_root.ByteSizeLong() > 0);
        }
        bool IncludeExpiry() const {
            return (m_expiry.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_accnt);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_client_firm);
            }
            if ( IncludeRoot()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_root.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(12,tickerKeyLayout);
            }
            if ( IncludeExpiry()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(13, m_expiry.get_year(), m_expiry.get_month(), m_expiry.get_day());
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(14,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_resp_side)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_accnt));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_client_firm));
            }
            if ( IncludeRoot()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_root.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 12, tickerKeyLayout);
            }
            if ( IncludeExpiry()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,13, m_expiry.get_year(), m_expiry.get_month(), m_expiry.get_day());
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,14,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_resp_side)));
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
                    case 10: {m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 11: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 12: {
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_root.setFromCodec(tickerKey);
                        break;
                    }
                    case 13: {
                        auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                        m_expiry.set_year(dateKey.year());
                        m_expiry.set_month(dateKey.month());
                        m_expiry.set_day(dateKey.day());
                        break;
                    }
                    case 14: {m_resp_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class ResponderMarkupRC {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::ResponderMarkupRC_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using is_disabled = spiderrock::protobuf::api::is_disabled;
        using expiry_qty_avail = spiderrock::protobuf::api::expiry_qty_avail;
        using ticker_qty_avail = spiderrock::protobuf::api::ticker_qty_avail;
        using transact_fee = spiderrock::protobuf::api::transact_fee;
        using stock_rate = spiderrock::protobuf::api::stock_rate;
        using money_rate = spiderrock::protobuf::api::money_rate;
        using ddiv_pv = spiderrock::protobuf::api::ddiv_pv__double;
        using div_control = spiderrock::protobuf::api::div_control;
        using respond_flex = spiderrock::protobuf::api::respond_flex;
        using inc_fees_in_resp = spiderrock::protobuf::api::inc_fees_in_resp;
        using round_rule = spiderrock::protobuf::api::round_rule;
        using open_expiry_qty = spiderrock::protobuf::api::open_expiry_qty;
        using open_ticker_qty = spiderrock::protobuf::api::open_ticker_qty;
        using cum_fill_qty = spiderrock::protobuf::api::cum_fill_qty;
        using cum_fill_money = spiderrock::protobuf::api::cum_fill_money;
        using avg_fill_rate = spiderrock::protobuf::api::avg_fill_rate;
        using is_div_control_disabled = spiderrock::protobuf::api::is_div_control_disabled;
        using u_bid = spiderrock::protobuf::api::u_bid__double;
        using u_ask = spiderrock::protobuf::api::u_ask__double;
        using i_days = spiderrock::protobuf::api::i_days__double;
        using i_years = spiderrock::protobuf::api::i_years;
        using strike = spiderrock::protobuf::api::strike__double;
        using rc_eex_prem = spiderrock::protobuf::api::rc_eex_prem__double;
        using strike_pv = spiderrock::protobuf::api::strike_pv__double;
        using stock_lend_pv = spiderrock::protobuf::api::stock_lend_pv;
        using rev_con_prem = spiderrock::protobuf::api::rev_con_prem;
        using eff_rev_con_limit = spiderrock::protobuf::api::eff_rev_con_limit;
        using limit_price = spiderrock::protobuf::api::limit_price;
        using eff_stock_lend_pv = spiderrock::protobuf::api::eff_stock_lend_pv;
        using eff_stock_rate = spiderrock::protobuf::api::eff_stock_rate;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        is_disabled m_is_disabled{};
        expiry_qty_avail m_expiry_qty_avail{};
        ticker_qty_avail m_ticker_qty_avail{};
        transact_fee m_transact_fee{};
        stock_rate m_stock_rate{};
        money_rate m_money_rate{};
        ddiv_pv m_ddiv_pv{};
        div_control m_div_control{};
        respond_flex m_respond_flex{};
        inc_fees_in_resp m_inc_fees_in_resp{};
        round_rule m_round_rule{};
        open_expiry_qty m_open_expiry_qty{};
        open_ticker_qty m_open_ticker_qty{};
        cum_fill_qty m_cum_fill_qty{};
        cum_fill_money m_cum_fill_money{};
        avg_fill_rate m_avg_fill_rate{};
        is_div_control_disabled m_is_div_control_disabled{};
        u_bid m_u_bid{};
        u_ask m_u_ask{};
        i_days m_i_days{};
        i_years m_i_years{};
        strike m_strike{};
        rc_eex_prem m_rc_eex_prem{};
        strike_pv m_strike_pv{};
        stock_lend_pv m_stock_lend_pv{};
        rev_con_prem m_rev_con_prem{};
        eff_rev_con_limit m_eff_rev_con_limit{};
        limit_price m_limit_price{};
        eff_stock_lend_pv m_eff_stock_lend_pv{};
        eff_stock_rate m_eff_stock_rate{};
        modified_by m_modified_by{};
        modified_in m_modified_in{};
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
        is_disabled get_is_disabled() const {
            return m_is_disabled;
        }		
        expiry_qty_avail get_expiry_qty_avail() const {
            return m_expiry_qty_avail;
        }		
        ticker_qty_avail get_ticker_qty_avail() const {
            return m_ticker_qty_avail;
        }		
        transact_fee get_transact_fee() const {
            return m_transact_fee;
        }		
        stock_rate get_stock_rate() const {
            return m_stock_rate;
        }		
        money_rate get_money_rate() const {
            return m_money_rate;
        }		
        ddiv_pv get_ddiv_pv() const {
            return m_ddiv_pv;
        }		
        div_control get_div_control() const {
            return m_div_control;
        }		
        respond_flex get_respond_flex() const {
            return m_respond_flex;
        }		
        inc_fees_in_resp get_inc_fees_in_resp() const {
            return m_inc_fees_in_resp;
        }		
        round_rule get_round_rule() const {
            return m_round_rule;
        }		
        open_expiry_qty get_open_expiry_qty() const {
            return m_open_expiry_qty;
        }		
        open_ticker_qty get_open_ticker_qty() const {
            return m_open_ticker_qty;
        }		
        cum_fill_qty get_cum_fill_qty() const {
            return m_cum_fill_qty;
        }		
        cum_fill_money get_cum_fill_money() const {
            return m_cum_fill_money;
        }		
        avg_fill_rate get_avg_fill_rate() const {
            return m_avg_fill_rate;
        }		
        is_div_control_disabled get_is_div_control_disabled() const {
            return m_is_div_control_disabled;
        }		
        u_bid get_u_bid() const {
            return m_u_bid;
        }		
        u_ask get_u_ask() const {
            return m_u_ask;
        }		
        i_days get_i_days() const {
            return m_i_days;
        }		
        i_years get_i_years() const {
            return m_i_years;
        }		
        strike get_strike() const {
            return m_strike;
        }		
        rc_eex_prem get_rc_eex_prem() const {
            return m_rc_eex_prem;
        }		
        strike_pv get_strike_pv() const {
            return m_strike_pv;
        }		
        stock_lend_pv get_stock_lend_pv() const {
            return m_stock_lend_pv;
        }		
        rev_con_prem get_rev_con_prem() const {
            return m_rev_con_prem;
        }		
        eff_rev_con_limit get_eff_rev_con_limit() const {
            return m_eff_rev_con_limit;
        }		
        limit_price get_limit_price() const {
            return m_limit_price;
        }		
        eff_stock_lend_pv get_eff_stock_lend_pv() const {
            return m_eff_stock_lend_pv;
        }		
        eff_stock_rate get_eff_stock_rate() const {
            return m_eff_stock_rate;
        }		
        modified_by get_modified_by() const {
            return m_modified_by;
        }		
        modified_in get_modified_in() const {
            return m_modified_in;
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
        void set_is_disabled(const is_disabled& value)  {
            m_is_disabled = value;
        }
        void set_expiry_qty_avail(const expiry_qty_avail& value)  {
            m_expiry_qty_avail = value;
        }
        void set_ticker_qty_avail(const ticker_qty_avail& value)  {
            m_ticker_qty_avail = value;
        }
        void set_transact_fee(const transact_fee& value)  {
            m_transact_fee = value;
        }
        void set_stock_rate(const stock_rate& value)  {
            m_stock_rate = value;
        }
        void set_money_rate(const money_rate& value)  {
            m_money_rate = value;
        }
        void set_ddiv_pv(const ddiv_pv& value)  {
            m_ddiv_pv = value;
        }
        void set_div_control(const div_control& value)  {
            m_div_control = value;
        }
        void set_respond_flex(const respond_flex& value)  {
            m_respond_flex = value;
        }
        void set_inc_fees_in_resp(const inc_fees_in_resp& value)  {
            m_inc_fees_in_resp = value;
        }
        void set_round_rule(const round_rule& value)  {
            m_round_rule = value;
        }
        void set_open_expiry_qty(const open_expiry_qty& value)  {
            m_open_expiry_qty = value;
        }
        void set_open_ticker_qty(const open_ticker_qty& value)  {
            m_open_ticker_qty = value;
        }
        void set_cum_fill_qty(const cum_fill_qty& value)  {
            m_cum_fill_qty = value;
        }
        void set_cum_fill_money(const cum_fill_money& value)  {
            m_cum_fill_money = value;
        }
        void set_avg_fill_rate(const avg_fill_rate& value)  {
            m_avg_fill_rate = value;
        }
        void set_is_div_control_disabled(const is_div_control_disabled& value)  {
            m_is_div_control_disabled = value;
        }
        void set_u_bid(const u_bid& value)  {
            m_u_bid = value;
        }
        void set_u_ask(const u_ask& value)  {
            m_u_ask = value;
        }
        void set_i_days(const i_days& value)  {
            m_i_days = value;
        }
        void set_i_years(const i_years& value)  {
            m_i_years = value;
        }
        void set_strike(const strike& value)  {
            m_strike = value;
        }
        void set_rc_eex_prem(const rc_eex_prem& value)  {
            m_rc_eex_prem = value;
        }
        void set_strike_pv(const strike_pv& value)  {
            m_strike_pv = value;
        }
        void set_stock_lend_pv(const stock_lend_pv& value)  {
            m_stock_lend_pv = value;
        }
        void set_rev_con_prem(const rev_con_prem& value)  {
            m_rev_con_prem = value;
        }
        void set_eff_rev_con_limit(const eff_rev_con_limit& value)  {
            m_eff_rev_con_limit = value;
        }
        void set_limit_price(const limit_price& value)  {
            m_limit_price = value;
        }
        void set_eff_stock_lend_pv(const eff_stock_lend_pv& value)  {
            m_eff_stock_lend_pv = value;
        }
        void set_eff_stock_rate(const eff_stock_rate& value)  {
            m_eff_stock_rate = value;
        }
        void set_modified_by(const modified_by& value)  {
            m_modified_by = value;
        }
        void set_modified_in(const modified_in& value)  {
            m_modified_in = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ResponderMarkupRC::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const is_disabled & value) {
            set_is_disabled(value);
        }
        void set(const expiry_qty_avail & value) {
            set_expiry_qty_avail(value);
        }
        void set(const ticker_qty_avail & value) {
            set_ticker_qty_avail(value);
        }
        void set(const transact_fee & value) {
            set_transact_fee(value);
        }
        void set(const stock_rate & value) {
            set_stock_rate(value);
        }
        void set(const money_rate & value) {
            set_money_rate(value);
        }
        void set(const ddiv_pv & value) {
            set_ddiv_pv(value);
        }
        void set(const div_control & value) {
            set_div_control(value);
        }
        void set(const respond_flex & value) {
            set_respond_flex(value);
        }
        void set(const inc_fees_in_resp & value) {
            set_inc_fees_in_resp(value);
        }
        void set(const round_rule & value) {
            set_round_rule(value);
        }
        void set(const open_expiry_qty & value) {
            set_open_expiry_qty(value);
        }
        void set(const open_ticker_qty & value) {
            set_open_ticker_qty(value);
        }
        void set(const cum_fill_qty & value) {
            set_cum_fill_qty(value);
        }
        void set(const cum_fill_money & value) {
            set_cum_fill_money(value);
        }
        void set(const avg_fill_rate & value) {
            set_avg_fill_rate(value);
        }
        void set(const is_div_control_disabled & value) {
            set_is_div_control_disabled(value);
        }
        void set(const u_bid & value) {
            set_u_bid(value);
        }
        void set(const u_ask & value) {
            set_u_ask(value);
        }
        void set(const i_days & value) {
            set_i_days(value);
        }
        void set(const i_years & value) {
            set_i_years(value);
        }
        void set(const strike & value) {
            set_strike(value);
        }
        void set(const rc_eex_prem & value) {
            set_rc_eex_prem(value);
        }
        void set(const strike_pv & value) {
            set_strike_pv(value);
        }
        void set(const stock_lend_pv & value) {
            set_stock_lend_pv(value);
        }
        void set(const rev_con_prem & value) {
            set_rev_con_prem(value);
        }
        void set(const eff_rev_con_limit & value) {
            set_eff_rev_con_limit(value);
        }
        void set(const limit_price & value) {
            set_limit_price(value);
        }
        void set(const eff_stock_lend_pv & value) {
            set_eff_stock_lend_pv(value);
        }
        void set(const eff_stock_rate & value) {
            set_eff_stock_rate(value);
        }
        void set(const modified_by & value) {
            set_modified_by(value);
        }
        void set(const modified_in & value) {
            set_modified_in(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const ResponderMarkupRC & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_is_disabled);
            set(value.m_expiry_qty_avail);
            set(value.m_ticker_qty_avail);
            set(value.m_transact_fee);
            set(value.m_stock_rate);
            set(value.m_money_rate);
            set(value.m_ddiv_pv);
            set(value.m_div_control);
            set(value.m_respond_flex);
            set(value.m_inc_fees_in_resp);
            set(value.m_round_rule);
            set(value.m_open_expiry_qty);
            set(value.m_open_ticker_qty);
            set(value.m_cum_fill_qty);
            set(value.m_cum_fill_money);
            set(value.m_avg_fill_rate);
            set(value.m_is_div_control_disabled);
            set(value.m_u_bid);
            set(value.m_u_ask);
            set(value.m_i_days);
            set(value.m_i_years);
            set(value.m_strike);
            set(value.m_rc_eex_prem);
            set(value.m_strike_pv);
            set(value.m_stock_lend_pv);
            set(value.m_rev_con_prem);
            set(value.m_eff_rev_con_limit);
            set(value.m_limit_price);
            set(value.m_eff_stock_lend_pv);
            set(value.m_eff_stock_rate);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);
        }

        ResponderMarkupRC() {
            m__meta.set_message_type("ResponderMarkupRC");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2501, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2501, length);
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
             *this = ResponderMarkupRC{};
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
        bool IncludeExpiryQtyAvail() const {
            return !(m_expiry_qty_avail == 0);
        }
        bool IncludeTickerQtyAvail() const {
            return !(m_ticker_qty_avail == 0);
        }
        bool IncludeTransactFee() const {
            return !(m_transact_fee == 0.0);
        }
        bool IncludeStockRate() const {
            return !(m_stock_rate == 0.0);
        }
        bool IncludeMoneyRate() const {
            return !(m_money_rate == 0.0);
        }
        bool IncludeDdivPv() const {
            return !(m_ddiv_pv == 0.0);
        }
        bool IncludeOpenExpiryQty() const {
            return !(m_open_expiry_qty == 0);
        }
        bool IncludeOpenTickerQty() const {
            return !(m_open_ticker_qty == 0);
        }
        bool IncludeCumFillQty() const {
            return !(m_cum_fill_qty == 0);
        }
        bool IncludeCumFillMoney() const {
            return !(m_cum_fill_money == 0.0);
        }
        bool IncludeAvgFillRate() const {
            return !(m_avg_fill_rate == 0.0);
        }
        bool IncludeUBid() const {
            return !(m_u_bid == 0.0);
        }
        bool IncludeUAsk() const {
            return !(m_u_ask == 0.0);
        }
        bool IncludeIDays() const {
            return !(m_i_days == 0.0);
        }
        bool IncludeIYears() const {
            return !(m_i_years == 0.0);
        }
        bool IncludeStrike() const {
            return !(m_strike == 0.0);
        }
        bool IncludeRcEexPrem() const {
            return !(m_rc_eex_prem == 0.0);
        }
        bool IncludeStrikePv() const {
            return !(m_strike_pv == 0.0);
        }
        bool IncludeStockLendPv() const {
            return !(m_stock_lend_pv == 0.0);
        }
        bool IncludeRevConPrem() const {
            return !(m_rev_con_prem == 0.0);
        }
        bool IncludeEffRevConLimit() const {
            return !(m_eff_rev_con_limit == 0.0);
        }
        bool IncludeLimitPrice() const {
            return !(m_limit_price == 0.0);
        }
        bool IncludeEffStockLendPv() const {
            return !(m_eff_stock_lend_pv == 0.0);
        }
        bool IncludeEffStockRate() const {
            return !(m_eff_stock_rate == 0.0);
        }
        bool IncludeModifiedBy() const {
            return !(m_modified_by.empty());
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_disabled)));
            if ( IncludeExpiryQtyAvail()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(102,m_expiry_qty_avail);
            }
            if ( IncludeTickerQtyAvail()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(103,m_ticker_qty_avail);
            }
            if ( IncludeTransactFee()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(104,m_transact_fee);
            }
            if ( IncludeStockRate()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(105,m_stock_rate);
            }
            if ( IncludeMoneyRate()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(106,m_money_rate);
            }
            if ( IncludeDdivPv()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(107,m_ddiv_pv);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(108,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DivControl>(m_div_control)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_respond_flex)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(110,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_inc_fees_in_resp)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(111,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RoundRule>(m_round_rule)));
            if ( IncludeOpenExpiryQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(112,m_open_expiry_qty);
            }
            if ( IncludeOpenTickerQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(113,m_open_ticker_qty);
            }
            if ( IncludeCumFillQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(114,m_cum_fill_qty);
            }
            if ( IncludeCumFillMoney()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(115,m_cum_fill_money);
            }
            if ( IncludeAvgFillRate()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(116,m_avg_fill_rate);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(117,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_div_control_disabled)));
            if ( IncludeUBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(118,m_u_bid);
            }
            if ( IncludeUAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(119,m_u_ask);
            }
            if ( IncludeIDays()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(120,m_i_days);
            }
            if ( IncludeIYears()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(121,m_i_years);
            }
            if ( IncludeStrike()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(122,m_strike);
            }
            if ( IncludeRcEexPrem()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(123,m_rc_eex_prem);
            }
            if ( IncludeStrikePv()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(124,m_strike_pv);
            }
            if ( IncludeStockLendPv()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(125,m_stock_lend_pv);
            }
            if ( IncludeRevConPrem()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(126,m_rev_con_prem);
            }
            if ( IncludeEffRevConLimit()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(127,m_eff_rev_con_limit);
            }
            if ( IncludeLimitPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(128,m_limit_price);
            }
            if ( IncludeEffStockLendPv()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(129,m_eff_stock_lend_pv);
            }
            if ( IncludeEffStockRate()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(130,m_eff_stock_rate);
            }
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(131,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(132,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(133, m_timestamp);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_disabled)));
            if ( IncludeExpiryQtyAvail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,102,m_expiry_qty_avail);
            }
            if ( IncludeTickerQtyAvail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,103,m_ticker_qty_avail);
            }
            if ( IncludeTransactFee()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,104,m_transact_fee);
            }
            if ( IncludeStockRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,105,m_stock_rate);
            }
            if ( IncludeMoneyRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,106,m_money_rate);
            }
            if ( IncludeDdivPv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,107,m_ddiv_pv);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,108,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DivControl>(m_div_control)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_respond_flex)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,110,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_inc_fees_in_resp)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,111,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RoundRule>(m_round_rule)));
            if ( IncludeOpenExpiryQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,112,m_open_expiry_qty);
            }
            if ( IncludeOpenTickerQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,113,m_open_ticker_qty);
            }
            if ( IncludeCumFillQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,114,m_cum_fill_qty);
            }
            if ( IncludeCumFillMoney()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,115,m_cum_fill_money);
            }
            if ( IncludeAvgFillRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,116,m_avg_fill_rate);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,117,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_div_control_disabled)));
            if ( IncludeUBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,118,m_u_bid);
            }
            if ( IncludeUAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,119,m_u_ask);
            }
            if ( IncludeIDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,120,m_i_days);
            }
            if ( IncludeIYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,121,m_i_years);
            }
            if ( IncludeStrike()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,122,m_strike);
            }
            if ( IncludeRcEexPrem()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,123,m_rc_eex_prem);
            }
            if ( IncludeStrikePv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,124,m_strike_pv);
            }
            if ( IncludeStockLendPv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,125,m_stock_lend_pv);
            }
            if ( IncludeRevConPrem()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,126,m_rev_con_prem);
            }
            if ( IncludeEffRevConLimit()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,127,m_eff_rev_con_limit);
            }
            if ( IncludeLimitPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,128,m_limit_price);
            }
            if ( IncludeEffStockLendPv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,129,m_eff_stock_lend_pv);
            }
            if ( IncludeEffStockRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,130,m_eff_stock_rate);
            }
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,131,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,132,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 133, m_timestamp);
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
                    case 101: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_disabled = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 102: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_expiry_qty_avail = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ticker_qty_avail = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 104: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_transact_fee = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 105: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_stock_rate = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_money_rate = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 107: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ddiv_pv = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 108: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_div_control = static_cast<spiderrock::protobuf::api::DivControl>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_respond_flex = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 110: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_inc_fees_in_resp = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 111: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_round_rule = static_cast<spiderrock::protobuf::api::RoundRule>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_open_expiry_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 113: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_open_ticker_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 114: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_fill_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_cum_fill_money = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 116: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_avg_fill_rate = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 117: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_div_control_disabled = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 119: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 120: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_i_days = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_i_years = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 122: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_strike = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 123: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_rc_eex_prem = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_strike_pv = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 125: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_stock_lend_pv = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 126: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_rev_con_prem = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_eff_rev_con_limit = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 128: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_limit_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 129: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_eff_stock_lend_pv = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_eff_stock_rate = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 131: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 132: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 133: {
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

    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::_meta>() const { return ResponderMarkupRC::_meta{ m__meta}; }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::pkey>() const { return ResponderMarkupRC::pkey{ m_pkey}; }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::ticker>() const { return ResponderMarkupRC::ticker{ m_ticker}; }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::is_disabled>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_disabled)); }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::expiry_qty_avail>() const { return m_expiry_qty_avail; }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::ticker_qty_avail>() const { return m_ticker_qty_avail; }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::transact_fee>() const { return m_transact_fee; }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::stock_rate>() const { return m_stock_rate; }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::money_rate>() const { return m_money_rate; }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::ddiv_pv>() const { return m_ddiv_pv; }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::div_control>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DivControl>( m_div_control)); }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::respond_flex>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_respond_flex)); }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::inc_fees_in_resp>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_inc_fees_in_resp)); }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::round_rule>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RoundRule>( m_round_rule)); }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::open_expiry_qty>() const { return m_open_expiry_qty; }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::open_ticker_qty>() const { return m_open_ticker_qty; }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::cum_fill_qty>() const { return m_cum_fill_qty; }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::cum_fill_money>() const { return m_cum_fill_money; }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::avg_fill_rate>() const { return m_avg_fill_rate; }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::is_div_control_disabled>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_div_control_disabled)); }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::u_bid>() const { return m_u_bid; }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::u_ask>() const { return m_u_ask; }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::i_days>() const { return m_i_days; }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::i_years>() const { return m_i_years; }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::strike>() const { return m_strike; }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::rc_eex_prem>() const { return m_rc_eex_prem; }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::strike_pv>() const { return m_strike_pv; }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::stock_lend_pv>() const { return m_stock_lend_pv; }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::rev_con_prem>() const { return m_rev_con_prem; }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::eff_rev_con_limit>() const { return m_eff_rev_con_limit; }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::limit_price>() const { return m_limit_price; }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::eff_stock_lend_pv>() const { return m_eff_stock_lend_pv; }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::eff_stock_rate>() const { return m_eff_stock_rate; }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::modified_by>() const { return m_modified_by; }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto ResponderMarkupRC::get<ResponderMarkupRC::timestamp>() const { return m_timestamp; }
    template<> inline const auto ResponderMarkupRC_PKey::get<ResponderMarkupRC_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto ResponderMarkupRC_PKey::get<ResponderMarkupRC_PKey::client_firm>() const { return m_client_firm; }
    template<> inline const auto ResponderMarkupRC_PKey::get<ResponderMarkupRC_PKey::root>() const { return ResponderMarkupRC_PKey::root{m_root}; }
    template<> inline const auto ResponderMarkupRC_PKey::get<ResponderMarkupRC_PKey::expiry>() const { return ResponderMarkupRC_PKey::expiry{m_expiry}; }
    template<> inline const auto ResponderMarkupRC_PKey::get<ResponderMarkupRC_PKey::resp_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_resp_side));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const ResponderMarkupRC_PKey& m) {
        o << "\"accnt\":\"" << m.get<ResponderMarkupRC_PKey::accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<ResponderMarkupRC_PKey::client_firm>() << "\"";
        o << ",\"root\":{" << m.get<ResponderMarkupRC_PKey::root>() << "}";
        o << ",\"expiry\":{" << m.get<ResponderMarkupRC_PKey::expiry>() << "}";
        o << ",\"resp_side\":" << (int64_t)m.get<ResponderMarkupRC_PKey::resp_side>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const ResponderMarkupRC& m) {
        o << "\"_meta\":{" << m.get<ResponderMarkupRC::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<ResponderMarkupRC::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<ResponderMarkupRC::ticker>() << "}";
        o << ",\"is_disabled\":" << (int64_t)m.get<ResponderMarkupRC::is_disabled>();
        o << ",\"expiry_qty_avail\":" << m.get<ResponderMarkupRC::expiry_qty_avail>();
        o << ",\"ticker_qty_avail\":" << m.get<ResponderMarkupRC::ticker_qty_avail>();
        o << ",\"transact_fee\":" << m.get<ResponderMarkupRC::transact_fee>();
        o << ",\"stock_rate\":" << m.get<ResponderMarkupRC::stock_rate>();
        o << ",\"money_rate\":" << m.get<ResponderMarkupRC::money_rate>();
        o << ",\"ddiv_pv\":" << m.get<ResponderMarkupRC::ddiv_pv>();
        o << ",\"div_control\":" << (int64_t)m.get<ResponderMarkupRC::div_control>();
        o << ",\"respond_flex\":" << (int64_t)m.get<ResponderMarkupRC::respond_flex>();
        o << ",\"inc_fees_in_resp\":" << (int64_t)m.get<ResponderMarkupRC::inc_fees_in_resp>();
        o << ",\"round_rule\":" << (int64_t)m.get<ResponderMarkupRC::round_rule>();
        o << ",\"open_expiry_qty\":" << m.get<ResponderMarkupRC::open_expiry_qty>();
        o << ",\"open_ticker_qty\":" << m.get<ResponderMarkupRC::open_ticker_qty>();
        o << ",\"cum_fill_qty\":" << m.get<ResponderMarkupRC::cum_fill_qty>();
        o << ",\"cum_fill_money\":" << m.get<ResponderMarkupRC::cum_fill_money>();
        o << ",\"avg_fill_rate\":" << m.get<ResponderMarkupRC::avg_fill_rate>();
        o << ",\"is_div_control_disabled\":" << (int64_t)m.get<ResponderMarkupRC::is_div_control_disabled>();
        o << ",\"u_bid\":" << m.get<ResponderMarkupRC::u_bid>();
        o << ",\"u_ask\":" << m.get<ResponderMarkupRC::u_ask>();
        o << ",\"i_days\":" << m.get<ResponderMarkupRC::i_days>();
        o << ",\"i_years\":" << m.get<ResponderMarkupRC::i_years>();
        o << ",\"strike\":" << m.get<ResponderMarkupRC::strike>();
        o << ",\"rc_eex_prem\":" << m.get<ResponderMarkupRC::rc_eex_prem>();
        o << ",\"strike_pv\":" << m.get<ResponderMarkupRC::strike_pv>();
        o << ",\"stock_lend_pv\":" << m.get<ResponderMarkupRC::stock_lend_pv>();
        o << ",\"rev_con_prem\":" << m.get<ResponderMarkupRC::rev_con_prem>();
        o << ",\"eff_rev_con_limit\":" << m.get<ResponderMarkupRC::eff_rev_con_limit>();
        o << ",\"limit_price\":" << m.get<ResponderMarkupRC::limit_price>();
        o << ",\"eff_stock_lend_pv\":" << m.get<ResponderMarkupRC::eff_stock_lend_pv>();
        o << ",\"eff_stock_rate\":" << m.get<ResponderMarkupRC::eff_stock_rate>();
        o << ",\"modified_by\":\"" << m.get<ResponderMarkupRC::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<ResponderMarkupRC::modified_in>();
        {
            std::time_t tt = m.get<ResponderMarkupRC::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}