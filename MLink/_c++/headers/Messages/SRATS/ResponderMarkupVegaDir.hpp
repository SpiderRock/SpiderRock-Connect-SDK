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

    #ifndef _user_name__GUARD__
    #define _user_name__GUARD__
    DECL_STRONG_TYPE(user_name, string);
    #endif//_user_name__GUARD__

    #ifndef _is_disabled__GUARD__
    #define _is_disabled__GUARD__
    DECL_STRONG_TYPE(is_disabled, spiderrock::protobuf::api::YesNo);
    #endif//_is_disabled__GUARD__

    #ifndef _enabled_until__GUARD__
    #define _enabled_until__GUARD__
    DECL_STRONG_TYPE(enabled_until, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_enabled_until__GUARD__

    #ifndef _can_include_flex__GUARD__
    #define _can_include_flex__GUARD__
    DECL_STRONG_TYPE(can_include_flex, spiderrock::protobuf::api::YesNo);
    #endif//_can_include_flex__GUARD__

    #ifndef _can_include_stock__GUARD__
    #define _can_include_stock__GUARD__
    DECL_STRONG_TYPE(can_include_stock, spiderrock::protobuf::api::YesNo);
    #endif//_can_include_stock__GUARD__

    #ifndef _can_respond_sr__GUARD__
    #define _can_respond_sr__GUARD__
    DECL_STRONG_TYPE(can_respond_sr, spiderrock::protobuf::api::YesNo);
    #endif//_can_respond_sr__GUARD__

    #ifndef _can_respond_exch__GUARD__
    #define _can_respond_exch__GUARD__
    DECL_STRONG_TYPE(can_respond_exch, spiderrock::protobuf::api::YesNo);
    #endif//_can_respond_exch__GUARD__

    #ifndef _cp_flag__GUARD__
    #define _cp_flag__GUARD__
    DECL_STRONG_TYPE(cp_flag, spiderrock::protobuf::api::CallPut);
    #endif//_cp_flag__GUARD__

    #ifndef _min_net_vega_ratio__GUARD__
    #define _min_net_vega_ratio__GUARD__
    DECL_STRONG_TYPE(min_net_vega_ratio, float);
    #endif//_min_net_vega_ratio__GUARD__

    #ifndef _min_years__GUARD__
    #define _min_years__GUARD__
    DECL_STRONG_TYPE(min_years, float);
    #endif//_min_years__GUARD__

    #ifndef _max_years__float__GUARD__
    #define _max_years__float__GUARD__
    DECL_STRONG_TYPE(max_years__float, float);
    #endif//_max_years__float__GUARD__

    #ifndef _min_expiry__GUARD__
    #define _min_expiry__GUARD__
    DECL_STRONG_TYPE(min_expiry, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_min_expiry__GUARD__

    #ifndef _max_expiry__GUARD__
    #define _max_expiry__GUARD__
    DECL_STRONG_TYPE(max_expiry, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_max_expiry__GUARD__

    #ifndef _min_xdelta__GUARD__
    #define _min_xdelta__GUARD__
    DECL_STRONG_TYPE(min_xdelta, float);
    #endif//_min_xdelta__GUARD__

    #ifndef _max_xdelta__GUARD__
    #define _max_xdelta__GUARD__
    DECL_STRONG_TYPE(max_xdelta, float);
    #endif//_max_xdelta__GUARD__

    #ifndef _min_strike__GUARD__
    #define _min_strike__GUARD__
    DECL_STRONG_TYPE(min_strike, double);
    #endif//_min_strike__GUARD__

    #ifndef _max_strike__GUARD__
    #define _max_strike__GUARD__
    DECL_STRONG_TYPE(max_strike, double);
    #endif//_max_strike__GUARD__

    #ifndef _min_surf_edge_prem__GUARD__
    #define _min_surf_edge_prem__GUARD__
    DECL_STRONG_TYPE(min_surf_edge_prem, float);
    #endif//_min_surf_edge_prem__GUARD__

    #ifndef _min_surf_edge_vol__GUARD__
    #define _min_surf_edge_vol__GUARD__
    DECL_STRONG_TYPE(min_surf_edge_vol, float);
    #endif//_min_surf_edge_vol__GUARD__

    #ifndef _min_probability__GUARD__
    #define _min_probability__GUARD__
    DECL_STRONG_TYPE(min_probability, float);
    #endif//_min_probability__GUARD__

    #ifndef _inc_fees_in_resp__GUARD__
    #define _inc_fees_in_resp__GUARD__
    DECL_STRONG_TYPE(inc_fees_in_resp, spiderrock::protobuf::api::YesNo);
    #endif//_inc_fees_in_resp__GUARD__

    #ifndef _round_rule__GUARD__
    #define _round_rule__GUARD__
    DECL_STRONG_TYPE(round_rule, spiderrock::protobuf::api::RoundRule);
    #endif//_round_rule__GUARD__

    #ifndef _max_response_size__GUARD__
    #define _max_response_size__GUARD__
    DECL_STRONG_TYPE(max_response_size, int32);
    #endif//_max_response_size__GUARD__

    #ifndef _max_response_vega__GUARD__
    #define _max_response_vega__GUARD__
    DECL_STRONG_TYPE(max_response_vega, float);
    #endif//_max_response_vega__GUARD__

    #ifndef _total_response_vega__GUARD__
    #define _total_response_vega__GUARD__
    DECL_STRONG_TYPE(total_response_vega, float);
    #endif//_total_response_vega__GUARD__

    #ifndef _total_response_wt_vega__GUARD__
    #define _total_response_wt_vega__GUARD__
    DECL_STRONG_TYPE(total_response_wt_vega, float);
    #endif//_total_response_wt_vega__GUARD__

    #ifndef _not_mkt_penny__GUARD__
    #define _not_mkt_penny__GUARD__
    DECL_STRONG_TYPE(not_mkt_penny, spiderrock::protobuf::api::YesNo);
    #endif//_not_mkt_penny__GUARD__

    #ifndef _mkt_penny1__GUARD__
    #define _mkt_penny1__GUARD__
    DECL_STRONG_TYPE(mkt_penny1, spiderrock::protobuf::api::YesNo);
    #endif//_mkt_penny1__GUARD__

    #ifndef _mkt_penny2__GUARD__
    #define _mkt_penny2__GUARD__
    DECL_STRONG_TYPE(mkt_penny2, spiderrock::protobuf::api::YesNo);
    #endif//_mkt_penny2__GUARD__

    #ifndef _mkt_penny3p__GUARD__
    #define _mkt_penny3p__GUARD__
    DECL_STRONG_TYPE(mkt_penny3p, spiderrock::protobuf::api::YesNo);
    #endif//_mkt_penny3p__GUARD__

    #ifndef _not_mkt_nickle__GUARD__
    #define _not_mkt_nickle__GUARD__
    DECL_STRONG_TYPE(not_mkt_nickle, spiderrock::protobuf::api::YesNo);
    #endif//_not_mkt_nickle__GUARD__

    #ifndef _mkt_nickle1__GUARD__
    #define _mkt_nickle1__GUARD__
    DECL_STRONG_TYPE(mkt_nickle1, spiderrock::protobuf::api::YesNo);
    #endif//_mkt_nickle1__GUARD__

    #ifndef _mkt_nickle2__GUARD__
    #define _mkt_nickle2__GUARD__
    DECL_STRONG_TYPE(mkt_nickle2, spiderrock::protobuf::api::YesNo);
    #endif//_mkt_nickle2__GUARD__

    #ifndef _mkt_nickle3p__GUARD__
    #define _mkt_nickle3p__GUARD__
    DECL_STRONG_TYPE(mkt_nickle3p, spiderrock::protobuf::api::YesNo);
    #endif//_mkt_nickle3p__GUARD__

    #ifndef _auto_hedge__GUARD__
    #define _auto_hedge__GUARD__
    DECL_STRONG_TYPE(auto_hedge, spiderrock::protobuf::api::AutoHedge);
    #endif//_auto_hedge__GUARD__

    #ifndef _hedge_instrument__GUARD__
    #define _hedge_instrument__GUARD__
    DECL_STRONG_TYPE(hedge_instrument, spiderrock::protobuf::api::HedgeInst);
    #endif//_hedge_instrument__GUARD__

    #ifndef _hedge_sec_key__GUARD__
    #define _hedge_sec_key__GUARD__
    DECL_STRONG_TYPE(hedge_sec_key, ExpiryKey);
    #endif//_hedge_sec_key__GUARD__

    #ifndef _hedge_beta_ratio__GUARD__
    #define _hedge_beta_ratio__GUARD__
    DECL_STRONG_TYPE(hedge_beta_ratio, float);
    #endif//_hedge_beta_ratio__GUARD__

    #ifndef _hedge_scope__GUARD__
    #define _hedge_scope__GUARD__
    DECL_STRONG_TYPE(hedge_scope, spiderrock::protobuf::api::HedgeScope);
    #endif//_hedge_scope__GUARD__

    #ifndef _hedge_session__GUARD__
    #define _hedge_session__GUARD__
    DECL_STRONG_TYPE(hedge_session, spiderrock::protobuf::api::MarketSession);
    #endif//_hedge_session__GUARD__

    #ifndef _risk_group_id__GUARD__
    #define _risk_group_id__GUARD__
    DECL_STRONG_TYPE(risk_group_id, int64);
    #endif//_risk_group_id__GUARD__

    #ifndef _num_notices__GUARD__
    #define _num_notices__GUARD__
    DECL_STRONG_TYPE(num_notices, int64);
    #endif//_num_notices__GUARD__

    #ifndef _num_notice_block__GUARD__
    #define _num_notice_block__GUARD__
    DECL_STRONG_TYPE(num_notice_block, int64);
    #endif//_num_notice_block__GUARD__

    #ifndef _num_notice_flash__GUARD__
    #define _num_notice_flash__GUARD__
    DECL_STRONG_TYPE(num_notice_flash, int64);
    #endif//_num_notice_flash__GUARD__

    #ifndef _num_notice_exch_pi__GUARD__
    #define _num_notice_exch_pi__GUARD__
    DECL_STRONG_TYPE(num_notice_exch_pi, int64);
    #endif//_num_notice_exch_pi__GUARD__

    #ifndef _num_notice_exch_ex__GUARD__
    #define _num_notice_exch_ex__GUARD__
    DECL_STRONG_TYPE(num_notice_exch_ex, int64);
    #endif//_num_notice_exch_ex__GUARD__

    #ifndef _num_not_mkt_penny__GUARD__
    #define _num_not_mkt_penny__GUARD__
    DECL_STRONG_TYPE(num_not_mkt_penny, int64);
    #endif//_num_not_mkt_penny__GUARD__

    #ifndef _num_mkt_penny1__GUARD__
    #define _num_mkt_penny1__GUARD__
    DECL_STRONG_TYPE(num_mkt_penny1, int64);
    #endif//_num_mkt_penny1__GUARD__

    #ifndef _num_mkt_penny2__GUARD__
    #define _num_mkt_penny2__GUARD__
    DECL_STRONG_TYPE(num_mkt_penny2, int64);
    #endif//_num_mkt_penny2__GUARD__

    #ifndef _num_mkt_penny3p__GUARD__
    #define _num_mkt_penny3p__GUARD__
    DECL_STRONG_TYPE(num_mkt_penny3p, int64);
    #endif//_num_mkt_penny3p__GUARD__

    #ifndef _num_not_mkt_nickle__GUARD__
    #define _num_not_mkt_nickle__GUARD__
    DECL_STRONG_TYPE(num_not_mkt_nickle, int64);
    #endif//_num_not_mkt_nickle__GUARD__

    #ifndef _num_mkt_nickle1__GUARD__
    #define _num_mkt_nickle1__GUARD__
    DECL_STRONG_TYPE(num_mkt_nickle1, int64);
    #endif//_num_mkt_nickle1__GUARD__

    #ifndef _num_mkt_nickle2__GUARD__
    #define _num_mkt_nickle2__GUARD__
    DECL_STRONG_TYPE(num_mkt_nickle2, int64);
    #endif//_num_mkt_nickle2__GUARD__

    #ifndef _num_mkt_nickle3p__GUARD__
    #define _num_mkt_nickle3p__GUARD__
    DECL_STRONG_TYPE(num_mkt_nickle3p, int64);
    #endif//_num_mkt_nickle3p__GUARD__

    #ifndef _resp_disabled_skips__GUARD__
    #define _resp_disabled_skips__GUARD__
    DECL_STRONG_TYPE(resp_disabled_skips, int64);
    #endif//_resp_disabled_skips__GUARD__

    #ifndef _stock_disabled_skips__GUARD__
    #define _stock_disabled_skips__GUARD__
    DECL_STRONG_TYPE(stock_disabled_skips, int64);
    #endif//_stock_disabled_skips__GUARD__

    #ifndef _cp_flag_skips__GUARD__
    #define _cp_flag_skips__GUARD__
    DECL_STRONG_TYPE(cp_flag_skips, int64);
    #endif//_cp_flag_skips__GUARD__

    #ifndef _expiry_range_skips__GUARD__
    #define _expiry_range_skips__GUARD__
    DECL_STRONG_TYPE(expiry_range_skips, int64);
    #endif//_expiry_range_skips__GUARD__

    #ifndef _years_range_skips__GUARD__
    #define _years_range_skips__GUARD__
    DECL_STRONG_TYPE(years_range_skips, int64);
    #endif//_years_range_skips__GUARD__

    #ifndef _listed_flex_skips__GUARD__
    #define _listed_flex_skips__GUARD__
    DECL_STRONG_TYPE(listed_flex_skips, int64);
    #endif//_listed_flex_skips__GUARD__

    #ifndef _notice_price_skips__GUARD__
    #define _notice_price_skips__GUARD__
    DECL_STRONG_TYPE(notice_price_skips, int64);
    #endif//_notice_price_skips__GUARD__

    #ifndef _agg_size_limit_skips__GUARD__
    #define _agg_size_limit_skips__GUARD__
    DECL_STRONG_TYPE(agg_size_limit_skips, int64);
    #endif//_agg_size_limit_skips__GUARD__

    #ifndef _risk_group_limit_skips__GUARD__
    #define _risk_group_limit_skips__GUARD__
    DECL_STRONG_TYPE(risk_group_limit_skips, int64);
    #endif//_risk_group_limit_skips__GUARD__

    #ifndef _root_skips__GUARD__
    #define _root_skips__GUARD__
    DECL_STRONG_TYPE(root_skips, int64);
    #endif//_root_skips__GUARD__

    #ifndef _x_delta_range_skips__GUARD__
    #define _x_delta_range_skips__GUARD__
    DECL_STRONG_TYPE(x_delta_range_skips, int64);
    #endif//_x_delta_range_skips__GUARD__

    #ifndef _strike_range_skips__GUARD__
    #define _strike_range_skips__GUARD__
    DECL_STRONG_TYPE(strike_range_skips, int64);
    #endif//_strike_range_skips__GUARD__

    #ifndef _min_vega_ratio_skips__GUARD__
    #define _min_vega_ratio_skips__GUARD__
    DECL_STRONG_TYPE(min_vega_ratio_skips, int64);
    #endif//_min_vega_ratio_skips__GUARD__

    #ifndef _probability_skips__GUARD__
    #define _probability_skips__GUARD__
    DECL_STRONG_TYPE(probability_skips, int64);
    #endif//_probability_skips__GUARD__

    #ifndef _num_responses__int64__GUARD__
    #define _num_responses__int64__GUARD__
    DECL_STRONG_TYPE(num_responses__int64, int64);
    #endif//_num_responses__int64__GUARD__

    #ifndef _num_responds_block__GUARD__
    #define _num_responds_block__GUARD__
    DECL_STRONG_TYPE(num_responds_block, int64);
    #endif//_num_responds_block__GUARD__

    #ifndef _num_responds_flash__GUARD__
    #define _num_responds_flash__GUARD__
    DECL_STRONG_TYPE(num_responds_flash, int64);
    #endif//_num_responds_flash__GUARD__

    #ifndef _num_responses_exch_pi__GUARD__
    #define _num_responses_exch_pi__GUARD__
    DECL_STRONG_TYPE(num_responses_exch_pi, int64);
    #endif//_num_responses_exch_pi__GUARD__

    #ifndef _num_responses_exch_ex__GUARD__
    #define _num_responses_exch_ex__GUARD__
    DECL_STRONG_TYPE(num_responses_exch_ex, int64);
    #endif//_num_responses_exch_ex__GUARD__

    #ifndef _num_full_size__GUARD__
    #define _num_full_size__GUARD__
    DECL_STRONG_TYPE(num_full_size, int64);
    #endif//_num_full_size__GUARD__

    #ifndef _num_alloc_size__GUARD__
    #define _num_alloc_size__GUARD__
    DECL_STRONG_TYPE(num_alloc_size, int64);
    #endif//_num_alloc_size__GUARD__

    #ifndef _num_price_miss__GUARD__
    #define _num_price_miss__GUARD__
    DECL_STRONG_TYPE(num_price_miss, int64);
    #endif//_num_price_miss__GUARD__

    #ifndef _num_too_late__GUARD__
    #define _num_too_late__GUARD__
    DECL_STRONG_TYPE(num_too_late, int64);
    #endif//_num_too_late__GUARD__

    #ifndef _num_other_miss__GUARD__
    #define _num_other_miss__GUARD__
    DECL_STRONG_TYPE(num_other_miss, int64);
    #endif//_num_other_miss__GUARD__

    #ifndef _num_did_not_trade__GUARD__
    #define _num_did_not_trade__GUARD__
    DECL_STRONG_TYPE(num_did_not_trade, int64);
    #endif//_num_did_not_trade__GUARD__

    #ifndef _num_traded__GUARD__
    #define _num_traded__GUARD__
    DECL_STRONG_TYPE(num_traded, int32);
    #endif//_num_traded__GUARD__

    #ifndef _qty_traded__GUARD__
    #define _qty_traded__GUARD__
    DECL_STRONG_TYPE(qty_traded, int32);
    #endif//_qty_traded__GUARD__

    #ifndef _vega_traded__GUARD__
    #define _vega_traded__GUARD__
    DECL_STRONG_TYPE(vega_traded, double);
    #endif//_vega_traded__GUARD__

    #ifndef _wt_vega_traded__GUARD__
    #define _wt_vega_traded__GUARD__
    DECL_STRONG_TYPE(wt_vega_traded, double);
    #endif//_wt_vega_traded__GUARD__

    #ifndef _sum_width_traded__GUARD__
    #define _sum_width_traded__GUARD__
    DECL_STRONG_TYPE(sum_width_traded, double);
    #endif//_sum_width_traded__GUARD__

    #ifndef _sum_surf_edge_traded__GUARD__
    #define _sum_surf_edge_traded__GUARD__
    DECL_STRONG_TYPE(sum_surf_edge_traded, double);
    #endif//_sum_surf_edge_traded__GUARD__

    #ifndef _sum_m1_pn_ltraded__GUARD__
    #define _sum_m1_pn_ltraded__GUARD__
    DECL_STRONG_TYPE(sum_m1_pn_ltraded, double);
    #endif//_sum_m1_pn_ltraded__GUARD__

    #ifndef _sum_m10_pn_ltraded__GUARD__
    #define _sum_m10_pn_ltraded__GUARD__
    DECL_STRONG_TYPE(sum_m10_pn_ltraded, double);
    #endif//_sum_m10_pn_ltraded__GUARD__

    #ifndef _num_traded_block__GUARD__
    #define _num_traded_block__GUARD__
    DECL_STRONG_TYPE(num_traded_block, int64);
    #endif//_num_traded_block__GUARD__

    #ifndef _num_traded_flash__GUARD__
    #define _num_traded_flash__GUARD__
    DECL_STRONG_TYPE(num_traded_flash, int64);
    #endif//_num_traded_flash__GUARD__

    #ifndef _num_traded_exch_pi__GUARD__
    #define _num_traded_exch_pi__GUARD__
    DECL_STRONG_TYPE(num_traded_exch_pi, int64);
    #endif//_num_traded_exch_pi__GUARD__

    #ifndef _num_traded_exch_ex__GUARD__
    #define _num_traded_exch_ex__GUARD__
    DECL_STRONG_TYPE(num_traded_exch_ex, int64);
    #endif//_num_traded_exch_ex__GUARD__

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

    #ifndef _resp_side__GUARD__
    #define _resp_side__GUARD__
    DECL_STRONG_TYPE(resp_side, spiderrock::protobuf::api::BuySell);
    #endif//_resp_side__GUARD__

    #ifndef _responder_id__GUARD__
    #define _responder_id__GUARD__
    DECL_STRONG_TYPE(responder_id, int32);
    #endif//_responder_id__GUARD__

    #ifndef _inititor_cfirm__GUARD__
    #define _inititor_cfirm__GUARD__
    DECL_STRONG_TYPE(inititor_cfirm, string);
    #endif//_inititor_cfirm__GUARD__

    #ifndef _inititor_cfirm__GUARD__
    #define _inititor_cfirm__GUARD__
    DECL_STRONG_TYPE(inititor_cfirm, string);
    #endif//_inititor_cfirm__GUARD__

    
    class ResponderMarkupVegaDir_PKey {
        public:
        //using statements for all types used in this class
        using accnt = spiderrock::protobuf::api::accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using root = spiderrock::protobuf::api::root;
        using resp_side = spiderrock::protobuf::api::resp_side;
        using responder_id = spiderrock::protobuf::api::responder_id;

        private:
        accnt m_accnt{};
        client_firm m_client_firm{};
        root m_root{};
        resp_side m_resp_side{};
        responder_id m_responder_id{};

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
        resp_side get_resp_side() const {
            return m_resp_side;
        }
        responder_id get_responder_id() const {
            return m_responder_id;
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
        void set_resp_side(const resp_side& value)  {
            m_resp_side = value;
        }
        void set_responder_id(const responder_id& value)  {
            m_responder_id = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ResponderMarkupVegaDir_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to ResponderMarkupVegaDir_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const client_firm & value) { set_client_firm(value); }
        void set(const root & value) { set_root(value); }
        void set(const resp_side & value) { set_resp_side(value); }
        void set(const responder_id & value) { set_responder_id(value); }


        ResponderMarkupVegaDir_PKey() {}

        virtual ~ResponderMarkupVegaDir_PKey() {
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
        bool IncludeResponderId() const {
            return !(m_responder_id == 0);
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
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_root;
                m_root.setCodecTickerKey(tickerKeyLayout_root);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(15,tickerKeyLayout_root);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_resp_side)));
            if ( IncludeResponderId()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(16,m_responder_id);
            }
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
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_root;
                m_root.setCodecTickerKey(tickerKeyLayout_root);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 15, tickerKeyLayout_root);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_resp_side)));
            if ( IncludeResponderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,16,m_responder_id);
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
                    case 10: {m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 11: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 15: {
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_root.setFromCodec(tickerKey);
                        break;
                    }
                    case 13: {m_resp_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 16: {m_responder_id = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class ResponderMarkupVegaDir_CFirmExclFilter {
        public:
        //using statements for all types used in this class
        using inititor_cfirm = spiderrock::protobuf::api::inititor_cfirm;

        private:
        inititor_cfirm m_inititor_cfirm{};

        public:
        inititor_cfirm get_inititor_cfirm() const {
            return m_inititor_cfirm;
        }
        void set_inititor_cfirm(const inititor_cfirm& value)  {
            m_inititor_cfirm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ResponderMarkupVegaDir_CFirmExclFilter::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to ResponderMarkupVegaDir_CFirmExclFilter::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const inititor_cfirm & value) { set_inititor_cfirm(value); }


        ResponderMarkupVegaDir_CFirmExclFilter() {}

        virtual ~ResponderMarkupVegaDir_CFirmExclFilter() {
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

        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(183,m_inititor_cfirm);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,183,static_cast<string>(m_inititor_cfirm));
            return dest;
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
                    case 183: {m_inititor_cfirm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class ResponderMarkupVegaDir_CFirmInclFilter {
        public:
        //using statements for all types used in this class
        using inititor_cfirm = spiderrock::protobuf::api::inititor_cfirm;

        private:
        inititor_cfirm m_inititor_cfirm{};

        public:
        inititor_cfirm get_inititor_cfirm() const {
            return m_inititor_cfirm;
        }
        void set_inititor_cfirm(const inititor_cfirm& value)  {
            m_inititor_cfirm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ResponderMarkupVegaDir_CFirmInclFilter::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to ResponderMarkupVegaDir_CFirmInclFilter::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const inititor_cfirm & value) { set_inititor_cfirm(value); }


        ResponderMarkupVegaDir_CFirmInclFilter() {}

        virtual ~ResponderMarkupVegaDir_CFirmInclFilter() {
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

        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(181,m_inititor_cfirm);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,181,static_cast<string>(m_inititor_cfirm));
            return dest;
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
                    case 181: {m_inititor_cfirm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class ResponderMarkupVegaDir {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::ResponderMarkupVegaDir_PKey;
        using user_name = spiderrock::protobuf::api::user_name;
        using is_disabled = spiderrock::protobuf::api::is_disabled;
        using enabled_until = spiderrock::protobuf::api::enabled_until;
        using can_include_flex = spiderrock::protobuf::api::can_include_flex;
        using can_include_stock = spiderrock::protobuf::api::can_include_stock;
        using can_respond_sr = spiderrock::protobuf::api::can_respond_sr;
        using can_respond_exch = spiderrock::protobuf::api::can_respond_exch;
        using cp_flag = spiderrock::protobuf::api::cp_flag;
        using min_net_vega_ratio = spiderrock::protobuf::api::min_net_vega_ratio;
        using min_years = spiderrock::protobuf::api::min_years;
        using max_years = spiderrock::protobuf::api::max_years__float;
        using min_expiry = spiderrock::protobuf::api::min_expiry;
        using max_expiry = spiderrock::protobuf::api::max_expiry;
        using min_xdelta = spiderrock::protobuf::api::min_xdelta;
        using max_xdelta = spiderrock::protobuf::api::max_xdelta;
        using min_strike = spiderrock::protobuf::api::min_strike;
        using max_strike = spiderrock::protobuf::api::max_strike;
        using min_surf_edge_prem = spiderrock::protobuf::api::min_surf_edge_prem;
        using min_surf_edge_vol = spiderrock::protobuf::api::min_surf_edge_vol;
        using min_probability = spiderrock::protobuf::api::min_probability;
        using inc_fees_in_resp = spiderrock::protobuf::api::inc_fees_in_resp;
        using round_rule = spiderrock::protobuf::api::round_rule;
        using max_response_size = spiderrock::protobuf::api::max_response_size;
        using max_response_vega = spiderrock::protobuf::api::max_response_vega;
        using total_response_vega = spiderrock::protobuf::api::total_response_vega;
        using total_response_wt_vega = spiderrock::protobuf::api::total_response_wt_vega;
        using not_mkt_penny = spiderrock::protobuf::api::not_mkt_penny;
        using mkt_penny1 = spiderrock::protobuf::api::mkt_penny1;
        using mkt_penny2 = spiderrock::protobuf::api::mkt_penny2;
        using mkt_penny3p = spiderrock::protobuf::api::mkt_penny3p;
        using not_mkt_nickle = spiderrock::protobuf::api::not_mkt_nickle;
        using mkt_nickle1 = spiderrock::protobuf::api::mkt_nickle1;
        using mkt_nickle2 = spiderrock::protobuf::api::mkt_nickle2;
        using mkt_nickle3p = spiderrock::protobuf::api::mkt_nickle3p;
        using auto_hedge = spiderrock::protobuf::api::auto_hedge;
        using hedge_instrument = spiderrock::protobuf::api::hedge_instrument;
        using hedge_sec_key = spiderrock::protobuf::api::hedge_sec_key;
        using hedge_beta_ratio = spiderrock::protobuf::api::hedge_beta_ratio;
        using hedge_scope = spiderrock::protobuf::api::hedge_scope;
        using hedge_session = spiderrock::protobuf::api::hedge_session;
        using risk_group_id = spiderrock::protobuf::api::risk_group_id;
        using num_notices = spiderrock::protobuf::api::num_notices;
        using num_notice_block = spiderrock::protobuf::api::num_notice_block;
        using num_notice_flash = spiderrock::protobuf::api::num_notice_flash;
        using num_notice_exch_pi = spiderrock::protobuf::api::num_notice_exch_pi;
        using num_notice_exch_ex = spiderrock::protobuf::api::num_notice_exch_ex;
        using num_not_mkt_penny = spiderrock::protobuf::api::num_not_mkt_penny;
        using num_mkt_penny1 = spiderrock::protobuf::api::num_mkt_penny1;
        using num_mkt_penny2 = spiderrock::protobuf::api::num_mkt_penny2;
        using num_mkt_penny3p = spiderrock::protobuf::api::num_mkt_penny3p;
        using num_not_mkt_nickle = spiderrock::protobuf::api::num_not_mkt_nickle;
        using num_mkt_nickle1 = spiderrock::protobuf::api::num_mkt_nickle1;
        using num_mkt_nickle2 = spiderrock::protobuf::api::num_mkt_nickle2;
        using num_mkt_nickle3p = spiderrock::protobuf::api::num_mkt_nickle3p;
        using resp_disabled_skips = spiderrock::protobuf::api::resp_disabled_skips;
        using stock_disabled_skips = spiderrock::protobuf::api::stock_disabled_skips;
        using cp_flag_skips = spiderrock::protobuf::api::cp_flag_skips;
        using expiry_range_skips = spiderrock::protobuf::api::expiry_range_skips;
        using years_range_skips = spiderrock::protobuf::api::years_range_skips;
        using listed_flex_skips = spiderrock::protobuf::api::listed_flex_skips;
        using notice_price_skips = spiderrock::protobuf::api::notice_price_skips;
        using agg_size_limit_skips = spiderrock::protobuf::api::agg_size_limit_skips;
        using risk_group_limit_skips = spiderrock::protobuf::api::risk_group_limit_skips;
        using root_skips = spiderrock::protobuf::api::root_skips;
        using x_delta_range_skips = spiderrock::protobuf::api::x_delta_range_skips;
        using strike_range_skips = spiderrock::protobuf::api::strike_range_skips;
        using min_vega_ratio_skips = spiderrock::protobuf::api::min_vega_ratio_skips;
        using probability_skips = spiderrock::protobuf::api::probability_skips;
        using num_responses = spiderrock::protobuf::api::num_responses__int64;
        using num_responds_block = spiderrock::protobuf::api::num_responds_block;
        using num_responds_flash = spiderrock::protobuf::api::num_responds_flash;
        using num_responses_exch_pi = spiderrock::protobuf::api::num_responses_exch_pi;
        using num_responses_exch_ex = spiderrock::protobuf::api::num_responses_exch_ex;
        using num_full_size = spiderrock::protobuf::api::num_full_size;
        using num_alloc_size = spiderrock::protobuf::api::num_alloc_size;
        using num_price_miss = spiderrock::protobuf::api::num_price_miss;
        using num_too_late = spiderrock::protobuf::api::num_too_late;
        using num_other_miss = spiderrock::protobuf::api::num_other_miss;
        using num_did_not_trade = spiderrock::protobuf::api::num_did_not_trade;
        using num_traded = spiderrock::protobuf::api::num_traded;
        using qty_traded = spiderrock::protobuf::api::qty_traded;
        using vega_traded = spiderrock::protobuf::api::vega_traded;
        using wt_vega_traded = spiderrock::protobuf::api::wt_vega_traded;
        using sum_width_traded = spiderrock::protobuf::api::sum_width_traded;
        using sum_surf_edge_traded = spiderrock::protobuf::api::sum_surf_edge_traded;
        using sum_m1_pn_ltraded = spiderrock::protobuf::api::sum_m1_pn_ltraded;
        using sum_m10_pn_ltraded = spiderrock::protobuf::api::sum_m10_pn_ltraded;
        using num_traded_block = spiderrock::protobuf::api::num_traded_block;
        using num_traded_flash = spiderrock::protobuf::api::num_traded_flash;
        using num_traded_exch_pi = spiderrock::protobuf::api::num_traded_exch_pi;
        using num_traded_exch_ex = spiderrock::protobuf::api::num_traded_exch_ex;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using c_firm_excl_filter = spiderrock::protobuf::api::ResponderMarkupVegaDir_CFirmExclFilter;
        using c_firm_incl_filter = spiderrock::protobuf::api::ResponderMarkupVegaDir_CFirmInclFilter;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        user_name m_user_name{};
        is_disabled m_is_disabled{};
        enabled_until m_enabled_until{};
        can_include_flex m_can_include_flex{};
        can_include_stock m_can_include_stock{};
        can_respond_sr m_can_respond_sr{};
        can_respond_exch m_can_respond_exch{};
        cp_flag m_cp_flag{};
        min_net_vega_ratio m_min_net_vega_ratio{};
        min_years m_min_years{};
        max_years m_max_years{};
        min_expiry m_min_expiry{};
        max_expiry m_max_expiry{};
        min_xdelta m_min_xdelta{};
        max_xdelta m_max_xdelta{};
        min_strike m_min_strike{};
        max_strike m_max_strike{};
        min_surf_edge_prem m_min_surf_edge_prem{};
        min_surf_edge_vol m_min_surf_edge_vol{};
        min_probability m_min_probability{};
        inc_fees_in_resp m_inc_fees_in_resp{};
        round_rule m_round_rule{};
        max_response_size m_max_response_size{};
        max_response_vega m_max_response_vega{};
        total_response_vega m_total_response_vega{};
        total_response_wt_vega m_total_response_wt_vega{};
        not_mkt_penny m_not_mkt_penny{};
        mkt_penny1 m_mkt_penny1{};
        mkt_penny2 m_mkt_penny2{};
        mkt_penny3p m_mkt_penny3p{};
        not_mkt_nickle m_not_mkt_nickle{};
        mkt_nickle1 m_mkt_nickle1{};
        mkt_nickle2 m_mkt_nickle2{};
        mkt_nickle3p m_mkt_nickle3p{};
        auto_hedge m_auto_hedge{};
        hedge_instrument m_hedge_instrument{};
        hedge_sec_key m_hedge_sec_key{};
        hedge_beta_ratio m_hedge_beta_ratio{};
        hedge_scope m_hedge_scope{};
        hedge_session m_hedge_session{};
        risk_group_id m_risk_group_id{};
        num_notices m_num_notices{};
        num_notice_block m_num_notice_block{};
        num_notice_flash m_num_notice_flash{};
        num_notice_exch_pi m_num_notice_exch_pi{};
        num_notice_exch_ex m_num_notice_exch_ex{};
        num_not_mkt_penny m_num_not_mkt_penny{};
        num_mkt_penny1 m_num_mkt_penny1{};
        num_mkt_penny2 m_num_mkt_penny2{};
        num_mkt_penny3p m_num_mkt_penny3p{};
        num_not_mkt_nickle m_num_not_mkt_nickle{};
        num_mkt_nickle1 m_num_mkt_nickle1{};
        num_mkt_nickle2 m_num_mkt_nickle2{};
        num_mkt_nickle3p m_num_mkt_nickle3p{};
        resp_disabled_skips m_resp_disabled_skips{};
        stock_disabled_skips m_stock_disabled_skips{};
        cp_flag_skips m_cp_flag_skips{};
        expiry_range_skips m_expiry_range_skips{};
        years_range_skips m_years_range_skips{};
        listed_flex_skips m_listed_flex_skips{};
        notice_price_skips m_notice_price_skips{};
        agg_size_limit_skips m_agg_size_limit_skips{};
        risk_group_limit_skips m_risk_group_limit_skips{};
        root_skips m_root_skips{};
        x_delta_range_skips m_x_delta_range_skips{};
        strike_range_skips m_strike_range_skips{};
        min_vega_ratio_skips m_min_vega_ratio_skips{};
        probability_skips m_probability_skips{};
        num_responses m_num_responses{};
        num_responds_block m_num_responds_block{};
        num_responds_flash m_num_responds_flash{};
        num_responses_exch_pi m_num_responses_exch_pi{};
        num_responses_exch_ex m_num_responses_exch_ex{};
        num_full_size m_num_full_size{};
        num_alloc_size m_num_alloc_size{};
        num_price_miss m_num_price_miss{};
        num_too_late m_num_too_late{};
        num_other_miss m_num_other_miss{};
        num_did_not_trade m_num_did_not_trade{};
        num_traded m_num_traded{};
        qty_traded m_qty_traded{};
        vega_traded m_vega_traded{};
        wt_vega_traded m_wt_vega_traded{};
        sum_width_traded m_sum_width_traded{};
        sum_surf_edge_traded m_sum_surf_edge_traded{};
        sum_m1_pn_ltraded m_sum_m1_pn_ltraded{};
        sum_m10_pn_ltraded m_sum_m10_pn_ltraded{};
        num_traded_block m_num_traded_block{};
        num_traded_flash m_num_traded_flash{};
        num_traded_exch_pi m_num_traded_exch_pi{};
        num_traded_exch_ex m_num_traded_exch_ex{};
        modified_by m_modified_by{};
        modified_in m_modified_in{};
        timestamp m_timestamp{};
        std::vector<c_firm_excl_filter> m_c_firm_excl_filter{};
        std::vector<c_firm_incl_filter> m_c_firm_incl_filter{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        user_name get_user_name() const {
            return m_user_name;
        }		
        is_disabled get_is_disabled() const {
            return m_is_disabled;
        }		
        enabled_until get_enabled_until() const {
            return m_enabled_until;
        }		
        can_include_flex get_can_include_flex() const {
            return m_can_include_flex;
        }		
        can_include_stock get_can_include_stock() const {
            return m_can_include_stock;
        }		
        can_respond_sr get_can_respond_sr() const {
            return m_can_respond_sr;
        }		
        can_respond_exch get_can_respond_exch() const {
            return m_can_respond_exch;
        }		
        cp_flag get_cp_flag() const {
            return m_cp_flag;
        }		
        min_net_vega_ratio get_min_net_vega_ratio() const {
            return m_min_net_vega_ratio;
        }		
        min_years get_min_years() const {
            return m_min_years;
        }		
        max_years get_max_years() const {
            return m_max_years;
        }		
        min_expiry get_min_expiry() const {
            return m_min_expiry;
        }		
        max_expiry get_max_expiry() const {
            return m_max_expiry;
        }		
        min_xdelta get_min_xdelta() const {
            return m_min_xdelta;
        }		
        max_xdelta get_max_xdelta() const {
            return m_max_xdelta;
        }		
        min_strike get_min_strike() const {
            return m_min_strike;
        }		
        max_strike get_max_strike() const {
            return m_max_strike;
        }		
        min_surf_edge_prem get_min_surf_edge_prem() const {
            return m_min_surf_edge_prem;
        }		
        min_surf_edge_vol get_min_surf_edge_vol() const {
            return m_min_surf_edge_vol;
        }		
        min_probability get_min_probability() const {
            return m_min_probability;
        }		
        inc_fees_in_resp get_inc_fees_in_resp() const {
            return m_inc_fees_in_resp;
        }		
        round_rule get_round_rule() const {
            return m_round_rule;
        }		
        max_response_size get_max_response_size() const {
            return m_max_response_size;
        }		
        max_response_vega get_max_response_vega() const {
            return m_max_response_vega;
        }		
        total_response_vega get_total_response_vega() const {
            return m_total_response_vega;
        }		
        total_response_wt_vega get_total_response_wt_vega() const {
            return m_total_response_wt_vega;
        }		
        not_mkt_penny get_not_mkt_penny() const {
            return m_not_mkt_penny;
        }		
        mkt_penny1 get_mkt_penny1() const {
            return m_mkt_penny1;
        }		
        mkt_penny2 get_mkt_penny2() const {
            return m_mkt_penny2;
        }		
        mkt_penny3p get_mkt_penny3p() const {
            return m_mkt_penny3p;
        }		
        not_mkt_nickle get_not_mkt_nickle() const {
            return m_not_mkt_nickle;
        }		
        mkt_nickle1 get_mkt_nickle1() const {
            return m_mkt_nickle1;
        }		
        mkt_nickle2 get_mkt_nickle2() const {
            return m_mkt_nickle2;
        }		
        mkt_nickle3p get_mkt_nickle3p() const {
            return m_mkt_nickle3p;
        }		
        auto_hedge get_auto_hedge() const {
            return m_auto_hedge;
        }		
        hedge_instrument get_hedge_instrument() const {
            return m_hedge_instrument;
        }		
        hedge_sec_key get_hedge_sec_key() const {
            return m_hedge_sec_key;
        }		
        hedge_beta_ratio get_hedge_beta_ratio() const {
            return m_hedge_beta_ratio;
        }		
        hedge_scope get_hedge_scope() const {
            return m_hedge_scope;
        }		
        hedge_session get_hedge_session() const {
            return m_hedge_session;
        }		
        risk_group_id get_risk_group_id() const {
            return m_risk_group_id;
        }		
        num_notices get_num_notices() const {
            return m_num_notices;
        }		
        num_notice_block get_num_notice_block() const {
            return m_num_notice_block;
        }		
        num_notice_flash get_num_notice_flash() const {
            return m_num_notice_flash;
        }		
        num_notice_exch_pi get_num_notice_exch_pi() const {
            return m_num_notice_exch_pi;
        }		
        num_notice_exch_ex get_num_notice_exch_ex() const {
            return m_num_notice_exch_ex;
        }		
        num_not_mkt_penny get_num_not_mkt_penny() const {
            return m_num_not_mkt_penny;
        }		
        num_mkt_penny1 get_num_mkt_penny1() const {
            return m_num_mkt_penny1;
        }		
        num_mkt_penny2 get_num_mkt_penny2() const {
            return m_num_mkt_penny2;
        }		
        num_mkt_penny3p get_num_mkt_penny3p() const {
            return m_num_mkt_penny3p;
        }		
        num_not_mkt_nickle get_num_not_mkt_nickle() const {
            return m_num_not_mkt_nickle;
        }		
        num_mkt_nickle1 get_num_mkt_nickle1() const {
            return m_num_mkt_nickle1;
        }		
        num_mkt_nickle2 get_num_mkt_nickle2() const {
            return m_num_mkt_nickle2;
        }		
        num_mkt_nickle3p get_num_mkt_nickle3p() const {
            return m_num_mkt_nickle3p;
        }		
        resp_disabled_skips get_resp_disabled_skips() const {
            return m_resp_disabled_skips;
        }		
        stock_disabled_skips get_stock_disabled_skips() const {
            return m_stock_disabled_skips;
        }		
        cp_flag_skips get_cp_flag_skips() const {
            return m_cp_flag_skips;
        }		
        expiry_range_skips get_expiry_range_skips() const {
            return m_expiry_range_skips;
        }		
        years_range_skips get_years_range_skips() const {
            return m_years_range_skips;
        }		
        listed_flex_skips get_listed_flex_skips() const {
            return m_listed_flex_skips;
        }		
        notice_price_skips get_notice_price_skips() const {
            return m_notice_price_skips;
        }		
        agg_size_limit_skips get_agg_size_limit_skips() const {
            return m_agg_size_limit_skips;
        }		
        risk_group_limit_skips get_risk_group_limit_skips() const {
            return m_risk_group_limit_skips;
        }		
        root_skips get_root_skips() const {
            return m_root_skips;
        }		
        x_delta_range_skips get_x_delta_range_skips() const {
            return m_x_delta_range_skips;
        }		
        strike_range_skips get_strike_range_skips() const {
            return m_strike_range_skips;
        }		
        min_vega_ratio_skips get_min_vega_ratio_skips() const {
            return m_min_vega_ratio_skips;
        }		
        probability_skips get_probability_skips() const {
            return m_probability_skips;
        }		
        num_responses get_num_responses() const {
            return m_num_responses;
        }		
        num_responds_block get_num_responds_block() const {
            return m_num_responds_block;
        }		
        num_responds_flash get_num_responds_flash() const {
            return m_num_responds_flash;
        }		
        num_responses_exch_pi get_num_responses_exch_pi() const {
            return m_num_responses_exch_pi;
        }		
        num_responses_exch_ex get_num_responses_exch_ex() const {
            return m_num_responses_exch_ex;
        }		
        num_full_size get_num_full_size() const {
            return m_num_full_size;
        }		
        num_alloc_size get_num_alloc_size() const {
            return m_num_alloc_size;
        }		
        num_price_miss get_num_price_miss() const {
            return m_num_price_miss;
        }		
        num_too_late get_num_too_late() const {
            return m_num_too_late;
        }		
        num_other_miss get_num_other_miss() const {
            return m_num_other_miss;
        }		
        num_did_not_trade get_num_did_not_trade() const {
            return m_num_did_not_trade;
        }		
        num_traded get_num_traded() const {
            return m_num_traded;
        }		
        qty_traded get_qty_traded() const {
            return m_qty_traded;
        }		
        vega_traded get_vega_traded() const {
            return m_vega_traded;
        }		
        wt_vega_traded get_wt_vega_traded() const {
            return m_wt_vega_traded;
        }		
        sum_width_traded get_sum_width_traded() const {
            return m_sum_width_traded;
        }		
        sum_surf_edge_traded get_sum_surf_edge_traded() const {
            return m_sum_surf_edge_traded;
        }		
        sum_m1_pn_ltraded get_sum_m1_pn_ltraded() const {
            return m_sum_m1_pn_ltraded;
        }		
        sum_m10_pn_ltraded get_sum_m10_pn_ltraded() const {
            return m_sum_m10_pn_ltraded;
        }		
        num_traded_block get_num_traded_block() const {
            return m_num_traded_block;
        }		
        num_traded_flash get_num_traded_flash() const {
            return m_num_traded_flash;
        }		
        num_traded_exch_pi get_num_traded_exch_pi() const {
            return m_num_traded_exch_pi;
        }		
        num_traded_exch_ex get_num_traded_exch_ex() const {
            return m_num_traded_exch_ex;
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
        const std::vector<c_firm_excl_filter>& get_c_firm_excl_filter_list() const {
            return m_c_firm_excl_filter;
        }
        const c_firm_excl_filter& get_c_firm_excl_filter(const int i) const {
            return m_c_firm_excl_filter.at(i);
        }
        const std::vector<c_firm_incl_filter>& get_c_firm_incl_filter_list() const {
            return m_c_firm_incl_filter;
        }
        const c_firm_incl_filter& get_c_firm_incl_filter(const int i) const {
            return m_c_firm_incl_filter.at(i);
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
        void set_user_name(const user_name& value)  {
            m_user_name = value;
        }
        void set_is_disabled(const is_disabled& value)  {
            m_is_disabled = value;
        }
        void set_enabled_until(const enabled_until& value)  {
            m_enabled_until = value;
        }
        void set_can_include_flex(const can_include_flex& value)  {
            m_can_include_flex = value;
        }
        void set_can_include_stock(const can_include_stock& value)  {
            m_can_include_stock = value;
        }
        void set_can_respond_sr(const can_respond_sr& value)  {
            m_can_respond_sr = value;
        }
        void set_can_respond_exch(const can_respond_exch& value)  {
            m_can_respond_exch = value;
        }
        void set_cp_flag(const cp_flag& value)  {
            m_cp_flag = value;
        }
        void set_min_net_vega_ratio(const min_net_vega_ratio& value)  {
            m_min_net_vega_ratio = value;
        }
        void set_min_years(const min_years& value)  {
            m_min_years = value;
        }
        void set_max_years(const max_years& value)  {
            m_max_years = value;
        }
        void set_min_expiry(const min_expiry& value)  {
            m_min_expiry = value;
        }
        void set_max_expiry(const max_expiry& value)  {
            m_max_expiry = value;
        }
        void set_min_xdelta(const min_xdelta& value)  {
            m_min_xdelta = value;
        }
        void set_max_xdelta(const max_xdelta& value)  {
            m_max_xdelta = value;
        }
        void set_min_strike(const min_strike& value)  {
            m_min_strike = value;
        }
        void set_max_strike(const max_strike& value)  {
            m_max_strike = value;
        }
        void set_min_surf_edge_prem(const min_surf_edge_prem& value)  {
            m_min_surf_edge_prem = value;
        }
        void set_min_surf_edge_vol(const min_surf_edge_vol& value)  {
            m_min_surf_edge_vol = value;
        }
        void set_min_probability(const min_probability& value)  {
            m_min_probability = value;
        }
        void set_inc_fees_in_resp(const inc_fees_in_resp& value)  {
            m_inc_fees_in_resp = value;
        }
        void set_round_rule(const round_rule& value)  {
            m_round_rule = value;
        }
        void set_max_response_size(const max_response_size& value)  {
            m_max_response_size = value;
        }
        void set_max_response_vega(const max_response_vega& value)  {
            m_max_response_vega = value;
        }
        void set_total_response_vega(const total_response_vega& value)  {
            m_total_response_vega = value;
        }
        void set_total_response_wt_vega(const total_response_wt_vega& value)  {
            m_total_response_wt_vega = value;
        }
        void set_not_mkt_penny(const not_mkt_penny& value)  {
            m_not_mkt_penny = value;
        }
        void set_mkt_penny1(const mkt_penny1& value)  {
            m_mkt_penny1 = value;
        }
        void set_mkt_penny2(const mkt_penny2& value)  {
            m_mkt_penny2 = value;
        }
        void set_mkt_penny3p(const mkt_penny3p& value)  {
            m_mkt_penny3p = value;
        }
        void set_not_mkt_nickle(const not_mkt_nickle& value)  {
            m_not_mkt_nickle = value;
        }
        void set_mkt_nickle1(const mkt_nickle1& value)  {
            m_mkt_nickle1 = value;
        }
        void set_mkt_nickle2(const mkt_nickle2& value)  {
            m_mkt_nickle2 = value;
        }
        void set_mkt_nickle3p(const mkt_nickle3p& value)  {
            m_mkt_nickle3p = value;
        }
        void set_auto_hedge(const auto_hedge& value)  {
            m_auto_hedge = value;
        }
        void set_hedge_instrument(const hedge_instrument& value)  {
            m_hedge_instrument = value;
        }
        void set_hedge_sec_key(const hedge_sec_key& value)  {
            m_hedge_sec_key = value;
        }
        void set_hedge_beta_ratio(const hedge_beta_ratio& value)  {
            m_hedge_beta_ratio = value;
        }
        void set_hedge_scope(const hedge_scope& value)  {
            m_hedge_scope = value;
        }
        void set_hedge_session(const hedge_session& value)  {
            m_hedge_session = value;
        }
        void set_risk_group_id(const risk_group_id& value)  {
            m_risk_group_id = value;
        }
        void set_num_notices(const num_notices& value)  {
            m_num_notices = value;
        }
        void set_num_notice_block(const num_notice_block& value)  {
            m_num_notice_block = value;
        }
        void set_num_notice_flash(const num_notice_flash& value)  {
            m_num_notice_flash = value;
        }
        void set_num_notice_exch_pi(const num_notice_exch_pi& value)  {
            m_num_notice_exch_pi = value;
        }
        void set_num_notice_exch_ex(const num_notice_exch_ex& value)  {
            m_num_notice_exch_ex = value;
        }
        void set_num_not_mkt_penny(const num_not_mkt_penny& value)  {
            m_num_not_mkt_penny = value;
        }
        void set_num_mkt_penny1(const num_mkt_penny1& value)  {
            m_num_mkt_penny1 = value;
        }
        void set_num_mkt_penny2(const num_mkt_penny2& value)  {
            m_num_mkt_penny2 = value;
        }
        void set_num_mkt_penny3p(const num_mkt_penny3p& value)  {
            m_num_mkt_penny3p = value;
        }
        void set_num_not_mkt_nickle(const num_not_mkt_nickle& value)  {
            m_num_not_mkt_nickle = value;
        }
        void set_num_mkt_nickle1(const num_mkt_nickle1& value)  {
            m_num_mkt_nickle1 = value;
        }
        void set_num_mkt_nickle2(const num_mkt_nickle2& value)  {
            m_num_mkt_nickle2 = value;
        }
        void set_num_mkt_nickle3p(const num_mkt_nickle3p& value)  {
            m_num_mkt_nickle3p = value;
        }
        void set_resp_disabled_skips(const resp_disabled_skips& value)  {
            m_resp_disabled_skips = value;
        }
        void set_stock_disabled_skips(const stock_disabled_skips& value)  {
            m_stock_disabled_skips = value;
        }
        void set_cp_flag_skips(const cp_flag_skips& value)  {
            m_cp_flag_skips = value;
        }
        void set_expiry_range_skips(const expiry_range_skips& value)  {
            m_expiry_range_skips = value;
        }
        void set_years_range_skips(const years_range_skips& value)  {
            m_years_range_skips = value;
        }
        void set_listed_flex_skips(const listed_flex_skips& value)  {
            m_listed_flex_skips = value;
        }
        void set_notice_price_skips(const notice_price_skips& value)  {
            m_notice_price_skips = value;
        }
        void set_agg_size_limit_skips(const agg_size_limit_skips& value)  {
            m_agg_size_limit_skips = value;
        }
        void set_risk_group_limit_skips(const risk_group_limit_skips& value)  {
            m_risk_group_limit_skips = value;
        }
        void set_root_skips(const root_skips& value)  {
            m_root_skips = value;
        }
        void set_x_delta_range_skips(const x_delta_range_skips& value)  {
            m_x_delta_range_skips = value;
        }
        void set_strike_range_skips(const strike_range_skips& value)  {
            m_strike_range_skips = value;
        }
        void set_min_vega_ratio_skips(const min_vega_ratio_skips& value)  {
            m_min_vega_ratio_skips = value;
        }
        void set_probability_skips(const probability_skips& value)  {
            m_probability_skips = value;
        }
        void set_num_responses(const num_responses& value)  {
            m_num_responses = value;
        }
        void set_num_responds_block(const num_responds_block& value)  {
            m_num_responds_block = value;
        }
        void set_num_responds_flash(const num_responds_flash& value)  {
            m_num_responds_flash = value;
        }
        void set_num_responses_exch_pi(const num_responses_exch_pi& value)  {
            m_num_responses_exch_pi = value;
        }
        void set_num_responses_exch_ex(const num_responses_exch_ex& value)  {
            m_num_responses_exch_ex = value;
        }
        void set_num_full_size(const num_full_size& value)  {
            m_num_full_size = value;
        }
        void set_num_alloc_size(const num_alloc_size& value)  {
            m_num_alloc_size = value;
        }
        void set_num_price_miss(const num_price_miss& value)  {
            m_num_price_miss = value;
        }
        void set_num_too_late(const num_too_late& value)  {
            m_num_too_late = value;
        }
        void set_num_other_miss(const num_other_miss& value)  {
            m_num_other_miss = value;
        }
        void set_num_did_not_trade(const num_did_not_trade& value)  {
            m_num_did_not_trade = value;
        }
        void set_num_traded(const num_traded& value)  {
            m_num_traded = value;
        }
        void set_qty_traded(const qty_traded& value)  {
            m_qty_traded = value;
        }
        void set_vega_traded(const vega_traded& value)  {
            m_vega_traded = value;
        }
        void set_wt_vega_traded(const wt_vega_traded& value)  {
            m_wt_vega_traded = value;
        }
        void set_sum_width_traded(const sum_width_traded& value)  {
            m_sum_width_traded = value;
        }
        void set_sum_surf_edge_traded(const sum_surf_edge_traded& value)  {
            m_sum_surf_edge_traded = value;
        }
        void set_sum_m1_pn_ltraded(const sum_m1_pn_ltraded& value)  {
            m_sum_m1_pn_ltraded = value;
        }
        void set_sum_m10_pn_ltraded(const sum_m10_pn_ltraded& value)  {
            m_sum_m10_pn_ltraded = value;
        }
        void set_num_traded_block(const num_traded_block& value)  {
            m_num_traded_block = value;
        }
        void set_num_traded_flash(const num_traded_flash& value)  {
            m_num_traded_flash = value;
        }
        void set_num_traded_exch_pi(const num_traded_exch_pi& value)  {
            m_num_traded_exch_pi = value;
        }
        void set_num_traded_exch_ex(const num_traded_exch_ex& value)  {
            m_num_traded_exch_ex = value;
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
        void set_c_firm_excl_filter_list(const std::vector<c_firm_excl_filter>& list)  {
            m_c_firm_excl_filter = list;
        }
        void add_c_firm_excl_filter(const c_firm_excl_filter& item) {
            m_c_firm_excl_filter.emplace_back(item);
        }
        void set_c_firm_incl_filter_list(const std::vector<c_firm_incl_filter>& list)  {
            m_c_firm_incl_filter = list;
        }
        void add_c_firm_incl_filter(const c_firm_incl_filter& item) {
            m_c_firm_incl_filter.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ResponderMarkupVegaDir::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to ResponderMarkupVegaDir::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ResponderMarkupVegaDir::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const user_name & value) {
            set_user_name(value);
        }
        void set(const is_disabled & value) {
            set_is_disabled(value);
        }
        void set(const enabled_until & value) {
            set_enabled_until(value);
        }
        void set(const can_include_flex & value) {
            set_can_include_flex(value);
        }
        void set(const can_include_stock & value) {
            set_can_include_stock(value);
        }
        void set(const can_respond_sr & value) {
            set_can_respond_sr(value);
        }
        void set(const can_respond_exch & value) {
            set_can_respond_exch(value);
        }
        void set(const cp_flag & value) {
            set_cp_flag(value);
        }
        void set(const min_net_vega_ratio & value) {
            set_min_net_vega_ratio(value);
        }
        void set(const min_years & value) {
            set_min_years(value);
        }
        void set(const max_years & value) {
            set_max_years(value);
        }
        void set(const min_expiry & value) {
            set_min_expiry(value);
        }
        void set(const max_expiry & value) {
            set_max_expiry(value);
        }
        void set(const min_xdelta & value) {
            set_min_xdelta(value);
        }
        void set(const max_xdelta & value) {
            set_max_xdelta(value);
        }
        void set(const min_strike & value) {
            set_min_strike(value);
        }
        void set(const max_strike & value) {
            set_max_strike(value);
        }
        void set(const min_surf_edge_prem & value) {
            set_min_surf_edge_prem(value);
        }
        void set(const min_surf_edge_vol & value) {
            set_min_surf_edge_vol(value);
        }
        void set(const min_probability & value) {
            set_min_probability(value);
        }
        void set(const inc_fees_in_resp & value) {
            set_inc_fees_in_resp(value);
        }
        void set(const round_rule & value) {
            set_round_rule(value);
        }
        void set(const max_response_size & value) {
            set_max_response_size(value);
        }
        void set(const max_response_vega & value) {
            set_max_response_vega(value);
        }
        void set(const total_response_vega & value) {
            set_total_response_vega(value);
        }
        void set(const total_response_wt_vega & value) {
            set_total_response_wt_vega(value);
        }
        void set(const not_mkt_penny & value) {
            set_not_mkt_penny(value);
        }
        void set(const mkt_penny1 & value) {
            set_mkt_penny1(value);
        }
        void set(const mkt_penny2 & value) {
            set_mkt_penny2(value);
        }
        void set(const mkt_penny3p & value) {
            set_mkt_penny3p(value);
        }
        void set(const not_mkt_nickle & value) {
            set_not_mkt_nickle(value);
        }
        void set(const mkt_nickle1 & value) {
            set_mkt_nickle1(value);
        }
        void set(const mkt_nickle2 & value) {
            set_mkt_nickle2(value);
        }
        void set(const mkt_nickle3p & value) {
            set_mkt_nickle3p(value);
        }
        void set(const auto_hedge & value) {
            set_auto_hedge(value);
        }
        void set(const hedge_instrument & value) {
            set_hedge_instrument(value);
        }
        void set(const hedge_sec_key & value) {
            set_hedge_sec_key(value);
        }
        void set(const hedge_beta_ratio & value) {
            set_hedge_beta_ratio(value);
        }
        void set(const hedge_scope & value) {
            set_hedge_scope(value);
        }
        void set(const hedge_session & value) {
            set_hedge_session(value);
        }
        void set(const risk_group_id & value) {
            set_risk_group_id(value);
        }
        void set(const num_notices & value) {
            set_num_notices(value);
        }
        void set(const num_notice_block & value) {
            set_num_notice_block(value);
        }
        void set(const num_notice_flash & value) {
            set_num_notice_flash(value);
        }
        void set(const num_notice_exch_pi & value) {
            set_num_notice_exch_pi(value);
        }
        void set(const num_notice_exch_ex & value) {
            set_num_notice_exch_ex(value);
        }
        void set(const num_not_mkt_penny & value) {
            set_num_not_mkt_penny(value);
        }
        void set(const num_mkt_penny1 & value) {
            set_num_mkt_penny1(value);
        }
        void set(const num_mkt_penny2 & value) {
            set_num_mkt_penny2(value);
        }
        void set(const num_mkt_penny3p & value) {
            set_num_mkt_penny3p(value);
        }
        void set(const num_not_mkt_nickle & value) {
            set_num_not_mkt_nickle(value);
        }
        void set(const num_mkt_nickle1 & value) {
            set_num_mkt_nickle1(value);
        }
        void set(const num_mkt_nickle2 & value) {
            set_num_mkt_nickle2(value);
        }
        void set(const num_mkt_nickle3p & value) {
            set_num_mkt_nickle3p(value);
        }
        void set(const resp_disabled_skips & value) {
            set_resp_disabled_skips(value);
        }
        void set(const stock_disabled_skips & value) {
            set_stock_disabled_skips(value);
        }
        void set(const cp_flag_skips & value) {
            set_cp_flag_skips(value);
        }
        void set(const expiry_range_skips & value) {
            set_expiry_range_skips(value);
        }
        void set(const years_range_skips & value) {
            set_years_range_skips(value);
        }
        void set(const listed_flex_skips & value) {
            set_listed_flex_skips(value);
        }
        void set(const notice_price_skips & value) {
            set_notice_price_skips(value);
        }
        void set(const agg_size_limit_skips & value) {
            set_agg_size_limit_skips(value);
        }
        void set(const risk_group_limit_skips & value) {
            set_risk_group_limit_skips(value);
        }
        void set(const root_skips & value) {
            set_root_skips(value);
        }
        void set(const x_delta_range_skips & value) {
            set_x_delta_range_skips(value);
        }
        void set(const strike_range_skips & value) {
            set_strike_range_skips(value);
        }
        void set(const min_vega_ratio_skips & value) {
            set_min_vega_ratio_skips(value);
        }
        void set(const probability_skips & value) {
            set_probability_skips(value);
        }
        void set(const num_responses & value) {
            set_num_responses(value);
        }
        void set(const num_responds_block & value) {
            set_num_responds_block(value);
        }
        void set(const num_responds_flash & value) {
            set_num_responds_flash(value);
        }
        void set(const num_responses_exch_pi & value) {
            set_num_responses_exch_pi(value);
        }
        void set(const num_responses_exch_ex & value) {
            set_num_responses_exch_ex(value);
        }
        void set(const num_full_size & value) {
            set_num_full_size(value);
        }
        void set(const num_alloc_size & value) {
            set_num_alloc_size(value);
        }
        void set(const num_price_miss & value) {
            set_num_price_miss(value);
        }
        void set(const num_too_late & value) {
            set_num_too_late(value);
        }
        void set(const num_other_miss & value) {
            set_num_other_miss(value);
        }
        void set(const num_did_not_trade & value) {
            set_num_did_not_trade(value);
        }
        void set(const num_traded & value) {
            set_num_traded(value);
        }
        void set(const qty_traded & value) {
            set_qty_traded(value);
        }
        void set(const vega_traded & value) {
            set_vega_traded(value);
        }
        void set(const wt_vega_traded & value) {
            set_wt_vega_traded(value);
        }
        void set(const sum_width_traded & value) {
            set_sum_width_traded(value);
        }
        void set(const sum_surf_edge_traded & value) {
            set_sum_surf_edge_traded(value);
        }
        void set(const sum_m1_pn_ltraded & value) {
            set_sum_m1_pn_ltraded(value);
        }
        void set(const sum_m10_pn_ltraded & value) {
            set_sum_m10_pn_ltraded(value);
        }
        void set(const num_traded_block & value) {
            set_num_traded_block(value);
        }
        void set(const num_traded_flash & value) {
            set_num_traded_flash(value);
        }
        void set(const num_traded_exch_pi & value) {
            set_num_traded_exch_pi(value);
        }
        void set(const num_traded_exch_ex & value) {
            set_num_traded_exch_ex(value);
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
        void set(const c_firm_excl_filter & value) {
            add_c_firm_excl_filter(value);
        }
        void set(const c_firm_incl_filter & value) {
            add_c_firm_incl_filter(value);
        }

        void set(const ResponderMarkupVegaDir & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_user_name);
            set(value.m_is_disabled);
            set(value.m_enabled_until);
            set(value.m_can_include_flex);
            set(value.m_can_include_stock);
            set(value.m_can_respond_sr);
            set(value.m_can_respond_exch);
            set(value.m_cp_flag);
            set(value.m_min_net_vega_ratio);
            set(value.m_min_years);
            set(value.m_max_years);
            set(value.m_min_expiry);
            set(value.m_max_expiry);
            set(value.m_min_xdelta);
            set(value.m_max_xdelta);
            set(value.m_min_strike);
            set(value.m_max_strike);
            set(value.m_min_surf_edge_prem);
            set(value.m_min_surf_edge_vol);
            set(value.m_min_probability);
            set(value.m_inc_fees_in_resp);
            set(value.m_round_rule);
            set(value.m_max_response_size);
            set(value.m_max_response_vega);
            set(value.m_total_response_vega);
            set(value.m_total_response_wt_vega);
            set(value.m_not_mkt_penny);
            set(value.m_mkt_penny1);
            set(value.m_mkt_penny2);
            set(value.m_mkt_penny3p);
            set(value.m_not_mkt_nickle);
            set(value.m_mkt_nickle1);
            set(value.m_mkt_nickle2);
            set(value.m_mkt_nickle3p);
            set(value.m_auto_hedge);
            set(value.m_hedge_instrument);
            set(value.m_hedge_sec_key);
            set(value.m_hedge_beta_ratio);
            set(value.m_hedge_scope);
            set(value.m_hedge_session);
            set(value.m_risk_group_id);
            set(value.m_num_notices);
            set(value.m_num_notice_block);
            set(value.m_num_notice_flash);
            set(value.m_num_notice_exch_pi);
            set(value.m_num_notice_exch_ex);
            set(value.m_num_not_mkt_penny);
            set(value.m_num_mkt_penny1);
            set(value.m_num_mkt_penny2);
            set(value.m_num_mkt_penny3p);
            set(value.m_num_not_mkt_nickle);
            set(value.m_num_mkt_nickle1);
            set(value.m_num_mkt_nickle2);
            set(value.m_num_mkt_nickle3p);
            set(value.m_resp_disabled_skips);
            set(value.m_stock_disabled_skips);
            set(value.m_cp_flag_skips);
            set(value.m_expiry_range_skips);
            set(value.m_years_range_skips);
            set(value.m_listed_flex_skips);
            set(value.m_notice_price_skips);
            set(value.m_agg_size_limit_skips);
            set(value.m_risk_group_limit_skips);
            set(value.m_root_skips);
            set(value.m_x_delta_range_skips);
            set(value.m_strike_range_skips);
            set(value.m_min_vega_ratio_skips);
            set(value.m_probability_skips);
            set(value.m_num_responses);
            set(value.m_num_responds_block);
            set(value.m_num_responds_flash);
            set(value.m_num_responses_exch_pi);
            set(value.m_num_responses_exch_ex);
            set(value.m_num_full_size);
            set(value.m_num_alloc_size);
            set(value.m_num_price_miss);
            set(value.m_num_too_late);
            set(value.m_num_other_miss);
            set(value.m_num_did_not_trade);
            set(value.m_num_traded);
            set(value.m_qty_traded);
            set(value.m_vega_traded);
            set(value.m_wt_vega_traded);
            set(value.m_sum_width_traded);
            set(value.m_sum_surf_edge_traded);
            set(value.m_sum_m1_pn_ltraded);
            set(value.m_sum_m10_pn_ltraded);
            set(value.m_num_traded_block);
            set(value.m_num_traded_flash);
            set(value.m_num_traded_exch_pi);
            set(value.m_num_traded_exch_ex);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);set_c_firm_excl_filter_list(value.m_c_firm_excl_filter);set_c_firm_incl_filter_list(value.m_c_firm_incl_filter);
        }

        ResponderMarkupVegaDir() {
            m__meta.set_message_type("ResponderMarkupVegaDir");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2500, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2500, length);
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
             *this = ResponderMarkupVegaDir{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeUserName() const {
            return !(m_user_name.empty());
        }
        bool IncludeEnabledUntil() const {
            return (m_enabled_until.time_since_epoch().count() != 0);
        }
        bool IncludeMinNetVegaRatio() const {
            return !(m_min_net_vega_ratio == 0.0);
        }
        bool IncludeMinYears() const {
            return !(m_min_years == 0.0);
        }
        bool IncludeMaxYears() const {
            return !(m_max_years == 0.0);
        }
        bool IncludeMinExpiry() const {
            return (m_min_expiry.time_since_epoch().count() != 0);
        }
        bool IncludeMaxExpiry() const {
            return (m_max_expiry.time_since_epoch().count() != 0);
        }
        bool IncludeMinXdelta() const {
            return !(m_min_xdelta == 0.0);
        }
        bool IncludeMaxXdelta() const {
            return !(m_max_xdelta == 0.0);
        }
        bool IncludeMinStrike() const {
            return !(m_min_strike == 0.0);
        }
        bool IncludeMaxStrike() const {
            return !(m_max_strike == 0.0);
        }
        bool IncludeMinSurfEdgePrem() const {
            return !(m_min_surf_edge_prem == 0.0);
        }
        bool IncludeMinSurfEdgeVol() const {
            return !(m_min_surf_edge_vol == 0.0);
        }
        bool IncludeMinProbability() const {
            return !(m_min_probability == 0.0);
        }
        bool IncludeMaxResponseSize() const {
            return !(m_max_response_size == 0);
        }
        bool IncludeMaxResponseVega() const {
            return !(m_max_response_vega == 0.0);
        }
        bool IncludeTotalResponseVega() const {
            return !(m_total_response_vega == 0.0);
        }
        bool IncludeTotalResponseWtVega() const {
            return !(m_total_response_wt_vega == 0.0);
        }
        bool IncludeHedgeSecKey() const {
            return (m_hedge_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeHedgeBetaRatio() const {
            return !(m_hedge_beta_ratio == 0.0);
        }
        bool IncludeRiskGroupId() const {
            return !(m_risk_group_id == 0);
        }
        bool IncludeNumNotices() const {
            return !(m_num_notices == 0);
        }
        bool IncludeNumNoticeBlock() const {
            return !(m_num_notice_block == 0);
        }
        bool IncludeNumNoticeFlash() const {
            return !(m_num_notice_flash == 0);
        }
        bool IncludeNumNoticeExchPi() const {
            return !(m_num_notice_exch_pi == 0);
        }
        bool IncludeNumNoticeExchEx() const {
            return !(m_num_notice_exch_ex == 0);
        }
        bool IncludeNumNotMktPenny() const {
            return !(m_num_not_mkt_penny == 0);
        }
        bool IncludeNumMktPenny1() const {
            return !(m_num_mkt_penny1 == 0);
        }
        bool IncludeNumMktPenny2() const {
            return !(m_num_mkt_penny2 == 0);
        }
        bool IncludeNumMktPenny3p() const {
            return !(m_num_mkt_penny3p == 0);
        }
        bool IncludeNumNotMktNickle() const {
            return !(m_num_not_mkt_nickle == 0);
        }
        bool IncludeNumMktNickle1() const {
            return !(m_num_mkt_nickle1 == 0);
        }
        bool IncludeNumMktNickle2() const {
            return !(m_num_mkt_nickle2 == 0);
        }
        bool IncludeNumMktNickle3p() const {
            return !(m_num_mkt_nickle3p == 0);
        }
        bool IncludeRespDisabledSkips() const {
            return !(m_resp_disabled_skips == 0);
        }
        bool IncludeStockDisabledSkips() const {
            return !(m_stock_disabled_skips == 0);
        }
        bool IncludeCpFlagSkips() const {
            return !(m_cp_flag_skips == 0);
        }
        bool IncludeExpiryRangeSkips() const {
            return !(m_expiry_range_skips == 0);
        }
        bool IncludeYearsRangeSkips() const {
            return !(m_years_range_skips == 0);
        }
        bool IncludeListedFlexSkips() const {
            return !(m_listed_flex_skips == 0);
        }
        bool IncludeNoticePriceSkips() const {
            return !(m_notice_price_skips == 0);
        }
        bool IncludeAggSizeLimitSkips() const {
            return !(m_agg_size_limit_skips == 0);
        }
        bool IncludeRiskGroupLimitSkips() const {
            return !(m_risk_group_limit_skips == 0);
        }
        bool IncludeRootSkips() const {
            return !(m_root_skips == 0);
        }
        bool IncludeXDeltaRangeSkips() const {
            return !(m_x_delta_range_skips == 0);
        }
        bool IncludeStrikeRangeSkips() const {
            return !(m_strike_range_skips == 0);
        }
        bool IncludeMinVegaRatioSkips() const {
            return !(m_min_vega_ratio_skips == 0);
        }
        bool IncludeProbabilitySkips() const {
            return !(m_probability_skips == 0);
        }
        bool IncludeNumResponses() const {
            return !(m_num_responses == 0);
        }
        bool IncludeNumRespondsBlock() const {
            return !(m_num_responds_block == 0);
        }
        bool IncludeNumRespondsFlash() const {
            return !(m_num_responds_flash == 0);
        }
        bool IncludeNumResponsesExchPi() const {
            return !(m_num_responses_exch_pi == 0);
        }
        bool IncludeNumResponsesExchEx() const {
            return !(m_num_responses_exch_ex == 0);
        }
        bool IncludeNumFullSize() const {
            return !(m_num_full_size == 0);
        }
        bool IncludeNumAllocSize() const {
            return !(m_num_alloc_size == 0);
        }
        bool IncludeNumPriceMiss() const {
            return !(m_num_price_miss == 0);
        }
        bool IncludeNumTooLate() const {
            return !(m_num_too_late == 0);
        }
        bool IncludeNumOtherMiss() const {
            return !(m_num_other_miss == 0);
        }
        bool IncludeNumDidNotTrade() const {
            return !(m_num_did_not_trade == 0);
        }
        bool IncludeNumTraded() const {
            return !(m_num_traded == 0);
        }
        bool IncludeQtyTraded() const {
            return !(m_qty_traded == 0);
        }
        bool IncludeVegaTraded() const {
            return !(m_vega_traded == 0.0);
        }
        bool IncludeWtVegaTraded() const {
            return !(m_wt_vega_traded == 0.0);
        }
        bool IncludeSumWidthTraded() const {
            return !(m_sum_width_traded == 0.0);
        }
        bool IncludeSumSurfEdgeTraded() const {
            return !(m_sum_surf_edge_traded == 0.0);
        }
        bool IncludeSumM1PnLtraded() const {
            return !(m_sum_m1_pn_ltraded == 0.0);
        }
        bool IncludeSumM10PnLtraded() const {
            return !(m_sum_m10_pn_ltraded == 0.0);
        }
        bool IncludeNumTradedBlock() const {
            return !(m_num_traded_block == 0);
        }
        bool IncludeNumTradedFlash() const {
            return !(m_num_traded_flash == 0);
        }
        bool IncludeNumTradedExchPi() const {
            return !(m_num_traded_exch_pi == 0);
        }
        bool IncludeNumTradedExchEx() const {
            return !(m_num_traded_exch_ex == 0);
        }
        bool IncludeModifiedBy() const {
            return !(m_modified_by.empty());
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeCFirmExclFilter() const {
            return (!m_c_firm_excl_filter.empty());
        }
        bool IncludeCFirmInclFilter() const {
            return (!m_c_firm_incl_filter.empty());
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
            if ( IncludeUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_user_name);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_disabled)));
            if ( IncludeEnabledUntil()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(137, m_enabled_until);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_include_flex)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_include_stock)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(178,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_respond_sr)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(179,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_respond_exch)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(104,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CallPut>(m_cp_flag)));
            if ( IncludeMinNetVegaRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(138,m_min_net_vega_ratio);
            }
            if ( IncludeMinYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(105,m_min_years);
            }
            if ( IncludeMaxYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_max_years);
            }
            if ( IncludeMinExpiry()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(107, m_min_expiry);
            }
            if ( IncludeMaxExpiry()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(108, m_max_expiry);
            }
            if ( IncludeMinXdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_min_xdelta);
            }
            if ( IncludeMaxXdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(110,m_max_xdelta);
            }
            if ( IncludeMinStrike()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(111,m_min_strike);
            }
            if ( IncludeMaxStrike()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(112,m_max_strike);
            }
            if ( IncludeMinSurfEdgePrem()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(113,m_min_surf_edge_prem);
            }
            if ( IncludeMinSurfEdgeVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(114,m_min_surf_edge_vol);
            }
            if ( IncludeMinProbability()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(184,m_min_probability);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_inc_fees_in_resp)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(116,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RoundRule>(m_round_rule)));
            if ( IncludeMaxResponseSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(117,m_max_response_size);
            }
            if ( IncludeMaxResponseVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_max_response_vega);
            }
            if ( IncludeTotalResponseVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(119,m_total_response_vega);
            }
            if ( IncludeTotalResponseWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(120,m_total_response_wt_vega);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(185,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_not_mkt_penny)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(186,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_mkt_penny1)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(187,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_mkt_penny2)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(188,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_mkt_penny3p)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(189,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_not_mkt_nickle)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(190,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_mkt_nickle1)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(191,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_mkt_nickle2)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(192,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_mkt_nickle3p)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>(m_auto_hedge)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(122,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeInst>(m_hedge_instrument)));
            if ( IncludeHedgeSecKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_hedge_sec_key{};
                m_hedge_sec_key.setCodecExpiryKey(expiryKeyLayout_hedge_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(123, expiryKeyLayout_hedge_sec_key);
            }
            if ( IncludeHedgeBetaRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_hedge_beta_ratio);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(125,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeScope>(m_hedge_scope)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(126,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>(m_hedge_session)));
            if ( IncludeRiskGroupId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(127,m_risk_group_id);
            }
            if ( IncludeNumNotices()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(129,m_num_notices);
            }
            if ( IncludeNumNoticeBlock()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(193,m_num_notice_block);
            }
            if ( IncludeNumNoticeFlash()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(194,m_num_notice_flash);
            }
            if ( IncludeNumNoticeExchPi()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(195,m_num_notice_exch_pi);
            }
            if ( IncludeNumNoticeExchEx()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(196,m_num_notice_exch_ex);
            }
            if ( IncludeNumNotMktPenny()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(197,m_num_not_mkt_penny);
            }
            if ( IncludeNumMktPenny1()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(198,m_num_mkt_penny1);
            }
            if ( IncludeNumMktPenny2()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(199,m_num_mkt_penny2);
            }
            if ( IncludeNumMktPenny3p()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(200,m_num_mkt_penny3p);
            }
            if ( IncludeNumNotMktNickle()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(201,m_num_not_mkt_nickle);
            }
            if ( IncludeNumMktNickle1()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(202,m_num_mkt_nickle1);
            }
            if ( IncludeNumMktNickle2()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(203,m_num_mkt_nickle2);
            }
            if ( IncludeNumMktNickle3p()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(204,m_num_mkt_nickle3p);
            }
            if ( IncludeRespDisabledSkips()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(158,m_resp_disabled_skips);
            }
            if ( IncludeStockDisabledSkips()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(159,m_stock_disabled_skips);
            }
            if ( IncludeCpFlagSkips()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(160,m_cp_flag_skips);
            }
            if ( IncludeExpiryRangeSkips()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(161,m_expiry_range_skips);
            }
            if ( IncludeYearsRangeSkips()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(162,m_years_range_skips);
            }
            if ( IncludeListedFlexSkips()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(163,m_listed_flex_skips);
            }
            if ( IncludeNoticePriceSkips()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(164,m_notice_price_skips);
            }
            if ( IncludeAggSizeLimitSkips()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(165,m_agg_size_limit_skips);
            }
            if ( IncludeRiskGroupLimitSkips()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(166,m_risk_group_limit_skips);
            }
            if ( IncludeRootSkips()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(167,m_root_skips);
            }
            if ( IncludeXDeltaRangeSkips()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(168,m_x_delta_range_skips);
            }
            if ( IncludeStrikeRangeSkips()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(169,m_strike_range_skips);
            }
            if ( IncludeMinVegaRatioSkips()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(170,m_min_vega_ratio_skips);
            }
            if ( IncludeProbabilitySkips()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(205,m_probability_skips);
            }
            if ( IncludeNumResponses()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(131,m_num_responses);
            }
            if ( IncludeNumRespondsBlock()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(206,m_num_responds_block);
            }
            if ( IncludeNumRespondsFlash()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(207,m_num_responds_flash);
            }
            if ( IncludeNumResponsesExchPi()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(208,m_num_responses_exch_pi);
            }
            if ( IncludeNumResponsesExchEx()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(209,m_num_responses_exch_ex);
            }
            if ( IncludeNumFullSize()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(171,m_num_full_size);
            }
            if ( IncludeNumAllocSize()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(172,m_num_alloc_size);
            }
            if ( IncludeNumPriceMiss()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(173,m_num_price_miss);
            }
            if ( IncludeNumTooLate()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(174,m_num_too_late);
            }
            if ( IncludeNumOtherMiss()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(175,m_num_other_miss);
            }
            if ( IncludeNumDidNotTrade()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(176,m_num_did_not_trade);
            }
            if ( IncludeNumTraded()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(210,m_num_traded);
            }
            if ( IncludeQtyTraded()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(132,m_qty_traded);
            }
            if ( IncludeVegaTraded()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(133,m_vega_traded);
            }
            if ( IncludeWtVegaTraded()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(177,m_wt_vega_traded);
            }
            if ( IncludeSumWidthTraded()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(211,m_sum_width_traded);
            }
            if ( IncludeSumSurfEdgeTraded()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(212,m_sum_surf_edge_traded);
            }
            if ( IncludeSumM1PnLtraded()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(213,m_sum_m1_pn_ltraded);
            }
            if ( IncludeSumM10PnLtraded()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(214,m_sum_m10_pn_ltraded);
            }
            if ( IncludeNumTradedBlock()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(215,m_num_traded_block);
            }
            if ( IncludeNumTradedFlash()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(216,m_num_traded_flash);
            }
            if ( IncludeNumTradedExchPi()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(217,m_num_traded_exch_pi);
            }
            if ( IncludeNumTradedExchEx()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(218,m_num_traded_exch_ex);
            }
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(134,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(135,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(136, m_timestamp);
            }
            if ( IncludeCFirmExclFilter()) {
                for (auto& item : m_c_firm_excl_filter) {
					totalSize += SRProtobufCPP::TagCodec::Size(182, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeCFirmInclFilter()) {
                for (auto& item : m_c_firm_incl_filter) {
					totalSize += SRProtobufCPP::TagCodec::Size(180, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
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
            if ( IncludeUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_user_name));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_disabled)));
            if ( IncludeEnabledUntil()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 137, m_enabled_until);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_include_flex)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_include_stock)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,178,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_respond_sr)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,179,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_respond_exch)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,104,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CallPut>(m_cp_flag)));
            if ( IncludeMinNetVegaRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,138,m_min_net_vega_ratio);
            }
            if ( IncludeMinYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,105,m_min_years);
            }
            if ( IncludeMaxYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_max_years);
            }
            if ( IncludeMinExpiry()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 107, m_min_expiry);
            }
            if ( IncludeMaxExpiry()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 108, m_max_expiry);
            }
            if ( IncludeMinXdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_min_xdelta);
            }
            if ( IncludeMaxXdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,110,m_max_xdelta);
            }
            if ( IncludeMinStrike()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,111,m_min_strike);
            }
            if ( IncludeMaxStrike()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,112,m_max_strike);
            }
            if ( IncludeMinSurfEdgePrem()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,113,m_min_surf_edge_prem);
            }
            if ( IncludeMinSurfEdgeVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,114,m_min_surf_edge_vol);
            }
            if ( IncludeMinProbability()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,184,m_min_probability);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_inc_fees_in_resp)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,116,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RoundRule>(m_round_rule)));
            if ( IncludeMaxResponseSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,117,m_max_response_size);
            }
            if ( IncludeMaxResponseVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_max_response_vega);
            }
            if ( IncludeTotalResponseVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,119,m_total_response_vega);
            }
            if ( IncludeTotalResponseWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,120,m_total_response_wt_vega);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,185,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_not_mkt_penny)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,186,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_mkt_penny1)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,187,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_mkt_penny2)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,188,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_mkt_penny3p)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,189,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_not_mkt_nickle)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,190,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_mkt_nickle1)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,191,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_mkt_nickle2)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,192,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_mkt_nickle3p)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>(m_auto_hedge)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,122,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeInst>(m_hedge_instrument)));
            if ( IncludeHedgeSecKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_hedge_sec_key{};
                m_hedge_sec_key.setCodecExpiryKey(expiryKeyLayout_hedge_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 123, expiryKeyLayout_hedge_sec_key);
            }
            if ( IncludeHedgeBetaRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_hedge_beta_ratio);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,125,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeScope>(m_hedge_scope)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,126,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>(m_hedge_session)));
            if ( IncludeRiskGroupId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,127,m_risk_group_id);
            }
            if ( IncludeNumNotices()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,129,m_num_notices);
            }
            if ( IncludeNumNoticeBlock()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,193,m_num_notice_block);
            }
            if ( IncludeNumNoticeFlash()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,194,m_num_notice_flash);
            }
            if ( IncludeNumNoticeExchPi()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,195,m_num_notice_exch_pi);
            }
            if ( IncludeNumNoticeExchEx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,196,m_num_notice_exch_ex);
            }
            if ( IncludeNumNotMktPenny()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,197,m_num_not_mkt_penny);
            }
            if ( IncludeNumMktPenny1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,198,m_num_mkt_penny1);
            }
            if ( IncludeNumMktPenny2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,199,m_num_mkt_penny2);
            }
            if ( IncludeNumMktPenny3p()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,200,m_num_mkt_penny3p);
            }
            if ( IncludeNumNotMktNickle()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,201,m_num_not_mkt_nickle);
            }
            if ( IncludeNumMktNickle1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,202,m_num_mkt_nickle1);
            }
            if ( IncludeNumMktNickle2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,203,m_num_mkt_nickle2);
            }
            if ( IncludeNumMktNickle3p()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,204,m_num_mkt_nickle3p);
            }
            if ( IncludeRespDisabledSkips()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,158,m_resp_disabled_skips);
            }
            if ( IncludeStockDisabledSkips()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,159,m_stock_disabled_skips);
            }
            if ( IncludeCpFlagSkips()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,160,m_cp_flag_skips);
            }
            if ( IncludeExpiryRangeSkips()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,161,m_expiry_range_skips);
            }
            if ( IncludeYearsRangeSkips()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,162,m_years_range_skips);
            }
            if ( IncludeListedFlexSkips()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,163,m_listed_flex_skips);
            }
            if ( IncludeNoticePriceSkips()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,164,m_notice_price_skips);
            }
            if ( IncludeAggSizeLimitSkips()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,165,m_agg_size_limit_skips);
            }
            if ( IncludeRiskGroupLimitSkips()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,166,m_risk_group_limit_skips);
            }
            if ( IncludeRootSkips()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,167,m_root_skips);
            }
            if ( IncludeXDeltaRangeSkips()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,168,m_x_delta_range_skips);
            }
            if ( IncludeStrikeRangeSkips()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,169,m_strike_range_skips);
            }
            if ( IncludeMinVegaRatioSkips()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,170,m_min_vega_ratio_skips);
            }
            if ( IncludeProbabilitySkips()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,205,m_probability_skips);
            }
            if ( IncludeNumResponses()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,131,m_num_responses);
            }
            if ( IncludeNumRespondsBlock()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,206,m_num_responds_block);
            }
            if ( IncludeNumRespondsFlash()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,207,m_num_responds_flash);
            }
            if ( IncludeNumResponsesExchPi()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,208,m_num_responses_exch_pi);
            }
            if ( IncludeNumResponsesExchEx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,209,m_num_responses_exch_ex);
            }
            if ( IncludeNumFullSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,171,m_num_full_size);
            }
            if ( IncludeNumAllocSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,172,m_num_alloc_size);
            }
            if ( IncludeNumPriceMiss()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,173,m_num_price_miss);
            }
            if ( IncludeNumTooLate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,174,m_num_too_late);
            }
            if ( IncludeNumOtherMiss()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,175,m_num_other_miss);
            }
            if ( IncludeNumDidNotTrade()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,176,m_num_did_not_trade);
            }
            if ( IncludeNumTraded()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,210,m_num_traded);
            }
            if ( IncludeQtyTraded()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,132,m_qty_traded);
            }
            if ( IncludeVegaTraded()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,133,m_vega_traded);
            }
            if ( IncludeWtVegaTraded()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,177,m_wt_vega_traded);
            }
            if ( IncludeSumWidthTraded()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,211,m_sum_width_traded);
            }
            if ( IncludeSumSurfEdgeTraded()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,212,m_sum_surf_edge_traded);
            }
            if ( IncludeSumM1PnLtraded()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,213,m_sum_m1_pn_ltraded);
            }
            if ( IncludeSumM10PnLtraded()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,214,m_sum_m10_pn_ltraded);
            }
            if ( IncludeNumTradedBlock()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,215,m_num_traded_block);
            }
            if ( IncludeNumTradedFlash()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,216,m_num_traded_flash);
            }
            if ( IncludeNumTradedExchPi()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,217,m_num_traded_exch_pi);
            }
            if ( IncludeNumTradedExchEx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,218,m_num_traded_exch_ex);
            }
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,134,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,135,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 136, m_timestamp);
            }
            if ( IncludeCFirmExclFilter()) {
                for (auto& item : m_c_firm_excl_filter) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 182, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeCFirmInclFilter()) {
                for (auto& item : m_c_firm_incl_filter) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 180, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
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
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 101: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_disabled = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 137: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_enabled_until = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 102: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_include_flex = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_include_stock = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 178: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_respond_sr = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 179: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_respond_exch = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 104: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cp_flag = static_cast<spiderrock::protobuf::api::CallPut>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 138: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_net_vega_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 105: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 107: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_min_expiry = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 108: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_max_expiry = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_xdelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 110: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_xdelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 111: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_min_strike = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_max_strike = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 113: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_surf_edge_prem = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 114: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_surf_edge_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_probability = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_inc_fees_in_resp = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 116: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_round_rule = static_cast<spiderrock::protobuf::api::RoundRule>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 117: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_response_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_response_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 119: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_total_response_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 120: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_total_response_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 185: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_not_mkt_penny = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 186: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_mkt_penny1 = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 187: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_mkt_penny2 = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 188: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_mkt_penny3p = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 189: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_not_mkt_nickle = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 190: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_mkt_nickle1 = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 191: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_mkt_nickle2 = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 192: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_mkt_nickle3p = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 121: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auto_hedge = static_cast<spiderrock::protobuf::api::AutoHedge>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 122: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_instrument = static_cast<spiderrock::protobuf::api::HedgeInst>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 123: {
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_hedge_sec_key.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_hedge_beta_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 125: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_scope = static_cast<spiderrock::protobuf::api::HedgeScope>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 126: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_session = static_cast<spiderrock::protobuf::api::MarketSession>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_risk_group_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 129: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notices = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_block = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 194: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_flash = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 195: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_exch_pi = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_exch_ex = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 197: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_not_mkt_penny = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 198: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_mkt_penny1 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_mkt_penny2 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 200: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_mkt_penny3p = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 201: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_not_mkt_nickle = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_mkt_nickle1 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 203: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_mkt_nickle2 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 204: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_mkt_nickle3p = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 158: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_resp_disabled_skips = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 159: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_stock_disabled_skips = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_cp_flag_skips = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 161: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_expiry_range_skips = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 162: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_years_range_skips = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_listed_flex_skips = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 164: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_notice_price_skips = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 165: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_agg_size_limit_skips = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_risk_group_limit_skips = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 167: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_root_skips = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 168: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_x_delta_range_skips = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_strike_range_skips = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 170: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_min_vega_ratio_skips = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_probability_skips = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 131: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_responses = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 206: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_responds_block = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 207: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_responds_flash = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_responses_exch_pi = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 209: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_responses_exch_ex = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 171: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_full_size = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_alloc_size = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 173: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_price_miss = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 174: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_too_late = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_other_miss = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 176: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_did_not_trade = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 210: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_traded = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 132: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_qty_traded = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_vega_traded = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 177: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_wt_vega_traded = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_sum_width_traded = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 212: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_sum_surf_edge_traded = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 213: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_sum_m1_pn_ltraded = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_sum_m10_pn_ltraded = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 215: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_traded_block = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 216: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_traded_flash = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_traded_exch_pi = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 218: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_traded_exch_ex = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 134: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 135: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 182: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            c_firm_excl_filter item_c_firm_excl_filter;
                            item_c_firm_excl_filter.Decode(pos, pos+length);  
                            m_c_firm_excl_filter.emplace_back(item_c_firm_excl_filter);
                        }
                        break;
                    }
                    case 180: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            c_firm_incl_filter item_c_firm_incl_filter;
                            item_c_firm_incl_filter.Decode(pos, pos+length);  
                            m_c_firm_incl_filter.emplace_back(item_c_firm_incl_filter);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::_meta>() const { return ResponderMarkupVegaDir::_meta{ m__meta}; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::pkey>() const { return ResponderMarkupVegaDir::pkey{ m_pkey}; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::user_name>() const { return m_user_name; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::is_disabled>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_disabled)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::enabled_until>() const { return m_enabled_until; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::can_include_flex>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_include_flex)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::can_include_stock>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_include_stock)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::can_respond_sr>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_respond_sr)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::can_respond_exch>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_respond_exch)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::cp_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CallPut>( m_cp_flag)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::min_net_vega_ratio>() const { return m_min_net_vega_ratio; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::min_years>() const { return m_min_years; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::max_years>() const { return m_max_years; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::min_expiry>() const { return m_min_expiry; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::max_expiry>() const { return m_max_expiry; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::min_xdelta>() const { return m_min_xdelta; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::max_xdelta>() const { return m_max_xdelta; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::min_strike>() const { return m_min_strike; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::max_strike>() const { return m_max_strike; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::min_surf_edge_prem>() const { return m_min_surf_edge_prem; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::min_surf_edge_vol>() const { return m_min_surf_edge_vol; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::min_probability>() const { return m_min_probability; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::inc_fees_in_resp>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_inc_fees_in_resp)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::round_rule>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RoundRule>( m_round_rule)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::max_response_size>() const { return m_max_response_size; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::max_response_vega>() const { return m_max_response_vega; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::total_response_vega>() const { return m_total_response_vega; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::total_response_wt_vega>() const { return m_total_response_wt_vega; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::not_mkt_penny>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_not_mkt_penny)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::mkt_penny1>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_mkt_penny1)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::mkt_penny2>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_mkt_penny2)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::mkt_penny3p>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_mkt_penny3p)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::not_mkt_nickle>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_not_mkt_nickle)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::mkt_nickle1>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_mkt_nickle1)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::mkt_nickle2>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_mkt_nickle2)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::mkt_nickle3p>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_mkt_nickle3p)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::auto_hedge>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>( m_auto_hedge)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::hedge_instrument>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeInst>( m_hedge_instrument)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::hedge_sec_key>() const { return ResponderMarkupVegaDir::hedge_sec_key{ m_hedge_sec_key}; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::hedge_beta_ratio>() const { return m_hedge_beta_ratio; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::hedge_scope>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeScope>( m_hedge_scope)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::hedge_session>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>( m_hedge_session)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::risk_group_id>() const { return m_risk_group_id; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_notices>() const { return m_num_notices; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_notice_block>() const { return m_num_notice_block; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_notice_flash>() const { return m_num_notice_flash; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_notice_exch_pi>() const { return m_num_notice_exch_pi; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_notice_exch_ex>() const { return m_num_notice_exch_ex; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_not_mkt_penny>() const { return m_num_not_mkt_penny; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_mkt_penny1>() const { return m_num_mkt_penny1; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_mkt_penny2>() const { return m_num_mkt_penny2; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_mkt_penny3p>() const { return m_num_mkt_penny3p; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_not_mkt_nickle>() const { return m_num_not_mkt_nickle; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_mkt_nickle1>() const { return m_num_mkt_nickle1; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_mkt_nickle2>() const { return m_num_mkt_nickle2; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_mkt_nickle3p>() const { return m_num_mkt_nickle3p; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::resp_disabled_skips>() const { return m_resp_disabled_skips; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::stock_disabled_skips>() const { return m_stock_disabled_skips; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::cp_flag_skips>() const { return m_cp_flag_skips; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::expiry_range_skips>() const { return m_expiry_range_skips; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::years_range_skips>() const { return m_years_range_skips; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::listed_flex_skips>() const { return m_listed_flex_skips; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::notice_price_skips>() const { return m_notice_price_skips; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::agg_size_limit_skips>() const { return m_agg_size_limit_skips; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::risk_group_limit_skips>() const { return m_risk_group_limit_skips; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::root_skips>() const { return m_root_skips; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::x_delta_range_skips>() const { return m_x_delta_range_skips; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::strike_range_skips>() const { return m_strike_range_skips; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::min_vega_ratio_skips>() const { return m_min_vega_ratio_skips; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::probability_skips>() const { return m_probability_skips; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_responses>() const { return m_num_responses; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_responds_block>() const { return m_num_responds_block; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_responds_flash>() const { return m_num_responds_flash; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_responses_exch_pi>() const { return m_num_responses_exch_pi; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_responses_exch_ex>() const { return m_num_responses_exch_ex; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_full_size>() const { return m_num_full_size; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_alloc_size>() const { return m_num_alloc_size; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_price_miss>() const { return m_num_price_miss; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_too_late>() const { return m_num_too_late; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_other_miss>() const { return m_num_other_miss; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_did_not_trade>() const { return m_num_did_not_trade; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_traded>() const { return m_num_traded; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::qty_traded>() const { return m_qty_traded; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::vega_traded>() const { return m_vega_traded; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::wt_vega_traded>() const { return m_wt_vega_traded; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::sum_width_traded>() const { return m_sum_width_traded; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::sum_surf_edge_traded>() const { return m_sum_surf_edge_traded; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::sum_m1_pn_ltraded>() const { return m_sum_m1_pn_ltraded; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::sum_m10_pn_ltraded>() const { return m_sum_m10_pn_ltraded; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_traded_block>() const { return m_num_traded_block; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_traded_flash>() const { return m_num_traded_flash; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_traded_exch_pi>() const { return m_num_traded_exch_pi; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_traded_exch_ex>() const { return m_num_traded_exch_ex; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::modified_by>() const { return m_modified_by; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::timestamp>() const { return m_timestamp; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::c_firm_excl_filter>(int i) const { return ResponderMarkupVegaDir::c_firm_excl_filter{ get_c_firm_excl_filter(i)}; }
    template<> inline int ResponderMarkupVegaDir::count<ResponderMarkupVegaDir::c_firm_excl_filter>() const { return static_cast<int>( m_c_firm_excl_filter.size()); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::c_firm_incl_filter>(int i) const { return ResponderMarkupVegaDir::c_firm_incl_filter{ get_c_firm_incl_filter(i)}; }
    template<> inline int ResponderMarkupVegaDir::count<ResponderMarkupVegaDir::c_firm_incl_filter>() const { return static_cast<int>( m_c_firm_incl_filter.size()); }
    template<> inline const auto ResponderMarkupVegaDir_PKey::get<ResponderMarkupVegaDir_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto ResponderMarkupVegaDir_PKey::get<ResponderMarkupVegaDir_PKey::client_firm>() const { return m_client_firm; }
    template<> inline const auto ResponderMarkupVegaDir_PKey::get<ResponderMarkupVegaDir_PKey::root>() const { return ResponderMarkupVegaDir_PKey::root{m_root}; }
    template<> inline const auto ResponderMarkupVegaDir_PKey::get<ResponderMarkupVegaDir_PKey::resp_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_resp_side));}
    template<> inline const auto ResponderMarkupVegaDir_PKey::get<ResponderMarkupVegaDir_PKey::responder_id>() const { return m_responder_id; }
    
    template<> inline const auto ResponderMarkupVegaDir_CFirmExclFilter::get<ResponderMarkupVegaDir_CFirmExclFilter::inititor_cfirm>() const { return m_inititor_cfirm; }
    
    template<> inline const auto ResponderMarkupVegaDir_CFirmInclFilter::get<ResponderMarkupVegaDir_CFirmInclFilter::inititor_cfirm>() const { return m_inititor_cfirm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const ResponderMarkupVegaDir_PKey& m) {
        o << "\"accnt\":\"" << m.get<ResponderMarkupVegaDir_PKey::accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<ResponderMarkupVegaDir_PKey::client_firm>() << "\"";
        o << ",\"root\":{" << m.get<ResponderMarkupVegaDir_PKey::root>() << "}";
        o << ",\"resp_side\":" << (int64_t)m.get<ResponderMarkupVegaDir_PKey::resp_side>();
        o << ",\"responder_id\":" << m.get<ResponderMarkupVegaDir_PKey::responder_id>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const ResponderMarkupVegaDir_CFirmExclFilter& m) {
        o << "\"inititor_cfirm\":\"" << m.get<ResponderMarkupVegaDir_CFirmExclFilter::inititor_cfirm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const ResponderMarkupVegaDir_CFirmInclFilter& m) {
        o << "\"inititor_cfirm\":\"" << m.get<ResponderMarkupVegaDir_CFirmInclFilter::inititor_cfirm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const ResponderMarkupVegaDir& m) {
        o << "\"_meta\":{" << m.get<ResponderMarkupVegaDir::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<ResponderMarkupVegaDir::pkey>() << "}";
        o << ",\"user_name\":\"" << m.get<ResponderMarkupVegaDir::user_name>() << "\"";
        o << ",\"is_disabled\":" << (int64_t)m.get<ResponderMarkupVegaDir::is_disabled>();
        {
            std::time_t tt = m.get<ResponderMarkupVegaDir::enabled_until>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"enabled_until\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"can_include_flex\":" << (int64_t)m.get<ResponderMarkupVegaDir::can_include_flex>();
        o << ",\"can_include_stock\":" << (int64_t)m.get<ResponderMarkupVegaDir::can_include_stock>();
        o << ",\"can_respond_sr\":" << (int64_t)m.get<ResponderMarkupVegaDir::can_respond_sr>();
        o << ",\"can_respond_exch\":" << (int64_t)m.get<ResponderMarkupVegaDir::can_respond_exch>();
        o << ",\"cp_flag\":" << (int64_t)m.get<ResponderMarkupVegaDir::cp_flag>();
        o << ",\"min_net_vega_ratio\":" << m.get<ResponderMarkupVegaDir::min_net_vega_ratio>();
        o << ",\"min_years\":" << m.get<ResponderMarkupVegaDir::min_years>();
        o << ",\"max_years\":" << m.get<ResponderMarkupVegaDir::max_years>();
        {
            std::time_t tt = m.get<ResponderMarkupVegaDir::min_expiry>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"min_expiry\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<ResponderMarkupVegaDir::max_expiry>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"max_expiry\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"min_xdelta\":" << m.get<ResponderMarkupVegaDir::min_xdelta>();
        o << ",\"max_xdelta\":" << m.get<ResponderMarkupVegaDir::max_xdelta>();
        o << ",\"min_strike\":" << m.get<ResponderMarkupVegaDir::min_strike>();
        o << ",\"max_strike\":" << m.get<ResponderMarkupVegaDir::max_strike>();
        o << ",\"min_surf_edge_prem\":" << m.get<ResponderMarkupVegaDir::min_surf_edge_prem>();
        o << ",\"min_surf_edge_vol\":" << m.get<ResponderMarkupVegaDir::min_surf_edge_vol>();
        o << ",\"min_probability\":" << m.get<ResponderMarkupVegaDir::min_probability>();
        o << ",\"inc_fees_in_resp\":" << (int64_t)m.get<ResponderMarkupVegaDir::inc_fees_in_resp>();
        o << ",\"round_rule\":" << (int64_t)m.get<ResponderMarkupVegaDir::round_rule>();
        o << ",\"max_response_size\":" << m.get<ResponderMarkupVegaDir::max_response_size>();
        o << ",\"max_response_vega\":" << m.get<ResponderMarkupVegaDir::max_response_vega>();
        o << ",\"total_response_vega\":" << m.get<ResponderMarkupVegaDir::total_response_vega>();
        o << ",\"total_response_wt_vega\":" << m.get<ResponderMarkupVegaDir::total_response_wt_vega>();
        o << ",\"not_mkt_penny\":" << (int64_t)m.get<ResponderMarkupVegaDir::not_mkt_penny>();
        o << ",\"mkt_penny1\":" << (int64_t)m.get<ResponderMarkupVegaDir::mkt_penny1>();
        o << ",\"mkt_penny2\":" << (int64_t)m.get<ResponderMarkupVegaDir::mkt_penny2>();
        o << ",\"mkt_penny3p\":" << (int64_t)m.get<ResponderMarkupVegaDir::mkt_penny3p>();
        o << ",\"not_mkt_nickle\":" << (int64_t)m.get<ResponderMarkupVegaDir::not_mkt_nickle>();
        o << ",\"mkt_nickle1\":" << (int64_t)m.get<ResponderMarkupVegaDir::mkt_nickle1>();
        o << ",\"mkt_nickle2\":" << (int64_t)m.get<ResponderMarkupVegaDir::mkt_nickle2>();
        o << ",\"mkt_nickle3p\":" << (int64_t)m.get<ResponderMarkupVegaDir::mkt_nickle3p>();
        o << ",\"auto_hedge\":" << (int64_t)m.get<ResponderMarkupVegaDir::auto_hedge>();
        o << ",\"hedge_instrument\":" << (int64_t)m.get<ResponderMarkupVegaDir::hedge_instrument>();
        o << ",\"hedge_sec_key\":{" << m.get<ResponderMarkupVegaDir::hedge_sec_key>() << "}";
        o << ",\"hedge_beta_ratio\":" << m.get<ResponderMarkupVegaDir::hedge_beta_ratio>();
        o << ",\"hedge_scope\":" << (int64_t)m.get<ResponderMarkupVegaDir::hedge_scope>();
        o << ",\"hedge_session\":" << (int64_t)m.get<ResponderMarkupVegaDir::hedge_session>();
        o << ",\"risk_group_id\":" << m.get<ResponderMarkupVegaDir::risk_group_id>();
        o << ",\"num_notices\":" << m.get<ResponderMarkupVegaDir::num_notices>();
        o << ",\"num_notice_block\":" << m.get<ResponderMarkupVegaDir::num_notice_block>();
        o << ",\"num_notice_flash\":" << m.get<ResponderMarkupVegaDir::num_notice_flash>();
        o << ",\"num_notice_exch_pi\":" << m.get<ResponderMarkupVegaDir::num_notice_exch_pi>();
        o << ",\"num_notice_exch_ex\":" << m.get<ResponderMarkupVegaDir::num_notice_exch_ex>();
        o << ",\"num_not_mkt_penny\":" << m.get<ResponderMarkupVegaDir::num_not_mkt_penny>();
        o << ",\"num_mkt_penny1\":" << m.get<ResponderMarkupVegaDir::num_mkt_penny1>();
        o << ",\"num_mkt_penny2\":" << m.get<ResponderMarkupVegaDir::num_mkt_penny2>();
        o << ",\"num_mkt_penny3p\":" << m.get<ResponderMarkupVegaDir::num_mkt_penny3p>();
        o << ",\"num_not_mkt_nickle\":" << m.get<ResponderMarkupVegaDir::num_not_mkt_nickle>();
        o << ",\"num_mkt_nickle1\":" << m.get<ResponderMarkupVegaDir::num_mkt_nickle1>();
        o << ",\"num_mkt_nickle2\":" << m.get<ResponderMarkupVegaDir::num_mkt_nickle2>();
        o << ",\"num_mkt_nickle3p\":" << m.get<ResponderMarkupVegaDir::num_mkt_nickle3p>();
        o << ",\"resp_disabled_skips\":" << m.get<ResponderMarkupVegaDir::resp_disabled_skips>();
        o << ",\"stock_disabled_skips\":" << m.get<ResponderMarkupVegaDir::stock_disabled_skips>();
        o << ",\"cp_flag_skips\":" << m.get<ResponderMarkupVegaDir::cp_flag_skips>();
        o << ",\"expiry_range_skips\":" << m.get<ResponderMarkupVegaDir::expiry_range_skips>();
        o << ",\"years_range_skips\":" << m.get<ResponderMarkupVegaDir::years_range_skips>();
        o << ",\"listed_flex_skips\":" << m.get<ResponderMarkupVegaDir::listed_flex_skips>();
        o << ",\"notice_price_skips\":" << m.get<ResponderMarkupVegaDir::notice_price_skips>();
        o << ",\"agg_size_limit_skips\":" << m.get<ResponderMarkupVegaDir::agg_size_limit_skips>();
        o << ",\"risk_group_limit_skips\":" << m.get<ResponderMarkupVegaDir::risk_group_limit_skips>();
        o << ",\"root_skips\":" << m.get<ResponderMarkupVegaDir::root_skips>();
        o << ",\"x_delta_range_skips\":" << m.get<ResponderMarkupVegaDir::x_delta_range_skips>();
        o << ",\"strike_range_skips\":" << m.get<ResponderMarkupVegaDir::strike_range_skips>();
        o << ",\"min_vega_ratio_skips\":" << m.get<ResponderMarkupVegaDir::min_vega_ratio_skips>();
        o << ",\"probability_skips\":" << m.get<ResponderMarkupVegaDir::probability_skips>();
        o << ",\"num_responses\":" << m.get<ResponderMarkupVegaDir::num_responses>();
        o << ",\"num_responds_block\":" << m.get<ResponderMarkupVegaDir::num_responds_block>();
        o << ",\"num_responds_flash\":" << m.get<ResponderMarkupVegaDir::num_responds_flash>();
        o << ",\"num_responses_exch_pi\":" << m.get<ResponderMarkupVegaDir::num_responses_exch_pi>();
        o << ",\"num_responses_exch_ex\":" << m.get<ResponderMarkupVegaDir::num_responses_exch_ex>();
        o << ",\"num_full_size\":" << m.get<ResponderMarkupVegaDir::num_full_size>();
        o << ",\"num_alloc_size\":" << m.get<ResponderMarkupVegaDir::num_alloc_size>();
        o << ",\"num_price_miss\":" << m.get<ResponderMarkupVegaDir::num_price_miss>();
        o << ",\"num_too_late\":" << m.get<ResponderMarkupVegaDir::num_too_late>();
        o << ",\"num_other_miss\":" << m.get<ResponderMarkupVegaDir::num_other_miss>();
        o << ",\"num_did_not_trade\":" << m.get<ResponderMarkupVegaDir::num_did_not_trade>();
        o << ",\"num_traded\":" << m.get<ResponderMarkupVegaDir::num_traded>();
        o << ",\"qty_traded\":" << m.get<ResponderMarkupVegaDir::qty_traded>();
        o << ",\"vega_traded\":" << m.get<ResponderMarkupVegaDir::vega_traded>();
        o << ",\"wt_vega_traded\":" << m.get<ResponderMarkupVegaDir::wt_vega_traded>();
        o << ",\"sum_width_traded\":" << m.get<ResponderMarkupVegaDir::sum_width_traded>();
        o << ",\"sum_surf_edge_traded\":" << m.get<ResponderMarkupVegaDir::sum_surf_edge_traded>();
        o << ",\"sum_m1_pn_ltraded\":" << m.get<ResponderMarkupVegaDir::sum_m1_pn_ltraded>();
        o << ",\"sum_m10_pn_ltraded\":" << m.get<ResponderMarkupVegaDir::sum_m10_pn_ltraded>();
        o << ",\"num_traded_block\":" << m.get<ResponderMarkupVegaDir::num_traded_block>();
        o << ",\"num_traded_flash\":" << m.get<ResponderMarkupVegaDir::num_traded_flash>();
        o << ",\"num_traded_exch_pi\":" << m.get<ResponderMarkupVegaDir::num_traded_exch_pi>();
        o << ",\"num_traded_exch_ex\":" << m.get<ResponderMarkupVegaDir::num_traded_exch_ex>();
        o << ",\"modified_by\":\"" << m.get<ResponderMarkupVegaDir::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<ResponderMarkupVegaDir::modified_in>();
        {
            std::time_t tt = m.get<ResponderMarkupVegaDir::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"c_firm_excl_filter\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<ResponderMarkupVegaDir::c_firm_excl_filter>(); ++i) {
                o << delim << m.get<ResponderMarkupVegaDir::c_firm_excl_filter>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"c_firm_incl_filter\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<ResponderMarkupVegaDir::c_firm_incl_filter>(); ++i) {
                o << delim << m.get<ResponderMarkupVegaDir::c_firm_incl_filter>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}