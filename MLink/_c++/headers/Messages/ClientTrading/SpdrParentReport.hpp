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

    #ifndef _sys_realm__GUARD__
    #define _sys_realm__GUARD__
    DECL_STRONG_TYPE(sys_realm, spiderrock::protobuf::api::SysRealm);
    #endif//_sys_realm__GUARD__

    #ifndef _sys_environment__GUARD__
    #define _sys_environment__GUARD__
    DECL_STRONG_TYPE(sys_environment, spiderrock::protobuf::api::SysEnvironment);
    #endif//_sys_environment__GUARD__

    #ifndef _run_status__GUARD__
    #define _run_status__GUARD__
    DECL_STRONG_TYPE(run_status, spiderrock::protobuf::api::RunStatus);
    #endif//_run_status__GUARD__

    #ifndef _report_number__GUARD__
    #define _report_number__GUARD__
    DECL_STRONG_TYPE(report_number, int64);
    #endif//_report_number__GUARD__

    #ifndef _parent_shape__GUARD__
    #define _parent_shape__GUARD__
    DECL_STRONG_TYPE(parent_shape, spiderrock::protobuf::api::SpdrOrderShape);
    #endif//_parent_shape__GUARD__

    #ifndef _record_version__GUARD__
    #define _record_version__GUARD__
    DECL_STRONG_TYPE(record_version, int32);
    #endif//_record_version__GUARD__

    #ifndef _record_source__GUARD__
    #define _record_source__GUARD__
    DECL_STRONG_TYPE(record_source, spiderrock::protobuf::api::RecordSource);
    #endif//_record_source__GUARD__

    #ifndef _parent_version__GUARD__
    #define _parent_version__GUARD__
    DECL_STRONG_TYPE(parent_version, int32);
    #endif//_parent_version__GUARD__

    #ifndef _base_parent_number__GUARD__
    #define _base_parent_number__GUARD__
    DECL_STRONG_TYPE(base_parent_number, int64);
    #endif//_base_parent_number__GUARD__

    #ifndef _prev_parent_number__GUARD__
    #define _prev_parent_number__GUARD__
    DECL_STRONG_TYPE(prev_parent_number, int64);
    #endif//_prev_parent_number__GUARD__

    #ifndef _next_parent_number__GUARD__
    #define _next_parent_number__GUARD__
    DECL_STRONG_TYPE(next_parent_number, int64);
    #endif//_next_parent_number__GUARD__

    #ifndef _spdr_action_type__GUARD__
    #define _spdr_action_type__GUARD__
    DECL_STRONG_TYPE(spdr_action_type, spiderrock::protobuf::api::SpdrActionType);
    #endif//_spdr_action_type__GUARD__

    #ifndef _prev_parent_create_dttm__GUARD__
    #define _prev_parent_create_dttm__GUARD__
    DECL_STRONG_TYPE(prev_parent_create_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_prev_parent_create_dttm__GUARD__

    #ifndef _prev_parent_cum_fill_qty__GUARD__
    #define _prev_parent_cum_fill_qty__GUARD__
    DECL_STRONG_TYPE(prev_parent_cum_fill_qty, int32);
    #endif//_prev_parent_cum_fill_qty__GUARD__

    #ifndef _client_seq_num_in__GUARD__
    #define _client_seq_num_in__GUARD__
    DECL_STRONG_TYPE(client_seq_num_in, int32);
    #endif//_client_seq_num_in__GUARD__

    #ifndef _alt_order_id__GUARD__
    #define _alt_order_id__GUARD__
    DECL_STRONG_TYPE(alt_order_id, string);
    #endif//_alt_order_id__GUARD__

    #ifndef _alt_prev_order_id__GUARD__
    #define _alt_prev_order_id__GUARD__
    DECL_STRONG_TYPE(alt_prev_order_id, string);
    #endif//_alt_prev_order_id__GUARD__

    #ifndef _alt_cancel_id__GUARD__
    #define _alt_cancel_id__GUARD__
    DECL_STRONG_TYPE(alt_cancel_id, string);
    #endif//_alt_cancel_id__GUARD__

    #ifndef _src_routing_code__GUARD__
    #define _src_routing_code__GUARD__
    DECL_STRONG_TYPE(src_routing_code, string);
    #endif//_src_routing_code__GUARD__

    #ifndef _package_id__GUARD__
    #define _package_id__GUARD__
    DECL_STRONG_TYPE(package_id, int64);
    #endif//_package_id__GUARD__

    #ifndef _prev_package_id__GUARD__
    #define _prev_package_id__GUARD__
    DECL_STRONG_TYPE(prev_package_id, int64);
    #endif//_prev_package_id__GUARD__

    #ifndef _risk_group_id__GUARD__
    #define _risk_group_id__GUARD__
    DECL_STRONG_TYPE(risk_group_id, int64);
    #endif//_risk_group_id__GUARD__

    #ifndef _trigger_group_id__GUARD__
    #define _trigger_group_id__GUARD__
    DECL_STRONG_TYPE(trigger_group_id, int64);
    #endif//_trigger_group_id__GUARD__

    #ifndef _sec_key__OptionKey__GUARD__
    #define _sec_key__OptionKey__GUARD__
    DECL_STRONG_TYPE(sec_key__OptionKey, OptionKey);
    #endif//_sec_key__OptionKey__GUARD__

    #ifndef _sec_type__SpdrKeyType__GUARD__
    #define _sec_type__SpdrKeyType__GUARD__
    DECL_STRONG_TYPE(sec_type__SpdrKeyType, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__SpdrKeyType__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _core_client_firm__GUARD__
    #define _core_client_firm__GUARD__
    DECL_STRONG_TYPE(core_client_firm, string);
    #endif//_core_client_firm__GUARD__

    #ifndef _sponsor_client_firm__GUARD__
    #define _sponsor_client_firm__GUARD__
    DECL_STRONG_TYPE(sponsor_client_firm, string);
    #endif//_sponsor_client_firm__GUARD__

    #ifndef _client_accnt__GUARD__
    #define _client_accnt__GUARD__
    DECL_STRONG_TYPE(client_accnt, string);
    #endif//_client_accnt__GUARD__

    #ifndef _user_name__GUARD__
    #define _user_name__GUARD__
    DECL_STRONG_TYPE(user_name, string);
    #endif//_user_name__GUARD__

    #ifndef _user_source__GUARD__
    #define _user_source__GUARD__
    DECL_STRONG_TYPE(user_source, spiderrock::protobuf::api::SpdrSource);
    #endif//_user_source__GUARD__

    #ifndef _alt_accnt__GUARD__
    #define _alt_accnt__GUARD__
    DECL_STRONG_TYPE(alt_accnt, string);
    #endif//_alt_accnt__GUARD__

    #ifndef _alt_user_name__GUARD__
    #define _alt_user_name__GUARD__
    DECL_STRONG_TYPE(alt_user_name, string);
    #endif//_alt_user_name__GUARD__

    #ifndef _exec_brkr_code__GUARD__
    #define _exec_brkr_code__GUARD__
    DECL_STRONG_TYPE(exec_brkr_code, string);
    #endif//_exec_brkr_code__GUARD__

    #ifndef _extern_ex_dest__GUARD__
    #define _extern_ex_dest__GUARD__
    DECL_STRONG_TYPE(extern_ex_dest, string);
    #endif//_extern_ex_dest__GUARD__

    #ifndef _extern_params__GUARD__
    #define _extern_params__GUARD__
    DECL_STRONG_TYPE(extern_params, string);
    #endif//_extern_params__GUARD__

    #ifndef _spdr_source__GUARD__
    #define _spdr_source__GUARD__
    DECL_STRONG_TYPE(spdr_source, spiderrock::protobuf::api::SpdrSource);
    #endif//_spdr_source__GUARD__

    #ifndef _grouping_code__GUARD__
    #define _grouping_code__GUARD__
    DECL_STRONG_TYPE(grouping_code, int64);
    #endif//_grouping_code__GUARD__

    #ifndef _engine_name__GUARD__
    #define _engine_name__GUARD__
    DECL_STRONG_TYPE(engine_name, string);
    #endif//_engine_name__GUARD__

    #ifndef _order_dttm__GUARD__
    #define _order_dttm__GUARD__
    DECL_STRONG_TYPE(order_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_order_dttm__GUARD__

    #ifndef _order_side__GUARD__
    #define _order_side__GUARD__
    DECL_STRONG_TYPE(order_side, spiderrock::protobuf::api::BuySell);
    #endif//_order_side__GUARD__

    #ifndef _price_type__PriceType__GUARD__
    #define _price_type__PriceType__GUARD__
    DECL_STRONG_TYPE(price_type__PriceType, spiderrock::protobuf::api::PriceType);
    #endif//_price_type__PriceType__GUARD__

    #ifndef _order_size__GUARD__
    #define _order_size__GUARD__
    DECL_STRONG_TYPE(order_size, int32);
    #endif//_order_size__GUARD__

    #ifndef _order_active_size__GUARD__
    #define _order_active_size__GUARD__
    DECL_STRONG_TYPE(order_active_size, int32);
    #endif//_order_active_size__GUARD__

    #ifndef _spdr_stage_type__GUARD__
    #define _spdr_stage_type__GUARD__
    DECL_STRONG_TYPE(spdr_stage_type, spiderrock::protobuf::api::SpdrStageType);
    #endif//_spdr_stage_type__GUARD__

    #ifndef _stage_review__GUARD__
    #define _stage_review__GUARD__
    DECL_STRONG_TYPE(stage_review, spiderrock::protobuf::api::StageReview);
    #endif//_stage_review__GUARD__

    #ifndef _parent_order_handling__GUARD__
    #define _parent_order_handling__GUARD__
    DECL_STRONG_TYPE(parent_order_handling, spiderrock::protobuf::api::ParentOrderHandling);
    #endif//_parent_order_handling__GUARD__

    #ifndef _parent_balance_handling__GUARD__
    #define _parent_balance_handling__GUARD__
    DECL_STRONG_TYPE(parent_balance_handling, spiderrock::protobuf::api::ParentBalanceHandling);
    #endif//_parent_balance_handling__GUARD__

    #ifndef _limit_price__GUARD__
    #define _limit_price__GUARD__
    DECL_STRONG_TYPE(limit_price, double);
    #endif//_limit_price__GUARD__

    #ifndef _order_limit_type__GUARD__
    #define _order_limit_type__GUARD__
    DECL_STRONG_TYPE(order_limit_type, spiderrock::protobuf::api::SpdrLimitType);
    #endif//_order_limit_type__GUARD__

    #ifndef _take_limit_class__GUARD__
    #define _take_limit_class__GUARD__
    DECL_STRONG_TYPE(take_limit_class, spiderrock::protobuf::api::SpdrLimitClass);
    #endif//_take_limit_class__GUARD__

    #ifndef _make_limit_class__GUARD__
    #define _make_limit_class__GUARD__
    DECL_STRONG_TYPE(make_limit_class, spiderrock::protobuf::api::SpdrLimitClass);
    #endif//_make_limit_class__GUARD__

    #ifndef _start_type__GUARD__
    #define _start_type__GUARD__
    DECL_STRONG_TYPE(start_type, spiderrock::protobuf::api::StartType);
    #endif//_start_type__GUARD__

    #ifndef _market_session__GUARD__
    #define _market_session__GUARD__
    DECL_STRONG_TYPE(market_session, spiderrock::protobuf::api::MarketSession);
    #endif//_market_session__GUARD__

    #ifndef _active_duration__GUARD__
    #define _active_duration__GUARD__
    DECL_STRONG_TYPE(active_duration, int32);
    #endif//_active_duration__GUARD__

    #ifndef _start_dttm__GUARD__
    #define _start_dttm__GUARD__
    DECL_STRONG_TYPE(start_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_start_dttm__GUARD__

    #ifndef _good_till_dttm__GUARD__
    #define _good_till_dttm__GUARD__
    DECL_STRONG_TYPE(good_till_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_good_till_dttm__GUARD__

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

    #ifndef _order_create_dttm__GUARD__
    #define _order_create_dttm__GUARD__
    DECL_STRONG_TYPE(order_create_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_order_create_dttm__GUARD__

    #ifndef _order_create_latency__GUARD__
    #define _order_create_latency__GUARD__
    DECL_STRONG_TYPE(order_create_latency, float);
    #endif//_order_create_latency__GUARD__

    #ifndef _cancel_reason__GUARD__
    #define _cancel_reason__GUARD__
    DECL_STRONG_TYPE(cancel_reason, spiderrock::protobuf::api::OrderCancelReason);
    #endif//_cancel_reason__GUARD__

    #ifndef _order_cancel_dttm__GUARD__
    #define _order_cancel_dttm__GUARD__
    DECL_STRONG_TYPE(order_cancel_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_order_cancel_dttm__GUARD__

    #ifndef _order_cancel_latency__GUARD__
    #define _order_cancel_latency__GUARD__
    DECL_STRONG_TYPE(order_cancel_latency, float);
    #endif//_order_cancel_latency__GUARD__

    #ifndef _order_working_dttm__GUARD__
    #define _order_working_dttm__GUARD__
    DECL_STRONG_TYPE(order_working_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_order_working_dttm__GUARD__

    #ifndef _order_closed_dttm__GUARD__
    #define _order_closed_dttm__GUARD__
    DECL_STRONG_TYPE(order_closed_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_order_closed_dttm__GUARD__

    #ifndef _order_closed_text__GUARD__
    #define _order_closed_text__GUARD__
    DECL_STRONG_TYPE(order_closed_text, string);
    #endif//_order_closed_text__GUARD__

    #ifndef _max_exposure_size__GUARD__
    #define _max_exposure_size__GUARD__
    DECL_STRONG_TYPE(max_exposure_size, int32);
    #endif//_max_exposure_size__GUARD__

    #ifndef _public_size__GUARD__
    #define _public_size__GUARD__
    DECL_STRONG_TYPE(public_size, spiderrock::protobuf::api::PublicSizeHandling);
    #endif//_public_size__GUARD__

    #ifndef _can_overlap_cxl_repl__GUARD__
    #define _can_overlap_cxl_repl__GUARD__
    DECL_STRONG_TYPE(can_overlap_cxl_repl, spiderrock::protobuf::api::YesNo);
    #endif//_can_overlap_cxl_repl__GUARD__

    #ifndef _progress_expose_time__GUARD__
    #define _progress_expose_time__GUARD__
    DECL_STRONG_TYPE(progress_expose_time, int32);
    #endif//_progress_expose_time__GUARD__

    #ifndef _progress_rule__GUARD__
    #define _progress_rule__GUARD__
    DECL_STRONG_TYPE(progress_rule, spiderrock::protobuf::api::ProgressRule);
    #endif//_progress_rule__GUARD__

    #ifndef _progress_slice_cnt__GUARD__
    #define _progress_slice_cnt__GUARD__
    DECL_STRONG_TYPE(progress_slice_cnt, int32);
    #endif//_progress_slice_cnt__GUARD__

    #ifndef _vwap_participation__GUARD__
    #define _vwap_participation__GUARD__
    DECL_STRONG_TYPE(vwap_participation, float);
    #endif//_vwap_participation__GUARD__

    #ifndef _auction_responder__GUARD__
    #define _auction_responder__GUARD__
    DECL_STRONG_TYPE(auction_responder, spiderrock::protobuf::api::AuctionResponder);
    #endif//_auction_responder__GUARD__

    #ifndef _max_make_exch_fee__GUARD__
    #define _max_make_exch_fee__GUARD__
    DECL_STRONG_TYPE(max_make_exch_fee, float);
    #endif//_max_make_exch_fee__GUARD__

    #ifndef _max_take_exch_fee__GUARD__
    #define _max_take_exch_fee__GUARD__
    DECL_STRONG_TYPE(max_take_exch_fee, float);
    #endif//_max_take_exch_fee__GUARD__

    #ifndef _inc_take_exch_fee__GUARD__
    #define _inc_take_exch_fee__GUARD__
    DECL_STRONG_TYPE(inc_take_exch_fee, spiderrock::protobuf::api::IncExchFee);
    #endif//_inc_take_exch_fee__GUARD__

    #ifndef _inc_make_exch_fee__GUARD__
    #define _inc_make_exch_fee__GUARD__
    DECL_STRONG_TYPE(inc_make_exch_fee, spiderrock::protobuf::api::IncExchFee);
    #endif//_inc_make_exch_fee__GUARD__

    #ifndef _make_exch_rule__GUARD__
    #define _make_exch_rule__GUARD__
    DECL_STRONG_TYPE(make_exch_rule, spiderrock::protobuf::api::MakeExchRule);
    #endif//_make_exch_rule__GUARD__

    #ifndef _cxl_uprc_range__GUARD__
    #define _cxl_uprc_range__GUARD__
    DECL_STRONG_TYPE(cxl_uprc_range, spiderrock::protobuf::api::UPrcCxl);
    #endif//_cxl_uprc_range__GUARD__

    #ifndef _min_ubid__GUARD__
    #define _min_ubid__GUARD__
    DECL_STRONG_TYPE(min_ubid, float);
    #endif//_min_ubid__GUARD__

    #ifndef _max_uask__GUARD__
    #define _max_uask__GUARD__
    DECL_STRONG_TYPE(max_uask, float);
    #endif//_max_uask__GUARD__

    #ifndef _min_option_px__GUARD__
    #define _min_option_px__GUARD__
    DECL_STRONG_TYPE(min_option_px, float);
    #endif//_min_option_px__GUARD__

    #ifndef _max_child_orders__GUARD__
    #define _max_child_orders__GUARD__
    DECL_STRONG_TYPE(max_child_orders, int32);
    #endif//_max_child_orders__GUARD__

    #ifndef _order_duration__GUARD__
    #define _order_duration__GUARD__
    DECL_STRONG_TYPE(order_duration, int32);
    #endif//_order_duration__GUARD__

    #ifndef _take_reach_rule__GUARD__
    #define _take_reach_rule__GUARD__
    DECL_STRONG_TYPE(take_reach_rule, spiderrock::protobuf::api::ReachRule);
    #endif//_take_reach_rule__GUARD__

    #ifndef _order_prc_limit__GUARD__
    #define _order_prc_limit__GUARD__
    DECL_STRONG_TYPE(order_prc_limit, double);
    #endif//_order_prc_limit__GUARD__

    #ifndef _order_ref_uprc__GUARD__
    #define _order_ref_uprc__GUARD__
    DECL_STRONG_TYPE(order_ref_uprc, double);
    #endif//_order_ref_uprc__GUARD__

    #ifndef _order_ref_delta__GUARD__
    #define _order_ref_delta__GUARD__
    DECL_STRONG_TYPE(order_ref_delta, float);
    #endif//_order_ref_delta__GUARD__

    #ifndef _order_ref_gamma__GUARD__
    #define _order_ref_gamma__GUARD__
    DECL_STRONG_TYPE(order_ref_gamma, float);
    #endif//_order_ref_gamma__GUARD__

    #ifndef _order_vol_limit__GUARD__
    #define _order_vol_limit__GUARD__
    DECL_STRONG_TYPE(order_vol_limit, float);
    #endif//_order_vol_limit__GUARD__

    #ifndef _rate_override__GUARD__
    #define _rate_override__GUARD__
    DECL_STRONG_TYPE(rate_override, float);
    #endif//_rate_override__GUARD__

    #ifndef _sdiv_override__GUARD__
    #define _sdiv_override__GUARD__
    DECL_STRONG_TYPE(sdiv_override, float);
    #endif//_sdiv_override__GUARD__

    #ifndef _ddiv_override__GUARD__
    #define _ddiv_override__GUARD__
    DECL_STRONG_TYPE(ddiv_override, string);
    #endif//_ddiv_override__GUARD__

    #ifndef _override_code__GUARD__
    #define _override_code__GUARD__
    DECL_STRONG_TYPE(override_code, spiderrock::protobuf::api::OverrideCode);
    #endif//_override_code__GUARD__

    #ifndef _order_prc_offset__GUARD__
    #define _order_prc_offset__GUARD__
    DECL_STRONG_TYPE(order_prc_offset, double);
    #endif//_order_prc_offset__GUARD__

    #ifndef _take_alpha_type__GUARD__
    #define _take_alpha_type__GUARD__
    DECL_STRONG_TYPE(take_alpha_type, spiderrock::protobuf::api::AlphaType);
    #endif//_take_alpha_type__GUARD__

    #ifndef _make_alpha_type__GUARD__
    #define _make_alpha_type__GUARD__
    DECL_STRONG_TYPE(make_alpha_type, spiderrock::protobuf::api::AlphaType);
    #endif//_make_alpha_type__GUARD__

    #ifndef _take_alpha_factor__GUARD__
    #define _take_alpha_factor__GUARD__
    DECL_STRONG_TYPE(take_alpha_factor, float);
    #endif//_take_alpha_factor__GUARD__

    #ifndef _make_alpha_factor__GUARD__
    #define _make_alpha_factor__GUARD__
    DECL_STRONG_TYPE(make_alpha_factor, float);
    #endif//_make_alpha_factor__GUARD__

    #ifndef _take_probability__GUARD__
    #define _take_probability__GUARD__
    DECL_STRONG_TYPE(take_probability, float);
    #endif//_take_probability__GUARD__

    #ifndef _make_probability__GUARD__
    #define _make_probability__GUARD__
    DECL_STRONG_TYPE(make_probability, float);
    #endif//_make_probability__GUARD__

    #ifndef _take_surf_prc_offset__GUARD__
    #define _take_surf_prc_offset__GUARD__
    DECL_STRONG_TYPE(take_surf_prc_offset, double);
    #endif//_take_surf_prc_offset__GUARD__

    #ifndef _take_surf_vol_offset__GUARD__
    #define _take_surf_vol_offset__GUARD__
    DECL_STRONG_TYPE(take_surf_vol_offset, float);
    #endif//_take_surf_vol_offset__GUARD__

    #ifndef _take_surf_width_offset__GUARD__
    #define _take_surf_width_offset__GUARD__
    DECL_STRONG_TYPE(take_surf_width_offset, float);
    #endif//_take_surf_width_offset__GUARD__

    #ifndef _make_surf_prc_offset__GUARD__
    #define _make_surf_prc_offset__GUARD__
    DECL_STRONG_TYPE(make_surf_prc_offset, double);
    #endif//_make_surf_prc_offset__GUARD__

    #ifndef _make_surf_vol_offset__GUARD__
    #define _make_surf_vol_offset__GUARD__
    DECL_STRONG_TYPE(make_surf_vol_offset, float);
    #endif//_make_surf_vol_offset__GUARD__

    #ifndef _make_surf_width_offset__GUARD__
    #define _make_surf_width_offset__GUARD__
    DECL_STRONG_TYPE(make_surf_width_offset, float);
    #endif//_make_surf_width_offset__GUARD__

    #ifndef _order_ref_event_mult__GUARD__
    #define _order_ref_event_mult__GUARD__
    DECL_STRONG_TYPE(order_ref_event_mult, float);
    #endif//_order_ref_event_mult__GUARD__

    #ifndef _order_ref_event_dttm__GUARD__
    #define _order_ref_event_dttm__GUARD__
    DECL_STRONG_TYPE(order_ref_event_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_order_ref_event_dttm__GUARD__

    #ifndef _nbbo_cap__GUARD__
    #define _nbbo_cap__GUARD__
    DECL_STRONG_TYPE(nbbo_cap, spiderrock::protobuf::api::NbboCap);
    #endif//_nbbo_cap__GUARD__

    #ifndef _extern_hedge_ex_dest__GUARD__
    #define _extern_hedge_ex_dest__GUARD__
    DECL_STRONG_TYPE(extern_hedge_ex_dest, string);
    #endif//_extern_hedge_ex_dest__GUARD__

    #ifndef _extern_hedge_params__GUARD__
    #define _extern_hedge_params__GUARD__
    DECL_STRONG_TYPE(extern_hedge_params, string);
    #endif//_extern_hedge_params__GUARD__

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

    #ifndef _firm_type__GUARD__
    #define _firm_type__GUARD__
    DECL_STRONG_TYPE(firm_type, spiderrock::protobuf::api::FirmType);
    #endif//_firm_type__GUARD__

    #ifndef _order_capacity__GUARD__
    #define _order_capacity__GUARD__
    DECL_STRONG_TYPE(order_capacity, spiderrock::protobuf::api::OrderCapacity);
    #endif//_order_capacity__GUARD__

    #ifndef _ssale_flag__GUARD__
    #define _ssale_flag__GUARD__
    DECL_STRONG_TYPE(ssale_flag, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag__GUARD__

    #ifndef _position_type__PositionType__GUARD__
    #define _position_type__PositionType__GUARD__
    DECL_STRONG_TYPE(position_type__PositionType, spiderrock::protobuf::api::PositionType);
    #endif//_position_type__PositionType__GUARD__

    #ifndef _arrive_firm_pos__GUARD__
    #define _arrive_firm_pos__GUARD__
    DECL_STRONG_TYPE(arrive_firm_pos, int32);
    #endif//_arrive_firm_pos__GUARD__

    #ifndef _arrive_ssale_flag__GUARD__
    #define _arrive_ssale_flag__GUARD__
    DECL_STRONG_TYPE(arrive_ssale_flag, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_arrive_ssale_flag__GUARD__

    #ifndef _no_cross_group__GUARD__
    #define _no_cross_group__GUARD__
    DECL_STRONG_TYPE(no_cross_group, string);
    #endif//_no_cross_group__GUARD__

    #ifndef _exch_trader_id__GUARD__
    #define _exch_trader_id__GUARD__
    DECL_STRONG_TYPE(exch_trader_id, string);
    #endif//_exch_trader_id__GUARD__

    #ifndef _large_trader_id__GUARD__
    #define _large_trader_id__GUARD__
    DECL_STRONG_TYPE(large_trader_id, string);
    #endif//_large_trader_id__GUARD__

    #ifndef _trading_location__GUARD__
    #define _trading_location__GUARD__
    DECL_STRONG_TYPE(trading_location, string);
    #endif//_trading_location__GUARD__

    #ifndef _firm_position__GUARD__
    #define _firm_position__GUARD__
    DECL_STRONG_TYPE(firm_position, int32);
    #endif//_firm_position__GUARD__

    #ifndef _open_sell_sh__GUARD__
    #define _open_sell_sh__GUARD__
    DECL_STRONG_TYPE(open_sell_sh, int32);
    #endif//_open_sell_sh__GUARD__

    #ifndef _locate_quan__GUARD__
    #define _locate_quan__GUARD__
    DECL_STRONG_TYPE(locate_quan, int32);
    #endif//_locate_quan__GUARD__

    #ifndef _locate_firm__GUARD__
    #define _locate_firm__GUARD__
    DECL_STRONG_TYPE(locate_firm, string);
    #endif//_locate_firm__GUARD__

    #ifndef _locate_pool__GUARD__
    #define _locate_pool__GUARD__
    DECL_STRONG_TYPE(locate_pool, string);
    #endif//_locate_pool__GUARD__

    #ifndef _clearing_firm__GUARD__
    #define _clearing_firm__GUARD__
    DECL_STRONG_TYPE(clearing_firm, string);
    #endif//_clearing_firm__GUARD__

    #ifndef _clearing_accnt__GUARD__
    #define _clearing_accnt__GUARD__
    DECL_STRONG_TYPE(clearing_accnt, string);
    #endif//_clearing_accnt__GUARD__

    #ifndef _cat_reportable__GUARD__
    #define _cat_reportable__GUARD__
    DECL_STRONG_TYPE(cat_reportable, spiderrock::protobuf::api::CatReportType);
    #endif//_cat_reportable__GUARD__

    #ifndef _cat_src_brkr_imid__GUARD__
    #define _cat_src_brkr_imid__GUARD__
    DECL_STRONG_TYPE(cat_src_brkr_imid, string);
    #endif//_cat_src_brkr_imid__GUARD__

    #ifndef _cat_src_accnt_type__GUARD__
    #define _cat_src_accnt_type__GUARD__
    DECL_STRONG_TYPE(cat_src_accnt_type, spiderrock::protobuf::api::CatAccntType);
    #endif//_cat_src_accnt_type__GUARD__

    #ifndef _cat_src_firm_type__GUARD__
    #define _cat_src_firm_type__GUARD__
    DECL_STRONG_TYPE(cat_src_firm_type, spiderrock::protobuf::api::CatFirmType);
    #endif//_cat_src_firm_type__GUARD__

    #ifndef _cat_dest_dept_type__GUARD__
    #define _cat_dest_dept_type__GUARD__
    DECL_STRONG_TYPE(cat_dest_dept_type, spiderrock::protobuf::api::CatDeptType);
    #endif//_cat_dest_dept_type__GUARD__

    #ifndef _cat_accnt__GUARD__
    #define _cat_accnt__GUARD__
    DECL_STRONG_TYPE(cat_accnt, string);
    #endif//_cat_accnt__GUARD__

    #ifndef _cat_brkr_accnt__GUARD__
    #define _cat_brkr_accnt__GUARD__
    DECL_STRONG_TYPE(cat_brkr_accnt, string);
    #endif//_cat_brkr_accnt__GUARD__

    #ifndef _cum_fill_quantity__GUARD__
    #define _cum_fill_quantity__GUARD__
    DECL_STRONG_TYPE(cum_fill_quantity, int32);
    #endif//_cum_fill_quantity__GUARD__

    #ifndef _avg_fill_price__GUARD__
    #define _avg_fill_price__GUARD__
    DECL_STRONG_TYPE(avg_fill_price, double);
    #endif//_avg_fill_price__GUARD__

    #ifndef _avg_fill_uprice__GUARD__
    #define _avg_fill_uprice__GUARD__
    DECL_STRONG_TYPE(avg_fill_uprice, double);
    #endif//_avg_fill_uprice__GUARD__

    #ifndef _leaves_qty__GUARD__
    #define _leaves_qty__GUARD__
    DECL_STRONG_TYPE(leaves_qty, int32);
    #endif//_leaves_qty__GUARD__

    #ifndef _last_fill_number__GUARD__
    #define _last_fill_number__GUARD__
    DECL_STRONG_TYPE(last_fill_number, int64);
    #endif//_last_fill_number__GUARD__

    #ifndef _last_fill_dttm__GUARD__
    #define _last_fill_dttm__GUARD__
    DECL_STRONG_TYPE(last_fill_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_last_fill_dttm__GUARD__

    #ifndef _review_cl_ord_id__GUARD__
    #define _review_cl_ord_id__GUARD__
    DECL_STRONG_TYPE(review_cl_ord_id, string);
    #endif//_review_cl_ord_id__GUARD__

    #ifndef _review_orig_cl_ord_id__GUARD__
    #define _review_orig_cl_ord_id__GUARD__
    DECL_STRONG_TYPE(review_orig_cl_ord_id, string);
    #endif//_review_orig_cl_ord_id__GUARD__

    #ifndef _review_cancel_cl_ord_id__GUARD__
    #define _review_cancel_cl_ord_id__GUARD__
    DECL_STRONG_TYPE(review_cancel_cl_ord_id, string);
    #endif//_review_cancel_cl_ord_id__GUARD__

    #ifndef _review_order_size__GUARD__
    #define _review_order_size__GUARD__
    DECL_STRONG_TYPE(review_order_size, int32);
    #endif//_review_order_size__GUARD__

    #ifndef _review_order_active_size__GUARD__
    #define _review_order_active_size__GUARD__
    DECL_STRONG_TYPE(review_order_active_size, int32);
    #endif//_review_order_active_size__GUARD__

    #ifndef _review_cum_fill_quantity__GUARD__
    #define _review_cum_fill_quantity__GUARD__
    DECL_STRONG_TYPE(review_cum_fill_quantity, int32);
    #endif//_review_cum_fill_quantity__GUARD__

    #ifndef _review_avg_fill_price__GUARD__
    #define _review_avg_fill_price__GUARD__
    DECL_STRONG_TYPE(review_avg_fill_price, double);
    #endif//_review_avg_fill_price__GUARD__

    #ifndef _review_leaves_qty__GUARD__
    #define _review_leaves_qty__GUARD__
    DECL_STRONG_TYPE(review_leaves_qty, int32);
    #endif//_review_leaves_qty__GUARD__

    #ifndef _review_order_status__GUARD__
    #define _review_order_status__GUARD__
    DECL_STRONG_TYPE(review_order_status, spiderrock::protobuf::api::SpdrOrderStatus);
    #endif//_review_order_status__GUARD__

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

    #ifndef _num_child_orders__int32__GUARD__
    #define _num_child_orders__int32__GUARD__
    DECL_STRONG_TYPE(num_child_orders__int32, int32);
    #endif//_num_child_orders__int32__GUARD__

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

    #ifndef _mkt_stance__GUARD__
    #define _mkt_stance__GUARD__
    DECL_STRONG_TYPE(mkt_stance, spiderrock::protobuf::api::MktStance);
    #endif//_mkt_stance__GUARD__

    #ifndef _parent_strategy__GUARD__
    #define _parent_strategy__GUARD__
    DECL_STRONG_TYPE(parent_strategy, string);
    #endif//_parent_strategy__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

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

    #ifndef _notional_mult__GUARD__
    #define _notional_mult__GUARD__
    DECL_STRONG_TYPE(notional_mult, float);
    #endif//_notional_mult__GUARD__

    #ifndef _security_id__string__GUARD__
    #define _security_id__string__GUARD__
    DECL_STRONG_TYPE(security_id__string, string);
    #endif//_security_id__string__GUARD__

    #ifndef _security_desc__GUARD__
    #define _security_desc__GUARD__
    DECL_STRONG_TYPE(security_desc, string);
    #endif//_security_desc__GUARD__

    #ifndef _product_group__GUARD__
    #define _product_group__GUARD__
    DECL_STRONG_TYPE(product_group, string);
    #endif//_product_group__GUARD__

    #ifndef _product_class__GUARD__
    #define _product_class__GUARD__
    DECL_STRONG_TYPE(product_class, spiderrock::protobuf::api::ProductClass);
    #endif//_product_class__GUARD__

    #ifndef _und_key__GUARD__
    #define _und_key__GUARD__
    DECL_STRONG_TYPE(und_key, ExpiryKey);
    #endif//_und_key__GUARD__

    #ifndef _und_type__GUARD__
    #define _und_type__GUARD__
    DECL_STRONG_TYPE(und_type, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_und_type__GUARD__

    #ifndef _u_sec_desc__GUARD__
    #define _u_sec_desc__GUARD__
    DECL_STRONG_TYPE(u_sec_desc, string);
    #endif//_u_sec_desc__GUARD__

    #ifndef _price_format__GUARD__
    #define _price_format__GUARD__
    DECL_STRONG_TYPE(price_format, spiderrock::protobuf::api::PriceFormat);
    #endif//_price_format__GUARD__

    #ifndef _user_data1__GUARD__
    #define _user_data1__GUARD__
    DECL_STRONG_TYPE(user_data1, string);
    #endif//_user_data1__GUARD__

    #ifndef _user_data2__GUARD__
    #define _user_data2__GUARD__
    DECL_STRONG_TYPE(user_data2, string);
    #endif//_user_data2__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _include_srnetwork__GUARD__
    #define _include_srnetwork__GUARD__
    DECL_STRONG_TYPE(include_srnetwork, spiderrock::protobuf::api::InclExclDisclose);
    #endif//_include_srnetwork__GUARD__

    #ifndef _alt_cross_id__v7__GUARD__
    #define _alt_cross_id__v7__GUARD__
    DECL_STRONG_TYPE(alt_cross_id__v7, string);
    #endif//_alt_cross_id__v7__GUARD__

    #ifndef _exec_broker_accnt__v7__GUARD__
    #define _exec_broker_accnt__v7__GUARD__
    DECL_STRONG_TYPE(exec_broker_accnt__v7, string);
    #endif//_exec_broker_accnt__v7__GUARD__

    #ifndef _exec_broker_cl_firm__v7__GUARD__
    #define _exec_broker_cl_firm__v7__GUARD__
    DECL_STRONG_TYPE(exec_broker_cl_firm__v7, string);
    #endif//_exec_broker_cl_firm__v7__GUARD__

    #ifndef _exec_username__v7__GUARD__
    #define _exec_username__v7__GUARD__
    DECL_STRONG_TYPE(exec_username__v7, string);
    #endif//_exec_username__v7__GUARD__

    #ifndef _data_center__v7__GUARD__
    #define _data_center__v7__GUARD__
    DECL_STRONG_TYPE(data_center__v7, spiderrock::protobuf::api::SRDataCenter_V7);
    #endif//_data_center__v7__GUARD__

    #ifndef _time_in_force__v7__GUARD__
    #define _time_in_force__v7__GUARD__
    DECL_STRONG_TYPE(time_in_force__v7, spiderrock::protobuf::api::TimeInForce);
    #endif//_time_in_force__v7__GUARD__

    #ifndef _hedge_tif__v7__GUARD__
    #define _hedge_tif__v7__GUARD__
    DECL_STRONG_TYPE(hedge_tif__v7, spiderrock::protobuf::api::TimeInForce);
    #endif//_hedge_tif__v7__GUARD__

    #ifndef _locate_source__v7__GUARD__
    #define _locate_source__v7__GUARD__
    DECL_STRONG_TYPE(locate_source__v7, string);
    #endif//_locate_source__v7__GUARD__

    #ifndef _clearing_flip_type__v7__GUARD__
    #define _clearing_flip_type__v7__GUARD__
    DECL_STRONG_TYPE(clearing_flip_type__v7, spiderrock::protobuf::api::FlipType);
    #endif//_clearing_flip_type__v7__GUARD__

    #ifndef _clearing_flip_firm__v7__GUARD__
    #define _clearing_flip_firm__v7__GUARD__
    DECL_STRONG_TYPE(clearing_flip_firm__v7, string);
    #endif//_clearing_flip_firm__v7__GUARD__

    #ifndef _clearing_flip_accnt__v7__GUARD__
    #define _clearing_flip_accnt__v7__GUARD__
    DECL_STRONG_TYPE(clearing_flip_accnt__v7, string);
    #endif//_clearing_flip_accnt__v7__GUARD__

    #ifndef _review_routing_code__v7__GUARD__
    #define _review_routing_code__v7__GUARD__
    DECL_STRONG_TYPE(review_routing_code__v7, string);
    #endif//_review_routing_code__v7__GUARD__

    #ifndef _progress_timeout__v7__GUARD__
    #define _progress_timeout__v7__GUARD__
    DECL_STRONG_TYPE(progress_timeout__v7, int32);
    #endif//_progress_timeout__v7__GUARD__

    #ifndef _parent_number__GUARD__
    #define _parent_number__GUARD__
    DECL_STRONG_TYPE(parent_number, int64);
    #endif//_parent_number__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _incl_excl__GUARD__
    #define _incl_excl__GUARD__
    DECL_STRONG_TYPE(incl_excl, spiderrock::protobuf::api::InclExclDisclose);
    #endif//_incl_excl__GUARD__

    #ifndef _last_leg_ref_id__v7__GUARD__
    #define _last_leg_ref_id__v7__GUARD__
    DECL_STRONG_TYPE(last_leg_ref_id__v7, int64);
    #endif//_last_leg_ref_id__v7__GUARD__

    #ifndef _last_fill_dttm__v7__GUARD__
    #define _last_fill_dttm__v7__GUARD__
    DECL_STRONG_TYPE(last_fill_dttm__v7, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_last_fill_dttm__v7__GUARD__

    #ifndef _cum_square_qty__v7__GUARD__
    #define _cum_square_qty__v7__GUARD__
    DECL_STRONG_TYPE(cum_square_qty__v7, int32);
    #endif//_cum_square_qty__v7__GUARD__

    #ifndef _avg_square_prc__v7__GUARD__
    #define _avg_square_prc__v7__GUARD__
    DECL_STRONG_TYPE(avg_square_prc__v7, double);
    #endif//_avg_square_prc__v7__GUARD__

    #ifndef _last_square_dttm__v7__GUARD__
    #define _last_square_dttm__v7__GUARD__
    DECL_STRONG_TYPE(last_square_dttm__v7, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_last_square_dttm__v7__GUARD__

    #ifndef _cum_partial_qty__v7__GUARD__
    #define _cum_partial_qty__v7__GUARD__
    DECL_STRONG_TYPE(cum_partial_qty__v7, int32);
    #endif//_cum_partial_qty__v7__GUARD__

    #ifndef _ssale_flag__v7__GUARD__
    #define _ssale_flag__v7__GUARD__
    DECL_STRONG_TYPE(ssale_flag__v7, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag__v7__GUARD__

    #ifndef _stock_cum_fill_qty__v7__GUARD__
    #define _stock_cum_fill_qty__v7__GUARD__
    DECL_STRONG_TYPE(stock_cum_fill_qty__v7, int32);
    #endif//_stock_cum_fill_qty__v7__GUARD__

    #ifndef _stock_avg_fill_prc__v7__GUARD__
    #define _stock_avg_fill_prc__v7__GUARD__
    DECL_STRONG_TYPE(stock_avg_fill_prc__v7, double);
    #endif//_stock_avg_fill_prc__v7__GUARD__

    #ifndef _pos_type1__v7__GUARD__
    #define _pos_type1__v7__GUARD__
    DECL_STRONG_TYPE(pos_type1__v7, spiderrock::protobuf::api::PositionType);
    #endif//_pos_type1__v7__GUARD__

    #ifndef _ssale_flag1__v7__GUARD__
    #define _ssale_flag1__v7__GUARD__
    DECL_STRONG_TYPE(ssale_flag1__v7, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag1__v7__GUARD__

    #ifndef _leg_cum_fill_qty1__v7__GUARD__
    #define _leg_cum_fill_qty1__v7__GUARD__
    DECL_STRONG_TYPE(leg_cum_fill_qty1__v7, int32);
    #endif//_leg_cum_fill_qty1__v7__GUARD__

    #ifndef _leg_avg_fill_prc1__v7__GUARD__
    #define _leg_avg_fill_prc1__v7__GUARD__
    DECL_STRONG_TYPE(leg_avg_fill_prc1__v7, double);
    #endif//_leg_avg_fill_prc1__v7__GUARD__

    #ifndef _pos_type2__v7__GUARD__
    #define _pos_type2__v7__GUARD__
    DECL_STRONG_TYPE(pos_type2__v7, spiderrock::protobuf::api::PositionType);
    #endif//_pos_type2__v7__GUARD__

    #ifndef _ssale_flag2__v7__GUARD__
    #define _ssale_flag2__v7__GUARD__
    DECL_STRONG_TYPE(ssale_flag2__v7, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag2__v7__GUARD__

    #ifndef _leg_cum_fill_qty2__v7__GUARD__
    #define _leg_cum_fill_qty2__v7__GUARD__
    DECL_STRONG_TYPE(leg_cum_fill_qty2__v7, int32);
    #endif//_leg_cum_fill_qty2__v7__GUARD__

    #ifndef _leg_avg_fill_prc2__v7__GUARD__
    #define _leg_avg_fill_prc2__v7__GUARD__
    DECL_STRONG_TYPE(leg_avg_fill_prc2__v7, double);
    #endif//_leg_avg_fill_prc2__v7__GUARD__

    #ifndef _pos_type3__v7__GUARD__
    #define _pos_type3__v7__GUARD__
    DECL_STRONG_TYPE(pos_type3__v7, spiderrock::protobuf::api::PositionType);
    #endif//_pos_type3__v7__GUARD__

    #ifndef _ssale_flag3__v7__GUARD__
    #define _ssale_flag3__v7__GUARD__
    DECL_STRONG_TYPE(ssale_flag3__v7, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag3__v7__GUARD__

    #ifndef _leg_cum_fill_qty3__v7__GUARD__
    #define _leg_cum_fill_qty3__v7__GUARD__
    DECL_STRONG_TYPE(leg_cum_fill_qty3__v7, int32);
    #endif//_leg_cum_fill_qty3__v7__GUARD__

    #ifndef _leg_avg_fill_prc3__v7__GUARD__
    #define _leg_avg_fill_prc3__v7__GUARD__
    DECL_STRONG_TYPE(leg_avg_fill_prc3__v7, double);
    #endif//_leg_avg_fill_prc3__v7__GUARD__

    #ifndef _pos_type4__v7__GUARD__
    #define _pos_type4__v7__GUARD__
    DECL_STRONG_TYPE(pos_type4__v7, spiderrock::protobuf::api::PositionType);
    #endif//_pos_type4__v7__GUARD__

    #ifndef _ssale_flag4__v7__GUARD__
    #define _ssale_flag4__v7__GUARD__
    DECL_STRONG_TYPE(ssale_flag4__v7, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag4__v7__GUARD__

    #ifndef _leg_cum_fill_qty4__v7__GUARD__
    #define _leg_cum_fill_qty4__v7__GUARD__
    DECL_STRONG_TYPE(leg_cum_fill_qty4__v7, int32);
    #endif//_leg_cum_fill_qty4__v7__GUARD__

    #ifndef _leg_avg_fill_prc4__v7__GUARD__
    #define _leg_avg_fill_prc4__v7__GUARD__
    DECL_STRONG_TYPE(leg_avg_fill_prc4__v7, double);
    #endif//_leg_avg_fill_prc4__v7__GUARD__

    #ifndef _pos_type5__v7__GUARD__
    #define _pos_type5__v7__GUARD__
    DECL_STRONG_TYPE(pos_type5__v7, spiderrock::protobuf::api::PositionType);
    #endif//_pos_type5__v7__GUARD__

    #ifndef _ssale_flag5__v7__GUARD__
    #define _ssale_flag5__v7__GUARD__
    DECL_STRONG_TYPE(ssale_flag5__v7, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag5__v7__GUARD__

    #ifndef _leg_cum_fill_qty5__v7__GUARD__
    #define _leg_cum_fill_qty5__v7__GUARD__
    DECL_STRONG_TYPE(leg_cum_fill_qty5__v7, int32);
    #endif//_leg_cum_fill_qty5__v7__GUARD__

    #ifndef _leg_avg_fill_prc5__v7__GUARD__
    #define _leg_avg_fill_prc5__v7__GUARD__
    DECL_STRONG_TYPE(leg_avg_fill_prc5__v7, double);
    #endif//_leg_avg_fill_prc5__v7__GUARD__

    #ifndef _pos_type6__v7__GUARD__
    #define _pos_type6__v7__GUARD__
    DECL_STRONG_TYPE(pos_type6__v7, spiderrock::protobuf::api::PositionType);
    #endif//_pos_type6__v7__GUARD__

    #ifndef _ssale_flag6__v7__GUARD__
    #define _ssale_flag6__v7__GUARD__
    DECL_STRONG_TYPE(ssale_flag6__v7, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag6__v7__GUARD__

    #ifndef _leg_cum_fill_qty6__v7__GUARD__
    #define _leg_cum_fill_qty6__v7__GUARD__
    DECL_STRONG_TYPE(leg_cum_fill_qty6__v7, int32);
    #endif//_leg_cum_fill_qty6__v7__GUARD__

    #ifndef _leg_avg_fill_prc6__v7__GUARD__
    #define _leg_avg_fill_prc6__v7__GUARD__
    DECL_STRONG_TYPE(leg_avg_fill_prc6__v7, double);
    #endif//_leg_avg_fill_prc6__v7__GUARD__

    #ifndef _face_id__v7__GUARD__
    #define _face_id__v7__GUARD__
    DECL_STRONG_TYPE(face_id__v7, int64);
    #endif//_face_id__v7__GUARD__

    #ifndef _alt_order_id__v7__GUARD__
    #define _alt_order_id__v7__GUARD__
    DECL_STRONG_TYPE(alt_order_id__v7, string);
    #endif//_alt_order_id__v7__GUARD__

    #ifndef _accnt__v7__GUARD__
    #define _accnt__v7__GUARD__
    DECL_STRONG_TYPE(accnt__v7, string);
    #endif//_accnt__v7__GUARD__

    #ifndef _client_firm__v7__GUARD__
    #define _client_firm__v7__GUARD__
    DECL_STRONG_TYPE(client_firm__v7, string);
    #endif//_client_firm__v7__GUARD__

    #ifndef _alt_accnt__v7__GUARD__
    #define _alt_accnt__v7__GUARD__
    DECL_STRONG_TYPE(alt_accnt__v7, string);
    #endif//_alt_accnt__v7__GUARD__

    #ifndef _firm_type__v7__GUARD__
    #define _firm_type__v7__GUARD__
    DECL_STRONG_TYPE(firm_type__v7, spiderrock::protobuf::api::FirmType);
    #endif//_firm_type__v7__GUARD__

    #ifndef _order_capacity__v7__GUARD__
    #define _order_capacity__v7__GUARD__
    DECL_STRONG_TYPE(order_capacity__v7, spiderrock::protobuf::api::OrderCapacity);
    #endif//_order_capacity__v7__GUARD__

    #ifndef _ssale_flag__v7__GUARD__
    #define _ssale_flag__v7__GUARD__
    DECL_STRONG_TYPE(ssale_flag__v7, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag__v7__GUARD__

    #ifndef _position_type__v7__GUARD__
    #define _position_type__v7__GUARD__
    DECL_STRONG_TYPE(position_type__v7, spiderrock::protobuf::api::PositionType);
    #endif//_position_type__v7__GUARD__

    #ifndef _firm_position__v7__GUARD__
    #define _firm_position__v7__GUARD__
    DECL_STRONG_TYPE(firm_position__v7, int32);
    #endif//_firm_position__v7__GUARD__

    #ifndef _open_sell_sh__v7__GUARD__
    #define _open_sell_sh__v7__GUARD__
    DECL_STRONG_TYPE(open_sell_sh__v7, int32);
    #endif//_open_sell_sh__v7__GUARD__

    #ifndef _locate_quan__v7__GUARD__
    #define _locate_quan__v7__GUARD__
    DECL_STRONG_TYPE(locate_quan__v7, int32);
    #endif//_locate_quan__v7__GUARD__

    #ifndef _locate_firm__v7__GUARD__
    #define _locate_firm__v7__GUARD__
    DECL_STRONG_TYPE(locate_firm__v7, string);
    #endif//_locate_firm__v7__GUARD__

    #ifndef _locate_pool__v7__GUARD__
    #define _locate_pool__v7__GUARD__
    DECL_STRONG_TYPE(locate_pool__v7, string);
    #endif//_locate_pool__v7__GUARD__

    #ifndef _locate_source__v7__GUARD__
    #define _locate_source__v7__GUARD__
    DECL_STRONG_TYPE(locate_source__v7, string);
    #endif//_locate_source__v7__GUARD__

    #ifndef _no_cross_group__v7__GUARD__
    #define _no_cross_group__v7__GUARD__
    DECL_STRONG_TYPE(no_cross_group__v7, string);
    #endif//_no_cross_group__v7__GUARD__

    #ifndef _exch_trader_id__v7__GUARD__
    #define _exch_trader_id__v7__GUARD__
    DECL_STRONG_TYPE(exch_trader_id__v7, string);
    #endif//_exch_trader_id__v7__GUARD__

    #ifndef _large_trader_id__v7__GUARD__
    #define _large_trader_id__v7__GUARD__
    DECL_STRONG_TYPE(large_trader_id__v7, string);
    #endif//_large_trader_id__v7__GUARD__

    #ifndef _trading_location__v7__GUARD__
    #define _trading_location__v7__GUARD__
    DECL_STRONG_TYPE(trading_location__v7, string);
    #endif//_trading_location__v7__GUARD__

    #ifndef _clearing_firm__v7__GUARD__
    #define _clearing_firm__v7__GUARD__
    DECL_STRONG_TYPE(clearing_firm__v7, string);
    #endif//_clearing_firm__v7__GUARD__

    #ifndef _clearing_accnt__v7__GUARD__
    #define _clearing_accnt__v7__GUARD__
    DECL_STRONG_TYPE(clearing_accnt__v7, string);
    #endif//_clearing_accnt__v7__GUARD__

    #ifndef _clearing_flip_type__v7__GUARD__
    #define _clearing_flip_type__v7__GUARD__
    DECL_STRONG_TYPE(clearing_flip_type__v7, spiderrock::protobuf::api::FlipType);
    #endif//_clearing_flip_type__v7__GUARD__

    #ifndef _clearing_flip_firm__v7__GUARD__
    #define _clearing_flip_firm__v7__GUARD__
    DECL_STRONG_TYPE(clearing_flip_firm__v7, string);
    #endif//_clearing_flip_firm__v7__GUARD__

    #ifndef _clearing_flip_accnt__v7__GUARD__
    #define _clearing_flip_accnt__v7__GUARD__
    DECL_STRONG_TYPE(clearing_flip_accnt__v7, string);
    #endif//_clearing_flip_accnt__v7__GUARD__

    #ifndef _cat_src_brkr_imid__v7__GUARD__
    #define _cat_src_brkr_imid__v7__GUARD__
    DECL_STRONG_TYPE(cat_src_brkr_imid__v7, string);
    #endif//_cat_src_brkr_imid__v7__GUARD__

    #ifndef _cat_src_accnt_type__v7__GUARD__
    #define _cat_src_accnt_type__v7__GUARD__
    DECL_STRONG_TYPE(cat_src_accnt_type__v7, spiderrock::protobuf::api::CatAccntType);
    #endif//_cat_src_accnt_type__v7__GUARD__

    #ifndef _cat_src_firm_type__v7__GUARD__
    #define _cat_src_firm_type__v7__GUARD__
    DECL_STRONG_TYPE(cat_src_firm_type__v7, spiderrock::protobuf::api::CatFirmType);
    #endif//_cat_src_firm_type__v7__GUARD__

    #ifndef _cum_fill_quantity__v7__GUARD__
    #define _cum_fill_quantity__v7__GUARD__
    DECL_STRONG_TYPE(cum_fill_quantity__v7, int32);
    #endif//_cum_fill_quantity__v7__GUARD__

    #ifndef _avg_fill_price__v7__GUARD__
    #define _avg_fill_price__v7__GUARD__
    DECL_STRONG_TYPE(avg_fill_price__v7, double);
    #endif//_avg_fill_price__v7__GUARD__

    #ifndef _leaves_qty__v7__GUARD__
    #define _leaves_qty__v7__GUARD__
    DECL_STRONG_TYPE(leaves_qty__v7, int32);
    #endif//_leaves_qty__v7__GUARD__

    #ifndef _last_fill_number__v7__GUARD__
    #define _last_fill_number__v7__GUARD__
    DECL_STRONG_TYPE(last_fill_number__v7, int64);
    #endif//_last_fill_number__v7__GUARD__

    #ifndef _last_fill_dttm__v7__GUARD__
    #define _last_fill_dttm__v7__GUARD__
    DECL_STRONG_TYPE(last_fill_dttm__v7, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_last_fill_dttm__v7__GUARD__

    #ifndef _last_leg_ref_id__GUARD__
    #define _last_leg_ref_id__GUARD__
    DECL_STRONG_TYPE(last_leg_ref_id, int64);
    #endif//_last_leg_ref_id__GUARD__

    #ifndef _last_fill_dttm__GUARD__
    #define _last_fill_dttm__GUARD__
    DECL_STRONG_TYPE(last_fill_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_last_fill_dttm__GUARD__

    #ifndef _cum_square_qty__GUARD__
    #define _cum_square_qty__GUARD__
    DECL_STRONG_TYPE(cum_square_qty, int32);
    #endif//_cum_square_qty__GUARD__

    #ifndef _avg_square_prc__GUARD__
    #define _avg_square_prc__GUARD__
    DECL_STRONG_TYPE(avg_square_prc, double);
    #endif//_avg_square_prc__GUARD__

    #ifndef _last_square_dttm__GUARD__
    #define _last_square_dttm__GUARD__
    DECL_STRONG_TYPE(last_square_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_last_square_dttm__GUARD__

    #ifndef _cum_partial_qty__GUARD__
    #define _cum_partial_qty__GUARD__
    DECL_STRONG_TYPE(cum_partial_qty, int32);
    #endif//_cum_partial_qty__GUARD__

    #ifndef _review_cum_square_qty__GUARD__
    #define _review_cum_square_qty__GUARD__
    DECL_STRONG_TYPE(review_cum_square_qty, int32);
    #endif//_review_cum_square_qty__GUARD__

    #ifndef _review_avg_square_prc__GUARD__
    #define _review_avg_square_prc__GUARD__
    DECL_STRONG_TYPE(review_avg_square_prc, double);
    #endif//_review_avg_square_prc__GUARD__

    #ifndef _review_last_square_dttm__GUARD__
    #define _review_last_square_dttm__GUARD__
    DECL_STRONG_TYPE(review_last_square_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_review_last_square_dttm__GUARD__

    #ifndef _review_cum_partial_qty__GUARD__
    #define _review_cum_partial_qty__GUARD__
    DECL_STRONG_TYPE(review_cum_partial_qty, int32);
    #endif//_review_cum_partial_qty__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _stock_side__GUARD__
    #define _stock_side__GUARD__
    DECL_STRONG_TYPE(stock_side, spiderrock::protobuf::api::BuySell);
    #endif//_stock_side__GUARD__

    #ifndef _stock_shares__GUARD__
    #define _stock_shares__GUARD__
    DECL_STRONG_TYPE(stock_shares, int32);
    #endif//_stock_shares__GUARD__

    #ifndef _stock_leg_id__GUARD__
    #define _stock_leg_id__GUARD__
    DECL_STRONG_TYPE(stock_leg_id, int64);
    #endif//_stock_leg_id__GUARD__

    #ifndef _alt_stk_leg_id__GUARD__
    #define _alt_stk_leg_id__GUARD__
    DECL_STRONG_TYPE(alt_stk_leg_id, string);
    #endif//_alt_stk_leg_id__GUARD__

    #ifndef _review_stk_leg_id__GUARD__
    #define _review_stk_leg_id__GUARD__
    DECL_STRONG_TYPE(review_stk_leg_id, string);
    #endif//_review_stk_leg_id__GUARD__

    #ifndef _review_stk_leg_alt_id__GUARD__
    #define _review_stk_leg_alt_id__GUARD__
    DECL_STRONG_TYPE(review_stk_leg_alt_id, string);
    #endif//_review_stk_leg_alt_id__GUARD__

    #ifndef _ssale_flag__GUARD__
    #define _ssale_flag__GUARD__
    DECL_STRONG_TYPE(ssale_flag, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag__GUARD__

    #ifndef _stock_cum_fill_qty__GUARD__
    #define _stock_cum_fill_qty__GUARD__
    DECL_STRONG_TYPE(stock_cum_fill_qty, int32);
    #endif//_stock_cum_fill_qty__GUARD__

    #ifndef _stock_avg_fill_prc__GUARD__
    #define _stock_avg_fill_prc__GUARD__
    DECL_STRONG_TYPE(stock_avg_fill_prc, double);
    #endif//_stock_avg_fill_prc__GUARD__

    #ifndef _stock_review_cum_fill_qty__GUARD__
    #define _stock_review_cum_fill_qty__GUARD__
    DECL_STRONG_TYPE(stock_review_cum_fill_qty, int32);
    #endif//_stock_review_cum_fill_qty__GUARD__

    #ifndef _stock_review_avg_fill_prc__GUARD__
    #define _stock_review_avg_fill_prc__GUARD__
    DECL_STRONG_TYPE(stock_review_avg_fill_prc, double);
    #endif//_stock_review_avg_fill_prc__GUARD__

    #ifndef _num_legs__GUARD__
    #define _num_legs__GUARD__
    DECL_STRONG_TYPE(num_legs, int32);
    #endif//_num_legs__GUARD__

    #ifndef _sec_key1__GUARD__
    #define _sec_key1__GUARD__
    DECL_STRONG_TYPE(sec_key1, OptionKey);
    #endif//_sec_key1__GUARD__

    #ifndef _sec_type1__GUARD__
    #define _sec_type1__GUARD__
    DECL_STRONG_TYPE(sec_type1, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type1__GUARD__

    #ifndef _mult1__GUARD__
    #define _mult1__GUARD__
    DECL_STRONG_TYPE(mult1, uint32);
    #endif//_mult1__GUARD__

    #ifndef _side1__GUARD__
    #define _side1__GUARD__
    DECL_STRONG_TYPE(side1, spiderrock::protobuf::api::BuySell);
    #endif//_side1__GUARD__

    #ifndef _leg_id1__GUARD__
    #define _leg_id1__GUARD__
    DECL_STRONG_TYPE(leg_id1, int64);
    #endif//_leg_id1__GUARD__

    #ifndef _alt_leg_id1__GUARD__
    #define _alt_leg_id1__GUARD__
    DECL_STRONG_TYPE(alt_leg_id1, string);
    #endif//_alt_leg_id1__GUARD__

    #ifndef _review_leg_id1__GUARD__
    #define _review_leg_id1__GUARD__
    DECL_STRONG_TYPE(review_leg_id1, string);
    #endif//_review_leg_id1__GUARD__

    #ifndef _review_leg_alt_id1__GUARD__
    #define _review_leg_alt_id1__GUARD__
    DECL_STRONG_TYPE(review_leg_alt_id1, string);
    #endif//_review_leg_alt_id1__GUARD__

    #ifndef _pos_type1__GUARD__
    #define _pos_type1__GUARD__
    DECL_STRONG_TYPE(pos_type1, spiderrock::protobuf::api::PositionType);
    #endif//_pos_type1__GUARD__

    #ifndef _ssale_flag1__GUARD__
    #define _ssale_flag1__GUARD__
    DECL_STRONG_TYPE(ssale_flag1, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag1__GUARD__

    #ifndef _leg_cum_fill_qty1__GUARD__
    #define _leg_cum_fill_qty1__GUARD__
    DECL_STRONG_TYPE(leg_cum_fill_qty1, int32);
    #endif//_leg_cum_fill_qty1__GUARD__

    #ifndef _leg_avg_fill_prc1__GUARD__
    #define _leg_avg_fill_prc1__GUARD__
    DECL_STRONG_TYPE(leg_avg_fill_prc1, double);
    #endif//_leg_avg_fill_prc1__GUARD__

    #ifndef _leg_review_cum_fill_qty1__GUARD__
    #define _leg_review_cum_fill_qty1__GUARD__
    DECL_STRONG_TYPE(leg_review_cum_fill_qty1, int32);
    #endif//_leg_review_cum_fill_qty1__GUARD__

    #ifndef _leg_review_avg_fill_prc1__GUARD__
    #define _leg_review_avg_fill_prc1__GUARD__
    DECL_STRONG_TYPE(leg_review_avg_fill_prc1, double);
    #endif//_leg_review_avg_fill_prc1__GUARD__

    #ifndef _sec_key2__GUARD__
    #define _sec_key2__GUARD__
    DECL_STRONG_TYPE(sec_key2, OptionKey);
    #endif//_sec_key2__GUARD__

    #ifndef _sec_type2__GUARD__
    #define _sec_type2__GUARD__
    DECL_STRONG_TYPE(sec_type2, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type2__GUARD__

    #ifndef _mult2__GUARD__
    #define _mult2__GUARD__
    DECL_STRONG_TYPE(mult2, uint32);
    #endif//_mult2__GUARD__

    #ifndef _side2__GUARD__
    #define _side2__GUARD__
    DECL_STRONG_TYPE(side2, spiderrock::protobuf::api::BuySell);
    #endif//_side2__GUARD__

    #ifndef _leg_id2__GUARD__
    #define _leg_id2__GUARD__
    DECL_STRONG_TYPE(leg_id2, int64);
    #endif//_leg_id2__GUARD__

    #ifndef _alt_leg_id2__GUARD__
    #define _alt_leg_id2__GUARD__
    DECL_STRONG_TYPE(alt_leg_id2, string);
    #endif//_alt_leg_id2__GUARD__

    #ifndef _review_leg_id2__GUARD__
    #define _review_leg_id2__GUARD__
    DECL_STRONG_TYPE(review_leg_id2, string);
    #endif//_review_leg_id2__GUARD__

    #ifndef _review_leg_alt_id2__GUARD__
    #define _review_leg_alt_id2__GUARD__
    DECL_STRONG_TYPE(review_leg_alt_id2, string);
    #endif//_review_leg_alt_id2__GUARD__

    #ifndef _pos_type2__GUARD__
    #define _pos_type2__GUARD__
    DECL_STRONG_TYPE(pos_type2, spiderrock::protobuf::api::PositionType);
    #endif//_pos_type2__GUARD__

    #ifndef _ssale_flag2__GUARD__
    #define _ssale_flag2__GUARD__
    DECL_STRONG_TYPE(ssale_flag2, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag2__GUARD__

    #ifndef _leg_cum_fill_qty2__GUARD__
    #define _leg_cum_fill_qty2__GUARD__
    DECL_STRONG_TYPE(leg_cum_fill_qty2, int32);
    #endif//_leg_cum_fill_qty2__GUARD__

    #ifndef _leg_avg_fill_prc2__GUARD__
    #define _leg_avg_fill_prc2__GUARD__
    DECL_STRONG_TYPE(leg_avg_fill_prc2, double);
    #endif//_leg_avg_fill_prc2__GUARD__

    #ifndef _leg_review_cum_fill_qty2__GUARD__
    #define _leg_review_cum_fill_qty2__GUARD__
    DECL_STRONG_TYPE(leg_review_cum_fill_qty2, int32);
    #endif//_leg_review_cum_fill_qty2__GUARD__

    #ifndef _leg_review_avg_fill_prc2__GUARD__
    #define _leg_review_avg_fill_prc2__GUARD__
    DECL_STRONG_TYPE(leg_review_avg_fill_prc2, double);
    #endif//_leg_review_avg_fill_prc2__GUARD__

    #ifndef _sec_key3__GUARD__
    #define _sec_key3__GUARD__
    DECL_STRONG_TYPE(sec_key3, OptionKey);
    #endif//_sec_key3__GUARD__

    #ifndef _sec_type3__GUARD__
    #define _sec_type3__GUARD__
    DECL_STRONG_TYPE(sec_type3, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type3__GUARD__

    #ifndef _mult3__GUARD__
    #define _mult3__GUARD__
    DECL_STRONG_TYPE(mult3, uint32);
    #endif//_mult3__GUARD__

    #ifndef _side3__GUARD__
    #define _side3__GUARD__
    DECL_STRONG_TYPE(side3, spiderrock::protobuf::api::BuySell);
    #endif//_side3__GUARD__

    #ifndef _leg_id3__GUARD__
    #define _leg_id3__GUARD__
    DECL_STRONG_TYPE(leg_id3, int64);
    #endif//_leg_id3__GUARD__

    #ifndef _alt_leg_id3__GUARD__
    #define _alt_leg_id3__GUARD__
    DECL_STRONG_TYPE(alt_leg_id3, string);
    #endif//_alt_leg_id3__GUARD__

    #ifndef _review_leg_id3__GUARD__
    #define _review_leg_id3__GUARD__
    DECL_STRONG_TYPE(review_leg_id3, string);
    #endif//_review_leg_id3__GUARD__

    #ifndef _review_leg_alt_id3__GUARD__
    #define _review_leg_alt_id3__GUARD__
    DECL_STRONG_TYPE(review_leg_alt_id3, string);
    #endif//_review_leg_alt_id3__GUARD__

    #ifndef _pos_type3__GUARD__
    #define _pos_type3__GUARD__
    DECL_STRONG_TYPE(pos_type3, spiderrock::protobuf::api::PositionType);
    #endif//_pos_type3__GUARD__

    #ifndef _ssale_flag3__GUARD__
    #define _ssale_flag3__GUARD__
    DECL_STRONG_TYPE(ssale_flag3, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag3__GUARD__

    #ifndef _leg_cum_fill_qty3__GUARD__
    #define _leg_cum_fill_qty3__GUARD__
    DECL_STRONG_TYPE(leg_cum_fill_qty3, int32);
    #endif//_leg_cum_fill_qty3__GUARD__

    #ifndef _leg_avg_fill_prc3__GUARD__
    #define _leg_avg_fill_prc3__GUARD__
    DECL_STRONG_TYPE(leg_avg_fill_prc3, double);
    #endif//_leg_avg_fill_prc3__GUARD__

    #ifndef _leg_review_cum_fill_qty3__GUARD__
    #define _leg_review_cum_fill_qty3__GUARD__
    DECL_STRONG_TYPE(leg_review_cum_fill_qty3, int32);
    #endif//_leg_review_cum_fill_qty3__GUARD__

    #ifndef _leg_review_avg_fill_prc3__GUARD__
    #define _leg_review_avg_fill_prc3__GUARD__
    DECL_STRONG_TYPE(leg_review_avg_fill_prc3, double);
    #endif//_leg_review_avg_fill_prc3__GUARD__

    #ifndef _sec_key4__GUARD__
    #define _sec_key4__GUARD__
    DECL_STRONG_TYPE(sec_key4, OptionKey);
    #endif//_sec_key4__GUARD__

    #ifndef _sec_type4__GUARD__
    #define _sec_type4__GUARD__
    DECL_STRONG_TYPE(sec_type4, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type4__GUARD__

    #ifndef _mult4__GUARD__
    #define _mult4__GUARD__
    DECL_STRONG_TYPE(mult4, uint32);
    #endif//_mult4__GUARD__

    #ifndef _side4__GUARD__
    #define _side4__GUARD__
    DECL_STRONG_TYPE(side4, spiderrock::protobuf::api::BuySell);
    #endif//_side4__GUARD__

    #ifndef _leg_id4__GUARD__
    #define _leg_id4__GUARD__
    DECL_STRONG_TYPE(leg_id4, int64);
    #endif//_leg_id4__GUARD__

    #ifndef _alt_leg_id4__GUARD__
    #define _alt_leg_id4__GUARD__
    DECL_STRONG_TYPE(alt_leg_id4, string);
    #endif//_alt_leg_id4__GUARD__

    #ifndef _review_leg_id4__GUARD__
    #define _review_leg_id4__GUARD__
    DECL_STRONG_TYPE(review_leg_id4, string);
    #endif//_review_leg_id4__GUARD__

    #ifndef _review_leg_alt_id4__GUARD__
    #define _review_leg_alt_id4__GUARD__
    DECL_STRONG_TYPE(review_leg_alt_id4, string);
    #endif//_review_leg_alt_id4__GUARD__

    #ifndef _pos_type4__GUARD__
    #define _pos_type4__GUARD__
    DECL_STRONG_TYPE(pos_type4, spiderrock::protobuf::api::PositionType);
    #endif//_pos_type4__GUARD__

    #ifndef _ssale_flag4__GUARD__
    #define _ssale_flag4__GUARD__
    DECL_STRONG_TYPE(ssale_flag4, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag4__GUARD__

    #ifndef _leg_cum_fill_qty4__GUARD__
    #define _leg_cum_fill_qty4__GUARD__
    DECL_STRONG_TYPE(leg_cum_fill_qty4, int32);
    #endif//_leg_cum_fill_qty4__GUARD__

    #ifndef _leg_avg_fill_prc4__GUARD__
    #define _leg_avg_fill_prc4__GUARD__
    DECL_STRONG_TYPE(leg_avg_fill_prc4, double);
    #endif//_leg_avg_fill_prc4__GUARD__

    #ifndef _leg_review_cum_fill_qty4__GUARD__
    #define _leg_review_cum_fill_qty4__GUARD__
    DECL_STRONG_TYPE(leg_review_cum_fill_qty4, int32);
    #endif//_leg_review_cum_fill_qty4__GUARD__

    #ifndef _leg_review_avg_fill_prc4__GUARD__
    #define _leg_review_avg_fill_prc4__GUARD__
    DECL_STRONG_TYPE(leg_review_avg_fill_prc4, double);
    #endif//_leg_review_avg_fill_prc4__GUARD__

    #ifndef _sec_key5__GUARD__
    #define _sec_key5__GUARD__
    DECL_STRONG_TYPE(sec_key5, OptionKey);
    #endif//_sec_key5__GUARD__

    #ifndef _sec_type5__GUARD__
    #define _sec_type5__GUARD__
    DECL_STRONG_TYPE(sec_type5, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type5__GUARD__

    #ifndef _mult5__GUARD__
    #define _mult5__GUARD__
    DECL_STRONG_TYPE(mult5, uint32);
    #endif//_mult5__GUARD__

    #ifndef _side5__GUARD__
    #define _side5__GUARD__
    DECL_STRONG_TYPE(side5, spiderrock::protobuf::api::BuySell);
    #endif//_side5__GUARD__

    #ifndef _leg_id5__GUARD__
    #define _leg_id5__GUARD__
    DECL_STRONG_TYPE(leg_id5, int64);
    #endif//_leg_id5__GUARD__

    #ifndef _alt_leg_id5__GUARD__
    #define _alt_leg_id5__GUARD__
    DECL_STRONG_TYPE(alt_leg_id5, string);
    #endif//_alt_leg_id5__GUARD__

    #ifndef _review_leg_id5__GUARD__
    #define _review_leg_id5__GUARD__
    DECL_STRONG_TYPE(review_leg_id5, string);
    #endif//_review_leg_id5__GUARD__

    #ifndef _review_leg_alt_id5__GUARD__
    #define _review_leg_alt_id5__GUARD__
    DECL_STRONG_TYPE(review_leg_alt_id5, string);
    #endif//_review_leg_alt_id5__GUARD__

    #ifndef _pos_type5__GUARD__
    #define _pos_type5__GUARD__
    DECL_STRONG_TYPE(pos_type5, spiderrock::protobuf::api::PositionType);
    #endif//_pos_type5__GUARD__

    #ifndef _ssale_flag5__GUARD__
    #define _ssale_flag5__GUARD__
    DECL_STRONG_TYPE(ssale_flag5, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag5__GUARD__

    #ifndef _leg_cum_fill_qty5__GUARD__
    #define _leg_cum_fill_qty5__GUARD__
    DECL_STRONG_TYPE(leg_cum_fill_qty5, int32);
    #endif//_leg_cum_fill_qty5__GUARD__

    #ifndef _leg_avg_fill_prc5__GUARD__
    #define _leg_avg_fill_prc5__GUARD__
    DECL_STRONG_TYPE(leg_avg_fill_prc5, double);
    #endif//_leg_avg_fill_prc5__GUARD__

    #ifndef _leg_review_cum_fill_qty5__GUARD__
    #define _leg_review_cum_fill_qty5__GUARD__
    DECL_STRONG_TYPE(leg_review_cum_fill_qty5, int32);
    #endif//_leg_review_cum_fill_qty5__GUARD__

    #ifndef _leg_review_avg_fill_prc5__GUARD__
    #define _leg_review_avg_fill_prc5__GUARD__
    DECL_STRONG_TYPE(leg_review_avg_fill_prc5, double);
    #endif//_leg_review_avg_fill_prc5__GUARD__

    #ifndef _sec_key6__GUARD__
    #define _sec_key6__GUARD__
    DECL_STRONG_TYPE(sec_key6, OptionKey);
    #endif//_sec_key6__GUARD__

    #ifndef _sec_type6__GUARD__
    #define _sec_type6__GUARD__
    DECL_STRONG_TYPE(sec_type6, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type6__GUARD__

    #ifndef _mult6__GUARD__
    #define _mult6__GUARD__
    DECL_STRONG_TYPE(mult6, uint32);
    #endif//_mult6__GUARD__

    #ifndef _side6__GUARD__
    #define _side6__GUARD__
    DECL_STRONG_TYPE(side6, spiderrock::protobuf::api::BuySell);
    #endif//_side6__GUARD__

    #ifndef _leg_id6__GUARD__
    #define _leg_id6__GUARD__
    DECL_STRONG_TYPE(leg_id6, int64);
    #endif//_leg_id6__GUARD__

    #ifndef _alt_leg_id6__GUARD__
    #define _alt_leg_id6__GUARD__
    DECL_STRONG_TYPE(alt_leg_id6, string);
    #endif//_alt_leg_id6__GUARD__

    #ifndef _review_leg_id6__GUARD__
    #define _review_leg_id6__GUARD__
    DECL_STRONG_TYPE(review_leg_id6, string);
    #endif//_review_leg_id6__GUARD__

    #ifndef _review_leg_alt_id6__GUARD__
    #define _review_leg_alt_id6__GUARD__
    DECL_STRONG_TYPE(review_leg_alt_id6, string);
    #endif//_review_leg_alt_id6__GUARD__

    #ifndef _pos_type6__GUARD__
    #define _pos_type6__GUARD__
    DECL_STRONG_TYPE(pos_type6, spiderrock::protobuf::api::PositionType);
    #endif//_pos_type6__GUARD__

    #ifndef _ssale_flag6__GUARD__
    #define _ssale_flag6__GUARD__
    DECL_STRONG_TYPE(ssale_flag6, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag6__GUARD__

    #ifndef _leg_cum_fill_qty6__GUARD__
    #define _leg_cum_fill_qty6__GUARD__
    DECL_STRONG_TYPE(leg_cum_fill_qty6, int32);
    #endif//_leg_cum_fill_qty6__GUARD__

    #ifndef _leg_avg_fill_prc6__GUARD__
    #define _leg_avg_fill_prc6__GUARD__
    DECL_STRONG_TYPE(leg_avg_fill_prc6, double);
    #endif//_leg_avg_fill_prc6__GUARD__

    #ifndef _leg_review_cum_fill_qty6__GUARD__
    #define _leg_review_cum_fill_qty6__GUARD__
    DECL_STRONG_TYPE(leg_review_cum_fill_qty6, int32);
    #endif//_leg_review_cum_fill_qty6__GUARD__

    #ifndef _leg_review_avg_fill_prc6__GUARD__
    #define _leg_review_avg_fill_prc6__GUARD__
    DECL_STRONG_TYPE(leg_review_avg_fill_prc6, double);
    #endif//_leg_review_avg_fill_prc6__GUARD__

    
    class SpdrParentReport_PKey {
        public:
        //using statements for all types used in this class
        using parent_number = spiderrock::protobuf::api::parent_number;

        private:
        parent_number m_parent_number{};

        public:
        parent_number get_parent_number() const {
            return m_parent_number;
        }
        void set_parent_number(const parent_number& value)  {
            m_parent_number = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentReport_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentReport_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const parent_number & value) { set_parent_number(value); }


        SpdrParentReport_PKey() {}

        virtual ~SpdrParentReport_PKey() {
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
        bool IncludeParentNumber() const {
            return !(m_parent_number == 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeParentNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(10,m_parent_number);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeParentNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,10,m_parent_number);
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
                    case 10: {m_parent_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class SpdrParentReport_DirectedCounterParty {
        public:
        //using statements for all types used in this class
        using client_firm = spiderrock::protobuf::api::client_firm;
        using incl_excl = spiderrock::protobuf::api::incl_excl;

        private:
        client_firm m_client_firm{};
        incl_excl m_incl_excl{};

        public:
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        incl_excl get_incl_excl() const {
            return m_incl_excl;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_incl_excl(const incl_excl& value)  {
            m_incl_excl = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentReport_DirectedCounterParty::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentReport_DirectedCounterParty::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const client_firm & value) { set_client_firm(value); }
        void set(const incl_excl & value) { set_incl_excl(value); }


        SpdrParentReport_DirectedCounterParty() {}

        virtual ~SpdrParentReport_DirectedCounterParty() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(520,m_client_firm);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(523,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::InclExclDisclose>(m_incl_excl)));
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,520,static_cast<string>(m_client_firm));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,523,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::InclExclDisclose>(m_incl_excl)));
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
                    case 520: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 523: {m_incl_excl = static_cast<spiderrock::protobuf::api::InclExclDisclose>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    
    class SpdrParentReport_FaceLegs_V7 {
        public:
        //using statements for all types used in this class
        using last_leg_ref_id__v7 = spiderrock::protobuf::api::last_leg_ref_id__v7;
        using last_fill_dttm__v7 = spiderrock::protobuf::api::last_fill_dttm__v7;
        using cum_square_qty__v7 = spiderrock::protobuf::api::cum_square_qty__v7;
        using avg_square_prc__v7 = spiderrock::protobuf::api::avg_square_prc__v7;
        using last_square_dttm__v7 = spiderrock::protobuf::api::last_square_dttm__v7;
        using cum_partial_qty__v7 = spiderrock::protobuf::api::cum_partial_qty__v7;
        using ssale_flag__v7 = spiderrock::protobuf::api::ssale_flag__v7;
        using stock_cum_fill_qty__v7 = spiderrock::protobuf::api::stock_cum_fill_qty__v7;
        using stock_avg_fill_prc__v7 = spiderrock::protobuf::api::stock_avg_fill_prc__v7;
        using pos_type1__v7 = spiderrock::protobuf::api::pos_type1__v7;
        using ssale_flag1__v7 = spiderrock::protobuf::api::ssale_flag1__v7;
        using leg_cum_fill_qty1__v7 = spiderrock::protobuf::api::leg_cum_fill_qty1__v7;
        using leg_avg_fill_prc1__v7 = spiderrock::protobuf::api::leg_avg_fill_prc1__v7;
        using pos_type2__v7 = spiderrock::protobuf::api::pos_type2__v7;
        using ssale_flag2__v7 = spiderrock::protobuf::api::ssale_flag2__v7;
        using leg_cum_fill_qty2__v7 = spiderrock::protobuf::api::leg_cum_fill_qty2__v7;
        using leg_avg_fill_prc2__v7 = spiderrock::protobuf::api::leg_avg_fill_prc2__v7;
        using pos_type3__v7 = spiderrock::protobuf::api::pos_type3__v7;
        using ssale_flag3__v7 = spiderrock::protobuf::api::ssale_flag3__v7;
        using leg_cum_fill_qty3__v7 = spiderrock::protobuf::api::leg_cum_fill_qty3__v7;
        using leg_avg_fill_prc3__v7 = spiderrock::protobuf::api::leg_avg_fill_prc3__v7;
        using pos_type4__v7 = spiderrock::protobuf::api::pos_type4__v7;
        using ssale_flag4__v7 = spiderrock::protobuf::api::ssale_flag4__v7;
        using leg_cum_fill_qty4__v7 = spiderrock::protobuf::api::leg_cum_fill_qty4__v7;
        using leg_avg_fill_prc4__v7 = spiderrock::protobuf::api::leg_avg_fill_prc4__v7;
        using pos_type5__v7 = spiderrock::protobuf::api::pos_type5__v7;
        using ssale_flag5__v7 = spiderrock::protobuf::api::ssale_flag5__v7;
        using leg_cum_fill_qty5__v7 = spiderrock::protobuf::api::leg_cum_fill_qty5__v7;
        using leg_avg_fill_prc5__v7 = spiderrock::protobuf::api::leg_avg_fill_prc5__v7;
        using pos_type6__v7 = spiderrock::protobuf::api::pos_type6__v7;
        using ssale_flag6__v7 = spiderrock::protobuf::api::ssale_flag6__v7;
        using leg_cum_fill_qty6__v7 = spiderrock::protobuf::api::leg_cum_fill_qty6__v7;
        using leg_avg_fill_prc6__v7 = spiderrock::protobuf::api::leg_avg_fill_prc6__v7;

        private:
        last_leg_ref_id__v7 m_last_leg_ref_id__v7{};
        last_fill_dttm__v7 m_last_fill_dttm__v7{};
        cum_square_qty__v7 m_cum_square_qty__v7{};
        avg_square_prc__v7 m_avg_square_prc__v7{};
        last_square_dttm__v7 m_last_square_dttm__v7{};
        cum_partial_qty__v7 m_cum_partial_qty__v7{};
        ssale_flag__v7 m_ssale_flag__v7{};
        stock_cum_fill_qty__v7 m_stock_cum_fill_qty__v7{};
        stock_avg_fill_prc__v7 m_stock_avg_fill_prc__v7{};
        pos_type1__v7 m_pos_type1__v7{};
        ssale_flag1__v7 m_ssale_flag1__v7{};
        leg_cum_fill_qty1__v7 m_leg_cum_fill_qty1__v7{};
        leg_avg_fill_prc1__v7 m_leg_avg_fill_prc1__v7{};
        pos_type2__v7 m_pos_type2__v7{};
        ssale_flag2__v7 m_ssale_flag2__v7{};
        leg_cum_fill_qty2__v7 m_leg_cum_fill_qty2__v7{};
        leg_avg_fill_prc2__v7 m_leg_avg_fill_prc2__v7{};
        pos_type3__v7 m_pos_type3__v7{};
        ssale_flag3__v7 m_ssale_flag3__v7{};
        leg_cum_fill_qty3__v7 m_leg_cum_fill_qty3__v7{};
        leg_avg_fill_prc3__v7 m_leg_avg_fill_prc3__v7{};
        pos_type4__v7 m_pos_type4__v7{};
        ssale_flag4__v7 m_ssale_flag4__v7{};
        leg_cum_fill_qty4__v7 m_leg_cum_fill_qty4__v7{};
        leg_avg_fill_prc4__v7 m_leg_avg_fill_prc4__v7{};
        pos_type5__v7 m_pos_type5__v7{};
        ssale_flag5__v7 m_ssale_flag5__v7{};
        leg_cum_fill_qty5__v7 m_leg_cum_fill_qty5__v7{};
        leg_avg_fill_prc5__v7 m_leg_avg_fill_prc5__v7{};
        pos_type6__v7 m_pos_type6__v7{};
        ssale_flag6__v7 m_ssale_flag6__v7{};
        leg_cum_fill_qty6__v7 m_leg_cum_fill_qty6__v7{};
        leg_avg_fill_prc6__v7 m_leg_avg_fill_prc6__v7{};

        public:
        last_leg_ref_id__v7 get_last_leg_ref_id__v7() const {
            return m_last_leg_ref_id__v7;
        }
        last_fill_dttm__v7 get_last_fill_dttm__v7() const {
            return m_last_fill_dttm__v7;
        }
        cum_square_qty__v7 get_cum_square_qty__v7() const {
            return m_cum_square_qty__v7;
        }
        avg_square_prc__v7 get_avg_square_prc__v7() const {
            return m_avg_square_prc__v7;
        }
        last_square_dttm__v7 get_last_square_dttm__v7() const {
            return m_last_square_dttm__v7;
        }
        cum_partial_qty__v7 get_cum_partial_qty__v7() const {
            return m_cum_partial_qty__v7;
        }
        ssale_flag__v7 get_ssale_flag__v7() const {
            return m_ssale_flag__v7;
        }
        stock_cum_fill_qty__v7 get_stock_cum_fill_qty__v7() const {
            return m_stock_cum_fill_qty__v7;
        }
        stock_avg_fill_prc__v7 get_stock_avg_fill_prc__v7() const {
            return m_stock_avg_fill_prc__v7;
        }
        pos_type1__v7 get_pos_type1__v7() const {
            return m_pos_type1__v7;
        }
        ssale_flag1__v7 get_ssale_flag1__v7() const {
            return m_ssale_flag1__v7;
        }
        leg_cum_fill_qty1__v7 get_leg_cum_fill_qty1__v7() const {
            return m_leg_cum_fill_qty1__v7;
        }
        leg_avg_fill_prc1__v7 get_leg_avg_fill_prc1__v7() const {
            return m_leg_avg_fill_prc1__v7;
        }
        pos_type2__v7 get_pos_type2__v7() const {
            return m_pos_type2__v7;
        }
        ssale_flag2__v7 get_ssale_flag2__v7() const {
            return m_ssale_flag2__v7;
        }
        leg_cum_fill_qty2__v7 get_leg_cum_fill_qty2__v7() const {
            return m_leg_cum_fill_qty2__v7;
        }
        leg_avg_fill_prc2__v7 get_leg_avg_fill_prc2__v7() const {
            return m_leg_avg_fill_prc2__v7;
        }
        pos_type3__v7 get_pos_type3__v7() const {
            return m_pos_type3__v7;
        }
        ssale_flag3__v7 get_ssale_flag3__v7() const {
            return m_ssale_flag3__v7;
        }
        leg_cum_fill_qty3__v7 get_leg_cum_fill_qty3__v7() const {
            return m_leg_cum_fill_qty3__v7;
        }
        leg_avg_fill_prc3__v7 get_leg_avg_fill_prc3__v7() const {
            return m_leg_avg_fill_prc3__v7;
        }
        pos_type4__v7 get_pos_type4__v7() const {
            return m_pos_type4__v7;
        }
        ssale_flag4__v7 get_ssale_flag4__v7() const {
            return m_ssale_flag4__v7;
        }
        leg_cum_fill_qty4__v7 get_leg_cum_fill_qty4__v7() const {
            return m_leg_cum_fill_qty4__v7;
        }
        leg_avg_fill_prc4__v7 get_leg_avg_fill_prc4__v7() const {
            return m_leg_avg_fill_prc4__v7;
        }
        pos_type5__v7 get_pos_type5__v7() const {
            return m_pos_type5__v7;
        }
        ssale_flag5__v7 get_ssale_flag5__v7() const {
            return m_ssale_flag5__v7;
        }
        leg_cum_fill_qty5__v7 get_leg_cum_fill_qty5__v7() const {
            return m_leg_cum_fill_qty5__v7;
        }
        leg_avg_fill_prc5__v7 get_leg_avg_fill_prc5__v7() const {
            return m_leg_avg_fill_prc5__v7;
        }
        pos_type6__v7 get_pos_type6__v7() const {
            return m_pos_type6__v7;
        }
        ssale_flag6__v7 get_ssale_flag6__v7() const {
            return m_ssale_flag6__v7;
        }
        leg_cum_fill_qty6__v7 get_leg_cum_fill_qty6__v7() const {
            return m_leg_cum_fill_qty6__v7;
        }
        leg_avg_fill_prc6__v7 get_leg_avg_fill_prc6__v7() const {
            return m_leg_avg_fill_prc6__v7;
        }
        void set_last_leg_ref_id__v7(const last_leg_ref_id__v7& value)  {
            m_last_leg_ref_id__v7 = value;
        }
        void set_last_fill_dttm__v7(const last_fill_dttm__v7& value)  {
            m_last_fill_dttm__v7 = value;
        }
        void set_cum_square_qty__v7(const cum_square_qty__v7& value)  {
            m_cum_square_qty__v7 = value;
        }
        void set_avg_square_prc__v7(const avg_square_prc__v7& value)  {
            m_avg_square_prc__v7 = value;
        }
        void set_last_square_dttm__v7(const last_square_dttm__v7& value)  {
            m_last_square_dttm__v7 = value;
        }
        void set_cum_partial_qty__v7(const cum_partial_qty__v7& value)  {
            m_cum_partial_qty__v7 = value;
        }
        void set_ssale_flag__v7(const ssale_flag__v7& value)  {
            m_ssale_flag__v7 = value;
        }
        void set_stock_cum_fill_qty__v7(const stock_cum_fill_qty__v7& value)  {
            m_stock_cum_fill_qty__v7 = value;
        }
        void set_stock_avg_fill_prc__v7(const stock_avg_fill_prc__v7& value)  {
            m_stock_avg_fill_prc__v7 = value;
        }
        void set_pos_type1__v7(const pos_type1__v7& value)  {
            m_pos_type1__v7 = value;
        }
        void set_ssale_flag1__v7(const ssale_flag1__v7& value)  {
            m_ssale_flag1__v7 = value;
        }
        void set_leg_cum_fill_qty1__v7(const leg_cum_fill_qty1__v7& value)  {
            m_leg_cum_fill_qty1__v7 = value;
        }
        void set_leg_avg_fill_prc1__v7(const leg_avg_fill_prc1__v7& value)  {
            m_leg_avg_fill_prc1__v7 = value;
        }
        void set_pos_type2__v7(const pos_type2__v7& value)  {
            m_pos_type2__v7 = value;
        }
        void set_ssale_flag2__v7(const ssale_flag2__v7& value)  {
            m_ssale_flag2__v7 = value;
        }
        void set_leg_cum_fill_qty2__v7(const leg_cum_fill_qty2__v7& value)  {
            m_leg_cum_fill_qty2__v7 = value;
        }
        void set_leg_avg_fill_prc2__v7(const leg_avg_fill_prc2__v7& value)  {
            m_leg_avg_fill_prc2__v7 = value;
        }
        void set_pos_type3__v7(const pos_type3__v7& value)  {
            m_pos_type3__v7 = value;
        }
        void set_ssale_flag3__v7(const ssale_flag3__v7& value)  {
            m_ssale_flag3__v7 = value;
        }
        void set_leg_cum_fill_qty3__v7(const leg_cum_fill_qty3__v7& value)  {
            m_leg_cum_fill_qty3__v7 = value;
        }
        void set_leg_avg_fill_prc3__v7(const leg_avg_fill_prc3__v7& value)  {
            m_leg_avg_fill_prc3__v7 = value;
        }
        void set_pos_type4__v7(const pos_type4__v7& value)  {
            m_pos_type4__v7 = value;
        }
        void set_ssale_flag4__v7(const ssale_flag4__v7& value)  {
            m_ssale_flag4__v7 = value;
        }
        void set_leg_cum_fill_qty4__v7(const leg_cum_fill_qty4__v7& value)  {
            m_leg_cum_fill_qty4__v7 = value;
        }
        void set_leg_avg_fill_prc4__v7(const leg_avg_fill_prc4__v7& value)  {
            m_leg_avg_fill_prc4__v7 = value;
        }
        void set_pos_type5__v7(const pos_type5__v7& value)  {
            m_pos_type5__v7 = value;
        }
        void set_ssale_flag5__v7(const ssale_flag5__v7& value)  {
            m_ssale_flag5__v7 = value;
        }
        void set_leg_cum_fill_qty5__v7(const leg_cum_fill_qty5__v7& value)  {
            m_leg_cum_fill_qty5__v7 = value;
        }
        void set_leg_avg_fill_prc5__v7(const leg_avg_fill_prc5__v7& value)  {
            m_leg_avg_fill_prc5__v7 = value;
        }
        void set_pos_type6__v7(const pos_type6__v7& value)  {
            m_pos_type6__v7 = value;
        }
        void set_ssale_flag6__v7(const ssale_flag6__v7& value)  {
            m_ssale_flag6__v7 = value;
        }
        void set_leg_cum_fill_qty6__v7(const leg_cum_fill_qty6__v7& value)  {
            m_leg_cum_fill_qty6__v7 = value;
        }
        void set_leg_avg_fill_prc6__v7(const leg_avg_fill_prc6__v7& value)  {
            m_leg_avg_fill_prc6__v7 = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentReport_FaceLegs_V7::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentReport_FaceLegs_V7::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const last_leg_ref_id__v7 & value) { set_last_leg_ref_id__v7(value); }
        void set(const last_fill_dttm__v7 & value) { set_last_fill_dttm__v7(value); }
        void set(const cum_square_qty__v7 & value) { set_cum_square_qty__v7(value); }
        void set(const avg_square_prc__v7 & value) { set_avg_square_prc__v7(value); }
        void set(const last_square_dttm__v7 & value) { set_last_square_dttm__v7(value); }
        void set(const cum_partial_qty__v7 & value) { set_cum_partial_qty__v7(value); }
        void set(const ssale_flag__v7 & value) { set_ssale_flag__v7(value); }
        void set(const stock_cum_fill_qty__v7 & value) { set_stock_cum_fill_qty__v7(value); }
        void set(const stock_avg_fill_prc__v7 & value) { set_stock_avg_fill_prc__v7(value); }
        void set(const pos_type1__v7 & value) { set_pos_type1__v7(value); }
        void set(const ssale_flag1__v7 & value) { set_ssale_flag1__v7(value); }
        void set(const leg_cum_fill_qty1__v7 & value) { set_leg_cum_fill_qty1__v7(value); }
        void set(const leg_avg_fill_prc1__v7 & value) { set_leg_avg_fill_prc1__v7(value); }
        void set(const pos_type2__v7 & value) { set_pos_type2__v7(value); }
        void set(const ssale_flag2__v7 & value) { set_ssale_flag2__v7(value); }
        void set(const leg_cum_fill_qty2__v7 & value) { set_leg_cum_fill_qty2__v7(value); }
        void set(const leg_avg_fill_prc2__v7 & value) { set_leg_avg_fill_prc2__v7(value); }
        void set(const pos_type3__v7 & value) { set_pos_type3__v7(value); }
        void set(const ssale_flag3__v7 & value) { set_ssale_flag3__v7(value); }
        void set(const leg_cum_fill_qty3__v7 & value) { set_leg_cum_fill_qty3__v7(value); }
        void set(const leg_avg_fill_prc3__v7 & value) { set_leg_avg_fill_prc3__v7(value); }
        void set(const pos_type4__v7 & value) { set_pos_type4__v7(value); }
        void set(const ssale_flag4__v7 & value) { set_ssale_flag4__v7(value); }
        void set(const leg_cum_fill_qty4__v7 & value) { set_leg_cum_fill_qty4__v7(value); }
        void set(const leg_avg_fill_prc4__v7 & value) { set_leg_avg_fill_prc4__v7(value); }
        void set(const pos_type5__v7 & value) { set_pos_type5__v7(value); }
        void set(const ssale_flag5__v7 & value) { set_ssale_flag5__v7(value); }
        void set(const leg_cum_fill_qty5__v7 & value) { set_leg_cum_fill_qty5__v7(value); }
        void set(const leg_avg_fill_prc5__v7 & value) { set_leg_avg_fill_prc5__v7(value); }
        void set(const pos_type6__v7 & value) { set_pos_type6__v7(value); }
        void set(const ssale_flag6__v7 & value) { set_ssale_flag6__v7(value); }
        void set(const leg_cum_fill_qty6__v7 & value) { set_leg_cum_fill_qty6__v7(value); }
        void set(const leg_avg_fill_prc6__v7 & value) { set_leg_avg_fill_prc6__v7(value); }


        SpdrParentReport_FaceLegs_V7() {}

        virtual ~SpdrParentReport_FaceLegs_V7() {
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
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(5014,m_last_leg_ref_id__v7);
            totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(5015, m_last_fill_dttm__v7);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(5016,m_cum_square_qty__v7);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(5017,m_avg_square_prc__v7);
            totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(5018, m_last_square_dttm__v7);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(5019,m_cum_partial_qty__v7);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5020,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag__v7)));
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(5021,m_stock_cum_fill_qty__v7);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(5022,m_stock_avg_fill_prc__v7);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5023,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type1__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5024,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag1__v7)));
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(5025,m_leg_cum_fill_qty1__v7);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(5026,m_leg_avg_fill_prc1__v7);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5027,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type2__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5028,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag2__v7)));
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(5029,m_leg_cum_fill_qty2__v7);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(5030,m_leg_avg_fill_prc2__v7);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5031,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type3__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5032,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag3__v7)));
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(5033,m_leg_cum_fill_qty3__v7);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(5034,m_leg_avg_fill_prc3__v7);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5035,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type4__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5036,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag4__v7)));
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(5037,m_leg_cum_fill_qty4__v7);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(5038,m_leg_avg_fill_prc4__v7);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5039,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type5__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5040,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag5__v7)));
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(5041,m_leg_cum_fill_qty5__v7);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(5042,m_leg_avg_fill_prc5__v7);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5043,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type6__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5044,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag6__v7)));
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(5045,m_leg_cum_fill_qty6__v7);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(5046,m_leg_avg_fill_prc6__v7);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,5014,m_last_leg_ref_id__v7);
            dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 5015, m_last_fill_dttm__v7);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,5016,m_cum_square_qty__v7);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,5017,m_avg_square_prc__v7);
            dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 5018, m_last_square_dttm__v7);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,5019,m_cum_partial_qty__v7);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5020,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,5021,m_stock_cum_fill_qty__v7);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,5022,m_stock_avg_fill_prc__v7);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5023,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type1__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5024,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag1__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,5025,m_leg_cum_fill_qty1__v7);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,5026,m_leg_avg_fill_prc1__v7);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5027,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type2__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5028,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag2__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,5029,m_leg_cum_fill_qty2__v7);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,5030,m_leg_avg_fill_prc2__v7);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5031,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type3__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5032,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag3__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,5033,m_leg_cum_fill_qty3__v7);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,5034,m_leg_avg_fill_prc3__v7);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5035,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type4__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5036,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag4__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,5037,m_leg_cum_fill_qty4__v7);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,5038,m_leg_avg_fill_prc4__v7);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5039,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type5__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5040,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag5__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,5041,m_leg_cum_fill_qty5__v7);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,5042,m_leg_avg_fill_prc5__v7);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5043,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type6__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5044,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag6__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,5045,m_leg_cum_fill_qty6__v7);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,5046,m_leg_avg_fill_prc6__v7);
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
                    case 5014: {m_last_leg_ref_id__v7 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 5015: {
                        m_last_fill_dttm__v7 = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        break;
                    }
                    case 5016: {m_cum_square_qty__v7 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 5017: {m_avg_square_prc__v7 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 5018: {
                        m_last_square_dttm__v7 = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        break;
                    }
                    case 5019: {m_cum_partial_qty__v7 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 5020: {m_ssale_flag__v7 = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 5021: {m_stock_cum_fill_qty__v7 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 5022: {m_stock_avg_fill_prc__v7 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 5023: {m_pos_type1__v7 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 5024: {m_ssale_flag1__v7 = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 5025: {m_leg_cum_fill_qty1__v7 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 5026: {m_leg_avg_fill_prc1__v7 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 5027: {m_pos_type2__v7 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 5028: {m_ssale_flag2__v7 = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 5029: {m_leg_cum_fill_qty2__v7 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 5030: {m_leg_avg_fill_prc2__v7 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 5031: {m_pos_type3__v7 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 5032: {m_ssale_flag3__v7 = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 5033: {m_leg_cum_fill_qty3__v7 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 5034: {m_leg_avg_fill_prc3__v7 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 5035: {m_pos_type4__v7 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 5036: {m_ssale_flag4__v7 = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 5037: {m_leg_cum_fill_qty4__v7 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 5038: {m_leg_avg_fill_prc4__v7 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 5039: {m_pos_type5__v7 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 5040: {m_ssale_flag5__v7 = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 5041: {m_leg_cum_fill_qty5__v7 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 5042: {m_leg_avg_fill_prc5__v7 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 5043: {m_pos_type6__v7 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 5044: {m_ssale_flag6__v7 = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 5045: {m_leg_cum_fill_qty6__v7 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 5046: {m_leg_avg_fill_prc6__v7 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class SpdrParentReport_FaceSide_V7 {
        public:
        //using statements for all types used in this class
        using face_id__v7 = spiderrock::protobuf::api::face_id__v7;
        using alt_order_id__v7 = spiderrock::protobuf::api::alt_order_id__v7;
        using accnt__v7 = spiderrock::protobuf::api::accnt__v7;
        using client_firm__v7 = spiderrock::protobuf::api::client_firm__v7;
        using alt_accnt__v7 = spiderrock::protobuf::api::alt_accnt__v7;
        using firm_type__v7 = spiderrock::protobuf::api::firm_type__v7;
        using order_capacity__v7 = spiderrock::protobuf::api::order_capacity__v7;
        using ssale_flag__v7 = spiderrock::protobuf::api::ssale_flag__v7;
        using position_type__v7 = spiderrock::protobuf::api::position_type__v7;
        using firm_position__v7 = spiderrock::protobuf::api::firm_position__v7;
        using open_sell_sh__v7 = spiderrock::protobuf::api::open_sell_sh__v7;
        using locate_quan__v7 = spiderrock::protobuf::api::locate_quan__v7;
        using locate_firm__v7 = spiderrock::protobuf::api::locate_firm__v7;
        using locate_pool__v7 = spiderrock::protobuf::api::locate_pool__v7;
        using locate_source__v7 = spiderrock::protobuf::api::locate_source__v7;
        using no_cross_group__v7 = spiderrock::protobuf::api::no_cross_group__v7;
        using exch_trader_id__v7 = spiderrock::protobuf::api::exch_trader_id__v7;
        using large_trader_id__v7 = spiderrock::protobuf::api::large_trader_id__v7;
        using trading_location__v7 = spiderrock::protobuf::api::trading_location__v7;
        using clearing_firm__v7 = spiderrock::protobuf::api::clearing_firm__v7;
        using clearing_accnt__v7 = spiderrock::protobuf::api::clearing_accnt__v7;
        using clearing_flip_type__v7 = spiderrock::protobuf::api::clearing_flip_type__v7;
        using clearing_flip_firm__v7 = spiderrock::protobuf::api::clearing_flip_firm__v7;
        using clearing_flip_accnt__v7 = spiderrock::protobuf::api::clearing_flip_accnt__v7;
        using cat_src_brkr_imid__v7 = spiderrock::protobuf::api::cat_src_brkr_imid__v7;
        using cat_src_accnt_type__v7 = spiderrock::protobuf::api::cat_src_accnt_type__v7;
        using cat_src_firm_type__v7 = spiderrock::protobuf::api::cat_src_firm_type__v7;
        using cum_fill_quantity__v7 = spiderrock::protobuf::api::cum_fill_quantity__v7;
        using avg_fill_price__v7 = spiderrock::protobuf::api::avg_fill_price__v7;
        using leaves_qty__v7 = spiderrock::protobuf::api::leaves_qty__v7;
        using last_fill_number__v7 = spiderrock::protobuf::api::last_fill_number__v7;
        using last_fill_dttm__v7 = spiderrock::protobuf::api::last_fill_dttm__v7;

        private:
        face_id__v7 m_face_id__v7{};
        alt_order_id__v7 m_alt_order_id__v7{};
        accnt__v7 m_accnt__v7{};
        client_firm__v7 m_client_firm__v7{};
        alt_accnt__v7 m_alt_accnt__v7{};
        firm_type__v7 m_firm_type__v7{};
        order_capacity__v7 m_order_capacity__v7{};
        ssale_flag__v7 m_ssale_flag__v7{};
        position_type__v7 m_position_type__v7{};
        firm_position__v7 m_firm_position__v7{};
        open_sell_sh__v7 m_open_sell_sh__v7{};
        locate_quan__v7 m_locate_quan__v7{};
        locate_firm__v7 m_locate_firm__v7{};
        locate_pool__v7 m_locate_pool__v7{};
        locate_source__v7 m_locate_source__v7{};
        no_cross_group__v7 m_no_cross_group__v7{};
        exch_trader_id__v7 m_exch_trader_id__v7{};
        large_trader_id__v7 m_large_trader_id__v7{};
        trading_location__v7 m_trading_location__v7{};
        clearing_firm__v7 m_clearing_firm__v7{};
        clearing_accnt__v7 m_clearing_accnt__v7{};
        clearing_flip_type__v7 m_clearing_flip_type__v7{};
        clearing_flip_firm__v7 m_clearing_flip_firm__v7{};
        clearing_flip_accnt__v7 m_clearing_flip_accnt__v7{};
        cat_src_brkr_imid__v7 m_cat_src_brkr_imid__v7{};
        cat_src_accnt_type__v7 m_cat_src_accnt_type__v7{};
        cat_src_firm_type__v7 m_cat_src_firm_type__v7{};
        cum_fill_quantity__v7 m_cum_fill_quantity__v7{};
        avg_fill_price__v7 m_avg_fill_price__v7{};
        leaves_qty__v7 m_leaves_qty__v7{};
        last_fill_number__v7 m_last_fill_number__v7{};
        last_fill_dttm__v7 m_last_fill_dttm__v7{};

        public:
        face_id__v7 get_face_id__v7() const {
            return m_face_id__v7;
        }
        alt_order_id__v7 get_alt_order_id__v7() const {
            return m_alt_order_id__v7;
        }
        accnt__v7 get_accnt__v7() const {
            return m_accnt__v7;
        }
        client_firm__v7 get_client_firm__v7() const {
            return m_client_firm__v7;
        }
        alt_accnt__v7 get_alt_accnt__v7() const {
            return m_alt_accnt__v7;
        }
        firm_type__v7 get_firm_type__v7() const {
            return m_firm_type__v7;
        }
        order_capacity__v7 get_order_capacity__v7() const {
            return m_order_capacity__v7;
        }
        ssale_flag__v7 get_ssale_flag__v7() const {
            return m_ssale_flag__v7;
        }
        position_type__v7 get_position_type__v7() const {
            return m_position_type__v7;
        }
        firm_position__v7 get_firm_position__v7() const {
            return m_firm_position__v7;
        }
        open_sell_sh__v7 get_open_sell_sh__v7() const {
            return m_open_sell_sh__v7;
        }
        locate_quan__v7 get_locate_quan__v7() const {
            return m_locate_quan__v7;
        }
        locate_firm__v7 get_locate_firm__v7() const {
            return m_locate_firm__v7;
        }
        locate_pool__v7 get_locate_pool__v7() const {
            return m_locate_pool__v7;
        }
        locate_source__v7 get_locate_source__v7() const {
            return m_locate_source__v7;
        }
        no_cross_group__v7 get_no_cross_group__v7() const {
            return m_no_cross_group__v7;
        }
        exch_trader_id__v7 get_exch_trader_id__v7() const {
            return m_exch_trader_id__v7;
        }
        large_trader_id__v7 get_large_trader_id__v7() const {
            return m_large_trader_id__v7;
        }
        trading_location__v7 get_trading_location__v7() const {
            return m_trading_location__v7;
        }
        clearing_firm__v7 get_clearing_firm__v7() const {
            return m_clearing_firm__v7;
        }
        clearing_accnt__v7 get_clearing_accnt__v7() const {
            return m_clearing_accnt__v7;
        }
        clearing_flip_type__v7 get_clearing_flip_type__v7() const {
            return m_clearing_flip_type__v7;
        }
        clearing_flip_firm__v7 get_clearing_flip_firm__v7() const {
            return m_clearing_flip_firm__v7;
        }
        clearing_flip_accnt__v7 get_clearing_flip_accnt__v7() const {
            return m_clearing_flip_accnt__v7;
        }
        cat_src_brkr_imid__v7 get_cat_src_brkr_imid__v7() const {
            return m_cat_src_brkr_imid__v7;
        }
        cat_src_accnt_type__v7 get_cat_src_accnt_type__v7() const {
            return m_cat_src_accnt_type__v7;
        }
        cat_src_firm_type__v7 get_cat_src_firm_type__v7() const {
            return m_cat_src_firm_type__v7;
        }
        cum_fill_quantity__v7 get_cum_fill_quantity__v7() const {
            return m_cum_fill_quantity__v7;
        }
        avg_fill_price__v7 get_avg_fill_price__v7() const {
            return m_avg_fill_price__v7;
        }
        leaves_qty__v7 get_leaves_qty__v7() const {
            return m_leaves_qty__v7;
        }
        last_fill_number__v7 get_last_fill_number__v7() const {
            return m_last_fill_number__v7;
        }
        last_fill_dttm__v7 get_last_fill_dttm__v7() const {
            return m_last_fill_dttm__v7;
        }
        void set_face_id__v7(const face_id__v7& value)  {
            m_face_id__v7 = value;
        }
        void set_alt_order_id__v7(const alt_order_id__v7& value)  {
            m_alt_order_id__v7 = value;
        }
        void set_accnt__v7(const accnt__v7& value)  {
            m_accnt__v7 = value;
        }
        void set_client_firm__v7(const client_firm__v7& value)  {
            m_client_firm__v7 = value;
        }
        void set_alt_accnt__v7(const alt_accnt__v7& value)  {
            m_alt_accnt__v7 = value;
        }
        void set_firm_type__v7(const firm_type__v7& value)  {
            m_firm_type__v7 = value;
        }
        void set_order_capacity__v7(const order_capacity__v7& value)  {
            m_order_capacity__v7 = value;
        }
        void set_ssale_flag__v7(const ssale_flag__v7& value)  {
            m_ssale_flag__v7 = value;
        }
        void set_position_type__v7(const position_type__v7& value)  {
            m_position_type__v7 = value;
        }
        void set_firm_position__v7(const firm_position__v7& value)  {
            m_firm_position__v7 = value;
        }
        void set_open_sell_sh__v7(const open_sell_sh__v7& value)  {
            m_open_sell_sh__v7 = value;
        }
        void set_locate_quan__v7(const locate_quan__v7& value)  {
            m_locate_quan__v7 = value;
        }
        void set_locate_firm__v7(const locate_firm__v7& value)  {
            m_locate_firm__v7 = value;
        }
        void set_locate_pool__v7(const locate_pool__v7& value)  {
            m_locate_pool__v7 = value;
        }
        void set_locate_source__v7(const locate_source__v7& value)  {
            m_locate_source__v7 = value;
        }
        void set_no_cross_group__v7(const no_cross_group__v7& value)  {
            m_no_cross_group__v7 = value;
        }
        void set_exch_trader_id__v7(const exch_trader_id__v7& value)  {
            m_exch_trader_id__v7 = value;
        }
        void set_large_trader_id__v7(const large_trader_id__v7& value)  {
            m_large_trader_id__v7 = value;
        }
        void set_trading_location__v7(const trading_location__v7& value)  {
            m_trading_location__v7 = value;
        }
        void set_clearing_firm__v7(const clearing_firm__v7& value)  {
            m_clearing_firm__v7 = value;
        }
        void set_clearing_accnt__v7(const clearing_accnt__v7& value)  {
            m_clearing_accnt__v7 = value;
        }
        void set_clearing_flip_type__v7(const clearing_flip_type__v7& value)  {
            m_clearing_flip_type__v7 = value;
        }
        void set_clearing_flip_firm__v7(const clearing_flip_firm__v7& value)  {
            m_clearing_flip_firm__v7 = value;
        }
        void set_clearing_flip_accnt__v7(const clearing_flip_accnt__v7& value)  {
            m_clearing_flip_accnt__v7 = value;
        }
        void set_cat_src_brkr_imid__v7(const cat_src_brkr_imid__v7& value)  {
            m_cat_src_brkr_imid__v7 = value;
        }
        void set_cat_src_accnt_type__v7(const cat_src_accnt_type__v7& value)  {
            m_cat_src_accnt_type__v7 = value;
        }
        void set_cat_src_firm_type__v7(const cat_src_firm_type__v7& value)  {
            m_cat_src_firm_type__v7 = value;
        }
        void set_cum_fill_quantity__v7(const cum_fill_quantity__v7& value)  {
            m_cum_fill_quantity__v7 = value;
        }
        void set_avg_fill_price__v7(const avg_fill_price__v7& value)  {
            m_avg_fill_price__v7 = value;
        }
        void set_leaves_qty__v7(const leaves_qty__v7& value)  {
            m_leaves_qty__v7 = value;
        }
        void set_last_fill_number__v7(const last_fill_number__v7& value)  {
            m_last_fill_number__v7 = value;
        }
        void set_last_fill_dttm__v7(const last_fill_dttm__v7& value)  {
            m_last_fill_dttm__v7 = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentReport_FaceSide_V7::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentReport_FaceSide_V7::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const face_id__v7 & value) { set_face_id__v7(value); }
        void set(const alt_order_id__v7 & value) { set_alt_order_id__v7(value); }
        void set(const accnt__v7 & value) { set_accnt__v7(value); }
        void set(const client_firm__v7 & value) { set_client_firm__v7(value); }
        void set(const alt_accnt__v7 & value) { set_alt_accnt__v7(value); }
        void set(const firm_type__v7 & value) { set_firm_type__v7(value); }
        void set(const order_capacity__v7 & value) { set_order_capacity__v7(value); }
        void set(const ssale_flag__v7 & value) { set_ssale_flag__v7(value); }
        void set(const position_type__v7 & value) { set_position_type__v7(value); }
        void set(const firm_position__v7 & value) { set_firm_position__v7(value); }
        void set(const open_sell_sh__v7 & value) { set_open_sell_sh__v7(value); }
        void set(const locate_quan__v7 & value) { set_locate_quan__v7(value); }
        void set(const locate_firm__v7 & value) { set_locate_firm__v7(value); }
        void set(const locate_pool__v7 & value) { set_locate_pool__v7(value); }
        void set(const locate_source__v7 & value) { set_locate_source__v7(value); }
        void set(const no_cross_group__v7 & value) { set_no_cross_group__v7(value); }
        void set(const exch_trader_id__v7 & value) { set_exch_trader_id__v7(value); }
        void set(const large_trader_id__v7 & value) { set_large_trader_id__v7(value); }
        void set(const trading_location__v7 & value) { set_trading_location__v7(value); }
        void set(const clearing_firm__v7 & value) { set_clearing_firm__v7(value); }
        void set(const clearing_accnt__v7 & value) { set_clearing_accnt__v7(value); }
        void set(const clearing_flip_type__v7 & value) { set_clearing_flip_type__v7(value); }
        void set(const clearing_flip_firm__v7 & value) { set_clearing_flip_firm__v7(value); }
        void set(const clearing_flip_accnt__v7 & value) { set_clearing_flip_accnt__v7(value); }
        void set(const cat_src_brkr_imid__v7 & value) { set_cat_src_brkr_imid__v7(value); }
        void set(const cat_src_accnt_type__v7 & value) { set_cat_src_accnt_type__v7(value); }
        void set(const cat_src_firm_type__v7 & value) { set_cat_src_firm_type__v7(value); }
        void set(const cum_fill_quantity__v7 & value) { set_cum_fill_quantity__v7(value); }
        void set(const avg_fill_price__v7 & value) { set_avg_fill_price__v7(value); }
        void set(const leaves_qty__v7 & value) { set_leaves_qty__v7(value); }
        void set(const last_fill_number__v7 & value) { set_last_fill_number__v7(value); }
        void set(const last_fill_dttm__v7 & value) { set_last_fill_dttm__v7(value); }


        SpdrParentReport_FaceSide_V7() {}

        virtual ~SpdrParentReport_FaceSide_V7() {
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
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(5048,m_face_id__v7);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5049,m_alt_order_id__v7);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5050,m_accnt__v7);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5051,m_client_firm__v7);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5052,m_alt_accnt__v7);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5053,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_firm_type__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5054,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCapacity>(m_order_capacity__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5055,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5056,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type__v7)));
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(5057,m_firm_position__v7);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(5058,m_open_sell_sh__v7);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(5059,m_locate_quan__v7);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5060,m_locate_firm__v7);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5061,m_locate_pool__v7);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5062,m_locate_source__v7);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5063,m_no_cross_group__v7);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5064,m_exch_trader_id__v7);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5065,m_large_trader_id__v7);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5066,m_trading_location__v7);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5067,m_clearing_firm__v7);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5068,m_clearing_accnt__v7);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5069,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlipType>(m_clearing_flip_type__v7)));
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5070,m_clearing_flip_firm__v7);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5071,m_clearing_flip_accnt__v7);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5072,m_cat_src_brkr_imid__v7);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5073,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CatAccntType>(m_cat_src_accnt_type__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5074,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CatFirmType>(m_cat_src_firm_type__v7)));
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(5075,m_cum_fill_quantity__v7);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(5076,m_avg_fill_price__v7);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(5077,m_leaves_qty__v7);
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(5078,m_last_fill_number__v7);
            totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(5079, m_last_fill_dttm__v7);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,5048,m_face_id__v7);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5049,static_cast<string>(m_alt_order_id__v7));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5050,static_cast<string>(m_accnt__v7));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5051,static_cast<string>(m_client_firm__v7));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5052,static_cast<string>(m_alt_accnt__v7));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5053,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_firm_type__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5054,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCapacity>(m_order_capacity__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5055,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5056,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,5057,m_firm_position__v7);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,5058,m_open_sell_sh__v7);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,5059,m_locate_quan__v7);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5060,static_cast<string>(m_locate_firm__v7));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5061,static_cast<string>(m_locate_pool__v7));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5062,static_cast<string>(m_locate_source__v7));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5063,static_cast<string>(m_no_cross_group__v7));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5064,static_cast<string>(m_exch_trader_id__v7));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5065,static_cast<string>(m_large_trader_id__v7));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5066,static_cast<string>(m_trading_location__v7));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5067,static_cast<string>(m_clearing_firm__v7));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5068,static_cast<string>(m_clearing_accnt__v7));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5069,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlipType>(m_clearing_flip_type__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5070,static_cast<string>(m_clearing_flip_firm__v7));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5071,static_cast<string>(m_clearing_flip_accnt__v7));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5072,static_cast<string>(m_cat_src_brkr_imid__v7));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5073,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CatAccntType>(m_cat_src_accnt_type__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5074,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CatFirmType>(m_cat_src_firm_type__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,5075,m_cum_fill_quantity__v7);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,5076,m_avg_fill_price__v7);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,5077,m_leaves_qty__v7);
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,5078,m_last_fill_number__v7);
            dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 5079, m_last_fill_dttm__v7);
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
                    case 5048: {m_face_id__v7 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 5049: {m_alt_order_id__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 5050: {m_accnt__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 5051: {m_client_firm__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 5052: {m_alt_accnt__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 5053: {m_firm_type__v7 = static_cast<spiderrock::protobuf::api::FirmType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 5054: {m_order_capacity__v7 = static_cast<spiderrock::protobuf::api::OrderCapacity>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 5055: {m_ssale_flag__v7 = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 5056: {m_position_type__v7 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 5057: {m_firm_position__v7 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 5058: {m_open_sell_sh__v7 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 5059: {m_locate_quan__v7 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 5060: {m_locate_firm__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 5061: {m_locate_pool__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 5062: {m_locate_source__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 5063: {m_no_cross_group__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 5064: {m_exch_trader_id__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 5065: {m_large_trader_id__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 5066: {m_trading_location__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 5067: {m_clearing_firm__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 5068: {m_clearing_accnt__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 5069: {m_clearing_flip_type__v7 = static_cast<spiderrock::protobuf::api::FlipType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 5070: {m_clearing_flip_firm__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 5071: {m_clearing_flip_accnt__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 5072: {m_cat_src_brkr_imid__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 5073: {m_cat_src_accnt_type__v7 = static_cast<spiderrock::protobuf::api::CatAccntType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 5074: {m_cat_src_firm_type__v7 = static_cast<spiderrock::protobuf::api::CatFirmType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 5075: {m_cum_fill_quantity__v7 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 5076: {m_avg_fill_price__v7 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 5077: {m_leaves_qty__v7 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 5078: {m_last_fill_number__v7 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 5079: {
                        m_last_fill_dttm__v7 = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class SpdrParentReport_OrderLegs {
        public:
        //using statements for all types used in this class
        using last_leg_ref_id = spiderrock::protobuf::api::last_leg_ref_id;
        using last_fill_dttm = spiderrock::protobuf::api::last_fill_dttm;
        using cum_square_qty = spiderrock::protobuf::api::cum_square_qty;
        using avg_square_prc = spiderrock::protobuf::api::avg_square_prc;
        using last_square_dttm = spiderrock::protobuf::api::last_square_dttm;
        using cum_partial_qty = spiderrock::protobuf::api::cum_partial_qty;
        using review_cum_square_qty = spiderrock::protobuf::api::review_cum_square_qty;
        using review_avg_square_prc = spiderrock::protobuf::api::review_avg_square_prc;
        using review_last_square_dttm = spiderrock::protobuf::api::review_last_square_dttm;
        using review_cum_partial_qty = spiderrock::protobuf::api::review_cum_partial_qty;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using stock_side = spiderrock::protobuf::api::stock_side;
        using stock_shares = spiderrock::protobuf::api::stock_shares;
        using stock_leg_id = spiderrock::protobuf::api::stock_leg_id;
        using alt_stk_leg_id = spiderrock::protobuf::api::alt_stk_leg_id;
        using review_stk_leg_id = spiderrock::protobuf::api::review_stk_leg_id;
        using review_stk_leg_alt_id = spiderrock::protobuf::api::review_stk_leg_alt_id;
        using ssale_flag = spiderrock::protobuf::api::ssale_flag;
        using stock_cum_fill_qty = spiderrock::protobuf::api::stock_cum_fill_qty;
        using stock_avg_fill_prc = spiderrock::protobuf::api::stock_avg_fill_prc;
        using stock_review_cum_fill_qty = spiderrock::protobuf::api::stock_review_cum_fill_qty;
        using stock_review_avg_fill_prc = spiderrock::protobuf::api::stock_review_avg_fill_prc;
        using num_legs = spiderrock::protobuf::api::num_legs;
        using sec_key1 = spiderrock::protobuf::api::sec_key1;
        using sec_type1 = spiderrock::protobuf::api::sec_type1;
        using mult1 = spiderrock::protobuf::api::mult1;
        using side1 = spiderrock::protobuf::api::side1;
        using leg_id1 = spiderrock::protobuf::api::leg_id1;
        using alt_leg_id1 = spiderrock::protobuf::api::alt_leg_id1;
        using review_leg_id1 = spiderrock::protobuf::api::review_leg_id1;
        using review_leg_alt_id1 = spiderrock::protobuf::api::review_leg_alt_id1;
        using pos_type1 = spiderrock::protobuf::api::pos_type1;
        using ssale_flag1 = spiderrock::protobuf::api::ssale_flag1;
        using leg_cum_fill_qty1 = spiderrock::protobuf::api::leg_cum_fill_qty1;
        using leg_avg_fill_prc1 = spiderrock::protobuf::api::leg_avg_fill_prc1;
        using leg_review_cum_fill_qty1 = spiderrock::protobuf::api::leg_review_cum_fill_qty1;
        using leg_review_avg_fill_prc1 = spiderrock::protobuf::api::leg_review_avg_fill_prc1;
        using sec_key2 = spiderrock::protobuf::api::sec_key2;
        using sec_type2 = spiderrock::protobuf::api::sec_type2;
        using mult2 = spiderrock::protobuf::api::mult2;
        using side2 = spiderrock::protobuf::api::side2;
        using leg_id2 = spiderrock::protobuf::api::leg_id2;
        using alt_leg_id2 = spiderrock::protobuf::api::alt_leg_id2;
        using review_leg_id2 = spiderrock::protobuf::api::review_leg_id2;
        using review_leg_alt_id2 = spiderrock::protobuf::api::review_leg_alt_id2;
        using pos_type2 = spiderrock::protobuf::api::pos_type2;
        using ssale_flag2 = spiderrock::protobuf::api::ssale_flag2;
        using leg_cum_fill_qty2 = spiderrock::protobuf::api::leg_cum_fill_qty2;
        using leg_avg_fill_prc2 = spiderrock::protobuf::api::leg_avg_fill_prc2;
        using leg_review_cum_fill_qty2 = spiderrock::protobuf::api::leg_review_cum_fill_qty2;
        using leg_review_avg_fill_prc2 = spiderrock::protobuf::api::leg_review_avg_fill_prc2;
        using sec_key3 = spiderrock::protobuf::api::sec_key3;
        using sec_type3 = spiderrock::protobuf::api::sec_type3;
        using mult3 = spiderrock::protobuf::api::mult3;
        using side3 = spiderrock::protobuf::api::side3;
        using leg_id3 = spiderrock::protobuf::api::leg_id3;
        using alt_leg_id3 = spiderrock::protobuf::api::alt_leg_id3;
        using review_leg_id3 = spiderrock::protobuf::api::review_leg_id3;
        using review_leg_alt_id3 = spiderrock::protobuf::api::review_leg_alt_id3;
        using pos_type3 = spiderrock::protobuf::api::pos_type3;
        using ssale_flag3 = spiderrock::protobuf::api::ssale_flag3;
        using leg_cum_fill_qty3 = spiderrock::protobuf::api::leg_cum_fill_qty3;
        using leg_avg_fill_prc3 = spiderrock::protobuf::api::leg_avg_fill_prc3;
        using leg_review_cum_fill_qty3 = spiderrock::protobuf::api::leg_review_cum_fill_qty3;
        using leg_review_avg_fill_prc3 = spiderrock::protobuf::api::leg_review_avg_fill_prc3;
        using sec_key4 = spiderrock::protobuf::api::sec_key4;
        using sec_type4 = spiderrock::protobuf::api::sec_type4;
        using mult4 = spiderrock::protobuf::api::mult4;
        using side4 = spiderrock::protobuf::api::side4;
        using leg_id4 = spiderrock::protobuf::api::leg_id4;
        using alt_leg_id4 = spiderrock::protobuf::api::alt_leg_id4;
        using review_leg_id4 = spiderrock::protobuf::api::review_leg_id4;
        using review_leg_alt_id4 = spiderrock::protobuf::api::review_leg_alt_id4;
        using pos_type4 = spiderrock::protobuf::api::pos_type4;
        using ssale_flag4 = spiderrock::protobuf::api::ssale_flag4;
        using leg_cum_fill_qty4 = spiderrock::protobuf::api::leg_cum_fill_qty4;
        using leg_avg_fill_prc4 = spiderrock::protobuf::api::leg_avg_fill_prc4;
        using leg_review_cum_fill_qty4 = spiderrock::protobuf::api::leg_review_cum_fill_qty4;
        using leg_review_avg_fill_prc4 = spiderrock::protobuf::api::leg_review_avg_fill_prc4;
        using sec_key5 = spiderrock::protobuf::api::sec_key5;
        using sec_type5 = spiderrock::protobuf::api::sec_type5;
        using mult5 = spiderrock::protobuf::api::mult5;
        using side5 = spiderrock::protobuf::api::side5;
        using leg_id5 = spiderrock::protobuf::api::leg_id5;
        using alt_leg_id5 = spiderrock::protobuf::api::alt_leg_id5;
        using review_leg_id5 = spiderrock::protobuf::api::review_leg_id5;
        using review_leg_alt_id5 = spiderrock::protobuf::api::review_leg_alt_id5;
        using pos_type5 = spiderrock::protobuf::api::pos_type5;
        using ssale_flag5 = spiderrock::protobuf::api::ssale_flag5;
        using leg_cum_fill_qty5 = spiderrock::protobuf::api::leg_cum_fill_qty5;
        using leg_avg_fill_prc5 = spiderrock::protobuf::api::leg_avg_fill_prc5;
        using leg_review_cum_fill_qty5 = spiderrock::protobuf::api::leg_review_cum_fill_qty5;
        using leg_review_avg_fill_prc5 = spiderrock::protobuf::api::leg_review_avg_fill_prc5;
        using sec_key6 = spiderrock::protobuf::api::sec_key6;
        using sec_type6 = spiderrock::protobuf::api::sec_type6;
        using mult6 = spiderrock::protobuf::api::mult6;
        using side6 = spiderrock::protobuf::api::side6;
        using leg_id6 = spiderrock::protobuf::api::leg_id6;
        using alt_leg_id6 = spiderrock::protobuf::api::alt_leg_id6;
        using review_leg_id6 = spiderrock::protobuf::api::review_leg_id6;
        using review_leg_alt_id6 = spiderrock::protobuf::api::review_leg_alt_id6;
        using pos_type6 = spiderrock::protobuf::api::pos_type6;
        using ssale_flag6 = spiderrock::protobuf::api::ssale_flag6;
        using leg_cum_fill_qty6 = spiderrock::protobuf::api::leg_cum_fill_qty6;
        using leg_avg_fill_prc6 = spiderrock::protobuf::api::leg_avg_fill_prc6;
        using leg_review_cum_fill_qty6 = spiderrock::protobuf::api::leg_review_cum_fill_qty6;
        using leg_review_avg_fill_prc6 = spiderrock::protobuf::api::leg_review_avg_fill_prc6;

        private:
        last_leg_ref_id m_last_leg_ref_id{};
        last_fill_dttm m_last_fill_dttm{};
        cum_square_qty m_cum_square_qty{};
        avg_square_prc m_avg_square_prc{};
        last_square_dttm m_last_square_dttm{};
        cum_partial_qty m_cum_partial_qty{};
        review_cum_square_qty m_review_cum_square_qty{};
        review_avg_square_prc m_review_avg_square_prc{};
        review_last_square_dttm m_review_last_square_dttm{};
        review_cum_partial_qty m_review_cum_partial_qty{};
        ticker m_ticker{};
        stock_side m_stock_side{};
        stock_shares m_stock_shares{};
        stock_leg_id m_stock_leg_id{};
        alt_stk_leg_id m_alt_stk_leg_id{};
        review_stk_leg_id m_review_stk_leg_id{};
        review_stk_leg_alt_id m_review_stk_leg_alt_id{};
        ssale_flag m_ssale_flag{};
        stock_cum_fill_qty m_stock_cum_fill_qty{};
        stock_avg_fill_prc m_stock_avg_fill_prc{};
        stock_review_cum_fill_qty m_stock_review_cum_fill_qty{};
        stock_review_avg_fill_prc m_stock_review_avg_fill_prc{};
        num_legs m_num_legs{};
        sec_key1 m_sec_key1{};
        sec_type1 m_sec_type1{};
        mult1 m_mult1{};
        side1 m_side1{};
        leg_id1 m_leg_id1{};
        alt_leg_id1 m_alt_leg_id1{};
        review_leg_id1 m_review_leg_id1{};
        review_leg_alt_id1 m_review_leg_alt_id1{};
        pos_type1 m_pos_type1{};
        ssale_flag1 m_ssale_flag1{};
        leg_cum_fill_qty1 m_leg_cum_fill_qty1{};
        leg_avg_fill_prc1 m_leg_avg_fill_prc1{};
        leg_review_cum_fill_qty1 m_leg_review_cum_fill_qty1{};
        leg_review_avg_fill_prc1 m_leg_review_avg_fill_prc1{};
        sec_key2 m_sec_key2{};
        sec_type2 m_sec_type2{};
        mult2 m_mult2{};
        side2 m_side2{};
        leg_id2 m_leg_id2{};
        alt_leg_id2 m_alt_leg_id2{};
        review_leg_id2 m_review_leg_id2{};
        review_leg_alt_id2 m_review_leg_alt_id2{};
        pos_type2 m_pos_type2{};
        ssale_flag2 m_ssale_flag2{};
        leg_cum_fill_qty2 m_leg_cum_fill_qty2{};
        leg_avg_fill_prc2 m_leg_avg_fill_prc2{};
        leg_review_cum_fill_qty2 m_leg_review_cum_fill_qty2{};
        leg_review_avg_fill_prc2 m_leg_review_avg_fill_prc2{};
        sec_key3 m_sec_key3{};
        sec_type3 m_sec_type3{};
        mult3 m_mult3{};
        side3 m_side3{};
        leg_id3 m_leg_id3{};
        alt_leg_id3 m_alt_leg_id3{};
        review_leg_id3 m_review_leg_id3{};
        review_leg_alt_id3 m_review_leg_alt_id3{};
        pos_type3 m_pos_type3{};
        ssale_flag3 m_ssale_flag3{};
        leg_cum_fill_qty3 m_leg_cum_fill_qty3{};
        leg_avg_fill_prc3 m_leg_avg_fill_prc3{};
        leg_review_cum_fill_qty3 m_leg_review_cum_fill_qty3{};
        leg_review_avg_fill_prc3 m_leg_review_avg_fill_prc3{};
        sec_key4 m_sec_key4{};
        sec_type4 m_sec_type4{};
        mult4 m_mult4{};
        side4 m_side4{};
        leg_id4 m_leg_id4{};
        alt_leg_id4 m_alt_leg_id4{};
        review_leg_id4 m_review_leg_id4{};
        review_leg_alt_id4 m_review_leg_alt_id4{};
        pos_type4 m_pos_type4{};
        ssale_flag4 m_ssale_flag4{};
        leg_cum_fill_qty4 m_leg_cum_fill_qty4{};
        leg_avg_fill_prc4 m_leg_avg_fill_prc4{};
        leg_review_cum_fill_qty4 m_leg_review_cum_fill_qty4{};
        leg_review_avg_fill_prc4 m_leg_review_avg_fill_prc4{};
        sec_key5 m_sec_key5{};
        sec_type5 m_sec_type5{};
        mult5 m_mult5{};
        side5 m_side5{};
        leg_id5 m_leg_id5{};
        alt_leg_id5 m_alt_leg_id5{};
        review_leg_id5 m_review_leg_id5{};
        review_leg_alt_id5 m_review_leg_alt_id5{};
        pos_type5 m_pos_type5{};
        ssale_flag5 m_ssale_flag5{};
        leg_cum_fill_qty5 m_leg_cum_fill_qty5{};
        leg_avg_fill_prc5 m_leg_avg_fill_prc5{};
        leg_review_cum_fill_qty5 m_leg_review_cum_fill_qty5{};
        leg_review_avg_fill_prc5 m_leg_review_avg_fill_prc5{};
        sec_key6 m_sec_key6{};
        sec_type6 m_sec_type6{};
        mult6 m_mult6{};
        side6 m_side6{};
        leg_id6 m_leg_id6{};
        alt_leg_id6 m_alt_leg_id6{};
        review_leg_id6 m_review_leg_id6{};
        review_leg_alt_id6 m_review_leg_alt_id6{};
        pos_type6 m_pos_type6{};
        ssale_flag6 m_ssale_flag6{};
        leg_cum_fill_qty6 m_leg_cum_fill_qty6{};
        leg_avg_fill_prc6 m_leg_avg_fill_prc6{};
        leg_review_cum_fill_qty6 m_leg_review_cum_fill_qty6{};
        leg_review_avg_fill_prc6 m_leg_review_avg_fill_prc6{};

        public:
        last_leg_ref_id get_last_leg_ref_id() const {
            return m_last_leg_ref_id;
        }
        last_fill_dttm get_last_fill_dttm() const {
            return m_last_fill_dttm;
        }
        cum_square_qty get_cum_square_qty() const {
            return m_cum_square_qty;
        }
        avg_square_prc get_avg_square_prc() const {
            return m_avg_square_prc;
        }
        last_square_dttm get_last_square_dttm() const {
            return m_last_square_dttm;
        }
        cum_partial_qty get_cum_partial_qty() const {
            return m_cum_partial_qty;
        }
        review_cum_square_qty get_review_cum_square_qty() const {
            return m_review_cum_square_qty;
        }
        review_avg_square_prc get_review_avg_square_prc() const {
            return m_review_avg_square_prc;
        }
        review_last_square_dttm get_review_last_square_dttm() const {
            return m_review_last_square_dttm;
        }
        review_cum_partial_qty get_review_cum_partial_qty() const {
            return m_review_cum_partial_qty;
        }
		ticker get_ticker() const {
            return m_ticker;
        }
        stock_side get_stock_side() const {
            return m_stock_side;
        }
        stock_shares get_stock_shares() const {
            return m_stock_shares;
        }
        stock_leg_id get_stock_leg_id() const {
            return m_stock_leg_id;
        }
        alt_stk_leg_id get_alt_stk_leg_id() const {
            return m_alt_stk_leg_id;
        }
        review_stk_leg_id get_review_stk_leg_id() const {
            return m_review_stk_leg_id;
        }
        review_stk_leg_alt_id get_review_stk_leg_alt_id() const {
            return m_review_stk_leg_alt_id;
        }
        ssale_flag get_ssale_flag() const {
            return m_ssale_flag;
        }
        stock_cum_fill_qty get_stock_cum_fill_qty() const {
            return m_stock_cum_fill_qty;
        }
        stock_avg_fill_prc get_stock_avg_fill_prc() const {
            return m_stock_avg_fill_prc;
        }
        stock_review_cum_fill_qty get_stock_review_cum_fill_qty() const {
            return m_stock_review_cum_fill_qty;
        }
        stock_review_avg_fill_prc get_stock_review_avg_fill_prc() const {
            return m_stock_review_avg_fill_prc;
        }
        num_legs get_num_legs() const {
            return m_num_legs;
        }
		sec_key1 get_sec_key1() const {
            return m_sec_key1;
        }
        sec_type1 get_sec_type1() const {
            return m_sec_type1;
        }
        mult1 get_mult1() const {
            return m_mult1;
        }
        side1 get_side1() const {
            return m_side1;
        }
        leg_id1 get_leg_id1() const {
            return m_leg_id1;
        }
        alt_leg_id1 get_alt_leg_id1() const {
            return m_alt_leg_id1;
        }
        review_leg_id1 get_review_leg_id1() const {
            return m_review_leg_id1;
        }
        review_leg_alt_id1 get_review_leg_alt_id1() const {
            return m_review_leg_alt_id1;
        }
        pos_type1 get_pos_type1() const {
            return m_pos_type1;
        }
        ssale_flag1 get_ssale_flag1() const {
            return m_ssale_flag1;
        }
        leg_cum_fill_qty1 get_leg_cum_fill_qty1() const {
            return m_leg_cum_fill_qty1;
        }
        leg_avg_fill_prc1 get_leg_avg_fill_prc1() const {
            return m_leg_avg_fill_prc1;
        }
        leg_review_cum_fill_qty1 get_leg_review_cum_fill_qty1() const {
            return m_leg_review_cum_fill_qty1;
        }
        leg_review_avg_fill_prc1 get_leg_review_avg_fill_prc1() const {
            return m_leg_review_avg_fill_prc1;
        }
		sec_key2 get_sec_key2() const {
            return m_sec_key2;
        }
        sec_type2 get_sec_type2() const {
            return m_sec_type2;
        }
        mult2 get_mult2() const {
            return m_mult2;
        }
        side2 get_side2() const {
            return m_side2;
        }
        leg_id2 get_leg_id2() const {
            return m_leg_id2;
        }
        alt_leg_id2 get_alt_leg_id2() const {
            return m_alt_leg_id2;
        }
        review_leg_id2 get_review_leg_id2() const {
            return m_review_leg_id2;
        }
        review_leg_alt_id2 get_review_leg_alt_id2() const {
            return m_review_leg_alt_id2;
        }
        pos_type2 get_pos_type2() const {
            return m_pos_type2;
        }
        ssale_flag2 get_ssale_flag2() const {
            return m_ssale_flag2;
        }
        leg_cum_fill_qty2 get_leg_cum_fill_qty2() const {
            return m_leg_cum_fill_qty2;
        }
        leg_avg_fill_prc2 get_leg_avg_fill_prc2() const {
            return m_leg_avg_fill_prc2;
        }
        leg_review_cum_fill_qty2 get_leg_review_cum_fill_qty2() const {
            return m_leg_review_cum_fill_qty2;
        }
        leg_review_avg_fill_prc2 get_leg_review_avg_fill_prc2() const {
            return m_leg_review_avg_fill_prc2;
        }
		sec_key3 get_sec_key3() const {
            return m_sec_key3;
        }
        sec_type3 get_sec_type3() const {
            return m_sec_type3;
        }
        mult3 get_mult3() const {
            return m_mult3;
        }
        side3 get_side3() const {
            return m_side3;
        }
        leg_id3 get_leg_id3() const {
            return m_leg_id3;
        }
        alt_leg_id3 get_alt_leg_id3() const {
            return m_alt_leg_id3;
        }
        review_leg_id3 get_review_leg_id3() const {
            return m_review_leg_id3;
        }
        review_leg_alt_id3 get_review_leg_alt_id3() const {
            return m_review_leg_alt_id3;
        }
        pos_type3 get_pos_type3() const {
            return m_pos_type3;
        }
        ssale_flag3 get_ssale_flag3() const {
            return m_ssale_flag3;
        }
        leg_cum_fill_qty3 get_leg_cum_fill_qty3() const {
            return m_leg_cum_fill_qty3;
        }
        leg_avg_fill_prc3 get_leg_avg_fill_prc3() const {
            return m_leg_avg_fill_prc3;
        }
        leg_review_cum_fill_qty3 get_leg_review_cum_fill_qty3() const {
            return m_leg_review_cum_fill_qty3;
        }
        leg_review_avg_fill_prc3 get_leg_review_avg_fill_prc3() const {
            return m_leg_review_avg_fill_prc3;
        }
		sec_key4 get_sec_key4() const {
            return m_sec_key4;
        }
        sec_type4 get_sec_type4() const {
            return m_sec_type4;
        }
        mult4 get_mult4() const {
            return m_mult4;
        }
        side4 get_side4() const {
            return m_side4;
        }
        leg_id4 get_leg_id4() const {
            return m_leg_id4;
        }
        alt_leg_id4 get_alt_leg_id4() const {
            return m_alt_leg_id4;
        }
        review_leg_id4 get_review_leg_id4() const {
            return m_review_leg_id4;
        }
        review_leg_alt_id4 get_review_leg_alt_id4() const {
            return m_review_leg_alt_id4;
        }
        pos_type4 get_pos_type4() const {
            return m_pos_type4;
        }
        ssale_flag4 get_ssale_flag4() const {
            return m_ssale_flag4;
        }
        leg_cum_fill_qty4 get_leg_cum_fill_qty4() const {
            return m_leg_cum_fill_qty4;
        }
        leg_avg_fill_prc4 get_leg_avg_fill_prc4() const {
            return m_leg_avg_fill_prc4;
        }
        leg_review_cum_fill_qty4 get_leg_review_cum_fill_qty4() const {
            return m_leg_review_cum_fill_qty4;
        }
        leg_review_avg_fill_prc4 get_leg_review_avg_fill_prc4() const {
            return m_leg_review_avg_fill_prc4;
        }
		sec_key5 get_sec_key5() const {
            return m_sec_key5;
        }
        sec_type5 get_sec_type5() const {
            return m_sec_type5;
        }
        mult5 get_mult5() const {
            return m_mult5;
        }
        side5 get_side5() const {
            return m_side5;
        }
        leg_id5 get_leg_id5() const {
            return m_leg_id5;
        }
        alt_leg_id5 get_alt_leg_id5() const {
            return m_alt_leg_id5;
        }
        review_leg_id5 get_review_leg_id5() const {
            return m_review_leg_id5;
        }
        review_leg_alt_id5 get_review_leg_alt_id5() const {
            return m_review_leg_alt_id5;
        }
        pos_type5 get_pos_type5() const {
            return m_pos_type5;
        }
        ssale_flag5 get_ssale_flag5() const {
            return m_ssale_flag5;
        }
        leg_cum_fill_qty5 get_leg_cum_fill_qty5() const {
            return m_leg_cum_fill_qty5;
        }
        leg_avg_fill_prc5 get_leg_avg_fill_prc5() const {
            return m_leg_avg_fill_prc5;
        }
        leg_review_cum_fill_qty5 get_leg_review_cum_fill_qty5() const {
            return m_leg_review_cum_fill_qty5;
        }
        leg_review_avg_fill_prc5 get_leg_review_avg_fill_prc5() const {
            return m_leg_review_avg_fill_prc5;
        }
		sec_key6 get_sec_key6() const {
            return m_sec_key6;
        }
        sec_type6 get_sec_type6() const {
            return m_sec_type6;
        }
        mult6 get_mult6() const {
            return m_mult6;
        }
        side6 get_side6() const {
            return m_side6;
        }
        leg_id6 get_leg_id6() const {
            return m_leg_id6;
        }
        alt_leg_id6 get_alt_leg_id6() const {
            return m_alt_leg_id6;
        }
        review_leg_id6 get_review_leg_id6() const {
            return m_review_leg_id6;
        }
        review_leg_alt_id6 get_review_leg_alt_id6() const {
            return m_review_leg_alt_id6;
        }
        pos_type6 get_pos_type6() const {
            return m_pos_type6;
        }
        ssale_flag6 get_ssale_flag6() const {
            return m_ssale_flag6;
        }
        leg_cum_fill_qty6 get_leg_cum_fill_qty6() const {
            return m_leg_cum_fill_qty6;
        }
        leg_avg_fill_prc6 get_leg_avg_fill_prc6() const {
            return m_leg_avg_fill_prc6;
        }
        leg_review_cum_fill_qty6 get_leg_review_cum_fill_qty6() const {
            return m_leg_review_cum_fill_qty6;
        }
        leg_review_avg_fill_prc6 get_leg_review_avg_fill_prc6() const {
            return m_leg_review_avg_fill_prc6;
        }
        void set_last_leg_ref_id(const last_leg_ref_id& value)  {
            m_last_leg_ref_id = value;
        }
        void set_last_fill_dttm(const last_fill_dttm& value)  {
            m_last_fill_dttm = value;
        }
        void set_cum_square_qty(const cum_square_qty& value)  {
            m_cum_square_qty = value;
        }
        void set_avg_square_prc(const avg_square_prc& value)  {
            m_avg_square_prc = value;
        }
        void set_last_square_dttm(const last_square_dttm& value)  {
            m_last_square_dttm = value;
        }
        void set_cum_partial_qty(const cum_partial_qty& value)  {
            m_cum_partial_qty = value;
        }
        void set_review_cum_square_qty(const review_cum_square_qty& value)  {
            m_review_cum_square_qty = value;
        }
        void set_review_avg_square_prc(const review_avg_square_prc& value)  {
            m_review_avg_square_prc = value;
        }
        void set_review_last_square_dttm(const review_last_square_dttm& value)  {
            m_review_last_square_dttm = value;
        }
        void set_review_cum_partial_qty(const review_cum_partial_qty& value)  {
            m_review_cum_partial_qty = value;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_stock_side(const stock_side& value)  {
            m_stock_side = value;
        }
        void set_stock_shares(const stock_shares& value)  {
            m_stock_shares = value;
        }
        void set_stock_leg_id(const stock_leg_id& value)  {
            m_stock_leg_id = value;
        }
        void set_alt_stk_leg_id(const alt_stk_leg_id& value)  {
            m_alt_stk_leg_id = value;
        }
        void set_review_stk_leg_id(const review_stk_leg_id& value)  {
            m_review_stk_leg_id = value;
        }
        void set_review_stk_leg_alt_id(const review_stk_leg_alt_id& value)  {
            m_review_stk_leg_alt_id = value;
        }
        void set_ssale_flag(const ssale_flag& value)  {
            m_ssale_flag = value;
        }
        void set_stock_cum_fill_qty(const stock_cum_fill_qty& value)  {
            m_stock_cum_fill_qty = value;
        }
        void set_stock_avg_fill_prc(const stock_avg_fill_prc& value)  {
            m_stock_avg_fill_prc = value;
        }
        void set_stock_review_cum_fill_qty(const stock_review_cum_fill_qty& value)  {
            m_stock_review_cum_fill_qty = value;
        }
        void set_stock_review_avg_fill_prc(const stock_review_avg_fill_prc& value)  {
            m_stock_review_avg_fill_prc = value;
        }
        void set_num_legs(const num_legs& value)  {
            m_num_legs = value;
        }
        void set_sec_key1(const sec_key1& value)  {
            m_sec_key1 = value;
        }
        void set_sec_type1(const sec_type1& value)  {
            m_sec_type1 = value;
        }
        void set_mult1(const mult1& value)  {
            m_mult1 = value;
        }
        void set_side1(const side1& value)  {
            m_side1 = value;
        }
        void set_leg_id1(const leg_id1& value)  {
            m_leg_id1 = value;
        }
        void set_alt_leg_id1(const alt_leg_id1& value)  {
            m_alt_leg_id1 = value;
        }
        void set_review_leg_id1(const review_leg_id1& value)  {
            m_review_leg_id1 = value;
        }
        void set_review_leg_alt_id1(const review_leg_alt_id1& value)  {
            m_review_leg_alt_id1 = value;
        }
        void set_pos_type1(const pos_type1& value)  {
            m_pos_type1 = value;
        }
        void set_ssale_flag1(const ssale_flag1& value)  {
            m_ssale_flag1 = value;
        }
        void set_leg_cum_fill_qty1(const leg_cum_fill_qty1& value)  {
            m_leg_cum_fill_qty1 = value;
        }
        void set_leg_avg_fill_prc1(const leg_avg_fill_prc1& value)  {
            m_leg_avg_fill_prc1 = value;
        }
        void set_leg_review_cum_fill_qty1(const leg_review_cum_fill_qty1& value)  {
            m_leg_review_cum_fill_qty1 = value;
        }
        void set_leg_review_avg_fill_prc1(const leg_review_avg_fill_prc1& value)  {
            m_leg_review_avg_fill_prc1 = value;
        }
        void set_sec_key2(const sec_key2& value)  {
            m_sec_key2 = value;
        }
        void set_sec_type2(const sec_type2& value)  {
            m_sec_type2 = value;
        }
        void set_mult2(const mult2& value)  {
            m_mult2 = value;
        }
        void set_side2(const side2& value)  {
            m_side2 = value;
        }
        void set_leg_id2(const leg_id2& value)  {
            m_leg_id2 = value;
        }
        void set_alt_leg_id2(const alt_leg_id2& value)  {
            m_alt_leg_id2 = value;
        }
        void set_review_leg_id2(const review_leg_id2& value)  {
            m_review_leg_id2 = value;
        }
        void set_review_leg_alt_id2(const review_leg_alt_id2& value)  {
            m_review_leg_alt_id2 = value;
        }
        void set_pos_type2(const pos_type2& value)  {
            m_pos_type2 = value;
        }
        void set_ssale_flag2(const ssale_flag2& value)  {
            m_ssale_flag2 = value;
        }
        void set_leg_cum_fill_qty2(const leg_cum_fill_qty2& value)  {
            m_leg_cum_fill_qty2 = value;
        }
        void set_leg_avg_fill_prc2(const leg_avg_fill_prc2& value)  {
            m_leg_avg_fill_prc2 = value;
        }
        void set_leg_review_cum_fill_qty2(const leg_review_cum_fill_qty2& value)  {
            m_leg_review_cum_fill_qty2 = value;
        }
        void set_leg_review_avg_fill_prc2(const leg_review_avg_fill_prc2& value)  {
            m_leg_review_avg_fill_prc2 = value;
        }
        void set_sec_key3(const sec_key3& value)  {
            m_sec_key3 = value;
        }
        void set_sec_type3(const sec_type3& value)  {
            m_sec_type3 = value;
        }
        void set_mult3(const mult3& value)  {
            m_mult3 = value;
        }
        void set_side3(const side3& value)  {
            m_side3 = value;
        }
        void set_leg_id3(const leg_id3& value)  {
            m_leg_id3 = value;
        }
        void set_alt_leg_id3(const alt_leg_id3& value)  {
            m_alt_leg_id3 = value;
        }
        void set_review_leg_id3(const review_leg_id3& value)  {
            m_review_leg_id3 = value;
        }
        void set_review_leg_alt_id3(const review_leg_alt_id3& value)  {
            m_review_leg_alt_id3 = value;
        }
        void set_pos_type3(const pos_type3& value)  {
            m_pos_type3 = value;
        }
        void set_ssale_flag3(const ssale_flag3& value)  {
            m_ssale_flag3 = value;
        }
        void set_leg_cum_fill_qty3(const leg_cum_fill_qty3& value)  {
            m_leg_cum_fill_qty3 = value;
        }
        void set_leg_avg_fill_prc3(const leg_avg_fill_prc3& value)  {
            m_leg_avg_fill_prc3 = value;
        }
        void set_leg_review_cum_fill_qty3(const leg_review_cum_fill_qty3& value)  {
            m_leg_review_cum_fill_qty3 = value;
        }
        void set_leg_review_avg_fill_prc3(const leg_review_avg_fill_prc3& value)  {
            m_leg_review_avg_fill_prc3 = value;
        }
        void set_sec_key4(const sec_key4& value)  {
            m_sec_key4 = value;
        }
        void set_sec_type4(const sec_type4& value)  {
            m_sec_type4 = value;
        }
        void set_mult4(const mult4& value)  {
            m_mult4 = value;
        }
        void set_side4(const side4& value)  {
            m_side4 = value;
        }
        void set_leg_id4(const leg_id4& value)  {
            m_leg_id4 = value;
        }
        void set_alt_leg_id4(const alt_leg_id4& value)  {
            m_alt_leg_id4 = value;
        }
        void set_review_leg_id4(const review_leg_id4& value)  {
            m_review_leg_id4 = value;
        }
        void set_review_leg_alt_id4(const review_leg_alt_id4& value)  {
            m_review_leg_alt_id4 = value;
        }
        void set_pos_type4(const pos_type4& value)  {
            m_pos_type4 = value;
        }
        void set_ssale_flag4(const ssale_flag4& value)  {
            m_ssale_flag4 = value;
        }
        void set_leg_cum_fill_qty4(const leg_cum_fill_qty4& value)  {
            m_leg_cum_fill_qty4 = value;
        }
        void set_leg_avg_fill_prc4(const leg_avg_fill_prc4& value)  {
            m_leg_avg_fill_prc4 = value;
        }
        void set_leg_review_cum_fill_qty4(const leg_review_cum_fill_qty4& value)  {
            m_leg_review_cum_fill_qty4 = value;
        }
        void set_leg_review_avg_fill_prc4(const leg_review_avg_fill_prc4& value)  {
            m_leg_review_avg_fill_prc4 = value;
        }
        void set_sec_key5(const sec_key5& value)  {
            m_sec_key5 = value;
        }
        void set_sec_type5(const sec_type5& value)  {
            m_sec_type5 = value;
        }
        void set_mult5(const mult5& value)  {
            m_mult5 = value;
        }
        void set_side5(const side5& value)  {
            m_side5 = value;
        }
        void set_leg_id5(const leg_id5& value)  {
            m_leg_id5 = value;
        }
        void set_alt_leg_id5(const alt_leg_id5& value)  {
            m_alt_leg_id5 = value;
        }
        void set_review_leg_id5(const review_leg_id5& value)  {
            m_review_leg_id5 = value;
        }
        void set_review_leg_alt_id5(const review_leg_alt_id5& value)  {
            m_review_leg_alt_id5 = value;
        }
        void set_pos_type5(const pos_type5& value)  {
            m_pos_type5 = value;
        }
        void set_ssale_flag5(const ssale_flag5& value)  {
            m_ssale_flag5 = value;
        }
        void set_leg_cum_fill_qty5(const leg_cum_fill_qty5& value)  {
            m_leg_cum_fill_qty5 = value;
        }
        void set_leg_avg_fill_prc5(const leg_avg_fill_prc5& value)  {
            m_leg_avg_fill_prc5 = value;
        }
        void set_leg_review_cum_fill_qty5(const leg_review_cum_fill_qty5& value)  {
            m_leg_review_cum_fill_qty5 = value;
        }
        void set_leg_review_avg_fill_prc5(const leg_review_avg_fill_prc5& value)  {
            m_leg_review_avg_fill_prc5 = value;
        }
        void set_sec_key6(const sec_key6& value)  {
            m_sec_key6 = value;
        }
        void set_sec_type6(const sec_type6& value)  {
            m_sec_type6 = value;
        }
        void set_mult6(const mult6& value)  {
            m_mult6 = value;
        }
        void set_side6(const side6& value)  {
            m_side6 = value;
        }
        void set_leg_id6(const leg_id6& value)  {
            m_leg_id6 = value;
        }
        void set_alt_leg_id6(const alt_leg_id6& value)  {
            m_alt_leg_id6 = value;
        }
        void set_review_leg_id6(const review_leg_id6& value)  {
            m_review_leg_id6 = value;
        }
        void set_review_leg_alt_id6(const review_leg_alt_id6& value)  {
            m_review_leg_alt_id6 = value;
        }
        void set_pos_type6(const pos_type6& value)  {
            m_pos_type6 = value;
        }
        void set_ssale_flag6(const ssale_flag6& value)  {
            m_ssale_flag6 = value;
        }
        void set_leg_cum_fill_qty6(const leg_cum_fill_qty6& value)  {
            m_leg_cum_fill_qty6 = value;
        }
        void set_leg_avg_fill_prc6(const leg_avg_fill_prc6& value)  {
            m_leg_avg_fill_prc6 = value;
        }
        void set_leg_review_cum_fill_qty6(const leg_review_cum_fill_qty6& value)  {
            m_leg_review_cum_fill_qty6 = value;
        }
        void set_leg_review_avg_fill_prc6(const leg_review_avg_fill_prc6& value)  {
            m_leg_review_avg_fill_prc6 = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentReport_OrderLegs::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentReport_OrderLegs::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const last_leg_ref_id & value) { set_last_leg_ref_id(value); }
        void set(const last_fill_dttm & value) { set_last_fill_dttm(value); }
        void set(const cum_square_qty & value) { set_cum_square_qty(value); }
        void set(const avg_square_prc & value) { set_avg_square_prc(value); }
        void set(const last_square_dttm & value) { set_last_square_dttm(value); }
        void set(const cum_partial_qty & value) { set_cum_partial_qty(value); }
        void set(const review_cum_square_qty & value) { set_review_cum_square_qty(value); }
        void set(const review_avg_square_prc & value) { set_review_avg_square_prc(value); }
        void set(const review_last_square_dttm & value) { set_review_last_square_dttm(value); }
        void set(const review_cum_partial_qty & value) { set_review_cum_partial_qty(value); }
        void set(const ticker & value) { set_ticker(value); }
        void set(const stock_side & value) { set_stock_side(value); }
        void set(const stock_shares & value) { set_stock_shares(value); }
        void set(const stock_leg_id & value) { set_stock_leg_id(value); }
        void set(const alt_stk_leg_id & value) { set_alt_stk_leg_id(value); }
        void set(const review_stk_leg_id & value) { set_review_stk_leg_id(value); }
        void set(const review_stk_leg_alt_id & value) { set_review_stk_leg_alt_id(value); }
        void set(const ssale_flag & value) { set_ssale_flag(value); }
        void set(const stock_cum_fill_qty & value) { set_stock_cum_fill_qty(value); }
        void set(const stock_avg_fill_prc & value) { set_stock_avg_fill_prc(value); }
        void set(const stock_review_cum_fill_qty & value) { set_stock_review_cum_fill_qty(value); }
        void set(const stock_review_avg_fill_prc & value) { set_stock_review_avg_fill_prc(value); }
        void set(const num_legs & value) { set_num_legs(value); }
        void set(const sec_key1 & value) { set_sec_key1(value); }
        void set(const sec_type1 & value) { set_sec_type1(value); }
        void set(const mult1 & value) { set_mult1(value); }
        void set(const side1 & value) { set_side1(value); }
        void set(const leg_id1 & value) { set_leg_id1(value); }
        void set(const alt_leg_id1 & value) { set_alt_leg_id1(value); }
        void set(const review_leg_id1 & value) { set_review_leg_id1(value); }
        void set(const review_leg_alt_id1 & value) { set_review_leg_alt_id1(value); }
        void set(const pos_type1 & value) { set_pos_type1(value); }
        void set(const ssale_flag1 & value) { set_ssale_flag1(value); }
        void set(const leg_cum_fill_qty1 & value) { set_leg_cum_fill_qty1(value); }
        void set(const leg_avg_fill_prc1 & value) { set_leg_avg_fill_prc1(value); }
        void set(const leg_review_cum_fill_qty1 & value) { set_leg_review_cum_fill_qty1(value); }
        void set(const leg_review_avg_fill_prc1 & value) { set_leg_review_avg_fill_prc1(value); }
        void set(const sec_key2 & value) { set_sec_key2(value); }
        void set(const sec_type2 & value) { set_sec_type2(value); }
        void set(const mult2 & value) { set_mult2(value); }
        void set(const side2 & value) { set_side2(value); }
        void set(const leg_id2 & value) { set_leg_id2(value); }
        void set(const alt_leg_id2 & value) { set_alt_leg_id2(value); }
        void set(const review_leg_id2 & value) { set_review_leg_id2(value); }
        void set(const review_leg_alt_id2 & value) { set_review_leg_alt_id2(value); }
        void set(const pos_type2 & value) { set_pos_type2(value); }
        void set(const ssale_flag2 & value) { set_ssale_flag2(value); }
        void set(const leg_cum_fill_qty2 & value) { set_leg_cum_fill_qty2(value); }
        void set(const leg_avg_fill_prc2 & value) { set_leg_avg_fill_prc2(value); }
        void set(const leg_review_cum_fill_qty2 & value) { set_leg_review_cum_fill_qty2(value); }
        void set(const leg_review_avg_fill_prc2 & value) { set_leg_review_avg_fill_prc2(value); }
        void set(const sec_key3 & value) { set_sec_key3(value); }
        void set(const sec_type3 & value) { set_sec_type3(value); }
        void set(const mult3 & value) { set_mult3(value); }
        void set(const side3 & value) { set_side3(value); }
        void set(const leg_id3 & value) { set_leg_id3(value); }
        void set(const alt_leg_id3 & value) { set_alt_leg_id3(value); }
        void set(const review_leg_id3 & value) { set_review_leg_id3(value); }
        void set(const review_leg_alt_id3 & value) { set_review_leg_alt_id3(value); }
        void set(const pos_type3 & value) { set_pos_type3(value); }
        void set(const ssale_flag3 & value) { set_ssale_flag3(value); }
        void set(const leg_cum_fill_qty3 & value) { set_leg_cum_fill_qty3(value); }
        void set(const leg_avg_fill_prc3 & value) { set_leg_avg_fill_prc3(value); }
        void set(const leg_review_cum_fill_qty3 & value) { set_leg_review_cum_fill_qty3(value); }
        void set(const leg_review_avg_fill_prc3 & value) { set_leg_review_avg_fill_prc3(value); }
        void set(const sec_key4 & value) { set_sec_key4(value); }
        void set(const sec_type4 & value) { set_sec_type4(value); }
        void set(const mult4 & value) { set_mult4(value); }
        void set(const side4 & value) { set_side4(value); }
        void set(const leg_id4 & value) { set_leg_id4(value); }
        void set(const alt_leg_id4 & value) { set_alt_leg_id4(value); }
        void set(const review_leg_id4 & value) { set_review_leg_id4(value); }
        void set(const review_leg_alt_id4 & value) { set_review_leg_alt_id4(value); }
        void set(const pos_type4 & value) { set_pos_type4(value); }
        void set(const ssale_flag4 & value) { set_ssale_flag4(value); }
        void set(const leg_cum_fill_qty4 & value) { set_leg_cum_fill_qty4(value); }
        void set(const leg_avg_fill_prc4 & value) { set_leg_avg_fill_prc4(value); }
        void set(const leg_review_cum_fill_qty4 & value) { set_leg_review_cum_fill_qty4(value); }
        void set(const leg_review_avg_fill_prc4 & value) { set_leg_review_avg_fill_prc4(value); }
        void set(const sec_key5 & value) { set_sec_key5(value); }
        void set(const sec_type5 & value) { set_sec_type5(value); }
        void set(const mult5 & value) { set_mult5(value); }
        void set(const side5 & value) { set_side5(value); }
        void set(const leg_id5 & value) { set_leg_id5(value); }
        void set(const alt_leg_id5 & value) { set_alt_leg_id5(value); }
        void set(const review_leg_id5 & value) { set_review_leg_id5(value); }
        void set(const review_leg_alt_id5 & value) { set_review_leg_alt_id5(value); }
        void set(const pos_type5 & value) { set_pos_type5(value); }
        void set(const ssale_flag5 & value) { set_ssale_flag5(value); }
        void set(const leg_cum_fill_qty5 & value) { set_leg_cum_fill_qty5(value); }
        void set(const leg_avg_fill_prc5 & value) { set_leg_avg_fill_prc5(value); }
        void set(const leg_review_cum_fill_qty5 & value) { set_leg_review_cum_fill_qty5(value); }
        void set(const leg_review_avg_fill_prc5 & value) { set_leg_review_avg_fill_prc5(value); }
        void set(const sec_key6 & value) { set_sec_key6(value); }
        void set(const sec_type6 & value) { set_sec_type6(value); }
        void set(const mult6 & value) { set_mult6(value); }
        void set(const side6 & value) { set_side6(value); }
        void set(const leg_id6 & value) { set_leg_id6(value); }
        void set(const alt_leg_id6 & value) { set_alt_leg_id6(value); }
        void set(const review_leg_id6 & value) { set_review_leg_id6(value); }
        void set(const review_leg_alt_id6 & value) { set_review_leg_alt_id6(value); }
        void set(const pos_type6 & value) { set_pos_type6(value); }
        void set(const ssale_flag6 & value) { set_ssale_flag6(value); }
        void set(const leg_cum_fill_qty6 & value) { set_leg_cum_fill_qty6(value); }
        void set(const leg_avg_fill_prc6 & value) { set_leg_avg_fill_prc6(value); }
        void set(const leg_review_cum_fill_qty6 & value) { set_leg_review_cum_fill_qty6(value); }
        void set(const leg_review_avg_fill_prc6 & value) { set_leg_review_avg_fill_prc6(value); }


        SpdrParentReport_OrderLegs() {}

        virtual ~SpdrParentReport_OrderLegs() {
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
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(616,m_last_leg_ref_id);
            totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(619, m_last_fill_dttm);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(622,m_cum_square_qty);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(625,m_avg_square_prc);
            totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(628, m_last_square_dttm);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(631,m_cum_partial_qty);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(634,m_review_cum_square_qty);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(637,m_review_avg_square_prc);
            totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(640, m_review_last_square_dttm);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(643,m_review_cum_partial_qty);
            SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
            m_ticker.setCodecTickerKey(tickerKeyLayout);
            totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(646,tickerKeyLayout);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(649,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_stock_side)));
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(652,m_stock_shares);
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(655,m_stock_leg_id);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(658,m_alt_stk_leg_id);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(661,m_review_stk_leg_id);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(664,m_review_stk_leg_alt_id);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(667,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(670,m_stock_cum_fill_qty);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(673,m_stock_avg_fill_prc);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(676,m_stock_review_cum_fill_qty);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(679,m_stock_review_avg_fill_prc);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(682,m_num_legs);
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key1;
            m_sec_key1.setCodecOptionKey(optionKeyLayout_sec_key1);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(685,optionKeyLayout_sec_key1);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(688,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type1)));
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(691,m_mult1);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(694,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side1)));
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(697,m_leg_id1);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(700,m_alt_leg_id1);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(703,m_review_leg_id1);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(706,m_review_leg_alt_id1);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(709,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type1)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(712,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag1)));
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(715,m_leg_cum_fill_qty1);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(718,m_leg_avg_fill_prc1);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(721,m_leg_review_cum_fill_qty1);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(724,m_leg_review_avg_fill_prc1);
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key2;
            m_sec_key2.setCodecOptionKey(optionKeyLayout_sec_key2);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(727,optionKeyLayout_sec_key2);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(730,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type2)));
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(733,m_mult2);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(736,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side2)));
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(739,m_leg_id2);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(742,m_alt_leg_id2);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(745,m_review_leg_id2);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(748,m_review_leg_alt_id2);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(751,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type2)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(754,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag2)));
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(757,m_leg_cum_fill_qty2);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(760,m_leg_avg_fill_prc2);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(763,m_leg_review_cum_fill_qty2);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(766,m_leg_review_avg_fill_prc2);
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key3;
            m_sec_key3.setCodecOptionKey(optionKeyLayout_sec_key3);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(769,optionKeyLayout_sec_key3);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(772,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type3)));
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(775,m_mult3);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(778,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side3)));
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(781,m_leg_id3);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(784,m_alt_leg_id3);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(787,m_review_leg_id3);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(790,m_review_leg_alt_id3);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(793,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type3)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(796,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag3)));
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(799,m_leg_cum_fill_qty3);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(802,m_leg_avg_fill_prc3);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(805,m_leg_review_cum_fill_qty3);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(808,m_leg_review_avg_fill_prc3);
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key4;
            m_sec_key4.setCodecOptionKey(optionKeyLayout_sec_key4);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(811,optionKeyLayout_sec_key4);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(814,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type4)));
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(817,m_mult4);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(820,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side4)));
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(823,m_leg_id4);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(826,m_alt_leg_id4);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(829,m_review_leg_id4);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(832,m_review_leg_alt_id4);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(835,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type4)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(838,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag4)));
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(841,m_leg_cum_fill_qty4);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(844,m_leg_avg_fill_prc4);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(847,m_leg_review_cum_fill_qty4);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(850,m_leg_review_avg_fill_prc4);
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key5;
            m_sec_key5.setCodecOptionKey(optionKeyLayout_sec_key5);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(853,optionKeyLayout_sec_key5);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(856,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type5)));
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(859,m_mult5);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(862,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side5)));
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(865,m_leg_id5);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(868,m_alt_leg_id5);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(871,m_review_leg_id5);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(874,m_review_leg_alt_id5);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(877,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type5)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(880,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag5)));
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(883,m_leg_cum_fill_qty5);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(886,m_leg_avg_fill_prc5);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(889,m_leg_review_cum_fill_qty5);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(892,m_leg_review_avg_fill_prc5);
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key6;
            m_sec_key6.setCodecOptionKey(optionKeyLayout_sec_key6);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(895,optionKeyLayout_sec_key6);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(898,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type6)));
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(901,m_mult6);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(904,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side6)));
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(907,m_leg_id6);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(910,m_alt_leg_id6);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(913,m_review_leg_id6);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(916,m_review_leg_alt_id6);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(919,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type6)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(922,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag6)));
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(925,m_leg_cum_fill_qty6);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(928,m_leg_avg_fill_prc6);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(931,m_leg_review_cum_fill_qty6);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(934,m_leg_review_avg_fill_prc6);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,616,m_last_leg_ref_id);
            dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 619, m_last_fill_dttm);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,622,m_cum_square_qty);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,625,m_avg_square_prc);
            dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 628, m_last_square_dttm);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,631,m_cum_partial_qty);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,634,m_review_cum_square_qty);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,637,m_review_avg_square_prc);
            dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 640, m_review_last_square_dttm);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,643,m_review_cum_partial_qty);
            SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
            m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
            dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 646, tickerKeyLayout_ticker);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,649,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_stock_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,652,m_stock_shares);
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,655,m_stock_leg_id);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,658,static_cast<string>(m_alt_stk_leg_id));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,661,static_cast<string>(m_review_stk_leg_id));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,664,static_cast<string>(m_review_stk_leg_alt_id));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,667,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,670,m_stock_cum_fill_qty);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,673,m_stock_avg_fill_prc);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,676,m_stock_review_cum_fill_qty);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,679,m_stock_review_avg_fill_prc);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,682,m_num_legs);
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key1;
            m_sec_key1.setCodecOptionKey(optionKeyLayout_sec_key1);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 685, optionKeyLayout_sec_key1);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,688,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type1)));
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,691,m_mult1);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,694,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side1)));
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,697,m_leg_id1);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,700,static_cast<string>(m_alt_leg_id1));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,703,static_cast<string>(m_review_leg_id1));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,706,static_cast<string>(m_review_leg_alt_id1));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,709,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type1)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,712,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag1)));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,715,m_leg_cum_fill_qty1);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,718,m_leg_avg_fill_prc1);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,721,m_leg_review_cum_fill_qty1);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,724,m_leg_review_avg_fill_prc1);
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key2;
            m_sec_key2.setCodecOptionKey(optionKeyLayout_sec_key2);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 727, optionKeyLayout_sec_key2);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,730,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type2)));
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,733,m_mult2);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,736,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side2)));
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,739,m_leg_id2);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,742,static_cast<string>(m_alt_leg_id2));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,745,static_cast<string>(m_review_leg_id2));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,748,static_cast<string>(m_review_leg_alt_id2));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,751,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type2)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,754,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag2)));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,757,m_leg_cum_fill_qty2);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,760,m_leg_avg_fill_prc2);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,763,m_leg_review_cum_fill_qty2);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,766,m_leg_review_avg_fill_prc2);
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key3;
            m_sec_key3.setCodecOptionKey(optionKeyLayout_sec_key3);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 769, optionKeyLayout_sec_key3);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,772,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type3)));
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,775,m_mult3);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,778,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side3)));
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,781,m_leg_id3);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,784,static_cast<string>(m_alt_leg_id3));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,787,static_cast<string>(m_review_leg_id3));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,790,static_cast<string>(m_review_leg_alt_id3));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,793,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type3)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,796,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag3)));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,799,m_leg_cum_fill_qty3);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,802,m_leg_avg_fill_prc3);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,805,m_leg_review_cum_fill_qty3);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,808,m_leg_review_avg_fill_prc3);
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key4;
            m_sec_key4.setCodecOptionKey(optionKeyLayout_sec_key4);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 811, optionKeyLayout_sec_key4);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,814,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type4)));
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,817,m_mult4);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,820,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side4)));
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,823,m_leg_id4);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,826,static_cast<string>(m_alt_leg_id4));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,829,static_cast<string>(m_review_leg_id4));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,832,static_cast<string>(m_review_leg_alt_id4));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,835,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type4)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,838,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag4)));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,841,m_leg_cum_fill_qty4);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,844,m_leg_avg_fill_prc4);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,847,m_leg_review_cum_fill_qty4);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,850,m_leg_review_avg_fill_prc4);
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key5;
            m_sec_key5.setCodecOptionKey(optionKeyLayout_sec_key5);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 853, optionKeyLayout_sec_key5);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,856,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type5)));
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,859,m_mult5);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,862,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side5)));
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,865,m_leg_id5);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,868,static_cast<string>(m_alt_leg_id5));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,871,static_cast<string>(m_review_leg_id5));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,874,static_cast<string>(m_review_leg_alt_id5));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,877,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type5)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,880,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag5)));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,883,m_leg_cum_fill_qty5);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,886,m_leg_avg_fill_prc5);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,889,m_leg_review_cum_fill_qty5);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,892,m_leg_review_avg_fill_prc5);
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key6;
            m_sec_key6.setCodecOptionKey(optionKeyLayout_sec_key6);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 895, optionKeyLayout_sec_key6);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,898,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type6)));
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,901,m_mult6);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,904,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side6)));
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,907,m_leg_id6);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,910,static_cast<string>(m_alt_leg_id6));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,913,static_cast<string>(m_review_leg_id6));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,916,static_cast<string>(m_review_leg_alt_id6));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,919,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type6)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,922,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag6)));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,925,m_leg_cum_fill_qty6);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,928,m_leg_avg_fill_prc6);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,931,m_leg_review_cum_fill_qty6);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,934,m_leg_review_avg_fill_prc6);
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
                    case 616: {m_last_leg_ref_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 619: {
                        m_last_fill_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        break;
                    }
                    case 622: {m_cum_square_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 625: {m_avg_square_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 628: {
                        m_last_square_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        break;
                    }
                    case 631: {m_cum_partial_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 634: {m_review_cum_square_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 637: {m_review_avg_square_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 640: {
                        m_review_last_square_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        break;
                    }
                    case 643: {m_review_cum_partial_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 646: {
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_ticker.setFromCodec(tickerKey);
                        break;
                    }
                    case 649: {m_stock_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 652: {m_stock_shares = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 655: {m_stock_leg_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 658: {m_alt_stk_leg_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 661: {m_review_stk_leg_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 664: {m_review_stk_leg_alt_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 667: {m_ssale_flag = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 670: {m_stock_cum_fill_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 673: {m_stock_avg_fill_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 676: {m_stock_review_cum_fill_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 679: {m_stock_review_avg_fill_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 682: {m_num_legs = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 685: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key1.setFromCodec(optionKey);
                        break;
                    }
                    case 688: {m_sec_type1 = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 691: {m_mult1 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                    case 694: {m_side1 = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 697: {m_leg_id1 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 700: {m_alt_leg_id1 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 703: {m_review_leg_id1 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 706: {m_review_leg_alt_id1 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 709: {m_pos_type1 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 712: {m_ssale_flag1 = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 715: {m_leg_cum_fill_qty1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 718: {m_leg_avg_fill_prc1 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 721: {m_leg_review_cum_fill_qty1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 724: {m_leg_review_avg_fill_prc1 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 727: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key2.setFromCodec(optionKey);
                        break;
                    }
                    case 730: {m_sec_type2 = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 733: {m_mult2 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                    case 736: {m_side2 = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 739: {m_leg_id2 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 742: {m_alt_leg_id2 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 745: {m_review_leg_id2 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 748: {m_review_leg_alt_id2 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 751: {m_pos_type2 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 754: {m_ssale_flag2 = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 757: {m_leg_cum_fill_qty2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 760: {m_leg_avg_fill_prc2 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 763: {m_leg_review_cum_fill_qty2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 766: {m_leg_review_avg_fill_prc2 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 769: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key3.setFromCodec(optionKey);
                        break;
                    }
                    case 772: {m_sec_type3 = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 775: {m_mult3 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                    case 778: {m_side3 = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 781: {m_leg_id3 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 784: {m_alt_leg_id3 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 787: {m_review_leg_id3 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 790: {m_review_leg_alt_id3 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 793: {m_pos_type3 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 796: {m_ssale_flag3 = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 799: {m_leg_cum_fill_qty3 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 802: {m_leg_avg_fill_prc3 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 805: {m_leg_review_cum_fill_qty3 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 808: {m_leg_review_avg_fill_prc3 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 811: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key4.setFromCodec(optionKey);
                        break;
                    }
                    case 814: {m_sec_type4 = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 817: {m_mult4 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                    case 820: {m_side4 = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 823: {m_leg_id4 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 826: {m_alt_leg_id4 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 829: {m_review_leg_id4 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 832: {m_review_leg_alt_id4 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 835: {m_pos_type4 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 838: {m_ssale_flag4 = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 841: {m_leg_cum_fill_qty4 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 844: {m_leg_avg_fill_prc4 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 847: {m_leg_review_cum_fill_qty4 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 850: {m_leg_review_avg_fill_prc4 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 853: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key5.setFromCodec(optionKey);
                        break;
                    }
                    case 856: {m_sec_type5 = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 859: {m_mult5 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                    case 862: {m_side5 = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 865: {m_leg_id5 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 868: {m_alt_leg_id5 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 871: {m_review_leg_id5 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 874: {m_review_leg_alt_id5 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 877: {m_pos_type5 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 880: {m_ssale_flag5 = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 883: {m_leg_cum_fill_qty5 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 886: {m_leg_avg_fill_prc5 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 889: {m_leg_review_cum_fill_qty5 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 892: {m_leg_review_avg_fill_prc5 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 895: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key6.setFromCodec(optionKey);
                        break;
                    }
                    case 898: {m_sec_type6 = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 901: {m_mult6 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                    case 904: {m_side6 = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 907: {m_leg_id6 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 910: {m_alt_leg_id6 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 913: {m_review_leg_id6 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 916: {m_review_leg_alt_id6 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 919: {m_pos_type6 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 922: {m_ssale_flag6 = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 925: {m_leg_cum_fill_qty6 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 928: {m_leg_avg_fill_prc6 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 931: {m_leg_review_cum_fill_qty6 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 934: {m_leg_review_avg_fill_prc6 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SpdrParentReport {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrParentReport_PKey;
        using sys_realm = spiderrock::protobuf::api::sys_realm;
        using sys_environment = spiderrock::protobuf::api::sys_environment;
        using run_status = spiderrock::protobuf::api::run_status;
        using report_number = spiderrock::protobuf::api::report_number;
        using parent_shape = spiderrock::protobuf::api::parent_shape;
        using record_version = spiderrock::protobuf::api::record_version;
        using record_source = spiderrock::protobuf::api::record_source;
        using parent_version = spiderrock::protobuf::api::parent_version;
        using base_parent_number = spiderrock::protobuf::api::base_parent_number;
        using prev_parent_number = spiderrock::protobuf::api::prev_parent_number;
        using next_parent_number = spiderrock::protobuf::api::next_parent_number;
        using spdr_action_type = spiderrock::protobuf::api::spdr_action_type;
        using prev_parent_create_dttm = spiderrock::protobuf::api::prev_parent_create_dttm;
        using prev_parent_cum_fill_qty = spiderrock::protobuf::api::prev_parent_cum_fill_qty;
        using client_seq_num_in = spiderrock::protobuf::api::client_seq_num_in;
        using alt_order_id = spiderrock::protobuf::api::alt_order_id;
        using alt_prev_order_id = spiderrock::protobuf::api::alt_prev_order_id;
        using alt_cancel_id = spiderrock::protobuf::api::alt_cancel_id;
        using src_routing_code = spiderrock::protobuf::api::src_routing_code;
        using package_id = spiderrock::protobuf::api::package_id;
        using prev_package_id = spiderrock::protobuf::api::prev_package_id;
        using risk_group_id = spiderrock::protobuf::api::risk_group_id;
        using trigger_group_id = spiderrock::protobuf::api::trigger_group_id;
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using accnt = spiderrock::protobuf::api::accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using core_client_firm = spiderrock::protobuf::api::core_client_firm;
        using sponsor_client_firm = spiderrock::protobuf::api::sponsor_client_firm;
        using client_accnt = spiderrock::protobuf::api::client_accnt;
        using user_name = spiderrock::protobuf::api::user_name;
        using user_source = spiderrock::protobuf::api::user_source;
        using alt_accnt = spiderrock::protobuf::api::alt_accnt;
        using alt_user_name = spiderrock::protobuf::api::alt_user_name;
        using exec_brkr_code = spiderrock::protobuf::api::exec_brkr_code;
        using extern_ex_dest = spiderrock::protobuf::api::extern_ex_dest;
        using extern_params = spiderrock::protobuf::api::extern_params;
        using spdr_source = spiderrock::protobuf::api::spdr_source;
        using grouping_code = spiderrock::protobuf::api::grouping_code;
        using engine_name = spiderrock::protobuf::api::engine_name;
        using order_dttm = spiderrock::protobuf::api::order_dttm;
        using order_side = spiderrock::protobuf::api::order_side;
        using price_type = spiderrock::protobuf::api::price_type__PriceType;
        using order_size = spiderrock::protobuf::api::order_size;
        using order_active_size = spiderrock::protobuf::api::order_active_size;
        using spdr_stage_type = spiderrock::protobuf::api::spdr_stage_type;
        using stage_review = spiderrock::protobuf::api::stage_review;
        using parent_order_handling = spiderrock::protobuf::api::parent_order_handling;
        using parent_balance_handling = spiderrock::protobuf::api::parent_balance_handling;
        using limit_price = spiderrock::protobuf::api::limit_price;
        using order_limit_type = spiderrock::protobuf::api::order_limit_type;
        using take_limit_class = spiderrock::protobuf::api::take_limit_class;
        using make_limit_class = spiderrock::protobuf::api::make_limit_class;
        using start_type = spiderrock::protobuf::api::start_type;
        using market_session = spiderrock::protobuf::api::market_session;
        using active_duration = spiderrock::protobuf::api::active_duration;
        using start_dttm = spiderrock::protobuf::api::start_dttm;
        using good_till_dttm = spiderrock::protobuf::api::good_till_dttm;
        using auto_hedge = spiderrock::protobuf::api::auto_hedge;
        using hedge_instrument = spiderrock::protobuf::api::hedge_instrument;
        using hedge_sec_key = spiderrock::protobuf::api::hedge_sec_key;
        using hedge_sec_type = spiderrock::protobuf::api::hedge_sec_type;
        using hedge_beta_ratio = spiderrock::protobuf::api::hedge_beta_ratio;
        using hedge_scope = spiderrock::protobuf::api::hedge_scope;
        using hedge_session = spiderrock::protobuf::api::hedge_session;
        using order_create_dttm = spiderrock::protobuf::api::order_create_dttm;
        using order_create_latency = spiderrock::protobuf::api::order_create_latency;
        using cancel_reason = spiderrock::protobuf::api::cancel_reason;
        using order_cancel_dttm = spiderrock::protobuf::api::order_cancel_dttm;
        using order_cancel_latency = spiderrock::protobuf::api::order_cancel_latency;
        using order_working_dttm = spiderrock::protobuf::api::order_working_dttm;
        using order_closed_dttm = spiderrock::protobuf::api::order_closed_dttm;
        using order_closed_text = spiderrock::protobuf::api::order_closed_text;
        using max_exposure_size = spiderrock::protobuf::api::max_exposure_size;
        using public_size = spiderrock::protobuf::api::public_size;
        using can_overlap_cxl_repl = spiderrock::protobuf::api::can_overlap_cxl_repl;
        using progress_expose_time = spiderrock::protobuf::api::progress_expose_time;
        using progress_rule = spiderrock::protobuf::api::progress_rule;
        using progress_slice_cnt = spiderrock::protobuf::api::progress_slice_cnt;
        using vwap_participation = spiderrock::protobuf::api::vwap_participation;
        using auction_responder = spiderrock::protobuf::api::auction_responder;
        using max_make_exch_fee = spiderrock::protobuf::api::max_make_exch_fee;
        using max_take_exch_fee = spiderrock::protobuf::api::max_take_exch_fee;
        using inc_take_exch_fee = spiderrock::protobuf::api::inc_take_exch_fee;
        using inc_make_exch_fee = spiderrock::protobuf::api::inc_make_exch_fee;
        using make_exch_rule = spiderrock::protobuf::api::make_exch_rule;
        using cxl_uprc_range = spiderrock::protobuf::api::cxl_uprc_range;
        using min_ubid = spiderrock::protobuf::api::min_ubid;
        using max_uask = spiderrock::protobuf::api::max_uask;
        using min_option_px = spiderrock::protobuf::api::min_option_px;
        using max_child_orders = spiderrock::protobuf::api::max_child_orders;
        using order_duration = spiderrock::protobuf::api::order_duration;
        using take_reach_rule = spiderrock::protobuf::api::take_reach_rule;
        using order_prc_limit = spiderrock::protobuf::api::order_prc_limit;
        using order_ref_uprc = spiderrock::protobuf::api::order_ref_uprc;
        using order_ref_delta = spiderrock::protobuf::api::order_ref_delta;
        using order_ref_gamma = spiderrock::protobuf::api::order_ref_gamma;
        using order_vol_limit = spiderrock::protobuf::api::order_vol_limit;
        using rate_override = spiderrock::protobuf::api::rate_override;
        using sdiv_override = spiderrock::protobuf::api::sdiv_override;
        using ddiv_override = spiderrock::protobuf::api::ddiv_override;
        using override_code = spiderrock::protobuf::api::override_code;
        using order_prc_offset = spiderrock::protobuf::api::order_prc_offset;
        using take_alpha_type = spiderrock::protobuf::api::take_alpha_type;
        using make_alpha_type = spiderrock::protobuf::api::make_alpha_type;
        using take_alpha_factor = spiderrock::protobuf::api::take_alpha_factor;
        using make_alpha_factor = spiderrock::protobuf::api::make_alpha_factor;
        using take_probability = spiderrock::protobuf::api::take_probability;
        using make_probability = spiderrock::protobuf::api::make_probability;
        using take_surf_prc_offset = spiderrock::protobuf::api::take_surf_prc_offset;
        using take_surf_vol_offset = spiderrock::protobuf::api::take_surf_vol_offset;
        using take_surf_width_offset = spiderrock::protobuf::api::take_surf_width_offset;
        using make_surf_prc_offset = spiderrock::protobuf::api::make_surf_prc_offset;
        using make_surf_vol_offset = spiderrock::protobuf::api::make_surf_vol_offset;
        using make_surf_width_offset = spiderrock::protobuf::api::make_surf_width_offset;
        using order_ref_event_mult = spiderrock::protobuf::api::order_ref_event_mult;
        using order_ref_event_dttm = spiderrock::protobuf::api::order_ref_event_dttm;
        using nbbo_cap = spiderrock::protobuf::api::nbbo_cap;
        using extern_hedge_ex_dest = spiderrock::protobuf::api::extern_hedge_ex_dest;
        using extern_hedge_params = spiderrock::protobuf::api::extern_hedge_params;
        using spdr_order_status = spiderrock::protobuf::api::spdr_order_status;
        using spdr_close_reason = spiderrock::protobuf::api::spdr_close_reason;
        using spdr_reject_reason = spiderrock::protobuf::api::spdr_reject_reason;
        using spdr_reject_level = spiderrock::protobuf::api::spdr_reject_level;
        using firm_type = spiderrock::protobuf::api::firm_type;
        using order_capacity = spiderrock::protobuf::api::order_capacity;
        using ssale_flag = spiderrock::protobuf::api::ssale_flag;
        using position_type = spiderrock::protobuf::api::position_type__PositionType;
        using arrive_firm_pos = spiderrock::protobuf::api::arrive_firm_pos;
        using arrive_ssale_flag = spiderrock::protobuf::api::arrive_ssale_flag;
        using no_cross_group = spiderrock::protobuf::api::no_cross_group;
        using exch_trader_id = spiderrock::protobuf::api::exch_trader_id;
        using large_trader_id = spiderrock::protobuf::api::large_trader_id;
        using trading_location = spiderrock::protobuf::api::trading_location;
        using firm_position = spiderrock::protobuf::api::firm_position;
        using open_sell_sh = spiderrock::protobuf::api::open_sell_sh;
        using locate_quan = spiderrock::protobuf::api::locate_quan;
        using locate_firm = spiderrock::protobuf::api::locate_firm;
        using locate_pool = spiderrock::protobuf::api::locate_pool;
        using clearing_firm = spiderrock::protobuf::api::clearing_firm;
        using clearing_accnt = spiderrock::protobuf::api::clearing_accnt;
        using cat_reportable = spiderrock::protobuf::api::cat_reportable;
        using cat_src_brkr_imid = spiderrock::protobuf::api::cat_src_brkr_imid;
        using cat_src_accnt_type = spiderrock::protobuf::api::cat_src_accnt_type;
        using cat_src_firm_type = spiderrock::protobuf::api::cat_src_firm_type;
        using cat_dest_dept_type = spiderrock::protobuf::api::cat_dest_dept_type;
        using cat_accnt = spiderrock::protobuf::api::cat_accnt;
        using cat_brkr_accnt = spiderrock::protobuf::api::cat_brkr_accnt;
        using cum_fill_quantity = spiderrock::protobuf::api::cum_fill_quantity;
        using avg_fill_price = spiderrock::protobuf::api::avg_fill_price;
        using avg_fill_uprice = spiderrock::protobuf::api::avg_fill_uprice;
        using leaves_qty = spiderrock::protobuf::api::leaves_qty;
        using last_fill_number = spiderrock::protobuf::api::last_fill_number;
        using last_fill_dttm = spiderrock::protobuf::api::last_fill_dttm;
        using review_cl_ord_id = spiderrock::protobuf::api::review_cl_ord_id;
        using review_orig_cl_ord_id = spiderrock::protobuf::api::review_orig_cl_ord_id;
        using review_cancel_cl_ord_id = spiderrock::protobuf::api::review_cancel_cl_ord_id;
        using review_order_size = spiderrock::protobuf::api::review_order_size;
        using review_order_active_size = spiderrock::protobuf::api::review_order_active_size;
        using review_cum_fill_quantity = spiderrock::protobuf::api::review_cum_fill_quantity;
        using review_avg_fill_price = spiderrock::protobuf::api::review_avg_fill_price;
        using review_leaves_qty = spiderrock::protobuf::api::review_leaves_qty;
        using review_order_status = spiderrock::protobuf::api::review_order_status;
        using max_progress = spiderrock::protobuf::api::max_progress;
        using max_progress_detail = spiderrock::protobuf::api::max_progress_detail;
        using max_progress_time = spiderrock::protobuf::api::max_progress_time;
        using num_child_orders = spiderrock::protobuf::api::num_child_orders__int32;
        using nbbo_bid = spiderrock::protobuf::api::nbbo_bid__double;
        using nbbo_ask = spiderrock::protobuf::api::nbbo_ask__double;
        using nbbo_bid_sz = spiderrock::protobuf::api::nbbo_bid_sz;
        using nbbo_ask_sz = spiderrock::protobuf::api::nbbo_ask_sz;
        using mkt_stance = spiderrock::protobuf::api::mkt_stance;
        using parent_strategy = spiderrock::protobuf::api::parent_strategy;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using tick_value = spiderrock::protobuf::api::tick_value;
        using point_value = spiderrock::protobuf::api::point_value__float;
        using point_currency = spiderrock::protobuf::api::point_currency;
        using notional_mult = spiderrock::protobuf::api::notional_mult;
        using security_id = spiderrock::protobuf::api::security_id__string;
        using security_desc = spiderrock::protobuf::api::security_desc;
        using product_group = spiderrock::protobuf::api::product_group;
        using product_class = spiderrock::protobuf::api::product_class;
        using und_key = spiderrock::protobuf::api::und_key;
        using und_type = spiderrock::protobuf::api::und_type;
        using u_sec_desc = spiderrock::protobuf::api::u_sec_desc;
        using price_format = spiderrock::protobuf::api::price_format;
        using user_data1 = spiderrock::protobuf::api::user_data1;
        using user_data2 = spiderrock::protobuf::api::user_data2;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using include_srnetwork = spiderrock::protobuf::api::include_srnetwork;
        using alt_cross_id__v7 = spiderrock::protobuf::api::alt_cross_id__v7;
        using exec_broker_accnt__v7 = spiderrock::protobuf::api::exec_broker_accnt__v7;
        using exec_broker_cl_firm__v7 = spiderrock::protobuf::api::exec_broker_cl_firm__v7;
        using exec_username__v7 = spiderrock::protobuf::api::exec_username__v7;
        using data_center__v7 = spiderrock::protobuf::api::data_center__v7;
        using time_in_force__v7 = spiderrock::protobuf::api::time_in_force__v7;
        using hedge_tif__v7 = spiderrock::protobuf::api::hedge_tif__v7;
        using locate_source__v7 = spiderrock::protobuf::api::locate_source__v7;
        using clearing_flip_type__v7 = spiderrock::protobuf::api::clearing_flip_type__v7;
        using clearing_flip_firm__v7 = spiderrock::protobuf::api::clearing_flip_firm__v7;
        using clearing_flip_accnt__v7 = spiderrock::protobuf::api::clearing_flip_accnt__v7;
        using review_routing_code__v7 = spiderrock::protobuf::api::review_routing_code__v7;
        using progress_timeout__v7 = spiderrock::protobuf::api::progress_timeout__v7;
        using directed_counter_party = spiderrock::protobuf::api::SpdrParentReport_DirectedCounterParty;
        using face_legs__v7 = spiderrock::protobuf::api::SpdrParentReport_FaceLegs_V7;
        using face_side__v7 = spiderrock::protobuf::api::SpdrParentReport_FaceSide_V7;
        using order_legs = spiderrock::protobuf::api::SpdrParentReport_OrderLegs;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        sys_realm m_sys_realm{};
        sys_environment m_sys_environment{};
        run_status m_run_status{};
        report_number m_report_number{};
        parent_shape m_parent_shape{};
        record_version m_record_version{};
        record_source m_record_source{};
        parent_version m_parent_version{};
        base_parent_number m_base_parent_number{};
        prev_parent_number m_prev_parent_number{};
        next_parent_number m_next_parent_number{};
        spdr_action_type m_spdr_action_type{};
        prev_parent_create_dttm m_prev_parent_create_dttm{};
        prev_parent_cum_fill_qty m_prev_parent_cum_fill_qty{};
        client_seq_num_in m_client_seq_num_in{};
        alt_order_id m_alt_order_id{};
        alt_prev_order_id m_alt_prev_order_id{};
        alt_cancel_id m_alt_cancel_id{};
        src_routing_code m_src_routing_code{};
        package_id m_package_id{};
        prev_package_id m_prev_package_id{};
        risk_group_id m_risk_group_id{};
        trigger_group_id m_trigger_group_id{};
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        accnt m_accnt{};
        client_firm m_client_firm{};
        core_client_firm m_core_client_firm{};
        sponsor_client_firm m_sponsor_client_firm{};
        client_accnt m_client_accnt{};
        user_name m_user_name{};
        user_source m_user_source{};
        alt_accnt m_alt_accnt{};
        alt_user_name m_alt_user_name{};
        exec_brkr_code m_exec_brkr_code{};
        extern_ex_dest m_extern_ex_dest{};
        extern_params m_extern_params{};
        spdr_source m_spdr_source{};
        grouping_code m_grouping_code{};
        engine_name m_engine_name{};
        order_dttm m_order_dttm{};
        order_side m_order_side{};
        price_type m_price_type{};
        order_size m_order_size{};
        order_active_size m_order_active_size{};
        spdr_stage_type m_spdr_stage_type{};
        stage_review m_stage_review{};
        parent_order_handling m_parent_order_handling{};
        parent_balance_handling m_parent_balance_handling{};
        limit_price m_limit_price{};
        order_limit_type m_order_limit_type{};
        take_limit_class m_take_limit_class{};
        make_limit_class m_make_limit_class{};
        start_type m_start_type{};
        market_session m_market_session{};
        active_duration m_active_duration{};
        start_dttm m_start_dttm{};
        good_till_dttm m_good_till_dttm{};
        auto_hedge m_auto_hedge{};
        hedge_instrument m_hedge_instrument{};
        hedge_sec_key m_hedge_sec_key{};
        hedge_sec_type m_hedge_sec_type{};
        hedge_beta_ratio m_hedge_beta_ratio{};
        hedge_scope m_hedge_scope{};
        hedge_session m_hedge_session{};
        order_create_dttm m_order_create_dttm{};
        order_create_latency m_order_create_latency{};
        cancel_reason m_cancel_reason{};
        order_cancel_dttm m_order_cancel_dttm{};
        order_cancel_latency m_order_cancel_latency{};
        order_working_dttm m_order_working_dttm{};
        order_closed_dttm m_order_closed_dttm{};
        order_closed_text m_order_closed_text{};
        max_exposure_size m_max_exposure_size{};
        public_size m_public_size{};
        can_overlap_cxl_repl m_can_overlap_cxl_repl{};
        progress_expose_time m_progress_expose_time{};
        progress_rule m_progress_rule{};
        progress_slice_cnt m_progress_slice_cnt{};
        vwap_participation m_vwap_participation{};
        auction_responder m_auction_responder{};
        max_make_exch_fee m_max_make_exch_fee{};
        max_take_exch_fee m_max_take_exch_fee{};
        inc_take_exch_fee m_inc_take_exch_fee{};
        inc_make_exch_fee m_inc_make_exch_fee{};
        make_exch_rule m_make_exch_rule{};
        cxl_uprc_range m_cxl_uprc_range{};
        min_ubid m_min_ubid{};
        max_uask m_max_uask{};
        min_option_px m_min_option_px{};
        max_child_orders m_max_child_orders{};
        order_duration m_order_duration{};
        take_reach_rule m_take_reach_rule{};
        order_prc_limit m_order_prc_limit{};
        order_ref_uprc m_order_ref_uprc{};
        order_ref_delta m_order_ref_delta{};
        order_ref_gamma m_order_ref_gamma{};
        order_vol_limit m_order_vol_limit{};
        rate_override m_rate_override{};
        sdiv_override m_sdiv_override{};
        ddiv_override m_ddiv_override{};
        override_code m_override_code{};
        order_prc_offset m_order_prc_offset{};
        take_alpha_type m_take_alpha_type{};
        make_alpha_type m_make_alpha_type{};
        take_alpha_factor m_take_alpha_factor{};
        make_alpha_factor m_make_alpha_factor{};
        take_probability m_take_probability{};
        make_probability m_make_probability{};
        take_surf_prc_offset m_take_surf_prc_offset{};
        take_surf_vol_offset m_take_surf_vol_offset{};
        take_surf_width_offset m_take_surf_width_offset{};
        make_surf_prc_offset m_make_surf_prc_offset{};
        make_surf_vol_offset m_make_surf_vol_offset{};
        make_surf_width_offset m_make_surf_width_offset{};
        order_ref_event_mult m_order_ref_event_mult{};
        order_ref_event_dttm m_order_ref_event_dttm{};
        nbbo_cap m_nbbo_cap{};
        extern_hedge_ex_dest m_extern_hedge_ex_dest{};
        extern_hedge_params m_extern_hedge_params{};
        spdr_order_status m_spdr_order_status{};
        spdr_close_reason m_spdr_close_reason{};
        spdr_reject_reason m_spdr_reject_reason{};
        spdr_reject_level m_spdr_reject_level{};
        firm_type m_firm_type{};
        order_capacity m_order_capacity{};
        ssale_flag m_ssale_flag{};
        position_type m_position_type{};
        arrive_firm_pos m_arrive_firm_pos{};
        arrive_ssale_flag m_arrive_ssale_flag{};
        no_cross_group m_no_cross_group{};
        exch_trader_id m_exch_trader_id{};
        large_trader_id m_large_trader_id{};
        trading_location m_trading_location{};
        firm_position m_firm_position{};
        open_sell_sh m_open_sell_sh{};
        locate_quan m_locate_quan{};
        locate_firm m_locate_firm{};
        locate_pool m_locate_pool{};
        clearing_firm m_clearing_firm{};
        clearing_accnt m_clearing_accnt{};
        cat_reportable m_cat_reportable{};
        cat_src_brkr_imid m_cat_src_brkr_imid{};
        cat_src_accnt_type m_cat_src_accnt_type{};
        cat_src_firm_type m_cat_src_firm_type{};
        cat_dest_dept_type m_cat_dest_dept_type{};
        cat_accnt m_cat_accnt{};
        cat_brkr_accnt m_cat_brkr_accnt{};
        cum_fill_quantity m_cum_fill_quantity{};
        avg_fill_price m_avg_fill_price{};
        avg_fill_uprice m_avg_fill_uprice{};
        leaves_qty m_leaves_qty{};
        last_fill_number m_last_fill_number{};
        last_fill_dttm m_last_fill_dttm{};
        review_cl_ord_id m_review_cl_ord_id{};
        review_orig_cl_ord_id m_review_orig_cl_ord_id{};
        review_cancel_cl_ord_id m_review_cancel_cl_ord_id{};
        review_order_size m_review_order_size{};
        review_order_active_size m_review_order_active_size{};
        review_cum_fill_quantity m_review_cum_fill_quantity{};
        review_avg_fill_price m_review_avg_fill_price{};
        review_leaves_qty m_review_leaves_qty{};
        review_order_status m_review_order_status{};
        max_progress m_max_progress{};
        max_progress_detail m_max_progress_detail{};
        max_progress_time m_max_progress_time{};
        num_child_orders m_num_child_orders{};
        nbbo_bid m_nbbo_bid{};
        nbbo_ask m_nbbo_ask{};
        nbbo_bid_sz m_nbbo_bid_sz{};
        nbbo_ask_sz m_nbbo_ask_sz{};
        mkt_stance m_mkt_stance{};
        parent_strategy m_parent_strategy{};
        ticker m_ticker{};
        tick_value m_tick_value{};
        point_value m_point_value{};
        point_currency m_point_currency{};
        notional_mult m_notional_mult{};
        security_id m_security_id{};
        security_desc m_security_desc{};
        product_group m_product_group{};
        product_class m_product_class{};
        und_key m_und_key{};
        und_type m_und_type{};
        u_sec_desc m_u_sec_desc{};
        price_format m_price_format{};
        user_data1 m_user_data1{};
        user_data2 m_user_data2{};
        timestamp m_timestamp{};
        include_srnetwork m_include_srnetwork{};
        alt_cross_id__v7 m_alt_cross_id__v7{};
        exec_broker_accnt__v7 m_exec_broker_accnt__v7{};
        exec_broker_cl_firm__v7 m_exec_broker_cl_firm__v7{};
        exec_username__v7 m_exec_username__v7{};
        data_center__v7 m_data_center__v7{};
        time_in_force__v7 m_time_in_force__v7{};
        hedge_tif__v7 m_hedge_tif__v7{};
        locate_source__v7 m_locate_source__v7{};
        clearing_flip_type__v7 m_clearing_flip_type__v7{};
        clearing_flip_firm__v7 m_clearing_flip_firm__v7{};
        clearing_flip_accnt__v7 m_clearing_flip_accnt__v7{};
        review_routing_code__v7 m_review_routing_code__v7{};
        progress_timeout__v7 m_progress_timeout__v7{};
        std::vector<directed_counter_party> m_directed_counter_party{};
        std::vector<face_legs__v7> m_face_legs__v7{};
        std::vector<face_side__v7> m_face_side__v7{};
        std::vector<order_legs> m_order_legs{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        sys_realm get_sys_realm() const {
            return m_sys_realm;
        }		
        sys_environment get_sys_environment() const {
            return m_sys_environment;
        }		
        run_status get_run_status() const {
            return m_run_status;
        }		
        report_number get_report_number() const {
            return m_report_number;
        }		
        parent_shape get_parent_shape() const {
            return m_parent_shape;
        }		
        record_version get_record_version() const {
            return m_record_version;
        }		
        record_source get_record_source() const {
            return m_record_source;
        }		
        parent_version get_parent_version() const {
            return m_parent_version;
        }		
        base_parent_number get_base_parent_number() const {
            return m_base_parent_number;
        }		
        prev_parent_number get_prev_parent_number() const {
            return m_prev_parent_number;
        }		
        next_parent_number get_next_parent_number() const {
            return m_next_parent_number;
        }		
        spdr_action_type get_spdr_action_type() const {
            return m_spdr_action_type;
        }		
        prev_parent_create_dttm get_prev_parent_create_dttm() const {
            return m_prev_parent_create_dttm;
        }		
        prev_parent_cum_fill_qty get_prev_parent_cum_fill_qty() const {
            return m_prev_parent_cum_fill_qty;
        }		
        client_seq_num_in get_client_seq_num_in() const {
            return m_client_seq_num_in;
        }		
        alt_order_id get_alt_order_id() const {
            return m_alt_order_id;
        }		
        alt_prev_order_id get_alt_prev_order_id() const {
            return m_alt_prev_order_id;
        }		
        alt_cancel_id get_alt_cancel_id() const {
            return m_alt_cancel_id;
        }		
        src_routing_code get_src_routing_code() const {
            return m_src_routing_code;
        }		
        package_id get_package_id() const {
            return m_package_id;
        }		
        prev_package_id get_prev_package_id() const {
            return m_prev_package_id;
        }		
        risk_group_id get_risk_group_id() const {
            return m_risk_group_id;
        }		
        trigger_group_id get_trigger_group_id() const {
            return m_trigger_group_id;
        }		
        sec_key get_sec_key() const {
            return m_sec_key;
        }		
        sec_type get_sec_type() const {
            return m_sec_type;
        }		
        accnt get_accnt() const {
            return m_accnt;
        }		
        client_firm get_client_firm() const {
            return m_client_firm;
        }		
        core_client_firm get_core_client_firm() const {
            return m_core_client_firm;
        }		
        sponsor_client_firm get_sponsor_client_firm() const {
            return m_sponsor_client_firm;
        }		
        client_accnt get_client_accnt() const {
            return m_client_accnt;
        }		
        user_name get_user_name() const {
            return m_user_name;
        }		
        user_source get_user_source() const {
            return m_user_source;
        }		
        alt_accnt get_alt_accnt() const {
            return m_alt_accnt;
        }		
        alt_user_name get_alt_user_name() const {
            return m_alt_user_name;
        }		
        exec_brkr_code get_exec_brkr_code() const {
            return m_exec_brkr_code;
        }		
        extern_ex_dest get_extern_ex_dest() const {
            return m_extern_ex_dest;
        }		
        extern_params get_extern_params() const {
            return m_extern_params;
        }		
        spdr_source get_spdr_source() const {
            return m_spdr_source;
        }		
        grouping_code get_grouping_code() const {
            return m_grouping_code;
        }		
        engine_name get_engine_name() const {
            return m_engine_name;
        }		
        order_dttm get_order_dttm() const {
            return m_order_dttm;
        }		
        order_side get_order_side() const {
            return m_order_side;
        }		
        price_type get_price_type() const {
            return m_price_type;
        }		
        order_size get_order_size() const {
            return m_order_size;
        }		
        order_active_size get_order_active_size() const {
            return m_order_active_size;
        }		
        spdr_stage_type get_spdr_stage_type() const {
            return m_spdr_stage_type;
        }		
        stage_review get_stage_review() const {
            return m_stage_review;
        }		
        parent_order_handling get_parent_order_handling() const {
            return m_parent_order_handling;
        }		
        parent_balance_handling get_parent_balance_handling() const {
            return m_parent_balance_handling;
        }		
        limit_price get_limit_price() const {
            return m_limit_price;
        }		
        order_limit_type get_order_limit_type() const {
            return m_order_limit_type;
        }		
        take_limit_class get_take_limit_class() const {
            return m_take_limit_class;
        }		
        make_limit_class get_make_limit_class() const {
            return m_make_limit_class;
        }		
        start_type get_start_type() const {
            return m_start_type;
        }		
        market_session get_market_session() const {
            return m_market_session;
        }		
        active_duration get_active_duration() const {
            return m_active_duration;
        }		
        start_dttm get_start_dttm() const {
            return m_start_dttm;
        }		
        good_till_dttm get_good_till_dttm() const {
            return m_good_till_dttm;
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
        order_create_dttm get_order_create_dttm() const {
            return m_order_create_dttm;
        }		
        order_create_latency get_order_create_latency() const {
            return m_order_create_latency;
        }		
        cancel_reason get_cancel_reason() const {
            return m_cancel_reason;
        }		
        order_cancel_dttm get_order_cancel_dttm() const {
            return m_order_cancel_dttm;
        }		
        order_cancel_latency get_order_cancel_latency() const {
            return m_order_cancel_latency;
        }		
        order_working_dttm get_order_working_dttm() const {
            return m_order_working_dttm;
        }		
        order_closed_dttm get_order_closed_dttm() const {
            return m_order_closed_dttm;
        }		
        order_closed_text get_order_closed_text() const {
            return m_order_closed_text;
        }		
        max_exposure_size get_max_exposure_size() const {
            return m_max_exposure_size;
        }		
        public_size get_public_size() const {
            return m_public_size;
        }		
        can_overlap_cxl_repl get_can_overlap_cxl_repl() const {
            return m_can_overlap_cxl_repl;
        }		
        progress_expose_time get_progress_expose_time() const {
            return m_progress_expose_time;
        }		
        progress_rule get_progress_rule() const {
            return m_progress_rule;
        }		
        progress_slice_cnt get_progress_slice_cnt() const {
            return m_progress_slice_cnt;
        }		
        vwap_participation get_vwap_participation() const {
            return m_vwap_participation;
        }		
        auction_responder get_auction_responder() const {
            return m_auction_responder;
        }		
        max_make_exch_fee get_max_make_exch_fee() const {
            return m_max_make_exch_fee;
        }		
        max_take_exch_fee get_max_take_exch_fee() const {
            return m_max_take_exch_fee;
        }		
        inc_take_exch_fee get_inc_take_exch_fee() const {
            return m_inc_take_exch_fee;
        }		
        inc_make_exch_fee get_inc_make_exch_fee() const {
            return m_inc_make_exch_fee;
        }		
        make_exch_rule get_make_exch_rule() const {
            return m_make_exch_rule;
        }		
        cxl_uprc_range get_cxl_uprc_range() const {
            return m_cxl_uprc_range;
        }		
        min_ubid get_min_ubid() const {
            return m_min_ubid;
        }		
        max_uask get_max_uask() const {
            return m_max_uask;
        }		
        min_option_px get_min_option_px() const {
            return m_min_option_px;
        }		
        max_child_orders get_max_child_orders() const {
            return m_max_child_orders;
        }		
        order_duration get_order_duration() const {
            return m_order_duration;
        }		
        take_reach_rule get_take_reach_rule() const {
            return m_take_reach_rule;
        }		
        order_prc_limit get_order_prc_limit() const {
            return m_order_prc_limit;
        }		
        order_ref_uprc get_order_ref_uprc() const {
            return m_order_ref_uprc;
        }		
        order_ref_delta get_order_ref_delta() const {
            return m_order_ref_delta;
        }		
        order_ref_gamma get_order_ref_gamma() const {
            return m_order_ref_gamma;
        }		
        order_vol_limit get_order_vol_limit() const {
            return m_order_vol_limit;
        }		
        rate_override get_rate_override() const {
            return m_rate_override;
        }		
        sdiv_override get_sdiv_override() const {
            return m_sdiv_override;
        }		
        ddiv_override get_ddiv_override() const {
            return m_ddiv_override;
        }		
        override_code get_override_code() const {
            return m_override_code;
        }		
        order_prc_offset get_order_prc_offset() const {
            return m_order_prc_offset;
        }		
        take_alpha_type get_take_alpha_type() const {
            return m_take_alpha_type;
        }		
        make_alpha_type get_make_alpha_type() const {
            return m_make_alpha_type;
        }		
        take_alpha_factor get_take_alpha_factor() const {
            return m_take_alpha_factor;
        }		
        make_alpha_factor get_make_alpha_factor() const {
            return m_make_alpha_factor;
        }		
        take_probability get_take_probability() const {
            return m_take_probability;
        }		
        make_probability get_make_probability() const {
            return m_make_probability;
        }		
        take_surf_prc_offset get_take_surf_prc_offset() const {
            return m_take_surf_prc_offset;
        }		
        take_surf_vol_offset get_take_surf_vol_offset() const {
            return m_take_surf_vol_offset;
        }		
        take_surf_width_offset get_take_surf_width_offset() const {
            return m_take_surf_width_offset;
        }		
        make_surf_prc_offset get_make_surf_prc_offset() const {
            return m_make_surf_prc_offset;
        }		
        make_surf_vol_offset get_make_surf_vol_offset() const {
            return m_make_surf_vol_offset;
        }		
        make_surf_width_offset get_make_surf_width_offset() const {
            return m_make_surf_width_offset;
        }		
        order_ref_event_mult get_order_ref_event_mult() const {
            return m_order_ref_event_mult;
        }		
        order_ref_event_dttm get_order_ref_event_dttm() const {
            return m_order_ref_event_dttm;
        }		
        nbbo_cap get_nbbo_cap() const {
            return m_nbbo_cap;
        }		
        extern_hedge_ex_dest get_extern_hedge_ex_dest() const {
            return m_extern_hedge_ex_dest;
        }		
        extern_hedge_params get_extern_hedge_params() const {
            return m_extern_hedge_params;
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
        firm_type get_firm_type() const {
            return m_firm_type;
        }		
        order_capacity get_order_capacity() const {
            return m_order_capacity;
        }		
        ssale_flag get_ssale_flag() const {
            return m_ssale_flag;
        }		
        position_type get_position_type() const {
            return m_position_type;
        }		
        arrive_firm_pos get_arrive_firm_pos() const {
            return m_arrive_firm_pos;
        }		
        arrive_ssale_flag get_arrive_ssale_flag() const {
            return m_arrive_ssale_flag;
        }		
        no_cross_group get_no_cross_group() const {
            return m_no_cross_group;
        }		
        exch_trader_id get_exch_trader_id() const {
            return m_exch_trader_id;
        }		
        large_trader_id get_large_trader_id() const {
            return m_large_trader_id;
        }		
        trading_location get_trading_location() const {
            return m_trading_location;
        }		
        firm_position get_firm_position() const {
            return m_firm_position;
        }		
        open_sell_sh get_open_sell_sh() const {
            return m_open_sell_sh;
        }		
        locate_quan get_locate_quan() const {
            return m_locate_quan;
        }		
        locate_firm get_locate_firm() const {
            return m_locate_firm;
        }		
        locate_pool get_locate_pool() const {
            return m_locate_pool;
        }		
        clearing_firm get_clearing_firm() const {
            return m_clearing_firm;
        }		
        clearing_accnt get_clearing_accnt() const {
            return m_clearing_accnt;
        }		
        cat_reportable get_cat_reportable() const {
            return m_cat_reportable;
        }		
        cat_src_brkr_imid get_cat_src_brkr_imid() const {
            return m_cat_src_brkr_imid;
        }		
        cat_src_accnt_type get_cat_src_accnt_type() const {
            return m_cat_src_accnt_type;
        }		
        cat_src_firm_type get_cat_src_firm_type() const {
            return m_cat_src_firm_type;
        }		
        cat_dest_dept_type get_cat_dest_dept_type() const {
            return m_cat_dest_dept_type;
        }		
        cat_accnt get_cat_accnt() const {
            return m_cat_accnt;
        }		
        cat_brkr_accnt get_cat_brkr_accnt() const {
            return m_cat_brkr_accnt;
        }		
        cum_fill_quantity get_cum_fill_quantity() const {
            return m_cum_fill_quantity;
        }		
        avg_fill_price get_avg_fill_price() const {
            return m_avg_fill_price;
        }		
        avg_fill_uprice get_avg_fill_uprice() const {
            return m_avg_fill_uprice;
        }		
        leaves_qty get_leaves_qty() const {
            return m_leaves_qty;
        }		
        last_fill_number get_last_fill_number() const {
            return m_last_fill_number;
        }		
        last_fill_dttm get_last_fill_dttm() const {
            return m_last_fill_dttm;
        }		
        review_cl_ord_id get_review_cl_ord_id() const {
            return m_review_cl_ord_id;
        }		
        review_orig_cl_ord_id get_review_orig_cl_ord_id() const {
            return m_review_orig_cl_ord_id;
        }		
        review_cancel_cl_ord_id get_review_cancel_cl_ord_id() const {
            return m_review_cancel_cl_ord_id;
        }		
        review_order_size get_review_order_size() const {
            return m_review_order_size;
        }		
        review_order_active_size get_review_order_active_size() const {
            return m_review_order_active_size;
        }		
        review_cum_fill_quantity get_review_cum_fill_quantity() const {
            return m_review_cum_fill_quantity;
        }		
        review_avg_fill_price get_review_avg_fill_price() const {
            return m_review_avg_fill_price;
        }		
        review_leaves_qty get_review_leaves_qty() const {
            return m_review_leaves_qty;
        }		
        review_order_status get_review_order_status() const {
            return m_review_order_status;
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
        num_child_orders get_num_child_orders() const {
            return m_num_child_orders;
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
        mkt_stance get_mkt_stance() const {
            return m_mkt_stance;
        }		
        parent_strategy get_parent_strategy() const {
            return m_parent_strategy;
        }		
        ticker get_ticker() const {
            return m_ticker;
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
        notional_mult get_notional_mult() const {
            return m_notional_mult;
        }		
        security_id get_security_id() const {
            return m_security_id;
        }		
        security_desc get_security_desc() const {
            return m_security_desc;
        }		
        product_group get_product_group() const {
            return m_product_group;
        }		
        product_class get_product_class() const {
            return m_product_class;
        }		
        und_key get_und_key() const {
            return m_und_key;
        }		
        und_type get_und_type() const {
            return m_und_type;
        }		
        u_sec_desc get_u_sec_desc() const {
            return m_u_sec_desc;
        }		
        price_format get_price_format() const {
            return m_price_format;
        }		
        user_data1 get_user_data1() const {
            return m_user_data1;
        }		
        user_data2 get_user_data2() const {
            return m_user_data2;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }		
        include_srnetwork get_include_srnetwork() const {
            return m_include_srnetwork;
        }		
        alt_cross_id__v7 get_alt_cross_id__v7() const {
            return m_alt_cross_id__v7;
        }		
        exec_broker_accnt__v7 get_exec_broker_accnt__v7() const {
            return m_exec_broker_accnt__v7;
        }		
        exec_broker_cl_firm__v7 get_exec_broker_cl_firm__v7() const {
            return m_exec_broker_cl_firm__v7;
        }		
        exec_username__v7 get_exec_username__v7() const {
            return m_exec_username__v7;
        }		
        data_center__v7 get_data_center__v7() const {
            return m_data_center__v7;
        }		
        time_in_force__v7 get_time_in_force__v7() const {
            return m_time_in_force__v7;
        }		
        hedge_tif__v7 get_hedge_tif__v7() const {
            return m_hedge_tif__v7;
        }		
        locate_source__v7 get_locate_source__v7() const {
            return m_locate_source__v7;
        }		
        clearing_flip_type__v7 get_clearing_flip_type__v7() const {
            return m_clearing_flip_type__v7;
        }		
        clearing_flip_firm__v7 get_clearing_flip_firm__v7() const {
            return m_clearing_flip_firm__v7;
        }		
        clearing_flip_accnt__v7 get_clearing_flip_accnt__v7() const {
            return m_clearing_flip_accnt__v7;
        }		
        review_routing_code__v7 get_review_routing_code__v7() const {
            return m_review_routing_code__v7;
        }		
        progress_timeout__v7 get_progress_timeout__v7() const {
            return m_progress_timeout__v7;
        }
        const std::vector<directed_counter_party>& get_directed_counter_party_list() const {
            return m_directed_counter_party;
        }
        const directed_counter_party& get_directed_counter_party(const int i) const {
            return m_directed_counter_party.at(i);
        }
        const std::vector<face_legs__v7>& get_face_legs__v7_list() const {
            return m_face_legs__v7;
        }
        const face_legs__v7& get_face_legs__v7(const int i) const {
            return m_face_legs__v7.at(i);
        }
        const std::vector<face_side__v7>& get_face_side__v7_list() const {
            return m_face_side__v7;
        }
        const face_side__v7& get_face_side__v7(const int i) const {
            return m_face_side__v7.at(i);
        }
        const std::vector<order_legs>& get_order_legs_list() const {
            return m_order_legs;
        }
        const order_legs& get_order_legs(const int i) const {
            return m_order_legs.at(i);
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
        void set_sys_realm(const sys_realm& value)  {
            m_sys_realm = value;
        }
        void set_sys_environment(const sys_environment& value)  {
            m_sys_environment = value;
        }
        void set_run_status(const run_status& value)  {
            m_run_status = value;
        }
        void set_report_number(const report_number& value)  {
            m_report_number = value;
        }
        void set_parent_shape(const parent_shape& value)  {
            m_parent_shape = value;
        }
        void set_record_version(const record_version& value)  {
            m_record_version = value;
        }
        void set_record_source(const record_source& value)  {
            m_record_source = value;
        }
        void set_parent_version(const parent_version& value)  {
            m_parent_version = value;
        }
        void set_base_parent_number(const base_parent_number& value)  {
            m_base_parent_number = value;
        }
        void set_prev_parent_number(const prev_parent_number& value)  {
            m_prev_parent_number = value;
        }
        void set_next_parent_number(const next_parent_number& value)  {
            m_next_parent_number = value;
        }
        void set_spdr_action_type(const spdr_action_type& value)  {
            m_spdr_action_type = value;
        }
        void set_prev_parent_create_dttm(const prev_parent_create_dttm& value)  {
            m_prev_parent_create_dttm = value;
        }
        void set_prev_parent_cum_fill_qty(const prev_parent_cum_fill_qty& value)  {
            m_prev_parent_cum_fill_qty = value;
        }
        void set_client_seq_num_in(const client_seq_num_in& value)  {
            m_client_seq_num_in = value;
        }
        void set_alt_order_id(const alt_order_id& value)  {
            m_alt_order_id = value;
        }
        void set_alt_prev_order_id(const alt_prev_order_id& value)  {
            m_alt_prev_order_id = value;
        }
        void set_alt_cancel_id(const alt_cancel_id& value)  {
            m_alt_cancel_id = value;
        }
        void set_src_routing_code(const src_routing_code& value)  {
            m_src_routing_code = value;
        }
        void set_package_id(const package_id& value)  {
            m_package_id = value;
        }
        void set_prev_package_id(const prev_package_id& value)  {
            m_prev_package_id = value;
        }
        void set_risk_group_id(const risk_group_id& value)  {
            m_risk_group_id = value;
        }
        void set_trigger_group_id(const trigger_group_id& value)  {
            m_trigger_group_id = value;
        }
        void set_sec_key(const sec_key& value)  {
            m_sec_key = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_core_client_firm(const core_client_firm& value)  {
            m_core_client_firm = value;
        }
        void set_sponsor_client_firm(const sponsor_client_firm& value)  {
            m_sponsor_client_firm = value;
        }
        void set_client_accnt(const client_accnt& value)  {
            m_client_accnt = value;
        }
        void set_user_name(const user_name& value)  {
            m_user_name = value;
        }
        void set_user_source(const user_source& value)  {
            m_user_source = value;
        }
        void set_alt_accnt(const alt_accnt& value)  {
            m_alt_accnt = value;
        }
        void set_alt_user_name(const alt_user_name& value)  {
            m_alt_user_name = value;
        }
        void set_exec_brkr_code(const exec_brkr_code& value)  {
            m_exec_brkr_code = value;
        }
        void set_extern_ex_dest(const extern_ex_dest& value)  {
            m_extern_ex_dest = value;
        }
        void set_extern_params(const extern_params& value)  {
            m_extern_params = value;
        }
        void set_spdr_source(const spdr_source& value)  {
            m_spdr_source = value;
        }
        void set_grouping_code(const grouping_code& value)  {
            m_grouping_code = value;
        }
        void set_engine_name(const engine_name& value)  {
            m_engine_name = value;
        }
        void set_order_dttm(const order_dttm& value)  {
            m_order_dttm = value;
        }
        void set_order_side(const order_side& value)  {
            m_order_side = value;
        }
        void set_price_type(const price_type& value)  {
            m_price_type = value;
        }
        void set_order_size(const order_size& value)  {
            m_order_size = value;
        }
        void set_order_active_size(const order_active_size& value)  {
            m_order_active_size = value;
        }
        void set_spdr_stage_type(const spdr_stage_type& value)  {
            m_spdr_stage_type = value;
        }
        void set_stage_review(const stage_review& value)  {
            m_stage_review = value;
        }
        void set_parent_order_handling(const parent_order_handling& value)  {
            m_parent_order_handling = value;
        }
        void set_parent_balance_handling(const parent_balance_handling& value)  {
            m_parent_balance_handling = value;
        }
        void set_limit_price(const limit_price& value)  {
            m_limit_price = value;
        }
        void set_order_limit_type(const order_limit_type& value)  {
            m_order_limit_type = value;
        }
        void set_take_limit_class(const take_limit_class& value)  {
            m_take_limit_class = value;
        }
        void set_make_limit_class(const make_limit_class& value)  {
            m_make_limit_class = value;
        }
        void set_start_type(const start_type& value)  {
            m_start_type = value;
        }
        void set_market_session(const market_session& value)  {
            m_market_session = value;
        }
        void set_active_duration(const active_duration& value)  {
            m_active_duration = value;
        }
        void set_start_dttm(const start_dttm& value)  {
            m_start_dttm = value;
        }
        void set_good_till_dttm(const good_till_dttm& value)  {
            m_good_till_dttm = value;
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
        void set_order_create_dttm(const order_create_dttm& value)  {
            m_order_create_dttm = value;
        }
        void set_order_create_latency(const order_create_latency& value)  {
            m_order_create_latency = value;
        }
        void set_cancel_reason(const cancel_reason& value)  {
            m_cancel_reason = value;
        }
        void set_order_cancel_dttm(const order_cancel_dttm& value)  {
            m_order_cancel_dttm = value;
        }
        void set_order_cancel_latency(const order_cancel_latency& value)  {
            m_order_cancel_latency = value;
        }
        void set_order_working_dttm(const order_working_dttm& value)  {
            m_order_working_dttm = value;
        }
        void set_order_closed_dttm(const order_closed_dttm& value)  {
            m_order_closed_dttm = value;
        }
        void set_order_closed_text(const order_closed_text& value)  {
            m_order_closed_text = value;
        }
        void set_max_exposure_size(const max_exposure_size& value)  {
            m_max_exposure_size = value;
        }
        void set_public_size(const public_size& value)  {
            m_public_size = value;
        }
        void set_can_overlap_cxl_repl(const can_overlap_cxl_repl& value)  {
            m_can_overlap_cxl_repl = value;
        }
        void set_progress_expose_time(const progress_expose_time& value)  {
            m_progress_expose_time = value;
        }
        void set_progress_rule(const progress_rule& value)  {
            m_progress_rule = value;
        }
        void set_progress_slice_cnt(const progress_slice_cnt& value)  {
            m_progress_slice_cnt = value;
        }
        void set_vwap_participation(const vwap_participation& value)  {
            m_vwap_participation = value;
        }
        void set_auction_responder(const auction_responder& value)  {
            m_auction_responder = value;
        }
        void set_max_make_exch_fee(const max_make_exch_fee& value)  {
            m_max_make_exch_fee = value;
        }
        void set_max_take_exch_fee(const max_take_exch_fee& value)  {
            m_max_take_exch_fee = value;
        }
        void set_inc_take_exch_fee(const inc_take_exch_fee& value)  {
            m_inc_take_exch_fee = value;
        }
        void set_inc_make_exch_fee(const inc_make_exch_fee& value)  {
            m_inc_make_exch_fee = value;
        }
        void set_make_exch_rule(const make_exch_rule& value)  {
            m_make_exch_rule = value;
        }
        void set_cxl_uprc_range(const cxl_uprc_range& value)  {
            m_cxl_uprc_range = value;
        }
        void set_min_ubid(const min_ubid& value)  {
            m_min_ubid = value;
        }
        void set_max_uask(const max_uask& value)  {
            m_max_uask = value;
        }
        void set_min_option_px(const min_option_px& value)  {
            m_min_option_px = value;
        }
        void set_max_child_orders(const max_child_orders& value)  {
            m_max_child_orders = value;
        }
        void set_order_duration(const order_duration& value)  {
            m_order_duration = value;
        }
        void set_take_reach_rule(const take_reach_rule& value)  {
            m_take_reach_rule = value;
        }
        void set_order_prc_limit(const order_prc_limit& value)  {
            m_order_prc_limit = value;
        }
        void set_order_ref_uprc(const order_ref_uprc& value)  {
            m_order_ref_uprc = value;
        }
        void set_order_ref_delta(const order_ref_delta& value)  {
            m_order_ref_delta = value;
        }
        void set_order_ref_gamma(const order_ref_gamma& value)  {
            m_order_ref_gamma = value;
        }
        void set_order_vol_limit(const order_vol_limit& value)  {
            m_order_vol_limit = value;
        }
        void set_rate_override(const rate_override& value)  {
            m_rate_override = value;
        }
        void set_sdiv_override(const sdiv_override& value)  {
            m_sdiv_override = value;
        }
        void set_ddiv_override(const ddiv_override& value)  {
            m_ddiv_override = value;
        }
        void set_override_code(const override_code& value)  {
            m_override_code = value;
        }
        void set_order_prc_offset(const order_prc_offset& value)  {
            m_order_prc_offset = value;
        }
        void set_take_alpha_type(const take_alpha_type& value)  {
            m_take_alpha_type = value;
        }
        void set_make_alpha_type(const make_alpha_type& value)  {
            m_make_alpha_type = value;
        }
        void set_take_alpha_factor(const take_alpha_factor& value)  {
            m_take_alpha_factor = value;
        }
        void set_make_alpha_factor(const make_alpha_factor& value)  {
            m_make_alpha_factor = value;
        }
        void set_take_probability(const take_probability& value)  {
            m_take_probability = value;
        }
        void set_make_probability(const make_probability& value)  {
            m_make_probability = value;
        }
        void set_take_surf_prc_offset(const take_surf_prc_offset& value)  {
            m_take_surf_prc_offset = value;
        }
        void set_take_surf_vol_offset(const take_surf_vol_offset& value)  {
            m_take_surf_vol_offset = value;
        }
        void set_take_surf_width_offset(const take_surf_width_offset& value)  {
            m_take_surf_width_offset = value;
        }
        void set_make_surf_prc_offset(const make_surf_prc_offset& value)  {
            m_make_surf_prc_offset = value;
        }
        void set_make_surf_vol_offset(const make_surf_vol_offset& value)  {
            m_make_surf_vol_offset = value;
        }
        void set_make_surf_width_offset(const make_surf_width_offset& value)  {
            m_make_surf_width_offset = value;
        }
        void set_order_ref_event_mult(const order_ref_event_mult& value)  {
            m_order_ref_event_mult = value;
        }
        void set_order_ref_event_dttm(const order_ref_event_dttm& value)  {
            m_order_ref_event_dttm = value;
        }
        void set_nbbo_cap(const nbbo_cap& value)  {
            m_nbbo_cap = value;
        }
        void set_extern_hedge_ex_dest(const extern_hedge_ex_dest& value)  {
            m_extern_hedge_ex_dest = value;
        }
        void set_extern_hedge_params(const extern_hedge_params& value)  {
            m_extern_hedge_params = value;
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
        void set_firm_type(const firm_type& value)  {
            m_firm_type = value;
        }
        void set_order_capacity(const order_capacity& value)  {
            m_order_capacity = value;
        }
        void set_ssale_flag(const ssale_flag& value)  {
            m_ssale_flag = value;
        }
        void set_position_type(const position_type& value)  {
            m_position_type = value;
        }
        void set_arrive_firm_pos(const arrive_firm_pos& value)  {
            m_arrive_firm_pos = value;
        }
        void set_arrive_ssale_flag(const arrive_ssale_flag& value)  {
            m_arrive_ssale_flag = value;
        }
        void set_no_cross_group(const no_cross_group& value)  {
            m_no_cross_group = value;
        }
        void set_exch_trader_id(const exch_trader_id& value)  {
            m_exch_trader_id = value;
        }
        void set_large_trader_id(const large_trader_id& value)  {
            m_large_trader_id = value;
        }
        void set_trading_location(const trading_location& value)  {
            m_trading_location = value;
        }
        void set_firm_position(const firm_position& value)  {
            m_firm_position = value;
        }
        void set_open_sell_sh(const open_sell_sh& value)  {
            m_open_sell_sh = value;
        }
        void set_locate_quan(const locate_quan& value)  {
            m_locate_quan = value;
        }
        void set_locate_firm(const locate_firm& value)  {
            m_locate_firm = value;
        }
        void set_locate_pool(const locate_pool& value)  {
            m_locate_pool = value;
        }
        void set_clearing_firm(const clearing_firm& value)  {
            m_clearing_firm = value;
        }
        void set_clearing_accnt(const clearing_accnt& value)  {
            m_clearing_accnt = value;
        }
        void set_cat_reportable(const cat_reportable& value)  {
            m_cat_reportable = value;
        }
        void set_cat_src_brkr_imid(const cat_src_brkr_imid& value)  {
            m_cat_src_brkr_imid = value;
        }
        void set_cat_src_accnt_type(const cat_src_accnt_type& value)  {
            m_cat_src_accnt_type = value;
        }
        void set_cat_src_firm_type(const cat_src_firm_type& value)  {
            m_cat_src_firm_type = value;
        }
        void set_cat_dest_dept_type(const cat_dest_dept_type& value)  {
            m_cat_dest_dept_type = value;
        }
        void set_cat_accnt(const cat_accnt& value)  {
            m_cat_accnt = value;
        }
        void set_cat_brkr_accnt(const cat_brkr_accnt& value)  {
            m_cat_brkr_accnt = value;
        }
        void set_cum_fill_quantity(const cum_fill_quantity& value)  {
            m_cum_fill_quantity = value;
        }
        void set_avg_fill_price(const avg_fill_price& value)  {
            m_avg_fill_price = value;
        }
        void set_avg_fill_uprice(const avg_fill_uprice& value)  {
            m_avg_fill_uprice = value;
        }
        void set_leaves_qty(const leaves_qty& value)  {
            m_leaves_qty = value;
        }
        void set_last_fill_number(const last_fill_number& value)  {
            m_last_fill_number = value;
        }
        void set_last_fill_dttm(const last_fill_dttm& value)  {
            m_last_fill_dttm = value;
        }
        void set_review_cl_ord_id(const review_cl_ord_id& value)  {
            m_review_cl_ord_id = value;
        }
        void set_review_orig_cl_ord_id(const review_orig_cl_ord_id& value)  {
            m_review_orig_cl_ord_id = value;
        }
        void set_review_cancel_cl_ord_id(const review_cancel_cl_ord_id& value)  {
            m_review_cancel_cl_ord_id = value;
        }
        void set_review_order_size(const review_order_size& value)  {
            m_review_order_size = value;
        }
        void set_review_order_active_size(const review_order_active_size& value)  {
            m_review_order_active_size = value;
        }
        void set_review_cum_fill_quantity(const review_cum_fill_quantity& value)  {
            m_review_cum_fill_quantity = value;
        }
        void set_review_avg_fill_price(const review_avg_fill_price& value)  {
            m_review_avg_fill_price = value;
        }
        void set_review_leaves_qty(const review_leaves_qty& value)  {
            m_review_leaves_qty = value;
        }
        void set_review_order_status(const review_order_status& value)  {
            m_review_order_status = value;
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
        void set_num_child_orders(const num_child_orders& value)  {
            m_num_child_orders = value;
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
        void set_mkt_stance(const mkt_stance& value)  {
            m_mkt_stance = value;
        }
        void set_parent_strategy(const parent_strategy& value)  {
            m_parent_strategy = value;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
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
        void set_notional_mult(const notional_mult& value)  {
            m_notional_mult = value;
        }
        void set_security_id(const security_id& value)  {
            m_security_id = value;
        }
        void set_security_desc(const security_desc& value)  {
            m_security_desc = value;
        }
        void set_product_group(const product_group& value)  {
            m_product_group = value;
        }
        void set_product_class(const product_class& value)  {
            m_product_class = value;
        }
        void set_und_key(const und_key& value)  {
            m_und_key = value;
        }
        void set_und_type(const und_type& value)  {
            m_und_type = value;
        }
        void set_u_sec_desc(const u_sec_desc& value)  {
            m_u_sec_desc = value;
        }
        void set_price_format(const price_format& value)  {
            m_price_format = value;
        }
        void set_user_data1(const user_data1& value)  {
            m_user_data1 = value;
        }
        void set_user_data2(const user_data2& value)  {
            m_user_data2 = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_include_srnetwork(const include_srnetwork& value)  {
            m_include_srnetwork = value;
        }
        void set_alt_cross_id__v7(const alt_cross_id__v7& value)  {
            m_alt_cross_id__v7 = value;
        }
        void set_exec_broker_accnt__v7(const exec_broker_accnt__v7& value)  {
            m_exec_broker_accnt__v7 = value;
        }
        void set_exec_broker_cl_firm__v7(const exec_broker_cl_firm__v7& value)  {
            m_exec_broker_cl_firm__v7 = value;
        }
        void set_exec_username__v7(const exec_username__v7& value)  {
            m_exec_username__v7 = value;
        }
        void set_data_center__v7(const data_center__v7& value)  {
            m_data_center__v7 = value;
        }
        void set_time_in_force__v7(const time_in_force__v7& value)  {
            m_time_in_force__v7 = value;
        }
        void set_hedge_tif__v7(const hedge_tif__v7& value)  {
            m_hedge_tif__v7 = value;
        }
        void set_locate_source__v7(const locate_source__v7& value)  {
            m_locate_source__v7 = value;
        }
        void set_clearing_flip_type__v7(const clearing_flip_type__v7& value)  {
            m_clearing_flip_type__v7 = value;
        }
        void set_clearing_flip_firm__v7(const clearing_flip_firm__v7& value)  {
            m_clearing_flip_firm__v7 = value;
        }
        void set_clearing_flip_accnt__v7(const clearing_flip_accnt__v7& value)  {
            m_clearing_flip_accnt__v7 = value;
        }
        void set_review_routing_code__v7(const review_routing_code__v7& value)  {
            m_review_routing_code__v7 = value;
        }
        void set_progress_timeout__v7(const progress_timeout__v7& value)  {
            m_progress_timeout__v7 = value;
        }
        void set_directed_counter_party_list(const std::vector<directed_counter_party>& list)  {
            m_directed_counter_party = list;
        }
        void add_directed_counter_party(const directed_counter_party& item) {
            m_directed_counter_party.emplace_back(item);
        }
        void set_face_legs__v7_list(const std::vector<face_legs__v7>& list)  {
            m_face_legs__v7 = list;
        }
        void add_face_legs__v7(const face_legs__v7& item) {
            m_face_legs__v7.emplace_back(item);
        }
        void set_face_side__v7_list(const std::vector<face_side__v7>& list)  {
            m_face_side__v7 = list;
        }
        void add_face_side__v7(const face_side__v7& item) {
            m_face_side__v7.emplace_back(item);
        }
        void set_order_legs_list(const std::vector<order_legs>& list)  {
            m_order_legs = list;
        }
        void add_order_legs(const order_legs& item) {
            m_order_legs.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentReport::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentReport::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentReport::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const sys_realm & value) {
            set_sys_realm(value);
        }
        void set(const sys_environment & value) {
            set_sys_environment(value);
        }
        void set(const run_status & value) {
            set_run_status(value);
        }
        void set(const report_number & value) {
            set_report_number(value);
        }
        void set(const parent_shape & value) {
            set_parent_shape(value);
        }
        void set(const record_version & value) {
            set_record_version(value);
        }
        void set(const record_source & value) {
            set_record_source(value);
        }
        void set(const parent_version & value) {
            set_parent_version(value);
        }
        void set(const base_parent_number & value) {
            set_base_parent_number(value);
        }
        void set(const prev_parent_number & value) {
            set_prev_parent_number(value);
        }
        void set(const next_parent_number & value) {
            set_next_parent_number(value);
        }
        void set(const spdr_action_type & value) {
            set_spdr_action_type(value);
        }
        void set(const prev_parent_create_dttm & value) {
            set_prev_parent_create_dttm(value);
        }
        void set(const prev_parent_cum_fill_qty & value) {
            set_prev_parent_cum_fill_qty(value);
        }
        void set(const client_seq_num_in & value) {
            set_client_seq_num_in(value);
        }
        void set(const alt_order_id & value) {
            set_alt_order_id(value);
        }
        void set(const alt_prev_order_id & value) {
            set_alt_prev_order_id(value);
        }
        void set(const alt_cancel_id & value) {
            set_alt_cancel_id(value);
        }
        void set(const src_routing_code & value) {
            set_src_routing_code(value);
        }
        void set(const package_id & value) {
            set_package_id(value);
        }
        void set(const prev_package_id & value) {
            set_prev_package_id(value);
        }
        void set(const risk_group_id & value) {
            set_risk_group_id(value);
        }
        void set(const trigger_group_id & value) {
            set_trigger_group_id(value);
        }
        void set(const sec_key & value) {
            set_sec_key(value);
        }
        void set(const sec_type & value) {
            set_sec_type(value);
        }
        void set(const accnt & value) {
            set_accnt(value);
        }
        void set(const client_firm & value) {
            set_client_firm(value);
        }
        void set(const core_client_firm & value) {
            set_core_client_firm(value);
        }
        void set(const sponsor_client_firm & value) {
            set_sponsor_client_firm(value);
        }
        void set(const client_accnt & value) {
            set_client_accnt(value);
        }
        void set(const user_name & value) {
            set_user_name(value);
        }
        void set(const user_source & value) {
            set_user_source(value);
        }
        void set(const alt_accnt & value) {
            set_alt_accnt(value);
        }
        void set(const alt_user_name & value) {
            set_alt_user_name(value);
        }
        void set(const exec_brkr_code & value) {
            set_exec_brkr_code(value);
        }
        void set(const extern_ex_dest & value) {
            set_extern_ex_dest(value);
        }
        void set(const extern_params & value) {
            set_extern_params(value);
        }
        void set(const spdr_source & value) {
            set_spdr_source(value);
        }
        void set(const grouping_code & value) {
            set_grouping_code(value);
        }
        void set(const engine_name & value) {
            set_engine_name(value);
        }
        void set(const order_dttm & value) {
            set_order_dttm(value);
        }
        void set(const order_side & value) {
            set_order_side(value);
        }
        void set(const price_type & value) {
            set_price_type(value);
        }
        void set(const order_size & value) {
            set_order_size(value);
        }
        void set(const order_active_size & value) {
            set_order_active_size(value);
        }
        void set(const spdr_stage_type & value) {
            set_spdr_stage_type(value);
        }
        void set(const stage_review & value) {
            set_stage_review(value);
        }
        void set(const parent_order_handling & value) {
            set_parent_order_handling(value);
        }
        void set(const parent_balance_handling & value) {
            set_parent_balance_handling(value);
        }
        void set(const limit_price & value) {
            set_limit_price(value);
        }
        void set(const order_limit_type & value) {
            set_order_limit_type(value);
        }
        void set(const take_limit_class & value) {
            set_take_limit_class(value);
        }
        void set(const make_limit_class & value) {
            set_make_limit_class(value);
        }
        void set(const start_type & value) {
            set_start_type(value);
        }
        void set(const market_session & value) {
            set_market_session(value);
        }
        void set(const active_duration & value) {
            set_active_duration(value);
        }
        void set(const start_dttm & value) {
            set_start_dttm(value);
        }
        void set(const good_till_dttm & value) {
            set_good_till_dttm(value);
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
        void set(const order_create_dttm & value) {
            set_order_create_dttm(value);
        }
        void set(const order_create_latency & value) {
            set_order_create_latency(value);
        }
        void set(const cancel_reason & value) {
            set_cancel_reason(value);
        }
        void set(const order_cancel_dttm & value) {
            set_order_cancel_dttm(value);
        }
        void set(const order_cancel_latency & value) {
            set_order_cancel_latency(value);
        }
        void set(const order_working_dttm & value) {
            set_order_working_dttm(value);
        }
        void set(const order_closed_dttm & value) {
            set_order_closed_dttm(value);
        }
        void set(const order_closed_text & value) {
            set_order_closed_text(value);
        }
        void set(const max_exposure_size & value) {
            set_max_exposure_size(value);
        }
        void set(const public_size & value) {
            set_public_size(value);
        }
        void set(const can_overlap_cxl_repl & value) {
            set_can_overlap_cxl_repl(value);
        }
        void set(const progress_expose_time & value) {
            set_progress_expose_time(value);
        }
        void set(const progress_rule & value) {
            set_progress_rule(value);
        }
        void set(const progress_slice_cnt & value) {
            set_progress_slice_cnt(value);
        }
        void set(const vwap_participation & value) {
            set_vwap_participation(value);
        }
        void set(const auction_responder & value) {
            set_auction_responder(value);
        }
        void set(const max_make_exch_fee & value) {
            set_max_make_exch_fee(value);
        }
        void set(const max_take_exch_fee & value) {
            set_max_take_exch_fee(value);
        }
        void set(const inc_take_exch_fee & value) {
            set_inc_take_exch_fee(value);
        }
        void set(const inc_make_exch_fee & value) {
            set_inc_make_exch_fee(value);
        }
        void set(const make_exch_rule & value) {
            set_make_exch_rule(value);
        }
        void set(const cxl_uprc_range & value) {
            set_cxl_uprc_range(value);
        }
        void set(const min_ubid & value) {
            set_min_ubid(value);
        }
        void set(const max_uask & value) {
            set_max_uask(value);
        }
        void set(const min_option_px & value) {
            set_min_option_px(value);
        }
        void set(const max_child_orders & value) {
            set_max_child_orders(value);
        }
        void set(const order_duration & value) {
            set_order_duration(value);
        }
        void set(const take_reach_rule & value) {
            set_take_reach_rule(value);
        }
        void set(const order_prc_limit & value) {
            set_order_prc_limit(value);
        }
        void set(const order_ref_uprc & value) {
            set_order_ref_uprc(value);
        }
        void set(const order_ref_delta & value) {
            set_order_ref_delta(value);
        }
        void set(const order_ref_gamma & value) {
            set_order_ref_gamma(value);
        }
        void set(const order_vol_limit & value) {
            set_order_vol_limit(value);
        }
        void set(const rate_override & value) {
            set_rate_override(value);
        }
        void set(const sdiv_override & value) {
            set_sdiv_override(value);
        }
        void set(const ddiv_override & value) {
            set_ddiv_override(value);
        }
        void set(const override_code & value) {
            set_override_code(value);
        }
        void set(const order_prc_offset & value) {
            set_order_prc_offset(value);
        }
        void set(const take_alpha_type & value) {
            set_take_alpha_type(value);
        }
        void set(const make_alpha_type & value) {
            set_make_alpha_type(value);
        }
        void set(const take_alpha_factor & value) {
            set_take_alpha_factor(value);
        }
        void set(const make_alpha_factor & value) {
            set_make_alpha_factor(value);
        }
        void set(const take_probability & value) {
            set_take_probability(value);
        }
        void set(const make_probability & value) {
            set_make_probability(value);
        }
        void set(const take_surf_prc_offset & value) {
            set_take_surf_prc_offset(value);
        }
        void set(const take_surf_vol_offset & value) {
            set_take_surf_vol_offset(value);
        }
        void set(const take_surf_width_offset & value) {
            set_take_surf_width_offset(value);
        }
        void set(const make_surf_prc_offset & value) {
            set_make_surf_prc_offset(value);
        }
        void set(const make_surf_vol_offset & value) {
            set_make_surf_vol_offset(value);
        }
        void set(const make_surf_width_offset & value) {
            set_make_surf_width_offset(value);
        }
        void set(const order_ref_event_mult & value) {
            set_order_ref_event_mult(value);
        }
        void set(const order_ref_event_dttm & value) {
            set_order_ref_event_dttm(value);
        }
        void set(const nbbo_cap & value) {
            set_nbbo_cap(value);
        }
        void set(const extern_hedge_ex_dest & value) {
            set_extern_hedge_ex_dest(value);
        }
        void set(const extern_hedge_params & value) {
            set_extern_hedge_params(value);
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
        void set(const firm_type & value) {
            set_firm_type(value);
        }
        void set(const order_capacity & value) {
            set_order_capacity(value);
        }
        void set(const ssale_flag & value) {
            set_ssale_flag(value);
        }
        void set(const position_type & value) {
            set_position_type(value);
        }
        void set(const arrive_firm_pos & value) {
            set_arrive_firm_pos(value);
        }
        void set(const arrive_ssale_flag & value) {
            set_arrive_ssale_flag(value);
        }
        void set(const no_cross_group & value) {
            set_no_cross_group(value);
        }
        void set(const exch_trader_id & value) {
            set_exch_trader_id(value);
        }
        void set(const large_trader_id & value) {
            set_large_trader_id(value);
        }
        void set(const trading_location & value) {
            set_trading_location(value);
        }
        void set(const firm_position & value) {
            set_firm_position(value);
        }
        void set(const open_sell_sh & value) {
            set_open_sell_sh(value);
        }
        void set(const locate_quan & value) {
            set_locate_quan(value);
        }
        void set(const locate_firm & value) {
            set_locate_firm(value);
        }
        void set(const locate_pool & value) {
            set_locate_pool(value);
        }
        void set(const clearing_firm & value) {
            set_clearing_firm(value);
        }
        void set(const clearing_accnt & value) {
            set_clearing_accnt(value);
        }
        void set(const cat_reportable & value) {
            set_cat_reportable(value);
        }
        void set(const cat_src_brkr_imid & value) {
            set_cat_src_brkr_imid(value);
        }
        void set(const cat_src_accnt_type & value) {
            set_cat_src_accnt_type(value);
        }
        void set(const cat_src_firm_type & value) {
            set_cat_src_firm_type(value);
        }
        void set(const cat_dest_dept_type & value) {
            set_cat_dest_dept_type(value);
        }
        void set(const cat_accnt & value) {
            set_cat_accnt(value);
        }
        void set(const cat_brkr_accnt & value) {
            set_cat_brkr_accnt(value);
        }
        void set(const cum_fill_quantity & value) {
            set_cum_fill_quantity(value);
        }
        void set(const avg_fill_price & value) {
            set_avg_fill_price(value);
        }
        void set(const avg_fill_uprice & value) {
            set_avg_fill_uprice(value);
        }
        void set(const leaves_qty & value) {
            set_leaves_qty(value);
        }
        void set(const last_fill_number & value) {
            set_last_fill_number(value);
        }
        void set(const last_fill_dttm & value) {
            set_last_fill_dttm(value);
        }
        void set(const review_cl_ord_id & value) {
            set_review_cl_ord_id(value);
        }
        void set(const review_orig_cl_ord_id & value) {
            set_review_orig_cl_ord_id(value);
        }
        void set(const review_cancel_cl_ord_id & value) {
            set_review_cancel_cl_ord_id(value);
        }
        void set(const review_order_size & value) {
            set_review_order_size(value);
        }
        void set(const review_order_active_size & value) {
            set_review_order_active_size(value);
        }
        void set(const review_cum_fill_quantity & value) {
            set_review_cum_fill_quantity(value);
        }
        void set(const review_avg_fill_price & value) {
            set_review_avg_fill_price(value);
        }
        void set(const review_leaves_qty & value) {
            set_review_leaves_qty(value);
        }
        void set(const review_order_status & value) {
            set_review_order_status(value);
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
        void set(const num_child_orders & value) {
            set_num_child_orders(value);
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
        void set(const mkt_stance & value) {
            set_mkt_stance(value);
        }
        void set(const parent_strategy & value) {
            set_parent_strategy(value);
        }
        void set(const ticker & value) {
            set_ticker(value);
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
        void set(const notional_mult & value) {
            set_notional_mult(value);
        }
        void set(const security_id & value) {
            set_security_id(value);
        }
        void set(const security_desc & value) {
            set_security_desc(value);
        }
        void set(const product_group & value) {
            set_product_group(value);
        }
        void set(const product_class & value) {
            set_product_class(value);
        }
        void set(const und_key & value) {
            set_und_key(value);
        }
        void set(const und_type & value) {
            set_und_type(value);
        }
        void set(const u_sec_desc & value) {
            set_u_sec_desc(value);
        }
        void set(const price_format & value) {
            set_price_format(value);
        }
        void set(const user_data1 & value) {
            set_user_data1(value);
        }
        void set(const user_data2 & value) {
            set_user_data2(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const include_srnetwork & value) {
            set_include_srnetwork(value);
        }
        void set(const alt_cross_id__v7 & value) {
            set_alt_cross_id__v7(value);
        }
        void set(const exec_broker_accnt__v7 & value) {
            set_exec_broker_accnt__v7(value);
        }
        void set(const exec_broker_cl_firm__v7 & value) {
            set_exec_broker_cl_firm__v7(value);
        }
        void set(const exec_username__v7 & value) {
            set_exec_username__v7(value);
        }
        void set(const data_center__v7 & value) {
            set_data_center__v7(value);
        }
        void set(const time_in_force__v7 & value) {
            set_time_in_force__v7(value);
        }
        void set(const hedge_tif__v7 & value) {
            set_hedge_tif__v7(value);
        }
        void set(const locate_source__v7 & value) {
            set_locate_source__v7(value);
        }
        void set(const clearing_flip_type__v7 & value) {
            set_clearing_flip_type__v7(value);
        }
        void set(const clearing_flip_firm__v7 & value) {
            set_clearing_flip_firm__v7(value);
        }
        void set(const clearing_flip_accnt__v7 & value) {
            set_clearing_flip_accnt__v7(value);
        }
        void set(const review_routing_code__v7 & value) {
            set_review_routing_code__v7(value);
        }
        void set(const progress_timeout__v7 & value) {
            set_progress_timeout__v7(value);
        }
        void set(const directed_counter_party & value) {
            add_directed_counter_party(value);
        }
        void set(const face_legs__v7 & value) {
            add_face_legs__v7(value);
        }
        void set(const face_side__v7 & value) {
            add_face_side__v7(value);
        }
        void set(const order_legs & value) {
            add_order_legs(value);
        }

        void set(const SpdrParentReport & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_sys_realm);
            set(value.m_sys_environment);
            set(value.m_run_status);
            set(value.m_report_number);
            set(value.m_parent_shape);
            set(value.m_record_version);
            set(value.m_record_source);
            set(value.m_parent_version);
            set(value.m_base_parent_number);
            set(value.m_prev_parent_number);
            set(value.m_next_parent_number);
            set(value.m_spdr_action_type);
            set(value.m_prev_parent_create_dttm);
            set(value.m_prev_parent_cum_fill_qty);
            set(value.m_client_seq_num_in);
            set(value.m_alt_order_id);
            set(value.m_alt_prev_order_id);
            set(value.m_alt_cancel_id);
            set(value.m_src_routing_code);
            set(value.m_package_id);
            set(value.m_prev_package_id);
            set(value.m_risk_group_id);
            set(value.m_trigger_group_id);
            set(value.m_sec_key);
            set(value.m_sec_type);
            set(value.m_accnt);
            set(value.m_client_firm);
            set(value.m_core_client_firm);
            set(value.m_sponsor_client_firm);
            set(value.m_client_accnt);
            set(value.m_user_name);
            set(value.m_user_source);
            set(value.m_alt_accnt);
            set(value.m_alt_user_name);
            set(value.m_exec_brkr_code);
            set(value.m_extern_ex_dest);
            set(value.m_extern_params);
            set(value.m_spdr_source);
            set(value.m_grouping_code);
            set(value.m_engine_name);
            set(value.m_order_dttm);
            set(value.m_order_side);
            set(value.m_price_type);
            set(value.m_order_size);
            set(value.m_order_active_size);
            set(value.m_spdr_stage_type);
            set(value.m_stage_review);
            set(value.m_parent_order_handling);
            set(value.m_parent_balance_handling);
            set(value.m_limit_price);
            set(value.m_order_limit_type);
            set(value.m_take_limit_class);
            set(value.m_make_limit_class);
            set(value.m_start_type);
            set(value.m_market_session);
            set(value.m_active_duration);
            set(value.m_start_dttm);
            set(value.m_good_till_dttm);
            set(value.m_auto_hedge);
            set(value.m_hedge_instrument);
            set(value.m_hedge_sec_key);
            set(value.m_hedge_sec_type);
            set(value.m_hedge_beta_ratio);
            set(value.m_hedge_scope);
            set(value.m_hedge_session);
            set(value.m_order_create_dttm);
            set(value.m_order_create_latency);
            set(value.m_cancel_reason);
            set(value.m_order_cancel_dttm);
            set(value.m_order_cancel_latency);
            set(value.m_order_working_dttm);
            set(value.m_order_closed_dttm);
            set(value.m_order_closed_text);
            set(value.m_max_exposure_size);
            set(value.m_public_size);
            set(value.m_can_overlap_cxl_repl);
            set(value.m_progress_expose_time);
            set(value.m_progress_rule);
            set(value.m_progress_slice_cnt);
            set(value.m_vwap_participation);
            set(value.m_auction_responder);
            set(value.m_max_make_exch_fee);
            set(value.m_max_take_exch_fee);
            set(value.m_inc_take_exch_fee);
            set(value.m_inc_make_exch_fee);
            set(value.m_make_exch_rule);
            set(value.m_cxl_uprc_range);
            set(value.m_min_ubid);
            set(value.m_max_uask);
            set(value.m_min_option_px);
            set(value.m_max_child_orders);
            set(value.m_order_duration);
            set(value.m_take_reach_rule);
            set(value.m_order_prc_limit);
            set(value.m_order_ref_uprc);
            set(value.m_order_ref_delta);
            set(value.m_order_ref_gamma);
            set(value.m_order_vol_limit);
            set(value.m_rate_override);
            set(value.m_sdiv_override);
            set(value.m_ddiv_override);
            set(value.m_override_code);
            set(value.m_order_prc_offset);
            set(value.m_take_alpha_type);
            set(value.m_make_alpha_type);
            set(value.m_take_alpha_factor);
            set(value.m_make_alpha_factor);
            set(value.m_take_probability);
            set(value.m_make_probability);
            set(value.m_take_surf_prc_offset);
            set(value.m_take_surf_vol_offset);
            set(value.m_take_surf_width_offset);
            set(value.m_make_surf_prc_offset);
            set(value.m_make_surf_vol_offset);
            set(value.m_make_surf_width_offset);
            set(value.m_order_ref_event_mult);
            set(value.m_order_ref_event_dttm);
            set(value.m_nbbo_cap);
            set(value.m_extern_hedge_ex_dest);
            set(value.m_extern_hedge_params);
            set(value.m_spdr_order_status);
            set(value.m_spdr_close_reason);
            set(value.m_spdr_reject_reason);
            set(value.m_spdr_reject_level);
            set(value.m_firm_type);
            set(value.m_order_capacity);
            set(value.m_ssale_flag);
            set(value.m_position_type);
            set(value.m_arrive_firm_pos);
            set(value.m_arrive_ssale_flag);
            set(value.m_no_cross_group);
            set(value.m_exch_trader_id);
            set(value.m_large_trader_id);
            set(value.m_trading_location);
            set(value.m_firm_position);
            set(value.m_open_sell_sh);
            set(value.m_locate_quan);
            set(value.m_locate_firm);
            set(value.m_locate_pool);
            set(value.m_clearing_firm);
            set(value.m_clearing_accnt);
            set(value.m_cat_reportable);
            set(value.m_cat_src_brkr_imid);
            set(value.m_cat_src_accnt_type);
            set(value.m_cat_src_firm_type);
            set(value.m_cat_dest_dept_type);
            set(value.m_cat_accnt);
            set(value.m_cat_brkr_accnt);
            set(value.m_cum_fill_quantity);
            set(value.m_avg_fill_price);
            set(value.m_avg_fill_uprice);
            set(value.m_leaves_qty);
            set(value.m_last_fill_number);
            set(value.m_last_fill_dttm);
            set(value.m_review_cl_ord_id);
            set(value.m_review_orig_cl_ord_id);
            set(value.m_review_cancel_cl_ord_id);
            set(value.m_review_order_size);
            set(value.m_review_order_active_size);
            set(value.m_review_cum_fill_quantity);
            set(value.m_review_avg_fill_price);
            set(value.m_review_leaves_qty);
            set(value.m_review_order_status);
            set(value.m_max_progress);
            set(value.m_max_progress_detail);
            set(value.m_max_progress_time);
            set(value.m_num_child_orders);
            set(value.m_nbbo_bid);
            set(value.m_nbbo_ask);
            set(value.m_nbbo_bid_sz);
            set(value.m_nbbo_ask_sz);
            set(value.m_mkt_stance);
            set(value.m_parent_strategy);
            set(value.m_ticker);
            set(value.m_tick_value);
            set(value.m_point_value);
            set(value.m_point_currency);
            set(value.m_notional_mult);
            set(value.m_security_id);
            set(value.m_security_desc);
            set(value.m_product_group);
            set(value.m_product_class);
            set(value.m_und_key);
            set(value.m_und_type);
            set(value.m_u_sec_desc);
            set(value.m_price_format);
            set(value.m_user_data1);
            set(value.m_user_data2);
            set(value.m_timestamp);
            set(value.m_include_srnetwork);
            set(value.m_alt_cross_id__v7);
            set(value.m_exec_broker_accnt__v7);
            set(value.m_exec_broker_cl_firm__v7);
            set(value.m_exec_username__v7);
            set(value.m_data_center__v7);
            set(value.m_time_in_force__v7);
            set(value.m_hedge_tif__v7);
            set(value.m_locate_source__v7);
            set(value.m_clearing_flip_type__v7);
            set(value.m_clearing_flip_firm__v7);
            set(value.m_clearing_flip_accnt__v7);
            set(value.m_review_routing_code__v7);
            set(value.m_progress_timeout__v7);set_directed_counter_party_list(value.m_directed_counter_party);set_face_legs__v7_list(value.m_face_legs__v7);set_face_side__v7_list(value.m_face_side__v7);set_order_legs_list(value.m_order_legs);
        }

        SpdrParentReport() {
            m__meta.set_message_type("SpdrParentReport");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4100, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4100, length);
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
             *this = SpdrParentReport{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeReportNumber() const {
            return !(m_report_number == 0);
        }
        bool IncludeRecordVersion() const {
            return !(m_record_version == 0);
        }
        bool IncludeParentVersion() const {
            return !(m_parent_version == 0);
        }
        bool IncludeBaseParentNumber() const {
            return !(m_base_parent_number == 0);
        }
        bool IncludePrevParentNumber() const {
            return !(m_prev_parent_number == 0);
        }
        bool IncludeNextParentNumber() const {
            return !(m_next_parent_number == 0);
        }
        bool IncludePrevParentCreateDttm() const {
            return (m_prev_parent_create_dttm.time_since_epoch().count() != 0);
        }
        bool IncludePrevParentCumFillQty() const {
            return !(m_prev_parent_cum_fill_qty == 0);
        }
        bool IncludeClientSeqNumIn() const {
            return !(m_client_seq_num_in == 0);
        }
        bool IncludeAltOrderId() const {
            return !(m_alt_order_id.empty());
        }
        bool IncludeAltPrevOrderId() const {
            return !(m_alt_prev_order_id.empty());
        }
        bool IncludeAltCancelId() const {
            return !(m_alt_cancel_id.empty());
        }
        bool IncludeSrcRoutingCode() const {
            return !(m_src_routing_code.empty());
        }
        bool IncludePackageId() const {
            return !(m_package_id == 0);
        }
        bool IncludePrevPackageId() const {
            return !(m_prev_package_id == 0);
        }
        bool IncludeRiskGroupId() const {
            return !(m_risk_group_id == 0);
        }
        bool IncludeTriggerGroupId() const {
            return !(m_trigger_group_id == 0);
        }
        bool IncludeSecKey() const {
            return (m_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeAccnt() const {
            return !(m_accnt.empty());
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }
        bool IncludeCoreClientFirm() const {
            return !(m_core_client_firm.empty());
        }
        bool IncludeSponsorClientFirm() const {
            return !(m_sponsor_client_firm.empty());
        }
        bool IncludeClientAccnt() const {
            return !(m_client_accnt.empty());
        }
        bool IncludeUserName() const {
            return !(m_user_name.empty());
        }
        bool IncludeAltAccnt() const {
            return !(m_alt_accnt.empty());
        }
        bool IncludeAltUserName() const {
            return !(m_alt_user_name.empty());
        }
        bool IncludeExecBrkrCode() const {
            return !(m_exec_brkr_code.empty());
        }
        bool IncludeExternExDest() const {
            return !(m_extern_ex_dest.empty());
        }
        bool IncludeExternParams() const {
            return !(m_extern_params.empty());
        }
        bool IncludeGroupingCode() const {
            return !(m_grouping_code == 0);
        }
        bool IncludeEngineName() const {
            return !(m_engine_name.empty());
        }
        bool IncludeOrderDttm() const {
            return (m_order_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeOrderSize() const {
            return !(m_order_size == 0);
        }
        bool IncludeOrderActiveSize() const {
            return !(m_order_active_size == 0);
        }
        bool IncludeLimitPrice() const {
            return !(m_limit_price == 0.0);
        }
        bool IncludeActiveDuration() const {
            return !(m_active_duration == 0);
        }
        bool IncludeStartDttm() const {
            return (m_start_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeGoodTillDttm() const {
            return (m_good_till_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeHedgeSecKey() const {
            return (m_hedge_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeHedgeBetaRatio() const {
            return !(m_hedge_beta_ratio == 0.0);
        }
        bool IncludeOrderCreateDttm() const {
            return (m_order_create_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeOrderCreateLatency() const {
            return !(m_order_create_latency == 0.0);
        }
        bool IncludeOrderCancelDttm() const {
            return (m_order_cancel_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeOrderCancelLatency() const {
            return !(m_order_cancel_latency == 0.0);
        }
        bool IncludeOrderWorkingDttm() const {
            return (m_order_working_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeOrderClosedDttm() const {
            return (m_order_closed_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeOrderClosedText() const {
            return !(m_order_closed_text.empty());
        }
        bool IncludeMaxExposureSize() const {
            return !(m_max_exposure_size == 0);
        }
        bool IncludeProgressExposeTime() const {
            return !(m_progress_expose_time == 0);
        }
        bool IncludeProgressSliceCnt() const {
            return !(m_progress_slice_cnt == 0);
        }
        bool IncludeVwapParticipation() const {
            return !(m_vwap_participation == 0.0);
        }
        bool IncludeMaxMakeExchFee() const {
            return !(m_max_make_exch_fee == 0.0);
        }
        bool IncludeMaxTakeExchFee() const {
            return !(m_max_take_exch_fee == 0.0);
        }
        bool IncludeMinUbid() const {
            return !(m_min_ubid == 0.0);
        }
        bool IncludeMaxUask() const {
            return !(m_max_uask == 0.0);
        }
        bool IncludeMinOptionPx() const {
            return !(m_min_option_px == 0.0);
        }
        bool IncludeMaxChildOrders() const {
            return !(m_max_child_orders == 0);
        }
        bool IncludeOrderDuration() const {
            return !(m_order_duration == 0);
        }
        bool IncludeOrderPrcLimit() const {
            return !(m_order_prc_limit == 0.0);
        }
        bool IncludeOrderRefUprc() const {
            return !(m_order_ref_uprc == 0.0);
        }
        bool IncludeOrderRefDelta() const {
            return !(m_order_ref_delta == 0.0);
        }
        bool IncludeOrderRefGamma() const {
            return !(m_order_ref_gamma == 0.0);
        }
        bool IncludeOrderVolLimit() const {
            return !(m_order_vol_limit == 0.0);
        }
        bool IncludeRateOverride() const {
            return !(m_rate_override == 0.0);
        }
        bool IncludeSdivOverride() const {
            return !(m_sdiv_override == 0.0);
        }
        bool IncludeDdivOverride() const {
            return !(m_ddiv_override.empty());
        }
        bool IncludeOrderPrcOffset() const {
            return !(m_order_prc_offset == 0.0);
        }
        bool IncludeTakeAlphaFactor() const {
            return !(m_take_alpha_factor == 0.0);
        }
        bool IncludeMakeAlphaFactor() const {
            return !(m_make_alpha_factor == 0.0);
        }
        bool IncludeTakeProbability() const {
            return !(m_take_probability == 0.0);
        }
        bool IncludeMakeProbability() const {
            return !(m_make_probability == 0.0);
        }
        bool IncludeTakeSurfPrcOffset() const {
            return !(m_take_surf_prc_offset == 0.0);
        }
        bool IncludeTakeSurfVolOffset() const {
            return !(m_take_surf_vol_offset == 0.0);
        }
        bool IncludeTakeSurfWidthOffset() const {
            return !(m_take_surf_width_offset == 0.0);
        }
        bool IncludeMakeSurfPrcOffset() const {
            return !(m_make_surf_prc_offset == 0.0);
        }
        bool IncludeMakeSurfVolOffset() const {
            return !(m_make_surf_vol_offset == 0.0);
        }
        bool IncludeMakeSurfWidthOffset() const {
            return !(m_make_surf_width_offset == 0.0);
        }
        bool IncludeOrderRefEventMult() const {
            return !(m_order_ref_event_mult == 0.0);
        }
        bool IncludeOrderRefEventDttm() const {
            return (m_order_ref_event_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeExternHedgeExDest() const {
            return !(m_extern_hedge_ex_dest.empty());
        }
        bool IncludeExternHedgeParams() const {
            return !(m_extern_hedge_params.empty());
        }
        bool IncludeArriveFirmPos() const {
            return !(m_arrive_firm_pos == 0);
        }
        bool IncludeNoCrossGroup() const {
            return !(m_no_cross_group.empty());
        }
        bool IncludeExchTraderId() const {
            return !(m_exch_trader_id.empty());
        }
        bool IncludeLargeTraderId() const {
            return !(m_large_trader_id.empty());
        }
        bool IncludeTradingLocation() const {
            return !(m_trading_location.empty());
        }
        bool IncludeFirmPosition() const {
            return !(m_firm_position == 0);
        }
        bool IncludeOpenSellSh() const {
            return !(m_open_sell_sh == 0);
        }
        bool IncludeLocateQuan() const {
            return !(m_locate_quan == 0);
        }
        bool IncludeLocateFirm() const {
            return !(m_locate_firm.empty());
        }
        bool IncludeLocatePool() const {
            return !(m_locate_pool.empty());
        }
        bool IncludeClearingFirm() const {
            return !(m_clearing_firm.empty());
        }
        bool IncludeClearingAccnt() const {
            return !(m_clearing_accnt.empty());
        }
        bool IncludeCatSrcBrkrImid() const {
            return !(m_cat_src_brkr_imid.empty());
        }
        bool IncludeCatAccnt() const {
            return !(m_cat_accnt.empty());
        }
        bool IncludeCatBrkrAccnt() const {
            return !(m_cat_brkr_accnt.empty());
        }
        bool IncludeCumFillQuantity() const {
            return !(m_cum_fill_quantity == 0);
        }
        bool IncludeAvgFillPrice() const {
            return !(m_avg_fill_price == 0.0);
        }
        bool IncludeAvgFillUprice() const {
            return !(m_avg_fill_uprice == 0.0);
        }
        bool IncludeLeavesQty() const {
            return !(m_leaves_qty == 0);
        }
        bool IncludeLastFillNumber() const {
            return !(m_last_fill_number == 0);
        }
        bool IncludeLastFillDttm() const {
            return (m_last_fill_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeReviewClOrdId() const {
            return !(m_review_cl_ord_id.empty());
        }
        bool IncludeReviewOrigClOrdId() const {
            return !(m_review_orig_cl_ord_id.empty());
        }
        bool IncludeReviewCancelClOrdId() const {
            return !(m_review_cancel_cl_ord_id.empty());
        }
        bool IncludeReviewOrderSize() const {
            return !(m_review_order_size == 0);
        }
        bool IncludeReviewOrderActiveSize() const {
            return !(m_review_order_active_size == 0);
        }
        bool IncludeReviewCumFillQuantity() const {
            return !(m_review_cum_fill_quantity == 0);
        }
        bool IncludeReviewAvgFillPrice() const {
            return !(m_review_avg_fill_price == 0.0);
        }
        bool IncludeReviewLeavesQty() const {
            return !(m_review_leaves_qty == 0);
        }
        bool IncludeMaxProgressDetail() const {
            return !(m_max_progress_detail.empty());
        }
        bool IncludeMaxProgressTime() const {
            return (m_max_progress_time.time_since_epoch().count() != 0);
        }
        bool IncludeNumChildOrders() const {
            return !(m_num_child_orders == 0);
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
        bool IncludeParentStrategy() const {
            return !(m_parent_strategy.empty());
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeTickValue() const {
            return !(m_tick_value == 0.0);
        }
        bool IncludePointValue() const {
            return !(m_point_value == 0.0);
        }
        bool IncludeNotionalMult() const {
            return !(m_notional_mult == 0.0);
        }
        bool IncludeSecurityId() const {
            return !(m_security_id.empty());
        }
        bool IncludeSecurityDesc() const {
            return !(m_security_desc.empty());
        }
        bool IncludeProductGroup() const {
            return !(m_product_group.empty());
        }
        bool IncludeUndKey() const {
            return (m_und_key.ByteSizeLong() > 0);
        }
        bool IncludeUSecDesc() const {
            return !(m_u_sec_desc.empty());
        }
        bool IncludeUserData1() const {
            return !(m_user_data1.empty());
        }
        bool IncludeUserData2() const {
            return !(m_user_data2.empty());
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeAltCrossIdV7() const {
            return !(m_alt_cross_id__v7.empty());
        }
        bool IncludeExecBrokerAccntV7() const {
            return !(m_exec_broker_accnt__v7.empty());
        }
        bool IncludeExecBrokerClFirmV7() const {
            return !(m_exec_broker_cl_firm__v7.empty());
        }
        bool IncludeExecUsernameV7() const {
            return !(m_exec_username__v7.empty());
        }
        bool IncludeLocateSourceV7() const {
            return !(m_locate_source__v7.empty());
        }
        bool IncludeClearingFlipFirmV7() const {
            return !(m_clearing_flip_firm__v7.empty());
        }
        bool IncludeClearingFlipAccntV7() const {
            return !(m_clearing_flip_accnt__v7.empty());
        }
        bool IncludeReviewRoutingCodeV7() const {
            return !(m_review_routing_code__v7.empty());
        }
        bool IncludeProgressTimeoutV7() const {
            return !(m_progress_timeout__v7 == 0);
        }
        bool IncludeDirectedCounterParty() const {
            return (!m_directed_counter_party.empty());
        }
        bool IncludeFaceLegsV7() const {
            return (!m_face_legs__v7.empty());
        }
        bool IncludeFaceSideV7() const {
            return (!m_face_side__v7.empty());
        }
        bool IncludeOrderLegs() const {
            return (!m_order_legs.empty());
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysRealm>(m_sys_realm)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_sys_environment)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>(m_run_status)));
            if ( IncludeReportNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(109,m_report_number);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>(m_parent_shape)));
            if ( IncludeRecordVersion()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(115,m_record_version);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RecordSource>(m_record_source)));
            if ( IncludeParentVersion()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(121,m_parent_version);
            }
            if ( IncludeBaseParentNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(124,m_base_parent_number);
            }
            if ( IncludePrevParentNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(1037,m_prev_parent_number);
            }
            if ( IncludeNextParentNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(1038,m_next_parent_number);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1098,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrActionType>(m_spdr_action_type)));
            if ( IncludePrevParentCreateDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(133, m_prev_parent_create_dttm);
            }
            if ( IncludePrevParentCumFillQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(136,m_prev_parent_cum_fill_qty);
            }
            if ( IncludeClientSeqNumIn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(139,m_client_seq_num_in);
            }
            if ( IncludeAltOrderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(142,m_alt_order_id);
            }
            if ( IncludeAltPrevOrderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(145,m_alt_prev_order_id);
            }
            if ( IncludeAltCancelId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(151,m_alt_cancel_id);
            }
            if ( IncludeSrcRoutingCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(154,m_src_routing_code);
            }
            if ( IncludePackageId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(157,m_package_id);
            }
            if ( IncludePrevPackageId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(160,m_prev_package_id);
            }
            if ( IncludeRiskGroupId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(163,m_risk_group_id);
            }
            if ( IncludeTriggerGroupId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(166,m_trigger_group_id);
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(169, optionKeyLayout_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(172,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(175,m_accnt);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(178,m_client_firm);
            }
            if ( IncludeCoreClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(1039,m_core_client_firm);
            }
            if ( IncludeSponsorClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(1040,m_sponsor_client_firm);
            }
            if ( IncludeClientAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(181,m_client_accnt);
            }
            if ( IncludeUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(184,m_user_name);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1041,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_user_source)));
            if ( IncludeAltAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(187,m_alt_accnt);
            }
            if ( IncludeAltUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(190,m_alt_user_name);
            }
            if ( IncludeExecBrkrCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(1094,m_exec_brkr_code);
            }
            if ( IncludeExternExDest()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(1095,m_extern_ex_dest);
            }
            if ( IncludeExternParams()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(199,m_extern_params);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(202,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            if ( IncludeGroupingCode()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(205,m_grouping_code);
            }
            if ( IncludeEngineName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(1042,m_engine_name);
            }
            if ( IncludeOrderDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(211, m_order_dttm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(214,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(217,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceType>(m_price_type)));
            if ( IncludeOrderSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(220,m_order_size);
            }
            if ( IncludeOrderActiveSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(223,m_order_active_size);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(226,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrStageType>(m_spdr_stage_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1043,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StageReview>(m_stage_review)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(229,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentOrderHandling>(m_parent_order_handling)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(232,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentBalanceHandling>(m_parent_balance_handling)));
            if ( IncludeLimitPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(235,m_limit_price);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(238,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitType>(m_order_limit_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(241,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>(m_take_limit_class)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(244,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>(m_make_limit_class)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(247,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StartType>(m_start_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1044,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>(m_market_session)));
            if ( IncludeActiveDuration()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(1097,m_active_duration);
            }
            if ( IncludeStartDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(253, m_start_dttm);
            }
            if ( IncludeGoodTillDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(256, m_good_till_dttm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(259,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>(m_auto_hedge)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(262,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeInst>(m_hedge_instrument)));
            if ( IncludeHedgeSecKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_hedge_sec_key{};
                m_hedge_sec_key.setCodecExpiryKey(expiryKeyLayout_hedge_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(265, expiryKeyLayout_hedge_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(268,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_hedge_sec_type)));
            if ( IncludeHedgeBetaRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(271,m_hedge_beta_ratio);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(274,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeScope>(m_hedge_scope)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1045,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>(m_hedge_session)));
            if ( IncludeOrderCreateDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(280, m_order_create_dttm);
            }
            if ( IncludeOrderCreateLatency()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(283,m_order_create_latency);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(286,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCancelReason>(m_cancel_reason)));
            if ( IncludeOrderCancelDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(289, m_order_cancel_dttm);
            }
            if ( IncludeOrderCancelLatency()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(292,m_order_cancel_latency);
            }
            if ( IncludeOrderWorkingDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(295, m_order_working_dttm);
            }
            if ( IncludeOrderClosedDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(298, m_order_closed_dttm);
            }
            if ( IncludeOrderClosedText()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(301,m_order_closed_text);
            }
            if ( IncludeMaxExposureSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(1046,m_max_exposure_size);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1047,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PublicSizeHandling>(m_public_size)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1048,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_overlap_cxl_repl)));
            if ( IncludeProgressExposeTime()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(1049,m_progress_expose_time);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1050,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProgressRule>(m_progress_rule)));
            if ( IncludeProgressSliceCnt()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(1051,m_progress_slice_cnt);
            }
            if ( IncludeVwapParticipation()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(1052,m_vwap_participation);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1053,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionResponder>(m_auction_responder)));
            if ( IncludeMaxMakeExchFee()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(1054,m_max_make_exch_fee);
            }
            if ( IncludeMaxTakeExchFee()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(1055,m_max_take_exch_fee);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1056,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::IncExchFee>(m_inc_take_exch_fee)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1057,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::IncExchFee>(m_inc_make_exch_fee)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1058,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MakeExchRule>(m_make_exch_rule)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1059,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UPrcCxl>(m_cxl_uprc_range)));
            if ( IncludeMinUbid()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(1060,m_min_ubid);
            }
            if ( IncludeMaxUask()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(1061,m_max_uask);
            }
            if ( IncludeMinOptionPx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(1062,m_min_option_px);
            }
            if ( IncludeMaxChildOrders()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(1063,m_max_child_orders);
            }
            if ( IncludeOrderDuration()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(1064,m_order_duration);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1065,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ReachRule>(m_take_reach_rule)));
            if ( IncludeOrderPrcLimit()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(1066,m_order_prc_limit);
            }
            if ( IncludeOrderRefUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(1067,m_order_ref_uprc);
            }
            if ( IncludeOrderRefDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(1068,m_order_ref_delta);
            }
            if ( IncludeOrderRefGamma()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(1069,m_order_ref_gamma);
            }
            if ( IncludeOrderVolLimit()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(1070,m_order_vol_limit);
            }
            if ( IncludeRateOverride()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(1071,m_rate_override);
            }
            if ( IncludeSdivOverride()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(1072,m_sdiv_override);
            }
            if ( IncludeDdivOverride()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(1073,m_ddiv_override);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1074,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OverrideCode>(m_override_code)));
            if ( IncludeOrderPrcOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(1075,m_order_prc_offset);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1076,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>(m_take_alpha_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1077,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>(m_make_alpha_type)));
            if ( IncludeTakeAlphaFactor()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(1078,m_take_alpha_factor);
            }
            if ( IncludeMakeAlphaFactor()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(1079,m_make_alpha_factor);
            }
            if ( IncludeTakeProbability()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(1080,m_take_probability);
            }
            if ( IncludeMakeProbability()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(1081,m_make_probability);
            }
            if ( IncludeTakeSurfPrcOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(1082,m_take_surf_prc_offset);
            }
            if ( IncludeTakeSurfVolOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(1083,m_take_surf_vol_offset);
            }
            if ( IncludeTakeSurfWidthOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(1084,m_take_surf_width_offset);
            }
            if ( IncludeMakeSurfPrcOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(1085,m_make_surf_prc_offset);
            }
            if ( IncludeMakeSurfVolOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(1086,m_make_surf_vol_offset);
            }
            if ( IncludeMakeSurfWidthOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(1087,m_make_surf_width_offset);
            }
            if ( IncludeOrderRefEventMult()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(1088,m_order_ref_event_mult);
            }
            if ( IncludeOrderRefEventDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(1089, m_order_ref_event_dttm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1099,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::NbboCap>(m_nbbo_cap)));
            if ( IncludeExternHedgeExDest()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(1096,m_extern_hedge_ex_dest);
            }
            if ( IncludeExternHedgeParams()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(1091,m_extern_hedge_params);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(304,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(m_spdr_order_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(307,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrCloseReason>(m_spdr_close_reason)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(310,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRejectReason>(m_spdr_reject_reason)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1092,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRiskLevel>(m_spdr_reject_level)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(313,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_firm_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(316,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCapacity>(m_order_capacity)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(319,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(322,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type)));
            if ( IncludeArriveFirmPos()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(325,m_arrive_firm_pos);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(328,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_arrive_ssale_flag)));
            if ( IncludeNoCrossGroup()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(331,m_no_cross_group);
            }
            if ( IncludeExchTraderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(334,m_exch_trader_id);
            }
            if ( IncludeLargeTraderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(337,m_large_trader_id);
            }
            if ( IncludeTradingLocation()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(340,m_trading_location);
            }
            if ( IncludeFirmPosition()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(343,m_firm_position);
            }
            if ( IncludeOpenSellSh()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(346,m_open_sell_sh);
            }
            if ( IncludeLocateQuan()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(349,m_locate_quan);
            }
            if ( IncludeLocateFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(352,m_locate_firm);
            }
            if ( IncludeLocatePool()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(355,m_locate_pool);
            }
            if ( IncludeClearingFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(358,m_clearing_firm);
            }
            if ( IncludeClearingAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(361,m_clearing_accnt);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(364,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CatReportType>(m_cat_reportable)));
            if ( IncludeCatSrcBrkrImid()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(367,m_cat_src_brkr_imid);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(370,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CatAccntType>(m_cat_src_accnt_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(373,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CatFirmType>(m_cat_src_firm_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(376,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CatDeptType>(m_cat_dest_dept_type)));
            if ( IncludeCatAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(379,m_cat_accnt);
            }
            if ( IncludeCatBrkrAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(382,m_cat_brkr_accnt);
            }
            if ( IncludeCumFillQuantity()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(385,m_cum_fill_quantity);
            }
            if ( IncludeAvgFillPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(388,m_avg_fill_price);
            }
            if ( IncludeAvgFillUprice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(391,m_avg_fill_uprice);
            }
            if ( IncludeLeavesQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(394,m_leaves_qty);
            }
            if ( IncludeLastFillNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(397,m_last_fill_number);
            }
            if ( IncludeLastFillDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(400, m_last_fill_dttm);
            }
            if ( IncludeReviewClOrdId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(403,m_review_cl_ord_id);
            }
            if ( IncludeReviewOrigClOrdId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(406,m_review_orig_cl_ord_id);
            }
            if ( IncludeReviewCancelClOrdId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(409,m_review_cancel_cl_ord_id);
            }
            if ( IncludeReviewOrderSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(412,m_review_order_size);
            }
            if ( IncludeReviewOrderActiveSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(415,m_review_order_active_size);
            }
            if ( IncludeReviewCumFillQuantity()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(418,m_review_cum_fill_quantity);
            }
            if ( IncludeReviewAvgFillPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(421,m_review_avg_fill_price);
            }
            if ( IncludeReviewLeavesQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(424,m_review_leaves_qty);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(427,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(m_review_order_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(433,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MaxProgress>(m_max_progress)));
            if ( IncludeMaxProgressDetail()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(436,m_max_progress_detail);
            }
            if ( IncludeMaxProgressTime()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(439, m_max_progress_time);
            }
            if ( IncludeNumChildOrders()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(442,m_num_child_orders);
            }
            if ( IncludeNbboBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(445,m_nbbo_bid);
            }
            if ( IncludeNbboAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(448,m_nbbo_ask);
            }
            if ( IncludeNbboBidSz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(451,m_nbbo_bid_sz);
            }
            if ( IncludeNbboAskSz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(454,m_nbbo_ask_sz);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(457,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktStance>(m_mkt_stance)));
            if ( IncludeParentStrategy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(460,m_parent_strategy);
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(463, tickerKeyLayout_ticker);
            }
            if ( IncludeTickValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(466,m_tick_value);
            }
            if ( IncludePointValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(469,m_point_value);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(472,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            if ( IncludeNotionalMult()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(475,m_notional_mult);
            }
            if ( IncludeSecurityId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(478,m_security_id);
            }
            if ( IncludeSecurityDesc()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(481,m_security_desc);
            }
            if ( IncludeProductGroup()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(484,m_product_group);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(487,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProductClass>(m_product_class)));
            if ( IncludeUndKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_und_key{};
                m_und_key.setCodecExpiryKey(expiryKeyLayout_und_key);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(490, expiryKeyLayout_und_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(493,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_und_type)));
            if ( IncludeUSecDesc()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(496,m_u_sec_desc);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(499,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format)));
            if ( IncludeUserData1()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(502,m_user_data1);
            }
            if ( IncludeUserData2()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(505,m_user_data2);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(508, m_timestamp);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1093,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::InclExclDisclose>(m_include_srnetwork)));
            if ( IncludeAltCrossIdV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5000,m_alt_cross_id__v7);
            }
            if ( IncludeExecBrokerAccntV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5001,m_exec_broker_accnt__v7);
            }
            if ( IncludeExecBrokerClFirmV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5002,m_exec_broker_cl_firm__v7);
            }
            if ( IncludeExecUsernameV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5003,m_exec_username__v7);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5004,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SRDataCenter_V7>(m_data_center__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5005,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TimeInForce>(m_time_in_force__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5006,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TimeInForce>(m_hedge_tif__v7)));
            if ( IncludeLocateSourceV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5007,m_locate_source__v7);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5008,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlipType>(m_clearing_flip_type__v7)));
            if ( IncludeClearingFlipFirmV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5009,m_clearing_flip_firm__v7);
            }
            if ( IncludeClearingFlipAccntV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5010,m_clearing_flip_accnt__v7);
            }
            if ( IncludeReviewRoutingCodeV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5011,m_review_routing_code__v7);
            }
            if ( IncludeProgressTimeoutV7()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(5012,m_progress_timeout__v7);
            }
            if ( IncludeDirectedCounterParty()) {
                for (auto& item : m_directed_counter_party) {
					totalSize += SRProtobufCPP::TagCodec::Size(517, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeFaceLegsV7()) {
                for (auto& item : m_face_legs__v7) {
					totalSize += SRProtobufCPP::TagCodec::Size(5013, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeFaceSideV7()) {
                for (auto& item : m_face_side__v7) {
					totalSize += SRProtobufCPP::TagCodec::Size(5047, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeOrderLegs()) {
                for (auto& item : m_order_legs) {
					totalSize += SRProtobufCPP::TagCodec::Size(613, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysRealm>(m_sys_realm)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_sys_environment)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>(m_run_status)));
            if ( IncludeReportNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,109,m_report_number);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>(m_parent_shape)));
            if ( IncludeRecordVersion()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,115,m_record_version);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RecordSource>(m_record_source)));
            if ( IncludeParentVersion()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,121,m_parent_version);
            }
            if ( IncludeBaseParentNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,124,m_base_parent_number);
            }
            if ( IncludePrevParentNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,1037,m_prev_parent_number);
            }
            if ( IncludeNextParentNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,1038,m_next_parent_number);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1098,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrActionType>(m_spdr_action_type)));
            if ( IncludePrevParentCreateDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 133, m_prev_parent_create_dttm);
            }
            if ( IncludePrevParentCumFillQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,136,m_prev_parent_cum_fill_qty);
            }
            if ( IncludeClientSeqNumIn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,139,m_client_seq_num_in);
            }
            if ( IncludeAltOrderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,142,static_cast<string>(m_alt_order_id));
            }
            if ( IncludeAltPrevOrderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,145,static_cast<string>(m_alt_prev_order_id));
            }
            if ( IncludeAltCancelId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,151,static_cast<string>(m_alt_cancel_id));
            }
            if ( IncludeSrcRoutingCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,154,static_cast<string>(m_src_routing_code));
            }
            if ( IncludePackageId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,157,m_package_id);
            }
            if ( IncludePrevPackageId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,160,m_prev_package_id);
            }
            if ( IncludeRiskGroupId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,163,m_risk_group_id);
            }
            if ( IncludeTriggerGroupId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,166,m_trigger_group_id);
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 169, optionKeyLayout_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,172,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,175,static_cast<string>(m_accnt));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,178,static_cast<string>(m_client_firm));
            }
            if ( IncludeCoreClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,1039,static_cast<string>(m_core_client_firm));
            }
            if ( IncludeSponsorClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,1040,static_cast<string>(m_sponsor_client_firm));
            }
            if ( IncludeClientAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,181,static_cast<string>(m_client_accnt));
            }
            if ( IncludeUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,184,static_cast<string>(m_user_name));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1041,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_user_source)));
            if ( IncludeAltAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,187,static_cast<string>(m_alt_accnt));
            }
            if ( IncludeAltUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,190,static_cast<string>(m_alt_user_name));
            }
            if ( IncludeExecBrkrCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,1094,static_cast<string>(m_exec_brkr_code));
            }
            if ( IncludeExternExDest()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,1095,static_cast<string>(m_extern_ex_dest));
            }
            if ( IncludeExternParams()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,199,static_cast<string>(m_extern_params));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,202,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            if ( IncludeGroupingCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,205,m_grouping_code);
            }
            if ( IncludeEngineName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,1042,static_cast<string>(m_engine_name));
            }
            if ( IncludeOrderDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 211, m_order_dttm);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,214,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,217,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceType>(m_price_type)));
            if ( IncludeOrderSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,220,m_order_size);
            }
            if ( IncludeOrderActiveSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,223,m_order_active_size);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,226,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrStageType>(m_spdr_stage_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1043,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StageReview>(m_stage_review)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,229,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentOrderHandling>(m_parent_order_handling)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,232,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentBalanceHandling>(m_parent_balance_handling)));
            if ( IncludeLimitPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,235,m_limit_price);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,238,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitType>(m_order_limit_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,241,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>(m_take_limit_class)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,244,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>(m_make_limit_class)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,247,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StartType>(m_start_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1044,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>(m_market_session)));
            if ( IncludeActiveDuration()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,1097,m_active_duration);
            }
            if ( IncludeStartDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 253, m_start_dttm);
            }
            if ( IncludeGoodTillDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 256, m_good_till_dttm);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,259,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>(m_auto_hedge)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,262,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeInst>(m_hedge_instrument)));
            if ( IncludeHedgeSecKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_hedge_sec_key{};
                m_hedge_sec_key.setCodecExpiryKey(expiryKeyLayout_hedge_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 265, expiryKeyLayout_hedge_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,268,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_hedge_sec_type)));
            if ( IncludeHedgeBetaRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,271,m_hedge_beta_ratio);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,274,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeScope>(m_hedge_scope)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1045,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>(m_hedge_session)));
            if ( IncludeOrderCreateDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 280, m_order_create_dttm);
            }
            if ( IncludeOrderCreateLatency()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,283,m_order_create_latency);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,286,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCancelReason>(m_cancel_reason)));
            if ( IncludeOrderCancelDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 289, m_order_cancel_dttm);
            }
            if ( IncludeOrderCancelLatency()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,292,m_order_cancel_latency);
            }
            if ( IncludeOrderWorkingDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 295, m_order_working_dttm);
            }
            if ( IncludeOrderClosedDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 298, m_order_closed_dttm);
            }
            if ( IncludeOrderClosedText()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,301,static_cast<string>(m_order_closed_text));
            }
            if ( IncludeMaxExposureSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,1046,m_max_exposure_size);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1047,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PublicSizeHandling>(m_public_size)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1048,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_overlap_cxl_repl)));
            if ( IncludeProgressExposeTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,1049,m_progress_expose_time);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1050,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProgressRule>(m_progress_rule)));
            if ( IncludeProgressSliceCnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,1051,m_progress_slice_cnt);
            }
            if ( IncludeVwapParticipation()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,1052,m_vwap_participation);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1053,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionResponder>(m_auction_responder)));
            if ( IncludeMaxMakeExchFee()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,1054,m_max_make_exch_fee);
            }
            if ( IncludeMaxTakeExchFee()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,1055,m_max_take_exch_fee);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1056,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::IncExchFee>(m_inc_take_exch_fee)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1057,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::IncExchFee>(m_inc_make_exch_fee)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1058,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MakeExchRule>(m_make_exch_rule)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1059,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UPrcCxl>(m_cxl_uprc_range)));
            if ( IncludeMinUbid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,1060,m_min_ubid);
            }
            if ( IncludeMaxUask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,1061,m_max_uask);
            }
            if ( IncludeMinOptionPx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,1062,m_min_option_px);
            }
            if ( IncludeMaxChildOrders()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,1063,m_max_child_orders);
            }
            if ( IncludeOrderDuration()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,1064,m_order_duration);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1065,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ReachRule>(m_take_reach_rule)));
            if ( IncludeOrderPrcLimit()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,1066,m_order_prc_limit);
            }
            if ( IncludeOrderRefUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,1067,m_order_ref_uprc);
            }
            if ( IncludeOrderRefDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,1068,m_order_ref_delta);
            }
            if ( IncludeOrderRefGamma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,1069,m_order_ref_gamma);
            }
            if ( IncludeOrderVolLimit()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,1070,m_order_vol_limit);
            }
            if ( IncludeRateOverride()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,1071,m_rate_override);
            }
            if ( IncludeSdivOverride()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,1072,m_sdiv_override);
            }
            if ( IncludeDdivOverride()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,1073,static_cast<string>(m_ddiv_override));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1074,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OverrideCode>(m_override_code)));
            if ( IncludeOrderPrcOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,1075,m_order_prc_offset);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1076,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>(m_take_alpha_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1077,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>(m_make_alpha_type)));
            if ( IncludeTakeAlphaFactor()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,1078,m_take_alpha_factor);
            }
            if ( IncludeMakeAlphaFactor()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,1079,m_make_alpha_factor);
            }
            if ( IncludeTakeProbability()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,1080,m_take_probability);
            }
            if ( IncludeMakeProbability()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,1081,m_make_probability);
            }
            if ( IncludeTakeSurfPrcOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,1082,m_take_surf_prc_offset);
            }
            if ( IncludeTakeSurfVolOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,1083,m_take_surf_vol_offset);
            }
            if ( IncludeTakeSurfWidthOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,1084,m_take_surf_width_offset);
            }
            if ( IncludeMakeSurfPrcOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,1085,m_make_surf_prc_offset);
            }
            if ( IncludeMakeSurfVolOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,1086,m_make_surf_vol_offset);
            }
            if ( IncludeMakeSurfWidthOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,1087,m_make_surf_width_offset);
            }
            if ( IncludeOrderRefEventMult()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,1088,m_order_ref_event_mult);
            }
            if ( IncludeOrderRefEventDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 1089, m_order_ref_event_dttm);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1099,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::NbboCap>(m_nbbo_cap)));
            if ( IncludeExternHedgeExDest()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,1096,static_cast<string>(m_extern_hedge_ex_dest));
            }
            if ( IncludeExternHedgeParams()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,1091,static_cast<string>(m_extern_hedge_params));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,304,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(m_spdr_order_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,307,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrCloseReason>(m_spdr_close_reason)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,310,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRejectReason>(m_spdr_reject_reason)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1092,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRiskLevel>(m_spdr_reject_level)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,313,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_firm_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,316,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCapacity>(m_order_capacity)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,319,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,322,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type)));
            if ( IncludeArriveFirmPos()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,325,m_arrive_firm_pos);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,328,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_arrive_ssale_flag)));
            if ( IncludeNoCrossGroup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,331,static_cast<string>(m_no_cross_group));
            }
            if ( IncludeExchTraderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,334,static_cast<string>(m_exch_trader_id));
            }
            if ( IncludeLargeTraderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,337,static_cast<string>(m_large_trader_id));
            }
            if ( IncludeTradingLocation()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,340,static_cast<string>(m_trading_location));
            }
            if ( IncludeFirmPosition()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,343,m_firm_position);
            }
            if ( IncludeOpenSellSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,346,m_open_sell_sh);
            }
            if ( IncludeLocateQuan()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,349,m_locate_quan);
            }
            if ( IncludeLocateFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,352,static_cast<string>(m_locate_firm));
            }
            if ( IncludeLocatePool()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,355,static_cast<string>(m_locate_pool));
            }
            if ( IncludeClearingFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,358,static_cast<string>(m_clearing_firm));
            }
            if ( IncludeClearingAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,361,static_cast<string>(m_clearing_accnt));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,364,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CatReportType>(m_cat_reportable)));
            if ( IncludeCatSrcBrkrImid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,367,static_cast<string>(m_cat_src_brkr_imid));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,370,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CatAccntType>(m_cat_src_accnt_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,373,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CatFirmType>(m_cat_src_firm_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,376,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CatDeptType>(m_cat_dest_dept_type)));
            if ( IncludeCatAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,379,static_cast<string>(m_cat_accnt));
            }
            if ( IncludeCatBrkrAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,382,static_cast<string>(m_cat_brkr_accnt));
            }
            if ( IncludeCumFillQuantity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,385,m_cum_fill_quantity);
            }
            if ( IncludeAvgFillPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,388,m_avg_fill_price);
            }
            if ( IncludeAvgFillUprice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,391,m_avg_fill_uprice);
            }
            if ( IncludeLeavesQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,394,m_leaves_qty);
            }
            if ( IncludeLastFillNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,397,m_last_fill_number);
            }
            if ( IncludeLastFillDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 400, m_last_fill_dttm);
            }
            if ( IncludeReviewClOrdId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,403,static_cast<string>(m_review_cl_ord_id));
            }
            if ( IncludeReviewOrigClOrdId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,406,static_cast<string>(m_review_orig_cl_ord_id));
            }
            if ( IncludeReviewCancelClOrdId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,409,static_cast<string>(m_review_cancel_cl_ord_id));
            }
            if ( IncludeReviewOrderSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,412,m_review_order_size);
            }
            if ( IncludeReviewOrderActiveSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,415,m_review_order_active_size);
            }
            if ( IncludeReviewCumFillQuantity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,418,m_review_cum_fill_quantity);
            }
            if ( IncludeReviewAvgFillPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,421,m_review_avg_fill_price);
            }
            if ( IncludeReviewLeavesQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,424,m_review_leaves_qty);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,427,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(m_review_order_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,433,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MaxProgress>(m_max_progress)));
            if ( IncludeMaxProgressDetail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,436,static_cast<string>(m_max_progress_detail));
            }
            if ( IncludeMaxProgressTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 439, m_max_progress_time);
            }
            if ( IncludeNumChildOrders()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,442,m_num_child_orders);
            }
            if ( IncludeNbboBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,445,m_nbbo_bid);
            }
            if ( IncludeNbboAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,448,m_nbbo_ask);
            }
            if ( IncludeNbboBidSz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,451,m_nbbo_bid_sz);
            }
            if ( IncludeNbboAskSz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,454,m_nbbo_ask_sz);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,457,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktStance>(m_mkt_stance)));
            if ( IncludeParentStrategy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,460,static_cast<string>(m_parent_strategy));
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 463, tickerKeyLayout_ticker);
            }
            if ( IncludeTickValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,466,m_tick_value);
            }
            if ( IncludePointValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,469,m_point_value);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,472,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            if ( IncludeNotionalMult()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,475,m_notional_mult);
            }
            if ( IncludeSecurityId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,478,static_cast<string>(m_security_id));
            }
            if ( IncludeSecurityDesc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,481,static_cast<string>(m_security_desc));
            }
            if ( IncludeProductGroup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,484,static_cast<string>(m_product_group));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,487,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProductClass>(m_product_class)));
            if ( IncludeUndKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_und_key{};
                m_und_key.setCodecExpiryKey(expiryKeyLayout_und_key);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 490, expiryKeyLayout_und_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,493,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_und_type)));
            if ( IncludeUSecDesc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,496,static_cast<string>(m_u_sec_desc));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,499,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format)));
            if ( IncludeUserData1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,502,static_cast<string>(m_user_data1));
            }
            if ( IncludeUserData2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,505,static_cast<string>(m_user_data2));
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 508, m_timestamp);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1093,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::InclExclDisclose>(m_include_srnetwork)));
            if ( IncludeAltCrossIdV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5000,static_cast<string>(m_alt_cross_id__v7));
            }
            if ( IncludeExecBrokerAccntV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5001,static_cast<string>(m_exec_broker_accnt__v7));
            }
            if ( IncludeExecBrokerClFirmV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5002,static_cast<string>(m_exec_broker_cl_firm__v7));
            }
            if ( IncludeExecUsernameV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5003,static_cast<string>(m_exec_username__v7));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5004,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SRDataCenter_V7>(m_data_center__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5005,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TimeInForce>(m_time_in_force__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5006,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TimeInForce>(m_hedge_tif__v7)));
            if ( IncludeLocateSourceV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5007,static_cast<string>(m_locate_source__v7));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5008,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlipType>(m_clearing_flip_type__v7)));
            if ( IncludeClearingFlipFirmV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5009,static_cast<string>(m_clearing_flip_firm__v7));
            }
            if ( IncludeClearingFlipAccntV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5010,static_cast<string>(m_clearing_flip_accnt__v7));
            }
            if ( IncludeReviewRoutingCodeV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5011,static_cast<string>(m_review_routing_code__v7));
            }
            if ( IncludeProgressTimeoutV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,5012,m_progress_timeout__v7);
            }
            if ( IncludeDirectedCounterParty()) {
                for (auto& item : m_directed_counter_party) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 517, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeFaceLegsV7()) {
                for (auto& item : m_face_legs__v7) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 5013, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeFaceSideV7()) {
                for (auto& item : m_face_side__v7) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 5047, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeOrderLegs()) {
                for (auto& item : m_order_legs) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 613, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                    case 100: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sys_realm = static_cast<spiderrock::protobuf::api::SysRealm>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sys_environment = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_run_status = static_cast<spiderrock::protobuf::api::RunStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_report_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_parent_shape = static_cast<spiderrock::protobuf::api::SpdrOrderShape>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_record_version = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_record_source = static_cast<spiderrock::protobuf::api::RecordSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_parent_version = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_base_parent_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 1037: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_prev_parent_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 1038: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_next_parent_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 1098: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_action_type = static_cast<spiderrock::protobuf::api::SpdrActionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_prev_parent_create_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prev_parent_cum_fill_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_client_seq_num_in = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_order_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_prev_order_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_cancel_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_src_routing_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_package_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_prev_package_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_risk_group_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_trigger_group_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::OptionKeyCodec::TagType) {
                            auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                            m_sec_key.setFromCodec(optionKey);
                        }
                        break;
                    }
                    case 172: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 1039: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_core_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 1040: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_sponsor_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_client_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 1041: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_user_source = static_cast<spiderrock::protobuf::api::SpdrSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 1094: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_brkr_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 1095: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_extern_ex_dest = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_extern_params = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 202: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_source = static_cast<spiderrock::protobuf::api::SpdrSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_grouping_code = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 1042: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_engine_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_order_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 214: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_order_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 217: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_type = static_cast<spiderrock::protobuf::api::PriceType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_order_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_order_active_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 226: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_stage_type = static_cast<spiderrock::protobuf::api::SpdrStageType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 1043: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_stage_review = static_cast<spiderrock::protobuf::api::StageReview>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 229: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_parent_order_handling = static_cast<spiderrock::protobuf::api::ParentOrderHandling>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 232: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_parent_balance_handling = static_cast<spiderrock::protobuf::api::ParentBalanceHandling>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_limit_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 238: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_order_limit_type = static_cast<spiderrock::protobuf::api::SpdrLimitType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 241: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_take_limit_class = static_cast<spiderrock::protobuf::api::SpdrLimitClass>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 244: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_make_limit_class = static_cast<spiderrock::protobuf::api::SpdrLimitClass>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 247: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_start_type = static_cast<spiderrock::protobuf::api::StartType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 1044: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_market_session = static_cast<spiderrock::protobuf::api::MarketSession>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 1097: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_active_duration = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 253: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_start_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 256: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_good_till_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 259: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auto_hedge = static_cast<spiderrock::protobuf::api::AutoHedge>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 262: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_instrument = static_cast<spiderrock::protobuf::api::HedgeInst>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 265: {
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_hedge_sec_key.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 268: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 271: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_hedge_beta_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 274: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_scope = static_cast<spiderrock::protobuf::api::HedgeScope>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 1045: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_session = static_cast<spiderrock::protobuf::api::MarketSession>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 280: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_order_create_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 283: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_create_latency = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 286: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cancel_reason = static_cast<spiderrock::protobuf::api::OrderCancelReason>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 289: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_order_cancel_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 292: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_cancel_latency = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 295: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_order_working_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 298: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_order_closed_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 301: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_order_closed_text = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 1046: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_exposure_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 1047: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_public_size = static_cast<spiderrock::protobuf::api::PublicSizeHandling>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 1048: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_overlap_cxl_repl = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 1049: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_progress_expose_time = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 1050: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_progress_rule = static_cast<spiderrock::protobuf::api::ProgressRule>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 1051: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_progress_slice_cnt = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 1052: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vwap_participation = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 1053: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_responder = static_cast<spiderrock::protobuf::api::AuctionResponder>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 1054: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_make_exch_fee = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 1055: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_take_exch_fee = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 1056: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_inc_take_exch_fee = static_cast<spiderrock::protobuf::api::IncExchFee>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 1057: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_inc_make_exch_fee = static_cast<spiderrock::protobuf::api::IncExchFee>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 1058: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_make_exch_rule = static_cast<spiderrock::protobuf::api::MakeExchRule>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 1059: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cxl_uprc_range = static_cast<spiderrock::protobuf::api::UPrcCxl>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 1060: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_ubid = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 1061: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_uask = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 1062: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_option_px = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 1063: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_child_orders = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 1064: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_order_duration = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 1065: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_take_reach_rule = static_cast<spiderrock::protobuf::api::ReachRule>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 1066: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_order_prc_limit = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 1067: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_order_ref_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 1068: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_ref_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 1069: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_ref_gamma = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 1070: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_vol_limit = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 1071: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rate_override = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 1072: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sdiv_override = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 1073: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_ddiv_override = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 1074: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_override_code = static_cast<spiderrock::protobuf::api::OverrideCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 1075: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_order_prc_offset = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 1076: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_take_alpha_type = static_cast<spiderrock::protobuf::api::AlphaType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 1077: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_make_alpha_type = static_cast<spiderrock::protobuf::api::AlphaType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 1078: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_take_alpha_factor = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 1079: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_make_alpha_factor = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 1080: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_take_probability = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 1081: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_make_probability = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 1082: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_take_surf_prc_offset = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 1083: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_take_surf_vol_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 1084: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_take_surf_width_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 1085: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_make_surf_prc_offset = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 1086: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_make_surf_vol_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 1087: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_make_surf_width_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 1088: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_ref_event_mult = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 1089: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_order_ref_event_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 1099: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_nbbo_cap = static_cast<spiderrock::protobuf::api::NbboCap>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 1096: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_extern_hedge_ex_dest = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 1091: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_extern_hedge_params = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 304: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_order_status = static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 307: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_close_reason = static_cast<spiderrock::protobuf::api::SpdrCloseReason>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 310: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_reject_reason = static_cast<spiderrock::protobuf::api::SpdrRejectReason>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 1092: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_reject_level = static_cast<spiderrock::protobuf::api::SpdrRiskLevel>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 313: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_firm_type = static_cast<spiderrock::protobuf::api::FirmType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 316: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_order_capacity = static_cast<spiderrock::protobuf::api::OrderCapacity>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 319: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ssale_flag = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 322: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_position_type = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 325: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_arrive_firm_pos = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 328: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_arrive_ssale_flag = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 331: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_no_cross_group = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 334: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exch_trader_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 337: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_large_trader_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 340: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_trading_location = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 343: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_firm_position = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 346: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_open_sell_sh = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 349: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_locate_quan = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 352: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_locate_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 355: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_locate_pool = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 358: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_clearing_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 361: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_clearing_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 364: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cat_reportable = static_cast<spiderrock::protobuf::api::CatReportType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 367: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cat_src_brkr_imid = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 370: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cat_src_accnt_type = static_cast<spiderrock::protobuf::api::CatAccntType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 373: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cat_src_firm_type = static_cast<spiderrock::protobuf::api::CatFirmType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 376: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cat_dest_dept_type = static_cast<spiderrock::protobuf::api::CatDeptType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 379: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cat_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 382: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cat_brkr_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 385: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_fill_quantity = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 388: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_avg_fill_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 391: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_avg_fill_uprice = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 394: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_leaves_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 397: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_last_fill_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 400: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_last_fill_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 403: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_review_cl_ord_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 406: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_review_orig_cl_ord_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 409: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_review_cancel_cl_ord_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 412: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_review_order_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 415: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_review_order_active_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 418: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_review_cum_fill_quantity = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 421: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_review_avg_fill_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 424: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_review_leaves_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 427: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_review_order_status = static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 433: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_max_progress = static_cast<spiderrock::protobuf::api::MaxProgress>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 436: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_max_progress_detail = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 439: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_max_progress_time = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 442: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_child_orders = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 445: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_nbbo_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 448: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_nbbo_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 451: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_nbbo_bid_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 454: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_nbbo_ask_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 457: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_mkt_stance = static_cast<spiderrock::protobuf::api::MktStance>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 460: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_parent_strategy = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 463: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 466: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_tick_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 469: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_point_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 472: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_point_currency = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 475: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_notional_mult = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 478: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_security_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 481: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_security_desc = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 484: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_product_group = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 487: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_product_class = static_cast<spiderrock::protobuf::api::ProductClass>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 490: {
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_und_key.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 493: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_und_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 496: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_u_sec_desc = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 499: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_format = static_cast<spiderrock::protobuf::api::PriceFormat>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 502: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_data1 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 505: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_data2 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 508: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 1093: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_include_srnetwork = static_cast<spiderrock::protobuf::api::InclExclDisclose>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5000: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_cross_id__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5001: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_broker_accnt__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5002: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_broker_cl_firm__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5003: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_username__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5004: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_data_center__v7 = static_cast<spiderrock::protobuf::api::SRDataCenter_V7>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5005: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_time_in_force__v7 = static_cast<spiderrock::protobuf::api::TimeInForce>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5006: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_tif__v7 = static_cast<spiderrock::protobuf::api::TimeInForce>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5007: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_locate_source__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5008: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_clearing_flip_type__v7 = static_cast<spiderrock::protobuf::api::FlipType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5009: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_clearing_flip_firm__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5010: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_clearing_flip_accnt__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5011: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_review_routing_code__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5012: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_progress_timeout__v7 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 517: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            directed_counter_party item_directed_counter_party;
                            item_directed_counter_party.Decode(pos, pos+length);  
                            m_directed_counter_party.emplace_back(item_directed_counter_party);
                        }
                        break;
                    }
                    case 5013: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            face_legs__v7 item_face_legs__v7;
                            item_face_legs__v7.Decode(pos, pos+length);  
                            m_face_legs__v7.emplace_back(item_face_legs__v7);
                        }
                        break;
                    }
                    case 5047: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            face_side__v7 item_face_side__v7;
                            item_face_side__v7.Decode(pos, pos+length);  
                            m_face_side__v7.emplace_back(item_face_side__v7);
                        }
                        break;
                    }
                    case 613: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            order_legs item_order_legs;
                            item_order_legs.Decode(pos, pos+length);  
                            m_order_legs.emplace_back(item_order_legs);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto SpdrParentReport::get<SpdrParentReport::_meta>() const { return SpdrParentReport::_meta{ m__meta}; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::pkey>() const { return SpdrParentReport::pkey{ m_pkey}; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::sys_realm>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysRealm>( m_sys_realm)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::sys_environment>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_sys_environment)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::run_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>( m_run_status)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::report_number>() const { return m_report_number; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::parent_shape>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>( m_parent_shape)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::record_version>() const { return m_record_version; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::record_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RecordSource>( m_record_source)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::parent_version>() const { return m_parent_version; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::base_parent_number>() const { return m_base_parent_number; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::prev_parent_number>() const { return m_prev_parent_number; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::next_parent_number>() const { return m_next_parent_number; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::spdr_action_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrActionType>( m_spdr_action_type)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::prev_parent_create_dttm>() const { return m_prev_parent_create_dttm; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::prev_parent_cum_fill_qty>() const { return m_prev_parent_cum_fill_qty; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::client_seq_num_in>() const { return m_client_seq_num_in; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::alt_order_id>() const { return m_alt_order_id; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::alt_prev_order_id>() const { return m_alt_prev_order_id; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::alt_cancel_id>() const { return m_alt_cancel_id; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::src_routing_code>() const { return m_src_routing_code; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::package_id>() const { return m_package_id; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::prev_package_id>() const { return m_prev_package_id; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::risk_group_id>() const { return m_risk_group_id; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::trigger_group_id>() const { return m_trigger_group_id; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::sec_key>() const { return SpdrParentReport::sec_key{ m_sec_key}; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_sec_type)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::accnt>() const { return m_accnt; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::client_firm>() const { return m_client_firm; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::core_client_firm>() const { return m_core_client_firm; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::sponsor_client_firm>() const { return m_sponsor_client_firm; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::client_accnt>() const { return m_client_accnt; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::user_name>() const { return m_user_name; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::user_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>( m_user_source)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::alt_accnt>() const { return m_alt_accnt; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::alt_user_name>() const { return m_alt_user_name; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::exec_brkr_code>() const { return m_exec_brkr_code; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::extern_ex_dest>() const { return m_extern_ex_dest; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::extern_params>() const { return m_extern_params; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::spdr_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>( m_spdr_source)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::grouping_code>() const { return m_grouping_code; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::engine_name>() const { return m_engine_name; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::order_dttm>() const { return m_order_dttm; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::order_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_order_side)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::price_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceType>( m_price_type)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::order_size>() const { return m_order_size; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::order_active_size>() const { return m_order_active_size; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::spdr_stage_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrStageType>( m_spdr_stage_type)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::stage_review>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StageReview>( m_stage_review)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::parent_order_handling>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentOrderHandling>( m_parent_order_handling)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::parent_balance_handling>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentBalanceHandling>( m_parent_balance_handling)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::limit_price>() const { return m_limit_price; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::order_limit_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitType>( m_order_limit_type)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::take_limit_class>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>( m_take_limit_class)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::make_limit_class>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>( m_make_limit_class)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::start_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StartType>( m_start_type)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::market_session>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>( m_market_session)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::active_duration>() const { return m_active_duration; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::start_dttm>() const { return m_start_dttm; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::good_till_dttm>() const { return m_good_till_dttm; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::auto_hedge>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>( m_auto_hedge)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::hedge_instrument>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeInst>( m_hedge_instrument)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::hedge_sec_key>() const { return SpdrParentReport::hedge_sec_key{ m_hedge_sec_key}; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::hedge_sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_hedge_sec_type)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::hedge_beta_ratio>() const { return m_hedge_beta_ratio; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::hedge_scope>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeScope>( m_hedge_scope)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::hedge_session>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>( m_hedge_session)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::order_create_dttm>() const { return m_order_create_dttm; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::order_create_latency>() const { return m_order_create_latency; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::cancel_reason>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCancelReason>( m_cancel_reason)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::order_cancel_dttm>() const { return m_order_cancel_dttm; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::order_cancel_latency>() const { return m_order_cancel_latency; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::order_working_dttm>() const { return m_order_working_dttm; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::order_closed_dttm>() const { return m_order_closed_dttm; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::order_closed_text>() const { return m_order_closed_text; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::max_exposure_size>() const { return m_max_exposure_size; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::public_size>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PublicSizeHandling>( m_public_size)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::can_overlap_cxl_repl>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_overlap_cxl_repl)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::progress_expose_time>() const { return m_progress_expose_time; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::progress_rule>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProgressRule>( m_progress_rule)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::progress_slice_cnt>() const { return m_progress_slice_cnt; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::vwap_participation>() const { return m_vwap_participation; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::auction_responder>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionResponder>( m_auction_responder)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::max_make_exch_fee>() const { return m_max_make_exch_fee; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::max_take_exch_fee>() const { return m_max_take_exch_fee; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::inc_take_exch_fee>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::IncExchFee>( m_inc_take_exch_fee)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::inc_make_exch_fee>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::IncExchFee>( m_inc_make_exch_fee)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::make_exch_rule>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MakeExchRule>( m_make_exch_rule)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::cxl_uprc_range>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UPrcCxl>( m_cxl_uprc_range)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::min_ubid>() const { return m_min_ubid; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::max_uask>() const { return m_max_uask; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::min_option_px>() const { return m_min_option_px; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::max_child_orders>() const { return m_max_child_orders; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::order_duration>() const { return m_order_duration; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::take_reach_rule>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ReachRule>( m_take_reach_rule)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::order_prc_limit>() const { return m_order_prc_limit; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::order_ref_uprc>() const { return m_order_ref_uprc; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::order_ref_delta>() const { return m_order_ref_delta; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::order_ref_gamma>() const { return m_order_ref_gamma; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::order_vol_limit>() const { return m_order_vol_limit; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::rate_override>() const { return m_rate_override; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::sdiv_override>() const { return m_sdiv_override; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::ddiv_override>() const { return m_ddiv_override; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::override_code>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OverrideCode>( m_override_code)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::order_prc_offset>() const { return m_order_prc_offset; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::take_alpha_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>( m_take_alpha_type)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::make_alpha_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>( m_make_alpha_type)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::take_alpha_factor>() const { return m_take_alpha_factor; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::make_alpha_factor>() const { return m_make_alpha_factor; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::take_probability>() const { return m_take_probability; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::make_probability>() const { return m_make_probability; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::take_surf_prc_offset>() const { return m_take_surf_prc_offset; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::take_surf_vol_offset>() const { return m_take_surf_vol_offset; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::take_surf_width_offset>() const { return m_take_surf_width_offset; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::make_surf_prc_offset>() const { return m_make_surf_prc_offset; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::make_surf_vol_offset>() const { return m_make_surf_vol_offset; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::make_surf_width_offset>() const { return m_make_surf_width_offset; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::order_ref_event_mult>() const { return m_order_ref_event_mult; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::order_ref_event_dttm>() const { return m_order_ref_event_dttm; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::nbbo_cap>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::NbboCap>( m_nbbo_cap)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::extern_hedge_ex_dest>() const { return m_extern_hedge_ex_dest; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::extern_hedge_params>() const { return m_extern_hedge_params; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::spdr_order_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>( m_spdr_order_status)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::spdr_close_reason>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrCloseReason>( m_spdr_close_reason)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::spdr_reject_reason>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRejectReason>( m_spdr_reject_reason)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::spdr_reject_level>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRiskLevel>( m_spdr_reject_level)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::firm_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>( m_firm_type)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::order_capacity>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCapacity>( m_order_capacity)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::ssale_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>( m_ssale_flag)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::position_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>( m_position_type)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::arrive_firm_pos>() const { return m_arrive_firm_pos; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::arrive_ssale_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>( m_arrive_ssale_flag)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::no_cross_group>() const { return m_no_cross_group; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::exch_trader_id>() const { return m_exch_trader_id; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::large_trader_id>() const { return m_large_trader_id; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::trading_location>() const { return m_trading_location; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::firm_position>() const { return m_firm_position; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::open_sell_sh>() const { return m_open_sell_sh; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::locate_quan>() const { return m_locate_quan; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::locate_firm>() const { return m_locate_firm; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::locate_pool>() const { return m_locate_pool; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::clearing_firm>() const { return m_clearing_firm; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::clearing_accnt>() const { return m_clearing_accnt; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::cat_reportable>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CatReportType>( m_cat_reportable)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::cat_src_brkr_imid>() const { return m_cat_src_brkr_imid; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::cat_src_accnt_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CatAccntType>( m_cat_src_accnt_type)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::cat_src_firm_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CatFirmType>( m_cat_src_firm_type)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::cat_dest_dept_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CatDeptType>( m_cat_dest_dept_type)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::cat_accnt>() const { return m_cat_accnt; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::cat_brkr_accnt>() const { return m_cat_brkr_accnt; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::cum_fill_quantity>() const { return m_cum_fill_quantity; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::avg_fill_price>() const { return m_avg_fill_price; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::avg_fill_uprice>() const { return m_avg_fill_uprice; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::leaves_qty>() const { return m_leaves_qty; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::last_fill_number>() const { return m_last_fill_number; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::last_fill_dttm>() const { return m_last_fill_dttm; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::review_cl_ord_id>() const { return m_review_cl_ord_id; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::review_orig_cl_ord_id>() const { return m_review_orig_cl_ord_id; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::review_cancel_cl_ord_id>() const { return m_review_cancel_cl_ord_id; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::review_order_size>() const { return m_review_order_size; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::review_order_active_size>() const { return m_review_order_active_size; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::review_cum_fill_quantity>() const { return m_review_cum_fill_quantity; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::review_avg_fill_price>() const { return m_review_avg_fill_price; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::review_leaves_qty>() const { return m_review_leaves_qty; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::review_order_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>( m_review_order_status)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::max_progress>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MaxProgress>( m_max_progress)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::max_progress_detail>() const { return m_max_progress_detail; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::max_progress_time>() const { return m_max_progress_time; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::num_child_orders>() const { return m_num_child_orders; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::nbbo_bid>() const { return m_nbbo_bid; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::nbbo_ask>() const { return m_nbbo_ask; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::nbbo_bid_sz>() const { return m_nbbo_bid_sz; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::nbbo_ask_sz>() const { return m_nbbo_ask_sz; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::mkt_stance>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktStance>( m_mkt_stance)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::parent_strategy>() const { return m_parent_strategy; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::ticker>() const { return SpdrParentReport::ticker{ m_ticker}; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::tick_value>() const { return m_tick_value; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::point_value>() const { return m_point_value; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::point_currency>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>( m_point_currency)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::notional_mult>() const { return m_notional_mult; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::security_id>() const { return m_security_id; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::security_desc>() const { return m_security_desc; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::product_group>() const { return m_product_group; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::product_class>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProductClass>( m_product_class)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::und_key>() const { return SpdrParentReport::und_key{ m_und_key}; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::und_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_und_type)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::u_sec_desc>() const { return m_u_sec_desc; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::price_format>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>( m_price_format)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::user_data1>() const { return m_user_data1; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::user_data2>() const { return m_user_data2; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::include_srnetwork>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::InclExclDisclose>( m_include_srnetwork)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::alt_cross_id__v7>() const { return m_alt_cross_id__v7; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::exec_broker_accnt__v7>() const { return m_exec_broker_accnt__v7; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::exec_broker_cl_firm__v7>() const { return m_exec_broker_cl_firm__v7; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::exec_username__v7>() const { return m_exec_username__v7; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::data_center__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SRDataCenter_V7>( m_data_center__v7)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::time_in_force__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TimeInForce>( m_time_in_force__v7)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::hedge_tif__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TimeInForce>( m_hedge_tif__v7)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::locate_source__v7>() const { return m_locate_source__v7; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::clearing_flip_type__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlipType>( m_clearing_flip_type__v7)); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::clearing_flip_firm__v7>() const { return m_clearing_flip_firm__v7; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::clearing_flip_accnt__v7>() const { return m_clearing_flip_accnt__v7; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::review_routing_code__v7>() const { return m_review_routing_code__v7; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::progress_timeout__v7>() const { return m_progress_timeout__v7; }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::directed_counter_party>(int i) const { return SpdrParentReport::directed_counter_party{ get_directed_counter_party(i)}; }
    template<> inline int SpdrParentReport::count<SpdrParentReport::directed_counter_party>() const { return static_cast<int>( m_directed_counter_party.size()); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::face_legs__v7>(int i) const { return SpdrParentReport::face_legs__v7{ get_face_legs__v7(i)}; }
    template<> inline int SpdrParentReport::count<SpdrParentReport::face_legs__v7>() const { return static_cast<int>( m_face_legs__v7.size()); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::face_side__v7>(int i) const { return SpdrParentReport::face_side__v7{ get_face_side__v7(i)}; }
    template<> inline int SpdrParentReport::count<SpdrParentReport::face_side__v7>() const { return static_cast<int>( m_face_side__v7.size()); }
    template<> inline const auto SpdrParentReport::get<SpdrParentReport::order_legs>(int i) const { return SpdrParentReport::order_legs{ get_order_legs(i)}; }
    template<> inline int SpdrParentReport::count<SpdrParentReport::order_legs>() const { return static_cast<int>( m_order_legs.size()); }
    template<> inline const auto SpdrParentReport_PKey::get<SpdrParentReport_PKey::parent_number>() const { return m_parent_number; }
    
    template<> inline const auto SpdrParentReport_DirectedCounterParty::get<SpdrParentReport_DirectedCounterParty::client_firm>() const { return m_client_firm; }
    template<> inline const auto SpdrParentReport_DirectedCounterParty::get<SpdrParentReport_DirectedCounterParty::incl_excl>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::InclExclDisclose>(m_incl_excl));}
    
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::last_leg_ref_id__v7>() const { return m_last_leg_ref_id__v7; }
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::last_fill_dttm__v7>() const { return m_last_fill_dttm__v7; }
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::cum_square_qty__v7>() const { return m_cum_square_qty__v7; }
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::avg_square_prc__v7>() const { return m_avg_square_prc__v7; }
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::last_square_dttm__v7>() const { return m_last_square_dttm__v7; }
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::cum_partial_qty__v7>() const { return m_cum_partial_qty__v7; }
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::ssale_flag__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag__v7));}
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::stock_cum_fill_qty__v7>() const { return m_stock_cum_fill_qty__v7; }
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::stock_avg_fill_prc__v7>() const { return m_stock_avg_fill_prc__v7; }
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::pos_type1__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type1__v7));}
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::ssale_flag1__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag1__v7));}
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::leg_cum_fill_qty1__v7>() const { return m_leg_cum_fill_qty1__v7; }
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::leg_avg_fill_prc1__v7>() const { return m_leg_avg_fill_prc1__v7; }
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::pos_type2__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type2__v7));}
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::ssale_flag2__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag2__v7));}
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::leg_cum_fill_qty2__v7>() const { return m_leg_cum_fill_qty2__v7; }
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::leg_avg_fill_prc2__v7>() const { return m_leg_avg_fill_prc2__v7; }
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::pos_type3__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type3__v7));}
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::ssale_flag3__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag3__v7));}
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::leg_cum_fill_qty3__v7>() const { return m_leg_cum_fill_qty3__v7; }
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::leg_avg_fill_prc3__v7>() const { return m_leg_avg_fill_prc3__v7; }
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::pos_type4__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type4__v7));}
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::ssale_flag4__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag4__v7));}
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::leg_cum_fill_qty4__v7>() const { return m_leg_cum_fill_qty4__v7; }
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::leg_avg_fill_prc4__v7>() const { return m_leg_avg_fill_prc4__v7; }
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::pos_type5__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type5__v7));}
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::ssale_flag5__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag5__v7));}
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::leg_cum_fill_qty5__v7>() const { return m_leg_cum_fill_qty5__v7; }
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::leg_avg_fill_prc5__v7>() const { return m_leg_avg_fill_prc5__v7; }
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::pos_type6__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type6__v7));}
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::ssale_flag6__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag6__v7));}
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::leg_cum_fill_qty6__v7>() const { return m_leg_cum_fill_qty6__v7; }
    template<> inline const auto SpdrParentReport_FaceLegs_V7::get<SpdrParentReport_FaceLegs_V7::leg_avg_fill_prc6__v7>() const { return m_leg_avg_fill_prc6__v7; }
    
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::face_id__v7>() const { return m_face_id__v7; }
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::alt_order_id__v7>() const { return m_alt_order_id__v7; }
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::accnt__v7>() const { return m_accnt__v7; }
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::client_firm__v7>() const { return m_client_firm__v7; }
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::alt_accnt__v7>() const { return m_alt_accnt__v7; }
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::firm_type__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_firm_type__v7));}
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::order_capacity__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCapacity>(m_order_capacity__v7));}
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::ssale_flag__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag__v7));}
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::position_type__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type__v7));}
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::firm_position__v7>() const { return m_firm_position__v7; }
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::open_sell_sh__v7>() const { return m_open_sell_sh__v7; }
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::locate_quan__v7>() const { return m_locate_quan__v7; }
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::locate_firm__v7>() const { return m_locate_firm__v7; }
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::locate_pool__v7>() const { return m_locate_pool__v7; }
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::locate_source__v7>() const { return m_locate_source__v7; }
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::no_cross_group__v7>() const { return m_no_cross_group__v7; }
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::exch_trader_id__v7>() const { return m_exch_trader_id__v7; }
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::large_trader_id__v7>() const { return m_large_trader_id__v7; }
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::trading_location__v7>() const { return m_trading_location__v7; }
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::clearing_firm__v7>() const { return m_clearing_firm__v7; }
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::clearing_accnt__v7>() const { return m_clearing_accnt__v7; }
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::clearing_flip_type__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlipType>(m_clearing_flip_type__v7));}
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::clearing_flip_firm__v7>() const { return m_clearing_flip_firm__v7; }
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::clearing_flip_accnt__v7>() const { return m_clearing_flip_accnt__v7; }
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::cat_src_brkr_imid__v7>() const { return m_cat_src_brkr_imid__v7; }
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::cat_src_accnt_type__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CatAccntType>(m_cat_src_accnt_type__v7));}
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::cat_src_firm_type__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CatFirmType>(m_cat_src_firm_type__v7));}
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::cum_fill_quantity__v7>() const { return m_cum_fill_quantity__v7; }
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::avg_fill_price__v7>() const { return m_avg_fill_price__v7; }
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::leaves_qty__v7>() const { return m_leaves_qty__v7; }
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::last_fill_number__v7>() const { return m_last_fill_number__v7; }
    template<> inline const auto SpdrParentReport_FaceSide_V7::get<SpdrParentReport_FaceSide_V7::last_fill_dttm__v7>() const { return m_last_fill_dttm__v7; }
    
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::last_leg_ref_id>() const { return m_last_leg_ref_id; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::last_fill_dttm>() const { return m_last_fill_dttm; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::cum_square_qty>() const { return m_cum_square_qty; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::avg_square_prc>() const { return m_avg_square_prc; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::last_square_dttm>() const { return m_last_square_dttm; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::cum_partial_qty>() const { return m_cum_partial_qty; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::review_cum_square_qty>() const { return m_review_cum_square_qty; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::review_avg_square_prc>() const { return m_review_avg_square_prc; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::review_last_square_dttm>() const { return m_review_last_square_dttm; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::review_cum_partial_qty>() const { return m_review_cum_partial_qty; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::ticker>() const { return SpdrParentReport_OrderLegs::ticker{m_ticker}; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::stock_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_stock_side));}
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::stock_shares>() const { return m_stock_shares; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::stock_leg_id>() const { return m_stock_leg_id; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::alt_stk_leg_id>() const { return m_alt_stk_leg_id; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::review_stk_leg_id>() const { return m_review_stk_leg_id; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::review_stk_leg_alt_id>() const { return m_review_stk_leg_alt_id; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::ssale_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag));}
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::stock_cum_fill_qty>() const { return m_stock_cum_fill_qty; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::stock_avg_fill_prc>() const { return m_stock_avg_fill_prc; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::stock_review_cum_fill_qty>() const { return m_stock_review_cum_fill_qty; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::stock_review_avg_fill_prc>() const { return m_stock_review_avg_fill_prc; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::num_legs>() const { return m_num_legs; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::sec_key1>() const { return SpdrParentReport_OrderLegs::sec_key1{m_sec_key1}; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::sec_type1>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type1));}
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::mult1>() const { return m_mult1; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::side1>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side1));}
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_id1>() const { return m_leg_id1; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::alt_leg_id1>() const { return m_alt_leg_id1; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::review_leg_id1>() const { return m_review_leg_id1; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::review_leg_alt_id1>() const { return m_review_leg_alt_id1; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::pos_type1>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type1));}
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::ssale_flag1>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag1));}
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_cum_fill_qty1>() const { return m_leg_cum_fill_qty1; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_avg_fill_prc1>() const { return m_leg_avg_fill_prc1; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_review_cum_fill_qty1>() const { return m_leg_review_cum_fill_qty1; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_review_avg_fill_prc1>() const { return m_leg_review_avg_fill_prc1; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::sec_key2>() const { return SpdrParentReport_OrderLegs::sec_key2{m_sec_key2}; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::sec_type2>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type2));}
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::mult2>() const { return m_mult2; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::side2>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side2));}
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_id2>() const { return m_leg_id2; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::alt_leg_id2>() const { return m_alt_leg_id2; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::review_leg_id2>() const { return m_review_leg_id2; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::review_leg_alt_id2>() const { return m_review_leg_alt_id2; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::pos_type2>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type2));}
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::ssale_flag2>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag2));}
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_cum_fill_qty2>() const { return m_leg_cum_fill_qty2; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_avg_fill_prc2>() const { return m_leg_avg_fill_prc2; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_review_cum_fill_qty2>() const { return m_leg_review_cum_fill_qty2; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_review_avg_fill_prc2>() const { return m_leg_review_avg_fill_prc2; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::sec_key3>() const { return SpdrParentReport_OrderLegs::sec_key3{m_sec_key3}; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::sec_type3>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type3));}
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::mult3>() const { return m_mult3; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::side3>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side3));}
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_id3>() const { return m_leg_id3; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::alt_leg_id3>() const { return m_alt_leg_id3; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::review_leg_id3>() const { return m_review_leg_id3; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::review_leg_alt_id3>() const { return m_review_leg_alt_id3; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::pos_type3>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type3));}
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::ssale_flag3>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag3));}
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_cum_fill_qty3>() const { return m_leg_cum_fill_qty3; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_avg_fill_prc3>() const { return m_leg_avg_fill_prc3; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_review_cum_fill_qty3>() const { return m_leg_review_cum_fill_qty3; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_review_avg_fill_prc3>() const { return m_leg_review_avg_fill_prc3; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::sec_key4>() const { return SpdrParentReport_OrderLegs::sec_key4{m_sec_key4}; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::sec_type4>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type4));}
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::mult4>() const { return m_mult4; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::side4>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side4));}
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_id4>() const { return m_leg_id4; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::alt_leg_id4>() const { return m_alt_leg_id4; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::review_leg_id4>() const { return m_review_leg_id4; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::review_leg_alt_id4>() const { return m_review_leg_alt_id4; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::pos_type4>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type4));}
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::ssale_flag4>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag4));}
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_cum_fill_qty4>() const { return m_leg_cum_fill_qty4; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_avg_fill_prc4>() const { return m_leg_avg_fill_prc4; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_review_cum_fill_qty4>() const { return m_leg_review_cum_fill_qty4; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_review_avg_fill_prc4>() const { return m_leg_review_avg_fill_prc4; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::sec_key5>() const { return SpdrParentReport_OrderLegs::sec_key5{m_sec_key5}; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::sec_type5>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type5));}
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::mult5>() const { return m_mult5; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::side5>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side5));}
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_id5>() const { return m_leg_id5; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::alt_leg_id5>() const { return m_alt_leg_id5; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::review_leg_id5>() const { return m_review_leg_id5; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::review_leg_alt_id5>() const { return m_review_leg_alt_id5; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::pos_type5>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type5));}
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::ssale_flag5>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag5));}
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_cum_fill_qty5>() const { return m_leg_cum_fill_qty5; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_avg_fill_prc5>() const { return m_leg_avg_fill_prc5; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_review_cum_fill_qty5>() const { return m_leg_review_cum_fill_qty5; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_review_avg_fill_prc5>() const { return m_leg_review_avg_fill_prc5; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::sec_key6>() const { return SpdrParentReport_OrderLegs::sec_key6{m_sec_key6}; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::sec_type6>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type6));}
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::mult6>() const { return m_mult6; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::side6>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side6));}
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_id6>() const { return m_leg_id6; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::alt_leg_id6>() const { return m_alt_leg_id6; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::review_leg_id6>() const { return m_review_leg_id6; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::review_leg_alt_id6>() const { return m_review_leg_alt_id6; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::pos_type6>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type6));}
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::ssale_flag6>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag6));}
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_cum_fill_qty6>() const { return m_leg_cum_fill_qty6; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_avg_fill_prc6>() const { return m_leg_avg_fill_prc6; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_review_cum_fill_qty6>() const { return m_leg_review_cum_fill_qty6; }
    template<> inline const auto SpdrParentReport_OrderLegs::get<SpdrParentReport_OrderLegs::leg_review_avg_fill_prc6>() const { return m_leg_review_avg_fill_prc6; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrParentReport_PKey& m) {
        o << "\"parent_number\":" << m.get<SpdrParentReport_PKey::parent_number>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrParentReport_DirectedCounterParty& m) {
        o << "\"client_firm\":\"" << m.get<SpdrParentReport_DirectedCounterParty::client_firm>() << "\"";
        o << ",\"incl_excl\":" << (int64_t)m.get<SpdrParentReport_DirectedCounterParty::incl_excl>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrParentReport_FaceLegs_V7& m) {
        o << "\"last_leg_ref_id__v7\":" << m.get<SpdrParentReport_FaceLegs_V7::last_leg_ref_id__v7>();
        {
            std::time_t tt = m.get<SpdrParentReport_FaceLegs_V7::last_fill_dttm__v7>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"last_fill_dttm__v7\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"cum_square_qty__v7\":" << m.get<SpdrParentReport_FaceLegs_V7::cum_square_qty__v7>();
        o << ",\"avg_square_prc__v7\":" << m.get<SpdrParentReport_FaceLegs_V7::avg_square_prc__v7>();
        {
            std::time_t tt = m.get<SpdrParentReport_FaceLegs_V7::last_square_dttm__v7>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"last_square_dttm__v7\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"cum_partial_qty__v7\":" << m.get<SpdrParentReport_FaceLegs_V7::cum_partial_qty__v7>();
        o << ",\"ssale_flag__v7\":" << (int64_t)m.get<SpdrParentReport_FaceLegs_V7::ssale_flag__v7>();
        o << ",\"stock_cum_fill_qty__v7\":" << m.get<SpdrParentReport_FaceLegs_V7::stock_cum_fill_qty__v7>();
        o << ",\"stock_avg_fill_prc__v7\":" << m.get<SpdrParentReport_FaceLegs_V7::stock_avg_fill_prc__v7>();
        o << ",\"pos_type1__v7\":" << (int64_t)m.get<SpdrParentReport_FaceLegs_V7::pos_type1__v7>();
        o << ",\"ssale_flag1__v7\":" << (int64_t)m.get<SpdrParentReport_FaceLegs_V7::ssale_flag1__v7>();
        o << ",\"leg_cum_fill_qty1__v7\":" << m.get<SpdrParentReport_FaceLegs_V7::leg_cum_fill_qty1__v7>();
        o << ",\"leg_avg_fill_prc1__v7\":" << m.get<SpdrParentReport_FaceLegs_V7::leg_avg_fill_prc1__v7>();
        o << ",\"pos_type2__v7\":" << (int64_t)m.get<SpdrParentReport_FaceLegs_V7::pos_type2__v7>();
        o << ",\"ssale_flag2__v7\":" << (int64_t)m.get<SpdrParentReport_FaceLegs_V7::ssale_flag2__v7>();
        o << ",\"leg_cum_fill_qty2__v7\":" << m.get<SpdrParentReport_FaceLegs_V7::leg_cum_fill_qty2__v7>();
        o << ",\"leg_avg_fill_prc2__v7\":" << m.get<SpdrParentReport_FaceLegs_V7::leg_avg_fill_prc2__v7>();
        o << ",\"pos_type3__v7\":" << (int64_t)m.get<SpdrParentReport_FaceLegs_V7::pos_type3__v7>();
        o << ",\"ssale_flag3__v7\":" << (int64_t)m.get<SpdrParentReport_FaceLegs_V7::ssale_flag3__v7>();
        o << ",\"leg_cum_fill_qty3__v7\":" << m.get<SpdrParentReport_FaceLegs_V7::leg_cum_fill_qty3__v7>();
        o << ",\"leg_avg_fill_prc3__v7\":" << m.get<SpdrParentReport_FaceLegs_V7::leg_avg_fill_prc3__v7>();
        o << ",\"pos_type4__v7\":" << (int64_t)m.get<SpdrParentReport_FaceLegs_V7::pos_type4__v7>();
        o << ",\"ssale_flag4__v7\":" << (int64_t)m.get<SpdrParentReport_FaceLegs_V7::ssale_flag4__v7>();
        o << ",\"leg_cum_fill_qty4__v7\":" << m.get<SpdrParentReport_FaceLegs_V7::leg_cum_fill_qty4__v7>();
        o << ",\"leg_avg_fill_prc4__v7\":" << m.get<SpdrParentReport_FaceLegs_V7::leg_avg_fill_prc4__v7>();
        o << ",\"pos_type5__v7\":" << (int64_t)m.get<SpdrParentReport_FaceLegs_V7::pos_type5__v7>();
        o << ",\"ssale_flag5__v7\":" << (int64_t)m.get<SpdrParentReport_FaceLegs_V7::ssale_flag5__v7>();
        o << ",\"leg_cum_fill_qty5__v7\":" << m.get<SpdrParentReport_FaceLegs_V7::leg_cum_fill_qty5__v7>();
        o << ",\"leg_avg_fill_prc5__v7\":" << m.get<SpdrParentReport_FaceLegs_V7::leg_avg_fill_prc5__v7>();
        o << ",\"pos_type6__v7\":" << (int64_t)m.get<SpdrParentReport_FaceLegs_V7::pos_type6__v7>();
        o << ",\"ssale_flag6__v7\":" << (int64_t)m.get<SpdrParentReport_FaceLegs_V7::ssale_flag6__v7>();
        o << ",\"leg_cum_fill_qty6__v7\":" << m.get<SpdrParentReport_FaceLegs_V7::leg_cum_fill_qty6__v7>();
        o << ",\"leg_avg_fill_prc6__v7\":" << m.get<SpdrParentReport_FaceLegs_V7::leg_avg_fill_prc6__v7>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrParentReport_FaceSide_V7& m) {
        o << "\"face_id__v7\":" << m.get<SpdrParentReport_FaceSide_V7::face_id__v7>();
        o << ",\"alt_order_id__v7\":\"" << m.get<SpdrParentReport_FaceSide_V7::alt_order_id__v7>() << "\"";
        o << ",\"accnt__v7\":\"" << m.get<SpdrParentReport_FaceSide_V7::accnt__v7>() << "\"";
        o << ",\"client_firm__v7\":\"" << m.get<SpdrParentReport_FaceSide_V7::client_firm__v7>() << "\"";
        o << ",\"alt_accnt__v7\":\"" << m.get<SpdrParentReport_FaceSide_V7::alt_accnt__v7>() << "\"";
        o << ",\"firm_type__v7\":" << (int64_t)m.get<SpdrParentReport_FaceSide_V7::firm_type__v7>();
        o << ",\"order_capacity__v7\":" << (int64_t)m.get<SpdrParentReport_FaceSide_V7::order_capacity__v7>();
        o << ",\"ssale_flag__v7\":" << (int64_t)m.get<SpdrParentReport_FaceSide_V7::ssale_flag__v7>();
        o << ",\"position_type__v7\":" << (int64_t)m.get<SpdrParentReport_FaceSide_V7::position_type__v7>();
        o << ",\"firm_position__v7\":" << m.get<SpdrParentReport_FaceSide_V7::firm_position__v7>();
        o << ",\"open_sell_sh__v7\":" << m.get<SpdrParentReport_FaceSide_V7::open_sell_sh__v7>();
        o << ",\"locate_quan__v7\":" << m.get<SpdrParentReport_FaceSide_V7::locate_quan__v7>();
        o << ",\"locate_firm__v7\":\"" << m.get<SpdrParentReport_FaceSide_V7::locate_firm__v7>() << "\"";
        o << ",\"locate_pool__v7\":\"" << m.get<SpdrParentReport_FaceSide_V7::locate_pool__v7>() << "\"";
        o << ",\"locate_source__v7\":\"" << m.get<SpdrParentReport_FaceSide_V7::locate_source__v7>() << "\"";
        o << ",\"no_cross_group__v7\":\"" << m.get<SpdrParentReport_FaceSide_V7::no_cross_group__v7>() << "\"";
        o << ",\"exch_trader_id__v7\":\"" << m.get<SpdrParentReport_FaceSide_V7::exch_trader_id__v7>() << "\"";
        o << ",\"large_trader_id__v7\":\"" << m.get<SpdrParentReport_FaceSide_V7::large_trader_id__v7>() << "\"";
        o << ",\"trading_location__v7\":\"" << m.get<SpdrParentReport_FaceSide_V7::trading_location__v7>() << "\"";
        o << ",\"clearing_firm__v7\":\"" << m.get<SpdrParentReport_FaceSide_V7::clearing_firm__v7>() << "\"";
        o << ",\"clearing_accnt__v7\":\"" << m.get<SpdrParentReport_FaceSide_V7::clearing_accnt__v7>() << "\"";
        o << ",\"clearing_flip_type__v7\":" << (int64_t)m.get<SpdrParentReport_FaceSide_V7::clearing_flip_type__v7>();
        o << ",\"clearing_flip_firm__v7\":\"" << m.get<SpdrParentReport_FaceSide_V7::clearing_flip_firm__v7>() << "\"";
        o << ",\"clearing_flip_accnt__v7\":\"" << m.get<SpdrParentReport_FaceSide_V7::clearing_flip_accnt__v7>() << "\"";
        o << ",\"cat_src_brkr_imid__v7\":\"" << m.get<SpdrParentReport_FaceSide_V7::cat_src_brkr_imid__v7>() << "\"";
        o << ",\"cat_src_accnt_type__v7\":" << (int64_t)m.get<SpdrParentReport_FaceSide_V7::cat_src_accnt_type__v7>();
        o << ",\"cat_src_firm_type__v7\":" << (int64_t)m.get<SpdrParentReport_FaceSide_V7::cat_src_firm_type__v7>();
        o << ",\"cum_fill_quantity__v7\":" << m.get<SpdrParentReport_FaceSide_V7::cum_fill_quantity__v7>();
        o << ",\"avg_fill_price__v7\":" << m.get<SpdrParentReport_FaceSide_V7::avg_fill_price__v7>();
        o << ",\"leaves_qty__v7\":" << m.get<SpdrParentReport_FaceSide_V7::leaves_qty__v7>();
        o << ",\"last_fill_number__v7\":" << m.get<SpdrParentReport_FaceSide_V7::last_fill_number__v7>();
        {
            std::time_t tt = m.get<SpdrParentReport_FaceSide_V7::last_fill_dttm__v7>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"last_fill_dttm__v7\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrParentReport_OrderLegs& m) {
        o << "\"last_leg_ref_id\":" << m.get<SpdrParentReport_OrderLegs::last_leg_ref_id>();
        {
            std::time_t tt = m.get<SpdrParentReport_OrderLegs::last_fill_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"last_fill_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"cum_square_qty\":" << m.get<SpdrParentReport_OrderLegs::cum_square_qty>();
        o << ",\"avg_square_prc\":" << m.get<SpdrParentReport_OrderLegs::avg_square_prc>();
        {
            std::time_t tt = m.get<SpdrParentReport_OrderLegs::last_square_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"last_square_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"cum_partial_qty\":" << m.get<SpdrParentReport_OrderLegs::cum_partial_qty>();
        o << ",\"review_cum_square_qty\":" << m.get<SpdrParentReport_OrderLegs::review_cum_square_qty>();
        o << ",\"review_avg_square_prc\":" << m.get<SpdrParentReport_OrderLegs::review_avg_square_prc>();
        {
            std::time_t tt = m.get<SpdrParentReport_OrderLegs::review_last_square_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"review_last_square_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"review_cum_partial_qty\":" << m.get<SpdrParentReport_OrderLegs::review_cum_partial_qty>();
        o << ",\"ticker\":{" << m.get<SpdrParentReport_OrderLegs::ticker>() << "}";
        o << ",\"stock_side\":" << (int64_t)m.get<SpdrParentReport_OrderLegs::stock_side>();
        o << ",\"stock_shares\":" << m.get<SpdrParentReport_OrderLegs::stock_shares>();
        o << ",\"stock_leg_id\":" << m.get<SpdrParentReport_OrderLegs::stock_leg_id>();
        o << ",\"alt_stk_leg_id\":\"" << m.get<SpdrParentReport_OrderLegs::alt_stk_leg_id>() << "\"";
        o << ",\"review_stk_leg_id\":\"" << m.get<SpdrParentReport_OrderLegs::review_stk_leg_id>() << "\"";
        o << ",\"review_stk_leg_alt_id\":\"" << m.get<SpdrParentReport_OrderLegs::review_stk_leg_alt_id>() << "\"";
        o << ",\"ssale_flag\":" << (int64_t)m.get<SpdrParentReport_OrderLegs::ssale_flag>();
        o << ",\"stock_cum_fill_qty\":" << m.get<SpdrParentReport_OrderLegs::stock_cum_fill_qty>();
        o << ",\"stock_avg_fill_prc\":" << m.get<SpdrParentReport_OrderLegs::stock_avg_fill_prc>();
        o << ",\"stock_review_cum_fill_qty\":" << m.get<SpdrParentReport_OrderLegs::stock_review_cum_fill_qty>();
        o << ",\"stock_review_avg_fill_prc\":" << m.get<SpdrParentReport_OrderLegs::stock_review_avg_fill_prc>();
        o << ",\"num_legs\":" << m.get<SpdrParentReport_OrderLegs::num_legs>();
        o << ",\"sec_key1\":{" << m.get<SpdrParentReport_OrderLegs::sec_key1>() << "}";
        o << ",\"sec_type1\":" << (int64_t)m.get<SpdrParentReport_OrderLegs::sec_type1>();
        o << ",\"mult1\":" << m.get<SpdrParentReport_OrderLegs::mult1>();
        o << ",\"side1\":" << (int64_t)m.get<SpdrParentReport_OrderLegs::side1>();
        o << ",\"leg_id1\":" << m.get<SpdrParentReport_OrderLegs::leg_id1>();
        o << ",\"alt_leg_id1\":\"" << m.get<SpdrParentReport_OrderLegs::alt_leg_id1>() << "\"";
        o << ",\"review_leg_id1\":\"" << m.get<SpdrParentReport_OrderLegs::review_leg_id1>() << "\"";
        o << ",\"review_leg_alt_id1\":\"" << m.get<SpdrParentReport_OrderLegs::review_leg_alt_id1>() << "\"";
        o << ",\"pos_type1\":" << (int64_t)m.get<SpdrParentReport_OrderLegs::pos_type1>();
        o << ",\"ssale_flag1\":" << (int64_t)m.get<SpdrParentReport_OrderLegs::ssale_flag1>();
        o << ",\"leg_cum_fill_qty1\":" << m.get<SpdrParentReport_OrderLegs::leg_cum_fill_qty1>();
        o << ",\"leg_avg_fill_prc1\":" << m.get<SpdrParentReport_OrderLegs::leg_avg_fill_prc1>();
        o << ",\"leg_review_cum_fill_qty1\":" << m.get<SpdrParentReport_OrderLegs::leg_review_cum_fill_qty1>();
        o << ",\"leg_review_avg_fill_prc1\":" << m.get<SpdrParentReport_OrderLegs::leg_review_avg_fill_prc1>();
        o << ",\"sec_key2\":{" << m.get<SpdrParentReport_OrderLegs::sec_key2>() << "}";
        o << ",\"sec_type2\":" << (int64_t)m.get<SpdrParentReport_OrderLegs::sec_type2>();
        o << ",\"mult2\":" << m.get<SpdrParentReport_OrderLegs::mult2>();
        o << ",\"side2\":" << (int64_t)m.get<SpdrParentReport_OrderLegs::side2>();
        o << ",\"leg_id2\":" << m.get<SpdrParentReport_OrderLegs::leg_id2>();
        o << ",\"alt_leg_id2\":\"" << m.get<SpdrParentReport_OrderLegs::alt_leg_id2>() << "\"";
        o << ",\"review_leg_id2\":\"" << m.get<SpdrParentReport_OrderLegs::review_leg_id2>() << "\"";
        o << ",\"review_leg_alt_id2\":\"" << m.get<SpdrParentReport_OrderLegs::review_leg_alt_id2>() << "\"";
        o << ",\"pos_type2\":" << (int64_t)m.get<SpdrParentReport_OrderLegs::pos_type2>();
        o << ",\"ssale_flag2\":" << (int64_t)m.get<SpdrParentReport_OrderLegs::ssale_flag2>();
        o << ",\"leg_cum_fill_qty2\":" << m.get<SpdrParentReport_OrderLegs::leg_cum_fill_qty2>();
        o << ",\"leg_avg_fill_prc2\":" << m.get<SpdrParentReport_OrderLegs::leg_avg_fill_prc2>();
        o << ",\"leg_review_cum_fill_qty2\":" << m.get<SpdrParentReport_OrderLegs::leg_review_cum_fill_qty2>();
        o << ",\"leg_review_avg_fill_prc2\":" << m.get<SpdrParentReport_OrderLegs::leg_review_avg_fill_prc2>();
        o << ",\"sec_key3\":{" << m.get<SpdrParentReport_OrderLegs::sec_key3>() << "}";
        o << ",\"sec_type3\":" << (int64_t)m.get<SpdrParentReport_OrderLegs::sec_type3>();
        o << ",\"mult3\":" << m.get<SpdrParentReport_OrderLegs::mult3>();
        o << ",\"side3\":" << (int64_t)m.get<SpdrParentReport_OrderLegs::side3>();
        o << ",\"leg_id3\":" << m.get<SpdrParentReport_OrderLegs::leg_id3>();
        o << ",\"alt_leg_id3\":\"" << m.get<SpdrParentReport_OrderLegs::alt_leg_id3>() << "\"";
        o << ",\"review_leg_id3\":\"" << m.get<SpdrParentReport_OrderLegs::review_leg_id3>() << "\"";
        o << ",\"review_leg_alt_id3\":\"" << m.get<SpdrParentReport_OrderLegs::review_leg_alt_id3>() << "\"";
        o << ",\"pos_type3\":" << (int64_t)m.get<SpdrParentReport_OrderLegs::pos_type3>();
        o << ",\"ssale_flag3\":" << (int64_t)m.get<SpdrParentReport_OrderLegs::ssale_flag3>();
        o << ",\"leg_cum_fill_qty3\":" << m.get<SpdrParentReport_OrderLegs::leg_cum_fill_qty3>();
        o << ",\"leg_avg_fill_prc3\":" << m.get<SpdrParentReport_OrderLegs::leg_avg_fill_prc3>();
        o << ",\"leg_review_cum_fill_qty3\":" << m.get<SpdrParentReport_OrderLegs::leg_review_cum_fill_qty3>();
        o << ",\"leg_review_avg_fill_prc3\":" << m.get<SpdrParentReport_OrderLegs::leg_review_avg_fill_prc3>();
        o << ",\"sec_key4\":{" << m.get<SpdrParentReport_OrderLegs::sec_key4>() << "}";
        o << ",\"sec_type4\":" << (int64_t)m.get<SpdrParentReport_OrderLegs::sec_type4>();
        o << ",\"mult4\":" << m.get<SpdrParentReport_OrderLegs::mult4>();
        o << ",\"side4\":" << (int64_t)m.get<SpdrParentReport_OrderLegs::side4>();
        o << ",\"leg_id4\":" << m.get<SpdrParentReport_OrderLegs::leg_id4>();
        o << ",\"alt_leg_id4\":\"" << m.get<SpdrParentReport_OrderLegs::alt_leg_id4>() << "\"";
        o << ",\"review_leg_id4\":\"" << m.get<SpdrParentReport_OrderLegs::review_leg_id4>() << "\"";
        o << ",\"review_leg_alt_id4\":\"" << m.get<SpdrParentReport_OrderLegs::review_leg_alt_id4>() << "\"";
        o << ",\"pos_type4\":" << (int64_t)m.get<SpdrParentReport_OrderLegs::pos_type4>();
        o << ",\"ssale_flag4\":" << (int64_t)m.get<SpdrParentReport_OrderLegs::ssale_flag4>();
        o << ",\"leg_cum_fill_qty4\":" << m.get<SpdrParentReport_OrderLegs::leg_cum_fill_qty4>();
        o << ",\"leg_avg_fill_prc4\":" << m.get<SpdrParentReport_OrderLegs::leg_avg_fill_prc4>();
        o << ",\"leg_review_cum_fill_qty4\":" << m.get<SpdrParentReport_OrderLegs::leg_review_cum_fill_qty4>();
        o << ",\"leg_review_avg_fill_prc4\":" << m.get<SpdrParentReport_OrderLegs::leg_review_avg_fill_prc4>();
        o << ",\"sec_key5\":{" << m.get<SpdrParentReport_OrderLegs::sec_key5>() << "}";
        o << ",\"sec_type5\":" << (int64_t)m.get<SpdrParentReport_OrderLegs::sec_type5>();
        o << ",\"mult5\":" << m.get<SpdrParentReport_OrderLegs::mult5>();
        o << ",\"side5\":" << (int64_t)m.get<SpdrParentReport_OrderLegs::side5>();
        o << ",\"leg_id5\":" << m.get<SpdrParentReport_OrderLegs::leg_id5>();
        o << ",\"alt_leg_id5\":\"" << m.get<SpdrParentReport_OrderLegs::alt_leg_id5>() << "\"";
        o << ",\"review_leg_id5\":\"" << m.get<SpdrParentReport_OrderLegs::review_leg_id5>() << "\"";
        o << ",\"review_leg_alt_id5\":\"" << m.get<SpdrParentReport_OrderLegs::review_leg_alt_id5>() << "\"";
        o << ",\"pos_type5\":" << (int64_t)m.get<SpdrParentReport_OrderLegs::pos_type5>();
        o << ",\"ssale_flag5\":" << (int64_t)m.get<SpdrParentReport_OrderLegs::ssale_flag5>();
        o << ",\"leg_cum_fill_qty5\":" << m.get<SpdrParentReport_OrderLegs::leg_cum_fill_qty5>();
        o << ",\"leg_avg_fill_prc5\":" << m.get<SpdrParentReport_OrderLegs::leg_avg_fill_prc5>();
        o << ",\"leg_review_cum_fill_qty5\":" << m.get<SpdrParentReport_OrderLegs::leg_review_cum_fill_qty5>();
        o << ",\"leg_review_avg_fill_prc5\":" << m.get<SpdrParentReport_OrderLegs::leg_review_avg_fill_prc5>();
        o << ",\"sec_key6\":{" << m.get<SpdrParentReport_OrderLegs::sec_key6>() << "}";
        o << ",\"sec_type6\":" << (int64_t)m.get<SpdrParentReport_OrderLegs::sec_type6>();
        o << ",\"mult6\":" << m.get<SpdrParentReport_OrderLegs::mult6>();
        o << ",\"side6\":" << (int64_t)m.get<SpdrParentReport_OrderLegs::side6>();
        o << ",\"leg_id6\":" << m.get<SpdrParentReport_OrderLegs::leg_id6>();
        o << ",\"alt_leg_id6\":\"" << m.get<SpdrParentReport_OrderLegs::alt_leg_id6>() << "\"";
        o << ",\"review_leg_id6\":\"" << m.get<SpdrParentReport_OrderLegs::review_leg_id6>() << "\"";
        o << ",\"review_leg_alt_id6\":\"" << m.get<SpdrParentReport_OrderLegs::review_leg_alt_id6>() << "\"";
        o << ",\"pos_type6\":" << (int64_t)m.get<SpdrParentReport_OrderLegs::pos_type6>();
        o << ",\"ssale_flag6\":" << (int64_t)m.get<SpdrParentReport_OrderLegs::ssale_flag6>();
        o << ",\"leg_cum_fill_qty6\":" << m.get<SpdrParentReport_OrderLegs::leg_cum_fill_qty6>();
        o << ",\"leg_avg_fill_prc6\":" << m.get<SpdrParentReport_OrderLegs::leg_avg_fill_prc6>();
        o << ",\"leg_review_cum_fill_qty6\":" << m.get<SpdrParentReport_OrderLegs::leg_review_cum_fill_qty6>();
        o << ",\"leg_review_avg_fill_prc6\":" << m.get<SpdrParentReport_OrderLegs::leg_review_avg_fill_prc6>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrParentReport& m) {
        o << "\"_meta\":{" << m.get<SpdrParentReport::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrParentReport::pkey>() << "}";
        o << ",\"sys_realm\":" << (int64_t)m.get<SpdrParentReport::sys_realm>();
        o << ",\"sys_environment\":" << (int64_t)m.get<SpdrParentReport::sys_environment>();
        o << ",\"run_status\":" << (int64_t)m.get<SpdrParentReport::run_status>();
        o << ",\"report_number\":" << m.get<SpdrParentReport::report_number>();
        o << ",\"parent_shape\":" << (int64_t)m.get<SpdrParentReport::parent_shape>();
        o << ",\"record_version\":" << m.get<SpdrParentReport::record_version>();
        o << ",\"record_source\":" << (int64_t)m.get<SpdrParentReport::record_source>();
        o << ",\"parent_version\":" << m.get<SpdrParentReport::parent_version>();
        o << ",\"base_parent_number\":" << m.get<SpdrParentReport::base_parent_number>();
        o << ",\"prev_parent_number\":" << m.get<SpdrParentReport::prev_parent_number>();
        o << ",\"next_parent_number\":" << m.get<SpdrParentReport::next_parent_number>();
        o << ",\"spdr_action_type\":" << (int64_t)m.get<SpdrParentReport::spdr_action_type>();
        {
            std::time_t tt = m.get<SpdrParentReport::prev_parent_create_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"prev_parent_create_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"prev_parent_cum_fill_qty\":" << m.get<SpdrParentReport::prev_parent_cum_fill_qty>();
        o << ",\"client_seq_num_in\":" << m.get<SpdrParentReport::client_seq_num_in>();
        o << ",\"alt_order_id\":\"" << m.get<SpdrParentReport::alt_order_id>() << "\"";
        o << ",\"alt_prev_order_id\":\"" << m.get<SpdrParentReport::alt_prev_order_id>() << "\"";
        o << ",\"alt_cancel_id\":\"" << m.get<SpdrParentReport::alt_cancel_id>() << "\"";
        o << ",\"src_routing_code\":\"" << m.get<SpdrParentReport::src_routing_code>() << "\"";
        o << ",\"package_id\":" << m.get<SpdrParentReport::package_id>();
        o << ",\"prev_package_id\":" << m.get<SpdrParentReport::prev_package_id>();
        o << ",\"risk_group_id\":" << m.get<SpdrParentReport::risk_group_id>();
        o << ",\"trigger_group_id\":" << m.get<SpdrParentReport::trigger_group_id>();
        o << ",\"sec_key\":{" << m.get<SpdrParentReport::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<SpdrParentReport::sec_type>();
        o << ",\"accnt\":\"" << m.get<SpdrParentReport::accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<SpdrParentReport::client_firm>() << "\"";
        o << ",\"core_client_firm\":\"" << m.get<SpdrParentReport::core_client_firm>() << "\"";
        o << ",\"sponsor_client_firm\":\"" << m.get<SpdrParentReport::sponsor_client_firm>() << "\"";
        o << ",\"client_accnt\":\"" << m.get<SpdrParentReport::client_accnt>() << "\"";
        o << ",\"user_name\":\"" << m.get<SpdrParentReport::user_name>() << "\"";
        o << ",\"user_source\":" << (int64_t)m.get<SpdrParentReport::user_source>();
        o << ",\"alt_accnt\":\"" << m.get<SpdrParentReport::alt_accnt>() << "\"";
        o << ",\"alt_user_name\":\"" << m.get<SpdrParentReport::alt_user_name>() << "\"";
        o << ",\"exec_brkr_code\":\"" << m.get<SpdrParentReport::exec_brkr_code>() << "\"";
        o << ",\"extern_ex_dest\":\"" << m.get<SpdrParentReport::extern_ex_dest>() << "\"";
        o << ",\"extern_params\":\"" << m.get<SpdrParentReport::extern_params>() << "\"";
        o << ",\"spdr_source\":" << (int64_t)m.get<SpdrParentReport::spdr_source>();
        o << ",\"grouping_code\":" << m.get<SpdrParentReport::grouping_code>();
        o << ",\"engine_name\":\"" << m.get<SpdrParentReport::engine_name>() << "\"";
        {
            std::time_t tt = m.get<SpdrParentReport::order_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"order_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"order_side\":" << (int64_t)m.get<SpdrParentReport::order_side>();
        o << ",\"price_type\":" << (int64_t)m.get<SpdrParentReport::price_type>();
        o << ",\"order_size\":" << m.get<SpdrParentReport::order_size>();
        o << ",\"order_active_size\":" << m.get<SpdrParentReport::order_active_size>();
        o << ",\"spdr_stage_type\":" << (int64_t)m.get<SpdrParentReport::spdr_stage_type>();
        o << ",\"stage_review\":" << (int64_t)m.get<SpdrParentReport::stage_review>();
        o << ",\"parent_order_handling\":" << (int64_t)m.get<SpdrParentReport::parent_order_handling>();
        o << ",\"parent_balance_handling\":" << (int64_t)m.get<SpdrParentReport::parent_balance_handling>();
        o << ",\"limit_price\":" << m.get<SpdrParentReport::limit_price>();
        o << ",\"order_limit_type\":" << (int64_t)m.get<SpdrParentReport::order_limit_type>();
        o << ",\"take_limit_class\":" << (int64_t)m.get<SpdrParentReport::take_limit_class>();
        o << ",\"make_limit_class\":" << (int64_t)m.get<SpdrParentReport::make_limit_class>();
        o << ",\"start_type\":" << (int64_t)m.get<SpdrParentReport::start_type>();
        o << ",\"market_session\":" << (int64_t)m.get<SpdrParentReport::market_session>();
        o << ",\"active_duration\":" << m.get<SpdrParentReport::active_duration>();
        {
            std::time_t tt = m.get<SpdrParentReport::start_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"start_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<SpdrParentReport::good_till_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"good_till_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"auto_hedge\":" << (int64_t)m.get<SpdrParentReport::auto_hedge>();
        o << ",\"hedge_instrument\":" << (int64_t)m.get<SpdrParentReport::hedge_instrument>();
        o << ",\"hedge_sec_key\":{" << m.get<SpdrParentReport::hedge_sec_key>() << "}";
        o << ",\"hedge_sec_type\":" << (int64_t)m.get<SpdrParentReport::hedge_sec_type>();
        o << ",\"hedge_beta_ratio\":" << m.get<SpdrParentReport::hedge_beta_ratio>();
        o << ",\"hedge_scope\":" << (int64_t)m.get<SpdrParentReport::hedge_scope>();
        o << ",\"hedge_session\":" << (int64_t)m.get<SpdrParentReport::hedge_session>();
        {
            std::time_t tt = m.get<SpdrParentReport::order_create_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"order_create_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"order_create_latency\":" << m.get<SpdrParentReport::order_create_latency>();
        o << ",\"cancel_reason\":" << (int64_t)m.get<SpdrParentReport::cancel_reason>();
        {
            std::time_t tt = m.get<SpdrParentReport::order_cancel_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"order_cancel_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"order_cancel_latency\":" << m.get<SpdrParentReport::order_cancel_latency>();
        {
            std::time_t tt = m.get<SpdrParentReport::order_working_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"order_working_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<SpdrParentReport::order_closed_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"order_closed_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"order_closed_text\":\"" << m.get<SpdrParentReport::order_closed_text>() << "\"";
        o << ",\"max_exposure_size\":" << m.get<SpdrParentReport::max_exposure_size>();
        o << ",\"public_size\":" << (int64_t)m.get<SpdrParentReport::public_size>();
        o << ",\"can_overlap_cxl_repl\":" << (int64_t)m.get<SpdrParentReport::can_overlap_cxl_repl>();
        o << ",\"progress_expose_time\":" << m.get<SpdrParentReport::progress_expose_time>();
        o << ",\"progress_rule\":" << (int64_t)m.get<SpdrParentReport::progress_rule>();
        o << ",\"progress_slice_cnt\":" << m.get<SpdrParentReport::progress_slice_cnt>();
        o << ",\"vwap_participation\":" << m.get<SpdrParentReport::vwap_participation>();
        o << ",\"auction_responder\":" << (int64_t)m.get<SpdrParentReport::auction_responder>();
        o << ",\"max_make_exch_fee\":" << m.get<SpdrParentReport::max_make_exch_fee>();
        o << ",\"max_take_exch_fee\":" << m.get<SpdrParentReport::max_take_exch_fee>();
        o << ",\"inc_take_exch_fee\":" << (int64_t)m.get<SpdrParentReport::inc_take_exch_fee>();
        o << ",\"inc_make_exch_fee\":" << (int64_t)m.get<SpdrParentReport::inc_make_exch_fee>();
        o << ",\"make_exch_rule\":" << (int64_t)m.get<SpdrParentReport::make_exch_rule>();
        o << ",\"cxl_uprc_range\":" << (int64_t)m.get<SpdrParentReport::cxl_uprc_range>();
        o << ",\"min_ubid\":" << m.get<SpdrParentReport::min_ubid>();
        o << ",\"max_uask\":" << m.get<SpdrParentReport::max_uask>();
        o << ",\"min_option_px\":" << m.get<SpdrParentReport::min_option_px>();
        o << ",\"max_child_orders\":" << m.get<SpdrParentReport::max_child_orders>();
        o << ",\"order_duration\":" << m.get<SpdrParentReport::order_duration>();
        o << ",\"take_reach_rule\":" << (int64_t)m.get<SpdrParentReport::take_reach_rule>();
        o << ",\"order_prc_limit\":" << m.get<SpdrParentReport::order_prc_limit>();
        o << ",\"order_ref_uprc\":" << m.get<SpdrParentReport::order_ref_uprc>();
        o << ",\"order_ref_delta\":" << m.get<SpdrParentReport::order_ref_delta>();
        o << ",\"order_ref_gamma\":" << m.get<SpdrParentReport::order_ref_gamma>();
        o << ",\"order_vol_limit\":" << m.get<SpdrParentReport::order_vol_limit>();
        o << ",\"rate_override\":" << m.get<SpdrParentReport::rate_override>();
        o << ",\"sdiv_override\":" << m.get<SpdrParentReport::sdiv_override>();
        o << ",\"ddiv_override\":\"" << m.get<SpdrParentReport::ddiv_override>() << "\"";
        o << ",\"override_code\":" << (int64_t)m.get<SpdrParentReport::override_code>();
        o << ",\"order_prc_offset\":" << m.get<SpdrParentReport::order_prc_offset>();
        o << ",\"take_alpha_type\":" << (int64_t)m.get<SpdrParentReport::take_alpha_type>();
        o << ",\"make_alpha_type\":" << (int64_t)m.get<SpdrParentReport::make_alpha_type>();
        o << ",\"take_alpha_factor\":" << m.get<SpdrParentReport::take_alpha_factor>();
        o << ",\"make_alpha_factor\":" << m.get<SpdrParentReport::make_alpha_factor>();
        o << ",\"take_probability\":" << m.get<SpdrParentReport::take_probability>();
        o << ",\"make_probability\":" << m.get<SpdrParentReport::make_probability>();
        o << ",\"take_surf_prc_offset\":" << m.get<SpdrParentReport::take_surf_prc_offset>();
        o << ",\"take_surf_vol_offset\":" << m.get<SpdrParentReport::take_surf_vol_offset>();
        o << ",\"take_surf_width_offset\":" << m.get<SpdrParentReport::take_surf_width_offset>();
        o << ",\"make_surf_prc_offset\":" << m.get<SpdrParentReport::make_surf_prc_offset>();
        o << ",\"make_surf_vol_offset\":" << m.get<SpdrParentReport::make_surf_vol_offset>();
        o << ",\"make_surf_width_offset\":" << m.get<SpdrParentReport::make_surf_width_offset>();
        o << ",\"order_ref_event_mult\":" << m.get<SpdrParentReport::order_ref_event_mult>();
        {
            std::time_t tt = m.get<SpdrParentReport::order_ref_event_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"order_ref_event_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"nbbo_cap\":" << (int64_t)m.get<SpdrParentReport::nbbo_cap>();
        o << ",\"extern_hedge_ex_dest\":\"" << m.get<SpdrParentReport::extern_hedge_ex_dest>() << "\"";
        o << ",\"extern_hedge_params\":\"" << m.get<SpdrParentReport::extern_hedge_params>() << "\"";
        o << ",\"spdr_order_status\":" << (int64_t)m.get<SpdrParentReport::spdr_order_status>();
        o << ",\"spdr_close_reason\":" << (int64_t)m.get<SpdrParentReport::spdr_close_reason>();
        o << ",\"spdr_reject_reason\":" << (int64_t)m.get<SpdrParentReport::spdr_reject_reason>();
        o << ",\"spdr_reject_level\":" << (int64_t)m.get<SpdrParentReport::spdr_reject_level>();
        o << ",\"firm_type\":" << (int64_t)m.get<SpdrParentReport::firm_type>();
        o << ",\"order_capacity\":" << (int64_t)m.get<SpdrParentReport::order_capacity>();
        o << ",\"ssale_flag\":" << (int64_t)m.get<SpdrParentReport::ssale_flag>();
        o << ",\"position_type\":" << (int64_t)m.get<SpdrParentReport::position_type>();
        o << ",\"arrive_firm_pos\":" << m.get<SpdrParentReport::arrive_firm_pos>();
        o << ",\"arrive_ssale_flag\":" << (int64_t)m.get<SpdrParentReport::arrive_ssale_flag>();
        o << ",\"no_cross_group\":\"" << m.get<SpdrParentReport::no_cross_group>() << "\"";
        o << ",\"exch_trader_id\":\"" << m.get<SpdrParentReport::exch_trader_id>() << "\"";
        o << ",\"large_trader_id\":\"" << m.get<SpdrParentReport::large_trader_id>() << "\"";
        o << ",\"trading_location\":\"" << m.get<SpdrParentReport::trading_location>() << "\"";
        o << ",\"firm_position\":" << m.get<SpdrParentReport::firm_position>();
        o << ",\"open_sell_sh\":" << m.get<SpdrParentReport::open_sell_sh>();
        o << ",\"locate_quan\":" << m.get<SpdrParentReport::locate_quan>();
        o << ",\"locate_firm\":\"" << m.get<SpdrParentReport::locate_firm>() << "\"";
        o << ",\"locate_pool\":\"" << m.get<SpdrParentReport::locate_pool>() << "\"";
        o << ",\"clearing_firm\":\"" << m.get<SpdrParentReport::clearing_firm>() << "\"";
        o << ",\"clearing_accnt\":\"" << m.get<SpdrParentReport::clearing_accnt>() << "\"";
        o << ",\"cat_reportable\":" << (int64_t)m.get<SpdrParentReport::cat_reportable>();
        o << ",\"cat_src_brkr_imid\":\"" << m.get<SpdrParentReport::cat_src_brkr_imid>() << "\"";
        o << ",\"cat_src_accnt_type\":" << (int64_t)m.get<SpdrParentReport::cat_src_accnt_type>();
        o << ",\"cat_src_firm_type\":" << (int64_t)m.get<SpdrParentReport::cat_src_firm_type>();
        o << ",\"cat_dest_dept_type\":" << (int64_t)m.get<SpdrParentReport::cat_dest_dept_type>();
        o << ",\"cat_accnt\":\"" << m.get<SpdrParentReport::cat_accnt>() << "\"";
        o << ",\"cat_brkr_accnt\":\"" << m.get<SpdrParentReport::cat_brkr_accnt>() << "\"";
        o << ",\"cum_fill_quantity\":" << m.get<SpdrParentReport::cum_fill_quantity>();
        o << ",\"avg_fill_price\":" << m.get<SpdrParentReport::avg_fill_price>();
        o << ",\"avg_fill_uprice\":" << m.get<SpdrParentReport::avg_fill_uprice>();
        o << ",\"leaves_qty\":" << m.get<SpdrParentReport::leaves_qty>();
        o << ",\"last_fill_number\":" << m.get<SpdrParentReport::last_fill_number>();
        {
            std::time_t tt = m.get<SpdrParentReport::last_fill_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"last_fill_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"review_cl_ord_id\":\"" << m.get<SpdrParentReport::review_cl_ord_id>() << "\"";
        o << ",\"review_orig_cl_ord_id\":\"" << m.get<SpdrParentReport::review_orig_cl_ord_id>() << "\"";
        o << ",\"review_cancel_cl_ord_id\":\"" << m.get<SpdrParentReport::review_cancel_cl_ord_id>() << "\"";
        o << ",\"review_order_size\":" << m.get<SpdrParentReport::review_order_size>();
        o << ",\"review_order_active_size\":" << m.get<SpdrParentReport::review_order_active_size>();
        o << ",\"review_cum_fill_quantity\":" << m.get<SpdrParentReport::review_cum_fill_quantity>();
        o << ",\"review_avg_fill_price\":" << m.get<SpdrParentReport::review_avg_fill_price>();
        o << ",\"review_leaves_qty\":" << m.get<SpdrParentReport::review_leaves_qty>();
        o << ",\"review_order_status\":" << (int64_t)m.get<SpdrParentReport::review_order_status>();
        o << ",\"max_progress\":" << (int64_t)m.get<SpdrParentReport::max_progress>();
        o << ",\"max_progress_detail\":\"" << m.get<SpdrParentReport::max_progress_detail>() << "\"";
        {
            std::time_t tt = m.get<SpdrParentReport::max_progress_time>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"max_progress_time\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"num_child_orders\":" << m.get<SpdrParentReport::num_child_orders>();
        o << ",\"nbbo_bid\":" << m.get<SpdrParentReport::nbbo_bid>();
        o << ",\"nbbo_ask\":" << m.get<SpdrParentReport::nbbo_ask>();
        o << ",\"nbbo_bid_sz\":" << m.get<SpdrParentReport::nbbo_bid_sz>();
        o << ",\"nbbo_ask_sz\":" << m.get<SpdrParentReport::nbbo_ask_sz>();
        o << ",\"mkt_stance\":" << (int64_t)m.get<SpdrParentReport::mkt_stance>();
        o << ",\"parent_strategy\":\"" << m.get<SpdrParentReport::parent_strategy>() << "\"";
        o << ",\"ticker\":{" << m.get<SpdrParentReport::ticker>() << "}";
        o << ",\"tick_value\":" << m.get<SpdrParentReport::tick_value>();
        o << ",\"point_value\":" << m.get<SpdrParentReport::point_value>();
        o << ",\"point_currency\":" << (int64_t)m.get<SpdrParentReport::point_currency>();
        o << ",\"notional_mult\":" << m.get<SpdrParentReport::notional_mult>();
        o << ",\"security_id\":\"" << m.get<SpdrParentReport::security_id>() << "\"";
        o << ",\"security_desc\":\"" << m.get<SpdrParentReport::security_desc>() << "\"";
        o << ",\"product_group\":\"" << m.get<SpdrParentReport::product_group>() << "\"";
        o << ",\"product_class\":" << (int64_t)m.get<SpdrParentReport::product_class>();
        o << ",\"und_key\":{" << m.get<SpdrParentReport::und_key>() << "}";
        o << ",\"und_type\":" << (int64_t)m.get<SpdrParentReport::und_type>();
        o << ",\"u_sec_desc\":\"" << m.get<SpdrParentReport::u_sec_desc>() << "\"";
        o << ",\"price_format\":" << (int64_t)m.get<SpdrParentReport::price_format>();
        o << ",\"user_data1\":\"" << m.get<SpdrParentReport::user_data1>() << "\"";
        o << ",\"user_data2\":\"" << m.get<SpdrParentReport::user_data2>() << "\"";
        {
            std::time_t tt = m.get<SpdrParentReport::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"include_srnetwork\":" << (int64_t)m.get<SpdrParentReport::include_srnetwork>();
        o << ",\"alt_cross_id__v7\":\"" << m.get<SpdrParentReport::alt_cross_id__v7>() << "\"";
        o << ",\"exec_broker_accnt__v7\":\"" << m.get<SpdrParentReport::exec_broker_accnt__v7>() << "\"";
        o << ",\"exec_broker_cl_firm__v7\":\"" << m.get<SpdrParentReport::exec_broker_cl_firm__v7>() << "\"";
        o << ",\"exec_username__v7\":\"" << m.get<SpdrParentReport::exec_username__v7>() << "\"";
        o << ",\"data_center__v7\":" << (int64_t)m.get<SpdrParentReport::data_center__v7>();
        o << ",\"time_in_force__v7\":" << (int64_t)m.get<SpdrParentReport::time_in_force__v7>();
        o << ",\"hedge_tif__v7\":" << (int64_t)m.get<SpdrParentReport::hedge_tif__v7>();
        o << ",\"locate_source__v7\":\"" << m.get<SpdrParentReport::locate_source__v7>() << "\"";
        o << ",\"clearing_flip_type__v7\":" << (int64_t)m.get<SpdrParentReport::clearing_flip_type__v7>();
        o << ",\"clearing_flip_firm__v7\":\"" << m.get<SpdrParentReport::clearing_flip_firm__v7>() << "\"";
        o << ",\"clearing_flip_accnt__v7\":\"" << m.get<SpdrParentReport::clearing_flip_accnt__v7>() << "\"";
        o << ",\"review_routing_code__v7\":\"" << m.get<SpdrParentReport::review_routing_code__v7>() << "\"";
        o << ",\"progress_timeout__v7\":" << m.get<SpdrParentReport::progress_timeout__v7>();
        o << ",\"directed_counter_party\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<SpdrParentReport::directed_counter_party>(); ++i) {
                o << delim << m.get<SpdrParentReport::directed_counter_party>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"face_legs__v7\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<SpdrParentReport::face_legs__v7>(); ++i) {
                o << delim << m.get<SpdrParentReport::face_legs__v7>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"face_side__v7\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<SpdrParentReport::face_side__v7>(); ++i) {
                o << delim << m.get<SpdrParentReport::face_side__v7>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"order_legs\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<SpdrParentReport::order_legs>(); ++i) {
                o << delim << m.get<SpdrParentReport::order_legs>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}