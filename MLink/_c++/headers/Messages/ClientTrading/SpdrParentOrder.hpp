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

    #ifndef _sys_environment__GUARD__
    #define _sys_environment__GUARD__
    DECL_STRONG_TYPE(sys_environment, spiderrock::protobuf::api::SysEnvironment);
    #endif//_sys_environment__GUARD__

    #ifndef _run_status__GUARD__
    #define _run_status__GUARD__
    DECL_STRONG_TYPE(run_status, spiderrock::protobuf::api::RunStatus);
    #endif//_run_status__GUARD__

    #ifndef _spdr_action_type__GUARD__
    #define _spdr_action_type__GUARD__
    DECL_STRONG_TYPE(spdr_action_type, spiderrock::protobuf::api::SpdrActionType);
    #endif//_spdr_action_type__GUARD__

    #ifndef _parent_shape__GUARD__
    #define _parent_shape__GUARD__
    DECL_STRONG_TYPE(parent_shape, spiderrock::protobuf::api::SpdrOrderShape);
    #endif//_parent_shape__GUARD__

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

    #ifndef _alt_auto_hedge_id__GUARD__
    #define _alt_auto_hedge_id__GUARD__
    DECL_STRONG_TYPE(alt_auto_hedge_id, string);
    #endif//_alt_auto_hedge_id__GUARD__

    #ifndef _alt_accnt__GUARD__
    #define _alt_accnt__GUARD__
    DECL_STRONG_TYPE(alt_accnt, string);
    #endif//_alt_accnt__GUARD__

    #ifndef _alt_user_name__GUARD__
    #define _alt_user_name__GUARD__
    DECL_STRONG_TYPE(alt_user_name, string);
    #endif//_alt_user_name__GUARD__

    #ifndef _src_routing_code__GUARD__
    #define _src_routing_code__GUARD__
    DECL_STRONG_TYPE(src_routing_code, string);
    #endif//_src_routing_code__GUARD__

    #ifndef _package_id__GUARD__
    #define _package_id__GUARD__
    DECL_STRONG_TYPE(package_id, int64);
    #endif//_package_id__GUARD__

    #ifndef _sec_key__OptionKey__GUARD__
    #define _sec_key__OptionKey__GUARD__
    DECL_STRONG_TYPE(sec_key__OptionKey, OptionKey);
    #endif//_sec_key__OptionKey__GUARD__

    #ifndef _sec_type__SpdrKeyType__GUARD__
    #define _sec_type__SpdrKeyType__GUARD__
    DECL_STRONG_TYPE(sec_type__SpdrKeyType, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__SpdrKeyType__GUARD__

    #ifndef _security_desc__GUARD__
    #define _security_desc__GUARD__
    DECL_STRONG_TYPE(security_desc, string);
    #endif//_security_desc__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _spdr_source__GUARD__
    #define _spdr_source__GUARD__
    DECL_STRONG_TYPE(spdr_source, spiderrock::protobuf::api::SpdrSource);
    #endif//_spdr_source__GUARD__

    #ifndef _grouping_code__GUARD__
    #define _grouping_code__GUARD__
    DECL_STRONG_TYPE(grouping_code, int64);
    #endif//_grouping_code__GUARD__

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

    #ifndef _strategy__GUARD__
    #define _strategy__GUARD__
    DECL_STRONG_TYPE(strategy, string);
    #endif//_strategy__GUARD__

    #ifndef _user_name__GUARD__
    #define _user_name__GUARD__
    DECL_STRONG_TYPE(user_name, string);
    #endif//_user_name__GUARD__

    #ifndef _user_source__GUARD__
    #define _user_source__GUARD__
    DECL_STRONG_TYPE(user_source, spiderrock::protobuf::api::SpdrSource);
    #endif//_user_source__GUARD__

    #ifndef _order_dttm__GUARD__
    #define _order_dttm__GUARD__
    DECL_STRONG_TYPE(order_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_order_dttm__GUARD__

    #ifndef _order_side__GUARD__
    #define _order_side__GUARD__
    DECL_STRONG_TYPE(order_side, spiderrock::protobuf::api::BuySell);
    #endif//_order_side__GUARD__

    #ifndef _order_size__GUARD__
    #define _order_size__GUARD__
    DECL_STRONG_TYPE(order_size, int32);
    #endif//_order_size__GUARD__

    #ifndef _order_active_size__GUARD__
    #define _order_active_size__GUARD__
    DECL_STRONG_TYPE(order_active_size, int32);
    #endif//_order_active_size__GUARD__

    #ifndef _cur_cum_fill_quantity__GUARD__
    #define _cur_cum_fill_quantity__GUARD__
    DECL_STRONG_TYPE(cur_cum_fill_quantity, int32);
    #endif//_cur_cum_fill_quantity__GUARD__

    #ifndef _add_cum_fill_quantity__GUARD__
    #define _add_cum_fill_quantity__GUARD__
    DECL_STRONG_TYPE(add_cum_fill_quantity, spiderrock::protobuf::api::YesNo);
    #endif//_add_cum_fill_quantity__GUARD__

    #ifndef _max_exposure_size__GUARD__
    #define _max_exposure_size__GUARD__
    DECL_STRONG_TYPE(max_exposure_size, int32);
    #endif//_max_exposure_size__GUARD__

    #ifndef _num_make_exchanges__GUARD__
    #define _num_make_exchanges__GUARD__
    DECL_STRONG_TYPE(num_make_exchanges, int32);
    #endif//_num_make_exchanges__GUARD__

    #ifndef _public_size__GUARD__
    #define _public_size__GUARD__
    DECL_STRONG_TYPE(public_size, spiderrock::protobuf::api::PublicSizeHandling);
    #endif//_public_size__GUARD__

    #ifndef _can_overlap_cxl_repl__GUARD__
    #define _can_overlap_cxl_repl__GUARD__
    DECL_STRONG_TYPE(can_overlap_cxl_repl, spiderrock::protobuf::api::YesNo);
    #endif//_can_overlap_cxl_repl__GUARD__

    #ifndef _progress_rule__GUARD__
    #define _progress_rule__GUARD__
    DECL_STRONG_TYPE(progress_rule, spiderrock::protobuf::api::ProgressRule);
    #endif//_progress_rule__GUARD__

    #ifndef _block_visibility__GUARD__
    #define _block_visibility__GUARD__
    DECL_STRONG_TYPE(block_visibility, spiderrock::protobuf::api::BlockVisibility);
    #endif//_block_visibility__GUARD__

    #ifndef _progress_slice_cnt__GUARD__
    #define _progress_slice_cnt__GUARD__
    DECL_STRONG_TYPE(progress_slice_cnt, int32);
    #endif//_progress_slice_cnt__GUARD__

    #ifndef _progress_expose_time__GUARD__
    #define _progress_expose_time__GUARD__
    DECL_STRONG_TYPE(progress_expose_time, int32);
    #endif//_progress_expose_time__GUARD__

    #ifndef _vwap_participation__GUARD__
    #define _vwap_participation__GUARD__
    DECL_STRONG_TYPE(vwap_participation, float);
    #endif//_vwap_participation__GUARD__

    #ifndef _min_mkt_on_close_pct__GUARD__
    #define _min_mkt_on_close_pct__GUARD__
    DECL_STRONG_TYPE(min_mkt_on_close_pct, int32);
    #endif//_min_mkt_on_close_pct__GUARD__

    #ifndef _trigger_type__GUARD__
    #define _trigger_type__GUARD__
    DECL_STRONG_TYPE(trigger_type, spiderrock::protobuf::api::TriggerType);
    #endif//_trigger_type__GUARD__

    #ifndef _trigger_level__GUARD__
    #define _trigger_level__GUARD__
    DECL_STRONG_TYPE(trigger_level, float);
    #endif//_trigger_level__GUARD__

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

    #ifndef _min_max_type__GUARD__
    #define _min_max_type__GUARD__
    DECL_STRONG_TYPE(min_max_type, spiderrock::protobuf::api::MinMaxType);
    #endif//_min_max_type__GUARD__

    #ifndef _min_option_px__GUARD__
    #define _min_option_px__GUARD__
    DECL_STRONG_TYPE(min_option_px, float);
    #endif//_min_option_px__GUARD__

    #ifndef _max_child_orders__GUARD__
    #define _max_child_orders__GUARD__
    DECL_STRONG_TYPE(max_child_orders, int32);
    #endif//_max_child_orders__GUARD__

    #ifndef _exch_mask__GUARD__
    #define _exch_mask__GUARD__
    DECL_STRONG_TYPE(exch_mask, uint32);
    #endif//_exch_mask__GUARD__

    #ifndef _spdr_stage_type__GUARD__
    #define _spdr_stage_type__GUARD__
    DECL_STRONG_TYPE(spdr_stage_type, spiderrock::protobuf::api::SpdrStageType);
    #endif//_spdr_stage_type__GUARD__

    #ifndef _market_session__GUARD__
    #define _market_session__GUARD__
    DECL_STRONG_TYPE(market_session, spiderrock::protobuf::api::MarketSession);
    #endif//_market_session__GUARD__

    #ifndef _start_dttm__GUARD__
    #define _start_dttm__GUARD__
    DECL_STRONG_TYPE(start_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_start_dttm__GUARD__

    #ifndef _order_duration__GUARD__
    #define _order_duration__GUARD__
    DECL_STRONG_TYPE(order_duration, int32);
    #endif//_order_duration__GUARD__

    #ifndef _active_duration__GUARD__
    #define _active_duration__GUARD__
    DECL_STRONG_TYPE(active_duration, int32);
    #endif//_active_duration__GUARD__

    #ifndef _good_till_dttm__GUARD__
    #define _good_till_dttm__GUARD__
    DECL_STRONG_TYPE(good_till_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_good_till_dttm__GUARD__

    #ifndef _start_type__GUARD__
    #define _start_type__GUARD__
    DECL_STRONG_TYPE(start_type, spiderrock::protobuf::api::StartType);
    #endif//_start_type__GUARD__

    #ifndef _trigger_group_id__GUARD__
    #define _trigger_group_id__GUARD__
    DECL_STRONG_TYPE(trigger_group_id, int64);
    #endif//_trigger_group_id__GUARD__

    #ifndef _trigger_timestamp__GUARD__
    #define _trigger_timestamp__GUARD__
    DECL_STRONG_TYPE(trigger_timestamp, int64);
    #endif//_trigger_timestamp__GUARD__

    #ifndef _parent_order_handling__GUARD__
    #define _parent_order_handling__GUARD__
    DECL_STRONG_TYPE(parent_order_handling, spiderrock::protobuf::api::ParentOrderHandling);
    #endif//_parent_order_handling__GUARD__

    #ifndef _parent_balance_handling__GUARD__
    #define _parent_balance_handling__GUARD__
    DECL_STRONG_TYPE(parent_balance_handling, spiderrock::protobuf::api::ParentBalanceHandling);
    #endif//_parent_balance_handling__GUARD__

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

    #ifndef _state_model__GUARD__
    #define _state_model__GUARD__
    DECL_STRONG_TYPE(state_model, spiderrock::protobuf::api::StateModel);
    #endif//_state_model__GUARD__

    #ifndef _u_state_model__GUARD__
    #define _u_state_model__GUARD__
    DECL_STRONG_TYPE(u_state_model, spiderrock::protobuf::api::StateModel);
    #endif//_u_state_model__GUARD__

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

    #ifndef _extern_hedge_ex_dest__GUARD__
    #define _extern_hedge_ex_dest__GUARD__
    DECL_STRONG_TYPE(extern_hedge_ex_dest, string);
    #endif//_extern_hedge_ex_dest__GUARD__

    #ifndef _extern_hedge_params__GUARD__
    #define _extern_hedge_params__GUARD__
    DECL_STRONG_TYPE(extern_hedge_params, string);
    #endif//_extern_hedge_params__GUARD__

    #ifndef _firm_type__GUARD__
    #define _firm_type__GUARD__
    DECL_STRONG_TYPE(firm_type, spiderrock::protobuf::api::FirmType);
    #endif//_firm_type__GUARD__

    #ifndef _order_capacity__GUARD__
    #define _order_capacity__GUARD__
    DECL_STRONG_TYPE(order_capacity, spiderrock::protobuf::api::OrderCapacity);
    #endif//_order_capacity__GUARD__

    #ifndef _position_type__PositionType__GUARD__
    #define _position_type__PositionType__GUARD__
    DECL_STRONG_TYPE(position_type__PositionType, spiderrock::protobuf::api::PositionType);
    #endif//_position_type__PositionType__GUARD__

    #ifndef _ssale_flag__GUARD__
    #define _ssale_flag__GUARD__
    DECL_STRONG_TYPE(ssale_flag, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag__GUARD__

    #ifndef _locate_firm__GUARD__
    #define _locate_firm__GUARD__
    DECL_STRONG_TYPE(locate_firm, string);
    #endif//_locate_firm__GUARD__

    #ifndef _locate_pool__GUARD__
    #define _locate_pool__GUARD__
    DECL_STRONG_TYPE(locate_pool, string);
    #endif//_locate_pool__GUARD__

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

    #ifndef _lead_side__GUARD__
    #define _lead_side__GUARD__
    DECL_STRONG_TYPE(lead_side, spiderrock::protobuf::api::BuySell);
    #endif//_lead_side__GUARD__

    #ifndef _max_completion_slippage__GUARD__
    #define _max_completion_slippage__GUARD__
    DECL_STRONG_TYPE(max_completion_slippage, double);
    #endif//_max_completion_slippage__GUARD__

    #ifndef _order_ref_premium__GUARD__
    #define _order_ref_premium__GUARD__
    DECL_STRONG_TYPE(order_ref_premium, float);
    #endif//_order_ref_premium__GUARD__

    #ifndef _notice_number__GUARD__
    #define _notice_number__GUARD__
    DECL_STRONG_TYPE(notice_number, int64);
    #endif//_notice_number__GUARD__

    #ifndef _theo_vol__GUARD__
    #define _theo_vol__GUARD__
    DECL_STRONG_TYPE(theo_vol, float);
    #endif//_theo_vol__GUARD__

    #ifndef _cl_arrive_mark__GUARD__
    #define _cl_arrive_mark__GUARD__
    DECL_STRONG_TYPE(cl_arrive_mark, float);
    #endif//_cl_arrive_mark__GUARD__

    #ifndef _risk_group_id__GUARD__
    #define _risk_group_id__GUARD__
    DECL_STRONG_TYPE(risk_group_id, int64);
    #endif//_risk_group_id__GUARD__

    #ifndef _req_aux_risk_group_ctrl__GUARD__
    #define _req_aux_risk_group_ctrl__GUARD__
    DECL_STRONG_TYPE(req_aux_risk_group_ctrl, spiderrock::protobuf::api::YesNo);
    #endif//_req_aux_risk_group_ctrl__GUARD__

    #ifndef _ref_rmetric1_src__GUARD__
    #define _ref_rmetric1_src__GUARD__
    DECL_STRONG_TYPE(ref_rmetric1_src, spiderrock::protobuf::api::RMetricSource);
    #endif//_ref_rmetric1_src__GUARD__

    #ifndef _ref_rmetric2_src__GUARD__
    #define _ref_rmetric2_src__GUARD__
    DECL_STRONG_TYPE(ref_rmetric2_src, spiderrock::protobuf::api::RMetricSource);
    #endif//_ref_rmetric2_src__GUARD__

    #ifndef _ref_rmetric3_src__GUARD__
    #define _ref_rmetric3_src__GUARD__
    DECL_STRONG_TYPE(ref_rmetric3_src, spiderrock::protobuf::api::RMetricSource);
    #endif//_ref_rmetric3_src__GUARD__

    #ifndef _ref_rmetric4_src__GUARD__
    #define _ref_rmetric4_src__GUARD__
    DECL_STRONG_TYPE(ref_rmetric4_src, spiderrock::protobuf::api::RMetricSource);
    #endif//_ref_rmetric4_src__GUARD__

    #ifndef _ref_rmetric5_src__GUARD__
    #define _ref_rmetric5_src__GUARD__
    DECL_STRONG_TYPE(ref_rmetric5_src, spiderrock::protobuf::api::RMetricSource);
    #endif//_ref_rmetric5_src__GUARD__

    #ifndef _ref_rmetric6_src__GUARD__
    #define _ref_rmetric6_src__GUARD__
    DECL_STRONG_TYPE(ref_rmetric6_src, spiderrock::protobuf::api::RMetricSource);
    #endif//_ref_rmetric6_src__GUARD__

    #ifndef _ref_rmetric7_src__GUARD__
    #define _ref_rmetric7_src__GUARD__
    DECL_STRONG_TYPE(ref_rmetric7_src, spiderrock::protobuf::api::RMetricSource);
    #endif//_ref_rmetric7_src__GUARD__

    #ifndef _order_ref_rmetric1__GUARD__
    #define _order_ref_rmetric1__GUARD__
    DECL_STRONG_TYPE(order_ref_rmetric1, float);
    #endif//_order_ref_rmetric1__GUARD__

    #ifndef _order_ref_rmetric2__GUARD__
    #define _order_ref_rmetric2__GUARD__
    DECL_STRONG_TYPE(order_ref_rmetric2, float);
    #endif//_order_ref_rmetric2__GUARD__

    #ifndef _order_ref_rmetric3__GUARD__
    #define _order_ref_rmetric3__GUARD__
    DECL_STRONG_TYPE(order_ref_rmetric3, float);
    #endif//_order_ref_rmetric3__GUARD__

    #ifndef _order_ref_rmetric4__GUARD__
    #define _order_ref_rmetric4__GUARD__
    DECL_STRONG_TYPE(order_ref_rmetric4, float);
    #endif//_order_ref_rmetric4__GUARD__

    #ifndef _order_ref_rmetric5__GUARD__
    #define _order_ref_rmetric5__GUARD__
    DECL_STRONG_TYPE(order_ref_rmetric5, float);
    #endif//_order_ref_rmetric5__GUARD__

    #ifndef _order_ref_rmetric6__GUARD__
    #define _order_ref_rmetric6__GUARD__
    DECL_STRONG_TYPE(order_ref_rmetric6, float);
    #endif//_order_ref_rmetric6__GUARD__

    #ifndef _order_ref_rmetric7__GUARD__
    #define _order_ref_rmetric7__GUARD__
    DECL_STRONG_TYPE(order_ref_rmetric7, float);
    #endif//_order_ref_rmetric7__GUARD__

    #ifndef _exp_day_wt_vega_offset__GUARD__
    #define _exp_day_wt_vega_offset__GUARD__
    DECL_STRONG_TYPE(exp_day_wt_vega_offset, float);
    #endif//_exp_day_wt_vega_offset__GUARD__

    #ifndef _max_exp_day_wt_vega_ln__GUARD__
    #define _max_exp_day_wt_vega_ln__GUARD__
    DECL_STRONG_TYPE(max_exp_day_wt_vega_ln, float);
    #endif//_max_exp_day_wt_vega_ln__GUARD__

    #ifndef _max_exp_day_wt_vega_sh__GUARD__
    #define _max_exp_day_wt_vega_sh__GUARD__
    DECL_STRONG_TYPE(max_exp_day_wt_vega_sh, float);
    #endif//_max_exp_day_wt_vega_sh__GUARD__

    #ifndef _max_exp_day_rmetric6_ln__GUARD__
    #define _max_exp_day_rmetric6_ln__GUARD__
    DECL_STRONG_TYPE(max_exp_day_rmetric6_ln, float);
    #endif//_max_exp_day_rmetric6_ln__GUARD__

    #ifndef _max_exp_day_rmetric6_sh__GUARD__
    #define _max_exp_day_rmetric6_sh__GUARD__
    DECL_STRONG_TYPE(max_exp_day_rmetric6_sh, float);
    #endif//_max_exp_day_rmetric6_sh__GUARD__

    #ifndef _sym_day_ddelta_offset__GUARD__
    #define _sym_day_ddelta_offset__GUARD__
    DECL_STRONG_TYPE(sym_day_ddelta_offset, float);
    #endif//_sym_day_ddelta_offset__GUARD__

    #ifndef _max_sym_day_ddelta_ln__GUARD__
    #define _max_sym_day_ddelta_ln__GUARD__
    DECL_STRONG_TYPE(max_sym_day_ddelta_ln, float);
    #endif//_max_sym_day_ddelta_ln__GUARD__

    #ifndef _max_sym_day_ddelta_sh__GUARD__
    #define _max_sym_day_ddelta_sh__GUARD__
    DECL_STRONG_TYPE(max_sym_day_ddelta_sh, float);
    #endif//_max_sym_day_ddelta_sh__GUARD__

    #ifndef _sym_day_vega_offset__GUARD__
    #define _sym_day_vega_offset__GUARD__
    DECL_STRONG_TYPE(sym_day_vega_offset, float);
    #endif//_sym_day_vega_offset__GUARD__

    #ifndef _max_sym_day_vega_ln__GUARD__
    #define _max_sym_day_vega_ln__GUARD__
    DECL_STRONG_TYPE(max_sym_day_vega_ln, float);
    #endif//_max_sym_day_vega_ln__GUARD__

    #ifndef _max_sym_day_vega_sh__GUARD__
    #define _max_sym_day_vega_sh__GUARD__
    DECL_STRONG_TYPE(max_sym_day_vega_sh, float);
    #endif//_max_sym_day_vega_sh__GUARD__

    #ifndef _sym_day_wt_vega_offset__GUARD__
    #define _sym_day_wt_vega_offset__GUARD__
    DECL_STRONG_TYPE(sym_day_wt_vega_offset, float);
    #endif//_sym_day_wt_vega_offset__GUARD__

    #ifndef _max_sym_day_wt_vega_ln__GUARD__
    #define _max_sym_day_wt_vega_ln__GUARD__
    DECL_STRONG_TYPE(max_sym_day_wt_vega_ln, float);
    #endif//_max_sym_day_wt_vega_ln__GUARD__

    #ifndef _max_sym_day_wt_vega_sh__GUARD__
    #define _max_sym_day_wt_vega_sh__GUARD__
    DECL_STRONG_TYPE(max_sym_day_wt_vega_sh, float);
    #endif//_max_sym_day_wt_vega_sh__GUARD__

    #ifndef _max_sym_day_rmetric7_ln__GUARD__
    #define _max_sym_day_rmetric7_ln__GUARD__
    DECL_STRONG_TYPE(max_sym_day_rmetric7_ln, float);
    #endif//_max_sym_day_rmetric7_ln__GUARD__

    #ifndef _max_sym_day_rmetric7_sh__GUARD__
    #define _max_sym_day_rmetric7_sh__GUARD__
    DECL_STRONG_TYPE(max_sym_day_rmetric7_sh, float);
    #endif//_max_sym_day_rmetric7_sh__GUARD__

    #ifndef _max_grp_day_ddelta_ln__GUARD__
    #define _max_grp_day_ddelta_ln__GUARD__
    DECL_STRONG_TYPE(max_grp_day_ddelta_ln, float);
    #endif//_max_grp_day_ddelta_ln__GUARD__

    #ifndef _max_grp_day_ddelta_sh__GUARD__
    #define _max_grp_day_ddelta_sh__GUARD__
    DECL_STRONG_TYPE(max_grp_day_ddelta_sh, float);
    #endif//_max_grp_day_ddelta_sh__GUARD__

    #ifndef _max_grp_day_vega_ln__GUARD__
    #define _max_grp_day_vega_ln__GUARD__
    DECL_STRONG_TYPE(max_grp_day_vega_ln, float);
    #endif//_max_grp_day_vega_ln__GUARD__

    #ifndef _max_grp_day_vega_sh__GUARD__
    #define _max_grp_day_vega_sh__GUARD__
    DECL_STRONG_TYPE(max_grp_day_vega_sh, float);
    #endif//_max_grp_day_vega_sh__GUARD__

    #ifndef _max_grp_day_vega_abs__GUARD__
    #define _max_grp_day_vega_abs__GUARD__
    DECL_STRONG_TYPE(max_grp_day_vega_abs, float);
    #endif//_max_grp_day_vega_abs__GUARD__

    #ifndef _grp_day_vega_ratio__GUARD__
    #define _grp_day_vega_ratio__GUARD__
    DECL_STRONG_TYPE(grp_day_vega_ratio, float);
    #endif//_grp_day_vega_ratio__GUARD__

    #ifndef _max_grp_day_contracts_ln__GUARD__
    #define _max_grp_day_contracts_ln__GUARD__
    DECL_STRONG_TYPE(max_grp_day_contracts_ln, int32);
    #endif//_max_grp_day_contracts_ln__GUARD__

    #ifndef _max_grp_day_contracts_sh__GUARD__
    #define _max_grp_day_contracts_sh__GUARD__
    DECL_STRONG_TYPE(max_grp_day_contracts_sh, int32);
    #endif//_max_grp_day_contracts_sh__GUARD__

    #ifndef _max_grp_day_contracts_abs__GUARD__
    #define _max_grp_day_contracts_abs__GUARD__
    DECL_STRONG_TYPE(max_grp_day_contracts_abs, int32);
    #endif//_max_grp_day_contracts_abs__GUARD__

    #ifndef _max_grp_day_rmetric1_ln__GUARD__
    #define _max_grp_day_rmetric1_ln__GUARD__
    DECL_STRONG_TYPE(max_grp_day_rmetric1_ln, float);
    #endif//_max_grp_day_rmetric1_ln__GUARD__

    #ifndef _max_grp_day_rmetric1_sh__GUARD__
    #define _max_grp_day_rmetric1_sh__GUARD__
    DECL_STRONG_TYPE(max_grp_day_rmetric1_sh, float);
    #endif//_max_grp_day_rmetric1_sh__GUARD__

    #ifndef _max_grp_day_rmetric1_abs__GUARD__
    #define _max_grp_day_rmetric1_abs__GUARD__
    DECL_STRONG_TYPE(max_grp_day_rmetric1_abs, float);
    #endif//_max_grp_day_rmetric1_abs__GUARD__

    #ifndef _grp_day_rmetric1_ratio__GUARD__
    #define _grp_day_rmetric1_ratio__GUARD__
    DECL_STRONG_TYPE(grp_day_rmetric1_ratio, float);
    #endif//_grp_day_rmetric1_ratio__GUARD__

    #ifndef _max_grp_day_rmetric2_ln__GUARD__
    #define _max_grp_day_rmetric2_ln__GUARD__
    DECL_STRONG_TYPE(max_grp_day_rmetric2_ln, float);
    #endif//_max_grp_day_rmetric2_ln__GUARD__

    #ifndef _max_grp_day_rmetric2_sh__GUARD__
    #define _max_grp_day_rmetric2_sh__GUARD__
    DECL_STRONG_TYPE(max_grp_day_rmetric2_sh, float);
    #endif//_max_grp_day_rmetric2_sh__GUARD__

    #ifndef _max_grp_day_rmetric3_ln__GUARD__
    #define _max_grp_day_rmetric3_ln__GUARD__
    DECL_STRONG_TYPE(max_grp_day_rmetric3_ln, float);
    #endif//_max_grp_day_rmetric3_ln__GUARD__

    #ifndef _max_grp_day_rmetric3_sh__GUARD__
    #define _max_grp_day_rmetric3_sh__GUARD__
    DECL_STRONG_TYPE(max_grp_day_rmetric3_sh, float);
    #endif//_max_grp_day_rmetric3_sh__GUARD__

    #ifndef _max_grp_day_rmetric4_ln__GUARD__
    #define _max_grp_day_rmetric4_ln__GUARD__
    DECL_STRONG_TYPE(max_grp_day_rmetric4_ln, float);
    #endif//_max_grp_day_rmetric4_ln__GUARD__

    #ifndef _max_grp_day_rmetric4_sh__GUARD__
    #define _max_grp_day_rmetric4_sh__GUARD__
    DECL_STRONG_TYPE(max_grp_day_rmetric4_sh, float);
    #endif//_max_grp_day_rmetric4_sh__GUARD__

    #ifndef _max_grp_day_rmetric5_ln__GUARD__
    #define _max_grp_day_rmetric5_ln__GUARD__
    DECL_STRONG_TYPE(max_grp_day_rmetric5_ln, float);
    #endif//_max_grp_day_rmetric5_ln__GUARD__

    #ifndef _max_grp_day_rmetric5_sh__GUARD__
    #define _max_grp_day_rmetric5_sh__GUARD__
    DECL_STRONG_TYPE(max_grp_day_rmetric5_sh, float);
    #endif//_max_grp_day_rmetric5_sh__GUARD__

    #ifndef _sym_ema_cxl_ddelta_ln__GUARD__
    #define _sym_ema_cxl_ddelta_ln__GUARD__
    DECL_STRONG_TYPE(sym_ema_cxl_ddelta_ln, float);
    #endif//_sym_ema_cxl_ddelta_ln__GUARD__

    #ifndef _sym_ema_cxl_ddelta_sh__GUARD__
    #define _sym_ema_cxl_ddelta_sh__GUARD__
    DECL_STRONG_TYPE(sym_ema_cxl_ddelta_sh, float);
    #endif//_sym_ema_cxl_ddelta_sh__GUARD__

    #ifndef _sym_ema_cxl_wt_vega_ln__GUARD__
    #define _sym_ema_cxl_wt_vega_ln__GUARD__
    DECL_STRONG_TYPE(sym_ema_cxl_wt_vega_ln, float);
    #endif//_sym_ema_cxl_wt_vega_ln__GUARD__

    #ifndef _sym_ema_cxl_wt_vega_sh__GUARD__
    #define _sym_ema_cxl_wt_vega_sh__GUARD__
    DECL_STRONG_TYPE(sym_ema_cxl_wt_vega_sh, float);
    #endif//_sym_ema_cxl_wt_vega_sh__GUARD__

    #ifndef _last_fill_dttm__GUARD__
    #define _last_fill_dttm__GUARD__
    DECL_STRONG_TYPE(last_fill_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_last_fill_dttm__GUARD__

    #ifndef _user_data1__GUARD__
    #define _user_data1__GUARD__
    DECL_STRONG_TYPE(user_data1, string);
    #endif//_user_data1__GUARD__

    #ifndef _user_data2__GUARD__
    #define _user_data2__GUARD__
    DECL_STRONG_TYPE(user_data2, string);
    #endif//_user_data2__GUARD__

    #ifndef _child_data__GUARD__
    #define _child_data__GUARD__
    DECL_STRONG_TYPE(child_data, string);
    #endif//_child_data__GUARD__

    #ifndef _src_timestamp__GUARD__
    #define _src_timestamp__GUARD__
    DECL_STRONG_TYPE(src_timestamp, int64);
    #endif//_src_timestamp__GUARD__

    #ifndef _sgw_timestamp__GUARD__
    #define _sgw_timestamp__GUARD__
    DECL_STRONG_TYPE(sgw_timestamp, int64);
    #endif//_sgw_timestamp__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _include_srnetwork__GUARD__
    #define _include_srnetwork__GUARD__
    DECL_STRONG_TYPE(include_srnetwork, spiderrock::protobuf::api::InclExclDisclose);
    #endif//_include_srnetwork__GUARD__

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

    #ifndef _ssale_flag__GUARD__
    #define _ssale_flag__GUARD__
    DECL_STRONG_TYPE(ssale_flag, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag__GUARD__

    #ifndef _ref_uprc__float__GUARD__
    #define _ref_uprc__float__GUARD__
    DECL_STRONG_TYPE(ref_uprc__float, float);
    #endif//_ref_uprc__float__GUARD__

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

    #ifndef _pos_type1__GUARD__
    #define _pos_type1__GUARD__
    DECL_STRONG_TYPE(pos_type1, spiderrock::protobuf::api::PositionType);
    #endif//_pos_type1__GUARD__

    #ifndef _ssale_flag1__GUARD__
    #define _ssale_flag1__GUARD__
    DECL_STRONG_TYPE(ssale_flag1, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag1__GUARD__

    #ifndef _vega1__GUARD__
    #define _vega1__GUARD__
    DECL_STRONG_TYPE(vega1, float);
    #endif//_vega1__GUARD__

    #ifndef _ref_uprc1__GUARD__
    #define _ref_uprc1__GUARD__
    DECL_STRONG_TYPE(ref_uprc1, double);
    #endif//_ref_uprc1__GUARD__

    #ifndef _ref_delta1__GUARD__
    #define _ref_delta1__GUARD__
    DECL_STRONG_TYPE(ref_delta1, float);
    #endif//_ref_delta1__GUARD__

    #ifndef _ref_earn_cnt1__GUARD__
    #define _ref_earn_cnt1__GUARD__
    DECL_STRONG_TYPE(ref_earn_cnt1, int32);
    #endif//_ref_earn_cnt1__GUARD__

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

    #ifndef _pos_type2__GUARD__
    #define _pos_type2__GUARD__
    DECL_STRONG_TYPE(pos_type2, spiderrock::protobuf::api::PositionType);
    #endif//_pos_type2__GUARD__

    #ifndef _ssale_flag2__GUARD__
    #define _ssale_flag2__GUARD__
    DECL_STRONG_TYPE(ssale_flag2, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag2__GUARD__

    #ifndef _vega2__GUARD__
    #define _vega2__GUARD__
    DECL_STRONG_TYPE(vega2, float);
    #endif//_vega2__GUARD__

    #ifndef _ref_uprc2__GUARD__
    #define _ref_uprc2__GUARD__
    DECL_STRONG_TYPE(ref_uprc2, double);
    #endif//_ref_uprc2__GUARD__

    #ifndef _ref_delta2__GUARD__
    #define _ref_delta2__GUARD__
    DECL_STRONG_TYPE(ref_delta2, float);
    #endif//_ref_delta2__GUARD__

    #ifndef _ref_earn_cnt2__GUARD__
    #define _ref_earn_cnt2__GUARD__
    DECL_STRONG_TYPE(ref_earn_cnt2, int32);
    #endif//_ref_earn_cnt2__GUARD__

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

    #ifndef _pos_type3__GUARD__
    #define _pos_type3__GUARD__
    DECL_STRONG_TYPE(pos_type3, spiderrock::protobuf::api::PositionType);
    #endif//_pos_type3__GUARD__

    #ifndef _ssale_flag3__GUARD__
    #define _ssale_flag3__GUARD__
    DECL_STRONG_TYPE(ssale_flag3, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag3__GUARD__

    #ifndef _vega3__GUARD__
    #define _vega3__GUARD__
    DECL_STRONG_TYPE(vega3, float);
    #endif//_vega3__GUARD__

    #ifndef _ref_uprc3__GUARD__
    #define _ref_uprc3__GUARD__
    DECL_STRONG_TYPE(ref_uprc3, double);
    #endif//_ref_uprc3__GUARD__

    #ifndef _ref_delta3__GUARD__
    #define _ref_delta3__GUARD__
    DECL_STRONG_TYPE(ref_delta3, float);
    #endif//_ref_delta3__GUARD__

    #ifndef _ref_earn_cnt3__GUARD__
    #define _ref_earn_cnt3__GUARD__
    DECL_STRONG_TYPE(ref_earn_cnt3, int32);
    #endif//_ref_earn_cnt3__GUARD__

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

    #ifndef _pos_type4__GUARD__
    #define _pos_type4__GUARD__
    DECL_STRONG_TYPE(pos_type4, spiderrock::protobuf::api::PositionType);
    #endif//_pos_type4__GUARD__

    #ifndef _ssale_flag4__GUARD__
    #define _ssale_flag4__GUARD__
    DECL_STRONG_TYPE(ssale_flag4, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag4__GUARD__

    #ifndef _vega4__GUARD__
    #define _vega4__GUARD__
    DECL_STRONG_TYPE(vega4, float);
    #endif//_vega4__GUARD__

    #ifndef _ref_uprc4__GUARD__
    #define _ref_uprc4__GUARD__
    DECL_STRONG_TYPE(ref_uprc4, double);
    #endif//_ref_uprc4__GUARD__

    #ifndef _ref_delta4__GUARD__
    #define _ref_delta4__GUARD__
    DECL_STRONG_TYPE(ref_delta4, float);
    #endif//_ref_delta4__GUARD__

    #ifndef _ref_earn_cnt4__GUARD__
    #define _ref_earn_cnt4__GUARD__
    DECL_STRONG_TYPE(ref_earn_cnt4, int32);
    #endif//_ref_earn_cnt4__GUARD__

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

    #ifndef _pos_type5__GUARD__
    #define _pos_type5__GUARD__
    DECL_STRONG_TYPE(pos_type5, spiderrock::protobuf::api::PositionType);
    #endif//_pos_type5__GUARD__

    #ifndef _ssale_flag5__GUARD__
    #define _ssale_flag5__GUARD__
    DECL_STRONG_TYPE(ssale_flag5, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag5__GUARD__

    #ifndef _vega5__GUARD__
    #define _vega5__GUARD__
    DECL_STRONG_TYPE(vega5, float);
    #endif//_vega5__GUARD__

    #ifndef _ref_uprc5__GUARD__
    #define _ref_uprc5__GUARD__
    DECL_STRONG_TYPE(ref_uprc5, double);
    #endif//_ref_uprc5__GUARD__

    #ifndef _ref_delta5__GUARD__
    #define _ref_delta5__GUARD__
    DECL_STRONG_TYPE(ref_delta5, float);
    #endif//_ref_delta5__GUARD__

    #ifndef _ref_earn_cnt5__GUARD__
    #define _ref_earn_cnt5__GUARD__
    DECL_STRONG_TYPE(ref_earn_cnt5, int32);
    #endif//_ref_earn_cnt5__GUARD__

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

    #ifndef _pos_type6__GUARD__
    #define _pos_type6__GUARD__
    DECL_STRONG_TYPE(pos_type6, spiderrock::protobuf::api::PositionType);
    #endif//_pos_type6__GUARD__

    #ifndef _ssale_flag6__GUARD__
    #define _ssale_flag6__GUARD__
    DECL_STRONG_TYPE(ssale_flag6, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag6__GUARD__

    #ifndef _vega6__GUARD__
    #define _vega6__GUARD__
    DECL_STRONG_TYPE(vega6, float);
    #endif//_vega6__GUARD__

    #ifndef _ref_uprc6__GUARD__
    #define _ref_uprc6__GUARD__
    DECL_STRONG_TYPE(ref_uprc6, double);
    #endif//_ref_uprc6__GUARD__

    #ifndef _ref_delta6__GUARD__
    #define _ref_delta6__GUARD__
    DECL_STRONG_TYPE(ref_delta6, float);
    #endif//_ref_delta6__GUARD__

    #ifndef _ref_earn_cnt6__GUARD__
    #define _ref_earn_cnt6__GUARD__
    DECL_STRONG_TYPE(ref_earn_cnt6, int32);
    #endif//_ref_earn_cnt6__GUARD__

    
    class SpdrParentOrder_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentOrder_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentOrder_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const parent_number & value) { set_parent_number(value); }


        SpdrParentOrder_PKey() {}

        virtual ~SpdrParentOrder_PKey() {
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
    
    class SpdrParentOrder_DirectedCounterParty {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentOrder_DirectedCounterParty::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentOrder_DirectedCounterParty::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const client_firm & value) { set_client_firm(value); }
        void set(const incl_excl & value) { set_incl_excl(value); }


        SpdrParentOrder_DirectedCounterParty() {}

        virtual ~SpdrParentOrder_DirectedCounterParty() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(697,m_client_firm);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(700,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::InclExclDisclose>(m_incl_excl)));
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,697,static_cast<string>(m_client_firm));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,700,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::InclExclDisclose>(m_incl_excl)));
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
                    case 697: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 700: {m_incl_excl = static_cast<spiderrock::protobuf::api::InclExclDisclose>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    
    class SpdrParentOrder_OrderLegs {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using stock_side = spiderrock::protobuf::api::stock_side;
        using stock_shares = spiderrock::protobuf::api::stock_shares;
        using stock_leg_id = spiderrock::protobuf::api::stock_leg_id;
        using alt_stk_leg_id = spiderrock::protobuf::api::alt_stk_leg_id;
        using ssale_flag = spiderrock::protobuf::api::ssale_flag;
        using ref_uprc = spiderrock::protobuf::api::ref_uprc__float;
        using num_legs = spiderrock::protobuf::api::num_legs;
        using sec_key1 = spiderrock::protobuf::api::sec_key1;
        using sec_type1 = spiderrock::protobuf::api::sec_type1;
        using mult1 = spiderrock::protobuf::api::mult1;
        using side1 = spiderrock::protobuf::api::side1;
        using leg_id1 = spiderrock::protobuf::api::leg_id1;
        using alt_leg_id1 = spiderrock::protobuf::api::alt_leg_id1;
        using pos_type1 = spiderrock::protobuf::api::pos_type1;
        using ssale_flag1 = spiderrock::protobuf::api::ssale_flag1;
        using vega1 = spiderrock::protobuf::api::vega1;
        using ref_uprc1 = spiderrock::protobuf::api::ref_uprc1;
        using ref_delta1 = spiderrock::protobuf::api::ref_delta1;
        using ref_earn_cnt1 = spiderrock::protobuf::api::ref_earn_cnt1;
        using sec_key2 = spiderrock::protobuf::api::sec_key2;
        using sec_type2 = spiderrock::protobuf::api::sec_type2;
        using mult2 = spiderrock::protobuf::api::mult2;
        using side2 = spiderrock::protobuf::api::side2;
        using leg_id2 = spiderrock::protobuf::api::leg_id2;
        using alt_leg_id2 = spiderrock::protobuf::api::alt_leg_id2;
        using pos_type2 = spiderrock::protobuf::api::pos_type2;
        using ssale_flag2 = spiderrock::protobuf::api::ssale_flag2;
        using vega2 = spiderrock::protobuf::api::vega2;
        using ref_uprc2 = spiderrock::protobuf::api::ref_uprc2;
        using ref_delta2 = spiderrock::protobuf::api::ref_delta2;
        using ref_earn_cnt2 = spiderrock::protobuf::api::ref_earn_cnt2;
        using sec_key3 = spiderrock::protobuf::api::sec_key3;
        using sec_type3 = spiderrock::protobuf::api::sec_type3;
        using mult3 = spiderrock::protobuf::api::mult3;
        using side3 = spiderrock::protobuf::api::side3;
        using leg_id3 = spiderrock::protobuf::api::leg_id3;
        using alt_leg_id3 = spiderrock::protobuf::api::alt_leg_id3;
        using pos_type3 = spiderrock::protobuf::api::pos_type3;
        using ssale_flag3 = spiderrock::protobuf::api::ssale_flag3;
        using vega3 = spiderrock::protobuf::api::vega3;
        using ref_uprc3 = spiderrock::protobuf::api::ref_uprc3;
        using ref_delta3 = spiderrock::protobuf::api::ref_delta3;
        using ref_earn_cnt3 = spiderrock::protobuf::api::ref_earn_cnt3;
        using sec_key4 = spiderrock::protobuf::api::sec_key4;
        using sec_type4 = spiderrock::protobuf::api::sec_type4;
        using mult4 = spiderrock::protobuf::api::mult4;
        using side4 = spiderrock::protobuf::api::side4;
        using leg_id4 = spiderrock::protobuf::api::leg_id4;
        using alt_leg_id4 = spiderrock::protobuf::api::alt_leg_id4;
        using pos_type4 = spiderrock::protobuf::api::pos_type4;
        using ssale_flag4 = spiderrock::protobuf::api::ssale_flag4;
        using vega4 = spiderrock::protobuf::api::vega4;
        using ref_uprc4 = spiderrock::protobuf::api::ref_uprc4;
        using ref_delta4 = spiderrock::protobuf::api::ref_delta4;
        using ref_earn_cnt4 = spiderrock::protobuf::api::ref_earn_cnt4;
        using sec_key5 = spiderrock::protobuf::api::sec_key5;
        using sec_type5 = spiderrock::protobuf::api::sec_type5;
        using mult5 = spiderrock::protobuf::api::mult5;
        using side5 = spiderrock::protobuf::api::side5;
        using leg_id5 = spiderrock::protobuf::api::leg_id5;
        using alt_leg_id5 = spiderrock::protobuf::api::alt_leg_id5;
        using pos_type5 = spiderrock::protobuf::api::pos_type5;
        using ssale_flag5 = spiderrock::protobuf::api::ssale_flag5;
        using vega5 = spiderrock::protobuf::api::vega5;
        using ref_uprc5 = spiderrock::protobuf::api::ref_uprc5;
        using ref_delta5 = spiderrock::protobuf::api::ref_delta5;
        using ref_earn_cnt5 = spiderrock::protobuf::api::ref_earn_cnt5;
        using sec_key6 = spiderrock::protobuf::api::sec_key6;
        using sec_type6 = spiderrock::protobuf::api::sec_type6;
        using mult6 = spiderrock::protobuf::api::mult6;
        using side6 = spiderrock::protobuf::api::side6;
        using leg_id6 = spiderrock::protobuf::api::leg_id6;
        using alt_leg_id6 = spiderrock::protobuf::api::alt_leg_id6;
        using pos_type6 = spiderrock::protobuf::api::pos_type6;
        using ssale_flag6 = spiderrock::protobuf::api::ssale_flag6;
        using vega6 = spiderrock::protobuf::api::vega6;
        using ref_uprc6 = spiderrock::protobuf::api::ref_uprc6;
        using ref_delta6 = spiderrock::protobuf::api::ref_delta6;
        using ref_earn_cnt6 = spiderrock::protobuf::api::ref_earn_cnt6;

        private:
        ticker m_ticker{};
        stock_side m_stock_side{};
        stock_shares m_stock_shares{};
        stock_leg_id m_stock_leg_id{};
        alt_stk_leg_id m_alt_stk_leg_id{};
        ssale_flag m_ssale_flag{};
        ref_uprc m_ref_uprc{};
        num_legs m_num_legs{};
        sec_key1 m_sec_key1{};
        sec_type1 m_sec_type1{};
        mult1 m_mult1{};
        side1 m_side1{};
        leg_id1 m_leg_id1{};
        alt_leg_id1 m_alt_leg_id1{};
        pos_type1 m_pos_type1{};
        ssale_flag1 m_ssale_flag1{};
        vega1 m_vega1{};
        ref_uprc1 m_ref_uprc1{};
        ref_delta1 m_ref_delta1{};
        ref_earn_cnt1 m_ref_earn_cnt1{};
        sec_key2 m_sec_key2{};
        sec_type2 m_sec_type2{};
        mult2 m_mult2{};
        side2 m_side2{};
        leg_id2 m_leg_id2{};
        alt_leg_id2 m_alt_leg_id2{};
        pos_type2 m_pos_type2{};
        ssale_flag2 m_ssale_flag2{};
        vega2 m_vega2{};
        ref_uprc2 m_ref_uprc2{};
        ref_delta2 m_ref_delta2{};
        ref_earn_cnt2 m_ref_earn_cnt2{};
        sec_key3 m_sec_key3{};
        sec_type3 m_sec_type3{};
        mult3 m_mult3{};
        side3 m_side3{};
        leg_id3 m_leg_id3{};
        alt_leg_id3 m_alt_leg_id3{};
        pos_type3 m_pos_type3{};
        ssale_flag3 m_ssale_flag3{};
        vega3 m_vega3{};
        ref_uprc3 m_ref_uprc3{};
        ref_delta3 m_ref_delta3{};
        ref_earn_cnt3 m_ref_earn_cnt3{};
        sec_key4 m_sec_key4{};
        sec_type4 m_sec_type4{};
        mult4 m_mult4{};
        side4 m_side4{};
        leg_id4 m_leg_id4{};
        alt_leg_id4 m_alt_leg_id4{};
        pos_type4 m_pos_type4{};
        ssale_flag4 m_ssale_flag4{};
        vega4 m_vega4{};
        ref_uprc4 m_ref_uprc4{};
        ref_delta4 m_ref_delta4{};
        ref_earn_cnt4 m_ref_earn_cnt4{};
        sec_key5 m_sec_key5{};
        sec_type5 m_sec_type5{};
        mult5 m_mult5{};
        side5 m_side5{};
        leg_id5 m_leg_id5{};
        alt_leg_id5 m_alt_leg_id5{};
        pos_type5 m_pos_type5{};
        ssale_flag5 m_ssale_flag5{};
        vega5 m_vega5{};
        ref_uprc5 m_ref_uprc5{};
        ref_delta5 m_ref_delta5{};
        ref_earn_cnt5 m_ref_earn_cnt5{};
        sec_key6 m_sec_key6{};
        sec_type6 m_sec_type6{};
        mult6 m_mult6{};
        side6 m_side6{};
        leg_id6 m_leg_id6{};
        alt_leg_id6 m_alt_leg_id6{};
        pos_type6 m_pos_type6{};
        ssale_flag6 m_ssale_flag6{};
        vega6 m_vega6{};
        ref_uprc6 m_ref_uprc6{};
        ref_delta6 m_ref_delta6{};
        ref_earn_cnt6 m_ref_earn_cnt6{};

        public:
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
        ssale_flag get_ssale_flag() const {
            return m_ssale_flag;
        }
        ref_uprc get_ref_uprc() const {
            return m_ref_uprc;
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
        pos_type1 get_pos_type1() const {
            return m_pos_type1;
        }
        ssale_flag1 get_ssale_flag1() const {
            return m_ssale_flag1;
        }
        vega1 get_vega1() const {
            return m_vega1;
        }
        ref_uprc1 get_ref_uprc1() const {
            return m_ref_uprc1;
        }
        ref_delta1 get_ref_delta1() const {
            return m_ref_delta1;
        }
        ref_earn_cnt1 get_ref_earn_cnt1() const {
            return m_ref_earn_cnt1;
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
        pos_type2 get_pos_type2() const {
            return m_pos_type2;
        }
        ssale_flag2 get_ssale_flag2() const {
            return m_ssale_flag2;
        }
        vega2 get_vega2() const {
            return m_vega2;
        }
        ref_uprc2 get_ref_uprc2() const {
            return m_ref_uprc2;
        }
        ref_delta2 get_ref_delta2() const {
            return m_ref_delta2;
        }
        ref_earn_cnt2 get_ref_earn_cnt2() const {
            return m_ref_earn_cnt2;
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
        pos_type3 get_pos_type3() const {
            return m_pos_type3;
        }
        ssale_flag3 get_ssale_flag3() const {
            return m_ssale_flag3;
        }
        vega3 get_vega3() const {
            return m_vega3;
        }
        ref_uprc3 get_ref_uprc3() const {
            return m_ref_uprc3;
        }
        ref_delta3 get_ref_delta3() const {
            return m_ref_delta3;
        }
        ref_earn_cnt3 get_ref_earn_cnt3() const {
            return m_ref_earn_cnt3;
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
        pos_type4 get_pos_type4() const {
            return m_pos_type4;
        }
        ssale_flag4 get_ssale_flag4() const {
            return m_ssale_flag4;
        }
        vega4 get_vega4() const {
            return m_vega4;
        }
        ref_uprc4 get_ref_uprc4() const {
            return m_ref_uprc4;
        }
        ref_delta4 get_ref_delta4() const {
            return m_ref_delta4;
        }
        ref_earn_cnt4 get_ref_earn_cnt4() const {
            return m_ref_earn_cnt4;
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
        pos_type5 get_pos_type5() const {
            return m_pos_type5;
        }
        ssale_flag5 get_ssale_flag5() const {
            return m_ssale_flag5;
        }
        vega5 get_vega5() const {
            return m_vega5;
        }
        ref_uprc5 get_ref_uprc5() const {
            return m_ref_uprc5;
        }
        ref_delta5 get_ref_delta5() const {
            return m_ref_delta5;
        }
        ref_earn_cnt5 get_ref_earn_cnt5() const {
            return m_ref_earn_cnt5;
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
        pos_type6 get_pos_type6() const {
            return m_pos_type6;
        }
        ssale_flag6 get_ssale_flag6() const {
            return m_ssale_flag6;
        }
        vega6 get_vega6() const {
            return m_vega6;
        }
        ref_uprc6 get_ref_uprc6() const {
            return m_ref_uprc6;
        }
        ref_delta6 get_ref_delta6() const {
            return m_ref_delta6;
        }
        ref_earn_cnt6 get_ref_earn_cnt6() const {
            return m_ref_earn_cnt6;
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
        void set_ssale_flag(const ssale_flag& value)  {
            m_ssale_flag = value;
        }
        void set_ref_uprc(const ref_uprc& value)  {
            m_ref_uprc = value;
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
        void set_pos_type1(const pos_type1& value)  {
            m_pos_type1 = value;
        }
        void set_ssale_flag1(const ssale_flag1& value)  {
            m_ssale_flag1 = value;
        }
        void set_vega1(const vega1& value)  {
            m_vega1 = value;
        }
        void set_ref_uprc1(const ref_uprc1& value)  {
            m_ref_uprc1 = value;
        }
        void set_ref_delta1(const ref_delta1& value)  {
            m_ref_delta1 = value;
        }
        void set_ref_earn_cnt1(const ref_earn_cnt1& value)  {
            m_ref_earn_cnt1 = value;
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
        void set_pos_type2(const pos_type2& value)  {
            m_pos_type2 = value;
        }
        void set_ssale_flag2(const ssale_flag2& value)  {
            m_ssale_flag2 = value;
        }
        void set_vega2(const vega2& value)  {
            m_vega2 = value;
        }
        void set_ref_uprc2(const ref_uprc2& value)  {
            m_ref_uprc2 = value;
        }
        void set_ref_delta2(const ref_delta2& value)  {
            m_ref_delta2 = value;
        }
        void set_ref_earn_cnt2(const ref_earn_cnt2& value)  {
            m_ref_earn_cnt2 = value;
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
        void set_pos_type3(const pos_type3& value)  {
            m_pos_type3 = value;
        }
        void set_ssale_flag3(const ssale_flag3& value)  {
            m_ssale_flag3 = value;
        }
        void set_vega3(const vega3& value)  {
            m_vega3 = value;
        }
        void set_ref_uprc3(const ref_uprc3& value)  {
            m_ref_uprc3 = value;
        }
        void set_ref_delta3(const ref_delta3& value)  {
            m_ref_delta3 = value;
        }
        void set_ref_earn_cnt3(const ref_earn_cnt3& value)  {
            m_ref_earn_cnt3 = value;
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
        void set_pos_type4(const pos_type4& value)  {
            m_pos_type4 = value;
        }
        void set_ssale_flag4(const ssale_flag4& value)  {
            m_ssale_flag4 = value;
        }
        void set_vega4(const vega4& value)  {
            m_vega4 = value;
        }
        void set_ref_uprc4(const ref_uprc4& value)  {
            m_ref_uprc4 = value;
        }
        void set_ref_delta4(const ref_delta4& value)  {
            m_ref_delta4 = value;
        }
        void set_ref_earn_cnt4(const ref_earn_cnt4& value)  {
            m_ref_earn_cnt4 = value;
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
        void set_pos_type5(const pos_type5& value)  {
            m_pos_type5 = value;
        }
        void set_ssale_flag5(const ssale_flag5& value)  {
            m_ssale_flag5 = value;
        }
        void set_vega5(const vega5& value)  {
            m_vega5 = value;
        }
        void set_ref_uprc5(const ref_uprc5& value)  {
            m_ref_uprc5 = value;
        }
        void set_ref_delta5(const ref_delta5& value)  {
            m_ref_delta5 = value;
        }
        void set_ref_earn_cnt5(const ref_earn_cnt5& value)  {
            m_ref_earn_cnt5 = value;
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
        void set_pos_type6(const pos_type6& value)  {
            m_pos_type6 = value;
        }
        void set_ssale_flag6(const ssale_flag6& value)  {
            m_ssale_flag6 = value;
        }
        void set_vega6(const vega6& value)  {
            m_vega6 = value;
        }
        void set_ref_uprc6(const ref_uprc6& value)  {
            m_ref_uprc6 = value;
        }
        void set_ref_delta6(const ref_delta6& value)  {
            m_ref_delta6 = value;
        }
        void set_ref_earn_cnt6(const ref_earn_cnt6& value)  {
            m_ref_earn_cnt6 = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentOrder_OrderLegs::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentOrder_OrderLegs::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const stock_side & value) { set_stock_side(value); }
        void set(const stock_shares & value) { set_stock_shares(value); }
        void set(const stock_leg_id & value) { set_stock_leg_id(value); }
        void set(const alt_stk_leg_id & value) { set_alt_stk_leg_id(value); }
        void set(const ssale_flag & value) { set_ssale_flag(value); }
        void set(const ref_uprc & value) { set_ref_uprc(value); }
        void set(const num_legs & value) { set_num_legs(value); }
        void set(const sec_key1 & value) { set_sec_key1(value); }
        void set(const sec_type1 & value) { set_sec_type1(value); }
        void set(const mult1 & value) { set_mult1(value); }
        void set(const side1 & value) { set_side1(value); }
        void set(const leg_id1 & value) { set_leg_id1(value); }
        void set(const alt_leg_id1 & value) { set_alt_leg_id1(value); }
        void set(const pos_type1 & value) { set_pos_type1(value); }
        void set(const ssale_flag1 & value) { set_ssale_flag1(value); }
        void set(const vega1 & value) { set_vega1(value); }
        void set(const ref_uprc1 & value) { set_ref_uprc1(value); }
        void set(const ref_delta1 & value) { set_ref_delta1(value); }
        void set(const ref_earn_cnt1 & value) { set_ref_earn_cnt1(value); }
        void set(const sec_key2 & value) { set_sec_key2(value); }
        void set(const sec_type2 & value) { set_sec_type2(value); }
        void set(const mult2 & value) { set_mult2(value); }
        void set(const side2 & value) { set_side2(value); }
        void set(const leg_id2 & value) { set_leg_id2(value); }
        void set(const alt_leg_id2 & value) { set_alt_leg_id2(value); }
        void set(const pos_type2 & value) { set_pos_type2(value); }
        void set(const ssale_flag2 & value) { set_ssale_flag2(value); }
        void set(const vega2 & value) { set_vega2(value); }
        void set(const ref_uprc2 & value) { set_ref_uprc2(value); }
        void set(const ref_delta2 & value) { set_ref_delta2(value); }
        void set(const ref_earn_cnt2 & value) { set_ref_earn_cnt2(value); }
        void set(const sec_key3 & value) { set_sec_key3(value); }
        void set(const sec_type3 & value) { set_sec_type3(value); }
        void set(const mult3 & value) { set_mult3(value); }
        void set(const side3 & value) { set_side3(value); }
        void set(const leg_id3 & value) { set_leg_id3(value); }
        void set(const alt_leg_id3 & value) { set_alt_leg_id3(value); }
        void set(const pos_type3 & value) { set_pos_type3(value); }
        void set(const ssale_flag3 & value) { set_ssale_flag3(value); }
        void set(const vega3 & value) { set_vega3(value); }
        void set(const ref_uprc3 & value) { set_ref_uprc3(value); }
        void set(const ref_delta3 & value) { set_ref_delta3(value); }
        void set(const ref_earn_cnt3 & value) { set_ref_earn_cnt3(value); }
        void set(const sec_key4 & value) { set_sec_key4(value); }
        void set(const sec_type4 & value) { set_sec_type4(value); }
        void set(const mult4 & value) { set_mult4(value); }
        void set(const side4 & value) { set_side4(value); }
        void set(const leg_id4 & value) { set_leg_id4(value); }
        void set(const alt_leg_id4 & value) { set_alt_leg_id4(value); }
        void set(const pos_type4 & value) { set_pos_type4(value); }
        void set(const ssale_flag4 & value) { set_ssale_flag4(value); }
        void set(const vega4 & value) { set_vega4(value); }
        void set(const ref_uprc4 & value) { set_ref_uprc4(value); }
        void set(const ref_delta4 & value) { set_ref_delta4(value); }
        void set(const ref_earn_cnt4 & value) { set_ref_earn_cnt4(value); }
        void set(const sec_key5 & value) { set_sec_key5(value); }
        void set(const sec_type5 & value) { set_sec_type5(value); }
        void set(const mult5 & value) { set_mult5(value); }
        void set(const side5 & value) { set_side5(value); }
        void set(const leg_id5 & value) { set_leg_id5(value); }
        void set(const alt_leg_id5 & value) { set_alt_leg_id5(value); }
        void set(const pos_type5 & value) { set_pos_type5(value); }
        void set(const ssale_flag5 & value) { set_ssale_flag5(value); }
        void set(const vega5 & value) { set_vega5(value); }
        void set(const ref_uprc5 & value) { set_ref_uprc5(value); }
        void set(const ref_delta5 & value) { set_ref_delta5(value); }
        void set(const ref_earn_cnt5 & value) { set_ref_earn_cnt5(value); }
        void set(const sec_key6 & value) { set_sec_key6(value); }
        void set(const sec_type6 & value) { set_sec_type6(value); }
        void set(const mult6 & value) { set_mult6(value); }
        void set(const side6 & value) { set_side6(value); }
        void set(const leg_id6 & value) { set_leg_id6(value); }
        void set(const alt_leg_id6 & value) { set_alt_leg_id6(value); }
        void set(const pos_type6 & value) { set_pos_type6(value); }
        void set(const ssale_flag6 & value) { set_ssale_flag6(value); }
        void set(const vega6 & value) { set_vega6(value); }
        void set(const ref_uprc6 & value) { set_ref_uprc6(value); }
        void set(const ref_delta6 & value) { set_ref_delta6(value); }
        void set(const ref_earn_cnt6 & value) { set_ref_earn_cnt6(value); }


        SpdrParentOrder_OrderLegs() {}

        virtual ~SpdrParentOrder_OrderLegs() {
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
            SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
            m_ticker.setCodecTickerKey(tickerKeyLayout);
            totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(754,tickerKeyLayout);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(757,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_stock_side)));
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(760,m_stock_shares);
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(763,m_stock_leg_id);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(766,m_alt_stk_leg_id);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(769,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(775,m_ref_uprc);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(778,m_num_legs);
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key1;
            m_sec_key1.setCodecOptionKey(optionKeyLayout_sec_key1);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(781,optionKeyLayout_sec_key1);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(784,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type1)));
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(787,m_mult1);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(790,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side1)));
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(793,m_leg_id1);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(796,m_alt_leg_id1);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(799,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type1)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(805,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag1)));
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(811,m_vega1);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(814,m_ref_uprc1);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(817,m_ref_delta1);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(820,m_ref_earn_cnt1);
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key2;
            m_sec_key2.setCodecOptionKey(optionKeyLayout_sec_key2);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(823,optionKeyLayout_sec_key2);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(826,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type2)));
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(829,m_mult2);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(832,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side2)));
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(835,m_leg_id2);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(838,m_alt_leg_id2);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(841,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type2)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(847,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag2)));
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(853,m_vega2);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(856,m_ref_uprc2);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(859,m_ref_delta2);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(862,m_ref_earn_cnt2);
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key3;
            m_sec_key3.setCodecOptionKey(optionKeyLayout_sec_key3);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(865,optionKeyLayout_sec_key3);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(868,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type3)));
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(871,m_mult3);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(874,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side3)));
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(877,m_leg_id3);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(880,m_alt_leg_id3);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(883,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type3)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(889,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag3)));
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(895,m_vega3);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(898,m_ref_uprc3);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(901,m_ref_delta3);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(904,m_ref_earn_cnt3);
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key4;
            m_sec_key4.setCodecOptionKey(optionKeyLayout_sec_key4);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(907,optionKeyLayout_sec_key4);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(910,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type4)));
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(913,m_mult4);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(916,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side4)));
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(919,m_leg_id4);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(922,m_alt_leg_id4);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(925,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type4)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(931,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag4)));
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(937,m_vega4);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(940,m_ref_uprc4);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(943,m_ref_delta4);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(946,m_ref_earn_cnt4);
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key5;
            m_sec_key5.setCodecOptionKey(optionKeyLayout_sec_key5);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(949,optionKeyLayout_sec_key5);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(952,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type5)));
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(955,m_mult5);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(958,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side5)));
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(961,m_leg_id5);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(964,m_alt_leg_id5);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(967,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type5)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(973,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag5)));
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(979,m_vega5);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(982,m_ref_uprc5);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(985,m_ref_delta5);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(988,m_ref_earn_cnt5);
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key6;
            m_sec_key6.setCodecOptionKey(optionKeyLayout_sec_key6);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(991,optionKeyLayout_sec_key6);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(994,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type6)));
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(997,m_mult6);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1000,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side6)));
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(1003,m_leg_id6);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(1006,m_alt_leg_id6);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1009,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type6)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1015,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag6)));
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(1021,m_vega6);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(1024,m_ref_uprc6);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(1027,m_ref_delta6);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(1030,m_ref_earn_cnt6);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
            m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
            dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 754, tickerKeyLayout_ticker);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,757,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_stock_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,760,m_stock_shares);
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,763,m_stock_leg_id);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,766,static_cast<string>(m_alt_stk_leg_id));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,769,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,775,m_ref_uprc);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,778,m_num_legs);
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key1;
            m_sec_key1.setCodecOptionKey(optionKeyLayout_sec_key1);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 781, optionKeyLayout_sec_key1);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,784,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type1)));
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,787,m_mult1);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,790,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side1)));
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,793,m_leg_id1);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,796,static_cast<string>(m_alt_leg_id1));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,799,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type1)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,805,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag1)));
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,811,m_vega1);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,814,m_ref_uprc1);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,817,m_ref_delta1);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,820,m_ref_earn_cnt1);
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key2;
            m_sec_key2.setCodecOptionKey(optionKeyLayout_sec_key2);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 823, optionKeyLayout_sec_key2);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,826,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type2)));
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,829,m_mult2);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,832,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side2)));
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,835,m_leg_id2);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,838,static_cast<string>(m_alt_leg_id2));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,841,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type2)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,847,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag2)));
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,853,m_vega2);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,856,m_ref_uprc2);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,859,m_ref_delta2);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,862,m_ref_earn_cnt2);
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key3;
            m_sec_key3.setCodecOptionKey(optionKeyLayout_sec_key3);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 865, optionKeyLayout_sec_key3);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,868,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type3)));
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,871,m_mult3);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,874,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side3)));
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,877,m_leg_id3);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,880,static_cast<string>(m_alt_leg_id3));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,883,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type3)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,889,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag3)));
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,895,m_vega3);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,898,m_ref_uprc3);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,901,m_ref_delta3);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,904,m_ref_earn_cnt3);
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key4;
            m_sec_key4.setCodecOptionKey(optionKeyLayout_sec_key4);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 907, optionKeyLayout_sec_key4);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,910,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type4)));
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,913,m_mult4);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,916,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side4)));
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,919,m_leg_id4);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,922,static_cast<string>(m_alt_leg_id4));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,925,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type4)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,931,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag4)));
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,937,m_vega4);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,940,m_ref_uprc4);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,943,m_ref_delta4);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,946,m_ref_earn_cnt4);
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key5;
            m_sec_key5.setCodecOptionKey(optionKeyLayout_sec_key5);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 949, optionKeyLayout_sec_key5);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,952,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type5)));
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,955,m_mult5);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,958,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side5)));
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,961,m_leg_id5);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,964,static_cast<string>(m_alt_leg_id5));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,967,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type5)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,973,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag5)));
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,979,m_vega5);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,982,m_ref_uprc5);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,985,m_ref_delta5);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,988,m_ref_earn_cnt5);
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key6;
            m_sec_key6.setCodecOptionKey(optionKeyLayout_sec_key6);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 991, optionKeyLayout_sec_key6);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,994,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type6)));
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,997,m_mult6);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1000,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side6)));
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,1003,m_leg_id6);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,1006,static_cast<string>(m_alt_leg_id6));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1009,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type6)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1015,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag6)));
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,1021,m_vega6);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,1024,m_ref_uprc6);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,1027,m_ref_delta6);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,1030,m_ref_earn_cnt6);
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
                    case 754: {
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_ticker.setFromCodec(tickerKey);
                        break;
                    }
                    case 757: {m_stock_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 760: {m_stock_shares = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 763: {m_stock_leg_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 766: {m_alt_stk_leg_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 769: {m_ssale_flag = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 775: {m_ref_uprc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 778: {m_num_legs = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 781: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key1.setFromCodec(optionKey);
                        break;
                    }
                    case 784: {m_sec_type1 = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 787: {m_mult1 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                    case 790: {m_side1 = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 793: {m_leg_id1 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 796: {m_alt_leg_id1 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 799: {m_pos_type1 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 805: {m_ssale_flag1 = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 811: {m_vega1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 814: {m_ref_uprc1 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 817: {m_ref_delta1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 820: {m_ref_earn_cnt1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 823: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key2.setFromCodec(optionKey);
                        break;
                    }
                    case 826: {m_sec_type2 = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 829: {m_mult2 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                    case 832: {m_side2 = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 835: {m_leg_id2 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 838: {m_alt_leg_id2 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 841: {m_pos_type2 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 847: {m_ssale_flag2 = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 853: {m_vega2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 856: {m_ref_uprc2 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 859: {m_ref_delta2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 862: {m_ref_earn_cnt2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 865: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key3.setFromCodec(optionKey);
                        break;
                    }
                    case 868: {m_sec_type3 = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 871: {m_mult3 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                    case 874: {m_side3 = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 877: {m_leg_id3 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 880: {m_alt_leg_id3 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 883: {m_pos_type3 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 889: {m_ssale_flag3 = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 895: {m_vega3 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 898: {m_ref_uprc3 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 901: {m_ref_delta3 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 904: {m_ref_earn_cnt3 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 907: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key4.setFromCodec(optionKey);
                        break;
                    }
                    case 910: {m_sec_type4 = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 913: {m_mult4 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                    case 916: {m_side4 = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 919: {m_leg_id4 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 922: {m_alt_leg_id4 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 925: {m_pos_type4 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 931: {m_ssale_flag4 = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 937: {m_vega4 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 940: {m_ref_uprc4 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 943: {m_ref_delta4 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 946: {m_ref_earn_cnt4 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 949: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key5.setFromCodec(optionKey);
                        break;
                    }
                    case 952: {m_sec_type5 = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 955: {m_mult5 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                    case 958: {m_side5 = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 961: {m_leg_id5 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 964: {m_alt_leg_id5 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 967: {m_pos_type5 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 973: {m_ssale_flag5 = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 979: {m_vega5 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 982: {m_ref_uprc5 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 985: {m_ref_delta5 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 988: {m_ref_earn_cnt5 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 991: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key6.setFromCodec(optionKey);
                        break;
                    }
                    case 994: {m_sec_type6 = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 997: {m_mult6 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                    case 1000: {m_side6 = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 1003: {m_leg_id6 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 1006: {m_alt_leg_id6 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 1009: {m_pos_type6 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 1015: {m_ssale_flag6 = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 1021: {m_vega6 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 1024: {m_ref_uprc6 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 1027: {m_ref_delta6 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 1030: {m_ref_earn_cnt6 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SpdrParentOrder {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrParentOrder_PKey;
        using sys_environment = spiderrock::protobuf::api::sys_environment;
        using run_status = spiderrock::protobuf::api::run_status;
        using spdr_action_type = spiderrock::protobuf::api::spdr_action_type;
        using parent_shape = spiderrock::protobuf::api::parent_shape;
        using client_seq_num_in = spiderrock::protobuf::api::client_seq_num_in;
        using alt_order_id = spiderrock::protobuf::api::alt_order_id;
        using alt_prev_order_id = spiderrock::protobuf::api::alt_prev_order_id;
        using alt_auto_hedge_id = spiderrock::protobuf::api::alt_auto_hedge_id;
        using alt_accnt = spiderrock::protobuf::api::alt_accnt;
        using alt_user_name = spiderrock::protobuf::api::alt_user_name;
        using src_routing_code = spiderrock::protobuf::api::src_routing_code;
        using package_id = spiderrock::protobuf::api::package_id;
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using security_desc = spiderrock::protobuf::api::security_desc;
        using accnt = spiderrock::protobuf::api::accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using spdr_source = spiderrock::protobuf::api::spdr_source;
        using grouping_code = spiderrock::protobuf::api::grouping_code;
        using exec_brkr_code = spiderrock::protobuf::api::exec_brkr_code;
        using extern_ex_dest = spiderrock::protobuf::api::extern_ex_dest;
        using extern_params = spiderrock::protobuf::api::extern_params;
        using strategy = spiderrock::protobuf::api::strategy;
        using user_name = spiderrock::protobuf::api::user_name;
        using user_source = spiderrock::protobuf::api::user_source;
        using order_dttm = spiderrock::protobuf::api::order_dttm;
        using order_side = spiderrock::protobuf::api::order_side;
        using order_size = spiderrock::protobuf::api::order_size;
        using order_active_size = spiderrock::protobuf::api::order_active_size;
        using cur_cum_fill_quantity = spiderrock::protobuf::api::cur_cum_fill_quantity;
        using add_cum_fill_quantity = spiderrock::protobuf::api::add_cum_fill_quantity;
        using max_exposure_size = spiderrock::protobuf::api::max_exposure_size;
        using num_make_exchanges = spiderrock::protobuf::api::num_make_exchanges;
        using public_size = spiderrock::protobuf::api::public_size;
        using can_overlap_cxl_repl = spiderrock::protobuf::api::can_overlap_cxl_repl;
        using progress_rule = spiderrock::protobuf::api::progress_rule;
        using block_visibility = spiderrock::protobuf::api::block_visibility;
        using progress_slice_cnt = spiderrock::protobuf::api::progress_slice_cnt;
        using progress_expose_time = spiderrock::protobuf::api::progress_expose_time;
        using vwap_participation = spiderrock::protobuf::api::vwap_participation;
        using min_mkt_on_close_pct = spiderrock::protobuf::api::min_mkt_on_close_pct;
        using trigger_type = spiderrock::protobuf::api::trigger_type;
        using trigger_level = spiderrock::protobuf::api::trigger_level;
        using auction_responder = spiderrock::protobuf::api::auction_responder;
        using max_make_exch_fee = spiderrock::protobuf::api::max_make_exch_fee;
        using max_take_exch_fee = spiderrock::protobuf::api::max_take_exch_fee;
        using inc_take_exch_fee = spiderrock::protobuf::api::inc_take_exch_fee;
        using inc_make_exch_fee = spiderrock::protobuf::api::inc_make_exch_fee;
        using make_exch_rule = spiderrock::protobuf::api::make_exch_rule;
        using cxl_uprc_range = spiderrock::protobuf::api::cxl_uprc_range;
        using min_ubid = spiderrock::protobuf::api::min_ubid;
        using max_uask = spiderrock::protobuf::api::max_uask;
        using min_max_type = spiderrock::protobuf::api::min_max_type;
        using min_option_px = spiderrock::protobuf::api::min_option_px;
        using max_child_orders = spiderrock::protobuf::api::max_child_orders;
        using exch_mask = spiderrock::protobuf::api::exch_mask;
        using spdr_stage_type = spiderrock::protobuf::api::spdr_stage_type;
        using market_session = spiderrock::protobuf::api::market_session;
        using start_dttm = spiderrock::protobuf::api::start_dttm;
        using order_duration = spiderrock::protobuf::api::order_duration;
        using active_duration = spiderrock::protobuf::api::active_duration;
        using good_till_dttm = spiderrock::protobuf::api::good_till_dttm;
        using start_type = spiderrock::protobuf::api::start_type;
        using trigger_group_id = spiderrock::protobuf::api::trigger_group_id;
        using trigger_timestamp = spiderrock::protobuf::api::trigger_timestamp;
        using parent_order_handling = spiderrock::protobuf::api::parent_order_handling;
        using parent_balance_handling = spiderrock::protobuf::api::parent_balance_handling;
        using order_limit_type = spiderrock::protobuf::api::order_limit_type;
        using take_limit_class = spiderrock::protobuf::api::take_limit_class;
        using make_limit_class = spiderrock::protobuf::api::make_limit_class;
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
        using state_model = spiderrock::protobuf::api::state_model;
        using u_state_model = spiderrock::protobuf::api::u_state_model;
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
        using auto_hedge = spiderrock::protobuf::api::auto_hedge;
        using hedge_instrument = spiderrock::protobuf::api::hedge_instrument;
        using hedge_sec_key = spiderrock::protobuf::api::hedge_sec_key;
        using hedge_beta_ratio = spiderrock::protobuf::api::hedge_beta_ratio;
        using hedge_scope = spiderrock::protobuf::api::hedge_scope;
        using hedge_session = spiderrock::protobuf::api::hedge_session;
        using extern_hedge_ex_dest = spiderrock::protobuf::api::extern_hedge_ex_dest;
        using extern_hedge_params = spiderrock::protobuf::api::extern_hedge_params;
        using firm_type = spiderrock::protobuf::api::firm_type;
        using order_capacity = spiderrock::protobuf::api::order_capacity;
        using position_type = spiderrock::protobuf::api::position_type__PositionType;
        using ssale_flag = spiderrock::protobuf::api::ssale_flag;
        using locate_firm = spiderrock::protobuf::api::locate_firm;
        using locate_pool = spiderrock::protobuf::api::locate_pool;
        using no_cross_group = spiderrock::protobuf::api::no_cross_group;
        using exch_trader_id = spiderrock::protobuf::api::exch_trader_id;
        using large_trader_id = spiderrock::protobuf::api::large_trader_id;
        using trading_location = spiderrock::protobuf::api::trading_location;
        using lead_side = spiderrock::protobuf::api::lead_side;
        using max_completion_slippage = spiderrock::protobuf::api::max_completion_slippage;
        using order_ref_premium = spiderrock::protobuf::api::order_ref_premium;
        using notice_number = spiderrock::protobuf::api::notice_number;
        using theo_vol = spiderrock::protobuf::api::theo_vol;
        using cl_arrive_mark = spiderrock::protobuf::api::cl_arrive_mark;
        using risk_group_id = spiderrock::protobuf::api::risk_group_id;
        using req_aux_risk_group_ctrl = spiderrock::protobuf::api::req_aux_risk_group_ctrl;
        using ref_rmetric1_src = spiderrock::protobuf::api::ref_rmetric1_src;
        using ref_rmetric2_src = spiderrock::protobuf::api::ref_rmetric2_src;
        using ref_rmetric3_src = spiderrock::protobuf::api::ref_rmetric3_src;
        using ref_rmetric4_src = spiderrock::protobuf::api::ref_rmetric4_src;
        using ref_rmetric5_src = spiderrock::protobuf::api::ref_rmetric5_src;
        using ref_rmetric6_src = spiderrock::protobuf::api::ref_rmetric6_src;
        using ref_rmetric7_src = spiderrock::protobuf::api::ref_rmetric7_src;
        using order_ref_rmetric1 = spiderrock::protobuf::api::order_ref_rmetric1;
        using order_ref_rmetric2 = spiderrock::protobuf::api::order_ref_rmetric2;
        using order_ref_rmetric3 = spiderrock::protobuf::api::order_ref_rmetric3;
        using order_ref_rmetric4 = spiderrock::protobuf::api::order_ref_rmetric4;
        using order_ref_rmetric5 = spiderrock::protobuf::api::order_ref_rmetric5;
        using order_ref_rmetric6 = spiderrock::protobuf::api::order_ref_rmetric6;
        using order_ref_rmetric7 = spiderrock::protobuf::api::order_ref_rmetric7;
        using exp_day_wt_vega_offset = spiderrock::protobuf::api::exp_day_wt_vega_offset;
        using max_exp_day_wt_vega_ln = spiderrock::protobuf::api::max_exp_day_wt_vega_ln;
        using max_exp_day_wt_vega_sh = spiderrock::protobuf::api::max_exp_day_wt_vega_sh;
        using max_exp_day_rmetric6_ln = spiderrock::protobuf::api::max_exp_day_rmetric6_ln;
        using max_exp_day_rmetric6_sh = spiderrock::protobuf::api::max_exp_day_rmetric6_sh;
        using sym_day_ddelta_offset = spiderrock::protobuf::api::sym_day_ddelta_offset;
        using max_sym_day_ddelta_ln = spiderrock::protobuf::api::max_sym_day_ddelta_ln;
        using max_sym_day_ddelta_sh = spiderrock::protobuf::api::max_sym_day_ddelta_sh;
        using sym_day_vega_offset = spiderrock::protobuf::api::sym_day_vega_offset;
        using max_sym_day_vega_ln = spiderrock::protobuf::api::max_sym_day_vega_ln;
        using max_sym_day_vega_sh = spiderrock::protobuf::api::max_sym_day_vega_sh;
        using sym_day_wt_vega_offset = spiderrock::protobuf::api::sym_day_wt_vega_offset;
        using max_sym_day_wt_vega_ln = spiderrock::protobuf::api::max_sym_day_wt_vega_ln;
        using max_sym_day_wt_vega_sh = spiderrock::protobuf::api::max_sym_day_wt_vega_sh;
        using max_sym_day_rmetric7_ln = spiderrock::protobuf::api::max_sym_day_rmetric7_ln;
        using max_sym_day_rmetric7_sh = spiderrock::protobuf::api::max_sym_day_rmetric7_sh;
        using max_grp_day_ddelta_ln = spiderrock::protobuf::api::max_grp_day_ddelta_ln;
        using max_grp_day_ddelta_sh = spiderrock::protobuf::api::max_grp_day_ddelta_sh;
        using max_grp_day_vega_ln = spiderrock::protobuf::api::max_grp_day_vega_ln;
        using max_grp_day_vega_sh = spiderrock::protobuf::api::max_grp_day_vega_sh;
        using max_grp_day_vega_abs = spiderrock::protobuf::api::max_grp_day_vega_abs;
        using grp_day_vega_ratio = spiderrock::protobuf::api::grp_day_vega_ratio;
        using max_grp_day_contracts_ln = spiderrock::protobuf::api::max_grp_day_contracts_ln;
        using max_grp_day_contracts_sh = spiderrock::protobuf::api::max_grp_day_contracts_sh;
        using max_grp_day_contracts_abs = spiderrock::protobuf::api::max_grp_day_contracts_abs;
        using max_grp_day_rmetric1_ln = spiderrock::protobuf::api::max_grp_day_rmetric1_ln;
        using max_grp_day_rmetric1_sh = spiderrock::protobuf::api::max_grp_day_rmetric1_sh;
        using max_grp_day_rmetric1_abs = spiderrock::protobuf::api::max_grp_day_rmetric1_abs;
        using grp_day_rmetric1_ratio = spiderrock::protobuf::api::grp_day_rmetric1_ratio;
        using max_grp_day_rmetric2_ln = spiderrock::protobuf::api::max_grp_day_rmetric2_ln;
        using max_grp_day_rmetric2_sh = spiderrock::protobuf::api::max_grp_day_rmetric2_sh;
        using max_grp_day_rmetric3_ln = spiderrock::protobuf::api::max_grp_day_rmetric3_ln;
        using max_grp_day_rmetric3_sh = spiderrock::protobuf::api::max_grp_day_rmetric3_sh;
        using max_grp_day_rmetric4_ln = spiderrock::protobuf::api::max_grp_day_rmetric4_ln;
        using max_grp_day_rmetric4_sh = spiderrock::protobuf::api::max_grp_day_rmetric4_sh;
        using max_grp_day_rmetric5_ln = spiderrock::protobuf::api::max_grp_day_rmetric5_ln;
        using max_grp_day_rmetric5_sh = spiderrock::protobuf::api::max_grp_day_rmetric5_sh;
        using sym_ema_cxl_ddelta_ln = spiderrock::protobuf::api::sym_ema_cxl_ddelta_ln;
        using sym_ema_cxl_ddelta_sh = spiderrock::protobuf::api::sym_ema_cxl_ddelta_sh;
        using sym_ema_cxl_wt_vega_ln = spiderrock::protobuf::api::sym_ema_cxl_wt_vega_ln;
        using sym_ema_cxl_wt_vega_sh = spiderrock::protobuf::api::sym_ema_cxl_wt_vega_sh;
        using last_fill_dttm = spiderrock::protobuf::api::last_fill_dttm;
        using user_data1 = spiderrock::protobuf::api::user_data1;
        using user_data2 = spiderrock::protobuf::api::user_data2;
        using child_data = spiderrock::protobuf::api::child_data;
        using src_timestamp = spiderrock::protobuf::api::src_timestamp;
        using sgw_timestamp = spiderrock::protobuf::api::sgw_timestamp;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using include_srnetwork = spiderrock::protobuf::api::include_srnetwork;
        using directed_counter_party = spiderrock::protobuf::api::SpdrParentOrder_DirectedCounterParty;
        using order_legs = spiderrock::protobuf::api::SpdrParentOrder_OrderLegs;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        sys_environment m_sys_environment{};
        run_status m_run_status{};
        spdr_action_type m_spdr_action_type{};
        parent_shape m_parent_shape{};
        client_seq_num_in m_client_seq_num_in{};
        alt_order_id m_alt_order_id{};
        alt_prev_order_id m_alt_prev_order_id{};
        alt_auto_hedge_id m_alt_auto_hedge_id{};
        alt_accnt m_alt_accnt{};
        alt_user_name m_alt_user_name{};
        src_routing_code m_src_routing_code{};
        package_id m_package_id{};
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        security_desc m_security_desc{};
        accnt m_accnt{};
        client_firm m_client_firm{};
        spdr_source m_spdr_source{};
        grouping_code m_grouping_code{};
        exec_brkr_code m_exec_brkr_code{};
        extern_ex_dest m_extern_ex_dest{};
        extern_params m_extern_params{};
        strategy m_strategy{};
        user_name m_user_name{};
        user_source m_user_source{};
        order_dttm m_order_dttm{};
        order_side m_order_side{};
        order_size m_order_size{};
        order_active_size m_order_active_size{};
        cur_cum_fill_quantity m_cur_cum_fill_quantity{};
        add_cum_fill_quantity m_add_cum_fill_quantity{};
        max_exposure_size m_max_exposure_size{};
        num_make_exchanges m_num_make_exchanges{};
        public_size m_public_size{};
        can_overlap_cxl_repl m_can_overlap_cxl_repl{};
        progress_rule m_progress_rule{};
        block_visibility m_block_visibility{};
        progress_slice_cnt m_progress_slice_cnt{};
        progress_expose_time m_progress_expose_time{};
        vwap_participation m_vwap_participation{};
        min_mkt_on_close_pct m_min_mkt_on_close_pct{};
        trigger_type m_trigger_type{};
        trigger_level m_trigger_level{};
        auction_responder m_auction_responder{};
        max_make_exch_fee m_max_make_exch_fee{};
        max_take_exch_fee m_max_take_exch_fee{};
        inc_take_exch_fee m_inc_take_exch_fee{};
        inc_make_exch_fee m_inc_make_exch_fee{};
        make_exch_rule m_make_exch_rule{};
        cxl_uprc_range m_cxl_uprc_range{};
        min_ubid m_min_ubid{};
        max_uask m_max_uask{};
        min_max_type m_min_max_type{};
        min_option_px m_min_option_px{};
        max_child_orders m_max_child_orders{};
        exch_mask m_exch_mask{};
        spdr_stage_type m_spdr_stage_type{};
        market_session m_market_session{};
        start_dttm m_start_dttm{};
        order_duration m_order_duration{};
        active_duration m_active_duration{};
        good_till_dttm m_good_till_dttm{};
        start_type m_start_type{};
        trigger_group_id m_trigger_group_id{};
        trigger_timestamp m_trigger_timestamp{};
        parent_order_handling m_parent_order_handling{};
        parent_balance_handling m_parent_balance_handling{};
        order_limit_type m_order_limit_type{};
        take_limit_class m_take_limit_class{};
        make_limit_class m_make_limit_class{};
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
        state_model m_state_model{};
        u_state_model m_u_state_model{};
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
        auto_hedge m_auto_hedge{};
        hedge_instrument m_hedge_instrument{};
        hedge_sec_key m_hedge_sec_key{};
        hedge_beta_ratio m_hedge_beta_ratio{};
        hedge_scope m_hedge_scope{};
        hedge_session m_hedge_session{};
        extern_hedge_ex_dest m_extern_hedge_ex_dest{};
        extern_hedge_params m_extern_hedge_params{};
        firm_type m_firm_type{};
        order_capacity m_order_capacity{};
        position_type m_position_type{};
        ssale_flag m_ssale_flag{};
        locate_firm m_locate_firm{};
        locate_pool m_locate_pool{};
        no_cross_group m_no_cross_group{};
        exch_trader_id m_exch_trader_id{};
        large_trader_id m_large_trader_id{};
        trading_location m_trading_location{};
        lead_side m_lead_side{};
        max_completion_slippage m_max_completion_slippage{};
        order_ref_premium m_order_ref_premium{};
        notice_number m_notice_number{};
        theo_vol m_theo_vol{};
        cl_arrive_mark m_cl_arrive_mark{};
        risk_group_id m_risk_group_id{};
        req_aux_risk_group_ctrl m_req_aux_risk_group_ctrl{};
        ref_rmetric1_src m_ref_rmetric1_src{};
        ref_rmetric2_src m_ref_rmetric2_src{};
        ref_rmetric3_src m_ref_rmetric3_src{};
        ref_rmetric4_src m_ref_rmetric4_src{};
        ref_rmetric5_src m_ref_rmetric5_src{};
        ref_rmetric6_src m_ref_rmetric6_src{};
        ref_rmetric7_src m_ref_rmetric7_src{};
        order_ref_rmetric1 m_order_ref_rmetric1{};
        order_ref_rmetric2 m_order_ref_rmetric2{};
        order_ref_rmetric3 m_order_ref_rmetric3{};
        order_ref_rmetric4 m_order_ref_rmetric4{};
        order_ref_rmetric5 m_order_ref_rmetric5{};
        order_ref_rmetric6 m_order_ref_rmetric6{};
        order_ref_rmetric7 m_order_ref_rmetric7{};
        exp_day_wt_vega_offset m_exp_day_wt_vega_offset{};
        max_exp_day_wt_vega_ln m_max_exp_day_wt_vega_ln{};
        max_exp_day_wt_vega_sh m_max_exp_day_wt_vega_sh{};
        max_exp_day_rmetric6_ln m_max_exp_day_rmetric6_ln{};
        max_exp_day_rmetric6_sh m_max_exp_day_rmetric6_sh{};
        sym_day_ddelta_offset m_sym_day_ddelta_offset{};
        max_sym_day_ddelta_ln m_max_sym_day_ddelta_ln{};
        max_sym_day_ddelta_sh m_max_sym_day_ddelta_sh{};
        sym_day_vega_offset m_sym_day_vega_offset{};
        max_sym_day_vega_ln m_max_sym_day_vega_ln{};
        max_sym_day_vega_sh m_max_sym_day_vega_sh{};
        sym_day_wt_vega_offset m_sym_day_wt_vega_offset{};
        max_sym_day_wt_vega_ln m_max_sym_day_wt_vega_ln{};
        max_sym_day_wt_vega_sh m_max_sym_day_wt_vega_sh{};
        max_sym_day_rmetric7_ln m_max_sym_day_rmetric7_ln{};
        max_sym_day_rmetric7_sh m_max_sym_day_rmetric7_sh{};
        max_grp_day_ddelta_ln m_max_grp_day_ddelta_ln{};
        max_grp_day_ddelta_sh m_max_grp_day_ddelta_sh{};
        max_grp_day_vega_ln m_max_grp_day_vega_ln{};
        max_grp_day_vega_sh m_max_grp_day_vega_sh{};
        max_grp_day_vega_abs m_max_grp_day_vega_abs{};
        grp_day_vega_ratio m_grp_day_vega_ratio{};
        max_grp_day_contracts_ln m_max_grp_day_contracts_ln{};
        max_grp_day_contracts_sh m_max_grp_day_contracts_sh{};
        max_grp_day_contracts_abs m_max_grp_day_contracts_abs{};
        max_grp_day_rmetric1_ln m_max_grp_day_rmetric1_ln{};
        max_grp_day_rmetric1_sh m_max_grp_day_rmetric1_sh{};
        max_grp_day_rmetric1_abs m_max_grp_day_rmetric1_abs{};
        grp_day_rmetric1_ratio m_grp_day_rmetric1_ratio{};
        max_grp_day_rmetric2_ln m_max_grp_day_rmetric2_ln{};
        max_grp_day_rmetric2_sh m_max_grp_day_rmetric2_sh{};
        max_grp_day_rmetric3_ln m_max_grp_day_rmetric3_ln{};
        max_grp_day_rmetric3_sh m_max_grp_day_rmetric3_sh{};
        max_grp_day_rmetric4_ln m_max_grp_day_rmetric4_ln{};
        max_grp_day_rmetric4_sh m_max_grp_day_rmetric4_sh{};
        max_grp_day_rmetric5_ln m_max_grp_day_rmetric5_ln{};
        max_grp_day_rmetric5_sh m_max_grp_day_rmetric5_sh{};
        sym_ema_cxl_ddelta_ln m_sym_ema_cxl_ddelta_ln{};
        sym_ema_cxl_ddelta_sh m_sym_ema_cxl_ddelta_sh{};
        sym_ema_cxl_wt_vega_ln m_sym_ema_cxl_wt_vega_ln{};
        sym_ema_cxl_wt_vega_sh m_sym_ema_cxl_wt_vega_sh{};
        last_fill_dttm m_last_fill_dttm{};
        user_data1 m_user_data1{};
        user_data2 m_user_data2{};
        child_data m_child_data{};
        src_timestamp m_src_timestamp{};
        sgw_timestamp m_sgw_timestamp{};
        timestamp m_timestamp{};
        include_srnetwork m_include_srnetwork{};
        std::vector<directed_counter_party> m_directed_counter_party{};
        std::vector<order_legs> m_order_legs{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        sys_environment get_sys_environment() const {
            return m_sys_environment;
        }		
        run_status get_run_status() const {
            return m_run_status;
        }		
        spdr_action_type get_spdr_action_type() const {
            return m_spdr_action_type;
        }		
        parent_shape get_parent_shape() const {
            return m_parent_shape;
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
        alt_auto_hedge_id get_alt_auto_hedge_id() const {
            return m_alt_auto_hedge_id;
        }		
        alt_accnt get_alt_accnt() const {
            return m_alt_accnt;
        }		
        alt_user_name get_alt_user_name() const {
            return m_alt_user_name;
        }		
        src_routing_code get_src_routing_code() const {
            return m_src_routing_code;
        }		
        package_id get_package_id() const {
            return m_package_id;
        }		
        sec_key get_sec_key() const {
            return m_sec_key;
        }		
        sec_type get_sec_type() const {
            return m_sec_type;
        }		
        security_desc get_security_desc() const {
            return m_security_desc;
        }		
        accnt get_accnt() const {
            return m_accnt;
        }		
        client_firm get_client_firm() const {
            return m_client_firm;
        }		
        spdr_source get_spdr_source() const {
            return m_spdr_source;
        }		
        grouping_code get_grouping_code() const {
            return m_grouping_code;
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
        strategy get_strategy() const {
            return m_strategy;
        }		
        user_name get_user_name() const {
            return m_user_name;
        }		
        user_source get_user_source() const {
            return m_user_source;
        }		
        order_dttm get_order_dttm() const {
            return m_order_dttm;
        }		
        order_side get_order_side() const {
            return m_order_side;
        }		
        order_size get_order_size() const {
            return m_order_size;
        }		
        order_active_size get_order_active_size() const {
            return m_order_active_size;
        }		
        cur_cum_fill_quantity get_cur_cum_fill_quantity() const {
            return m_cur_cum_fill_quantity;
        }		
        add_cum_fill_quantity get_add_cum_fill_quantity() const {
            return m_add_cum_fill_quantity;
        }		
        max_exposure_size get_max_exposure_size() const {
            return m_max_exposure_size;
        }		
        num_make_exchanges get_num_make_exchanges() const {
            return m_num_make_exchanges;
        }		
        public_size get_public_size() const {
            return m_public_size;
        }		
        can_overlap_cxl_repl get_can_overlap_cxl_repl() const {
            return m_can_overlap_cxl_repl;
        }		
        progress_rule get_progress_rule() const {
            return m_progress_rule;
        }		
        block_visibility get_block_visibility() const {
            return m_block_visibility;
        }		
        progress_slice_cnt get_progress_slice_cnt() const {
            return m_progress_slice_cnt;
        }		
        progress_expose_time get_progress_expose_time() const {
            return m_progress_expose_time;
        }		
        vwap_participation get_vwap_participation() const {
            return m_vwap_participation;
        }		
        min_mkt_on_close_pct get_min_mkt_on_close_pct() const {
            return m_min_mkt_on_close_pct;
        }		
        trigger_type get_trigger_type() const {
            return m_trigger_type;
        }		
        trigger_level get_trigger_level() const {
            return m_trigger_level;
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
        min_max_type get_min_max_type() const {
            return m_min_max_type;
        }		
        min_option_px get_min_option_px() const {
            return m_min_option_px;
        }		
        max_child_orders get_max_child_orders() const {
            return m_max_child_orders;
        }		
        exch_mask get_exch_mask() const {
            return m_exch_mask;
        }		
        spdr_stage_type get_spdr_stage_type() const {
            return m_spdr_stage_type;
        }		
        market_session get_market_session() const {
            return m_market_session;
        }		
        start_dttm get_start_dttm() const {
            return m_start_dttm;
        }		
        order_duration get_order_duration() const {
            return m_order_duration;
        }		
        active_duration get_active_duration() const {
            return m_active_duration;
        }		
        good_till_dttm get_good_till_dttm() const {
            return m_good_till_dttm;
        }		
        start_type get_start_type() const {
            return m_start_type;
        }		
        trigger_group_id get_trigger_group_id() const {
            return m_trigger_group_id;
        }		
        trigger_timestamp get_trigger_timestamp() const {
            return m_trigger_timestamp;
        }		
        parent_order_handling get_parent_order_handling() const {
            return m_parent_order_handling;
        }		
        parent_balance_handling get_parent_balance_handling() const {
            return m_parent_balance_handling;
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
        state_model get_state_model() const {
            return m_state_model;
        }		
        u_state_model get_u_state_model() const {
            return m_u_state_model;
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
        extern_hedge_ex_dest get_extern_hedge_ex_dest() const {
            return m_extern_hedge_ex_dest;
        }		
        extern_hedge_params get_extern_hedge_params() const {
            return m_extern_hedge_params;
        }		
        firm_type get_firm_type() const {
            return m_firm_type;
        }		
        order_capacity get_order_capacity() const {
            return m_order_capacity;
        }		
        position_type get_position_type() const {
            return m_position_type;
        }		
        ssale_flag get_ssale_flag() const {
            return m_ssale_flag;
        }		
        locate_firm get_locate_firm() const {
            return m_locate_firm;
        }		
        locate_pool get_locate_pool() const {
            return m_locate_pool;
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
        lead_side get_lead_side() const {
            return m_lead_side;
        }		
        max_completion_slippage get_max_completion_slippage() const {
            return m_max_completion_slippage;
        }		
        order_ref_premium get_order_ref_premium() const {
            return m_order_ref_premium;
        }		
        notice_number get_notice_number() const {
            return m_notice_number;
        }		
        theo_vol get_theo_vol() const {
            return m_theo_vol;
        }		
        cl_arrive_mark get_cl_arrive_mark() const {
            return m_cl_arrive_mark;
        }		
        risk_group_id get_risk_group_id() const {
            return m_risk_group_id;
        }		
        req_aux_risk_group_ctrl get_req_aux_risk_group_ctrl() const {
            return m_req_aux_risk_group_ctrl;
        }		
        ref_rmetric1_src get_ref_rmetric1_src() const {
            return m_ref_rmetric1_src;
        }		
        ref_rmetric2_src get_ref_rmetric2_src() const {
            return m_ref_rmetric2_src;
        }		
        ref_rmetric3_src get_ref_rmetric3_src() const {
            return m_ref_rmetric3_src;
        }		
        ref_rmetric4_src get_ref_rmetric4_src() const {
            return m_ref_rmetric4_src;
        }		
        ref_rmetric5_src get_ref_rmetric5_src() const {
            return m_ref_rmetric5_src;
        }		
        ref_rmetric6_src get_ref_rmetric6_src() const {
            return m_ref_rmetric6_src;
        }		
        ref_rmetric7_src get_ref_rmetric7_src() const {
            return m_ref_rmetric7_src;
        }		
        order_ref_rmetric1 get_order_ref_rmetric1() const {
            return m_order_ref_rmetric1;
        }		
        order_ref_rmetric2 get_order_ref_rmetric2() const {
            return m_order_ref_rmetric2;
        }		
        order_ref_rmetric3 get_order_ref_rmetric3() const {
            return m_order_ref_rmetric3;
        }		
        order_ref_rmetric4 get_order_ref_rmetric4() const {
            return m_order_ref_rmetric4;
        }		
        order_ref_rmetric5 get_order_ref_rmetric5() const {
            return m_order_ref_rmetric5;
        }		
        order_ref_rmetric6 get_order_ref_rmetric6() const {
            return m_order_ref_rmetric6;
        }		
        order_ref_rmetric7 get_order_ref_rmetric7() const {
            return m_order_ref_rmetric7;
        }		
        exp_day_wt_vega_offset get_exp_day_wt_vega_offset() const {
            return m_exp_day_wt_vega_offset;
        }		
        max_exp_day_wt_vega_ln get_max_exp_day_wt_vega_ln() const {
            return m_max_exp_day_wt_vega_ln;
        }		
        max_exp_day_wt_vega_sh get_max_exp_day_wt_vega_sh() const {
            return m_max_exp_day_wt_vega_sh;
        }		
        max_exp_day_rmetric6_ln get_max_exp_day_rmetric6_ln() const {
            return m_max_exp_day_rmetric6_ln;
        }		
        max_exp_day_rmetric6_sh get_max_exp_day_rmetric6_sh() const {
            return m_max_exp_day_rmetric6_sh;
        }		
        sym_day_ddelta_offset get_sym_day_ddelta_offset() const {
            return m_sym_day_ddelta_offset;
        }		
        max_sym_day_ddelta_ln get_max_sym_day_ddelta_ln() const {
            return m_max_sym_day_ddelta_ln;
        }		
        max_sym_day_ddelta_sh get_max_sym_day_ddelta_sh() const {
            return m_max_sym_day_ddelta_sh;
        }		
        sym_day_vega_offset get_sym_day_vega_offset() const {
            return m_sym_day_vega_offset;
        }		
        max_sym_day_vega_ln get_max_sym_day_vega_ln() const {
            return m_max_sym_day_vega_ln;
        }		
        max_sym_day_vega_sh get_max_sym_day_vega_sh() const {
            return m_max_sym_day_vega_sh;
        }		
        sym_day_wt_vega_offset get_sym_day_wt_vega_offset() const {
            return m_sym_day_wt_vega_offset;
        }		
        max_sym_day_wt_vega_ln get_max_sym_day_wt_vega_ln() const {
            return m_max_sym_day_wt_vega_ln;
        }		
        max_sym_day_wt_vega_sh get_max_sym_day_wt_vega_sh() const {
            return m_max_sym_day_wt_vega_sh;
        }		
        max_sym_day_rmetric7_ln get_max_sym_day_rmetric7_ln() const {
            return m_max_sym_day_rmetric7_ln;
        }		
        max_sym_day_rmetric7_sh get_max_sym_day_rmetric7_sh() const {
            return m_max_sym_day_rmetric7_sh;
        }		
        max_grp_day_ddelta_ln get_max_grp_day_ddelta_ln() const {
            return m_max_grp_day_ddelta_ln;
        }		
        max_grp_day_ddelta_sh get_max_grp_day_ddelta_sh() const {
            return m_max_grp_day_ddelta_sh;
        }		
        max_grp_day_vega_ln get_max_grp_day_vega_ln() const {
            return m_max_grp_day_vega_ln;
        }		
        max_grp_day_vega_sh get_max_grp_day_vega_sh() const {
            return m_max_grp_day_vega_sh;
        }		
        max_grp_day_vega_abs get_max_grp_day_vega_abs() const {
            return m_max_grp_day_vega_abs;
        }		
        grp_day_vega_ratio get_grp_day_vega_ratio() const {
            return m_grp_day_vega_ratio;
        }		
        max_grp_day_contracts_ln get_max_grp_day_contracts_ln() const {
            return m_max_grp_day_contracts_ln;
        }		
        max_grp_day_contracts_sh get_max_grp_day_contracts_sh() const {
            return m_max_grp_day_contracts_sh;
        }		
        max_grp_day_contracts_abs get_max_grp_day_contracts_abs() const {
            return m_max_grp_day_contracts_abs;
        }		
        max_grp_day_rmetric1_ln get_max_grp_day_rmetric1_ln() const {
            return m_max_grp_day_rmetric1_ln;
        }		
        max_grp_day_rmetric1_sh get_max_grp_day_rmetric1_sh() const {
            return m_max_grp_day_rmetric1_sh;
        }		
        max_grp_day_rmetric1_abs get_max_grp_day_rmetric1_abs() const {
            return m_max_grp_day_rmetric1_abs;
        }		
        grp_day_rmetric1_ratio get_grp_day_rmetric1_ratio() const {
            return m_grp_day_rmetric1_ratio;
        }		
        max_grp_day_rmetric2_ln get_max_grp_day_rmetric2_ln() const {
            return m_max_grp_day_rmetric2_ln;
        }		
        max_grp_day_rmetric2_sh get_max_grp_day_rmetric2_sh() const {
            return m_max_grp_day_rmetric2_sh;
        }		
        max_grp_day_rmetric3_ln get_max_grp_day_rmetric3_ln() const {
            return m_max_grp_day_rmetric3_ln;
        }		
        max_grp_day_rmetric3_sh get_max_grp_day_rmetric3_sh() const {
            return m_max_grp_day_rmetric3_sh;
        }		
        max_grp_day_rmetric4_ln get_max_grp_day_rmetric4_ln() const {
            return m_max_grp_day_rmetric4_ln;
        }		
        max_grp_day_rmetric4_sh get_max_grp_day_rmetric4_sh() const {
            return m_max_grp_day_rmetric4_sh;
        }		
        max_grp_day_rmetric5_ln get_max_grp_day_rmetric5_ln() const {
            return m_max_grp_day_rmetric5_ln;
        }		
        max_grp_day_rmetric5_sh get_max_grp_day_rmetric5_sh() const {
            return m_max_grp_day_rmetric5_sh;
        }		
        sym_ema_cxl_ddelta_ln get_sym_ema_cxl_ddelta_ln() const {
            return m_sym_ema_cxl_ddelta_ln;
        }		
        sym_ema_cxl_ddelta_sh get_sym_ema_cxl_ddelta_sh() const {
            return m_sym_ema_cxl_ddelta_sh;
        }		
        sym_ema_cxl_wt_vega_ln get_sym_ema_cxl_wt_vega_ln() const {
            return m_sym_ema_cxl_wt_vega_ln;
        }		
        sym_ema_cxl_wt_vega_sh get_sym_ema_cxl_wt_vega_sh() const {
            return m_sym_ema_cxl_wt_vega_sh;
        }		
        last_fill_dttm get_last_fill_dttm() const {
            return m_last_fill_dttm;
        }		
        user_data1 get_user_data1() const {
            return m_user_data1;
        }		
        user_data2 get_user_data2() const {
            return m_user_data2;
        }		
        child_data get_child_data() const {
            return m_child_data;
        }		
        src_timestamp get_src_timestamp() const {
            return m_src_timestamp;
        }		
        sgw_timestamp get_sgw_timestamp() const {
            return m_sgw_timestamp;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }		
        include_srnetwork get_include_srnetwork() const {
            return m_include_srnetwork;
        }
        const std::vector<directed_counter_party>& get_directed_counter_party_list() const {
            return m_directed_counter_party;
        }
        const directed_counter_party& get_directed_counter_party(const int i) const {
            return m_directed_counter_party.at(i);
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
        void set_sys_environment(const sys_environment& value)  {
            m_sys_environment = value;
        }
        void set_run_status(const run_status& value)  {
            m_run_status = value;
        }
        void set_spdr_action_type(const spdr_action_type& value)  {
            m_spdr_action_type = value;
        }
        void set_parent_shape(const parent_shape& value)  {
            m_parent_shape = value;
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
        void set_alt_auto_hedge_id(const alt_auto_hedge_id& value)  {
            m_alt_auto_hedge_id = value;
        }
        void set_alt_accnt(const alt_accnt& value)  {
            m_alt_accnt = value;
        }
        void set_alt_user_name(const alt_user_name& value)  {
            m_alt_user_name = value;
        }
        void set_src_routing_code(const src_routing_code& value)  {
            m_src_routing_code = value;
        }
        void set_package_id(const package_id& value)  {
            m_package_id = value;
        }
        void set_sec_key(const sec_key& value)  {
            m_sec_key = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        void set_security_desc(const security_desc& value)  {
            m_security_desc = value;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_spdr_source(const spdr_source& value)  {
            m_spdr_source = value;
        }
        void set_grouping_code(const grouping_code& value)  {
            m_grouping_code = value;
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
        void set_strategy(const strategy& value)  {
            m_strategy = value;
        }
        void set_user_name(const user_name& value)  {
            m_user_name = value;
        }
        void set_user_source(const user_source& value)  {
            m_user_source = value;
        }
        void set_order_dttm(const order_dttm& value)  {
            m_order_dttm = value;
        }
        void set_order_side(const order_side& value)  {
            m_order_side = value;
        }
        void set_order_size(const order_size& value)  {
            m_order_size = value;
        }
        void set_order_active_size(const order_active_size& value)  {
            m_order_active_size = value;
        }
        void set_cur_cum_fill_quantity(const cur_cum_fill_quantity& value)  {
            m_cur_cum_fill_quantity = value;
        }
        void set_add_cum_fill_quantity(const add_cum_fill_quantity& value)  {
            m_add_cum_fill_quantity = value;
        }
        void set_max_exposure_size(const max_exposure_size& value)  {
            m_max_exposure_size = value;
        }
        void set_num_make_exchanges(const num_make_exchanges& value)  {
            m_num_make_exchanges = value;
        }
        void set_public_size(const public_size& value)  {
            m_public_size = value;
        }
        void set_can_overlap_cxl_repl(const can_overlap_cxl_repl& value)  {
            m_can_overlap_cxl_repl = value;
        }
        void set_progress_rule(const progress_rule& value)  {
            m_progress_rule = value;
        }
        void set_block_visibility(const block_visibility& value)  {
            m_block_visibility = value;
        }
        void set_progress_slice_cnt(const progress_slice_cnt& value)  {
            m_progress_slice_cnt = value;
        }
        void set_progress_expose_time(const progress_expose_time& value)  {
            m_progress_expose_time = value;
        }
        void set_vwap_participation(const vwap_participation& value)  {
            m_vwap_participation = value;
        }
        void set_min_mkt_on_close_pct(const min_mkt_on_close_pct& value)  {
            m_min_mkt_on_close_pct = value;
        }
        void set_trigger_type(const trigger_type& value)  {
            m_trigger_type = value;
        }
        void set_trigger_level(const trigger_level& value)  {
            m_trigger_level = value;
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
        void set_min_max_type(const min_max_type& value)  {
            m_min_max_type = value;
        }
        void set_min_option_px(const min_option_px& value)  {
            m_min_option_px = value;
        }
        void set_max_child_orders(const max_child_orders& value)  {
            m_max_child_orders = value;
        }
        void set_exch_mask(const exch_mask& value)  {
            m_exch_mask = value;
        }
        void set_spdr_stage_type(const spdr_stage_type& value)  {
            m_spdr_stage_type = value;
        }
        void set_market_session(const market_session& value)  {
            m_market_session = value;
        }
        void set_start_dttm(const start_dttm& value)  {
            m_start_dttm = value;
        }
        void set_order_duration(const order_duration& value)  {
            m_order_duration = value;
        }
        void set_active_duration(const active_duration& value)  {
            m_active_duration = value;
        }
        void set_good_till_dttm(const good_till_dttm& value)  {
            m_good_till_dttm = value;
        }
        void set_start_type(const start_type& value)  {
            m_start_type = value;
        }
        void set_trigger_group_id(const trigger_group_id& value)  {
            m_trigger_group_id = value;
        }
        void set_trigger_timestamp(const trigger_timestamp& value)  {
            m_trigger_timestamp = value;
        }
        void set_parent_order_handling(const parent_order_handling& value)  {
            m_parent_order_handling = value;
        }
        void set_parent_balance_handling(const parent_balance_handling& value)  {
            m_parent_balance_handling = value;
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
        void set_state_model(const state_model& value)  {
            m_state_model = value;
        }
        void set_u_state_model(const u_state_model& value)  {
            m_u_state_model = value;
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
        void set_extern_hedge_ex_dest(const extern_hedge_ex_dest& value)  {
            m_extern_hedge_ex_dest = value;
        }
        void set_extern_hedge_params(const extern_hedge_params& value)  {
            m_extern_hedge_params = value;
        }
        void set_firm_type(const firm_type& value)  {
            m_firm_type = value;
        }
        void set_order_capacity(const order_capacity& value)  {
            m_order_capacity = value;
        }
        void set_position_type(const position_type& value)  {
            m_position_type = value;
        }
        void set_ssale_flag(const ssale_flag& value)  {
            m_ssale_flag = value;
        }
        void set_locate_firm(const locate_firm& value)  {
            m_locate_firm = value;
        }
        void set_locate_pool(const locate_pool& value)  {
            m_locate_pool = value;
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
        void set_lead_side(const lead_side& value)  {
            m_lead_side = value;
        }
        void set_max_completion_slippage(const max_completion_slippage& value)  {
            m_max_completion_slippage = value;
        }
        void set_order_ref_premium(const order_ref_premium& value)  {
            m_order_ref_premium = value;
        }
        void set_notice_number(const notice_number& value)  {
            m_notice_number = value;
        }
        void set_theo_vol(const theo_vol& value)  {
            m_theo_vol = value;
        }
        void set_cl_arrive_mark(const cl_arrive_mark& value)  {
            m_cl_arrive_mark = value;
        }
        void set_risk_group_id(const risk_group_id& value)  {
            m_risk_group_id = value;
        }
        void set_req_aux_risk_group_ctrl(const req_aux_risk_group_ctrl& value)  {
            m_req_aux_risk_group_ctrl = value;
        }
        void set_ref_rmetric1_src(const ref_rmetric1_src& value)  {
            m_ref_rmetric1_src = value;
        }
        void set_ref_rmetric2_src(const ref_rmetric2_src& value)  {
            m_ref_rmetric2_src = value;
        }
        void set_ref_rmetric3_src(const ref_rmetric3_src& value)  {
            m_ref_rmetric3_src = value;
        }
        void set_ref_rmetric4_src(const ref_rmetric4_src& value)  {
            m_ref_rmetric4_src = value;
        }
        void set_ref_rmetric5_src(const ref_rmetric5_src& value)  {
            m_ref_rmetric5_src = value;
        }
        void set_ref_rmetric6_src(const ref_rmetric6_src& value)  {
            m_ref_rmetric6_src = value;
        }
        void set_ref_rmetric7_src(const ref_rmetric7_src& value)  {
            m_ref_rmetric7_src = value;
        }
        void set_order_ref_rmetric1(const order_ref_rmetric1& value)  {
            m_order_ref_rmetric1 = value;
        }
        void set_order_ref_rmetric2(const order_ref_rmetric2& value)  {
            m_order_ref_rmetric2 = value;
        }
        void set_order_ref_rmetric3(const order_ref_rmetric3& value)  {
            m_order_ref_rmetric3 = value;
        }
        void set_order_ref_rmetric4(const order_ref_rmetric4& value)  {
            m_order_ref_rmetric4 = value;
        }
        void set_order_ref_rmetric5(const order_ref_rmetric5& value)  {
            m_order_ref_rmetric5 = value;
        }
        void set_order_ref_rmetric6(const order_ref_rmetric6& value)  {
            m_order_ref_rmetric6 = value;
        }
        void set_order_ref_rmetric7(const order_ref_rmetric7& value)  {
            m_order_ref_rmetric7 = value;
        }
        void set_exp_day_wt_vega_offset(const exp_day_wt_vega_offset& value)  {
            m_exp_day_wt_vega_offset = value;
        }
        void set_max_exp_day_wt_vega_ln(const max_exp_day_wt_vega_ln& value)  {
            m_max_exp_day_wt_vega_ln = value;
        }
        void set_max_exp_day_wt_vega_sh(const max_exp_day_wt_vega_sh& value)  {
            m_max_exp_day_wt_vega_sh = value;
        }
        void set_max_exp_day_rmetric6_ln(const max_exp_day_rmetric6_ln& value)  {
            m_max_exp_day_rmetric6_ln = value;
        }
        void set_max_exp_day_rmetric6_sh(const max_exp_day_rmetric6_sh& value)  {
            m_max_exp_day_rmetric6_sh = value;
        }
        void set_sym_day_ddelta_offset(const sym_day_ddelta_offset& value)  {
            m_sym_day_ddelta_offset = value;
        }
        void set_max_sym_day_ddelta_ln(const max_sym_day_ddelta_ln& value)  {
            m_max_sym_day_ddelta_ln = value;
        }
        void set_max_sym_day_ddelta_sh(const max_sym_day_ddelta_sh& value)  {
            m_max_sym_day_ddelta_sh = value;
        }
        void set_sym_day_vega_offset(const sym_day_vega_offset& value)  {
            m_sym_day_vega_offset = value;
        }
        void set_max_sym_day_vega_ln(const max_sym_day_vega_ln& value)  {
            m_max_sym_day_vega_ln = value;
        }
        void set_max_sym_day_vega_sh(const max_sym_day_vega_sh& value)  {
            m_max_sym_day_vega_sh = value;
        }
        void set_sym_day_wt_vega_offset(const sym_day_wt_vega_offset& value)  {
            m_sym_day_wt_vega_offset = value;
        }
        void set_max_sym_day_wt_vega_ln(const max_sym_day_wt_vega_ln& value)  {
            m_max_sym_day_wt_vega_ln = value;
        }
        void set_max_sym_day_wt_vega_sh(const max_sym_day_wt_vega_sh& value)  {
            m_max_sym_day_wt_vega_sh = value;
        }
        void set_max_sym_day_rmetric7_ln(const max_sym_day_rmetric7_ln& value)  {
            m_max_sym_day_rmetric7_ln = value;
        }
        void set_max_sym_day_rmetric7_sh(const max_sym_day_rmetric7_sh& value)  {
            m_max_sym_day_rmetric7_sh = value;
        }
        void set_max_grp_day_ddelta_ln(const max_grp_day_ddelta_ln& value)  {
            m_max_grp_day_ddelta_ln = value;
        }
        void set_max_grp_day_ddelta_sh(const max_grp_day_ddelta_sh& value)  {
            m_max_grp_day_ddelta_sh = value;
        }
        void set_max_grp_day_vega_ln(const max_grp_day_vega_ln& value)  {
            m_max_grp_day_vega_ln = value;
        }
        void set_max_grp_day_vega_sh(const max_grp_day_vega_sh& value)  {
            m_max_grp_day_vega_sh = value;
        }
        void set_max_grp_day_vega_abs(const max_grp_day_vega_abs& value)  {
            m_max_grp_day_vega_abs = value;
        }
        void set_grp_day_vega_ratio(const grp_day_vega_ratio& value)  {
            m_grp_day_vega_ratio = value;
        }
        void set_max_grp_day_contracts_ln(const max_grp_day_contracts_ln& value)  {
            m_max_grp_day_contracts_ln = value;
        }
        void set_max_grp_day_contracts_sh(const max_grp_day_contracts_sh& value)  {
            m_max_grp_day_contracts_sh = value;
        }
        void set_max_grp_day_contracts_abs(const max_grp_day_contracts_abs& value)  {
            m_max_grp_day_contracts_abs = value;
        }
        void set_max_grp_day_rmetric1_ln(const max_grp_day_rmetric1_ln& value)  {
            m_max_grp_day_rmetric1_ln = value;
        }
        void set_max_grp_day_rmetric1_sh(const max_grp_day_rmetric1_sh& value)  {
            m_max_grp_day_rmetric1_sh = value;
        }
        void set_max_grp_day_rmetric1_abs(const max_grp_day_rmetric1_abs& value)  {
            m_max_grp_day_rmetric1_abs = value;
        }
        void set_grp_day_rmetric1_ratio(const grp_day_rmetric1_ratio& value)  {
            m_grp_day_rmetric1_ratio = value;
        }
        void set_max_grp_day_rmetric2_ln(const max_grp_day_rmetric2_ln& value)  {
            m_max_grp_day_rmetric2_ln = value;
        }
        void set_max_grp_day_rmetric2_sh(const max_grp_day_rmetric2_sh& value)  {
            m_max_grp_day_rmetric2_sh = value;
        }
        void set_max_grp_day_rmetric3_ln(const max_grp_day_rmetric3_ln& value)  {
            m_max_grp_day_rmetric3_ln = value;
        }
        void set_max_grp_day_rmetric3_sh(const max_grp_day_rmetric3_sh& value)  {
            m_max_grp_day_rmetric3_sh = value;
        }
        void set_max_grp_day_rmetric4_ln(const max_grp_day_rmetric4_ln& value)  {
            m_max_grp_day_rmetric4_ln = value;
        }
        void set_max_grp_day_rmetric4_sh(const max_grp_day_rmetric4_sh& value)  {
            m_max_grp_day_rmetric4_sh = value;
        }
        void set_max_grp_day_rmetric5_ln(const max_grp_day_rmetric5_ln& value)  {
            m_max_grp_day_rmetric5_ln = value;
        }
        void set_max_grp_day_rmetric5_sh(const max_grp_day_rmetric5_sh& value)  {
            m_max_grp_day_rmetric5_sh = value;
        }
        void set_sym_ema_cxl_ddelta_ln(const sym_ema_cxl_ddelta_ln& value)  {
            m_sym_ema_cxl_ddelta_ln = value;
        }
        void set_sym_ema_cxl_ddelta_sh(const sym_ema_cxl_ddelta_sh& value)  {
            m_sym_ema_cxl_ddelta_sh = value;
        }
        void set_sym_ema_cxl_wt_vega_ln(const sym_ema_cxl_wt_vega_ln& value)  {
            m_sym_ema_cxl_wt_vega_ln = value;
        }
        void set_sym_ema_cxl_wt_vega_sh(const sym_ema_cxl_wt_vega_sh& value)  {
            m_sym_ema_cxl_wt_vega_sh = value;
        }
        void set_last_fill_dttm(const last_fill_dttm& value)  {
            m_last_fill_dttm = value;
        }
        void set_user_data1(const user_data1& value)  {
            m_user_data1 = value;
        }
        void set_user_data2(const user_data2& value)  {
            m_user_data2 = value;
        }
        void set_child_data(const child_data& value)  {
            m_child_data = value;
        }
        void set_src_timestamp(const src_timestamp& value)  {
            m_src_timestamp = value;
        }
        void set_sgw_timestamp(const sgw_timestamp& value)  {
            m_sgw_timestamp = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_include_srnetwork(const include_srnetwork& value)  {
            m_include_srnetwork = value;
        }
        void set_directed_counter_party_list(const std::vector<directed_counter_party>& list)  {
            m_directed_counter_party = list;
        }
        void add_directed_counter_party(const directed_counter_party& item) {
            m_directed_counter_party.emplace_back(item);
        }
        void set_order_legs_list(const std::vector<order_legs>& list)  {
            m_order_legs = list;
        }
        void add_order_legs(const order_legs& item) {
            m_order_legs.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentOrder::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentOrder::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentOrder::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const sys_environment & value) {
            set_sys_environment(value);
        }
        void set(const run_status & value) {
            set_run_status(value);
        }
        void set(const spdr_action_type & value) {
            set_spdr_action_type(value);
        }
        void set(const parent_shape & value) {
            set_parent_shape(value);
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
        void set(const alt_auto_hedge_id & value) {
            set_alt_auto_hedge_id(value);
        }
        void set(const alt_accnt & value) {
            set_alt_accnt(value);
        }
        void set(const alt_user_name & value) {
            set_alt_user_name(value);
        }
        void set(const src_routing_code & value) {
            set_src_routing_code(value);
        }
        void set(const package_id & value) {
            set_package_id(value);
        }
        void set(const sec_key & value) {
            set_sec_key(value);
        }
        void set(const sec_type & value) {
            set_sec_type(value);
        }
        void set(const security_desc & value) {
            set_security_desc(value);
        }
        void set(const accnt & value) {
            set_accnt(value);
        }
        void set(const client_firm & value) {
            set_client_firm(value);
        }
        void set(const spdr_source & value) {
            set_spdr_source(value);
        }
        void set(const grouping_code & value) {
            set_grouping_code(value);
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
        void set(const strategy & value) {
            set_strategy(value);
        }
        void set(const user_name & value) {
            set_user_name(value);
        }
        void set(const user_source & value) {
            set_user_source(value);
        }
        void set(const order_dttm & value) {
            set_order_dttm(value);
        }
        void set(const order_side & value) {
            set_order_side(value);
        }
        void set(const order_size & value) {
            set_order_size(value);
        }
        void set(const order_active_size & value) {
            set_order_active_size(value);
        }
        void set(const cur_cum_fill_quantity & value) {
            set_cur_cum_fill_quantity(value);
        }
        void set(const add_cum_fill_quantity & value) {
            set_add_cum_fill_quantity(value);
        }
        void set(const max_exposure_size & value) {
            set_max_exposure_size(value);
        }
        void set(const num_make_exchanges & value) {
            set_num_make_exchanges(value);
        }
        void set(const public_size & value) {
            set_public_size(value);
        }
        void set(const can_overlap_cxl_repl & value) {
            set_can_overlap_cxl_repl(value);
        }
        void set(const progress_rule & value) {
            set_progress_rule(value);
        }
        void set(const block_visibility & value) {
            set_block_visibility(value);
        }
        void set(const progress_slice_cnt & value) {
            set_progress_slice_cnt(value);
        }
        void set(const progress_expose_time & value) {
            set_progress_expose_time(value);
        }
        void set(const vwap_participation & value) {
            set_vwap_participation(value);
        }
        void set(const min_mkt_on_close_pct & value) {
            set_min_mkt_on_close_pct(value);
        }
        void set(const trigger_type & value) {
            set_trigger_type(value);
        }
        void set(const trigger_level & value) {
            set_trigger_level(value);
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
        void set(const min_max_type & value) {
            set_min_max_type(value);
        }
        void set(const min_option_px & value) {
            set_min_option_px(value);
        }
        void set(const max_child_orders & value) {
            set_max_child_orders(value);
        }
        void set(const exch_mask & value) {
            set_exch_mask(value);
        }
        void set(const spdr_stage_type & value) {
            set_spdr_stage_type(value);
        }
        void set(const market_session & value) {
            set_market_session(value);
        }
        void set(const start_dttm & value) {
            set_start_dttm(value);
        }
        void set(const order_duration & value) {
            set_order_duration(value);
        }
        void set(const active_duration & value) {
            set_active_duration(value);
        }
        void set(const good_till_dttm & value) {
            set_good_till_dttm(value);
        }
        void set(const start_type & value) {
            set_start_type(value);
        }
        void set(const trigger_group_id & value) {
            set_trigger_group_id(value);
        }
        void set(const trigger_timestamp & value) {
            set_trigger_timestamp(value);
        }
        void set(const parent_order_handling & value) {
            set_parent_order_handling(value);
        }
        void set(const parent_balance_handling & value) {
            set_parent_balance_handling(value);
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
        void set(const state_model & value) {
            set_state_model(value);
        }
        void set(const u_state_model & value) {
            set_u_state_model(value);
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
        void set(const extern_hedge_ex_dest & value) {
            set_extern_hedge_ex_dest(value);
        }
        void set(const extern_hedge_params & value) {
            set_extern_hedge_params(value);
        }
        void set(const firm_type & value) {
            set_firm_type(value);
        }
        void set(const order_capacity & value) {
            set_order_capacity(value);
        }
        void set(const position_type & value) {
            set_position_type(value);
        }
        void set(const ssale_flag & value) {
            set_ssale_flag(value);
        }
        void set(const locate_firm & value) {
            set_locate_firm(value);
        }
        void set(const locate_pool & value) {
            set_locate_pool(value);
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
        void set(const lead_side & value) {
            set_lead_side(value);
        }
        void set(const max_completion_slippage & value) {
            set_max_completion_slippage(value);
        }
        void set(const order_ref_premium & value) {
            set_order_ref_premium(value);
        }
        void set(const notice_number & value) {
            set_notice_number(value);
        }
        void set(const theo_vol & value) {
            set_theo_vol(value);
        }
        void set(const cl_arrive_mark & value) {
            set_cl_arrive_mark(value);
        }
        void set(const risk_group_id & value) {
            set_risk_group_id(value);
        }
        void set(const req_aux_risk_group_ctrl & value) {
            set_req_aux_risk_group_ctrl(value);
        }
        void set(const ref_rmetric1_src & value) {
            set_ref_rmetric1_src(value);
        }
        void set(const ref_rmetric2_src & value) {
            set_ref_rmetric2_src(value);
        }
        void set(const ref_rmetric3_src & value) {
            set_ref_rmetric3_src(value);
        }
        void set(const ref_rmetric4_src & value) {
            set_ref_rmetric4_src(value);
        }
        void set(const ref_rmetric5_src & value) {
            set_ref_rmetric5_src(value);
        }
        void set(const ref_rmetric6_src & value) {
            set_ref_rmetric6_src(value);
        }
        void set(const ref_rmetric7_src & value) {
            set_ref_rmetric7_src(value);
        }
        void set(const order_ref_rmetric1 & value) {
            set_order_ref_rmetric1(value);
        }
        void set(const order_ref_rmetric2 & value) {
            set_order_ref_rmetric2(value);
        }
        void set(const order_ref_rmetric3 & value) {
            set_order_ref_rmetric3(value);
        }
        void set(const order_ref_rmetric4 & value) {
            set_order_ref_rmetric4(value);
        }
        void set(const order_ref_rmetric5 & value) {
            set_order_ref_rmetric5(value);
        }
        void set(const order_ref_rmetric6 & value) {
            set_order_ref_rmetric6(value);
        }
        void set(const order_ref_rmetric7 & value) {
            set_order_ref_rmetric7(value);
        }
        void set(const exp_day_wt_vega_offset & value) {
            set_exp_day_wt_vega_offset(value);
        }
        void set(const max_exp_day_wt_vega_ln & value) {
            set_max_exp_day_wt_vega_ln(value);
        }
        void set(const max_exp_day_wt_vega_sh & value) {
            set_max_exp_day_wt_vega_sh(value);
        }
        void set(const max_exp_day_rmetric6_ln & value) {
            set_max_exp_day_rmetric6_ln(value);
        }
        void set(const max_exp_day_rmetric6_sh & value) {
            set_max_exp_day_rmetric6_sh(value);
        }
        void set(const sym_day_ddelta_offset & value) {
            set_sym_day_ddelta_offset(value);
        }
        void set(const max_sym_day_ddelta_ln & value) {
            set_max_sym_day_ddelta_ln(value);
        }
        void set(const max_sym_day_ddelta_sh & value) {
            set_max_sym_day_ddelta_sh(value);
        }
        void set(const sym_day_vega_offset & value) {
            set_sym_day_vega_offset(value);
        }
        void set(const max_sym_day_vega_ln & value) {
            set_max_sym_day_vega_ln(value);
        }
        void set(const max_sym_day_vega_sh & value) {
            set_max_sym_day_vega_sh(value);
        }
        void set(const sym_day_wt_vega_offset & value) {
            set_sym_day_wt_vega_offset(value);
        }
        void set(const max_sym_day_wt_vega_ln & value) {
            set_max_sym_day_wt_vega_ln(value);
        }
        void set(const max_sym_day_wt_vega_sh & value) {
            set_max_sym_day_wt_vega_sh(value);
        }
        void set(const max_sym_day_rmetric7_ln & value) {
            set_max_sym_day_rmetric7_ln(value);
        }
        void set(const max_sym_day_rmetric7_sh & value) {
            set_max_sym_day_rmetric7_sh(value);
        }
        void set(const max_grp_day_ddelta_ln & value) {
            set_max_grp_day_ddelta_ln(value);
        }
        void set(const max_grp_day_ddelta_sh & value) {
            set_max_grp_day_ddelta_sh(value);
        }
        void set(const max_grp_day_vega_ln & value) {
            set_max_grp_day_vega_ln(value);
        }
        void set(const max_grp_day_vega_sh & value) {
            set_max_grp_day_vega_sh(value);
        }
        void set(const max_grp_day_vega_abs & value) {
            set_max_grp_day_vega_abs(value);
        }
        void set(const grp_day_vega_ratio & value) {
            set_grp_day_vega_ratio(value);
        }
        void set(const max_grp_day_contracts_ln & value) {
            set_max_grp_day_contracts_ln(value);
        }
        void set(const max_grp_day_contracts_sh & value) {
            set_max_grp_day_contracts_sh(value);
        }
        void set(const max_grp_day_contracts_abs & value) {
            set_max_grp_day_contracts_abs(value);
        }
        void set(const max_grp_day_rmetric1_ln & value) {
            set_max_grp_day_rmetric1_ln(value);
        }
        void set(const max_grp_day_rmetric1_sh & value) {
            set_max_grp_day_rmetric1_sh(value);
        }
        void set(const max_grp_day_rmetric1_abs & value) {
            set_max_grp_day_rmetric1_abs(value);
        }
        void set(const grp_day_rmetric1_ratio & value) {
            set_grp_day_rmetric1_ratio(value);
        }
        void set(const max_grp_day_rmetric2_ln & value) {
            set_max_grp_day_rmetric2_ln(value);
        }
        void set(const max_grp_day_rmetric2_sh & value) {
            set_max_grp_day_rmetric2_sh(value);
        }
        void set(const max_grp_day_rmetric3_ln & value) {
            set_max_grp_day_rmetric3_ln(value);
        }
        void set(const max_grp_day_rmetric3_sh & value) {
            set_max_grp_day_rmetric3_sh(value);
        }
        void set(const max_grp_day_rmetric4_ln & value) {
            set_max_grp_day_rmetric4_ln(value);
        }
        void set(const max_grp_day_rmetric4_sh & value) {
            set_max_grp_day_rmetric4_sh(value);
        }
        void set(const max_grp_day_rmetric5_ln & value) {
            set_max_grp_day_rmetric5_ln(value);
        }
        void set(const max_grp_day_rmetric5_sh & value) {
            set_max_grp_day_rmetric5_sh(value);
        }
        void set(const sym_ema_cxl_ddelta_ln & value) {
            set_sym_ema_cxl_ddelta_ln(value);
        }
        void set(const sym_ema_cxl_ddelta_sh & value) {
            set_sym_ema_cxl_ddelta_sh(value);
        }
        void set(const sym_ema_cxl_wt_vega_ln & value) {
            set_sym_ema_cxl_wt_vega_ln(value);
        }
        void set(const sym_ema_cxl_wt_vega_sh & value) {
            set_sym_ema_cxl_wt_vega_sh(value);
        }
        void set(const last_fill_dttm & value) {
            set_last_fill_dttm(value);
        }
        void set(const user_data1 & value) {
            set_user_data1(value);
        }
        void set(const user_data2 & value) {
            set_user_data2(value);
        }
        void set(const child_data & value) {
            set_child_data(value);
        }
        void set(const src_timestamp & value) {
            set_src_timestamp(value);
        }
        void set(const sgw_timestamp & value) {
            set_sgw_timestamp(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const include_srnetwork & value) {
            set_include_srnetwork(value);
        }
        void set(const directed_counter_party & value) {
            add_directed_counter_party(value);
        }
        void set(const order_legs & value) {
            add_order_legs(value);
        }

        void set(const SpdrParentOrder & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_sys_environment);
            set(value.m_run_status);
            set(value.m_spdr_action_type);
            set(value.m_parent_shape);
            set(value.m_client_seq_num_in);
            set(value.m_alt_order_id);
            set(value.m_alt_prev_order_id);
            set(value.m_alt_auto_hedge_id);
            set(value.m_alt_accnt);
            set(value.m_alt_user_name);
            set(value.m_src_routing_code);
            set(value.m_package_id);
            set(value.m_sec_key);
            set(value.m_sec_type);
            set(value.m_security_desc);
            set(value.m_accnt);
            set(value.m_client_firm);
            set(value.m_spdr_source);
            set(value.m_grouping_code);
            set(value.m_exec_brkr_code);
            set(value.m_extern_ex_dest);
            set(value.m_extern_params);
            set(value.m_strategy);
            set(value.m_user_name);
            set(value.m_user_source);
            set(value.m_order_dttm);
            set(value.m_order_side);
            set(value.m_order_size);
            set(value.m_order_active_size);
            set(value.m_cur_cum_fill_quantity);
            set(value.m_add_cum_fill_quantity);
            set(value.m_max_exposure_size);
            set(value.m_num_make_exchanges);
            set(value.m_public_size);
            set(value.m_can_overlap_cxl_repl);
            set(value.m_progress_rule);
            set(value.m_block_visibility);
            set(value.m_progress_slice_cnt);
            set(value.m_progress_expose_time);
            set(value.m_vwap_participation);
            set(value.m_min_mkt_on_close_pct);
            set(value.m_trigger_type);
            set(value.m_trigger_level);
            set(value.m_auction_responder);
            set(value.m_max_make_exch_fee);
            set(value.m_max_take_exch_fee);
            set(value.m_inc_take_exch_fee);
            set(value.m_inc_make_exch_fee);
            set(value.m_make_exch_rule);
            set(value.m_cxl_uprc_range);
            set(value.m_min_ubid);
            set(value.m_max_uask);
            set(value.m_min_max_type);
            set(value.m_min_option_px);
            set(value.m_max_child_orders);
            set(value.m_exch_mask);
            set(value.m_spdr_stage_type);
            set(value.m_market_session);
            set(value.m_start_dttm);
            set(value.m_order_duration);
            set(value.m_active_duration);
            set(value.m_good_till_dttm);
            set(value.m_start_type);
            set(value.m_trigger_group_id);
            set(value.m_trigger_timestamp);
            set(value.m_parent_order_handling);
            set(value.m_parent_balance_handling);
            set(value.m_order_limit_type);
            set(value.m_take_limit_class);
            set(value.m_make_limit_class);
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
            set(value.m_state_model);
            set(value.m_u_state_model);
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
            set(value.m_auto_hedge);
            set(value.m_hedge_instrument);
            set(value.m_hedge_sec_key);
            set(value.m_hedge_beta_ratio);
            set(value.m_hedge_scope);
            set(value.m_hedge_session);
            set(value.m_extern_hedge_ex_dest);
            set(value.m_extern_hedge_params);
            set(value.m_firm_type);
            set(value.m_order_capacity);
            set(value.m_position_type);
            set(value.m_ssale_flag);
            set(value.m_locate_firm);
            set(value.m_locate_pool);
            set(value.m_no_cross_group);
            set(value.m_exch_trader_id);
            set(value.m_large_trader_id);
            set(value.m_trading_location);
            set(value.m_lead_side);
            set(value.m_max_completion_slippage);
            set(value.m_order_ref_premium);
            set(value.m_notice_number);
            set(value.m_theo_vol);
            set(value.m_cl_arrive_mark);
            set(value.m_risk_group_id);
            set(value.m_req_aux_risk_group_ctrl);
            set(value.m_ref_rmetric1_src);
            set(value.m_ref_rmetric2_src);
            set(value.m_ref_rmetric3_src);
            set(value.m_ref_rmetric4_src);
            set(value.m_ref_rmetric5_src);
            set(value.m_ref_rmetric6_src);
            set(value.m_ref_rmetric7_src);
            set(value.m_order_ref_rmetric1);
            set(value.m_order_ref_rmetric2);
            set(value.m_order_ref_rmetric3);
            set(value.m_order_ref_rmetric4);
            set(value.m_order_ref_rmetric5);
            set(value.m_order_ref_rmetric6);
            set(value.m_order_ref_rmetric7);
            set(value.m_exp_day_wt_vega_offset);
            set(value.m_max_exp_day_wt_vega_ln);
            set(value.m_max_exp_day_wt_vega_sh);
            set(value.m_max_exp_day_rmetric6_ln);
            set(value.m_max_exp_day_rmetric6_sh);
            set(value.m_sym_day_ddelta_offset);
            set(value.m_max_sym_day_ddelta_ln);
            set(value.m_max_sym_day_ddelta_sh);
            set(value.m_sym_day_vega_offset);
            set(value.m_max_sym_day_vega_ln);
            set(value.m_max_sym_day_vega_sh);
            set(value.m_sym_day_wt_vega_offset);
            set(value.m_max_sym_day_wt_vega_ln);
            set(value.m_max_sym_day_wt_vega_sh);
            set(value.m_max_sym_day_rmetric7_ln);
            set(value.m_max_sym_day_rmetric7_sh);
            set(value.m_max_grp_day_ddelta_ln);
            set(value.m_max_grp_day_ddelta_sh);
            set(value.m_max_grp_day_vega_ln);
            set(value.m_max_grp_day_vega_sh);
            set(value.m_max_grp_day_vega_abs);
            set(value.m_grp_day_vega_ratio);
            set(value.m_max_grp_day_contracts_ln);
            set(value.m_max_grp_day_contracts_sh);
            set(value.m_max_grp_day_contracts_abs);
            set(value.m_max_grp_day_rmetric1_ln);
            set(value.m_max_grp_day_rmetric1_sh);
            set(value.m_max_grp_day_rmetric1_abs);
            set(value.m_grp_day_rmetric1_ratio);
            set(value.m_max_grp_day_rmetric2_ln);
            set(value.m_max_grp_day_rmetric2_sh);
            set(value.m_max_grp_day_rmetric3_ln);
            set(value.m_max_grp_day_rmetric3_sh);
            set(value.m_max_grp_day_rmetric4_ln);
            set(value.m_max_grp_day_rmetric4_sh);
            set(value.m_max_grp_day_rmetric5_ln);
            set(value.m_max_grp_day_rmetric5_sh);
            set(value.m_sym_ema_cxl_ddelta_ln);
            set(value.m_sym_ema_cxl_ddelta_sh);
            set(value.m_sym_ema_cxl_wt_vega_ln);
            set(value.m_sym_ema_cxl_wt_vega_sh);
            set(value.m_last_fill_dttm);
            set(value.m_user_data1);
            set(value.m_user_data2);
            set(value.m_child_data);
            set(value.m_src_timestamp);
            set(value.m_sgw_timestamp);
            set(value.m_timestamp);
            set(value.m_include_srnetwork);set_directed_counter_party_list(value.m_directed_counter_party);set_order_legs_list(value.m_order_legs);
        }

        SpdrParentOrder() {
            m__meta.set_message_type("SpdrParentOrder");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4095, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4095, length);
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
             *this = SpdrParentOrder{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
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
        bool IncludeAltAutoHedgeId() const {
            return !(m_alt_auto_hedge_id.empty());
        }
        bool IncludeAltAccnt() const {
            return !(m_alt_accnt.empty());
        }
        bool IncludeAltUserName() const {
            return !(m_alt_user_name.empty());
        }
        bool IncludeSrcRoutingCode() const {
            return !(m_src_routing_code.empty());
        }
        bool IncludePackageId() const {
            return !(m_package_id == 0);
        }
        bool IncludeSecKey() const {
            return (m_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeSecurityDesc() const {
            return !(m_security_desc.empty());
        }
        bool IncludeAccnt() const {
            return !(m_accnt.empty());
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }
        bool IncludeGroupingCode() const {
            return !(m_grouping_code == 0);
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
        bool IncludeStrategy() const {
            return !(m_strategy.empty());
        }
        bool IncludeUserName() const {
            return !(m_user_name.empty());
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
        bool IncludeCurCumFillQuantity() const {
            return !(m_cur_cum_fill_quantity == 0);
        }
        bool IncludeMaxExposureSize() const {
            return !(m_max_exposure_size == 0);
        }
        bool IncludeNumMakeExchanges() const {
            return !(m_num_make_exchanges == 0);
        }
        bool IncludeProgressSliceCnt() const {
            return !(m_progress_slice_cnt == 0);
        }
        bool IncludeProgressExposeTime() const {
            return !(m_progress_expose_time == 0);
        }
        bool IncludeVwapParticipation() const {
            return !(m_vwap_participation == 0.0);
        }
        bool IncludeMinMktOnClosePct() const {
            return !(m_min_mkt_on_close_pct == 0);
        }
        bool IncludeTriggerLevel() const {
            return !(m_trigger_level == 0.0);
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
        bool IncludeExchMask() const {
            return !(m_exch_mask == 0);
        }
        bool IncludeStartDttm() const {
            return (m_start_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeOrderDuration() const {
            return !(m_order_duration == 0);
        }
        bool IncludeActiveDuration() const {
            return !(m_active_duration == 0);
        }
        bool IncludeGoodTillDttm() const {
            return (m_good_till_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeTriggerGroupId() const {
            return !(m_trigger_group_id == 0);
        }
        bool IncludeTriggerTimestamp() const {
            return !(m_trigger_timestamp == 0);
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
        bool IncludeLocateFirm() const {
            return !(m_locate_firm.empty());
        }
        bool IncludeLocatePool() const {
            return !(m_locate_pool.empty());
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
        bool IncludeMaxCompletionSlippage() const {
            return !(m_max_completion_slippage == 0.0);
        }
        bool IncludeOrderRefPremium() const {
            return !(m_order_ref_premium == 0.0);
        }
        bool IncludeNoticeNumber() const {
            return !(m_notice_number == 0);
        }
        bool IncludeTheoVol() const {
            return !(m_theo_vol == 0.0);
        }
        bool IncludeClArriveMark() const {
            return !(m_cl_arrive_mark == 0.0);
        }
        bool IncludeRiskGroupId() const {
            return !(m_risk_group_id == 0);
        }
        bool IncludeOrderRefRmetric1() const {
            return !(m_order_ref_rmetric1 == 0.0);
        }
        bool IncludeOrderRefRmetric2() const {
            return !(m_order_ref_rmetric2 == 0.0);
        }
        bool IncludeOrderRefRmetric3() const {
            return !(m_order_ref_rmetric3 == 0.0);
        }
        bool IncludeOrderRefRmetric4() const {
            return !(m_order_ref_rmetric4 == 0.0);
        }
        bool IncludeOrderRefRmetric5() const {
            return !(m_order_ref_rmetric5 == 0.0);
        }
        bool IncludeOrderRefRmetric6() const {
            return !(m_order_ref_rmetric6 == 0.0);
        }
        bool IncludeOrderRefRmetric7() const {
            return !(m_order_ref_rmetric7 == 0.0);
        }
        bool IncludeExpDayWtVegaOffset() const {
            return !(m_exp_day_wt_vega_offset == 0.0);
        }
        bool IncludeMaxExpDayWtVegaLn() const {
            return !(m_max_exp_day_wt_vega_ln == 0.0);
        }
        bool IncludeMaxExpDayWtVegaSh() const {
            return !(m_max_exp_day_wt_vega_sh == 0.0);
        }
        bool IncludeMaxExpDayRmetric6Ln() const {
            return !(m_max_exp_day_rmetric6_ln == 0.0);
        }
        bool IncludeMaxExpDayRmetric6Sh() const {
            return !(m_max_exp_day_rmetric6_sh == 0.0);
        }
        bool IncludeSymDayDdeltaOffset() const {
            return !(m_sym_day_ddelta_offset == 0.0);
        }
        bool IncludeMaxSymDayDdeltaLn() const {
            return !(m_max_sym_day_ddelta_ln == 0.0);
        }
        bool IncludeMaxSymDayDdeltaSh() const {
            return !(m_max_sym_day_ddelta_sh == 0.0);
        }
        bool IncludeSymDayVegaOffset() const {
            return !(m_sym_day_vega_offset == 0.0);
        }
        bool IncludeMaxSymDayVegaLn() const {
            return !(m_max_sym_day_vega_ln == 0.0);
        }
        bool IncludeMaxSymDayVegaSh() const {
            return !(m_max_sym_day_vega_sh == 0.0);
        }
        bool IncludeSymDayWtVegaOffset() const {
            return !(m_sym_day_wt_vega_offset == 0.0);
        }
        bool IncludeMaxSymDayWtVegaLn() const {
            return !(m_max_sym_day_wt_vega_ln == 0.0);
        }
        bool IncludeMaxSymDayWtVegaSh() const {
            return !(m_max_sym_day_wt_vega_sh == 0.0);
        }
        bool IncludeMaxSymDayRmetric7Ln() const {
            return !(m_max_sym_day_rmetric7_ln == 0.0);
        }
        bool IncludeMaxSymDayRmetric7Sh() const {
            return !(m_max_sym_day_rmetric7_sh == 0.0);
        }
        bool IncludeMaxGrpDayDdeltaLn() const {
            return !(m_max_grp_day_ddelta_ln == 0.0);
        }
        bool IncludeMaxGrpDayDdeltaSh() const {
            return !(m_max_grp_day_ddelta_sh == 0.0);
        }
        bool IncludeMaxGrpDayVegaLn() const {
            return !(m_max_grp_day_vega_ln == 0.0);
        }
        bool IncludeMaxGrpDayVegaSh() const {
            return !(m_max_grp_day_vega_sh == 0.0);
        }
        bool IncludeMaxGrpDayVegaAbs() const {
            return !(m_max_grp_day_vega_abs == 0.0);
        }
        bool IncludeGrpDayVegaRatio() const {
            return !(m_grp_day_vega_ratio == 0.0);
        }
        bool IncludeMaxGrpDayContractsLn() const {
            return !(m_max_grp_day_contracts_ln == 0);
        }
        bool IncludeMaxGrpDayContractsSh() const {
            return !(m_max_grp_day_contracts_sh == 0);
        }
        bool IncludeMaxGrpDayContractsAbs() const {
            return !(m_max_grp_day_contracts_abs == 0);
        }
        bool IncludeMaxGrpDayRmetric1Ln() const {
            return !(m_max_grp_day_rmetric1_ln == 0.0);
        }
        bool IncludeMaxGrpDayRmetric1Sh() const {
            return !(m_max_grp_day_rmetric1_sh == 0.0);
        }
        bool IncludeMaxGrpDayRmetric1Abs() const {
            return !(m_max_grp_day_rmetric1_abs == 0.0);
        }
        bool IncludeGrpDayRmetric1Ratio() const {
            return !(m_grp_day_rmetric1_ratio == 0.0);
        }
        bool IncludeMaxGrpDayRmetric2Ln() const {
            return !(m_max_grp_day_rmetric2_ln == 0.0);
        }
        bool IncludeMaxGrpDayRmetric2Sh() const {
            return !(m_max_grp_day_rmetric2_sh == 0.0);
        }
        bool IncludeMaxGrpDayRmetric3Ln() const {
            return !(m_max_grp_day_rmetric3_ln == 0.0);
        }
        bool IncludeMaxGrpDayRmetric3Sh() const {
            return !(m_max_grp_day_rmetric3_sh == 0.0);
        }
        bool IncludeMaxGrpDayRmetric4Ln() const {
            return !(m_max_grp_day_rmetric4_ln == 0.0);
        }
        bool IncludeMaxGrpDayRmetric4Sh() const {
            return !(m_max_grp_day_rmetric4_sh == 0.0);
        }
        bool IncludeMaxGrpDayRmetric5Ln() const {
            return !(m_max_grp_day_rmetric5_ln == 0.0);
        }
        bool IncludeMaxGrpDayRmetric5Sh() const {
            return !(m_max_grp_day_rmetric5_sh == 0.0);
        }
        bool IncludeSymEmaCxlDdeltaLn() const {
            return !(m_sym_ema_cxl_ddelta_ln == 0.0);
        }
        bool IncludeSymEmaCxlDdeltaSh() const {
            return !(m_sym_ema_cxl_ddelta_sh == 0.0);
        }
        bool IncludeSymEmaCxlWtVegaLn() const {
            return !(m_sym_ema_cxl_wt_vega_ln == 0.0);
        }
        bool IncludeSymEmaCxlWtVegaSh() const {
            return !(m_sym_ema_cxl_wt_vega_sh == 0.0);
        }
        bool IncludeLastFillDttm() const {
            return (m_last_fill_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeUserData1() const {
            return !(m_user_data1.empty());
        }
        bool IncludeUserData2() const {
            return !(m_user_data2.empty());
        }
        bool IncludeChildData() const {
            return !(m_child_data.empty());
        }
        bool IncludeSrcTimestamp() const {
            return !(m_src_timestamp == 0);
        }
        bool IncludeSgwTimestamp() const {
            return !(m_sgw_timestamp == 0);
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeDirectedCounterParty() const {
            return (!m_directed_counter_party.empty());
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_sys_environment)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>(m_run_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrActionType>(m_spdr_action_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>(m_parent_shape)));
            if ( IncludeClientSeqNumIn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(112,m_client_seq_num_in);
            }
            if ( IncludeAltOrderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(115,m_alt_order_id);
            }
            if ( IncludeAltPrevOrderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(118,m_alt_prev_order_id);
            }
            if ( IncludeAltAutoHedgeId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(124,m_alt_auto_hedge_id);
            }
            if ( IncludeAltAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(127,m_alt_accnt);
            }
            if ( IncludeAltUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(130,m_alt_user_name);
            }
            if ( IncludeSrcRoutingCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(133,m_src_routing_code);
            }
            if ( IncludePackageId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(136,m_package_id);
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(139, optionKeyLayout_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeSecurityDesc()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(145,m_security_desc);
            }
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(148,m_accnt);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(151,m_client_firm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            if ( IncludeGroupingCode()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(157,m_grouping_code);
            }
            if ( IncludeExecBrkrCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(1039,m_exec_brkr_code);
            }
            if ( IncludeExternExDest()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(1040,m_extern_ex_dest);
            }
            if ( IncludeExternParams()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(166,m_extern_params);
            }
            if ( IncludeStrategy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(169,m_strategy);
            }
            if ( IncludeUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(172,m_user_name);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1031,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_user_source)));
            if ( IncludeOrderDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(178, m_order_dttm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(181,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            if ( IncludeOrderSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(184,m_order_size);
            }
            if ( IncludeOrderActiveSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(187,m_order_active_size);
            }
            if ( IncludeCurCumFillQuantity()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(190,m_cur_cum_fill_quantity);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(193,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_add_cum_fill_quantity)));
            if ( IncludeMaxExposureSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(196,m_max_exposure_size);
            }
            if ( IncludeNumMakeExchanges()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(199,m_num_make_exchanges);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(202,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PublicSizeHandling>(m_public_size)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(205,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_overlap_cxl_repl)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(208,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProgressRule>(m_progress_rule)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(211,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BlockVisibility>(m_block_visibility)));
            if ( IncludeProgressSliceCnt()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(214,m_progress_slice_cnt);
            }
            if ( IncludeProgressExposeTime()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(217,m_progress_expose_time);
            }
            if ( IncludeVwapParticipation()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(220,m_vwap_participation);
            }
            if ( IncludeMinMktOnClosePct()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(223,m_min_mkt_on_close_pct);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(226,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TriggerType>(m_trigger_type)));
            if ( IncludeTriggerLevel()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(229,m_trigger_level);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(232,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionResponder>(m_auction_responder)));
            if ( IncludeMaxMakeExchFee()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(235,m_max_make_exch_fee);
            }
            if ( IncludeMaxTakeExchFee()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(238,m_max_take_exch_fee);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(241,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::IncExchFee>(m_inc_take_exch_fee)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(244,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::IncExchFee>(m_inc_make_exch_fee)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(247,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MakeExchRule>(m_make_exch_rule)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(250,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UPrcCxl>(m_cxl_uprc_range)));
            if ( IncludeMinUbid()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(253,m_min_ubid);
            }
            if ( IncludeMaxUask()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(256,m_max_uask);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(259,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MinMaxType>(m_min_max_type)));
            if ( IncludeMinOptionPx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(262,m_min_option_px);
            }
            if ( IncludeMaxChildOrders()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(265,m_max_child_orders);
            }
            if ( IncludeExchMask()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(268,m_exch_mask);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(271,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrStageType>(m_spdr_stage_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1032,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>(m_market_session)));
            if ( IncludeStartDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(277, m_start_dttm);
            }
            if ( IncludeOrderDuration()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(280,m_order_duration);
            }
            if ( IncludeActiveDuration()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(1033,m_active_duration);
            }
            if ( IncludeGoodTillDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(283, m_good_till_dttm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(286,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StartType>(m_start_type)));
            if ( IncludeTriggerGroupId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(289,m_trigger_group_id);
            }
            if ( IncludeTriggerTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(292,m_trigger_timestamp);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(298,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentOrderHandling>(m_parent_order_handling)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(301,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentBalanceHandling>(m_parent_balance_handling)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(304,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitType>(m_order_limit_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(307,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>(m_take_limit_class)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(310,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>(m_make_limit_class)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(313,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ReachRule>(m_take_reach_rule)));
            if ( IncludeOrderPrcLimit()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(316,m_order_prc_limit);
            }
            if ( IncludeOrderRefUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(319,m_order_ref_uprc);
            }
            if ( IncludeOrderRefDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(322,m_order_ref_delta);
            }
            if ( IncludeOrderRefGamma()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(325,m_order_ref_gamma);
            }
            if ( IncludeOrderVolLimit()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(328,m_order_vol_limit);
            }
            if ( IncludeRateOverride()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(331,m_rate_override);
            }
            if ( IncludeSdivOverride()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(334,m_sdiv_override);
            }
            if ( IncludeDdivOverride()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(337,m_ddiv_override);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(340,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OverrideCode>(m_override_code)));
            if ( IncludeOrderPrcOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(343,m_order_prc_offset);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(346,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StateModel>(m_state_model)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(349,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StateModel>(m_u_state_model)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(352,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>(m_take_alpha_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(355,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>(m_make_alpha_type)));
            if ( IncludeTakeAlphaFactor()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(358,m_take_alpha_factor);
            }
            if ( IncludeMakeAlphaFactor()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(361,m_make_alpha_factor);
            }
            if ( IncludeTakeProbability()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(364,m_take_probability);
            }
            if ( IncludeMakeProbability()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(367,m_make_probability);
            }
            if ( IncludeTakeSurfPrcOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(370,m_take_surf_prc_offset);
            }
            if ( IncludeTakeSurfVolOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(373,m_take_surf_vol_offset);
            }
            if ( IncludeTakeSurfWidthOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(376,m_take_surf_width_offset);
            }
            if ( IncludeMakeSurfPrcOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(379,m_make_surf_prc_offset);
            }
            if ( IncludeMakeSurfVolOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(382,m_make_surf_vol_offset);
            }
            if ( IncludeMakeSurfWidthOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(385,m_make_surf_width_offset);
            }
            if ( IncludeOrderRefEventMult()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(388,m_order_ref_event_mult);
            }
            if ( IncludeOrderRefEventDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(391, m_order_ref_event_dttm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1044,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::NbboCap>(m_nbbo_cap)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(394,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>(m_auto_hedge)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(397,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeInst>(m_hedge_instrument)));
            if ( IncludeHedgeSecKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_hedge_sec_key{};
                m_hedge_sec_key.setCodecExpiryKey(expiryKeyLayout_hedge_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(400, expiryKeyLayout_hedge_sec_key);
            }
            if ( IncludeHedgeBetaRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(403,m_hedge_beta_ratio);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(406,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeScope>(m_hedge_scope)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1034,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>(m_hedge_session)));
            if ( IncludeExternHedgeExDest()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(1041,m_extern_hedge_ex_dest);
            }
            if ( IncludeExternHedgeParams()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(415,m_extern_hedge_params);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(418,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_firm_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(421,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCapacity>(m_order_capacity)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(424,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(427,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            if ( IncludeLocateFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(1042,m_locate_firm);
            }
            if ( IncludeLocatePool()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(1043,m_locate_pool);
            }
            if ( IncludeNoCrossGroup()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(430,m_no_cross_group);
            }
            if ( IncludeExchTraderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(433,m_exch_trader_id);
            }
            if ( IncludeLargeTraderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(436,m_large_trader_id);
            }
            if ( IncludeTradingLocation()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(439,m_trading_location);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(484,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_lead_side)));
            if ( IncludeMaxCompletionSlippage()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(487,m_max_completion_slippage);
            }
            if ( IncludeOrderRefPremium()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(490,m_order_ref_premium);
            }
            if ( IncludeNoticeNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(1038,m_notice_number);
            }
            if ( IncludeTheoVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(496,m_theo_vol);
            }
            if ( IncludeClArriveMark()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(499,m_cl_arrive_mark);
            }
            if ( IncludeRiskGroupId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(502,m_risk_group_id);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1036,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_req_aux_risk_group_ctrl)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(442,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RMetricSource>(m_ref_rmetric1_src)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(445,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RMetricSource>(m_ref_rmetric2_src)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(448,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RMetricSource>(m_ref_rmetric3_src)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(451,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RMetricSource>(m_ref_rmetric4_src)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(454,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RMetricSource>(m_ref_rmetric5_src)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(457,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RMetricSource>(m_ref_rmetric6_src)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(460,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RMetricSource>(m_ref_rmetric7_src)));
            if ( IncludeOrderRefRmetric1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(463,m_order_ref_rmetric1);
            }
            if ( IncludeOrderRefRmetric2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(466,m_order_ref_rmetric2);
            }
            if ( IncludeOrderRefRmetric3()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(469,m_order_ref_rmetric3);
            }
            if ( IncludeOrderRefRmetric4()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(472,m_order_ref_rmetric4);
            }
            if ( IncludeOrderRefRmetric5()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(475,m_order_ref_rmetric5);
            }
            if ( IncludeOrderRefRmetric6()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(478,m_order_ref_rmetric6);
            }
            if ( IncludeOrderRefRmetric7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(481,m_order_ref_rmetric7);
            }
            if ( IncludeExpDayWtVegaOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(529,m_exp_day_wt_vega_offset);
            }
            if ( IncludeMaxExpDayWtVegaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(523,m_max_exp_day_wt_vega_ln);
            }
            if ( IncludeMaxExpDayWtVegaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(526,m_max_exp_day_wt_vega_sh);
            }
            if ( IncludeMaxExpDayRmetric6Ln()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(559,m_max_exp_day_rmetric6_ln);
            }
            if ( IncludeMaxExpDayRmetric6Sh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(562,m_max_exp_day_rmetric6_sh);
            }
            if ( IncludeSymDayDdeltaOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(556,m_sym_day_ddelta_offset);
            }
            if ( IncludeMaxSymDayDdeltaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(550,m_max_sym_day_ddelta_ln);
            }
            if ( IncludeMaxSymDayDdeltaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(553,m_max_sym_day_ddelta_sh);
            }
            if ( IncludeSymDayVegaOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(538,m_sym_day_vega_offset);
            }
            if ( IncludeMaxSymDayVegaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(532,m_max_sym_day_vega_ln);
            }
            if ( IncludeMaxSymDayVegaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(535,m_max_sym_day_vega_sh);
            }
            if ( IncludeSymDayWtVegaOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(547,m_sym_day_wt_vega_offset);
            }
            if ( IncludeMaxSymDayWtVegaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(541,m_max_sym_day_wt_vega_ln);
            }
            if ( IncludeMaxSymDayWtVegaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(544,m_max_sym_day_wt_vega_sh);
            }
            if ( IncludeMaxSymDayRmetric7Ln()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(568,m_max_sym_day_rmetric7_ln);
            }
            if ( IncludeMaxSymDayRmetric7Sh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(571,m_max_sym_day_rmetric7_sh);
            }
            if ( IncludeMaxGrpDayDdeltaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(577,m_max_grp_day_ddelta_ln);
            }
            if ( IncludeMaxGrpDayDdeltaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(580,m_max_grp_day_ddelta_sh);
            }
            if ( IncludeMaxGrpDayVegaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(586,m_max_grp_day_vega_ln);
            }
            if ( IncludeMaxGrpDayVegaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(589,m_max_grp_day_vega_sh);
            }
            if ( IncludeMaxGrpDayVegaAbs()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(592,m_max_grp_day_vega_abs);
            }
            if ( IncludeGrpDayVegaRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(595,m_grp_day_vega_ratio);
            }
            if ( IncludeMaxGrpDayContractsLn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(646,m_max_grp_day_contracts_ln);
            }
            if ( IncludeMaxGrpDayContractsSh()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(649,m_max_grp_day_contracts_sh);
            }
            if ( IncludeMaxGrpDayContractsAbs()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(652,m_max_grp_day_contracts_abs);
            }
            if ( IncludeMaxGrpDayRmetric1Ln()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(610,m_max_grp_day_rmetric1_ln);
            }
            if ( IncludeMaxGrpDayRmetric1Sh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(613,m_max_grp_day_rmetric1_sh);
            }
            if ( IncludeMaxGrpDayRmetric1Abs()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(616,m_max_grp_day_rmetric1_abs);
            }
            if ( IncludeGrpDayRmetric1Ratio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(619,m_grp_day_rmetric1_ratio);
            }
            if ( IncludeMaxGrpDayRmetric2Ln()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(622,m_max_grp_day_rmetric2_ln);
            }
            if ( IncludeMaxGrpDayRmetric2Sh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(625,m_max_grp_day_rmetric2_sh);
            }
            if ( IncludeMaxGrpDayRmetric3Ln()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(628,m_max_grp_day_rmetric3_ln);
            }
            if ( IncludeMaxGrpDayRmetric3Sh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(631,m_max_grp_day_rmetric3_sh);
            }
            if ( IncludeMaxGrpDayRmetric4Ln()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(634,m_max_grp_day_rmetric4_ln);
            }
            if ( IncludeMaxGrpDayRmetric4Sh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(637,m_max_grp_day_rmetric4_sh);
            }
            if ( IncludeMaxGrpDayRmetric5Ln()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(640,m_max_grp_day_rmetric5_ln);
            }
            if ( IncludeMaxGrpDayRmetric5Sh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(643,m_max_grp_day_rmetric5_sh);
            }
            if ( IncludeSymEmaCxlDdeltaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(655,m_sym_ema_cxl_ddelta_ln);
            }
            if ( IncludeSymEmaCxlDdeltaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(658,m_sym_ema_cxl_ddelta_sh);
            }
            if ( IncludeSymEmaCxlWtVegaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(661,m_sym_ema_cxl_wt_vega_ln);
            }
            if ( IncludeSymEmaCxlWtVegaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(664,m_sym_ema_cxl_wt_vega_sh);
            }
            if ( IncludeLastFillDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(667, m_last_fill_dttm);
            }
            if ( IncludeUserData1()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(670,m_user_data1);
            }
            if ( IncludeUserData2()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(673,m_user_data2);
            }
            if ( IncludeChildData()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(676,m_child_data);
            }
            if ( IncludeSrcTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(679,m_src_timestamp);
            }
            if ( IncludeSgwTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(682,m_sgw_timestamp);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(685, m_timestamp);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1037,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::InclExclDisclose>(m_include_srnetwork)));
            if ( IncludeDirectedCounterParty()) {
                for (auto& item : m_directed_counter_party) {
					totalSize += SRProtobufCPP::TagCodec::Size(694, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeOrderLegs()) {
                for (auto& item : m_order_legs) {
					totalSize += SRProtobufCPP::TagCodec::Size(751, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_sys_environment)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>(m_run_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrActionType>(m_spdr_action_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>(m_parent_shape)));
            if ( IncludeClientSeqNumIn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,112,m_client_seq_num_in);
            }
            if ( IncludeAltOrderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,115,static_cast<string>(m_alt_order_id));
            }
            if ( IncludeAltPrevOrderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,118,static_cast<string>(m_alt_prev_order_id));
            }
            if ( IncludeAltAutoHedgeId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,124,static_cast<string>(m_alt_auto_hedge_id));
            }
            if ( IncludeAltAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,127,static_cast<string>(m_alt_accnt));
            }
            if ( IncludeAltUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,130,static_cast<string>(m_alt_user_name));
            }
            if ( IncludeSrcRoutingCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,133,static_cast<string>(m_src_routing_code));
            }
            if ( IncludePackageId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,136,m_package_id);
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 139, optionKeyLayout_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeSecurityDesc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,145,static_cast<string>(m_security_desc));
            }
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,148,static_cast<string>(m_accnt));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,151,static_cast<string>(m_client_firm));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            if ( IncludeGroupingCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,157,m_grouping_code);
            }
            if ( IncludeExecBrkrCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,1039,static_cast<string>(m_exec_brkr_code));
            }
            if ( IncludeExternExDest()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,1040,static_cast<string>(m_extern_ex_dest));
            }
            if ( IncludeExternParams()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,166,static_cast<string>(m_extern_params));
            }
            if ( IncludeStrategy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,169,static_cast<string>(m_strategy));
            }
            if ( IncludeUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,172,static_cast<string>(m_user_name));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1031,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_user_source)));
            if ( IncludeOrderDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 178, m_order_dttm);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,181,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            if ( IncludeOrderSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,184,m_order_size);
            }
            if ( IncludeOrderActiveSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,187,m_order_active_size);
            }
            if ( IncludeCurCumFillQuantity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,190,m_cur_cum_fill_quantity);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,193,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_add_cum_fill_quantity)));
            if ( IncludeMaxExposureSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,196,m_max_exposure_size);
            }
            if ( IncludeNumMakeExchanges()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,199,m_num_make_exchanges);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,202,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PublicSizeHandling>(m_public_size)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,205,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_overlap_cxl_repl)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,208,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProgressRule>(m_progress_rule)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,211,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BlockVisibility>(m_block_visibility)));
            if ( IncludeProgressSliceCnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,214,m_progress_slice_cnt);
            }
            if ( IncludeProgressExposeTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,217,m_progress_expose_time);
            }
            if ( IncludeVwapParticipation()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,220,m_vwap_participation);
            }
            if ( IncludeMinMktOnClosePct()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,223,m_min_mkt_on_close_pct);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,226,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TriggerType>(m_trigger_type)));
            if ( IncludeTriggerLevel()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,229,m_trigger_level);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,232,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionResponder>(m_auction_responder)));
            if ( IncludeMaxMakeExchFee()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,235,m_max_make_exch_fee);
            }
            if ( IncludeMaxTakeExchFee()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,238,m_max_take_exch_fee);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,241,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::IncExchFee>(m_inc_take_exch_fee)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,244,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::IncExchFee>(m_inc_make_exch_fee)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,247,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MakeExchRule>(m_make_exch_rule)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,250,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UPrcCxl>(m_cxl_uprc_range)));
            if ( IncludeMinUbid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,253,m_min_ubid);
            }
            if ( IncludeMaxUask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,256,m_max_uask);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,259,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MinMaxType>(m_min_max_type)));
            if ( IncludeMinOptionPx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,262,m_min_option_px);
            }
            if ( IncludeMaxChildOrders()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,265,m_max_child_orders);
            }
            if ( IncludeExchMask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,268,m_exch_mask);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,271,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrStageType>(m_spdr_stage_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1032,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>(m_market_session)));
            if ( IncludeStartDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 277, m_start_dttm);
            }
            if ( IncludeOrderDuration()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,280,m_order_duration);
            }
            if ( IncludeActiveDuration()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,1033,m_active_duration);
            }
            if ( IncludeGoodTillDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 283, m_good_till_dttm);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,286,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StartType>(m_start_type)));
            if ( IncludeTriggerGroupId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,289,m_trigger_group_id);
            }
            if ( IncludeTriggerTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,292,m_trigger_timestamp);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,298,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentOrderHandling>(m_parent_order_handling)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,301,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentBalanceHandling>(m_parent_balance_handling)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,304,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitType>(m_order_limit_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,307,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>(m_take_limit_class)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,310,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>(m_make_limit_class)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,313,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ReachRule>(m_take_reach_rule)));
            if ( IncludeOrderPrcLimit()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,316,m_order_prc_limit);
            }
            if ( IncludeOrderRefUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,319,m_order_ref_uprc);
            }
            if ( IncludeOrderRefDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,322,m_order_ref_delta);
            }
            if ( IncludeOrderRefGamma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,325,m_order_ref_gamma);
            }
            if ( IncludeOrderVolLimit()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,328,m_order_vol_limit);
            }
            if ( IncludeRateOverride()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,331,m_rate_override);
            }
            if ( IncludeSdivOverride()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,334,m_sdiv_override);
            }
            if ( IncludeDdivOverride()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,337,static_cast<string>(m_ddiv_override));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,340,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OverrideCode>(m_override_code)));
            if ( IncludeOrderPrcOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,343,m_order_prc_offset);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,346,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StateModel>(m_state_model)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,349,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StateModel>(m_u_state_model)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,352,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>(m_take_alpha_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,355,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>(m_make_alpha_type)));
            if ( IncludeTakeAlphaFactor()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,358,m_take_alpha_factor);
            }
            if ( IncludeMakeAlphaFactor()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,361,m_make_alpha_factor);
            }
            if ( IncludeTakeProbability()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,364,m_take_probability);
            }
            if ( IncludeMakeProbability()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,367,m_make_probability);
            }
            if ( IncludeTakeSurfPrcOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,370,m_take_surf_prc_offset);
            }
            if ( IncludeTakeSurfVolOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,373,m_take_surf_vol_offset);
            }
            if ( IncludeTakeSurfWidthOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,376,m_take_surf_width_offset);
            }
            if ( IncludeMakeSurfPrcOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,379,m_make_surf_prc_offset);
            }
            if ( IncludeMakeSurfVolOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,382,m_make_surf_vol_offset);
            }
            if ( IncludeMakeSurfWidthOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,385,m_make_surf_width_offset);
            }
            if ( IncludeOrderRefEventMult()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,388,m_order_ref_event_mult);
            }
            if ( IncludeOrderRefEventDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 391, m_order_ref_event_dttm);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1044,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::NbboCap>(m_nbbo_cap)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,394,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>(m_auto_hedge)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,397,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeInst>(m_hedge_instrument)));
            if ( IncludeHedgeSecKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_hedge_sec_key{};
                m_hedge_sec_key.setCodecExpiryKey(expiryKeyLayout_hedge_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 400, expiryKeyLayout_hedge_sec_key);
            }
            if ( IncludeHedgeBetaRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,403,m_hedge_beta_ratio);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,406,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeScope>(m_hedge_scope)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1034,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>(m_hedge_session)));
            if ( IncludeExternHedgeExDest()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,1041,static_cast<string>(m_extern_hedge_ex_dest));
            }
            if ( IncludeExternHedgeParams()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,415,static_cast<string>(m_extern_hedge_params));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,418,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_firm_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,421,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCapacity>(m_order_capacity)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,424,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,427,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            if ( IncludeLocateFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,1042,static_cast<string>(m_locate_firm));
            }
            if ( IncludeLocatePool()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,1043,static_cast<string>(m_locate_pool));
            }
            if ( IncludeNoCrossGroup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,430,static_cast<string>(m_no_cross_group));
            }
            if ( IncludeExchTraderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,433,static_cast<string>(m_exch_trader_id));
            }
            if ( IncludeLargeTraderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,436,static_cast<string>(m_large_trader_id));
            }
            if ( IncludeTradingLocation()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,439,static_cast<string>(m_trading_location));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,484,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_lead_side)));
            if ( IncludeMaxCompletionSlippage()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,487,m_max_completion_slippage);
            }
            if ( IncludeOrderRefPremium()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,490,m_order_ref_premium);
            }
            if ( IncludeNoticeNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,1038,m_notice_number);
            }
            if ( IncludeTheoVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,496,m_theo_vol);
            }
            if ( IncludeClArriveMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,499,m_cl_arrive_mark);
            }
            if ( IncludeRiskGroupId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,502,m_risk_group_id);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1036,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_req_aux_risk_group_ctrl)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,442,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RMetricSource>(m_ref_rmetric1_src)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,445,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RMetricSource>(m_ref_rmetric2_src)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,448,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RMetricSource>(m_ref_rmetric3_src)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,451,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RMetricSource>(m_ref_rmetric4_src)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,454,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RMetricSource>(m_ref_rmetric5_src)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,457,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RMetricSource>(m_ref_rmetric6_src)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,460,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RMetricSource>(m_ref_rmetric7_src)));
            if ( IncludeOrderRefRmetric1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,463,m_order_ref_rmetric1);
            }
            if ( IncludeOrderRefRmetric2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,466,m_order_ref_rmetric2);
            }
            if ( IncludeOrderRefRmetric3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,469,m_order_ref_rmetric3);
            }
            if ( IncludeOrderRefRmetric4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,472,m_order_ref_rmetric4);
            }
            if ( IncludeOrderRefRmetric5()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,475,m_order_ref_rmetric5);
            }
            if ( IncludeOrderRefRmetric6()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,478,m_order_ref_rmetric6);
            }
            if ( IncludeOrderRefRmetric7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,481,m_order_ref_rmetric7);
            }
            if ( IncludeExpDayWtVegaOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,529,m_exp_day_wt_vega_offset);
            }
            if ( IncludeMaxExpDayWtVegaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,523,m_max_exp_day_wt_vega_ln);
            }
            if ( IncludeMaxExpDayWtVegaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,526,m_max_exp_day_wt_vega_sh);
            }
            if ( IncludeMaxExpDayRmetric6Ln()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,559,m_max_exp_day_rmetric6_ln);
            }
            if ( IncludeMaxExpDayRmetric6Sh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,562,m_max_exp_day_rmetric6_sh);
            }
            if ( IncludeSymDayDdeltaOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,556,m_sym_day_ddelta_offset);
            }
            if ( IncludeMaxSymDayDdeltaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,550,m_max_sym_day_ddelta_ln);
            }
            if ( IncludeMaxSymDayDdeltaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,553,m_max_sym_day_ddelta_sh);
            }
            if ( IncludeSymDayVegaOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,538,m_sym_day_vega_offset);
            }
            if ( IncludeMaxSymDayVegaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,532,m_max_sym_day_vega_ln);
            }
            if ( IncludeMaxSymDayVegaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,535,m_max_sym_day_vega_sh);
            }
            if ( IncludeSymDayWtVegaOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,547,m_sym_day_wt_vega_offset);
            }
            if ( IncludeMaxSymDayWtVegaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,541,m_max_sym_day_wt_vega_ln);
            }
            if ( IncludeMaxSymDayWtVegaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,544,m_max_sym_day_wt_vega_sh);
            }
            if ( IncludeMaxSymDayRmetric7Ln()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,568,m_max_sym_day_rmetric7_ln);
            }
            if ( IncludeMaxSymDayRmetric7Sh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,571,m_max_sym_day_rmetric7_sh);
            }
            if ( IncludeMaxGrpDayDdeltaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,577,m_max_grp_day_ddelta_ln);
            }
            if ( IncludeMaxGrpDayDdeltaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,580,m_max_grp_day_ddelta_sh);
            }
            if ( IncludeMaxGrpDayVegaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,586,m_max_grp_day_vega_ln);
            }
            if ( IncludeMaxGrpDayVegaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,589,m_max_grp_day_vega_sh);
            }
            if ( IncludeMaxGrpDayVegaAbs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,592,m_max_grp_day_vega_abs);
            }
            if ( IncludeGrpDayVegaRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,595,m_grp_day_vega_ratio);
            }
            if ( IncludeMaxGrpDayContractsLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,646,m_max_grp_day_contracts_ln);
            }
            if ( IncludeMaxGrpDayContractsSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,649,m_max_grp_day_contracts_sh);
            }
            if ( IncludeMaxGrpDayContractsAbs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,652,m_max_grp_day_contracts_abs);
            }
            if ( IncludeMaxGrpDayRmetric1Ln()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,610,m_max_grp_day_rmetric1_ln);
            }
            if ( IncludeMaxGrpDayRmetric1Sh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,613,m_max_grp_day_rmetric1_sh);
            }
            if ( IncludeMaxGrpDayRmetric1Abs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,616,m_max_grp_day_rmetric1_abs);
            }
            if ( IncludeGrpDayRmetric1Ratio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,619,m_grp_day_rmetric1_ratio);
            }
            if ( IncludeMaxGrpDayRmetric2Ln()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,622,m_max_grp_day_rmetric2_ln);
            }
            if ( IncludeMaxGrpDayRmetric2Sh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,625,m_max_grp_day_rmetric2_sh);
            }
            if ( IncludeMaxGrpDayRmetric3Ln()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,628,m_max_grp_day_rmetric3_ln);
            }
            if ( IncludeMaxGrpDayRmetric3Sh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,631,m_max_grp_day_rmetric3_sh);
            }
            if ( IncludeMaxGrpDayRmetric4Ln()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,634,m_max_grp_day_rmetric4_ln);
            }
            if ( IncludeMaxGrpDayRmetric4Sh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,637,m_max_grp_day_rmetric4_sh);
            }
            if ( IncludeMaxGrpDayRmetric5Ln()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,640,m_max_grp_day_rmetric5_ln);
            }
            if ( IncludeMaxGrpDayRmetric5Sh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,643,m_max_grp_day_rmetric5_sh);
            }
            if ( IncludeSymEmaCxlDdeltaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,655,m_sym_ema_cxl_ddelta_ln);
            }
            if ( IncludeSymEmaCxlDdeltaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,658,m_sym_ema_cxl_ddelta_sh);
            }
            if ( IncludeSymEmaCxlWtVegaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,661,m_sym_ema_cxl_wt_vega_ln);
            }
            if ( IncludeSymEmaCxlWtVegaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,664,m_sym_ema_cxl_wt_vega_sh);
            }
            if ( IncludeLastFillDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 667, m_last_fill_dttm);
            }
            if ( IncludeUserData1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,670,static_cast<string>(m_user_data1));
            }
            if ( IncludeUserData2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,673,static_cast<string>(m_user_data2));
            }
            if ( IncludeChildData()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,676,static_cast<string>(m_child_data));
            }
            if ( IncludeSrcTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,679,m_src_timestamp);
            }
            if ( IncludeSgwTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,682,m_sgw_timestamp);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 685, m_timestamp);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1037,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::InclExclDisclose>(m_include_srnetwork)));
            if ( IncludeDirectedCounterParty()) {
                for (auto& item : m_directed_counter_party) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 694, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeOrderLegs()) {
                for (auto& item : m_order_legs) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 751, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                            m_sys_environment = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_run_status = static_cast<spiderrock::protobuf::api::RunStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_action_type = static_cast<spiderrock::protobuf::api::SpdrActionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_parent_shape = static_cast<spiderrock::protobuf::api::SpdrOrderShape>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_client_seq_num_in = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_order_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_prev_order_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_auto_hedge_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
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
                    case 133: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_src_routing_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_package_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::OptionKeyCodec::TagType) {
                            auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                            m_sec_key.setFromCodec(optionKey);
                        }
                        break;
                    }
                    case 142: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_security_desc = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 154: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_source = static_cast<spiderrock::protobuf::api::SpdrSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_grouping_code = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 1039: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_brkr_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 1040: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_extern_ex_dest = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_extern_params = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_strategy = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 1031: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_user_source = static_cast<spiderrock::protobuf::api::SpdrSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_order_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 181: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_order_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_order_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_order_active_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cur_cum_fill_quantity = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 193: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_add_cum_fill_quantity = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_exposure_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_make_exchanges = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 202: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_public_size = static_cast<spiderrock::protobuf::api::PublicSizeHandling>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 205: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_overlap_cxl_repl = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 208: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_progress_rule = static_cast<spiderrock::protobuf::api::ProgressRule>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 211: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_block_visibility = static_cast<spiderrock::protobuf::api::BlockVisibility>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_progress_slice_cnt = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_progress_expose_time = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vwap_participation = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_min_mkt_on_close_pct = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 226: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_trigger_type = static_cast<spiderrock::protobuf::api::TriggerType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 229: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_trigger_level = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 232: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_responder = static_cast<spiderrock::protobuf::api::AuctionResponder>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_make_exch_fee = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 238: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_take_exch_fee = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 241: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_inc_take_exch_fee = static_cast<spiderrock::protobuf::api::IncExchFee>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 244: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_inc_make_exch_fee = static_cast<spiderrock::protobuf::api::IncExchFee>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 247: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_make_exch_rule = static_cast<spiderrock::protobuf::api::MakeExchRule>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 250: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cxl_uprc_range = static_cast<spiderrock::protobuf::api::UPrcCxl>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 253: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_ubid = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 256: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_uask = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 259: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_min_max_type = static_cast<spiderrock::protobuf::api::MinMaxType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 262: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_option_px = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 265: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_child_orders = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 268: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_exch_mask = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 271: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_stage_type = static_cast<spiderrock::protobuf::api::SpdrStageType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 1032: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_market_session = static_cast<spiderrock::protobuf::api::MarketSession>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 277: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_start_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 280: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_order_duration = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 1033: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_active_duration = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 283: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_good_till_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 286: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_start_type = static_cast<spiderrock::protobuf::api::StartType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 289: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_trigger_group_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 292: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_trigger_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 298: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_parent_order_handling = static_cast<spiderrock::protobuf::api::ParentOrderHandling>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 301: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_parent_balance_handling = static_cast<spiderrock::protobuf::api::ParentBalanceHandling>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 304: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_order_limit_type = static_cast<spiderrock::protobuf::api::SpdrLimitType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 307: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_take_limit_class = static_cast<spiderrock::protobuf::api::SpdrLimitClass>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 310: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_make_limit_class = static_cast<spiderrock::protobuf::api::SpdrLimitClass>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 313: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_take_reach_rule = static_cast<spiderrock::protobuf::api::ReachRule>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 316: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_order_prc_limit = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 319: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_order_ref_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 322: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_ref_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 325: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_ref_gamma = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 328: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_vol_limit = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 331: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rate_override = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 334: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sdiv_override = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 337: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_ddiv_override = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 340: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_override_code = static_cast<spiderrock::protobuf::api::OverrideCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 343: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_order_prc_offset = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 346: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_state_model = static_cast<spiderrock::protobuf::api::StateModel>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 349: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_u_state_model = static_cast<spiderrock::protobuf::api::StateModel>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 352: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_take_alpha_type = static_cast<spiderrock::protobuf::api::AlphaType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 355: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_make_alpha_type = static_cast<spiderrock::protobuf::api::AlphaType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 358: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_take_alpha_factor = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 361: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_make_alpha_factor = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 364: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_take_probability = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 367: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_make_probability = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 370: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_take_surf_prc_offset = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 373: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_take_surf_vol_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 376: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_take_surf_width_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 379: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_make_surf_prc_offset = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 382: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_make_surf_vol_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 385: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_make_surf_width_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 388: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_ref_event_mult = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 391: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_order_ref_event_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 1044: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_nbbo_cap = static_cast<spiderrock::protobuf::api::NbboCap>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 394: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auto_hedge = static_cast<spiderrock::protobuf::api::AutoHedge>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 397: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_instrument = static_cast<spiderrock::protobuf::api::HedgeInst>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 400: {
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_hedge_sec_key.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 403: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_hedge_beta_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 406: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_scope = static_cast<spiderrock::protobuf::api::HedgeScope>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 1034: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_session = static_cast<spiderrock::protobuf::api::MarketSession>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 1041: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_extern_hedge_ex_dest = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 415: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_extern_hedge_params = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 418: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_firm_type = static_cast<spiderrock::protobuf::api::FirmType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 421: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_order_capacity = static_cast<spiderrock::protobuf::api::OrderCapacity>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 424: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_position_type = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 427: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ssale_flag = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 1042: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_locate_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 1043: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_locate_pool = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 430: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_no_cross_group = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 433: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exch_trader_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 436: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_large_trader_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 439: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_trading_location = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 484: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_lead_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 487: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_max_completion_slippage = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 490: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_ref_premium = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 1038: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_notice_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 496: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_theo_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 499: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cl_arrive_mark = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 502: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_risk_group_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 1036: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_req_aux_risk_group_ctrl = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 442: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ref_rmetric1_src = static_cast<spiderrock::protobuf::api::RMetricSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 445: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ref_rmetric2_src = static_cast<spiderrock::protobuf::api::RMetricSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 448: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ref_rmetric3_src = static_cast<spiderrock::protobuf::api::RMetricSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 451: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ref_rmetric4_src = static_cast<spiderrock::protobuf::api::RMetricSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 454: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ref_rmetric5_src = static_cast<spiderrock::protobuf::api::RMetricSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 457: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ref_rmetric6_src = static_cast<spiderrock::protobuf::api::RMetricSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 460: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ref_rmetric7_src = static_cast<spiderrock::protobuf::api::RMetricSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 463: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_ref_rmetric1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 466: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_ref_rmetric2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 469: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_ref_rmetric3 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 472: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_ref_rmetric4 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 475: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_ref_rmetric5 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 478: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_ref_rmetric6 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 481: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_ref_rmetric7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 529: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_exp_day_wt_vega_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 523: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_exp_day_wt_vega_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 526: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_exp_day_wt_vega_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 559: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_exp_day_rmetric6_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 562: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_exp_day_rmetric6_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 556: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sym_day_ddelta_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 550: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_sym_day_ddelta_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 553: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_sym_day_ddelta_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 538: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sym_day_vega_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 532: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_sym_day_vega_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 535: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_sym_day_vega_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 547: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sym_day_wt_vega_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 541: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_sym_day_wt_vega_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 544: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_sym_day_wt_vega_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 568: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_sym_day_rmetric7_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 571: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_sym_day_rmetric7_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 577: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_ddelta_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 580: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_ddelta_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 586: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_vega_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 589: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_vega_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 592: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_vega_abs = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 595: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_grp_day_vega_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 646: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_grp_day_contracts_ln = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 649: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_grp_day_contracts_sh = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 652: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_grp_day_contracts_abs = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 610: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric1_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 613: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric1_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 616: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric1_abs = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 619: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_grp_day_rmetric1_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 622: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric2_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 625: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric2_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 628: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric3_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 631: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric3_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 634: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric4_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 637: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric4_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 640: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric5_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 643: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric5_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 655: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sym_ema_cxl_ddelta_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 658: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sym_ema_cxl_ddelta_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 661: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sym_ema_cxl_wt_vega_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 664: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sym_ema_cxl_wt_vega_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 667: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_last_fill_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 670: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_data1 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 673: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_data2 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 676: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_child_data = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 679: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_src_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 682: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_sgw_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 685: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 1037: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_include_srnetwork = static_cast<spiderrock::protobuf::api::InclExclDisclose>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 694: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            directed_counter_party item_directed_counter_party;
                            item_directed_counter_party.Decode(pos, pos+length);  
                            m_directed_counter_party.emplace_back(item_directed_counter_party);
                        }
                        break;
                    }
                    case 751: {
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

    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::_meta>() const { return SpdrParentOrder::_meta{ m__meta}; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::pkey>() const { return SpdrParentOrder::pkey{ m_pkey}; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::sys_environment>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_sys_environment)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::run_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>( m_run_status)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::spdr_action_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrActionType>( m_spdr_action_type)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::parent_shape>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>( m_parent_shape)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::client_seq_num_in>() const { return m_client_seq_num_in; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::alt_order_id>() const { return m_alt_order_id; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::alt_prev_order_id>() const { return m_alt_prev_order_id; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::alt_auto_hedge_id>() const { return m_alt_auto_hedge_id; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::alt_accnt>() const { return m_alt_accnt; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::alt_user_name>() const { return m_alt_user_name; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::src_routing_code>() const { return m_src_routing_code; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::package_id>() const { return m_package_id; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::sec_key>() const { return SpdrParentOrder::sec_key{ m_sec_key}; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_sec_type)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::security_desc>() const { return m_security_desc; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::accnt>() const { return m_accnt; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::client_firm>() const { return m_client_firm; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::spdr_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>( m_spdr_source)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::grouping_code>() const { return m_grouping_code; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::exec_brkr_code>() const { return m_exec_brkr_code; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::extern_ex_dest>() const { return m_extern_ex_dest; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::extern_params>() const { return m_extern_params; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::strategy>() const { return m_strategy; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::user_name>() const { return m_user_name; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::user_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>( m_user_source)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::order_dttm>() const { return m_order_dttm; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::order_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_order_side)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::order_size>() const { return m_order_size; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::order_active_size>() const { return m_order_active_size; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::cur_cum_fill_quantity>() const { return m_cur_cum_fill_quantity; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::add_cum_fill_quantity>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_add_cum_fill_quantity)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_exposure_size>() const { return m_max_exposure_size; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::num_make_exchanges>() const { return m_num_make_exchanges; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::public_size>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PublicSizeHandling>( m_public_size)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::can_overlap_cxl_repl>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_overlap_cxl_repl)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::progress_rule>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProgressRule>( m_progress_rule)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::block_visibility>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BlockVisibility>( m_block_visibility)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::progress_slice_cnt>() const { return m_progress_slice_cnt; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::progress_expose_time>() const { return m_progress_expose_time; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::vwap_participation>() const { return m_vwap_participation; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::min_mkt_on_close_pct>() const { return m_min_mkt_on_close_pct; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::trigger_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TriggerType>( m_trigger_type)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::trigger_level>() const { return m_trigger_level; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::auction_responder>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionResponder>( m_auction_responder)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_make_exch_fee>() const { return m_max_make_exch_fee; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_take_exch_fee>() const { return m_max_take_exch_fee; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::inc_take_exch_fee>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::IncExchFee>( m_inc_take_exch_fee)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::inc_make_exch_fee>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::IncExchFee>( m_inc_make_exch_fee)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::make_exch_rule>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MakeExchRule>( m_make_exch_rule)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::cxl_uprc_range>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UPrcCxl>( m_cxl_uprc_range)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::min_ubid>() const { return m_min_ubid; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_uask>() const { return m_max_uask; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::min_max_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MinMaxType>( m_min_max_type)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::min_option_px>() const { return m_min_option_px; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_child_orders>() const { return m_max_child_orders; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::exch_mask>() const { return m_exch_mask; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::spdr_stage_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrStageType>( m_spdr_stage_type)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::market_session>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>( m_market_session)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::start_dttm>() const { return m_start_dttm; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::order_duration>() const { return m_order_duration; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::active_duration>() const { return m_active_duration; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::good_till_dttm>() const { return m_good_till_dttm; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::start_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StartType>( m_start_type)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::trigger_group_id>() const { return m_trigger_group_id; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::trigger_timestamp>() const { return m_trigger_timestamp; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::parent_order_handling>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentOrderHandling>( m_parent_order_handling)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::parent_balance_handling>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentBalanceHandling>( m_parent_balance_handling)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::order_limit_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitType>( m_order_limit_type)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::take_limit_class>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>( m_take_limit_class)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::make_limit_class>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>( m_make_limit_class)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::take_reach_rule>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ReachRule>( m_take_reach_rule)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::order_prc_limit>() const { return m_order_prc_limit; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::order_ref_uprc>() const { return m_order_ref_uprc; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::order_ref_delta>() const { return m_order_ref_delta; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::order_ref_gamma>() const { return m_order_ref_gamma; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::order_vol_limit>() const { return m_order_vol_limit; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::rate_override>() const { return m_rate_override; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::sdiv_override>() const { return m_sdiv_override; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::ddiv_override>() const { return m_ddiv_override; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::override_code>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OverrideCode>( m_override_code)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::order_prc_offset>() const { return m_order_prc_offset; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::state_model>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StateModel>( m_state_model)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::u_state_model>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StateModel>( m_u_state_model)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::take_alpha_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>( m_take_alpha_type)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::make_alpha_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>( m_make_alpha_type)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::take_alpha_factor>() const { return m_take_alpha_factor; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::make_alpha_factor>() const { return m_make_alpha_factor; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::take_probability>() const { return m_take_probability; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::make_probability>() const { return m_make_probability; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::take_surf_prc_offset>() const { return m_take_surf_prc_offset; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::take_surf_vol_offset>() const { return m_take_surf_vol_offset; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::take_surf_width_offset>() const { return m_take_surf_width_offset; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::make_surf_prc_offset>() const { return m_make_surf_prc_offset; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::make_surf_vol_offset>() const { return m_make_surf_vol_offset; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::make_surf_width_offset>() const { return m_make_surf_width_offset; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::order_ref_event_mult>() const { return m_order_ref_event_mult; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::order_ref_event_dttm>() const { return m_order_ref_event_dttm; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::nbbo_cap>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::NbboCap>( m_nbbo_cap)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::auto_hedge>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>( m_auto_hedge)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::hedge_instrument>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeInst>( m_hedge_instrument)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::hedge_sec_key>() const { return SpdrParentOrder::hedge_sec_key{ m_hedge_sec_key}; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::hedge_beta_ratio>() const { return m_hedge_beta_ratio; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::hedge_scope>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeScope>( m_hedge_scope)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::hedge_session>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>( m_hedge_session)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::extern_hedge_ex_dest>() const { return m_extern_hedge_ex_dest; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::extern_hedge_params>() const { return m_extern_hedge_params; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::firm_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>( m_firm_type)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::order_capacity>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCapacity>( m_order_capacity)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::position_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>( m_position_type)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::ssale_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>( m_ssale_flag)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::locate_firm>() const { return m_locate_firm; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::locate_pool>() const { return m_locate_pool; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::no_cross_group>() const { return m_no_cross_group; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::exch_trader_id>() const { return m_exch_trader_id; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::large_trader_id>() const { return m_large_trader_id; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::trading_location>() const { return m_trading_location; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::lead_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_lead_side)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_completion_slippage>() const { return m_max_completion_slippage; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::order_ref_premium>() const { return m_order_ref_premium; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::notice_number>() const { return m_notice_number; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::theo_vol>() const { return m_theo_vol; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::cl_arrive_mark>() const { return m_cl_arrive_mark; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::risk_group_id>() const { return m_risk_group_id; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::req_aux_risk_group_ctrl>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_req_aux_risk_group_ctrl)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::ref_rmetric1_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RMetricSource>( m_ref_rmetric1_src)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::ref_rmetric2_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RMetricSource>( m_ref_rmetric2_src)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::ref_rmetric3_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RMetricSource>( m_ref_rmetric3_src)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::ref_rmetric4_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RMetricSource>( m_ref_rmetric4_src)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::ref_rmetric5_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RMetricSource>( m_ref_rmetric5_src)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::ref_rmetric6_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RMetricSource>( m_ref_rmetric6_src)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::ref_rmetric7_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RMetricSource>( m_ref_rmetric7_src)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::order_ref_rmetric1>() const { return m_order_ref_rmetric1; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::order_ref_rmetric2>() const { return m_order_ref_rmetric2; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::order_ref_rmetric3>() const { return m_order_ref_rmetric3; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::order_ref_rmetric4>() const { return m_order_ref_rmetric4; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::order_ref_rmetric5>() const { return m_order_ref_rmetric5; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::order_ref_rmetric6>() const { return m_order_ref_rmetric6; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::order_ref_rmetric7>() const { return m_order_ref_rmetric7; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::exp_day_wt_vega_offset>() const { return m_exp_day_wt_vega_offset; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_exp_day_wt_vega_ln>() const { return m_max_exp_day_wt_vega_ln; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_exp_day_wt_vega_sh>() const { return m_max_exp_day_wt_vega_sh; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_exp_day_rmetric6_ln>() const { return m_max_exp_day_rmetric6_ln; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_exp_day_rmetric6_sh>() const { return m_max_exp_day_rmetric6_sh; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::sym_day_ddelta_offset>() const { return m_sym_day_ddelta_offset; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_sym_day_ddelta_ln>() const { return m_max_sym_day_ddelta_ln; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_sym_day_ddelta_sh>() const { return m_max_sym_day_ddelta_sh; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::sym_day_vega_offset>() const { return m_sym_day_vega_offset; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_sym_day_vega_ln>() const { return m_max_sym_day_vega_ln; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_sym_day_vega_sh>() const { return m_max_sym_day_vega_sh; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::sym_day_wt_vega_offset>() const { return m_sym_day_wt_vega_offset; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_sym_day_wt_vega_ln>() const { return m_max_sym_day_wt_vega_ln; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_sym_day_wt_vega_sh>() const { return m_max_sym_day_wt_vega_sh; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_sym_day_rmetric7_ln>() const { return m_max_sym_day_rmetric7_ln; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_sym_day_rmetric7_sh>() const { return m_max_sym_day_rmetric7_sh; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_grp_day_ddelta_ln>() const { return m_max_grp_day_ddelta_ln; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_grp_day_ddelta_sh>() const { return m_max_grp_day_ddelta_sh; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_grp_day_vega_ln>() const { return m_max_grp_day_vega_ln; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_grp_day_vega_sh>() const { return m_max_grp_day_vega_sh; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_grp_day_vega_abs>() const { return m_max_grp_day_vega_abs; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::grp_day_vega_ratio>() const { return m_grp_day_vega_ratio; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_grp_day_contracts_ln>() const { return m_max_grp_day_contracts_ln; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_grp_day_contracts_sh>() const { return m_max_grp_day_contracts_sh; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_grp_day_contracts_abs>() const { return m_max_grp_day_contracts_abs; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_grp_day_rmetric1_ln>() const { return m_max_grp_day_rmetric1_ln; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_grp_day_rmetric1_sh>() const { return m_max_grp_day_rmetric1_sh; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_grp_day_rmetric1_abs>() const { return m_max_grp_day_rmetric1_abs; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::grp_day_rmetric1_ratio>() const { return m_grp_day_rmetric1_ratio; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_grp_day_rmetric2_ln>() const { return m_max_grp_day_rmetric2_ln; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_grp_day_rmetric2_sh>() const { return m_max_grp_day_rmetric2_sh; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_grp_day_rmetric3_ln>() const { return m_max_grp_day_rmetric3_ln; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_grp_day_rmetric3_sh>() const { return m_max_grp_day_rmetric3_sh; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_grp_day_rmetric4_ln>() const { return m_max_grp_day_rmetric4_ln; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_grp_day_rmetric4_sh>() const { return m_max_grp_day_rmetric4_sh; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_grp_day_rmetric5_ln>() const { return m_max_grp_day_rmetric5_ln; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::max_grp_day_rmetric5_sh>() const { return m_max_grp_day_rmetric5_sh; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::sym_ema_cxl_ddelta_ln>() const { return m_sym_ema_cxl_ddelta_ln; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::sym_ema_cxl_ddelta_sh>() const { return m_sym_ema_cxl_ddelta_sh; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::sym_ema_cxl_wt_vega_ln>() const { return m_sym_ema_cxl_wt_vega_ln; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::sym_ema_cxl_wt_vega_sh>() const { return m_sym_ema_cxl_wt_vega_sh; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::last_fill_dttm>() const { return m_last_fill_dttm; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::user_data1>() const { return m_user_data1; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::user_data2>() const { return m_user_data2; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::child_data>() const { return m_child_data; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::src_timestamp>() const { return m_src_timestamp; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::sgw_timestamp>() const { return m_sgw_timestamp; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::include_srnetwork>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::InclExclDisclose>( m_include_srnetwork)); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::directed_counter_party>(int i) const { return SpdrParentOrder::directed_counter_party{ get_directed_counter_party(i)}; }
    template<> inline int SpdrParentOrder::count<SpdrParentOrder::directed_counter_party>() const { return static_cast<int>( m_directed_counter_party.size()); }
    template<> inline const auto SpdrParentOrder::get<SpdrParentOrder::order_legs>(int i) const { return SpdrParentOrder::order_legs{ get_order_legs(i)}; }
    template<> inline int SpdrParentOrder::count<SpdrParentOrder::order_legs>() const { return static_cast<int>( m_order_legs.size()); }
    template<> inline const auto SpdrParentOrder_PKey::get<SpdrParentOrder_PKey::parent_number>() const { return m_parent_number; }
    
    template<> inline const auto SpdrParentOrder_DirectedCounterParty::get<SpdrParentOrder_DirectedCounterParty::client_firm>() const { return m_client_firm; }
    template<> inline const auto SpdrParentOrder_DirectedCounterParty::get<SpdrParentOrder_DirectedCounterParty::incl_excl>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::InclExclDisclose>(m_incl_excl));}
    
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::ticker>() const { return SpdrParentOrder_OrderLegs::ticker{m_ticker}; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::stock_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_stock_side));}
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::stock_shares>() const { return m_stock_shares; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::stock_leg_id>() const { return m_stock_leg_id; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::alt_stk_leg_id>() const { return m_alt_stk_leg_id; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::ssale_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag));}
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::ref_uprc>() const { return m_ref_uprc; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::num_legs>() const { return m_num_legs; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::sec_key1>() const { return SpdrParentOrder_OrderLegs::sec_key1{m_sec_key1}; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::sec_type1>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type1));}
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::mult1>() const { return m_mult1; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::side1>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side1));}
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::leg_id1>() const { return m_leg_id1; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::alt_leg_id1>() const { return m_alt_leg_id1; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::pos_type1>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type1));}
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::ssale_flag1>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag1));}
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::vega1>() const { return m_vega1; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::ref_uprc1>() const { return m_ref_uprc1; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::ref_delta1>() const { return m_ref_delta1; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::ref_earn_cnt1>() const { return m_ref_earn_cnt1; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::sec_key2>() const { return SpdrParentOrder_OrderLegs::sec_key2{m_sec_key2}; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::sec_type2>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type2));}
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::mult2>() const { return m_mult2; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::side2>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side2));}
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::leg_id2>() const { return m_leg_id2; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::alt_leg_id2>() const { return m_alt_leg_id2; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::pos_type2>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type2));}
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::ssale_flag2>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag2));}
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::vega2>() const { return m_vega2; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::ref_uprc2>() const { return m_ref_uprc2; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::ref_delta2>() const { return m_ref_delta2; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::ref_earn_cnt2>() const { return m_ref_earn_cnt2; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::sec_key3>() const { return SpdrParentOrder_OrderLegs::sec_key3{m_sec_key3}; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::sec_type3>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type3));}
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::mult3>() const { return m_mult3; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::side3>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side3));}
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::leg_id3>() const { return m_leg_id3; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::alt_leg_id3>() const { return m_alt_leg_id3; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::pos_type3>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type3));}
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::ssale_flag3>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag3));}
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::vega3>() const { return m_vega3; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::ref_uprc3>() const { return m_ref_uprc3; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::ref_delta3>() const { return m_ref_delta3; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::ref_earn_cnt3>() const { return m_ref_earn_cnt3; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::sec_key4>() const { return SpdrParentOrder_OrderLegs::sec_key4{m_sec_key4}; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::sec_type4>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type4));}
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::mult4>() const { return m_mult4; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::side4>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side4));}
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::leg_id4>() const { return m_leg_id4; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::alt_leg_id4>() const { return m_alt_leg_id4; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::pos_type4>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type4));}
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::ssale_flag4>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag4));}
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::vega4>() const { return m_vega4; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::ref_uprc4>() const { return m_ref_uprc4; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::ref_delta4>() const { return m_ref_delta4; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::ref_earn_cnt4>() const { return m_ref_earn_cnt4; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::sec_key5>() const { return SpdrParentOrder_OrderLegs::sec_key5{m_sec_key5}; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::sec_type5>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type5));}
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::mult5>() const { return m_mult5; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::side5>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side5));}
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::leg_id5>() const { return m_leg_id5; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::alt_leg_id5>() const { return m_alt_leg_id5; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::pos_type5>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type5));}
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::ssale_flag5>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag5));}
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::vega5>() const { return m_vega5; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::ref_uprc5>() const { return m_ref_uprc5; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::ref_delta5>() const { return m_ref_delta5; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::ref_earn_cnt5>() const { return m_ref_earn_cnt5; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::sec_key6>() const { return SpdrParentOrder_OrderLegs::sec_key6{m_sec_key6}; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::sec_type6>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type6));}
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::mult6>() const { return m_mult6; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::side6>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side6));}
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::leg_id6>() const { return m_leg_id6; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::alt_leg_id6>() const { return m_alt_leg_id6; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::pos_type6>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type6));}
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::ssale_flag6>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag6));}
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::vega6>() const { return m_vega6; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::ref_uprc6>() const { return m_ref_uprc6; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::ref_delta6>() const { return m_ref_delta6; }
    template<> inline const auto SpdrParentOrder_OrderLegs::get<SpdrParentOrder_OrderLegs::ref_earn_cnt6>() const { return m_ref_earn_cnt6; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrParentOrder_PKey& m) {
        o << "\"parent_number\":" << m.get<SpdrParentOrder_PKey::parent_number>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrParentOrder_DirectedCounterParty& m) {
        o << "\"client_firm\":\"" << m.get<SpdrParentOrder_DirectedCounterParty::client_firm>() << "\"";
        o << ",\"incl_excl\":" << (int64_t)m.get<SpdrParentOrder_DirectedCounterParty::incl_excl>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrParentOrder_OrderLegs& m) {
        o << "\"ticker\":{" << m.get<SpdrParentOrder_OrderLegs::ticker>() << "}";
        o << ",\"stock_side\":" << (int64_t)m.get<SpdrParentOrder_OrderLegs::stock_side>();
        o << ",\"stock_shares\":" << m.get<SpdrParentOrder_OrderLegs::stock_shares>();
        o << ",\"stock_leg_id\":" << m.get<SpdrParentOrder_OrderLegs::stock_leg_id>();
        o << ",\"alt_stk_leg_id\":\"" << m.get<SpdrParentOrder_OrderLegs::alt_stk_leg_id>() << "\"";
        o << ",\"ssale_flag\":" << (int64_t)m.get<SpdrParentOrder_OrderLegs::ssale_flag>();
        o << ",\"ref_uprc\":" << m.get<SpdrParentOrder_OrderLegs::ref_uprc>();
        o << ",\"num_legs\":" << m.get<SpdrParentOrder_OrderLegs::num_legs>();
        o << ",\"sec_key1\":{" << m.get<SpdrParentOrder_OrderLegs::sec_key1>() << "}";
        o << ",\"sec_type1\":" << (int64_t)m.get<SpdrParentOrder_OrderLegs::sec_type1>();
        o << ",\"mult1\":" << m.get<SpdrParentOrder_OrderLegs::mult1>();
        o << ",\"side1\":" << (int64_t)m.get<SpdrParentOrder_OrderLegs::side1>();
        o << ",\"leg_id1\":" << m.get<SpdrParentOrder_OrderLegs::leg_id1>();
        o << ",\"alt_leg_id1\":\"" << m.get<SpdrParentOrder_OrderLegs::alt_leg_id1>() << "\"";
        o << ",\"pos_type1\":" << (int64_t)m.get<SpdrParentOrder_OrderLegs::pos_type1>();
        o << ",\"ssale_flag1\":" << (int64_t)m.get<SpdrParentOrder_OrderLegs::ssale_flag1>();
        o << ",\"vega1\":" << m.get<SpdrParentOrder_OrderLegs::vega1>();
        o << ",\"ref_uprc1\":" << m.get<SpdrParentOrder_OrderLegs::ref_uprc1>();
        o << ",\"ref_delta1\":" << m.get<SpdrParentOrder_OrderLegs::ref_delta1>();
        o << ",\"ref_earn_cnt1\":" << m.get<SpdrParentOrder_OrderLegs::ref_earn_cnt1>();
        o << ",\"sec_key2\":{" << m.get<SpdrParentOrder_OrderLegs::sec_key2>() << "}";
        o << ",\"sec_type2\":" << (int64_t)m.get<SpdrParentOrder_OrderLegs::sec_type2>();
        o << ",\"mult2\":" << m.get<SpdrParentOrder_OrderLegs::mult2>();
        o << ",\"side2\":" << (int64_t)m.get<SpdrParentOrder_OrderLegs::side2>();
        o << ",\"leg_id2\":" << m.get<SpdrParentOrder_OrderLegs::leg_id2>();
        o << ",\"alt_leg_id2\":\"" << m.get<SpdrParentOrder_OrderLegs::alt_leg_id2>() << "\"";
        o << ",\"pos_type2\":" << (int64_t)m.get<SpdrParentOrder_OrderLegs::pos_type2>();
        o << ",\"ssale_flag2\":" << (int64_t)m.get<SpdrParentOrder_OrderLegs::ssale_flag2>();
        o << ",\"vega2\":" << m.get<SpdrParentOrder_OrderLegs::vega2>();
        o << ",\"ref_uprc2\":" << m.get<SpdrParentOrder_OrderLegs::ref_uprc2>();
        o << ",\"ref_delta2\":" << m.get<SpdrParentOrder_OrderLegs::ref_delta2>();
        o << ",\"ref_earn_cnt2\":" << m.get<SpdrParentOrder_OrderLegs::ref_earn_cnt2>();
        o << ",\"sec_key3\":{" << m.get<SpdrParentOrder_OrderLegs::sec_key3>() << "}";
        o << ",\"sec_type3\":" << (int64_t)m.get<SpdrParentOrder_OrderLegs::sec_type3>();
        o << ",\"mult3\":" << m.get<SpdrParentOrder_OrderLegs::mult3>();
        o << ",\"side3\":" << (int64_t)m.get<SpdrParentOrder_OrderLegs::side3>();
        o << ",\"leg_id3\":" << m.get<SpdrParentOrder_OrderLegs::leg_id3>();
        o << ",\"alt_leg_id3\":\"" << m.get<SpdrParentOrder_OrderLegs::alt_leg_id3>() << "\"";
        o << ",\"pos_type3\":" << (int64_t)m.get<SpdrParentOrder_OrderLegs::pos_type3>();
        o << ",\"ssale_flag3\":" << (int64_t)m.get<SpdrParentOrder_OrderLegs::ssale_flag3>();
        o << ",\"vega3\":" << m.get<SpdrParentOrder_OrderLegs::vega3>();
        o << ",\"ref_uprc3\":" << m.get<SpdrParentOrder_OrderLegs::ref_uprc3>();
        o << ",\"ref_delta3\":" << m.get<SpdrParentOrder_OrderLegs::ref_delta3>();
        o << ",\"ref_earn_cnt3\":" << m.get<SpdrParentOrder_OrderLegs::ref_earn_cnt3>();
        o << ",\"sec_key4\":{" << m.get<SpdrParentOrder_OrderLegs::sec_key4>() << "}";
        o << ",\"sec_type4\":" << (int64_t)m.get<SpdrParentOrder_OrderLegs::sec_type4>();
        o << ",\"mult4\":" << m.get<SpdrParentOrder_OrderLegs::mult4>();
        o << ",\"side4\":" << (int64_t)m.get<SpdrParentOrder_OrderLegs::side4>();
        o << ",\"leg_id4\":" << m.get<SpdrParentOrder_OrderLegs::leg_id4>();
        o << ",\"alt_leg_id4\":\"" << m.get<SpdrParentOrder_OrderLegs::alt_leg_id4>() << "\"";
        o << ",\"pos_type4\":" << (int64_t)m.get<SpdrParentOrder_OrderLegs::pos_type4>();
        o << ",\"ssale_flag4\":" << (int64_t)m.get<SpdrParentOrder_OrderLegs::ssale_flag4>();
        o << ",\"vega4\":" << m.get<SpdrParentOrder_OrderLegs::vega4>();
        o << ",\"ref_uprc4\":" << m.get<SpdrParentOrder_OrderLegs::ref_uprc4>();
        o << ",\"ref_delta4\":" << m.get<SpdrParentOrder_OrderLegs::ref_delta4>();
        o << ",\"ref_earn_cnt4\":" << m.get<SpdrParentOrder_OrderLegs::ref_earn_cnt4>();
        o << ",\"sec_key5\":{" << m.get<SpdrParentOrder_OrderLegs::sec_key5>() << "}";
        o << ",\"sec_type5\":" << (int64_t)m.get<SpdrParentOrder_OrderLegs::sec_type5>();
        o << ",\"mult5\":" << m.get<SpdrParentOrder_OrderLegs::mult5>();
        o << ",\"side5\":" << (int64_t)m.get<SpdrParentOrder_OrderLegs::side5>();
        o << ",\"leg_id5\":" << m.get<SpdrParentOrder_OrderLegs::leg_id5>();
        o << ",\"alt_leg_id5\":\"" << m.get<SpdrParentOrder_OrderLegs::alt_leg_id5>() << "\"";
        o << ",\"pos_type5\":" << (int64_t)m.get<SpdrParentOrder_OrderLegs::pos_type5>();
        o << ",\"ssale_flag5\":" << (int64_t)m.get<SpdrParentOrder_OrderLegs::ssale_flag5>();
        o << ",\"vega5\":" << m.get<SpdrParentOrder_OrderLegs::vega5>();
        o << ",\"ref_uprc5\":" << m.get<SpdrParentOrder_OrderLegs::ref_uprc5>();
        o << ",\"ref_delta5\":" << m.get<SpdrParentOrder_OrderLegs::ref_delta5>();
        o << ",\"ref_earn_cnt5\":" << m.get<SpdrParentOrder_OrderLegs::ref_earn_cnt5>();
        o << ",\"sec_key6\":{" << m.get<SpdrParentOrder_OrderLegs::sec_key6>() << "}";
        o << ",\"sec_type6\":" << (int64_t)m.get<SpdrParentOrder_OrderLegs::sec_type6>();
        o << ",\"mult6\":" << m.get<SpdrParentOrder_OrderLegs::mult6>();
        o << ",\"side6\":" << (int64_t)m.get<SpdrParentOrder_OrderLegs::side6>();
        o << ",\"leg_id6\":" << m.get<SpdrParentOrder_OrderLegs::leg_id6>();
        o << ",\"alt_leg_id6\":\"" << m.get<SpdrParentOrder_OrderLegs::alt_leg_id6>() << "\"";
        o << ",\"pos_type6\":" << (int64_t)m.get<SpdrParentOrder_OrderLegs::pos_type6>();
        o << ",\"ssale_flag6\":" << (int64_t)m.get<SpdrParentOrder_OrderLegs::ssale_flag6>();
        o << ",\"vega6\":" << m.get<SpdrParentOrder_OrderLegs::vega6>();
        o << ",\"ref_uprc6\":" << m.get<SpdrParentOrder_OrderLegs::ref_uprc6>();
        o << ",\"ref_delta6\":" << m.get<SpdrParentOrder_OrderLegs::ref_delta6>();
        o << ",\"ref_earn_cnt6\":" << m.get<SpdrParentOrder_OrderLegs::ref_earn_cnt6>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrParentOrder& m) {
        o << "\"_meta\":{" << m.get<SpdrParentOrder::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrParentOrder::pkey>() << "}";
        o << ",\"sys_environment\":" << (int64_t)m.get<SpdrParentOrder::sys_environment>();
        o << ",\"run_status\":" << (int64_t)m.get<SpdrParentOrder::run_status>();
        o << ",\"spdr_action_type\":" << (int64_t)m.get<SpdrParentOrder::spdr_action_type>();
        o << ",\"parent_shape\":" << (int64_t)m.get<SpdrParentOrder::parent_shape>();
        o << ",\"client_seq_num_in\":" << m.get<SpdrParentOrder::client_seq_num_in>();
        o << ",\"alt_order_id\":\"" << m.get<SpdrParentOrder::alt_order_id>() << "\"";
        o << ",\"alt_prev_order_id\":\"" << m.get<SpdrParentOrder::alt_prev_order_id>() << "\"";
        o << ",\"alt_auto_hedge_id\":\"" << m.get<SpdrParentOrder::alt_auto_hedge_id>() << "\"";
        o << ",\"alt_accnt\":\"" << m.get<SpdrParentOrder::alt_accnt>() << "\"";
        o << ",\"alt_user_name\":\"" << m.get<SpdrParentOrder::alt_user_name>() << "\"";
        o << ",\"src_routing_code\":\"" << m.get<SpdrParentOrder::src_routing_code>() << "\"";
        o << ",\"package_id\":" << m.get<SpdrParentOrder::package_id>();
        o << ",\"sec_key\":{" << m.get<SpdrParentOrder::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<SpdrParentOrder::sec_type>();
        o << ",\"security_desc\":\"" << m.get<SpdrParentOrder::security_desc>() << "\"";
        o << ",\"accnt\":\"" << m.get<SpdrParentOrder::accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<SpdrParentOrder::client_firm>() << "\"";
        o << ",\"spdr_source\":" << (int64_t)m.get<SpdrParentOrder::spdr_source>();
        o << ",\"grouping_code\":" << m.get<SpdrParentOrder::grouping_code>();
        o << ",\"exec_brkr_code\":\"" << m.get<SpdrParentOrder::exec_brkr_code>() << "\"";
        o << ",\"extern_ex_dest\":\"" << m.get<SpdrParentOrder::extern_ex_dest>() << "\"";
        o << ",\"extern_params\":\"" << m.get<SpdrParentOrder::extern_params>() << "\"";
        o << ",\"strategy\":\"" << m.get<SpdrParentOrder::strategy>() << "\"";
        o << ",\"user_name\":\"" << m.get<SpdrParentOrder::user_name>() << "\"";
        o << ",\"user_source\":" << (int64_t)m.get<SpdrParentOrder::user_source>();
        {
            std::time_t tt = m.get<SpdrParentOrder::order_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"order_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"order_side\":" << (int64_t)m.get<SpdrParentOrder::order_side>();
        o << ",\"order_size\":" << m.get<SpdrParentOrder::order_size>();
        o << ",\"order_active_size\":" << m.get<SpdrParentOrder::order_active_size>();
        o << ",\"cur_cum_fill_quantity\":" << m.get<SpdrParentOrder::cur_cum_fill_quantity>();
        o << ",\"add_cum_fill_quantity\":" << (int64_t)m.get<SpdrParentOrder::add_cum_fill_quantity>();
        o << ",\"max_exposure_size\":" << m.get<SpdrParentOrder::max_exposure_size>();
        o << ",\"num_make_exchanges\":" << m.get<SpdrParentOrder::num_make_exchanges>();
        o << ",\"public_size\":" << (int64_t)m.get<SpdrParentOrder::public_size>();
        o << ",\"can_overlap_cxl_repl\":" << (int64_t)m.get<SpdrParentOrder::can_overlap_cxl_repl>();
        o << ",\"progress_rule\":" << (int64_t)m.get<SpdrParentOrder::progress_rule>();
        o << ",\"block_visibility\":" << (int64_t)m.get<SpdrParentOrder::block_visibility>();
        o << ",\"progress_slice_cnt\":" << m.get<SpdrParentOrder::progress_slice_cnt>();
        o << ",\"progress_expose_time\":" << m.get<SpdrParentOrder::progress_expose_time>();
        o << ",\"vwap_participation\":" << m.get<SpdrParentOrder::vwap_participation>();
        o << ",\"min_mkt_on_close_pct\":" << m.get<SpdrParentOrder::min_mkt_on_close_pct>();
        o << ",\"trigger_type\":" << (int64_t)m.get<SpdrParentOrder::trigger_type>();
        o << ",\"trigger_level\":" << m.get<SpdrParentOrder::trigger_level>();
        o << ",\"auction_responder\":" << (int64_t)m.get<SpdrParentOrder::auction_responder>();
        o << ",\"max_make_exch_fee\":" << m.get<SpdrParentOrder::max_make_exch_fee>();
        o << ",\"max_take_exch_fee\":" << m.get<SpdrParentOrder::max_take_exch_fee>();
        o << ",\"inc_take_exch_fee\":" << (int64_t)m.get<SpdrParentOrder::inc_take_exch_fee>();
        o << ",\"inc_make_exch_fee\":" << (int64_t)m.get<SpdrParentOrder::inc_make_exch_fee>();
        o << ",\"make_exch_rule\":" << (int64_t)m.get<SpdrParentOrder::make_exch_rule>();
        o << ",\"cxl_uprc_range\":" << (int64_t)m.get<SpdrParentOrder::cxl_uprc_range>();
        o << ",\"min_ubid\":" << m.get<SpdrParentOrder::min_ubid>();
        o << ",\"max_uask\":" << m.get<SpdrParentOrder::max_uask>();
        o << ",\"min_max_type\":" << (int64_t)m.get<SpdrParentOrder::min_max_type>();
        o << ",\"min_option_px\":" << m.get<SpdrParentOrder::min_option_px>();
        o << ",\"max_child_orders\":" << m.get<SpdrParentOrder::max_child_orders>();
        o << ",\"exch_mask\":" << m.get<SpdrParentOrder::exch_mask>();
        o << ",\"spdr_stage_type\":" << (int64_t)m.get<SpdrParentOrder::spdr_stage_type>();
        o << ",\"market_session\":" << (int64_t)m.get<SpdrParentOrder::market_session>();
        {
            std::time_t tt = m.get<SpdrParentOrder::start_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"start_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"order_duration\":" << m.get<SpdrParentOrder::order_duration>();
        o << ",\"active_duration\":" << m.get<SpdrParentOrder::active_duration>();
        {
            std::time_t tt = m.get<SpdrParentOrder::good_till_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"good_till_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"start_type\":" << (int64_t)m.get<SpdrParentOrder::start_type>();
        o << ",\"trigger_group_id\":" << m.get<SpdrParentOrder::trigger_group_id>();
        o << ",\"trigger_timestamp\":" << m.get<SpdrParentOrder::trigger_timestamp>();
        o << ",\"parent_order_handling\":" << (int64_t)m.get<SpdrParentOrder::parent_order_handling>();
        o << ",\"parent_balance_handling\":" << (int64_t)m.get<SpdrParentOrder::parent_balance_handling>();
        o << ",\"order_limit_type\":" << (int64_t)m.get<SpdrParentOrder::order_limit_type>();
        o << ",\"take_limit_class\":" << (int64_t)m.get<SpdrParentOrder::take_limit_class>();
        o << ",\"make_limit_class\":" << (int64_t)m.get<SpdrParentOrder::make_limit_class>();
        o << ",\"take_reach_rule\":" << (int64_t)m.get<SpdrParentOrder::take_reach_rule>();
        o << ",\"order_prc_limit\":" << m.get<SpdrParentOrder::order_prc_limit>();
        o << ",\"order_ref_uprc\":" << m.get<SpdrParentOrder::order_ref_uprc>();
        o << ",\"order_ref_delta\":" << m.get<SpdrParentOrder::order_ref_delta>();
        o << ",\"order_ref_gamma\":" << m.get<SpdrParentOrder::order_ref_gamma>();
        o << ",\"order_vol_limit\":" << m.get<SpdrParentOrder::order_vol_limit>();
        o << ",\"rate_override\":" << m.get<SpdrParentOrder::rate_override>();
        o << ",\"sdiv_override\":" << m.get<SpdrParentOrder::sdiv_override>();
        o << ",\"ddiv_override\":\"" << m.get<SpdrParentOrder::ddiv_override>() << "\"";
        o << ",\"override_code\":" << (int64_t)m.get<SpdrParentOrder::override_code>();
        o << ",\"order_prc_offset\":" << m.get<SpdrParentOrder::order_prc_offset>();
        o << ",\"state_model\":" << (int64_t)m.get<SpdrParentOrder::state_model>();
        o << ",\"u_state_model\":" << (int64_t)m.get<SpdrParentOrder::u_state_model>();
        o << ",\"take_alpha_type\":" << (int64_t)m.get<SpdrParentOrder::take_alpha_type>();
        o << ",\"make_alpha_type\":" << (int64_t)m.get<SpdrParentOrder::make_alpha_type>();
        o << ",\"take_alpha_factor\":" << m.get<SpdrParentOrder::take_alpha_factor>();
        o << ",\"make_alpha_factor\":" << m.get<SpdrParentOrder::make_alpha_factor>();
        o << ",\"take_probability\":" << m.get<SpdrParentOrder::take_probability>();
        o << ",\"make_probability\":" << m.get<SpdrParentOrder::make_probability>();
        o << ",\"take_surf_prc_offset\":" << m.get<SpdrParentOrder::take_surf_prc_offset>();
        o << ",\"take_surf_vol_offset\":" << m.get<SpdrParentOrder::take_surf_vol_offset>();
        o << ",\"take_surf_width_offset\":" << m.get<SpdrParentOrder::take_surf_width_offset>();
        o << ",\"make_surf_prc_offset\":" << m.get<SpdrParentOrder::make_surf_prc_offset>();
        o << ",\"make_surf_vol_offset\":" << m.get<SpdrParentOrder::make_surf_vol_offset>();
        o << ",\"make_surf_width_offset\":" << m.get<SpdrParentOrder::make_surf_width_offset>();
        o << ",\"order_ref_event_mult\":" << m.get<SpdrParentOrder::order_ref_event_mult>();
        {
            std::time_t tt = m.get<SpdrParentOrder::order_ref_event_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"order_ref_event_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"nbbo_cap\":" << (int64_t)m.get<SpdrParentOrder::nbbo_cap>();
        o << ",\"auto_hedge\":" << (int64_t)m.get<SpdrParentOrder::auto_hedge>();
        o << ",\"hedge_instrument\":" << (int64_t)m.get<SpdrParentOrder::hedge_instrument>();
        o << ",\"hedge_sec_key\":{" << m.get<SpdrParentOrder::hedge_sec_key>() << "}";
        o << ",\"hedge_beta_ratio\":" << m.get<SpdrParentOrder::hedge_beta_ratio>();
        o << ",\"hedge_scope\":" << (int64_t)m.get<SpdrParentOrder::hedge_scope>();
        o << ",\"hedge_session\":" << (int64_t)m.get<SpdrParentOrder::hedge_session>();
        o << ",\"extern_hedge_ex_dest\":\"" << m.get<SpdrParentOrder::extern_hedge_ex_dest>() << "\"";
        o << ",\"extern_hedge_params\":\"" << m.get<SpdrParentOrder::extern_hedge_params>() << "\"";
        o << ",\"firm_type\":" << (int64_t)m.get<SpdrParentOrder::firm_type>();
        o << ",\"order_capacity\":" << (int64_t)m.get<SpdrParentOrder::order_capacity>();
        o << ",\"position_type\":" << (int64_t)m.get<SpdrParentOrder::position_type>();
        o << ",\"ssale_flag\":" << (int64_t)m.get<SpdrParentOrder::ssale_flag>();
        o << ",\"locate_firm\":\"" << m.get<SpdrParentOrder::locate_firm>() << "\"";
        o << ",\"locate_pool\":\"" << m.get<SpdrParentOrder::locate_pool>() << "\"";
        o << ",\"no_cross_group\":\"" << m.get<SpdrParentOrder::no_cross_group>() << "\"";
        o << ",\"exch_trader_id\":\"" << m.get<SpdrParentOrder::exch_trader_id>() << "\"";
        o << ",\"large_trader_id\":\"" << m.get<SpdrParentOrder::large_trader_id>() << "\"";
        o << ",\"trading_location\":\"" << m.get<SpdrParentOrder::trading_location>() << "\"";
        o << ",\"lead_side\":" << (int64_t)m.get<SpdrParentOrder::lead_side>();
        o << ",\"max_completion_slippage\":" << m.get<SpdrParentOrder::max_completion_slippage>();
        o << ",\"order_ref_premium\":" << m.get<SpdrParentOrder::order_ref_premium>();
        o << ",\"notice_number\":" << m.get<SpdrParentOrder::notice_number>();
        o << ",\"theo_vol\":" << m.get<SpdrParentOrder::theo_vol>();
        o << ",\"cl_arrive_mark\":" << m.get<SpdrParentOrder::cl_arrive_mark>();
        o << ",\"risk_group_id\":" << m.get<SpdrParentOrder::risk_group_id>();
        o << ",\"req_aux_risk_group_ctrl\":" << (int64_t)m.get<SpdrParentOrder::req_aux_risk_group_ctrl>();
        o << ",\"ref_rmetric1_src\":" << (int64_t)m.get<SpdrParentOrder::ref_rmetric1_src>();
        o << ",\"ref_rmetric2_src\":" << (int64_t)m.get<SpdrParentOrder::ref_rmetric2_src>();
        o << ",\"ref_rmetric3_src\":" << (int64_t)m.get<SpdrParentOrder::ref_rmetric3_src>();
        o << ",\"ref_rmetric4_src\":" << (int64_t)m.get<SpdrParentOrder::ref_rmetric4_src>();
        o << ",\"ref_rmetric5_src\":" << (int64_t)m.get<SpdrParentOrder::ref_rmetric5_src>();
        o << ",\"ref_rmetric6_src\":" << (int64_t)m.get<SpdrParentOrder::ref_rmetric6_src>();
        o << ",\"ref_rmetric7_src\":" << (int64_t)m.get<SpdrParentOrder::ref_rmetric7_src>();
        o << ",\"order_ref_rmetric1\":" << m.get<SpdrParentOrder::order_ref_rmetric1>();
        o << ",\"order_ref_rmetric2\":" << m.get<SpdrParentOrder::order_ref_rmetric2>();
        o << ",\"order_ref_rmetric3\":" << m.get<SpdrParentOrder::order_ref_rmetric3>();
        o << ",\"order_ref_rmetric4\":" << m.get<SpdrParentOrder::order_ref_rmetric4>();
        o << ",\"order_ref_rmetric5\":" << m.get<SpdrParentOrder::order_ref_rmetric5>();
        o << ",\"order_ref_rmetric6\":" << m.get<SpdrParentOrder::order_ref_rmetric6>();
        o << ",\"order_ref_rmetric7\":" << m.get<SpdrParentOrder::order_ref_rmetric7>();
        o << ",\"exp_day_wt_vega_offset\":" << m.get<SpdrParentOrder::exp_day_wt_vega_offset>();
        o << ",\"max_exp_day_wt_vega_ln\":" << m.get<SpdrParentOrder::max_exp_day_wt_vega_ln>();
        o << ",\"max_exp_day_wt_vega_sh\":" << m.get<SpdrParentOrder::max_exp_day_wt_vega_sh>();
        o << ",\"max_exp_day_rmetric6_ln\":" << m.get<SpdrParentOrder::max_exp_day_rmetric6_ln>();
        o << ",\"max_exp_day_rmetric6_sh\":" << m.get<SpdrParentOrder::max_exp_day_rmetric6_sh>();
        o << ",\"sym_day_ddelta_offset\":" << m.get<SpdrParentOrder::sym_day_ddelta_offset>();
        o << ",\"max_sym_day_ddelta_ln\":" << m.get<SpdrParentOrder::max_sym_day_ddelta_ln>();
        o << ",\"max_sym_day_ddelta_sh\":" << m.get<SpdrParentOrder::max_sym_day_ddelta_sh>();
        o << ",\"sym_day_vega_offset\":" << m.get<SpdrParentOrder::sym_day_vega_offset>();
        o << ",\"max_sym_day_vega_ln\":" << m.get<SpdrParentOrder::max_sym_day_vega_ln>();
        o << ",\"max_sym_day_vega_sh\":" << m.get<SpdrParentOrder::max_sym_day_vega_sh>();
        o << ",\"sym_day_wt_vega_offset\":" << m.get<SpdrParentOrder::sym_day_wt_vega_offset>();
        o << ",\"max_sym_day_wt_vega_ln\":" << m.get<SpdrParentOrder::max_sym_day_wt_vega_ln>();
        o << ",\"max_sym_day_wt_vega_sh\":" << m.get<SpdrParentOrder::max_sym_day_wt_vega_sh>();
        o << ",\"max_sym_day_rmetric7_ln\":" << m.get<SpdrParentOrder::max_sym_day_rmetric7_ln>();
        o << ",\"max_sym_day_rmetric7_sh\":" << m.get<SpdrParentOrder::max_sym_day_rmetric7_sh>();
        o << ",\"max_grp_day_ddelta_ln\":" << m.get<SpdrParentOrder::max_grp_day_ddelta_ln>();
        o << ",\"max_grp_day_ddelta_sh\":" << m.get<SpdrParentOrder::max_grp_day_ddelta_sh>();
        o << ",\"max_grp_day_vega_ln\":" << m.get<SpdrParentOrder::max_grp_day_vega_ln>();
        o << ",\"max_grp_day_vega_sh\":" << m.get<SpdrParentOrder::max_grp_day_vega_sh>();
        o << ",\"max_grp_day_vega_abs\":" << m.get<SpdrParentOrder::max_grp_day_vega_abs>();
        o << ",\"grp_day_vega_ratio\":" << m.get<SpdrParentOrder::grp_day_vega_ratio>();
        o << ",\"max_grp_day_contracts_ln\":" << m.get<SpdrParentOrder::max_grp_day_contracts_ln>();
        o << ",\"max_grp_day_contracts_sh\":" << m.get<SpdrParentOrder::max_grp_day_contracts_sh>();
        o << ",\"max_grp_day_contracts_abs\":" << m.get<SpdrParentOrder::max_grp_day_contracts_abs>();
        o << ",\"max_grp_day_rmetric1_ln\":" << m.get<SpdrParentOrder::max_grp_day_rmetric1_ln>();
        o << ",\"max_grp_day_rmetric1_sh\":" << m.get<SpdrParentOrder::max_grp_day_rmetric1_sh>();
        o << ",\"max_grp_day_rmetric1_abs\":" << m.get<SpdrParentOrder::max_grp_day_rmetric1_abs>();
        o << ",\"grp_day_rmetric1_ratio\":" << m.get<SpdrParentOrder::grp_day_rmetric1_ratio>();
        o << ",\"max_grp_day_rmetric2_ln\":" << m.get<SpdrParentOrder::max_grp_day_rmetric2_ln>();
        o << ",\"max_grp_day_rmetric2_sh\":" << m.get<SpdrParentOrder::max_grp_day_rmetric2_sh>();
        o << ",\"max_grp_day_rmetric3_ln\":" << m.get<SpdrParentOrder::max_grp_day_rmetric3_ln>();
        o << ",\"max_grp_day_rmetric3_sh\":" << m.get<SpdrParentOrder::max_grp_day_rmetric3_sh>();
        o << ",\"max_grp_day_rmetric4_ln\":" << m.get<SpdrParentOrder::max_grp_day_rmetric4_ln>();
        o << ",\"max_grp_day_rmetric4_sh\":" << m.get<SpdrParentOrder::max_grp_day_rmetric4_sh>();
        o << ",\"max_grp_day_rmetric5_ln\":" << m.get<SpdrParentOrder::max_grp_day_rmetric5_ln>();
        o << ",\"max_grp_day_rmetric5_sh\":" << m.get<SpdrParentOrder::max_grp_day_rmetric5_sh>();
        o << ",\"sym_ema_cxl_ddelta_ln\":" << m.get<SpdrParentOrder::sym_ema_cxl_ddelta_ln>();
        o << ",\"sym_ema_cxl_ddelta_sh\":" << m.get<SpdrParentOrder::sym_ema_cxl_ddelta_sh>();
        o << ",\"sym_ema_cxl_wt_vega_ln\":" << m.get<SpdrParentOrder::sym_ema_cxl_wt_vega_ln>();
        o << ",\"sym_ema_cxl_wt_vega_sh\":" << m.get<SpdrParentOrder::sym_ema_cxl_wt_vega_sh>();
        {
            std::time_t tt = m.get<SpdrParentOrder::last_fill_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"last_fill_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"user_data1\":\"" << m.get<SpdrParentOrder::user_data1>() << "\"";
        o << ",\"user_data2\":\"" << m.get<SpdrParentOrder::user_data2>() << "\"";
        o << ",\"child_data\":\"" << m.get<SpdrParentOrder::child_data>() << "\"";
        o << ",\"src_timestamp\":" << m.get<SpdrParentOrder::src_timestamp>();
        o << ",\"sgw_timestamp\":" << m.get<SpdrParentOrder::sgw_timestamp>();
        {
            std::time_t tt = m.get<SpdrParentOrder::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"include_srnetwork\":" << (int64_t)m.get<SpdrParentOrder::include_srnetwork>();
        o << ",\"directed_counter_party\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<SpdrParentOrder::directed_counter_party>(); ++i) {
                o << delim << m.get<SpdrParentOrder::directed_counter_party>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"order_legs\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<SpdrParentOrder::order_legs>(); ++i) {
                o << delim << m.get<SpdrParentOrder::order_legs>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}