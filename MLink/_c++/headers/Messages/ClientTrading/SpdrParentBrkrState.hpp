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

    #ifndef _parent_number__GUARD__
    #define _parent_number__GUARD__
    DECL_STRONG_TYPE(parent_number, int64);
    #endif//_parent_number__GUARD__

    #ifndef _base_parent_number__GUARD__
    #define _base_parent_number__GUARD__
    DECL_STRONG_TYPE(base_parent_number, int64);
    #endif//_base_parent_number__GUARD__

    #ifndef _modify_number__GUARD__
    #define _modify_number__GUARD__
    DECL_STRONG_TYPE(modify_number, int64);
    #endif//_modify_number__GUARD__

    #ifndef _notice_number__GUARD__
    #define _notice_number__GUARD__
    DECL_STRONG_TYPE(notice_number, int64);
    #endif//_notice_number__GUARD__

    #ifndef _risk_group_id__GUARD__
    #define _risk_group_id__GUARD__
    DECL_STRONG_TYPE(risk_group_id, int64);
    #endif//_risk_group_id__GUARD__

    #ifndef _trigger_group_id__GUARD__
    #define _trigger_group_id__GUARD__
    DECL_STRONG_TYPE(trigger_group_id, int64);
    #endif//_trigger_group_id__GUARD__

    #ifndef _strategy__GUARD__
    #define _strategy__GUARD__
    DECL_STRONG_TYPE(strategy, string);
    #endif//_strategy__GUARD__

    #ifndef _exec_brkr_code__GUARD__
    #define _exec_brkr_code__GUARD__
    DECL_STRONG_TYPE(exec_brkr_code, string);
    #endif//_exec_brkr_code__GUARD__

    #ifndef _alt_order_id__GUARD__
    #define _alt_order_id__GUARD__
    DECL_STRONG_TYPE(alt_order_id, string);
    #endif//_alt_order_id__GUARD__

    #ifndef _package_id__GUARD__
    #define _package_id__GUARD__
    DECL_STRONG_TYPE(package_id, int64);
    #endif//_package_id__GUARD__

    #ifndef _alt_accnt__GUARD__
    #define _alt_accnt__GUARD__
    DECL_STRONG_TYPE(alt_accnt, string);
    #endif//_alt_accnt__GUARD__

    #ifndef _alt_user_name__GUARD__
    #define _alt_user_name__GUARD__
    DECL_STRONG_TYPE(alt_user_name, string);
    #endif//_alt_user_name__GUARD__

    #ifndef _stage_type__GUARD__
    #define _stage_type__GUARD__
    DECL_STRONG_TYPE(stage_type, spiderrock::protobuf::api::SpdrStageType);
    #endif//_stage_type__GUARD__

    #ifndef _is_flagged__GUARD__
    #define _is_flagged__GUARD__
    DECL_STRONG_TYPE(is_flagged, spiderrock::protobuf::api::YesNo);
    #endif//_is_flagged__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _u_prc__double__GUARD__
    #define _u_prc__double__GUARD__
    DECL_STRONG_TYPE(u_prc__double, double);
    #endif//_u_prc__double__GUARD__

    #ifndef _u_prc_order__GUARD__
    #define _u_prc_order__GUARD__
    DECL_STRONG_TYPE(u_prc_order, double);
    #endif//_u_prc_order__GUARD__

    #ifndef _nbbo_bid__double__GUARD__
    #define _nbbo_bid__double__GUARD__
    DECL_STRONG_TYPE(nbbo_bid__double, double);
    #endif//_nbbo_bid__double__GUARD__

    #ifndef _nbbo_ask__double__GUARD__
    #define _nbbo_ask__double__GUARD__
    DECL_STRONG_TYPE(nbbo_ask__double, double);
    #endif//_nbbo_ask__double__GUARD__

    #ifndef _nbbo_bid_sz__GUARD__
    #define _nbbo_bid_sz__GUARD__
    DECL_STRONG_TYPE(nbbo_bid_sz, int32);
    #endif//_nbbo_bid_sz__GUARD__

    #ifndef _nbbo_ask_sz__GUARD__
    #define _nbbo_ask_sz__GUARD__
    DECL_STRONG_TYPE(nbbo_ask_sz, int32);
    #endif//_nbbo_ask_sz__GUARD__

    #ifndef _surface_prc__GUARD__
    #define _surface_prc__GUARD__
    DECL_STRONG_TYPE(surface_prc, float);
    #endif//_surface_prc__GUARD__

    #ifndef _surface_vol__GUARD__
    #define _surface_vol__GUARD__
    DECL_STRONG_TYPE(surface_vol, float);
    #endif//_surface_vol__GUARD__

    #ifndef _order_ref_sdiv__GUARD__
    #define _order_ref_sdiv__GUARD__
    DECL_STRONG_TYPE(order_ref_sdiv, float);
    #endif//_order_ref_sdiv__GUARD__

    #ifndef _order_ref_sdiv_type__GUARD__
    #define _order_ref_sdiv_type__GUARD__
    DECL_STRONG_TYPE(order_ref_sdiv_type, spiderrock::protobuf::api::RefSDivType);
    #endif//_order_ref_sdiv_type__GUARD__

    #ifndef _spdr_broker_status__GUARD__
    #define _spdr_broker_status__GUARD__
    DECL_STRONG_TYPE(spdr_broker_status, spiderrock::protobuf::api::SpdrBrokerStatus);
    #endif//_spdr_broker_status__GUARD__

    #ifndef _spdr_order_status__GUARD__
    #define _spdr_order_status__GUARD__
    DECL_STRONG_TYPE(spdr_order_status, spiderrock::protobuf::api::SpdrOrderStatus);
    #endif//_spdr_order_status__GUARD__

    #ifndef _spdr_close_reason__GUARD__
    #define _spdr_close_reason__GUARD__
    DECL_STRONG_TYPE(spdr_close_reason, spiderrock::protobuf::api::SpdrCloseReason);
    #endif//_spdr_close_reason__GUARD__

    #ifndef _spdr_reject_reason__GUARD__
    #define _spdr_reject_reason__GUARD__
    DECL_STRONG_TYPE(spdr_reject_reason, spiderrock::protobuf::api::SpdrRejectReason);
    #endif//_spdr_reject_reason__GUARD__

    #ifndef _spdr_reject_level__GUARD__
    #define _spdr_reject_level__GUARD__
    DECL_STRONG_TYPE(spdr_reject_level, spiderrock::protobuf::api::SpdrRiskLevel);
    #endif//_spdr_reject_level__GUARD__

    #ifndef _is_permanently_closed__GUARD__
    #define _is_permanently_closed__GUARD__
    DECL_STRONG_TYPE(is_permanently_closed, spiderrock::protobuf::api::YesNo);
    #endif//_is_permanently_closed__GUARD__

    #ifndef _num_extern_risk_hold__GUARD__
    #define _num_extern_risk_hold__GUARD__
    DECL_STRONG_TYPE(num_extern_risk_hold, int32);
    #endif//_num_extern_risk_hold__GUARD__

    #ifndef _last_extern_risk_text__GUARD__
    #define _last_extern_risk_text__GUARD__
    DECL_STRONG_TYPE(last_extern_risk_text, string);
    #endif//_last_extern_risk_text__GUARD__

    #ifndef _last_extern_risk_reject__GUARD__
    #define _last_extern_risk_reject__GUARD__
    DECL_STRONG_TYPE(last_extern_risk_reject, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_last_extern_risk_reject__GUARD__

    #ifndef _spdr_comment__GUARD__
    #define _spdr_comment__GUARD__
    DECL_STRONG_TYPE(spdr_comment, string);
    #endif//_spdr_comment__GUARD__

    #ifndef _order_size__GUARD__
    #define _order_size__GUARD__
    DECL_STRONG_TYPE(order_size, int32);
    #endif//_order_size__GUARD__

    #ifndef _order_active_size__GUARD__
    #define _order_active_size__GUARD__
    DECL_STRONG_TYPE(order_active_size, int32);
    #endif//_order_active_size__GUARD__

    #ifndef _active_duration__GUARD__
    #define _active_duration__GUARD__
    DECL_STRONG_TYPE(active_duration, int32);
    #endif//_active_duration__GUARD__

    #ifndef _update_dttm__GUARD__
    #define _update_dttm__GUARD__
    DECL_STRONG_TYPE(update_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_update_dttm__GUARD__

    #ifndef _good_till_dttm__GUARD__
    #define _good_till_dttm__GUARD__
    DECL_STRONG_TYPE(good_till_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_good_till_dttm__GUARD__

    #ifndef _leaves_quantity__GUARD__
    #define _leaves_quantity__GUARD__
    DECL_STRONG_TYPE(leaves_quantity, int32);
    #endif//_leaves_quantity__GUARD__

    #ifndef _avg_fill_price__GUARD__
    #define _avg_fill_price__GUARD__
    DECL_STRONG_TYPE(avg_fill_price, double);
    #endif//_avg_fill_price__GUARD__

    #ifndef _avg_fill_uprice__GUARD__
    #define _avg_fill_uprice__GUARD__
    DECL_STRONG_TYPE(avg_fill_uprice, double);
    #endif//_avg_fill_uprice__GUARD__

    #ifndef _cum_fill_quantity__GUARD__
    #define _cum_fill_quantity__GUARD__
    DECL_STRONG_TYPE(cum_fill_quantity, int32);
    #endif//_cum_fill_quantity__GUARD__

    #ifndef _avg_fill_vol__GUARD__
    #define _avg_fill_vol__GUARD__
    DECL_STRONG_TYPE(avg_fill_vol, float);
    #endif//_avg_fill_vol__GUARD__

    #ifndef _cum_fill_vega__GUARD__
    #define _cum_fill_vega__GUARD__
    DECL_STRONG_TYPE(cum_fill_vega, float);
    #endif//_cum_fill_vega__GUARD__

    #ifndef _cum_fill_theta__GUARD__
    #define _cum_fill_theta__GUARD__
    DECL_STRONG_TYPE(cum_fill_theta, float);
    #endif//_cum_fill_theta__GUARD__

    #ifndef _cum_fill_ddelta__GUARD__
    #define _cum_fill_ddelta__GUARD__
    DECL_STRONG_TYPE(cum_fill_ddelta, float);
    #endif//_cum_fill_ddelta__GUARD__

    #ifndef _cum_exch_fee__GUARD__
    #define _cum_exch_fee__GUARD__
    DECL_STRONG_TYPE(cum_exch_fee, float);
    #endif//_cum_exch_fee__GUARD__

    #ifndef _cum_m10_pnl__GUARD__
    #define _cum_m10_pnl__GUARD__
    DECL_STRONG_TYPE(cum_m10_pnl, float);
    #endif//_cum_m10_pnl__GUARD__

    #ifndef _cum_arrival_pnl__GUARD__
    #define _cum_arrival_pnl__GUARD__
    DECL_STRONG_TYPE(cum_arrival_pnl, float);
    #endif//_cum_arrival_pnl__GUARD__

    #ifndef _last_fill_dttm__GUARD__
    #define _last_fill_dttm__GUARD__
    DECL_STRONG_TYPE(last_fill_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_last_fill_dttm__GUARD__

    #ifndef _risk_limit_size__GUARD__
    #define _risk_limit_size__GUARD__
    DECL_STRONG_TYPE(risk_limit_size, int32);
    #endif//_risk_limit_size__GUARD__

    #ifndef _risk_limit_desc__GUARD__
    #define _risk_limit_desc__GUARD__
    DECL_STRONG_TYPE(risk_limit_desc, spiderrock::protobuf::api::SpdrRisk);
    #endif//_risk_limit_desc__GUARD__

    #ifndef _risk_limit_level__GUARD__
    #define _risk_limit_level__GUARD__
    DECL_STRONG_TYPE(risk_limit_level, spiderrock::protobuf::api::SpdrRiskLevel);
    #endif//_risk_limit_level__GUARD__

    #ifndef _risk_limit_detail__GUARD__
    #define _risk_limit_detail__GUARD__
    DECL_STRONG_TYPE(risk_limit_detail, string);
    #endif//_risk_limit_detail__GUARD__

    #ifndef _limit_price__GUARD__
    #define _limit_price__GUARD__
    DECL_STRONG_TYPE(limit_price, double);
    #endif//_limit_price__GUARD__

    #ifndef _limit_ref_uprc__GUARD__
    #define _limit_ref_uprc__GUARD__
    DECL_STRONG_TYPE(limit_ref_uprc, double);
    #endif//_limit_ref_uprc__GUARD__

    #ifndef _limit_err__GUARD__
    #define _limit_err__GUARD__
    DECL_STRONG_TYPE(limit_err, spiderrock::protobuf::api::LimitError);
    #endif//_limit_err__GUARD__

    #ifndef _limit_err_desc__GUARD__
    #define _limit_err_desc__GUARD__
    DECL_STRONG_TYPE(limit_err_desc, string);
    #endif//_limit_err_desc__GUARD__

    #ifndef _best_limit_offset__GUARD__
    #define _best_limit_offset__GUARD__
    DECL_STRONG_TYPE(best_limit_offset, float);
    #endif//_best_limit_offset__GUARD__

    #ifndef _make_prob_limit__GUARD__
    #define _make_prob_limit__GUARD__
    DECL_STRONG_TYPE(make_prob_limit, float);
    #endif//_make_prob_limit__GUARD__

    #ifndef _make_surf_offset__GUARD__
    #define _make_surf_offset__GUARD__
    DECL_STRONG_TYPE(make_surf_offset, float);
    #endif//_make_surf_offset__GUARD__

    #ifndef _make_limit_price__GUARD__
    #define _make_limit_price__GUARD__
    DECL_STRONG_TYPE(make_limit_price, double);
    #endif//_make_limit_price__GUARD__

    #ifndef _make_limit_err__GUARD__
    #define _make_limit_err__GUARD__
    DECL_STRONG_TYPE(make_limit_err, spiderrock::protobuf::api::LimitError);
    #endif//_make_limit_err__GUARD__

    #ifndef _take_prob_limit__GUARD__
    #define _take_prob_limit__GUARD__
    DECL_STRONG_TYPE(take_prob_limit, float);
    #endif//_take_prob_limit__GUARD__

    #ifndef _take_surf_offset__GUARD__
    #define _take_surf_offset__GUARD__
    DECL_STRONG_TYPE(take_surf_offset, float);
    #endif//_take_surf_offset__GUARD__

    #ifndef _take_limit_price__GUARD__
    #define _take_limit_price__GUARD__
    DECL_STRONG_TYPE(take_limit_price, double);
    #endif//_take_limit_price__GUARD__

    #ifndef _take_limit_err__GUARD__
    #define _take_limit_err__GUARD__
    DECL_STRONG_TYPE(take_limit_err, spiderrock::protobuf::api::LimitError);
    #endif//_take_limit_err__GUARD__

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

    #ifndef _hedge_sec_type__GUARD__
    #define _hedge_sec_type__GUARD__
    DECL_STRONG_TYPE(hedge_sec_type, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_hedge_sec_type__GUARD__

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

    #ifndef _extern_hedge_ex_dest__GUARD__
    #define _extern_hedge_ex_dest__GUARD__
    DECL_STRONG_TYPE(extern_hedge_ex_dest, string);
    #endif//_extern_hedge_ex_dest__GUARD__

    #ifndef _extern_hedge_params__GUARD__
    #define _extern_hedge_params__GUARD__
    DECL_STRONG_TYPE(extern_hedge_params, string);
    #endif//_extern_hedge_params__GUARD__

    #ifndef _user_data1__GUARD__
    #define _user_data1__GUARD__
    DECL_STRONG_TYPE(user_data1, string);
    #endif//_user_data1__GUARD__

    #ifndef _user_data2__GUARD__
    #define _user_data2__GUARD__
    DECL_STRONG_TYPE(user_data2, string);
    #endif//_user_data2__GUARD__

    #ifndef _max_progress__GUARD__
    #define _max_progress__GUARD__
    DECL_STRONG_TYPE(max_progress, spiderrock::protobuf::api::MaxProgress);
    #endif//_max_progress__GUARD__

    #ifndef _max_progress_detail__GUARD__
    #define _max_progress_detail__GUARD__
    DECL_STRONG_TYPE(max_progress_detail, string);
    #endif//_max_progress_detail__GUARD__

    #ifndef _max_progress_time__GUARD__
    #define _max_progress_time__GUARD__
    DECL_STRONG_TYPE(max_progress_time, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_max_progress_time__GUARD__

    #ifndef _broker_state__GUARD__
    #define _broker_state__GUARD__
    DECL_STRONG_TYPE(broker_state, spiderrock::protobuf::api::BrokerState);
    #endif//_broker_state__GUARD__

    #ifndef _broker_counter__GUARD__
    #define _broker_counter__GUARD__
    DECL_STRONG_TYPE(broker_counter, int32);
    #endif//_broker_counter__GUARD__

    #ifndef _make_state__GUARD__
    #define _make_state__GUARD__
    DECL_STRONG_TYPE(make_state, spiderrock::protobuf::api::AlgoState);
    #endif//_make_state__GUARD__

    #ifndef _make_counter__GUARD__
    #define _make_counter__GUARD__
    DECL_STRONG_TYPE(make_counter, int32);
    #endif//_make_counter__GUARD__

    #ifndef _take_state__GUARD__
    #define _take_state__GUARD__
    DECL_STRONG_TYPE(take_state, spiderrock::protobuf::api::AlgoState);
    #endif//_take_state__GUARD__

    #ifndef _take_counter__GUARD__
    #define _take_counter__GUARD__
    DECL_STRONG_TYPE(take_counter, int32);
    #endif//_take_counter__GUARD__

    #ifndef _mkt_resp_state__GUARD__
    #define _mkt_resp_state__GUARD__
    DECL_STRONG_TYPE(mkt_resp_state, spiderrock::protobuf::api::MktRespState);
    #endif//_mkt_resp_state__GUARD__

    #ifndef _mkt_resp_counter__GUARD__
    #define _mkt_resp_counter__GUARD__
    DECL_STRONG_TYPE(mkt_resp_counter, int32);
    #endif//_mkt_resp_counter__GUARD__

    #ifndef _mkt_cross_state__GUARD__
    #define _mkt_cross_state__GUARD__
    DECL_STRONG_TYPE(mkt_cross_state, spiderrock::protobuf::api::MktCrossState);
    #endif//_mkt_cross_state__GUARD__

    #ifndef _mkt_cross_counter__GUARD__
    #define _mkt_cross_counter__GUARD__
    DECL_STRONG_TYPE(mkt_cross_counter, int32);
    #endif//_mkt_cross_counter__GUARD__

    #ifndef _progress_rule_detail__GUARD__
    #define _progress_rule_detail__GUARD__
    DECL_STRONG_TYPE(progress_rule_detail, string);
    #endif//_progress_rule_detail__GUARD__

    #ifndef _last_child_event__GUARD__
    #define _last_child_event__GUARD__
    DECL_STRONG_TYPE(last_child_event, spiderrock::protobuf::api::ChildEvent);
    #endif//_last_child_event__GUARD__

    #ifndef _last_child_reject_dttm__GUARD__
    #define _last_child_reject_dttm__GUARD__
    DECL_STRONG_TYPE(last_child_reject_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_last_child_reject_dttm__GUARD__

    #ifndef _last_child_reject_text__GUARD__
    #define _last_child_reject_text__GUARD__
    DECL_STRONG_TYPE(last_child_reject_text, string);
    #endif//_last_child_reject_text__GUARD__

    #ifndef _spdr_mkt_state__GUARD__
    #define _spdr_mkt_state__GUARD__
    DECL_STRONG_TYPE(spdr_mkt_state, spiderrock::protobuf::api::SpdrMarketState);
    #endif//_spdr_mkt_state__GUARD__

    #ifndef _cpx1__GUARD__
    #define _cpx1__GUARD__
    DECL_STRONG_TYPE(cpx1, float);
    #endif//_cpx1__GUARD__

    #ifndef _csz1__GUARD__
    #define _csz1__GUARD__
    DECL_STRONG_TYPE(csz1, int32);
    #endif//_csz1__GUARD__

    #ifndef _cex1__GUARD__
    #define _cex1__GUARD__
    DECL_STRONG_TYPE(cex1, uint32);
    #endif//_cex1__GUARD__

    #ifndef _cnt1__GUARD__
    #define _cnt1__GUARD__
    DECL_STRONG_TYPE(cnt1, int32);
    #endif//_cnt1__GUARD__

    #ifndef _cpx2__GUARD__
    #define _cpx2__GUARD__
    DECL_STRONG_TYPE(cpx2, float);
    #endif//_cpx2__GUARD__

    #ifndef _csz2__GUARD__
    #define _csz2__GUARD__
    DECL_STRONG_TYPE(csz2, int32);
    #endif//_csz2__GUARD__

    #ifndef _cex2__GUARD__
    #define _cex2__GUARD__
    DECL_STRONG_TYPE(cex2, uint32);
    #endif//_cex2__GUARD__

    #ifndef _cnt2__GUARD__
    #define _cnt2__GUARD__
    DECL_STRONG_TYPE(cnt2, int32);
    #endif//_cnt2__GUARD__

    #ifndef _c_more__GUARD__
    #define _c_more__GUARD__
    DECL_STRONG_TYPE(c_more, int32);
    #endif//_c_more__GUARD__

    #ifndef _cn_vol__GUARD__
    #define _cn_vol__GUARD__
    DECL_STRONG_TYPE(cn_vol, float);
    #endif//_cn_vol__GUARD__

    #ifndef _cn_yrs__GUARD__
    #define _cn_yrs__GUARD__
    DECL_STRONG_TYPE(cn_yrs, float);
    #endif//_cn_yrs__GUARD__

    #ifndef _cn_uprc__GUARD__
    #define _cn_uprc__GUARD__
    DECL_STRONG_TYPE(cn_uprc, float);
    #endif//_cn_uprc__GUARD__

    #ifndef _cn_de__GUARD__
    #define _cn_de__GUARD__
    DECL_STRONG_TYPE(cn_de, float);
    #endif//_cn_de__GUARD__

    #ifndef _cn_dd__GUARD__
    #define _cn_dd__GUARD__
    DECL_STRONG_TYPE(cn_dd, float);
    #endif//_cn_dd__GUARD__

    #ifndef _cn_ve__GUARD__
    #define _cn_ve__GUARD__
    DECL_STRONG_TYPE(cn_ve, float);
    #endif//_cn_ve__GUARD__

    #ifndef _cn_ga__GUARD__
    #define _cn_ga__GUARD__
    DECL_STRONG_TYPE(cn_ga, float);
    #endif//_cn_ga__GUARD__

    #ifndef _cn_th__GUARD__
    #define _cn_th__GUARD__
    DECL_STRONG_TYPE(cn_th, float);
    #endif//_cn_th__GUARD__

    #ifndef _cn_pr__GUARD__
    #define _cn_pr__GUARD__
    DECL_STRONG_TYPE(cn_pr, float);
    #endif//_cn_pr__GUARD__

    #ifndef _dd_mult__float__GUARD__
    #define _dd_mult__float__GUARD__
    DECL_STRONG_TYPE(dd_mult__float, float);
    #endif//_dd_mult__float__GUARD__

    #ifndef _price_format__GUARD__
    #define _price_format__GUARD__
    DECL_STRONG_TYPE(price_format, spiderrock::protobuf::api::PriceFormat);
    #endif//_price_format__GUARD__

    #ifndef _u_price_format__GUARD__
    #define _u_price_format__GUARD__
    DECL_STRONG_TYPE(u_price_format, spiderrock::protobuf::api::PriceFormat);
    #endif//_u_price_format__GUARD__

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

    #ifndef _theo_vol__GUARD__
    #define _theo_vol__GUARD__
    DECL_STRONG_TYPE(theo_vol, float);
    #endif//_theo_vol__GUARD__

    #ifndef _theo_prc__GUARD__
    #define _theo_prc__GUARD__
    DECL_STRONG_TYPE(theo_prc, float);
    #endif//_theo_prc__GUARD__

    #ifndef _num_new_orders__GUARD__
    #define _num_new_orders__GUARD__
    DECL_STRONG_TYPE(num_new_orders, int32);
    #endif//_num_new_orders__GUARD__

    #ifndef _num_parent_limits__GUARD__
    #define _num_parent_limits__GUARD__
    DECL_STRONG_TYPE(num_parent_limits, uint32);
    #endif//_num_parent_limits__GUARD__

    #ifndef _broker_vwap_mark__GUARD__
    #define _broker_vwap_mark__GUARD__
    DECL_STRONG_TYPE(broker_vwap_mark, float);
    #endif//_broker_vwap_mark__GUARD__

    #ifndef _broker_vwap_umark__GUARD__
    #define _broker_vwap_umark__GUARD__
    DECL_STRONG_TYPE(broker_vwap_umark, float);
    #endif//_broker_vwap_umark__GUARD__

    #ifndef _broker_qwap_mark__GUARD__
    #define _broker_qwap_mark__GUARD__
    DECL_STRONG_TYPE(broker_qwap_mark, float);
    #endif//_broker_qwap_mark__GUARD__

    #ifndef _broker_qwap_umark__GUARD__
    #define _broker_qwap_umark__GUARD__
    DECL_STRONG_TYPE(broker_qwap_umark, float);
    #endif//_broker_qwap_umark__GUARD__

    #ifndef _vwap_pn_l__GUARD__
    #define _vwap_pn_l__GUARD__
    DECL_STRONG_TYPE(vwap_pn_l, float);
    #endif//_vwap_pn_l__GUARD__

    #ifndef _vwap_dn_pn_l__GUARD__
    #define _vwap_dn_pn_l__GUARD__
    DECL_STRONG_TYPE(vwap_dn_pn_l, float);
    #endif//_vwap_dn_pn_l__GUARD__

    #ifndef _u_drift_vwap_pn_l__GUARD__
    #define _u_drift_vwap_pn_l__GUARD__
    DECL_STRONG_TYPE(u_drift_vwap_pn_l, float);
    #endif//_u_drift_vwap_pn_l__GUARD__

    #ifndef _qwap_pn_l__GUARD__
    #define _qwap_pn_l__GUARD__
    DECL_STRONG_TYPE(qwap_pn_l, float);
    #endif//_qwap_pn_l__GUARD__

    #ifndef _qwap_dn_pn_l__GUARD__
    #define _qwap_dn_pn_l__GUARD__
    DECL_STRONG_TYPE(qwap_dn_pn_l, float);
    #endif//_qwap_dn_pn_l__GUARD__

    #ifndef _u_drift_qwap_pn_l__GUARD__
    #define _u_drift_qwap_pn_l__GUARD__
    DECL_STRONG_TYPE(u_drift_qwap_pn_l, float);
    #endif//_u_drift_qwap_pn_l__GUARD__

    #ifndef _num_imprv_chld__GUARD__
    #define _num_imprv_chld__GUARD__
    DECL_STRONG_TYPE(num_imprv_chld, int32);
    #endif//_num_imprv_chld__GUARD__

    #ifndef _active_seconds__GUARD__
    #define _active_seconds__GUARD__
    DECL_STRONG_TYPE(active_seconds, float);
    #endif//_active_seconds__GUARD__

    #ifndef _with_seconds__GUARD__
    #define _with_seconds__GUARD__
    DECL_STRONG_TYPE(with_seconds, float);
    #endif//_with_seconds__GUARD__

    #ifndef _alone_seconds__GUARD__
    #define _alone_seconds__GUARD__
    DECL_STRONG_TYPE(alone_seconds, float);
    #endif//_alone_seconds__GUARD__

    #ifndef _working_seconds__GUARD__
    #define _working_seconds__GUARD__
    DECL_STRONG_TYPE(working_seconds, float);
    #endif//_working_seconds__GUARD__

    #ifndef _num_risk_cancels__GUARD__
    #define _num_risk_cancels__GUARD__
    DECL_STRONG_TYPE(num_risk_cancels, int32);
    #endif//_num_risk_cancels__GUARD__

    #ifndef _risk_hold_seconds__GUARD__
    #define _risk_hold_seconds__GUARD__
    DECL_STRONG_TYPE(risk_hold_seconds, float);
    #endif//_risk_hold_seconds__GUARD__

    #ifndef _risk_thrtl_seconds__GUARD__
    #define _risk_thrtl_seconds__GUARD__
    DECL_STRONG_TYPE(risk_thrtl_seconds, float);
    #endif//_risk_thrtl_seconds__GUARD__

    #ifndef _num_make_throttle_skips__GUARD__
    #define _num_make_throttle_skips__GUARD__
    DECL_STRONG_TYPE(num_make_throttle_skips, int32);
    #endif//_num_make_throttle_skips__GUARD__

    #ifndef _sum_make_throttle_delay__GUARD__
    #define _sum_make_throttle_delay__GUARD__
    DECL_STRONG_TYPE(sum_make_throttle_delay, float);
    #endif//_sum_make_throttle_delay__GUARD__

    #ifndef _u_prc_drift__GUARD__
    #define _u_prc_drift__GUARD__
    DECL_STRONG_TYPE(u_prc_drift, float);
    #endif//_u_prc_drift__GUARD__

    #ifndef _s_vol_drift__GUARD__
    #define _s_vol_drift__GUARD__
    DECL_STRONG_TYPE(s_vol_drift, float);
    #endif//_s_vol_drift__GUARD__

    #ifndef _update_src__GUARD__
    #define _update_src__GUARD__
    DECL_STRONG_TYPE(update_src, spiderrock::protobuf::api::UpdateSource);
    #endif//_update_src__GUARD__

    #ifndef _num_updates__GUARD__
    #define _num_updates__GUARD__
    DECL_STRONG_TYPE(num_updates, int32);
    #endif//_num_updates__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _sec_key__OptionKey__GUARD__
    #define _sec_key__OptionKey__GUARD__
    DECL_STRONG_TYPE(sec_key__OptionKey, OptionKey);
    #endif//_sec_key__OptionKey__GUARD__

    #ifndef _sec_type__SpdrKeyType__GUARD__
    #define _sec_type__SpdrKeyType__GUARD__
    DECL_STRONG_TYPE(sec_type__SpdrKeyType, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__SpdrKeyType__GUARD__

    #ifndef _spdr_source__GUARD__
    #define _spdr_source__GUARD__
    DECL_STRONG_TYPE(spdr_source, spiderrock::protobuf::api::SpdrSource);
    #endif//_spdr_source__GUARD__

    #ifndef _grouping_code__GUARD__
    #define _grouping_code__GUARD__
    DECL_STRONG_TYPE(grouping_code, int64);
    #endif//_grouping_code__GUARD__

    #ifndef _order_side__GUARD__
    #define _order_side__GUARD__
    DECL_STRONG_TYPE(order_side, spiderrock::protobuf::api::BuySell);
    #endif//_order_side__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    
    class SpdrParentBrkrState_PKey {
        public:
        //using statements for all types used in this class
        using accnt = spiderrock::protobuf::api::accnt;
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using spdr_source = spiderrock::protobuf::api::spdr_source;
        using grouping_code = spiderrock::protobuf::api::grouping_code;
        using order_side = spiderrock::protobuf::api::order_side;
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        accnt m_accnt{};
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        spdr_source m_spdr_source{};
        grouping_code m_grouping_code{};
        order_side m_order_side{};
        client_firm m_client_firm{};

        public:
        accnt get_accnt() const {
            return m_accnt;
        }
		sec_key get_sec_key() const {
            return m_sec_key;
        }
        sec_type get_sec_type() const {
            return m_sec_type;
        }
        spdr_source get_spdr_source() const {
            return m_spdr_source;
        }
        grouping_code get_grouping_code() const {
            return m_grouping_code;
        }
        order_side get_order_side() const {
            return m_order_side;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_sec_key(const sec_key& value)  {
            m_sec_key = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        void set_spdr_source(const spdr_source& value)  {
            m_spdr_source = value;
        }
        void set_grouping_code(const grouping_code& value)  {
            m_grouping_code = value;
        }
        void set_order_side(const order_side& value)  {
            m_order_side = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentBrkrState_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentBrkrState_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const sec_key & value) { set_sec_key(value); }
        void set(const sec_type & value) { set_sec_type(value); }
        void set(const spdr_source & value) { set_spdr_source(value); }
        void set(const grouping_code & value) { set_grouping_code(value); }
        void set(const order_side & value) { set_order_side(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        SpdrParentBrkrState_PKey() {}

        virtual ~SpdrParentBrkrState_PKey() {
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
        bool IncludeSecKey() const {
            return (m_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeGroupingCode() const {
            return !(m_grouping_code == 0);
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_accnt);
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key;
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(11,optionKeyLayout_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            if ( IncludeGroupingCode()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(14,m_grouping_code);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(15,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(16,m_client_firm);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_accnt));
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key;
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 11, optionKeyLayout_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            if ( IncludeGroupingCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,14,m_grouping_code);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,15,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,16,static_cast<string>(m_client_firm));
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
                    case 11: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key.setFromCodec(optionKey);
                        break;
                    }
                    case 12: {m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 13: {m_spdr_source = static_cast<spiderrock::protobuf::api::SpdrSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 14: {m_grouping_code = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 15: {m_order_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 16: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SpdrParentBrkrState {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrParentBrkrState_PKey;
        using user_name = spiderrock::protobuf::api::user_name;
        using parent_number = spiderrock::protobuf::api::parent_number;
        using base_parent_number = spiderrock::protobuf::api::base_parent_number;
        using modify_number = spiderrock::protobuf::api::modify_number;
        using notice_number = spiderrock::protobuf::api::notice_number;
        using risk_group_id = spiderrock::protobuf::api::risk_group_id;
        using trigger_group_id = spiderrock::protobuf::api::trigger_group_id;
        using strategy = spiderrock::protobuf::api::strategy;
        using exec_brkr_code = spiderrock::protobuf::api::exec_brkr_code;
        using alt_order_id = spiderrock::protobuf::api::alt_order_id;
        using package_id = spiderrock::protobuf::api::package_id;
        using alt_accnt = spiderrock::protobuf::api::alt_accnt;
        using alt_user_name = spiderrock::protobuf::api::alt_user_name;
        using stage_type = spiderrock::protobuf::api::stage_type;
        using is_flagged = spiderrock::protobuf::api::is_flagged;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using u_prc = spiderrock::protobuf::api::u_prc__double;
        using u_prc_order = spiderrock::protobuf::api::u_prc_order;
        using nbbo_bid = spiderrock::protobuf::api::nbbo_bid__double;
        using nbbo_ask = spiderrock::protobuf::api::nbbo_ask__double;
        using nbbo_bid_sz = spiderrock::protobuf::api::nbbo_bid_sz;
        using nbbo_ask_sz = spiderrock::protobuf::api::nbbo_ask_sz;
        using surface_prc = spiderrock::protobuf::api::surface_prc;
        using surface_vol = spiderrock::protobuf::api::surface_vol;
        using order_ref_sdiv = spiderrock::protobuf::api::order_ref_sdiv;
        using order_ref_sdiv_type = spiderrock::protobuf::api::order_ref_sdiv_type;
        using spdr_broker_status = spiderrock::protobuf::api::spdr_broker_status;
        using spdr_order_status = spiderrock::protobuf::api::spdr_order_status;
        using spdr_close_reason = spiderrock::protobuf::api::spdr_close_reason;
        using spdr_reject_reason = spiderrock::protobuf::api::spdr_reject_reason;
        using spdr_reject_level = spiderrock::protobuf::api::spdr_reject_level;
        using is_permanently_closed = spiderrock::protobuf::api::is_permanently_closed;
        using num_extern_risk_hold = spiderrock::protobuf::api::num_extern_risk_hold;
        using last_extern_risk_text = spiderrock::protobuf::api::last_extern_risk_text;
        using last_extern_risk_reject = spiderrock::protobuf::api::last_extern_risk_reject;
        using spdr_comment = spiderrock::protobuf::api::spdr_comment;
        using order_size = spiderrock::protobuf::api::order_size;
        using order_active_size = spiderrock::protobuf::api::order_active_size;
        using active_duration = spiderrock::protobuf::api::active_duration;
        using update_dttm = spiderrock::protobuf::api::update_dttm;
        using good_till_dttm = spiderrock::protobuf::api::good_till_dttm;
        using leaves_quantity = spiderrock::protobuf::api::leaves_quantity;
        using avg_fill_price = spiderrock::protobuf::api::avg_fill_price;
        using avg_fill_uprice = spiderrock::protobuf::api::avg_fill_uprice;
        using cum_fill_quantity = spiderrock::protobuf::api::cum_fill_quantity;
        using avg_fill_vol = spiderrock::protobuf::api::avg_fill_vol;
        using cum_fill_vega = spiderrock::protobuf::api::cum_fill_vega;
        using cum_fill_theta = spiderrock::protobuf::api::cum_fill_theta;
        using cum_fill_ddelta = spiderrock::protobuf::api::cum_fill_ddelta;
        using cum_exch_fee = spiderrock::protobuf::api::cum_exch_fee;
        using cum_m10_pnl = spiderrock::protobuf::api::cum_m10_pnl;
        using cum_arrival_pnl = spiderrock::protobuf::api::cum_arrival_pnl;
        using last_fill_dttm = spiderrock::protobuf::api::last_fill_dttm;
        using risk_limit_size = spiderrock::protobuf::api::risk_limit_size;
        using risk_limit_desc = spiderrock::protobuf::api::risk_limit_desc;
        using risk_limit_level = spiderrock::protobuf::api::risk_limit_level;
        using risk_limit_detail = spiderrock::protobuf::api::risk_limit_detail;
        using limit_price = spiderrock::protobuf::api::limit_price;
        using limit_ref_uprc = spiderrock::protobuf::api::limit_ref_uprc;
        using limit_err = spiderrock::protobuf::api::limit_err;
        using limit_err_desc = spiderrock::protobuf::api::limit_err_desc;
        using best_limit_offset = spiderrock::protobuf::api::best_limit_offset;
        using make_prob_limit = spiderrock::protobuf::api::make_prob_limit;
        using make_surf_offset = spiderrock::protobuf::api::make_surf_offset;
        using make_limit_price = spiderrock::protobuf::api::make_limit_price;
        using make_limit_err = spiderrock::protobuf::api::make_limit_err;
        using take_prob_limit = spiderrock::protobuf::api::take_prob_limit;
        using take_surf_offset = spiderrock::protobuf::api::take_surf_offset;
        using take_limit_price = spiderrock::protobuf::api::take_limit_price;
        using take_limit_err = spiderrock::protobuf::api::take_limit_err;
        using auto_hedge = spiderrock::protobuf::api::auto_hedge;
        using hedge_instrument = spiderrock::protobuf::api::hedge_instrument;
        using hedge_sec_key = spiderrock::protobuf::api::hedge_sec_key;
        using hedge_sec_type = spiderrock::protobuf::api::hedge_sec_type;
        using hedge_beta_ratio = spiderrock::protobuf::api::hedge_beta_ratio;
        using hedge_scope = spiderrock::protobuf::api::hedge_scope;
        using hedge_session = spiderrock::protobuf::api::hedge_session;
        using extern_hedge_ex_dest = spiderrock::protobuf::api::extern_hedge_ex_dest;
        using extern_hedge_params = spiderrock::protobuf::api::extern_hedge_params;
        using user_data1 = spiderrock::protobuf::api::user_data1;
        using user_data2 = spiderrock::protobuf::api::user_data2;
        using max_progress = spiderrock::protobuf::api::max_progress;
        using max_progress_detail = spiderrock::protobuf::api::max_progress_detail;
        using max_progress_time = spiderrock::protobuf::api::max_progress_time;
        using broker_state = spiderrock::protobuf::api::broker_state;
        using broker_counter = spiderrock::protobuf::api::broker_counter;
        using make_state = spiderrock::protobuf::api::make_state;
        using make_counter = spiderrock::protobuf::api::make_counter;
        using take_state = spiderrock::protobuf::api::take_state;
        using take_counter = spiderrock::protobuf::api::take_counter;
        using mkt_resp_state = spiderrock::protobuf::api::mkt_resp_state;
        using mkt_resp_counter = spiderrock::protobuf::api::mkt_resp_counter;
        using mkt_cross_state = spiderrock::protobuf::api::mkt_cross_state;
        using mkt_cross_counter = spiderrock::protobuf::api::mkt_cross_counter;
        using progress_rule_detail = spiderrock::protobuf::api::progress_rule_detail;
        using last_child_event = spiderrock::protobuf::api::last_child_event;
        using last_child_reject_dttm = spiderrock::protobuf::api::last_child_reject_dttm;
        using last_child_reject_text = spiderrock::protobuf::api::last_child_reject_text;
        using spdr_mkt_state = spiderrock::protobuf::api::spdr_mkt_state;
        using cpx1 = spiderrock::protobuf::api::cpx1;
        using csz1 = spiderrock::protobuf::api::csz1;
        using cex1 = spiderrock::protobuf::api::cex1;
        using cnt1 = spiderrock::protobuf::api::cnt1;
        using cpx2 = spiderrock::protobuf::api::cpx2;
        using csz2 = spiderrock::protobuf::api::csz2;
        using cex2 = spiderrock::protobuf::api::cex2;
        using cnt2 = spiderrock::protobuf::api::cnt2;
        using c_more = spiderrock::protobuf::api::c_more;
        using cn_vol = spiderrock::protobuf::api::cn_vol;
        using cn_yrs = spiderrock::protobuf::api::cn_yrs;
        using cn_uprc = spiderrock::protobuf::api::cn_uprc;
        using cn_de = spiderrock::protobuf::api::cn_de;
        using cn_dd = spiderrock::protobuf::api::cn_dd;
        using cn_ve = spiderrock::protobuf::api::cn_ve;
        using cn_ga = spiderrock::protobuf::api::cn_ga;
        using cn_th = spiderrock::protobuf::api::cn_th;
        using cn_pr = spiderrock::protobuf::api::cn_pr;
        using dd_mult = spiderrock::protobuf::api::dd_mult__float;
        using price_format = spiderrock::protobuf::api::price_format;
        using u_price_format = spiderrock::protobuf::api::u_price_format;
        using underliers_per_cn = spiderrock::protobuf::api::underliers_per_cn;
        using underlier_type = spiderrock::protobuf::api::underlier_type__UnderlierType;
        using tick_value = spiderrock::protobuf::api::tick_value;
        using point_value = spiderrock::protobuf::api::point_value__float;
        using point_currency = spiderrock::protobuf::api::point_currency;
        using theo_vol = spiderrock::protobuf::api::theo_vol;
        using theo_prc = spiderrock::protobuf::api::theo_prc;
        using num_new_orders = spiderrock::protobuf::api::num_new_orders;
        using num_parent_limits = spiderrock::protobuf::api::num_parent_limits;
        using broker_vwap_mark = spiderrock::protobuf::api::broker_vwap_mark;
        using broker_vwap_umark = spiderrock::protobuf::api::broker_vwap_umark;
        using broker_qwap_mark = spiderrock::protobuf::api::broker_qwap_mark;
        using broker_qwap_umark = spiderrock::protobuf::api::broker_qwap_umark;
        using vwap_pn_l = spiderrock::protobuf::api::vwap_pn_l;
        using vwap_dn_pn_l = spiderrock::protobuf::api::vwap_dn_pn_l;
        using u_drift_vwap_pn_l = spiderrock::protobuf::api::u_drift_vwap_pn_l;
        using qwap_pn_l = spiderrock::protobuf::api::qwap_pn_l;
        using qwap_dn_pn_l = spiderrock::protobuf::api::qwap_dn_pn_l;
        using u_drift_qwap_pn_l = spiderrock::protobuf::api::u_drift_qwap_pn_l;
        using num_imprv_chld = spiderrock::protobuf::api::num_imprv_chld;
        using active_seconds = spiderrock::protobuf::api::active_seconds;
        using with_seconds = spiderrock::protobuf::api::with_seconds;
        using alone_seconds = spiderrock::protobuf::api::alone_seconds;
        using working_seconds = spiderrock::protobuf::api::working_seconds;
        using num_risk_cancels = spiderrock::protobuf::api::num_risk_cancels;
        using risk_hold_seconds = spiderrock::protobuf::api::risk_hold_seconds;
        using risk_thrtl_seconds = spiderrock::protobuf::api::risk_thrtl_seconds;
        using num_make_throttle_skips = spiderrock::protobuf::api::num_make_throttle_skips;
        using sum_make_throttle_delay = spiderrock::protobuf::api::sum_make_throttle_delay;
        using u_prc_drift = spiderrock::protobuf::api::u_prc_drift;
        using s_vol_drift = spiderrock::protobuf::api::s_vol_drift;
        using update_src = spiderrock::protobuf::api::update_src;
        using num_updates = spiderrock::protobuf::api::num_updates;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        user_name m_user_name{};
        parent_number m_parent_number{};
        base_parent_number m_base_parent_number{};
        modify_number m_modify_number{};
        notice_number m_notice_number{};
        risk_group_id m_risk_group_id{};
        trigger_group_id m_trigger_group_id{};
        strategy m_strategy{};
        exec_brkr_code m_exec_brkr_code{};
        alt_order_id m_alt_order_id{};
        package_id m_package_id{};
        alt_accnt m_alt_accnt{};
        alt_user_name m_alt_user_name{};
        stage_type m_stage_type{};
        is_flagged m_is_flagged{};
        ticker m_ticker{};
        u_prc m_u_prc{};
        u_prc_order m_u_prc_order{};
        nbbo_bid m_nbbo_bid{};
        nbbo_ask m_nbbo_ask{};
        nbbo_bid_sz m_nbbo_bid_sz{};
        nbbo_ask_sz m_nbbo_ask_sz{};
        surface_prc m_surface_prc{};
        surface_vol m_surface_vol{};
        order_ref_sdiv m_order_ref_sdiv{};
        order_ref_sdiv_type m_order_ref_sdiv_type{};
        spdr_broker_status m_spdr_broker_status{};
        spdr_order_status m_spdr_order_status{};
        spdr_close_reason m_spdr_close_reason{};
        spdr_reject_reason m_spdr_reject_reason{};
        spdr_reject_level m_spdr_reject_level{};
        is_permanently_closed m_is_permanently_closed{};
        num_extern_risk_hold m_num_extern_risk_hold{};
        last_extern_risk_text m_last_extern_risk_text{};
        last_extern_risk_reject m_last_extern_risk_reject{};
        spdr_comment m_spdr_comment{};
        order_size m_order_size{};
        order_active_size m_order_active_size{};
        active_duration m_active_duration{};
        update_dttm m_update_dttm{};
        good_till_dttm m_good_till_dttm{};
        leaves_quantity m_leaves_quantity{};
        avg_fill_price m_avg_fill_price{};
        avg_fill_uprice m_avg_fill_uprice{};
        cum_fill_quantity m_cum_fill_quantity{};
        avg_fill_vol m_avg_fill_vol{};
        cum_fill_vega m_cum_fill_vega{};
        cum_fill_theta m_cum_fill_theta{};
        cum_fill_ddelta m_cum_fill_ddelta{};
        cum_exch_fee m_cum_exch_fee{};
        cum_m10_pnl m_cum_m10_pnl{};
        cum_arrival_pnl m_cum_arrival_pnl{};
        last_fill_dttm m_last_fill_dttm{};
        risk_limit_size m_risk_limit_size{};
        risk_limit_desc m_risk_limit_desc{};
        risk_limit_level m_risk_limit_level{};
        risk_limit_detail m_risk_limit_detail{};
        limit_price m_limit_price{};
        limit_ref_uprc m_limit_ref_uprc{};
        limit_err m_limit_err{};
        limit_err_desc m_limit_err_desc{};
        best_limit_offset m_best_limit_offset{};
        make_prob_limit m_make_prob_limit{};
        make_surf_offset m_make_surf_offset{};
        make_limit_price m_make_limit_price{};
        make_limit_err m_make_limit_err{};
        take_prob_limit m_take_prob_limit{};
        take_surf_offset m_take_surf_offset{};
        take_limit_price m_take_limit_price{};
        take_limit_err m_take_limit_err{};
        auto_hedge m_auto_hedge{};
        hedge_instrument m_hedge_instrument{};
        hedge_sec_key m_hedge_sec_key{};
        hedge_sec_type m_hedge_sec_type{};
        hedge_beta_ratio m_hedge_beta_ratio{};
        hedge_scope m_hedge_scope{};
        hedge_session m_hedge_session{};
        extern_hedge_ex_dest m_extern_hedge_ex_dest{};
        extern_hedge_params m_extern_hedge_params{};
        user_data1 m_user_data1{};
        user_data2 m_user_data2{};
        max_progress m_max_progress{};
        max_progress_detail m_max_progress_detail{};
        max_progress_time m_max_progress_time{};
        broker_state m_broker_state{};
        broker_counter m_broker_counter{};
        make_state m_make_state{};
        make_counter m_make_counter{};
        take_state m_take_state{};
        take_counter m_take_counter{};
        mkt_resp_state m_mkt_resp_state{};
        mkt_resp_counter m_mkt_resp_counter{};
        mkt_cross_state m_mkt_cross_state{};
        mkt_cross_counter m_mkt_cross_counter{};
        progress_rule_detail m_progress_rule_detail{};
        last_child_event m_last_child_event{};
        last_child_reject_dttm m_last_child_reject_dttm{};
        last_child_reject_text m_last_child_reject_text{};
        spdr_mkt_state m_spdr_mkt_state{};
        cpx1 m_cpx1{};
        csz1 m_csz1{};
        cex1 m_cex1{};
        cnt1 m_cnt1{};
        cpx2 m_cpx2{};
        csz2 m_csz2{};
        cex2 m_cex2{};
        cnt2 m_cnt2{};
        c_more m_c_more{};
        cn_vol m_cn_vol{};
        cn_yrs m_cn_yrs{};
        cn_uprc m_cn_uprc{};
        cn_de m_cn_de{};
        cn_dd m_cn_dd{};
        cn_ve m_cn_ve{};
        cn_ga m_cn_ga{};
        cn_th m_cn_th{};
        cn_pr m_cn_pr{};
        dd_mult m_dd_mult{};
        price_format m_price_format{};
        u_price_format m_u_price_format{};
        underliers_per_cn m_underliers_per_cn{};
        underlier_type m_underlier_type{};
        tick_value m_tick_value{};
        point_value m_point_value{};
        point_currency m_point_currency{};
        theo_vol m_theo_vol{};
        theo_prc m_theo_prc{};
        num_new_orders m_num_new_orders{};
        num_parent_limits m_num_parent_limits{};
        broker_vwap_mark m_broker_vwap_mark{};
        broker_vwap_umark m_broker_vwap_umark{};
        broker_qwap_mark m_broker_qwap_mark{};
        broker_qwap_umark m_broker_qwap_umark{};
        vwap_pn_l m_vwap_pn_l{};
        vwap_dn_pn_l m_vwap_dn_pn_l{};
        u_drift_vwap_pn_l m_u_drift_vwap_pn_l{};
        qwap_pn_l m_qwap_pn_l{};
        qwap_dn_pn_l m_qwap_dn_pn_l{};
        u_drift_qwap_pn_l m_u_drift_qwap_pn_l{};
        num_imprv_chld m_num_imprv_chld{};
        active_seconds m_active_seconds{};
        with_seconds m_with_seconds{};
        alone_seconds m_alone_seconds{};
        working_seconds m_working_seconds{};
        num_risk_cancels m_num_risk_cancels{};
        risk_hold_seconds m_risk_hold_seconds{};
        risk_thrtl_seconds m_risk_thrtl_seconds{};
        num_make_throttle_skips m_num_make_throttle_skips{};
        sum_make_throttle_delay m_sum_make_throttle_delay{};
        u_prc_drift m_u_prc_drift{};
        s_vol_drift m_s_vol_drift{};
        update_src m_update_src{};
        num_updates m_num_updates{};
        timestamp m_timestamp{};

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
        parent_number get_parent_number() const {
            return m_parent_number;
        }		
        base_parent_number get_base_parent_number() const {
            return m_base_parent_number;
        }		
        modify_number get_modify_number() const {
            return m_modify_number;
        }		
        notice_number get_notice_number() const {
            return m_notice_number;
        }		
        risk_group_id get_risk_group_id() const {
            return m_risk_group_id;
        }		
        trigger_group_id get_trigger_group_id() const {
            return m_trigger_group_id;
        }		
        strategy get_strategy() const {
            return m_strategy;
        }		
        exec_brkr_code get_exec_brkr_code() const {
            return m_exec_brkr_code;
        }		
        alt_order_id get_alt_order_id() const {
            return m_alt_order_id;
        }		
        package_id get_package_id() const {
            return m_package_id;
        }		
        alt_accnt get_alt_accnt() const {
            return m_alt_accnt;
        }		
        alt_user_name get_alt_user_name() const {
            return m_alt_user_name;
        }		
        stage_type get_stage_type() const {
            return m_stage_type;
        }		
        is_flagged get_is_flagged() const {
            return m_is_flagged;
        }		
        ticker get_ticker() const {
            return m_ticker;
        }		
        u_prc get_u_prc() const {
            return m_u_prc;
        }		
        u_prc_order get_u_prc_order() const {
            return m_u_prc_order;
        }		
        nbbo_bid get_nbbo_bid() const {
            return m_nbbo_bid;
        }		
        nbbo_ask get_nbbo_ask() const {
            return m_nbbo_ask;
        }		
        nbbo_bid_sz get_nbbo_bid_sz() const {
            return m_nbbo_bid_sz;
        }		
        nbbo_ask_sz get_nbbo_ask_sz() const {
            return m_nbbo_ask_sz;
        }		
        surface_prc get_surface_prc() const {
            return m_surface_prc;
        }		
        surface_vol get_surface_vol() const {
            return m_surface_vol;
        }		
        order_ref_sdiv get_order_ref_sdiv() const {
            return m_order_ref_sdiv;
        }		
        order_ref_sdiv_type get_order_ref_sdiv_type() const {
            return m_order_ref_sdiv_type;
        }		
        spdr_broker_status get_spdr_broker_status() const {
            return m_spdr_broker_status;
        }		
        spdr_order_status get_spdr_order_status() const {
            return m_spdr_order_status;
        }		
        spdr_close_reason get_spdr_close_reason() const {
            return m_spdr_close_reason;
        }		
        spdr_reject_reason get_spdr_reject_reason() const {
            return m_spdr_reject_reason;
        }		
        spdr_reject_level get_spdr_reject_level() const {
            return m_spdr_reject_level;
        }		
        is_permanently_closed get_is_permanently_closed() const {
            return m_is_permanently_closed;
        }		
        num_extern_risk_hold get_num_extern_risk_hold() const {
            return m_num_extern_risk_hold;
        }		
        last_extern_risk_text get_last_extern_risk_text() const {
            return m_last_extern_risk_text;
        }		
        last_extern_risk_reject get_last_extern_risk_reject() const {
            return m_last_extern_risk_reject;
        }		
        spdr_comment get_spdr_comment() const {
            return m_spdr_comment;
        }		
        order_size get_order_size() const {
            return m_order_size;
        }		
        order_active_size get_order_active_size() const {
            return m_order_active_size;
        }		
        active_duration get_active_duration() const {
            return m_active_duration;
        }		
        update_dttm get_update_dttm() const {
            return m_update_dttm;
        }		
        good_till_dttm get_good_till_dttm() const {
            return m_good_till_dttm;
        }		
        leaves_quantity get_leaves_quantity() const {
            return m_leaves_quantity;
        }		
        avg_fill_price get_avg_fill_price() const {
            return m_avg_fill_price;
        }		
        avg_fill_uprice get_avg_fill_uprice() const {
            return m_avg_fill_uprice;
        }		
        cum_fill_quantity get_cum_fill_quantity() const {
            return m_cum_fill_quantity;
        }		
        avg_fill_vol get_avg_fill_vol() const {
            return m_avg_fill_vol;
        }		
        cum_fill_vega get_cum_fill_vega() const {
            return m_cum_fill_vega;
        }		
        cum_fill_theta get_cum_fill_theta() const {
            return m_cum_fill_theta;
        }		
        cum_fill_ddelta get_cum_fill_ddelta() const {
            return m_cum_fill_ddelta;
        }		
        cum_exch_fee get_cum_exch_fee() const {
            return m_cum_exch_fee;
        }		
        cum_m10_pnl get_cum_m10_pnl() const {
            return m_cum_m10_pnl;
        }		
        cum_arrival_pnl get_cum_arrival_pnl() const {
            return m_cum_arrival_pnl;
        }		
        last_fill_dttm get_last_fill_dttm() const {
            return m_last_fill_dttm;
        }		
        risk_limit_size get_risk_limit_size() const {
            return m_risk_limit_size;
        }		
        risk_limit_desc get_risk_limit_desc() const {
            return m_risk_limit_desc;
        }		
        risk_limit_level get_risk_limit_level() const {
            return m_risk_limit_level;
        }		
        risk_limit_detail get_risk_limit_detail() const {
            return m_risk_limit_detail;
        }		
        limit_price get_limit_price() const {
            return m_limit_price;
        }		
        limit_ref_uprc get_limit_ref_uprc() const {
            return m_limit_ref_uprc;
        }		
        limit_err get_limit_err() const {
            return m_limit_err;
        }		
        limit_err_desc get_limit_err_desc() const {
            return m_limit_err_desc;
        }		
        best_limit_offset get_best_limit_offset() const {
            return m_best_limit_offset;
        }		
        make_prob_limit get_make_prob_limit() const {
            return m_make_prob_limit;
        }		
        make_surf_offset get_make_surf_offset() const {
            return m_make_surf_offset;
        }		
        make_limit_price get_make_limit_price() const {
            return m_make_limit_price;
        }		
        make_limit_err get_make_limit_err() const {
            return m_make_limit_err;
        }		
        take_prob_limit get_take_prob_limit() const {
            return m_take_prob_limit;
        }		
        take_surf_offset get_take_surf_offset() const {
            return m_take_surf_offset;
        }		
        take_limit_price get_take_limit_price() const {
            return m_take_limit_price;
        }		
        take_limit_err get_take_limit_err() const {
            return m_take_limit_err;
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
        hedge_sec_type get_hedge_sec_type() const {
            return m_hedge_sec_type;
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
        extern_hedge_ex_dest get_extern_hedge_ex_dest() const {
            return m_extern_hedge_ex_dest;
        }		
        extern_hedge_params get_extern_hedge_params() const {
            return m_extern_hedge_params;
        }		
        user_data1 get_user_data1() const {
            return m_user_data1;
        }		
        user_data2 get_user_data2() const {
            return m_user_data2;
        }		
        max_progress get_max_progress() const {
            return m_max_progress;
        }		
        max_progress_detail get_max_progress_detail() const {
            return m_max_progress_detail;
        }		
        max_progress_time get_max_progress_time() const {
            return m_max_progress_time;
        }		
        broker_state get_broker_state() const {
            return m_broker_state;
        }		
        broker_counter get_broker_counter() const {
            return m_broker_counter;
        }		
        make_state get_make_state() const {
            return m_make_state;
        }		
        make_counter get_make_counter() const {
            return m_make_counter;
        }		
        take_state get_take_state() const {
            return m_take_state;
        }		
        take_counter get_take_counter() const {
            return m_take_counter;
        }		
        mkt_resp_state get_mkt_resp_state() const {
            return m_mkt_resp_state;
        }		
        mkt_resp_counter get_mkt_resp_counter() const {
            return m_mkt_resp_counter;
        }		
        mkt_cross_state get_mkt_cross_state() const {
            return m_mkt_cross_state;
        }		
        mkt_cross_counter get_mkt_cross_counter() const {
            return m_mkt_cross_counter;
        }		
        progress_rule_detail get_progress_rule_detail() const {
            return m_progress_rule_detail;
        }		
        last_child_event get_last_child_event() const {
            return m_last_child_event;
        }		
        last_child_reject_dttm get_last_child_reject_dttm() const {
            return m_last_child_reject_dttm;
        }		
        last_child_reject_text get_last_child_reject_text() const {
            return m_last_child_reject_text;
        }		
        spdr_mkt_state get_spdr_mkt_state() const {
            return m_spdr_mkt_state;
        }		
        cpx1 get_cpx1() const {
            return m_cpx1;
        }		
        csz1 get_csz1() const {
            return m_csz1;
        }		
        cex1 get_cex1() const {
            return m_cex1;
        }		
        cnt1 get_cnt1() const {
            return m_cnt1;
        }		
        cpx2 get_cpx2() const {
            return m_cpx2;
        }		
        csz2 get_csz2() const {
            return m_csz2;
        }		
        cex2 get_cex2() const {
            return m_cex2;
        }		
        cnt2 get_cnt2() const {
            return m_cnt2;
        }		
        c_more get_c_more() const {
            return m_c_more;
        }		
        cn_vol get_cn_vol() const {
            return m_cn_vol;
        }		
        cn_yrs get_cn_yrs() const {
            return m_cn_yrs;
        }		
        cn_uprc get_cn_uprc() const {
            return m_cn_uprc;
        }		
        cn_de get_cn_de() const {
            return m_cn_de;
        }		
        cn_dd get_cn_dd() const {
            return m_cn_dd;
        }		
        cn_ve get_cn_ve() const {
            return m_cn_ve;
        }		
        cn_ga get_cn_ga() const {
            return m_cn_ga;
        }		
        cn_th get_cn_th() const {
            return m_cn_th;
        }		
        cn_pr get_cn_pr() const {
            return m_cn_pr;
        }		
        dd_mult get_dd_mult() const {
            return m_dd_mult;
        }		
        price_format get_price_format() const {
            return m_price_format;
        }		
        u_price_format get_u_price_format() const {
            return m_u_price_format;
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
        theo_vol get_theo_vol() const {
            return m_theo_vol;
        }		
        theo_prc get_theo_prc() const {
            return m_theo_prc;
        }		
        num_new_orders get_num_new_orders() const {
            return m_num_new_orders;
        }		
        num_parent_limits get_num_parent_limits() const {
            return m_num_parent_limits;
        }		
        broker_vwap_mark get_broker_vwap_mark() const {
            return m_broker_vwap_mark;
        }		
        broker_vwap_umark get_broker_vwap_umark() const {
            return m_broker_vwap_umark;
        }		
        broker_qwap_mark get_broker_qwap_mark() const {
            return m_broker_qwap_mark;
        }		
        broker_qwap_umark get_broker_qwap_umark() const {
            return m_broker_qwap_umark;
        }		
        vwap_pn_l get_vwap_pn_l() const {
            return m_vwap_pn_l;
        }		
        vwap_dn_pn_l get_vwap_dn_pn_l() const {
            return m_vwap_dn_pn_l;
        }		
        u_drift_vwap_pn_l get_u_drift_vwap_pn_l() const {
            return m_u_drift_vwap_pn_l;
        }		
        qwap_pn_l get_qwap_pn_l() const {
            return m_qwap_pn_l;
        }		
        qwap_dn_pn_l get_qwap_dn_pn_l() const {
            return m_qwap_dn_pn_l;
        }		
        u_drift_qwap_pn_l get_u_drift_qwap_pn_l() const {
            return m_u_drift_qwap_pn_l;
        }		
        num_imprv_chld get_num_imprv_chld() const {
            return m_num_imprv_chld;
        }		
        active_seconds get_active_seconds() const {
            return m_active_seconds;
        }		
        with_seconds get_with_seconds() const {
            return m_with_seconds;
        }		
        alone_seconds get_alone_seconds() const {
            return m_alone_seconds;
        }		
        working_seconds get_working_seconds() const {
            return m_working_seconds;
        }		
        num_risk_cancels get_num_risk_cancels() const {
            return m_num_risk_cancels;
        }		
        risk_hold_seconds get_risk_hold_seconds() const {
            return m_risk_hold_seconds;
        }		
        risk_thrtl_seconds get_risk_thrtl_seconds() const {
            return m_risk_thrtl_seconds;
        }		
        num_make_throttle_skips get_num_make_throttle_skips() const {
            return m_num_make_throttle_skips;
        }		
        sum_make_throttle_delay get_sum_make_throttle_delay() const {
            return m_sum_make_throttle_delay;
        }		
        u_prc_drift get_u_prc_drift() const {
            return m_u_prc_drift;
        }		
        s_vol_drift get_s_vol_drift() const {
            return m_s_vol_drift;
        }		
        update_src get_update_src() const {
            return m_update_src;
        }		
        num_updates get_num_updates() const {
            return m_num_updates;
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
        void set_user_name(const user_name& value)  {
            m_user_name = value;
        }
        void set_parent_number(const parent_number& value)  {
            m_parent_number = value;
        }
        void set_base_parent_number(const base_parent_number& value)  {
            m_base_parent_number = value;
        }
        void set_modify_number(const modify_number& value)  {
            m_modify_number = value;
        }
        void set_notice_number(const notice_number& value)  {
            m_notice_number = value;
        }
        void set_risk_group_id(const risk_group_id& value)  {
            m_risk_group_id = value;
        }
        void set_trigger_group_id(const trigger_group_id& value)  {
            m_trigger_group_id = value;
        }
        void set_strategy(const strategy& value)  {
            m_strategy = value;
        }
        void set_exec_brkr_code(const exec_brkr_code& value)  {
            m_exec_brkr_code = value;
        }
        void set_alt_order_id(const alt_order_id& value)  {
            m_alt_order_id = value;
        }
        void set_package_id(const package_id& value)  {
            m_package_id = value;
        }
        void set_alt_accnt(const alt_accnt& value)  {
            m_alt_accnt = value;
        }
        void set_alt_user_name(const alt_user_name& value)  {
            m_alt_user_name = value;
        }
        void set_stage_type(const stage_type& value)  {
            m_stage_type = value;
        }
        void set_is_flagged(const is_flagged& value)  {
            m_is_flagged = value;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_u_prc(const u_prc& value)  {
            m_u_prc = value;
        }
        void set_u_prc_order(const u_prc_order& value)  {
            m_u_prc_order = value;
        }
        void set_nbbo_bid(const nbbo_bid& value)  {
            m_nbbo_bid = value;
        }
        void set_nbbo_ask(const nbbo_ask& value)  {
            m_nbbo_ask = value;
        }
        void set_nbbo_bid_sz(const nbbo_bid_sz& value)  {
            m_nbbo_bid_sz = value;
        }
        void set_nbbo_ask_sz(const nbbo_ask_sz& value)  {
            m_nbbo_ask_sz = value;
        }
        void set_surface_prc(const surface_prc& value)  {
            m_surface_prc = value;
        }
        void set_surface_vol(const surface_vol& value)  {
            m_surface_vol = value;
        }
        void set_order_ref_sdiv(const order_ref_sdiv& value)  {
            m_order_ref_sdiv = value;
        }
        void set_order_ref_sdiv_type(const order_ref_sdiv_type& value)  {
            m_order_ref_sdiv_type = value;
        }
        void set_spdr_broker_status(const spdr_broker_status& value)  {
            m_spdr_broker_status = value;
        }
        void set_spdr_order_status(const spdr_order_status& value)  {
            m_spdr_order_status = value;
        }
        void set_spdr_close_reason(const spdr_close_reason& value)  {
            m_spdr_close_reason = value;
        }
        void set_spdr_reject_reason(const spdr_reject_reason& value)  {
            m_spdr_reject_reason = value;
        }
        void set_spdr_reject_level(const spdr_reject_level& value)  {
            m_spdr_reject_level = value;
        }
        void set_is_permanently_closed(const is_permanently_closed& value)  {
            m_is_permanently_closed = value;
        }
        void set_num_extern_risk_hold(const num_extern_risk_hold& value)  {
            m_num_extern_risk_hold = value;
        }
        void set_last_extern_risk_text(const last_extern_risk_text& value)  {
            m_last_extern_risk_text = value;
        }
        void set_last_extern_risk_reject(const last_extern_risk_reject& value)  {
            m_last_extern_risk_reject = value;
        }
        void set_spdr_comment(const spdr_comment& value)  {
            m_spdr_comment = value;
        }
        void set_order_size(const order_size& value)  {
            m_order_size = value;
        }
        void set_order_active_size(const order_active_size& value)  {
            m_order_active_size = value;
        }
        void set_active_duration(const active_duration& value)  {
            m_active_duration = value;
        }
        void set_update_dttm(const update_dttm& value)  {
            m_update_dttm = value;
        }
        void set_good_till_dttm(const good_till_dttm& value)  {
            m_good_till_dttm = value;
        }
        void set_leaves_quantity(const leaves_quantity& value)  {
            m_leaves_quantity = value;
        }
        void set_avg_fill_price(const avg_fill_price& value)  {
            m_avg_fill_price = value;
        }
        void set_avg_fill_uprice(const avg_fill_uprice& value)  {
            m_avg_fill_uprice = value;
        }
        void set_cum_fill_quantity(const cum_fill_quantity& value)  {
            m_cum_fill_quantity = value;
        }
        void set_avg_fill_vol(const avg_fill_vol& value)  {
            m_avg_fill_vol = value;
        }
        void set_cum_fill_vega(const cum_fill_vega& value)  {
            m_cum_fill_vega = value;
        }
        void set_cum_fill_theta(const cum_fill_theta& value)  {
            m_cum_fill_theta = value;
        }
        void set_cum_fill_ddelta(const cum_fill_ddelta& value)  {
            m_cum_fill_ddelta = value;
        }
        void set_cum_exch_fee(const cum_exch_fee& value)  {
            m_cum_exch_fee = value;
        }
        void set_cum_m10_pnl(const cum_m10_pnl& value)  {
            m_cum_m10_pnl = value;
        }
        void set_cum_arrival_pnl(const cum_arrival_pnl& value)  {
            m_cum_arrival_pnl = value;
        }
        void set_last_fill_dttm(const last_fill_dttm& value)  {
            m_last_fill_dttm = value;
        }
        void set_risk_limit_size(const risk_limit_size& value)  {
            m_risk_limit_size = value;
        }
        void set_risk_limit_desc(const risk_limit_desc& value)  {
            m_risk_limit_desc = value;
        }
        void set_risk_limit_level(const risk_limit_level& value)  {
            m_risk_limit_level = value;
        }
        void set_risk_limit_detail(const risk_limit_detail& value)  {
            m_risk_limit_detail = value;
        }
        void set_limit_price(const limit_price& value)  {
            m_limit_price = value;
        }
        void set_limit_ref_uprc(const limit_ref_uprc& value)  {
            m_limit_ref_uprc = value;
        }
        void set_limit_err(const limit_err& value)  {
            m_limit_err = value;
        }
        void set_limit_err_desc(const limit_err_desc& value)  {
            m_limit_err_desc = value;
        }
        void set_best_limit_offset(const best_limit_offset& value)  {
            m_best_limit_offset = value;
        }
        void set_make_prob_limit(const make_prob_limit& value)  {
            m_make_prob_limit = value;
        }
        void set_make_surf_offset(const make_surf_offset& value)  {
            m_make_surf_offset = value;
        }
        void set_make_limit_price(const make_limit_price& value)  {
            m_make_limit_price = value;
        }
        void set_make_limit_err(const make_limit_err& value)  {
            m_make_limit_err = value;
        }
        void set_take_prob_limit(const take_prob_limit& value)  {
            m_take_prob_limit = value;
        }
        void set_take_surf_offset(const take_surf_offset& value)  {
            m_take_surf_offset = value;
        }
        void set_take_limit_price(const take_limit_price& value)  {
            m_take_limit_price = value;
        }
        void set_take_limit_err(const take_limit_err& value)  {
            m_take_limit_err = value;
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
        void set_hedge_sec_type(const hedge_sec_type& value)  {
            m_hedge_sec_type = value;
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
        void set_extern_hedge_ex_dest(const extern_hedge_ex_dest& value)  {
            m_extern_hedge_ex_dest = value;
        }
        void set_extern_hedge_params(const extern_hedge_params& value)  {
            m_extern_hedge_params = value;
        }
        void set_user_data1(const user_data1& value)  {
            m_user_data1 = value;
        }
        void set_user_data2(const user_data2& value)  {
            m_user_data2 = value;
        }
        void set_max_progress(const max_progress& value)  {
            m_max_progress = value;
        }
        void set_max_progress_detail(const max_progress_detail& value)  {
            m_max_progress_detail = value;
        }
        void set_max_progress_time(const max_progress_time& value)  {
            m_max_progress_time = value;
        }
        void set_broker_state(const broker_state& value)  {
            m_broker_state = value;
        }
        void set_broker_counter(const broker_counter& value)  {
            m_broker_counter = value;
        }
        void set_make_state(const make_state& value)  {
            m_make_state = value;
        }
        void set_make_counter(const make_counter& value)  {
            m_make_counter = value;
        }
        void set_take_state(const take_state& value)  {
            m_take_state = value;
        }
        void set_take_counter(const take_counter& value)  {
            m_take_counter = value;
        }
        void set_mkt_resp_state(const mkt_resp_state& value)  {
            m_mkt_resp_state = value;
        }
        void set_mkt_resp_counter(const mkt_resp_counter& value)  {
            m_mkt_resp_counter = value;
        }
        void set_mkt_cross_state(const mkt_cross_state& value)  {
            m_mkt_cross_state = value;
        }
        void set_mkt_cross_counter(const mkt_cross_counter& value)  {
            m_mkt_cross_counter = value;
        }
        void set_progress_rule_detail(const progress_rule_detail& value)  {
            m_progress_rule_detail = value;
        }
        void set_last_child_event(const last_child_event& value)  {
            m_last_child_event = value;
        }
        void set_last_child_reject_dttm(const last_child_reject_dttm& value)  {
            m_last_child_reject_dttm = value;
        }
        void set_last_child_reject_text(const last_child_reject_text& value)  {
            m_last_child_reject_text = value;
        }
        void set_spdr_mkt_state(const spdr_mkt_state& value)  {
            m_spdr_mkt_state = value;
        }
        void set_cpx1(const cpx1& value)  {
            m_cpx1 = value;
        }
        void set_csz1(const csz1& value)  {
            m_csz1 = value;
        }
        void set_cex1(const cex1& value)  {
            m_cex1 = value;
        }
        void set_cnt1(const cnt1& value)  {
            m_cnt1 = value;
        }
        void set_cpx2(const cpx2& value)  {
            m_cpx2 = value;
        }
        void set_csz2(const csz2& value)  {
            m_csz2 = value;
        }
        void set_cex2(const cex2& value)  {
            m_cex2 = value;
        }
        void set_cnt2(const cnt2& value)  {
            m_cnt2 = value;
        }
        void set_c_more(const c_more& value)  {
            m_c_more = value;
        }
        void set_cn_vol(const cn_vol& value)  {
            m_cn_vol = value;
        }
        void set_cn_yrs(const cn_yrs& value)  {
            m_cn_yrs = value;
        }
        void set_cn_uprc(const cn_uprc& value)  {
            m_cn_uprc = value;
        }
        void set_cn_de(const cn_de& value)  {
            m_cn_de = value;
        }
        void set_cn_dd(const cn_dd& value)  {
            m_cn_dd = value;
        }
        void set_cn_ve(const cn_ve& value)  {
            m_cn_ve = value;
        }
        void set_cn_ga(const cn_ga& value)  {
            m_cn_ga = value;
        }
        void set_cn_th(const cn_th& value)  {
            m_cn_th = value;
        }
        void set_cn_pr(const cn_pr& value)  {
            m_cn_pr = value;
        }
        void set_dd_mult(const dd_mult& value)  {
            m_dd_mult = value;
        }
        void set_price_format(const price_format& value)  {
            m_price_format = value;
        }
        void set_u_price_format(const u_price_format& value)  {
            m_u_price_format = value;
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
        void set_theo_vol(const theo_vol& value)  {
            m_theo_vol = value;
        }
        void set_theo_prc(const theo_prc& value)  {
            m_theo_prc = value;
        }
        void set_num_new_orders(const num_new_orders& value)  {
            m_num_new_orders = value;
        }
        void set_num_parent_limits(const num_parent_limits& value)  {
            m_num_parent_limits = value;
        }
        void set_broker_vwap_mark(const broker_vwap_mark& value)  {
            m_broker_vwap_mark = value;
        }
        void set_broker_vwap_umark(const broker_vwap_umark& value)  {
            m_broker_vwap_umark = value;
        }
        void set_broker_qwap_mark(const broker_qwap_mark& value)  {
            m_broker_qwap_mark = value;
        }
        void set_broker_qwap_umark(const broker_qwap_umark& value)  {
            m_broker_qwap_umark = value;
        }
        void set_vwap_pn_l(const vwap_pn_l& value)  {
            m_vwap_pn_l = value;
        }
        void set_vwap_dn_pn_l(const vwap_dn_pn_l& value)  {
            m_vwap_dn_pn_l = value;
        }
        void set_u_drift_vwap_pn_l(const u_drift_vwap_pn_l& value)  {
            m_u_drift_vwap_pn_l = value;
        }
        void set_qwap_pn_l(const qwap_pn_l& value)  {
            m_qwap_pn_l = value;
        }
        void set_qwap_dn_pn_l(const qwap_dn_pn_l& value)  {
            m_qwap_dn_pn_l = value;
        }
        void set_u_drift_qwap_pn_l(const u_drift_qwap_pn_l& value)  {
            m_u_drift_qwap_pn_l = value;
        }
        void set_num_imprv_chld(const num_imprv_chld& value)  {
            m_num_imprv_chld = value;
        }
        void set_active_seconds(const active_seconds& value)  {
            m_active_seconds = value;
        }
        void set_with_seconds(const with_seconds& value)  {
            m_with_seconds = value;
        }
        void set_alone_seconds(const alone_seconds& value)  {
            m_alone_seconds = value;
        }
        void set_working_seconds(const working_seconds& value)  {
            m_working_seconds = value;
        }
        void set_num_risk_cancels(const num_risk_cancels& value)  {
            m_num_risk_cancels = value;
        }
        void set_risk_hold_seconds(const risk_hold_seconds& value)  {
            m_risk_hold_seconds = value;
        }
        void set_risk_thrtl_seconds(const risk_thrtl_seconds& value)  {
            m_risk_thrtl_seconds = value;
        }
        void set_num_make_throttle_skips(const num_make_throttle_skips& value)  {
            m_num_make_throttle_skips = value;
        }
        void set_sum_make_throttle_delay(const sum_make_throttle_delay& value)  {
            m_sum_make_throttle_delay = value;
        }
        void set_u_prc_drift(const u_prc_drift& value)  {
            m_u_prc_drift = value;
        }
        void set_s_vol_drift(const s_vol_drift& value)  {
            m_s_vol_drift = value;
        }
        void set_update_src(const update_src& value)  {
            m_update_src = value;
        }
        void set_num_updates(const num_updates& value)  {
            m_num_updates = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentBrkrState::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const parent_number & value) {
            set_parent_number(value);
        }
        void set(const base_parent_number & value) {
            set_base_parent_number(value);
        }
        void set(const modify_number & value) {
            set_modify_number(value);
        }
        void set(const notice_number & value) {
            set_notice_number(value);
        }
        void set(const risk_group_id & value) {
            set_risk_group_id(value);
        }
        void set(const trigger_group_id & value) {
            set_trigger_group_id(value);
        }
        void set(const strategy & value) {
            set_strategy(value);
        }
        void set(const exec_brkr_code & value) {
            set_exec_brkr_code(value);
        }
        void set(const alt_order_id & value) {
            set_alt_order_id(value);
        }
        void set(const package_id & value) {
            set_package_id(value);
        }
        void set(const alt_accnt & value) {
            set_alt_accnt(value);
        }
        void set(const alt_user_name & value) {
            set_alt_user_name(value);
        }
        void set(const stage_type & value) {
            set_stage_type(value);
        }
        void set(const is_flagged & value) {
            set_is_flagged(value);
        }
        void set(const ticker & value) {
            set_ticker(value);
        }
        void set(const u_prc & value) {
            set_u_prc(value);
        }
        void set(const u_prc_order & value) {
            set_u_prc_order(value);
        }
        void set(const nbbo_bid & value) {
            set_nbbo_bid(value);
        }
        void set(const nbbo_ask & value) {
            set_nbbo_ask(value);
        }
        void set(const nbbo_bid_sz & value) {
            set_nbbo_bid_sz(value);
        }
        void set(const nbbo_ask_sz & value) {
            set_nbbo_ask_sz(value);
        }
        void set(const surface_prc & value) {
            set_surface_prc(value);
        }
        void set(const surface_vol & value) {
            set_surface_vol(value);
        }
        void set(const order_ref_sdiv & value) {
            set_order_ref_sdiv(value);
        }
        void set(const order_ref_sdiv_type & value) {
            set_order_ref_sdiv_type(value);
        }
        void set(const spdr_broker_status & value) {
            set_spdr_broker_status(value);
        }
        void set(const spdr_order_status & value) {
            set_spdr_order_status(value);
        }
        void set(const spdr_close_reason & value) {
            set_spdr_close_reason(value);
        }
        void set(const spdr_reject_reason & value) {
            set_spdr_reject_reason(value);
        }
        void set(const spdr_reject_level & value) {
            set_spdr_reject_level(value);
        }
        void set(const is_permanently_closed & value) {
            set_is_permanently_closed(value);
        }
        void set(const num_extern_risk_hold & value) {
            set_num_extern_risk_hold(value);
        }
        void set(const last_extern_risk_text & value) {
            set_last_extern_risk_text(value);
        }
        void set(const last_extern_risk_reject & value) {
            set_last_extern_risk_reject(value);
        }
        void set(const spdr_comment & value) {
            set_spdr_comment(value);
        }
        void set(const order_size & value) {
            set_order_size(value);
        }
        void set(const order_active_size & value) {
            set_order_active_size(value);
        }
        void set(const active_duration & value) {
            set_active_duration(value);
        }
        void set(const update_dttm & value) {
            set_update_dttm(value);
        }
        void set(const good_till_dttm & value) {
            set_good_till_dttm(value);
        }
        void set(const leaves_quantity & value) {
            set_leaves_quantity(value);
        }
        void set(const avg_fill_price & value) {
            set_avg_fill_price(value);
        }
        void set(const avg_fill_uprice & value) {
            set_avg_fill_uprice(value);
        }
        void set(const cum_fill_quantity & value) {
            set_cum_fill_quantity(value);
        }
        void set(const avg_fill_vol & value) {
            set_avg_fill_vol(value);
        }
        void set(const cum_fill_vega & value) {
            set_cum_fill_vega(value);
        }
        void set(const cum_fill_theta & value) {
            set_cum_fill_theta(value);
        }
        void set(const cum_fill_ddelta & value) {
            set_cum_fill_ddelta(value);
        }
        void set(const cum_exch_fee & value) {
            set_cum_exch_fee(value);
        }
        void set(const cum_m10_pnl & value) {
            set_cum_m10_pnl(value);
        }
        void set(const cum_arrival_pnl & value) {
            set_cum_arrival_pnl(value);
        }
        void set(const last_fill_dttm & value) {
            set_last_fill_dttm(value);
        }
        void set(const risk_limit_size & value) {
            set_risk_limit_size(value);
        }
        void set(const risk_limit_desc & value) {
            set_risk_limit_desc(value);
        }
        void set(const risk_limit_level & value) {
            set_risk_limit_level(value);
        }
        void set(const risk_limit_detail & value) {
            set_risk_limit_detail(value);
        }
        void set(const limit_price & value) {
            set_limit_price(value);
        }
        void set(const limit_ref_uprc & value) {
            set_limit_ref_uprc(value);
        }
        void set(const limit_err & value) {
            set_limit_err(value);
        }
        void set(const limit_err_desc & value) {
            set_limit_err_desc(value);
        }
        void set(const best_limit_offset & value) {
            set_best_limit_offset(value);
        }
        void set(const make_prob_limit & value) {
            set_make_prob_limit(value);
        }
        void set(const make_surf_offset & value) {
            set_make_surf_offset(value);
        }
        void set(const make_limit_price & value) {
            set_make_limit_price(value);
        }
        void set(const make_limit_err & value) {
            set_make_limit_err(value);
        }
        void set(const take_prob_limit & value) {
            set_take_prob_limit(value);
        }
        void set(const take_surf_offset & value) {
            set_take_surf_offset(value);
        }
        void set(const take_limit_price & value) {
            set_take_limit_price(value);
        }
        void set(const take_limit_err & value) {
            set_take_limit_err(value);
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
        void set(const hedge_sec_type & value) {
            set_hedge_sec_type(value);
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
        void set(const extern_hedge_ex_dest & value) {
            set_extern_hedge_ex_dest(value);
        }
        void set(const extern_hedge_params & value) {
            set_extern_hedge_params(value);
        }
        void set(const user_data1 & value) {
            set_user_data1(value);
        }
        void set(const user_data2 & value) {
            set_user_data2(value);
        }
        void set(const max_progress & value) {
            set_max_progress(value);
        }
        void set(const max_progress_detail & value) {
            set_max_progress_detail(value);
        }
        void set(const max_progress_time & value) {
            set_max_progress_time(value);
        }
        void set(const broker_state & value) {
            set_broker_state(value);
        }
        void set(const broker_counter & value) {
            set_broker_counter(value);
        }
        void set(const make_state & value) {
            set_make_state(value);
        }
        void set(const make_counter & value) {
            set_make_counter(value);
        }
        void set(const take_state & value) {
            set_take_state(value);
        }
        void set(const take_counter & value) {
            set_take_counter(value);
        }
        void set(const mkt_resp_state & value) {
            set_mkt_resp_state(value);
        }
        void set(const mkt_resp_counter & value) {
            set_mkt_resp_counter(value);
        }
        void set(const mkt_cross_state & value) {
            set_mkt_cross_state(value);
        }
        void set(const mkt_cross_counter & value) {
            set_mkt_cross_counter(value);
        }
        void set(const progress_rule_detail & value) {
            set_progress_rule_detail(value);
        }
        void set(const last_child_event & value) {
            set_last_child_event(value);
        }
        void set(const last_child_reject_dttm & value) {
            set_last_child_reject_dttm(value);
        }
        void set(const last_child_reject_text & value) {
            set_last_child_reject_text(value);
        }
        void set(const spdr_mkt_state & value) {
            set_spdr_mkt_state(value);
        }
        void set(const cpx1 & value) {
            set_cpx1(value);
        }
        void set(const csz1 & value) {
            set_csz1(value);
        }
        void set(const cex1 & value) {
            set_cex1(value);
        }
        void set(const cnt1 & value) {
            set_cnt1(value);
        }
        void set(const cpx2 & value) {
            set_cpx2(value);
        }
        void set(const csz2 & value) {
            set_csz2(value);
        }
        void set(const cex2 & value) {
            set_cex2(value);
        }
        void set(const cnt2 & value) {
            set_cnt2(value);
        }
        void set(const c_more & value) {
            set_c_more(value);
        }
        void set(const cn_vol & value) {
            set_cn_vol(value);
        }
        void set(const cn_yrs & value) {
            set_cn_yrs(value);
        }
        void set(const cn_uprc & value) {
            set_cn_uprc(value);
        }
        void set(const cn_de & value) {
            set_cn_de(value);
        }
        void set(const cn_dd & value) {
            set_cn_dd(value);
        }
        void set(const cn_ve & value) {
            set_cn_ve(value);
        }
        void set(const cn_ga & value) {
            set_cn_ga(value);
        }
        void set(const cn_th & value) {
            set_cn_th(value);
        }
        void set(const cn_pr & value) {
            set_cn_pr(value);
        }
        void set(const dd_mult & value) {
            set_dd_mult(value);
        }
        void set(const price_format & value) {
            set_price_format(value);
        }
        void set(const u_price_format & value) {
            set_u_price_format(value);
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
        void set(const theo_vol & value) {
            set_theo_vol(value);
        }
        void set(const theo_prc & value) {
            set_theo_prc(value);
        }
        void set(const num_new_orders & value) {
            set_num_new_orders(value);
        }
        void set(const num_parent_limits & value) {
            set_num_parent_limits(value);
        }
        void set(const broker_vwap_mark & value) {
            set_broker_vwap_mark(value);
        }
        void set(const broker_vwap_umark & value) {
            set_broker_vwap_umark(value);
        }
        void set(const broker_qwap_mark & value) {
            set_broker_qwap_mark(value);
        }
        void set(const broker_qwap_umark & value) {
            set_broker_qwap_umark(value);
        }
        void set(const vwap_pn_l & value) {
            set_vwap_pn_l(value);
        }
        void set(const vwap_dn_pn_l & value) {
            set_vwap_dn_pn_l(value);
        }
        void set(const u_drift_vwap_pn_l & value) {
            set_u_drift_vwap_pn_l(value);
        }
        void set(const qwap_pn_l & value) {
            set_qwap_pn_l(value);
        }
        void set(const qwap_dn_pn_l & value) {
            set_qwap_dn_pn_l(value);
        }
        void set(const u_drift_qwap_pn_l & value) {
            set_u_drift_qwap_pn_l(value);
        }
        void set(const num_imprv_chld & value) {
            set_num_imprv_chld(value);
        }
        void set(const active_seconds & value) {
            set_active_seconds(value);
        }
        void set(const with_seconds & value) {
            set_with_seconds(value);
        }
        void set(const alone_seconds & value) {
            set_alone_seconds(value);
        }
        void set(const working_seconds & value) {
            set_working_seconds(value);
        }
        void set(const num_risk_cancels & value) {
            set_num_risk_cancels(value);
        }
        void set(const risk_hold_seconds & value) {
            set_risk_hold_seconds(value);
        }
        void set(const risk_thrtl_seconds & value) {
            set_risk_thrtl_seconds(value);
        }
        void set(const num_make_throttle_skips & value) {
            set_num_make_throttle_skips(value);
        }
        void set(const sum_make_throttle_delay & value) {
            set_sum_make_throttle_delay(value);
        }
        void set(const u_prc_drift & value) {
            set_u_prc_drift(value);
        }
        void set(const s_vol_drift & value) {
            set_s_vol_drift(value);
        }
        void set(const update_src & value) {
            set_update_src(value);
        }
        void set(const num_updates & value) {
            set_num_updates(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const SpdrParentBrkrState & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_user_name);
            set(value.m_parent_number);
            set(value.m_base_parent_number);
            set(value.m_modify_number);
            set(value.m_notice_number);
            set(value.m_risk_group_id);
            set(value.m_trigger_group_id);
            set(value.m_strategy);
            set(value.m_exec_brkr_code);
            set(value.m_alt_order_id);
            set(value.m_package_id);
            set(value.m_alt_accnt);
            set(value.m_alt_user_name);
            set(value.m_stage_type);
            set(value.m_is_flagged);
            set(value.m_ticker);
            set(value.m_u_prc);
            set(value.m_u_prc_order);
            set(value.m_nbbo_bid);
            set(value.m_nbbo_ask);
            set(value.m_nbbo_bid_sz);
            set(value.m_nbbo_ask_sz);
            set(value.m_surface_prc);
            set(value.m_surface_vol);
            set(value.m_order_ref_sdiv);
            set(value.m_order_ref_sdiv_type);
            set(value.m_spdr_broker_status);
            set(value.m_spdr_order_status);
            set(value.m_spdr_close_reason);
            set(value.m_spdr_reject_reason);
            set(value.m_spdr_reject_level);
            set(value.m_is_permanently_closed);
            set(value.m_num_extern_risk_hold);
            set(value.m_last_extern_risk_text);
            set(value.m_last_extern_risk_reject);
            set(value.m_spdr_comment);
            set(value.m_order_size);
            set(value.m_order_active_size);
            set(value.m_active_duration);
            set(value.m_update_dttm);
            set(value.m_good_till_dttm);
            set(value.m_leaves_quantity);
            set(value.m_avg_fill_price);
            set(value.m_avg_fill_uprice);
            set(value.m_cum_fill_quantity);
            set(value.m_avg_fill_vol);
            set(value.m_cum_fill_vega);
            set(value.m_cum_fill_theta);
            set(value.m_cum_fill_ddelta);
            set(value.m_cum_exch_fee);
            set(value.m_cum_m10_pnl);
            set(value.m_cum_arrival_pnl);
            set(value.m_last_fill_dttm);
            set(value.m_risk_limit_size);
            set(value.m_risk_limit_desc);
            set(value.m_risk_limit_level);
            set(value.m_risk_limit_detail);
            set(value.m_limit_price);
            set(value.m_limit_ref_uprc);
            set(value.m_limit_err);
            set(value.m_limit_err_desc);
            set(value.m_best_limit_offset);
            set(value.m_make_prob_limit);
            set(value.m_make_surf_offset);
            set(value.m_make_limit_price);
            set(value.m_make_limit_err);
            set(value.m_take_prob_limit);
            set(value.m_take_surf_offset);
            set(value.m_take_limit_price);
            set(value.m_take_limit_err);
            set(value.m_auto_hedge);
            set(value.m_hedge_instrument);
            set(value.m_hedge_sec_key);
            set(value.m_hedge_sec_type);
            set(value.m_hedge_beta_ratio);
            set(value.m_hedge_scope);
            set(value.m_hedge_session);
            set(value.m_extern_hedge_ex_dest);
            set(value.m_extern_hedge_params);
            set(value.m_user_data1);
            set(value.m_user_data2);
            set(value.m_max_progress);
            set(value.m_max_progress_detail);
            set(value.m_max_progress_time);
            set(value.m_broker_state);
            set(value.m_broker_counter);
            set(value.m_make_state);
            set(value.m_make_counter);
            set(value.m_take_state);
            set(value.m_take_counter);
            set(value.m_mkt_resp_state);
            set(value.m_mkt_resp_counter);
            set(value.m_mkt_cross_state);
            set(value.m_mkt_cross_counter);
            set(value.m_progress_rule_detail);
            set(value.m_last_child_event);
            set(value.m_last_child_reject_dttm);
            set(value.m_last_child_reject_text);
            set(value.m_spdr_mkt_state);
            set(value.m_cpx1);
            set(value.m_csz1);
            set(value.m_cex1);
            set(value.m_cnt1);
            set(value.m_cpx2);
            set(value.m_csz2);
            set(value.m_cex2);
            set(value.m_cnt2);
            set(value.m_c_more);
            set(value.m_cn_vol);
            set(value.m_cn_yrs);
            set(value.m_cn_uprc);
            set(value.m_cn_de);
            set(value.m_cn_dd);
            set(value.m_cn_ve);
            set(value.m_cn_ga);
            set(value.m_cn_th);
            set(value.m_cn_pr);
            set(value.m_dd_mult);
            set(value.m_price_format);
            set(value.m_u_price_format);
            set(value.m_underliers_per_cn);
            set(value.m_underlier_type);
            set(value.m_tick_value);
            set(value.m_point_value);
            set(value.m_point_currency);
            set(value.m_theo_vol);
            set(value.m_theo_prc);
            set(value.m_num_new_orders);
            set(value.m_num_parent_limits);
            set(value.m_broker_vwap_mark);
            set(value.m_broker_vwap_umark);
            set(value.m_broker_qwap_mark);
            set(value.m_broker_qwap_umark);
            set(value.m_vwap_pn_l);
            set(value.m_vwap_dn_pn_l);
            set(value.m_u_drift_vwap_pn_l);
            set(value.m_qwap_pn_l);
            set(value.m_qwap_dn_pn_l);
            set(value.m_u_drift_qwap_pn_l);
            set(value.m_num_imprv_chld);
            set(value.m_active_seconds);
            set(value.m_with_seconds);
            set(value.m_alone_seconds);
            set(value.m_working_seconds);
            set(value.m_num_risk_cancels);
            set(value.m_risk_hold_seconds);
            set(value.m_risk_thrtl_seconds);
            set(value.m_num_make_throttle_skips);
            set(value.m_sum_make_throttle_delay);
            set(value.m_u_prc_drift);
            set(value.m_s_vol_drift);
            set(value.m_update_src);
            set(value.m_num_updates);
            set(value.m_timestamp);
        }

        SpdrParentBrkrState() {
            m__meta.set_message_type("SpdrParentBrkrState");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4070, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4070, length);
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
             *this = SpdrParentBrkrState{};
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
        bool IncludeParentNumber() const {
            return !(m_parent_number == 0);
        }
        bool IncludeBaseParentNumber() const {
            return !(m_base_parent_number == 0);
        }
        bool IncludeModifyNumber() const {
            return !(m_modify_number == 0);
        }
        bool IncludeNoticeNumber() const {
            return !(m_notice_number == 0);
        }
        bool IncludeRiskGroupId() const {
            return !(m_risk_group_id == 0);
        }
        bool IncludeTriggerGroupId() const {
            return !(m_trigger_group_id == 0);
        }
        bool IncludeStrategy() const {
            return !(m_strategy.empty());
        }
        bool IncludeExecBrkrCode() const {
            return !(m_exec_brkr_code.empty());
        }
        bool IncludeAltOrderId() const {
            return !(m_alt_order_id.empty());
        }
        bool IncludePackageId() const {
            return !(m_package_id == 0);
        }
        bool IncludeAltAccnt() const {
            return !(m_alt_accnt.empty());
        }
        bool IncludeAltUserName() const {
            return !(m_alt_user_name.empty());
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeUPrc() const {
            return !(m_u_prc == 0.0);
        }
        bool IncludeUPrcOrder() const {
            return !(m_u_prc_order == 0.0);
        }
        bool IncludeNbboBid() const {
            return !(m_nbbo_bid == 0.0);
        }
        bool IncludeNbboAsk() const {
            return !(m_nbbo_ask == 0.0);
        }
        bool IncludeNbboBidSz() const {
            return !(m_nbbo_bid_sz == 0);
        }
        bool IncludeNbboAskSz() const {
            return !(m_nbbo_ask_sz == 0);
        }
        bool IncludeSurfacePrc() const {
            return !(m_surface_prc == 0.0);
        }
        bool IncludeSurfaceVol() const {
            return !(m_surface_vol == 0.0);
        }
        bool IncludeOrderRefSdiv() const {
            return !(m_order_ref_sdiv == 0.0);
        }
        bool IncludeNumExternRiskHold() const {
            return !(m_num_extern_risk_hold == 0);
        }
        bool IncludeLastExternRiskText() const {
            return !(m_last_extern_risk_text.empty());
        }
        bool IncludeLastExternRiskReject() const {
            return (m_last_extern_risk_reject.time_since_epoch().count() != 0);
        }
        bool IncludeSpdrComment() const {
            return !(m_spdr_comment.empty());
        }
        bool IncludeOrderSize() const {
            return !(m_order_size == 0);
        }
        bool IncludeOrderActiveSize() const {
            return !(m_order_active_size == 0);
        }
        bool IncludeActiveDuration() const {
            return !(m_active_duration == 0);
        }
        bool IncludeUpdateDttm() const {
            return (m_update_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeGoodTillDttm() const {
            return (m_good_till_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeLeavesQuantity() const {
            return !(m_leaves_quantity == 0);
        }
        bool IncludeAvgFillPrice() const {
            return !(m_avg_fill_price == 0.0);
        }
        bool IncludeAvgFillUprice() const {
            return !(m_avg_fill_uprice == 0.0);
        }
        bool IncludeCumFillQuantity() const {
            return !(m_cum_fill_quantity == 0);
        }
        bool IncludeAvgFillVol() const {
            return !(m_avg_fill_vol == 0.0);
        }
        bool IncludeCumFillVega() const {
            return !(m_cum_fill_vega == 0.0);
        }
        bool IncludeCumFillTheta() const {
            return !(m_cum_fill_theta == 0.0);
        }
        bool IncludeCumFillDdelta() const {
            return !(m_cum_fill_ddelta == 0.0);
        }
        bool IncludeCumExchFee() const {
            return !(m_cum_exch_fee == 0.0);
        }
        bool IncludeCumM10Pnl() const {
            return !(m_cum_m10_pnl == 0.0);
        }
        bool IncludeCumArrivalPnl() const {
            return !(m_cum_arrival_pnl == 0.0);
        }
        bool IncludeLastFillDttm() const {
            return (m_last_fill_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeRiskLimitSize() const {
            return !(m_risk_limit_size == 0);
        }
        bool IncludeRiskLimitDetail() const {
            return !(m_risk_limit_detail.empty());
        }
        bool IncludeLimitPrice() const {
            return !(m_limit_price == 0.0);
        }
        bool IncludeLimitRefUprc() const {
            return !(m_limit_ref_uprc == 0.0);
        }
        bool IncludeLimitErrDesc() const {
            return !(m_limit_err_desc.empty());
        }
        bool IncludeBestLimitOffset() const {
            return !(m_best_limit_offset == 0.0);
        }
        bool IncludeMakeProbLimit() const {
            return !(m_make_prob_limit == 0.0);
        }
        bool IncludeMakeSurfOffset() const {
            return !(m_make_surf_offset == 0.0);
        }
        bool IncludeMakeLimitPrice() const {
            return !(m_make_limit_price == 0.0);
        }
        bool IncludeTakeProbLimit() const {
            return !(m_take_prob_limit == 0.0);
        }
        bool IncludeTakeSurfOffset() const {
            return !(m_take_surf_offset == 0.0);
        }
        bool IncludeTakeLimitPrice() const {
            return !(m_take_limit_price == 0.0);
        }
        bool IncludeHedgeSecKey() const {
            return (m_hedge_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeHedgeBetaRatio() const {
            return !(m_hedge_beta_ratio == 0.0);
        }
        bool IncludeExternHedgeExDest() const {
            return !(m_extern_hedge_ex_dest.empty());
        }
        bool IncludeExternHedgeParams() const {
            return !(m_extern_hedge_params.empty());
        }
        bool IncludeUserData1() const {
            return !(m_user_data1.empty());
        }
        bool IncludeUserData2() const {
            return !(m_user_data2.empty());
        }
        bool IncludeMaxProgressDetail() const {
            return !(m_max_progress_detail.empty());
        }
        bool IncludeMaxProgressTime() const {
            return (m_max_progress_time.time_since_epoch().count() != 0);
        }
        bool IncludeBrokerCounter() const {
            return !(m_broker_counter == 0);
        }
        bool IncludeMakeCounter() const {
            return !(m_make_counter == 0);
        }
        bool IncludeTakeCounter() const {
            return !(m_take_counter == 0);
        }
        bool IncludeMktRespCounter() const {
            return !(m_mkt_resp_counter == 0);
        }
        bool IncludeMktCrossCounter() const {
            return !(m_mkt_cross_counter == 0);
        }
        bool IncludeProgressRuleDetail() const {
            return !(m_progress_rule_detail.empty());
        }
        bool IncludeLastChildRejectDttm() const {
            return (m_last_child_reject_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeLastChildRejectText() const {
            return !(m_last_child_reject_text.empty());
        }
        bool IncludeCpx1() const {
            return !(m_cpx1 == 0.0);
        }
        bool IncludeCsz1() const {
            return !(m_csz1 == 0);
        }
        bool IncludeCex1() const {
            return !(m_cex1 == 0);
        }
        bool IncludeCnt1() const {
            return !(m_cnt1 == 0);
        }
        bool IncludeCpx2() const {
            return !(m_cpx2 == 0.0);
        }
        bool IncludeCsz2() const {
            return !(m_csz2 == 0);
        }
        bool IncludeCex2() const {
            return !(m_cex2 == 0);
        }
        bool IncludeCnt2() const {
            return !(m_cnt2 == 0);
        }
        bool IncludeCMore() const {
            return !(m_c_more == 0);
        }
        bool IncludeCnVol() const {
            return !(m_cn_vol == 0.0);
        }
        bool IncludeCnYrs() const {
            return !(m_cn_yrs == 0.0);
        }
        bool IncludeCnUprc() const {
            return !(m_cn_uprc == 0.0);
        }
        bool IncludeCnDe() const {
            return !(m_cn_de == 0.0);
        }
        bool IncludeCnDd() const {
            return !(m_cn_dd == 0.0);
        }
        bool IncludeCnVe() const {
            return !(m_cn_ve == 0.0);
        }
        bool IncludeCnGa() const {
            return !(m_cn_ga == 0.0);
        }
        bool IncludeCnTh() const {
            return !(m_cn_th == 0.0);
        }
        bool IncludeCnPr() const {
            return !(m_cn_pr == 0.0);
        }
        bool IncludeDdMult() const {
            return !(m_dd_mult == 0.0);
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
        bool IncludeTheoVol() const {
            return !(m_theo_vol == 0.0);
        }
        bool IncludeTheoPrc() const {
            return !(m_theo_prc == 0.0);
        }
        bool IncludeNumNewOrders() const {
            return !(m_num_new_orders == 0);
        }
        bool IncludeNumParentLimits() const {
            return !(m_num_parent_limits == 0);
        }
        bool IncludeBrokerVwapMark() const {
            return !(m_broker_vwap_mark == 0.0);
        }
        bool IncludeBrokerVwapUmark() const {
            return !(m_broker_vwap_umark == 0.0);
        }
        bool IncludeBrokerQwapMark() const {
            return !(m_broker_qwap_mark == 0.0);
        }
        bool IncludeBrokerQwapUmark() const {
            return !(m_broker_qwap_umark == 0.0);
        }
        bool IncludeVwapPnL() const {
            return !(m_vwap_pn_l == 0.0);
        }
        bool IncludeVwapDnPnL() const {
            return !(m_vwap_dn_pn_l == 0.0);
        }
        bool IncludeUDriftVwapPnL() const {
            return !(m_u_drift_vwap_pn_l == 0.0);
        }
        bool IncludeQwapPnL() const {
            return !(m_qwap_pn_l == 0.0);
        }
        bool IncludeQwapDnPnL() const {
            return !(m_qwap_dn_pn_l == 0.0);
        }
        bool IncludeUDriftQwapPnL() const {
            return !(m_u_drift_qwap_pn_l == 0.0);
        }
        bool IncludeNumImprvChld() const {
            return !(m_num_imprv_chld == 0);
        }
        bool IncludeActiveSeconds() const {
            return !(m_active_seconds == 0.0);
        }
        bool IncludeWithSeconds() const {
            return !(m_with_seconds == 0.0);
        }
        bool IncludeAloneSeconds() const {
            return !(m_alone_seconds == 0.0);
        }
        bool IncludeWorkingSeconds() const {
            return !(m_working_seconds == 0.0);
        }
        bool IncludeNumRiskCancels() const {
            return !(m_num_risk_cancels == 0);
        }
        bool IncludeRiskHoldSeconds() const {
            return !(m_risk_hold_seconds == 0.0);
        }
        bool IncludeRiskThrtlSeconds() const {
            return !(m_risk_thrtl_seconds == 0.0);
        }
        bool IncludeNumMakeThrottleSkips() const {
            return !(m_num_make_throttle_skips == 0);
        }
        bool IncludeSumMakeThrottleDelay() const {
            return !(m_sum_make_throttle_delay == 0.0);
        }
        bool IncludeUPrcDrift() const {
            return !(m_u_prc_drift == 0.0);
        }
        bool IncludeSVolDrift() const {
            return !(m_s_vol_drift == 0.0);
        }
        bool IncludeNumUpdates() const {
            return !(m_num_updates == 0);
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
            if ( IncludeUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_user_name);
            }
            if ( IncludeParentNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(106,m_parent_number);
            }
            if ( IncludeBaseParentNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(109,m_base_parent_number);
            }
            if ( IncludeModifyNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(596,m_modify_number);
            }
            if ( IncludeNoticeNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(604,m_notice_number);
            }
            if ( IncludeRiskGroupId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(112,m_risk_group_id);
            }
            if ( IncludeTriggerGroupId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(115,m_trigger_group_id);
            }
            if ( IncludeStrategy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(118,m_strategy);
            }
            if ( IncludeExecBrkrCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(606,m_exec_brkr_code);
            }
            if ( IncludeAltOrderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(121,m_alt_order_id);
            }
            if ( IncludePackageId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(124,m_package_id);
            }
            if ( IncludeAltAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(127,m_alt_accnt);
            }
            if ( IncludeAltUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(130,m_alt_user_name);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrStageType>(m_stage_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_flagged)));
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(139, tickerKeyLayout_ticker);
            }
            if ( IncludeUPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(142,m_u_prc);
            }
            if ( IncludeUPrcOrder()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(145,m_u_prc_order);
            }
            if ( IncludeNbboBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(148,m_nbbo_bid);
            }
            if ( IncludeNbboAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(151,m_nbbo_ask);
            }
            if ( IncludeNbboBidSz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(154,m_nbbo_bid_sz);
            }
            if ( IncludeNbboAskSz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(157,m_nbbo_ask_sz);
            }
            if ( IncludeSurfacePrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(160,m_surface_prc);
            }
            if ( IncludeSurfaceVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_surface_vol);
            }
            if ( IncludeOrderRefSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_order_ref_sdiv);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(169,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RefSDivType>(m_order_ref_sdiv_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(172,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrBrokerStatus>(m_spdr_broker_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(175,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(m_spdr_order_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(178,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrCloseReason>(m_spdr_close_reason)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(181,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRejectReason>(m_spdr_reject_reason)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(599,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRiskLevel>(m_spdr_reject_level)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_permanently_closed)));
            if ( IncludeNumExternRiskHold()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(187,m_num_extern_risk_hold);
            }
            if ( IncludeLastExternRiskText()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(190,m_last_extern_risk_text);
            }
            if ( IncludeLastExternRiskReject()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(193, m_last_extern_risk_reject);
            }
            if ( IncludeSpdrComment()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(196,m_spdr_comment);
            }
            if ( IncludeOrderSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(199,m_order_size);
            }
            if ( IncludeOrderActiveSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(202,m_order_active_size);
            }
            if ( IncludeActiveDuration()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(600,m_active_duration);
            }
            if ( IncludeUpdateDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(205, m_update_dttm);
            }
            if ( IncludeGoodTillDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(208, m_good_till_dttm);
            }
            if ( IncludeLeavesQuantity()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(211,m_leaves_quantity);
            }
            if ( IncludeAvgFillPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(214,m_avg_fill_price);
            }
            if ( IncludeAvgFillUprice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(217,m_avg_fill_uprice);
            }
            if ( IncludeCumFillQuantity()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(220,m_cum_fill_quantity);
            }
            if ( IncludeAvgFillVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(223,m_avg_fill_vol);
            }
            if ( IncludeCumFillVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(226,m_cum_fill_vega);
            }
            if ( IncludeCumFillTheta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(229,m_cum_fill_theta);
            }
            if ( IncludeCumFillDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(232,m_cum_fill_ddelta);
            }
            if ( IncludeCumExchFee()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(235,m_cum_exch_fee);
            }
            if ( IncludeCumM10Pnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(238,m_cum_m10_pnl);
            }
            if ( IncludeCumArrivalPnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(241,m_cum_arrival_pnl);
            }
            if ( IncludeLastFillDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(244, m_last_fill_dttm);
            }
            if ( IncludeRiskLimitSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(247,m_risk_limit_size);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(250,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRisk>(m_risk_limit_desc)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(601,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRiskLevel>(m_risk_limit_level)));
            if ( IncludeRiskLimitDetail()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(602,m_risk_limit_detail);
            }
            if ( IncludeLimitPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(253,m_limit_price);
            }
            if ( IncludeLimitRefUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(605,m_limit_ref_uprc);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(256,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LimitError>(m_limit_err)));
            if ( IncludeLimitErrDesc()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(259,m_limit_err_desc);
            }
            if ( IncludeBestLimitOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(262,m_best_limit_offset);
            }
            if ( IncludeMakeProbLimit()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(265,m_make_prob_limit);
            }
            if ( IncludeMakeSurfOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(268,m_make_surf_offset);
            }
            if ( IncludeMakeLimitPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(271,m_make_limit_price);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(274,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LimitError>(m_make_limit_err)));
            if ( IncludeTakeProbLimit()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(277,m_take_prob_limit);
            }
            if ( IncludeTakeSurfOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(280,m_take_surf_offset);
            }
            if ( IncludeTakeLimitPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(283,m_take_limit_price);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(286,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LimitError>(m_take_limit_err)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(289,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>(m_auto_hedge)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(292,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeInst>(m_hedge_instrument)));
            if ( IncludeHedgeSecKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_hedge_sec_key{};
                m_hedge_sec_key.setCodecExpiryKey(expiryKeyLayout_hedge_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(295, expiryKeyLayout_hedge_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(298,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_hedge_sec_type)));
            if ( IncludeHedgeBetaRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(301,m_hedge_beta_ratio);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(304,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeScope>(m_hedge_scope)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(603,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>(m_hedge_session)));
            if ( IncludeExternHedgeExDest()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(607,m_extern_hedge_ex_dest);
            }
            if ( IncludeExternHedgeParams()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(313,m_extern_hedge_params);
            }
            if ( IncludeUserData1()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(316,m_user_data1);
            }
            if ( IncludeUserData2()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(319,m_user_data2);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(322,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MaxProgress>(m_max_progress)));
            if ( IncludeMaxProgressDetail()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(325,m_max_progress_detail);
            }
            if ( IncludeMaxProgressTime()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(328, m_max_progress_time);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(331,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BrokerState>(m_broker_state)));
            if ( IncludeBrokerCounter()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(334,m_broker_counter);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(337,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlgoState>(m_make_state)));
            if ( IncludeMakeCounter()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(340,m_make_counter);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(343,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlgoState>(m_take_state)));
            if ( IncludeTakeCounter()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(346,m_take_counter);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(349,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktRespState>(m_mkt_resp_state)));
            if ( IncludeMktRespCounter()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(352,m_mkt_resp_counter);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(355,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktCrossState>(m_mkt_cross_state)));
            if ( IncludeMktCrossCounter()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(358,m_mkt_cross_counter);
            }
            if ( IncludeProgressRuleDetail()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(361,m_progress_rule_detail);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(364,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildEvent>(m_last_child_event)));
            if ( IncludeLastChildRejectDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(367, m_last_child_reject_dttm);
            }
            if ( IncludeLastChildRejectText()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(370,m_last_child_reject_text);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(373,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrMarketState>(m_spdr_mkt_state)));
            if ( IncludeCpx1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(376,m_cpx1);
            }
            if ( IncludeCsz1()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(379,m_csz1);
            }
            if ( IncludeCex1()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(382,m_cex1);
            }
            if ( IncludeCnt1()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(385,m_cnt1);
            }
            if ( IncludeCpx2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(388,m_cpx2);
            }
            if ( IncludeCsz2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(391,m_csz2);
            }
            if ( IncludeCex2()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(394,m_cex2);
            }
            if ( IncludeCnt2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(397,m_cnt2);
            }
            if ( IncludeCMore()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(400,m_c_more);
            }
            if ( IncludeCnVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(406,m_cn_vol);
            }
            if ( IncludeCnYrs()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(409,m_cn_yrs);
            }
            if ( IncludeCnUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(412,m_cn_uprc);
            }
            if ( IncludeCnDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(415,m_cn_de);
            }
            if ( IncludeCnDd()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(418,m_cn_dd);
            }
            if ( IncludeCnVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(421,m_cn_ve);
            }
            if ( IncludeCnGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(424,m_cn_ga);
            }
            if ( IncludeCnTh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(427,m_cn_th);
            }
            if ( IncludeCnPr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(430,m_cn_pr);
            }
            if ( IncludeDdMult()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(433,m_dd_mult);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(436,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(439,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_u_price_format)));
            if ( IncludeUnderliersPerCn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(442,m_underliers_per_cn);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(445,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>(m_underlier_type)));
            if ( IncludeTickValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(448,m_tick_value);
            }
            if ( IncludePointValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(451,m_point_value);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(454,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            if ( IncludeTheoVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(511,m_theo_vol);
            }
            if ( IncludeTheoPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(514,m_theo_prc);
            }
            if ( IncludeNumNewOrders()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(517,m_num_new_orders);
            }
            if ( IncludeNumParentLimits()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(520,m_num_parent_limits);
            }
            if ( IncludeBrokerVwapMark()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(523,m_broker_vwap_mark);
            }
            if ( IncludeBrokerVwapUmark()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(526,m_broker_vwap_umark);
            }
            if ( IncludeBrokerQwapMark()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(529,m_broker_qwap_mark);
            }
            if ( IncludeBrokerQwapUmark()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(532,m_broker_qwap_umark);
            }
            if ( IncludeVwapPnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(535,m_vwap_pn_l);
            }
            if ( IncludeVwapDnPnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(538,m_vwap_dn_pn_l);
            }
            if ( IncludeUDriftVwapPnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(541,m_u_drift_vwap_pn_l);
            }
            if ( IncludeQwapPnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(544,m_qwap_pn_l);
            }
            if ( IncludeQwapDnPnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(547,m_qwap_dn_pn_l);
            }
            if ( IncludeUDriftQwapPnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(550,m_u_drift_qwap_pn_l);
            }
            if ( IncludeNumImprvChld()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(553,m_num_imprv_chld);
            }
            if ( IncludeActiveSeconds()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(556,m_active_seconds);
            }
            if ( IncludeWithSeconds()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(559,m_with_seconds);
            }
            if ( IncludeAloneSeconds()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(562,m_alone_seconds);
            }
            if ( IncludeWorkingSeconds()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(565,m_working_seconds);
            }
            if ( IncludeNumRiskCancels()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(568,m_num_risk_cancels);
            }
            if ( IncludeRiskHoldSeconds()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(571,m_risk_hold_seconds);
            }
            if ( IncludeRiskThrtlSeconds()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(574,m_risk_thrtl_seconds);
            }
            if ( IncludeNumMakeThrottleSkips()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(577,m_num_make_throttle_skips);
            }
            if ( IncludeSumMakeThrottleDelay()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(580,m_sum_make_throttle_delay);
            }
            if ( IncludeUPrcDrift()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(583,m_u_prc_drift);
            }
            if ( IncludeSVolDrift()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(586,m_s_vol_drift);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(589,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UpdateSource>(m_update_src)));
            if ( IncludeNumUpdates()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(592,m_num_updates);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(595, m_timestamp);
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
            if ( IncludeParentNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,106,m_parent_number);
            }
            if ( IncludeBaseParentNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,109,m_base_parent_number);
            }
            if ( IncludeModifyNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,596,m_modify_number);
            }
            if ( IncludeNoticeNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,604,m_notice_number);
            }
            if ( IncludeRiskGroupId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,112,m_risk_group_id);
            }
            if ( IncludeTriggerGroupId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,115,m_trigger_group_id);
            }
            if ( IncludeStrategy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,118,static_cast<string>(m_strategy));
            }
            if ( IncludeExecBrkrCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,606,static_cast<string>(m_exec_brkr_code));
            }
            if ( IncludeAltOrderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,121,static_cast<string>(m_alt_order_id));
            }
            if ( IncludePackageId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,124,m_package_id);
            }
            if ( IncludeAltAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,127,static_cast<string>(m_alt_accnt));
            }
            if ( IncludeAltUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,130,static_cast<string>(m_alt_user_name));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrStageType>(m_stage_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_flagged)));
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 139, tickerKeyLayout_ticker);
            }
            if ( IncludeUPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,142,m_u_prc);
            }
            if ( IncludeUPrcOrder()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,145,m_u_prc_order);
            }
            if ( IncludeNbboBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,148,m_nbbo_bid);
            }
            if ( IncludeNbboAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,151,m_nbbo_ask);
            }
            if ( IncludeNbboBidSz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,154,m_nbbo_bid_sz);
            }
            if ( IncludeNbboAskSz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,157,m_nbbo_ask_sz);
            }
            if ( IncludeSurfacePrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,160,m_surface_prc);
            }
            if ( IncludeSurfaceVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_surface_vol);
            }
            if ( IncludeOrderRefSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_order_ref_sdiv);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,169,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RefSDivType>(m_order_ref_sdiv_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,172,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrBrokerStatus>(m_spdr_broker_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,175,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(m_spdr_order_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,178,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrCloseReason>(m_spdr_close_reason)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,181,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRejectReason>(m_spdr_reject_reason)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,599,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRiskLevel>(m_spdr_reject_level)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_permanently_closed)));
            if ( IncludeNumExternRiskHold()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,187,m_num_extern_risk_hold);
            }
            if ( IncludeLastExternRiskText()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,190,static_cast<string>(m_last_extern_risk_text));
            }
            if ( IncludeLastExternRiskReject()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 193, m_last_extern_risk_reject);
            }
            if ( IncludeSpdrComment()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,196,static_cast<string>(m_spdr_comment));
            }
            if ( IncludeOrderSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,199,m_order_size);
            }
            if ( IncludeOrderActiveSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,202,m_order_active_size);
            }
            if ( IncludeActiveDuration()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,600,m_active_duration);
            }
            if ( IncludeUpdateDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 205, m_update_dttm);
            }
            if ( IncludeGoodTillDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 208, m_good_till_dttm);
            }
            if ( IncludeLeavesQuantity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,211,m_leaves_quantity);
            }
            if ( IncludeAvgFillPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,214,m_avg_fill_price);
            }
            if ( IncludeAvgFillUprice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,217,m_avg_fill_uprice);
            }
            if ( IncludeCumFillQuantity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,220,m_cum_fill_quantity);
            }
            if ( IncludeAvgFillVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,223,m_avg_fill_vol);
            }
            if ( IncludeCumFillVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,226,m_cum_fill_vega);
            }
            if ( IncludeCumFillTheta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,229,m_cum_fill_theta);
            }
            if ( IncludeCumFillDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,232,m_cum_fill_ddelta);
            }
            if ( IncludeCumExchFee()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,235,m_cum_exch_fee);
            }
            if ( IncludeCumM10Pnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,238,m_cum_m10_pnl);
            }
            if ( IncludeCumArrivalPnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,241,m_cum_arrival_pnl);
            }
            if ( IncludeLastFillDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 244, m_last_fill_dttm);
            }
            if ( IncludeRiskLimitSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,247,m_risk_limit_size);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,250,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRisk>(m_risk_limit_desc)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,601,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRiskLevel>(m_risk_limit_level)));
            if ( IncludeRiskLimitDetail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,602,static_cast<string>(m_risk_limit_detail));
            }
            if ( IncludeLimitPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,253,m_limit_price);
            }
            if ( IncludeLimitRefUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,605,m_limit_ref_uprc);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,256,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LimitError>(m_limit_err)));
            if ( IncludeLimitErrDesc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,259,static_cast<string>(m_limit_err_desc));
            }
            if ( IncludeBestLimitOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,262,m_best_limit_offset);
            }
            if ( IncludeMakeProbLimit()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,265,m_make_prob_limit);
            }
            if ( IncludeMakeSurfOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,268,m_make_surf_offset);
            }
            if ( IncludeMakeLimitPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,271,m_make_limit_price);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,274,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LimitError>(m_make_limit_err)));
            if ( IncludeTakeProbLimit()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,277,m_take_prob_limit);
            }
            if ( IncludeTakeSurfOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,280,m_take_surf_offset);
            }
            if ( IncludeTakeLimitPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,283,m_take_limit_price);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,286,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LimitError>(m_take_limit_err)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,289,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>(m_auto_hedge)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,292,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeInst>(m_hedge_instrument)));
            if ( IncludeHedgeSecKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_hedge_sec_key{};
                m_hedge_sec_key.setCodecExpiryKey(expiryKeyLayout_hedge_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 295, expiryKeyLayout_hedge_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,298,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_hedge_sec_type)));
            if ( IncludeHedgeBetaRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,301,m_hedge_beta_ratio);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,304,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeScope>(m_hedge_scope)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,603,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>(m_hedge_session)));
            if ( IncludeExternHedgeExDest()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,607,static_cast<string>(m_extern_hedge_ex_dest));
            }
            if ( IncludeExternHedgeParams()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,313,static_cast<string>(m_extern_hedge_params));
            }
            if ( IncludeUserData1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,316,static_cast<string>(m_user_data1));
            }
            if ( IncludeUserData2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,319,static_cast<string>(m_user_data2));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,322,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MaxProgress>(m_max_progress)));
            if ( IncludeMaxProgressDetail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,325,static_cast<string>(m_max_progress_detail));
            }
            if ( IncludeMaxProgressTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 328, m_max_progress_time);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,331,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BrokerState>(m_broker_state)));
            if ( IncludeBrokerCounter()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,334,m_broker_counter);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,337,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlgoState>(m_make_state)));
            if ( IncludeMakeCounter()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,340,m_make_counter);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,343,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlgoState>(m_take_state)));
            if ( IncludeTakeCounter()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,346,m_take_counter);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,349,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktRespState>(m_mkt_resp_state)));
            if ( IncludeMktRespCounter()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,352,m_mkt_resp_counter);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,355,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktCrossState>(m_mkt_cross_state)));
            if ( IncludeMktCrossCounter()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,358,m_mkt_cross_counter);
            }
            if ( IncludeProgressRuleDetail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,361,static_cast<string>(m_progress_rule_detail));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,364,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildEvent>(m_last_child_event)));
            if ( IncludeLastChildRejectDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 367, m_last_child_reject_dttm);
            }
            if ( IncludeLastChildRejectText()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,370,static_cast<string>(m_last_child_reject_text));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,373,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrMarketState>(m_spdr_mkt_state)));
            if ( IncludeCpx1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,376,m_cpx1);
            }
            if ( IncludeCsz1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,379,m_csz1);
            }
            if ( IncludeCex1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,382,m_cex1);
            }
            if ( IncludeCnt1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,385,m_cnt1);
            }
            if ( IncludeCpx2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,388,m_cpx2);
            }
            if ( IncludeCsz2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,391,m_csz2);
            }
            if ( IncludeCex2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,394,m_cex2);
            }
            if ( IncludeCnt2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,397,m_cnt2);
            }
            if ( IncludeCMore()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,400,m_c_more);
            }
            if ( IncludeCnVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,406,m_cn_vol);
            }
            if ( IncludeCnYrs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,409,m_cn_yrs);
            }
            if ( IncludeCnUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,412,m_cn_uprc);
            }
            if ( IncludeCnDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,415,m_cn_de);
            }
            if ( IncludeCnDd()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,418,m_cn_dd);
            }
            if ( IncludeCnVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,421,m_cn_ve);
            }
            if ( IncludeCnGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,424,m_cn_ga);
            }
            if ( IncludeCnTh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,427,m_cn_th);
            }
            if ( IncludeCnPr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,430,m_cn_pr);
            }
            if ( IncludeDdMult()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,433,m_dd_mult);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,436,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,439,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_u_price_format)));
            if ( IncludeUnderliersPerCn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,442,m_underliers_per_cn);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,445,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>(m_underlier_type)));
            if ( IncludeTickValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,448,m_tick_value);
            }
            if ( IncludePointValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,451,m_point_value);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,454,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            if ( IncludeTheoVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,511,m_theo_vol);
            }
            if ( IncludeTheoPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,514,m_theo_prc);
            }
            if ( IncludeNumNewOrders()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,517,m_num_new_orders);
            }
            if ( IncludeNumParentLimits()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,520,m_num_parent_limits);
            }
            if ( IncludeBrokerVwapMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,523,m_broker_vwap_mark);
            }
            if ( IncludeBrokerVwapUmark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,526,m_broker_vwap_umark);
            }
            if ( IncludeBrokerQwapMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,529,m_broker_qwap_mark);
            }
            if ( IncludeBrokerQwapUmark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,532,m_broker_qwap_umark);
            }
            if ( IncludeVwapPnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,535,m_vwap_pn_l);
            }
            if ( IncludeVwapDnPnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,538,m_vwap_dn_pn_l);
            }
            if ( IncludeUDriftVwapPnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,541,m_u_drift_vwap_pn_l);
            }
            if ( IncludeQwapPnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,544,m_qwap_pn_l);
            }
            if ( IncludeQwapDnPnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,547,m_qwap_dn_pn_l);
            }
            if ( IncludeUDriftQwapPnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,550,m_u_drift_qwap_pn_l);
            }
            if ( IncludeNumImprvChld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,553,m_num_imprv_chld);
            }
            if ( IncludeActiveSeconds()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,556,m_active_seconds);
            }
            if ( IncludeWithSeconds()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,559,m_with_seconds);
            }
            if ( IncludeAloneSeconds()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,562,m_alone_seconds);
            }
            if ( IncludeWorkingSeconds()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,565,m_working_seconds);
            }
            if ( IncludeNumRiskCancels()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,568,m_num_risk_cancels);
            }
            if ( IncludeRiskHoldSeconds()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,571,m_risk_hold_seconds);
            }
            if ( IncludeRiskThrtlSeconds()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,574,m_risk_thrtl_seconds);
            }
            if ( IncludeNumMakeThrottleSkips()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,577,m_num_make_throttle_skips);
            }
            if ( IncludeSumMakeThrottleDelay()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,580,m_sum_make_throttle_delay);
            }
            if ( IncludeUPrcDrift()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,583,m_u_prc_drift);
            }
            if ( IncludeSVolDrift()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,586,m_s_vol_drift);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,589,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UpdateSource>(m_update_src)));
            if ( IncludeNumUpdates()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,592,m_num_updates);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 595, m_timestamp);
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
                    case 106: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_parent_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_base_parent_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 596: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_modify_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 604: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_notice_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_risk_group_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_trigger_group_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_strategy = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 606: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_brkr_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_order_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_package_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 133: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_stage_type = static_cast<spiderrock::protobuf::api::SpdrStageType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 136: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_flagged = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc_order = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_nbbo_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_nbbo_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_nbbo_bid_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_nbbo_ask_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surface_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surface_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_ref_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 169: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_order_ref_sdiv_type = static_cast<spiderrock::protobuf::api::RefSDivType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 172: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_broker_status = static_cast<spiderrock::protobuf::api::SpdrBrokerStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 175: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_order_status = static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 178: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_close_reason = static_cast<spiderrock::protobuf::api::SpdrCloseReason>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 181: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_reject_reason = static_cast<spiderrock::protobuf::api::SpdrRejectReason>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 599: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_reject_level = static_cast<spiderrock::protobuf::api::SpdrRiskLevel>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 184: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_permanently_closed = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_extern_risk_hold = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_last_extern_risk_text = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_last_extern_risk_reject = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_spdr_comment = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_order_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_order_active_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 600: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_active_duration = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_update_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_good_till_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_leaves_quantity = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_avg_fill_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_avg_fill_uprice = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_fill_quantity = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_avg_fill_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 226: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cum_fill_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 229: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cum_fill_theta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 232: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cum_fill_ddelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cum_exch_fee = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 238: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cum_m10_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 241: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cum_arrival_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 244: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_last_fill_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 247: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_risk_limit_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 250: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_risk_limit_desc = static_cast<spiderrock::protobuf::api::SpdrRisk>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 601: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_risk_limit_level = static_cast<spiderrock::protobuf::api::SpdrRiskLevel>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 602: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_risk_limit_detail = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 253: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_limit_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 605: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_limit_ref_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 256: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_limit_err = static_cast<spiderrock::protobuf::api::LimitError>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 259: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_limit_err_desc = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 262: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_best_limit_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 265: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_make_prob_limit = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 268: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_make_surf_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 271: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_make_limit_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 274: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_make_limit_err = static_cast<spiderrock::protobuf::api::LimitError>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 277: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_take_prob_limit = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 280: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_take_surf_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 283: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_take_limit_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 286: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_take_limit_err = static_cast<spiderrock::protobuf::api::LimitError>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 289: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auto_hedge = static_cast<spiderrock::protobuf::api::AutoHedge>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 292: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_instrument = static_cast<spiderrock::protobuf::api::HedgeInst>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 295: {
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_hedge_sec_key.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 298: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 301: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_hedge_beta_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 304: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_scope = static_cast<spiderrock::protobuf::api::HedgeScope>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 603: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_session = static_cast<spiderrock::protobuf::api::MarketSession>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 607: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_extern_hedge_ex_dest = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 313: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_extern_hedge_params = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 316: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_data1 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 319: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_data2 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 322: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_max_progress = static_cast<spiderrock::protobuf::api::MaxProgress>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 325: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_max_progress_detail = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 328: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_max_progress_time = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 331: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_broker_state = static_cast<spiderrock::protobuf::api::BrokerState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 334: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_broker_counter = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 337: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_make_state = static_cast<spiderrock::protobuf::api::AlgoState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 340: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_make_counter = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 343: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_take_state = static_cast<spiderrock::protobuf::api::AlgoState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 346: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_take_counter = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 349: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_mkt_resp_state = static_cast<spiderrock::protobuf::api::MktRespState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 352: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_mkt_resp_counter = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 355: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_mkt_cross_state = static_cast<spiderrock::protobuf::api::MktCrossState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 358: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_mkt_cross_counter = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 361: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_progress_rule_detail = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 364: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_last_child_event = static_cast<spiderrock::protobuf::api::ChildEvent>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 367: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_last_child_reject_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 370: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_last_child_reject_text = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 373: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_mkt_state = static_cast<spiderrock::protobuf::api::SpdrMarketState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 376: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cpx1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 379: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_csz1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 382: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_cex1 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 385: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cnt1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 388: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cpx2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 391: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_csz2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 394: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_cex2 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 397: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cnt2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 400: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_c_more = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 406: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cn_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 409: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cn_yrs = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 412: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cn_uprc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 415: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cn_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 418: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cn_dd = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 421: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cn_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 424: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cn_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 427: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cn_th = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 430: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cn_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 433: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_dd_mult = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 436: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_format = static_cast<spiderrock::protobuf::api::PriceFormat>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 439: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_u_price_format = static_cast<spiderrock::protobuf::api::PriceFormat>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 442: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_underliers_per_cn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 445: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_underlier_type = static_cast<spiderrock::protobuf::api::UnderlierType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 448: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_tick_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 451: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_point_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 454: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_point_currency = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 511: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_theo_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 514: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_theo_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 517: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_new_orders = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 520: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_num_parent_limits = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 523: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_broker_vwap_mark = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 526: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_broker_vwap_umark = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 529: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_broker_qwap_mark = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 532: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_broker_qwap_umark = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 535: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vwap_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 538: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vwap_dn_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 541: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_drift_vwap_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 544: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_qwap_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 547: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_qwap_dn_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 550: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_drift_qwap_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 553: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_imprv_chld = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 556: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_active_seconds = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 559: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_with_seconds = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 562: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_alone_seconds = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 565: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_working_seconds = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 568: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_risk_cancels = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 571: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_hold_seconds = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 574: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_thrtl_seconds = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 577: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_make_throttle_skips = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 580: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sum_make_throttle_delay = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 583: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_prc_drift = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 586: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_vol_drift = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 589: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_update_src = static_cast<spiderrock::protobuf::api::UpdateSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 592: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_updates = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 595: {
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

    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::_meta>() const { return SpdrParentBrkrState::_meta{ m__meta}; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::pkey>() const { return SpdrParentBrkrState::pkey{ m_pkey}; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::user_name>() const { return m_user_name; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::parent_number>() const { return m_parent_number; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::base_parent_number>() const { return m_base_parent_number; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::modify_number>() const { return m_modify_number; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::notice_number>() const { return m_notice_number; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::risk_group_id>() const { return m_risk_group_id; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::trigger_group_id>() const { return m_trigger_group_id; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::strategy>() const { return m_strategy; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::exec_brkr_code>() const { return m_exec_brkr_code; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::alt_order_id>() const { return m_alt_order_id; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::package_id>() const { return m_package_id; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::alt_accnt>() const { return m_alt_accnt; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::alt_user_name>() const { return m_alt_user_name; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::stage_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrStageType>( m_stage_type)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::is_flagged>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_flagged)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::ticker>() const { return SpdrParentBrkrState::ticker{ m_ticker}; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::u_prc>() const { return m_u_prc; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::u_prc_order>() const { return m_u_prc_order; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::nbbo_bid>() const { return m_nbbo_bid; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::nbbo_ask>() const { return m_nbbo_ask; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::nbbo_bid_sz>() const { return m_nbbo_bid_sz; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::nbbo_ask_sz>() const { return m_nbbo_ask_sz; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::surface_prc>() const { return m_surface_prc; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::surface_vol>() const { return m_surface_vol; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::order_ref_sdiv>() const { return m_order_ref_sdiv; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::order_ref_sdiv_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RefSDivType>( m_order_ref_sdiv_type)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::spdr_broker_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrBrokerStatus>( m_spdr_broker_status)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::spdr_order_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>( m_spdr_order_status)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::spdr_close_reason>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrCloseReason>( m_spdr_close_reason)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::spdr_reject_reason>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRejectReason>( m_spdr_reject_reason)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::spdr_reject_level>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRiskLevel>( m_spdr_reject_level)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::is_permanently_closed>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_permanently_closed)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::num_extern_risk_hold>() const { return m_num_extern_risk_hold; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::last_extern_risk_text>() const { return m_last_extern_risk_text; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::last_extern_risk_reject>() const { return m_last_extern_risk_reject; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::spdr_comment>() const { return m_spdr_comment; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::order_size>() const { return m_order_size; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::order_active_size>() const { return m_order_active_size; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::active_duration>() const { return m_active_duration; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::update_dttm>() const { return m_update_dttm; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::good_till_dttm>() const { return m_good_till_dttm; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::leaves_quantity>() const { return m_leaves_quantity; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::avg_fill_price>() const { return m_avg_fill_price; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::avg_fill_uprice>() const { return m_avg_fill_uprice; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::cum_fill_quantity>() const { return m_cum_fill_quantity; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::avg_fill_vol>() const { return m_avg_fill_vol; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::cum_fill_vega>() const { return m_cum_fill_vega; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::cum_fill_theta>() const { return m_cum_fill_theta; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::cum_fill_ddelta>() const { return m_cum_fill_ddelta; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::cum_exch_fee>() const { return m_cum_exch_fee; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::cum_m10_pnl>() const { return m_cum_m10_pnl; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::cum_arrival_pnl>() const { return m_cum_arrival_pnl; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::last_fill_dttm>() const { return m_last_fill_dttm; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::risk_limit_size>() const { return m_risk_limit_size; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::risk_limit_desc>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRisk>( m_risk_limit_desc)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::risk_limit_level>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRiskLevel>( m_risk_limit_level)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::risk_limit_detail>() const { return m_risk_limit_detail; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::limit_price>() const { return m_limit_price; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::limit_ref_uprc>() const { return m_limit_ref_uprc; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::limit_err>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LimitError>( m_limit_err)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::limit_err_desc>() const { return m_limit_err_desc; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::best_limit_offset>() const { return m_best_limit_offset; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::make_prob_limit>() const { return m_make_prob_limit; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::make_surf_offset>() const { return m_make_surf_offset; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::make_limit_price>() const { return m_make_limit_price; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::make_limit_err>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LimitError>( m_make_limit_err)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::take_prob_limit>() const { return m_take_prob_limit; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::take_surf_offset>() const { return m_take_surf_offset; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::take_limit_price>() const { return m_take_limit_price; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::take_limit_err>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LimitError>( m_take_limit_err)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::auto_hedge>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>( m_auto_hedge)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::hedge_instrument>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeInst>( m_hedge_instrument)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::hedge_sec_key>() const { return SpdrParentBrkrState::hedge_sec_key{ m_hedge_sec_key}; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::hedge_sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_hedge_sec_type)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::hedge_beta_ratio>() const { return m_hedge_beta_ratio; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::hedge_scope>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeScope>( m_hedge_scope)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::hedge_session>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>( m_hedge_session)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::extern_hedge_ex_dest>() const { return m_extern_hedge_ex_dest; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::extern_hedge_params>() const { return m_extern_hedge_params; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::user_data1>() const { return m_user_data1; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::user_data2>() const { return m_user_data2; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::max_progress>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MaxProgress>( m_max_progress)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::max_progress_detail>() const { return m_max_progress_detail; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::max_progress_time>() const { return m_max_progress_time; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::broker_state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BrokerState>( m_broker_state)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::broker_counter>() const { return m_broker_counter; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::make_state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlgoState>( m_make_state)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::make_counter>() const { return m_make_counter; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::take_state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlgoState>( m_take_state)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::take_counter>() const { return m_take_counter; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::mkt_resp_state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktRespState>( m_mkt_resp_state)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::mkt_resp_counter>() const { return m_mkt_resp_counter; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::mkt_cross_state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktCrossState>( m_mkt_cross_state)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::mkt_cross_counter>() const { return m_mkt_cross_counter; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::progress_rule_detail>() const { return m_progress_rule_detail; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::last_child_event>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildEvent>( m_last_child_event)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::last_child_reject_dttm>() const { return m_last_child_reject_dttm; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::last_child_reject_text>() const { return m_last_child_reject_text; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::spdr_mkt_state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrMarketState>( m_spdr_mkt_state)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::cpx1>() const { return m_cpx1; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::csz1>() const { return m_csz1; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::cex1>() const { return m_cex1; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::cnt1>() const { return m_cnt1; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::cpx2>() const { return m_cpx2; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::csz2>() const { return m_csz2; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::cex2>() const { return m_cex2; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::cnt2>() const { return m_cnt2; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::c_more>() const { return m_c_more; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::cn_vol>() const { return m_cn_vol; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::cn_yrs>() const { return m_cn_yrs; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::cn_uprc>() const { return m_cn_uprc; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::cn_de>() const { return m_cn_de; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::cn_dd>() const { return m_cn_dd; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::cn_ve>() const { return m_cn_ve; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::cn_ga>() const { return m_cn_ga; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::cn_th>() const { return m_cn_th; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::cn_pr>() const { return m_cn_pr; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::dd_mult>() const { return m_dd_mult; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::price_format>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>( m_price_format)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::u_price_format>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>( m_u_price_format)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::underliers_per_cn>() const { return m_underliers_per_cn; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::underlier_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>( m_underlier_type)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::tick_value>() const { return m_tick_value; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::point_value>() const { return m_point_value; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::point_currency>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>( m_point_currency)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::theo_vol>() const { return m_theo_vol; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::theo_prc>() const { return m_theo_prc; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::num_new_orders>() const { return m_num_new_orders; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::num_parent_limits>() const { return m_num_parent_limits; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::broker_vwap_mark>() const { return m_broker_vwap_mark; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::broker_vwap_umark>() const { return m_broker_vwap_umark; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::broker_qwap_mark>() const { return m_broker_qwap_mark; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::broker_qwap_umark>() const { return m_broker_qwap_umark; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::vwap_pn_l>() const { return m_vwap_pn_l; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::vwap_dn_pn_l>() const { return m_vwap_dn_pn_l; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::u_drift_vwap_pn_l>() const { return m_u_drift_vwap_pn_l; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::qwap_pn_l>() const { return m_qwap_pn_l; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::qwap_dn_pn_l>() const { return m_qwap_dn_pn_l; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::u_drift_qwap_pn_l>() const { return m_u_drift_qwap_pn_l; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::num_imprv_chld>() const { return m_num_imprv_chld; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::active_seconds>() const { return m_active_seconds; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::with_seconds>() const { return m_with_seconds; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::alone_seconds>() const { return m_alone_seconds; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::working_seconds>() const { return m_working_seconds; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::num_risk_cancels>() const { return m_num_risk_cancels; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::risk_hold_seconds>() const { return m_risk_hold_seconds; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::risk_thrtl_seconds>() const { return m_risk_thrtl_seconds; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::num_make_throttle_skips>() const { return m_num_make_throttle_skips; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::sum_make_throttle_delay>() const { return m_sum_make_throttle_delay; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::u_prc_drift>() const { return m_u_prc_drift; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::s_vol_drift>() const { return m_s_vol_drift; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::update_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UpdateSource>( m_update_src)); }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::num_updates>() const { return m_num_updates; }
    template<> inline const auto SpdrParentBrkrState::get<SpdrParentBrkrState::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrParentBrkrState_PKey::get<SpdrParentBrkrState_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto SpdrParentBrkrState_PKey::get<SpdrParentBrkrState_PKey::sec_key>() const { return SpdrParentBrkrState_PKey::sec_key{m_sec_key}; }
    template<> inline const auto SpdrParentBrkrState_PKey::get<SpdrParentBrkrState_PKey::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type));}
    template<> inline const auto SpdrParentBrkrState_PKey::get<SpdrParentBrkrState_PKey::spdr_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source));}
    template<> inline const auto SpdrParentBrkrState_PKey::get<SpdrParentBrkrState_PKey::grouping_code>() const { return m_grouping_code; }
    template<> inline const auto SpdrParentBrkrState_PKey::get<SpdrParentBrkrState_PKey::order_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side));}
    template<> inline const auto SpdrParentBrkrState_PKey::get<SpdrParentBrkrState_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrParentBrkrState_PKey& m) {
        o << "\"accnt\":\"" << m.get<SpdrParentBrkrState_PKey::accnt>() << "\"";
        o << ",\"sec_key\":{" << m.get<SpdrParentBrkrState_PKey::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<SpdrParentBrkrState_PKey::sec_type>();
        o << ",\"spdr_source\":" << (int64_t)m.get<SpdrParentBrkrState_PKey::spdr_source>();
        o << ",\"grouping_code\":" << m.get<SpdrParentBrkrState_PKey::grouping_code>();
        o << ",\"order_side\":" << (int64_t)m.get<SpdrParentBrkrState_PKey::order_side>();
        o << ",\"client_firm\":\"" << m.get<SpdrParentBrkrState_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrParentBrkrState& m) {
        o << "\"_meta\":{" << m.get<SpdrParentBrkrState::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrParentBrkrState::pkey>() << "}";
        o << ",\"user_name\":\"" << m.get<SpdrParentBrkrState::user_name>() << "\"";
        o << ",\"parent_number\":" << m.get<SpdrParentBrkrState::parent_number>();
        o << ",\"base_parent_number\":" << m.get<SpdrParentBrkrState::base_parent_number>();
        o << ",\"modify_number\":" << m.get<SpdrParentBrkrState::modify_number>();
        o << ",\"notice_number\":" << m.get<SpdrParentBrkrState::notice_number>();
        o << ",\"risk_group_id\":" << m.get<SpdrParentBrkrState::risk_group_id>();
        o << ",\"trigger_group_id\":" << m.get<SpdrParentBrkrState::trigger_group_id>();
        o << ",\"strategy\":\"" << m.get<SpdrParentBrkrState::strategy>() << "\"";
        o << ",\"exec_brkr_code\":\"" << m.get<SpdrParentBrkrState::exec_brkr_code>() << "\"";
        o << ",\"alt_order_id\":\"" << m.get<SpdrParentBrkrState::alt_order_id>() << "\"";
        o << ",\"package_id\":" << m.get<SpdrParentBrkrState::package_id>();
        o << ",\"alt_accnt\":\"" << m.get<SpdrParentBrkrState::alt_accnt>() << "\"";
        o << ",\"alt_user_name\":\"" << m.get<SpdrParentBrkrState::alt_user_name>() << "\"";
        o << ",\"stage_type\":" << (int64_t)m.get<SpdrParentBrkrState::stage_type>();
        o << ",\"is_flagged\":" << (int64_t)m.get<SpdrParentBrkrState::is_flagged>();
        o << ",\"ticker\":{" << m.get<SpdrParentBrkrState::ticker>() << "}";
        o << ",\"u_prc\":" << m.get<SpdrParentBrkrState::u_prc>();
        o << ",\"u_prc_order\":" << m.get<SpdrParentBrkrState::u_prc_order>();
        o << ",\"nbbo_bid\":" << m.get<SpdrParentBrkrState::nbbo_bid>();
        o << ",\"nbbo_ask\":" << m.get<SpdrParentBrkrState::nbbo_ask>();
        o << ",\"nbbo_bid_sz\":" << m.get<SpdrParentBrkrState::nbbo_bid_sz>();
        o << ",\"nbbo_ask_sz\":" << m.get<SpdrParentBrkrState::nbbo_ask_sz>();
        o << ",\"surface_prc\":" << m.get<SpdrParentBrkrState::surface_prc>();
        o << ",\"surface_vol\":" << m.get<SpdrParentBrkrState::surface_vol>();
        o << ",\"order_ref_sdiv\":" << m.get<SpdrParentBrkrState::order_ref_sdiv>();
        o << ",\"order_ref_sdiv_type\":" << (int64_t)m.get<SpdrParentBrkrState::order_ref_sdiv_type>();
        o << ",\"spdr_broker_status\":" << (int64_t)m.get<SpdrParentBrkrState::spdr_broker_status>();
        o << ",\"spdr_order_status\":" << (int64_t)m.get<SpdrParentBrkrState::spdr_order_status>();
        o << ",\"spdr_close_reason\":" << (int64_t)m.get<SpdrParentBrkrState::spdr_close_reason>();
        o << ",\"spdr_reject_reason\":" << (int64_t)m.get<SpdrParentBrkrState::spdr_reject_reason>();
        o << ",\"spdr_reject_level\":" << (int64_t)m.get<SpdrParentBrkrState::spdr_reject_level>();
        o << ",\"is_permanently_closed\":" << (int64_t)m.get<SpdrParentBrkrState::is_permanently_closed>();
        o << ",\"num_extern_risk_hold\":" << m.get<SpdrParentBrkrState::num_extern_risk_hold>();
        o << ",\"last_extern_risk_text\":\"" << m.get<SpdrParentBrkrState::last_extern_risk_text>() << "\"";
        {
            std::time_t tt = m.get<SpdrParentBrkrState::last_extern_risk_reject>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"last_extern_risk_reject\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"spdr_comment\":\"" << m.get<SpdrParentBrkrState::spdr_comment>() << "\"";
        o << ",\"order_size\":" << m.get<SpdrParentBrkrState::order_size>();
        o << ",\"order_active_size\":" << m.get<SpdrParentBrkrState::order_active_size>();
        o << ",\"active_duration\":" << m.get<SpdrParentBrkrState::active_duration>();
        {
            std::time_t tt = m.get<SpdrParentBrkrState::update_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"update_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<SpdrParentBrkrState::good_till_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"good_till_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"leaves_quantity\":" << m.get<SpdrParentBrkrState::leaves_quantity>();
        o << ",\"avg_fill_price\":" << m.get<SpdrParentBrkrState::avg_fill_price>();
        o << ",\"avg_fill_uprice\":" << m.get<SpdrParentBrkrState::avg_fill_uprice>();
        o << ",\"cum_fill_quantity\":" << m.get<SpdrParentBrkrState::cum_fill_quantity>();
        o << ",\"avg_fill_vol\":" << m.get<SpdrParentBrkrState::avg_fill_vol>();
        o << ",\"cum_fill_vega\":" << m.get<SpdrParentBrkrState::cum_fill_vega>();
        o << ",\"cum_fill_theta\":" << m.get<SpdrParentBrkrState::cum_fill_theta>();
        o << ",\"cum_fill_ddelta\":" << m.get<SpdrParentBrkrState::cum_fill_ddelta>();
        o << ",\"cum_exch_fee\":" << m.get<SpdrParentBrkrState::cum_exch_fee>();
        o << ",\"cum_m10_pnl\":" << m.get<SpdrParentBrkrState::cum_m10_pnl>();
        o << ",\"cum_arrival_pnl\":" << m.get<SpdrParentBrkrState::cum_arrival_pnl>();
        {
            std::time_t tt = m.get<SpdrParentBrkrState::last_fill_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"last_fill_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"risk_limit_size\":" << m.get<SpdrParentBrkrState::risk_limit_size>();
        o << ",\"risk_limit_desc\":" << (int64_t)m.get<SpdrParentBrkrState::risk_limit_desc>();
        o << ",\"risk_limit_level\":" << (int64_t)m.get<SpdrParentBrkrState::risk_limit_level>();
        o << ",\"risk_limit_detail\":\"" << m.get<SpdrParentBrkrState::risk_limit_detail>() << "\"";
        o << ",\"limit_price\":" << m.get<SpdrParentBrkrState::limit_price>();
        o << ",\"limit_ref_uprc\":" << m.get<SpdrParentBrkrState::limit_ref_uprc>();
        o << ",\"limit_err\":" << (int64_t)m.get<SpdrParentBrkrState::limit_err>();
        o << ",\"limit_err_desc\":\"" << m.get<SpdrParentBrkrState::limit_err_desc>() << "\"";
        o << ",\"best_limit_offset\":" << m.get<SpdrParentBrkrState::best_limit_offset>();
        o << ",\"make_prob_limit\":" << m.get<SpdrParentBrkrState::make_prob_limit>();
        o << ",\"make_surf_offset\":" << m.get<SpdrParentBrkrState::make_surf_offset>();
        o << ",\"make_limit_price\":" << m.get<SpdrParentBrkrState::make_limit_price>();
        o << ",\"make_limit_err\":" << (int64_t)m.get<SpdrParentBrkrState::make_limit_err>();
        o << ",\"take_prob_limit\":" << m.get<SpdrParentBrkrState::take_prob_limit>();
        o << ",\"take_surf_offset\":" << m.get<SpdrParentBrkrState::take_surf_offset>();
        o << ",\"take_limit_price\":" << m.get<SpdrParentBrkrState::take_limit_price>();
        o << ",\"take_limit_err\":" << (int64_t)m.get<SpdrParentBrkrState::take_limit_err>();
        o << ",\"auto_hedge\":" << (int64_t)m.get<SpdrParentBrkrState::auto_hedge>();
        o << ",\"hedge_instrument\":" << (int64_t)m.get<SpdrParentBrkrState::hedge_instrument>();
        o << ",\"hedge_sec_key\":{" << m.get<SpdrParentBrkrState::hedge_sec_key>() << "}";
        o << ",\"hedge_sec_type\":" << (int64_t)m.get<SpdrParentBrkrState::hedge_sec_type>();
        o << ",\"hedge_beta_ratio\":" << m.get<SpdrParentBrkrState::hedge_beta_ratio>();
        o << ",\"hedge_scope\":" << (int64_t)m.get<SpdrParentBrkrState::hedge_scope>();
        o << ",\"hedge_session\":" << (int64_t)m.get<SpdrParentBrkrState::hedge_session>();
        o << ",\"extern_hedge_ex_dest\":\"" << m.get<SpdrParentBrkrState::extern_hedge_ex_dest>() << "\"";
        o << ",\"extern_hedge_params\":\"" << m.get<SpdrParentBrkrState::extern_hedge_params>() << "\"";
        o << ",\"user_data1\":\"" << m.get<SpdrParentBrkrState::user_data1>() << "\"";
        o << ",\"user_data2\":\"" << m.get<SpdrParentBrkrState::user_data2>() << "\"";
        o << ",\"max_progress\":" << (int64_t)m.get<SpdrParentBrkrState::max_progress>();
        o << ",\"max_progress_detail\":\"" << m.get<SpdrParentBrkrState::max_progress_detail>() << "\"";
        {
            std::time_t tt = m.get<SpdrParentBrkrState::max_progress_time>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"max_progress_time\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"broker_state\":" << (int64_t)m.get<SpdrParentBrkrState::broker_state>();
        o << ",\"broker_counter\":" << m.get<SpdrParentBrkrState::broker_counter>();
        o << ",\"make_state\":" << (int64_t)m.get<SpdrParentBrkrState::make_state>();
        o << ",\"make_counter\":" << m.get<SpdrParentBrkrState::make_counter>();
        o << ",\"take_state\":" << (int64_t)m.get<SpdrParentBrkrState::take_state>();
        o << ",\"take_counter\":" << m.get<SpdrParentBrkrState::take_counter>();
        o << ",\"mkt_resp_state\":" << (int64_t)m.get<SpdrParentBrkrState::mkt_resp_state>();
        o << ",\"mkt_resp_counter\":" << m.get<SpdrParentBrkrState::mkt_resp_counter>();
        o << ",\"mkt_cross_state\":" << (int64_t)m.get<SpdrParentBrkrState::mkt_cross_state>();
        o << ",\"mkt_cross_counter\":" << m.get<SpdrParentBrkrState::mkt_cross_counter>();
        o << ",\"progress_rule_detail\":\"" << m.get<SpdrParentBrkrState::progress_rule_detail>() << "\"";
        o << ",\"last_child_event\":" << (int64_t)m.get<SpdrParentBrkrState::last_child_event>();
        {
            std::time_t tt = m.get<SpdrParentBrkrState::last_child_reject_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"last_child_reject_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"last_child_reject_text\":\"" << m.get<SpdrParentBrkrState::last_child_reject_text>() << "\"";
        o << ",\"spdr_mkt_state\":" << (int64_t)m.get<SpdrParentBrkrState::spdr_mkt_state>();
        o << ",\"cpx1\":" << m.get<SpdrParentBrkrState::cpx1>();
        o << ",\"csz1\":" << m.get<SpdrParentBrkrState::csz1>();
        o << ",\"cex1\":" << m.get<SpdrParentBrkrState::cex1>();
        o << ",\"cnt1\":" << m.get<SpdrParentBrkrState::cnt1>();
        o << ",\"cpx2\":" << m.get<SpdrParentBrkrState::cpx2>();
        o << ",\"csz2\":" << m.get<SpdrParentBrkrState::csz2>();
        o << ",\"cex2\":" << m.get<SpdrParentBrkrState::cex2>();
        o << ",\"cnt2\":" << m.get<SpdrParentBrkrState::cnt2>();
        o << ",\"c_more\":" << m.get<SpdrParentBrkrState::c_more>();
        o << ",\"cn_vol\":" << m.get<SpdrParentBrkrState::cn_vol>();
        o << ",\"cn_yrs\":" << m.get<SpdrParentBrkrState::cn_yrs>();
        o << ",\"cn_uprc\":" << m.get<SpdrParentBrkrState::cn_uprc>();
        o << ",\"cn_de\":" << m.get<SpdrParentBrkrState::cn_de>();
        o << ",\"cn_dd\":" << m.get<SpdrParentBrkrState::cn_dd>();
        o << ",\"cn_ve\":" << m.get<SpdrParentBrkrState::cn_ve>();
        o << ",\"cn_ga\":" << m.get<SpdrParentBrkrState::cn_ga>();
        o << ",\"cn_th\":" << m.get<SpdrParentBrkrState::cn_th>();
        o << ",\"cn_pr\":" << m.get<SpdrParentBrkrState::cn_pr>();
        o << ",\"dd_mult\":" << m.get<SpdrParentBrkrState::dd_mult>();
        o << ",\"price_format\":" << (int64_t)m.get<SpdrParentBrkrState::price_format>();
        o << ",\"u_price_format\":" << (int64_t)m.get<SpdrParentBrkrState::u_price_format>();
        o << ",\"underliers_per_cn\":" << m.get<SpdrParentBrkrState::underliers_per_cn>();
        o << ",\"underlier_type\":" << (int64_t)m.get<SpdrParentBrkrState::underlier_type>();
        o << ",\"tick_value\":" << m.get<SpdrParentBrkrState::tick_value>();
        o << ",\"point_value\":" << m.get<SpdrParentBrkrState::point_value>();
        o << ",\"point_currency\":" << (int64_t)m.get<SpdrParentBrkrState::point_currency>();
        o << ",\"theo_vol\":" << m.get<SpdrParentBrkrState::theo_vol>();
        o << ",\"theo_prc\":" << m.get<SpdrParentBrkrState::theo_prc>();
        o << ",\"num_new_orders\":" << m.get<SpdrParentBrkrState::num_new_orders>();
        o << ",\"num_parent_limits\":" << m.get<SpdrParentBrkrState::num_parent_limits>();
        o << ",\"broker_vwap_mark\":" << m.get<SpdrParentBrkrState::broker_vwap_mark>();
        o << ",\"broker_vwap_umark\":" << m.get<SpdrParentBrkrState::broker_vwap_umark>();
        o << ",\"broker_qwap_mark\":" << m.get<SpdrParentBrkrState::broker_qwap_mark>();
        o << ",\"broker_qwap_umark\":" << m.get<SpdrParentBrkrState::broker_qwap_umark>();
        o << ",\"vwap_pn_l\":" << m.get<SpdrParentBrkrState::vwap_pn_l>();
        o << ",\"vwap_dn_pn_l\":" << m.get<SpdrParentBrkrState::vwap_dn_pn_l>();
        o << ",\"u_drift_vwap_pn_l\":" << m.get<SpdrParentBrkrState::u_drift_vwap_pn_l>();
        o << ",\"qwap_pn_l\":" << m.get<SpdrParentBrkrState::qwap_pn_l>();
        o << ",\"qwap_dn_pn_l\":" << m.get<SpdrParentBrkrState::qwap_dn_pn_l>();
        o << ",\"u_drift_qwap_pn_l\":" << m.get<SpdrParentBrkrState::u_drift_qwap_pn_l>();
        o << ",\"num_imprv_chld\":" << m.get<SpdrParentBrkrState::num_imprv_chld>();
        o << ",\"active_seconds\":" << m.get<SpdrParentBrkrState::active_seconds>();
        o << ",\"with_seconds\":" << m.get<SpdrParentBrkrState::with_seconds>();
        o << ",\"alone_seconds\":" << m.get<SpdrParentBrkrState::alone_seconds>();
        o << ",\"working_seconds\":" << m.get<SpdrParentBrkrState::working_seconds>();
        o << ",\"num_risk_cancels\":" << m.get<SpdrParentBrkrState::num_risk_cancels>();
        o << ",\"risk_hold_seconds\":" << m.get<SpdrParentBrkrState::risk_hold_seconds>();
        o << ",\"risk_thrtl_seconds\":" << m.get<SpdrParentBrkrState::risk_thrtl_seconds>();
        o << ",\"num_make_throttle_skips\":" << m.get<SpdrParentBrkrState::num_make_throttle_skips>();
        o << ",\"sum_make_throttle_delay\":" << m.get<SpdrParentBrkrState::sum_make_throttle_delay>();
        o << ",\"u_prc_drift\":" << m.get<SpdrParentBrkrState::u_prc_drift>();
        o << ",\"s_vol_drift\":" << m.get<SpdrParentBrkrState::s_vol_drift>();
        o << ",\"update_src\":" << (int64_t)m.get<SpdrParentBrkrState::update_src>();
        o << ",\"num_updates\":" << m.get<SpdrParentBrkrState::num_updates>();
        {
            std::time_t tt = m.get<SpdrParentBrkrState::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}