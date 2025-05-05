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

    #ifndef _version__int32__GUARD__
    #define _version__int32__GUARD__
    DECL_STRONG_TYPE(version__int32, int32);
    #endif//_version__int32__GUARD__

    #ifndef _exec_status__GUARD__
    #define _exec_status__GUARD__
    DECL_STRONG_TYPE(exec_status, spiderrock::protobuf::api::ExecStatus);
    #endif//_exec_status__GUARD__

    #ifndef _exec_shape__GUARD__
    #define _exec_shape__GUARD__
    DECL_STRONG_TYPE(exec_shape, spiderrock::protobuf::api::ExecShape);
    #endif//_exec_shape__GUARD__

    #ifndef _package_id__GUARD__
    #define _package_id__GUARD__
    DECL_STRONG_TYPE(package_id, int64);
    #endif//_package_id__GUARD__

    #ifndef _parent_number__GUARD__
    #define _parent_number__GUARD__
    DECL_STRONG_TYPE(parent_number, int64);
    #endif//_parent_number__GUARD__

    #ifndef _parent_version__GUARD__
    #define _parent_version__GUARD__
    DECL_STRONG_TYPE(parent_version, int32);
    #endif//_parent_version__GUARD__

    #ifndef _base_parent_number__GUARD__
    #define _base_parent_number__GUARD__
    DECL_STRONG_TYPE(base_parent_number, int64);
    #endif//_base_parent_number__GUARD__

    #ifndef _cl_ord_id__int64__GUARD__
    #define _cl_ord_id__int64__GUARD__
    DECL_STRONG_TYPE(cl_ord_id__int64, int64);
    #endif//_cl_ord_id__int64__GUARD__

    #ifndef _review_cl_ord_id__GUARD__
    #define _review_cl_ord_id__GUARD__
    DECL_STRONG_TYPE(review_cl_ord_id, string);
    #endif//_review_cl_ord_id__GUARD__

    #ifndef _alt_fill_id__GUARD__
    #define _alt_fill_id__GUARD__
    DECL_STRONG_TYPE(alt_fill_id, int64);
    #endif//_alt_fill_id__GUARD__

    #ifndef _alt_order_id__GUARD__
    #define _alt_order_id__GUARD__
    DECL_STRONG_TYPE(alt_order_id, string);
    #endif//_alt_order_id__GUARD__

    #ifndef _alt_cross_id__GUARD__
    #define _alt_cross_id__GUARD__
    DECL_STRONG_TYPE(alt_cross_id, string);
    #endif//_alt_cross_id__GUARD__

    #ifndef _alt_leg_ref_id__GUARD__
    #define _alt_leg_ref_id__GUARD__
    DECL_STRONG_TYPE(alt_leg_ref_id, string);
    #endif//_alt_leg_ref_id__GUARD__

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

    #ifndef _risk_group_id__GUARD__
    #define _risk_group_id__GUARD__
    DECL_STRONG_TYPE(risk_group_id, int64);
    #endif//_risk_group_id__GUARD__

    #ifndef _trigger_group_id__GUARD__
    #define _trigger_group_id__GUARD__
    DECL_STRONG_TYPE(trigger_group_id, int64);
    #endif//_trigger_group_id__GUARD__

    #ifndef _trigger_timestamp__GUARD__
    #define _trigger_timestamp__GUARD__
    DECL_STRONG_TYPE(trigger_timestamp, int64);
    #endif//_trigger_timestamp__GUARD__

    #ifndef _street_cl_ord_id__GUARD__
    #define _street_cl_ord_id__GUARD__
    DECL_STRONG_TYPE(street_cl_ord_id, string);
    #endif//_street_cl_ord_id__GUARD__

    #ifndef _street_order_id__GUARD__
    #define _street_order_id__GUARD__
    DECL_STRONG_TYPE(street_order_id, string);
    #endif//_street_order_id__GUARD__

    #ifndef _side_cl_ord_id__GUARD__
    #define _side_cl_ord_id__GUARD__
    DECL_STRONG_TYPE(side_cl_ord_id, int64);
    #endif//_side_cl_ord_id__GUARD__

    #ifndef _parent_shape__GUARD__
    #define _parent_shape__GUARD__
    DECL_STRONG_TYPE(parent_shape, spiderrock::protobuf::api::SpdrOrderShape);
    #endif//_parent_shape__GUARD__

    #ifndef _sec_key__OptionKey__GUARD__
    #define _sec_key__OptionKey__GUARD__
    DECL_STRONG_TYPE(sec_key__OptionKey, OptionKey);
    #endif//_sec_key__OptionKey__GUARD__

    #ifndef _sec_type__SpdrKeyType__GUARD__
    #define _sec_type__SpdrKeyType__GUARD__
    DECL_STRONG_TYPE(sec_type__SpdrKeyType, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__SpdrKeyType__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _origin_ticker__GUARD__
    #define _origin_ticker__GUARD__
    DECL_STRONG_TYPE(origin_ticker, TickerKey);
    #endif//_origin_ticker__GUARD__

    #ifndef _origin_sec_key__GUARD__
    #define _origin_sec_key__GUARD__
    DECL_STRONG_TYPE(origin_sec_key, OptionKey);
    #endif//_origin_sec_key__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _strategy_accnt__GUARD__
    #define _strategy_accnt__GUARD__
    DECL_STRONG_TYPE(strategy_accnt, string);
    #endif//_strategy_accnt__GUARD__

    #ifndef _spdr_source__GUARD__
    #define _spdr_source__GUARD__
    DECL_STRONG_TYPE(spdr_source, spiderrock::protobuf::api::SpdrSource);
    #endif//_spdr_source__GUARD__

    #ifndef _grouping_code__GUARD__
    #define _grouping_code__GUARD__
    DECL_STRONG_TYPE(grouping_code, int64);
    #endif//_grouping_code__GUARD__

    #ifndef _core_client_firm__GUARD__
    #define _core_client_firm__GUARD__
    DECL_STRONG_TYPE(core_client_firm, string);
    #endif//_core_client_firm__GUARD__

    #ifndef _sponsor_client_firm__GUARD__
    #define _sponsor_client_firm__GUARD__
    DECL_STRONG_TYPE(sponsor_client_firm, string);
    #endif//_sponsor_client_firm__GUARD__

    #ifndef _routing_code__GUARD__
    #define _routing_code__GUARD__
    DECL_STRONG_TYPE(routing_code, string);
    #endif//_routing_code__GUARD__

    #ifndef _engine_name__GUARD__
    #define _engine_name__GUARD__
    DECL_STRONG_TYPE(engine_name, string);
    #endif//_engine_name__GUARD__

    #ifndef _gateway_name__GUARD__
    #define _gateway_name__GUARD__
    DECL_STRONG_TYPE(gateway_name, string);
    #endif//_gateway_name__GUARD__

    #ifndef _exec_role__GUARD__
    #define _exec_role__GUARD__
    DECL_STRONG_TYPE(exec_role, spiderrock::protobuf::api::ExecRole);
    #endif//_exec_role__GUARD__

    #ifndef _exec_brkr_code__GUARD__
    #define _exec_brkr_code__GUARD__
    DECL_STRONG_TYPE(exec_brkr_code, string);
    #endif//_exec_brkr_code__GUARD__

    #ifndef _exec_brkr_mpid__GUARD__
    #define _exec_brkr_mpid__GUARD__
    DECL_STRONG_TYPE(exec_brkr_mpid, string);
    #endif//_exec_brkr_mpid__GUARD__

    #ifndef _alt_brkr_mpid__GUARD__
    #define _alt_brkr_mpid__GUARD__
    DECL_STRONG_TYPE(alt_brkr_mpid, string);
    #endif//_alt_brkr_mpid__GUARD__

    #ifndef _exec_brkr_accnt__GUARD__
    #define _exec_brkr_accnt__GUARD__
    DECL_STRONG_TYPE(exec_brkr_accnt, string);
    #endif//_exec_brkr_accnt__GUARD__

    #ifndef _exec_brkr_cl_firm__GUARD__
    #define _exec_brkr_cl_firm__GUARD__
    DECL_STRONG_TYPE(exec_brkr_cl_firm, string);
    #endif//_exec_brkr_cl_firm__GUARD__

    #ifndef _exec_brkr_user_name__GUARD__
    #define _exec_brkr_user_name__GUARD__
    DECL_STRONG_TYPE(exec_brkr_user_name, string);
    #endif//_exec_brkr_user_name__GUARD__

    #ifndef _clearing_flip_type__GUARD__
    #define _clearing_flip_type__GUARD__
    DECL_STRONG_TYPE(clearing_flip_type, spiderrock::protobuf::api::FlipType);
    #endif//_clearing_flip_type__GUARD__

    #ifndef _clearing_flip_firm__GUARD__
    #define _clearing_flip_firm__GUARD__
    DECL_STRONG_TYPE(clearing_flip_firm, string);
    #endif//_clearing_flip_firm__GUARD__

    #ifndef _clearing_flip_accnt__GUARD__
    #define _clearing_flip_accnt__GUARD__
    DECL_STRONG_TYPE(clearing_flip_accnt, string);
    #endif//_clearing_flip_accnt__GUARD__

    #ifndef _clearing_firm__GUARD__
    #define _clearing_firm__GUARD__
    DECL_STRONG_TYPE(clearing_firm, string);
    #endif//_clearing_firm__GUARD__

    #ifndef _clearing_accnt__GUARD__
    #define _clearing_accnt__GUARD__
    DECL_STRONG_TYPE(clearing_accnt, string);
    #endif//_clearing_accnt__GUARD__

    #ifndef _orig_exec_id__GUARD__
    #define _orig_exec_id__GUARD__
    DECL_STRONG_TYPE(orig_exec_id, string);
    #endif//_orig_exec_id__GUARD__

    #ifndef _last_exec_id__GUARD__
    #define _last_exec_id__GUARD__
    DECL_STRONG_TYPE(last_exec_id, string);
    #endif//_last_exec_id__GUARD__

    #ifndef _remote_text__GUARD__
    #define _remote_text__GUARD__
    DECL_STRONG_TYPE(remote_text, string);
    #endif//_remote_text__GUARD__

    #ifndef _order_side__GUARD__
    #define _order_side__GUARD__
    DECL_STRONG_TYPE(order_side, spiderrock::protobuf::api::BuySell);
    #endif//_order_side__GUARD__

    #ifndef _spdr_order_status__GUARD__
    #define _spdr_order_status__GUARD__
    DECL_STRONG_TYPE(spdr_order_status, spiderrock::protobuf::api::SpdrOrderStatus);
    #endif//_spdr_order_status__GUARD__

    #ifndef _spdr_close_reason__GUARD__
    #define _spdr_close_reason__GUARD__
    DECL_STRONG_TYPE(spdr_close_reason, spiderrock::protobuf::api::SpdrCloseReason);
    #endif//_spdr_close_reason__GUARD__

    #ifndef _cum_fill_quantity__GUARD__
    #define _cum_fill_quantity__GUARD__
    DECL_STRONG_TYPE(cum_fill_quantity, int32);
    #endif//_cum_fill_quantity__GUARD__

    #ifndef _avg_fill_price__GUARD__
    #define _avg_fill_price__GUARD__
    DECL_STRONG_TYPE(avg_fill_price, double);
    #endif//_avg_fill_price__GUARD__

    #ifndef _cum_leg_fill_quantity__GUARD__
    #define _cum_leg_fill_quantity__GUARD__
    DECL_STRONG_TYPE(cum_leg_fill_quantity, int32);
    #endif//_cum_leg_fill_quantity__GUARD__

    #ifndef _avg_leg_fill_price__GUARD__
    #define _avg_leg_fill_price__GUARD__
    DECL_STRONG_TYPE(avg_leg_fill_price, double);
    #endif//_avg_leg_fill_price__GUARD__

    #ifndef _leaves_qty__GUARD__
    #define _leaves_qty__GUARD__
    DECL_STRONG_TYPE(leaves_qty, int32);
    #endif//_leaves_qty__GUARD__

    #ifndef _price_type__PriceType__GUARD__
    #define _price_type__PriceType__GUARD__
    DECL_STRONG_TYPE(price_type__PriceType, spiderrock::protobuf::api::PriceType);
    #endif//_price_type__PriceType__GUARD__

    #ifndef _child_shape__GUARD__
    #define _child_shape__GUARD__
    DECL_STRONG_TYPE(child_shape, spiderrock::protobuf::api::SpdrOrderShape);
    #endif//_child_shape__GUARD__

    #ifndef _child_size__GUARD__
    #define _child_size__GUARD__
    DECL_STRONG_TYPE(child_size, int32);
    #endif//_child_size__GUARD__

    #ifndef _child_price__GUARD__
    #define _child_price__GUARD__
    DECL_STRONG_TYPE(child_price, double);
    #endif//_child_price__GUARD__

    #ifndef _child_dttm__GUARD__
    #define _child_dttm__GUARD__
    DECL_STRONG_TYPE(child_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_child_dttm__GUARD__

    #ifndef _child_exch__GUARD__
    #define _child_exch__GUARD__
    DECL_STRONG_TYPE(child_exch, string);
    #endif//_child_exch__GUARD__

    #ifndef _child_ex_dest__GUARD__
    #define _child_ex_dest__GUARD__
    DECL_STRONG_TYPE(child_ex_dest, string);
    #endif//_child_ex_dest__GUARD__

    #ifndef _child_exec_broker__GUARD__
    #define _child_exec_broker__GUARD__
    DECL_STRONG_TYPE(child_exec_broker, string);
    #endif//_child_exec_broker__GUARD__

    #ifndef _child_is_directed__GUARD__
    #define _child_is_directed__GUARD__
    DECL_STRONG_TYPE(child_is_directed, spiderrock::protobuf::api::YesNo);
    #endif//_child_is_directed__GUARD__

    #ifndef _child_iso_sweep__GUARD__
    #define _child_iso_sweep__GUARD__
    DECL_STRONG_TYPE(child_iso_sweep, spiderrock::protobuf::api::YesNo);
    #endif//_child_iso_sweep__GUARD__

    #ifndef _child_order_handling__GUARD__
    #define _child_order_handling__GUARD__
    DECL_STRONG_TYPE(child_order_handling, string);
    #endif//_child_order_handling__GUARD__

    #ifndef _child_algo_handler__GUARD__
    #define _child_algo_handler__GUARD__
    DECL_STRONG_TYPE(child_algo_handler, spiderrock::protobuf::api::ChildHandler);
    #endif//_child_algo_handler__GUARD__

    #ifndef _child_create_reason__GUARD__
    #define _child_create_reason__GUARD__
    DECL_STRONG_TYPE(child_create_reason, spiderrock::protobuf::api::ChildCreateReason);
    #endif//_child_create_reason__GUARD__

    #ifndef _child_cancel_reason__GUARD__
    #define _child_cancel_reason__GUARD__
    DECL_STRONG_TYPE(child_cancel_reason, spiderrock::protobuf::api::ChildCancelReason);
    #endif//_child_cancel_reason__GUARD__

    #ifndef _child_maker_taker__GUARD__
    #define _child_maker_taker__GUARD__
    DECL_STRONG_TYPE(child_maker_taker, spiderrock::protobuf::api::MakerTaker);
    #endif//_child_maker_taker__GUARD__

    #ifndef _child_ubid__GUARD__
    #define _child_ubid__GUARD__
    DECL_STRONG_TYPE(child_ubid, double);
    #endif//_child_ubid__GUARD__

    #ifndef _child_uask__GUARD__
    #define _child_uask__GUARD__
    DECL_STRONG_TYPE(child_uask, double);
    #endif//_child_uask__GUARD__

    #ifndef _child_bid__GUARD__
    #define _child_bid__GUARD__
    DECL_STRONG_TYPE(child_bid, double);
    #endif//_child_bid__GUARD__

    #ifndef _child_ask__GUARD__
    #define _child_ask__GUARD__
    DECL_STRONG_TYPE(child_ask, double);
    #endif//_child_ask__GUARD__

    #ifndef _child_mark__GUARD__
    #define _child_mark__GUARD__
    DECL_STRONG_TYPE(child_mark, double);
    #endif//_child_mark__GUARD__

    #ifndef _child_fair_width__double__GUARD__
    #define _child_fair_width__double__GUARD__
    DECL_STRONG_TYPE(child_fair_width__double, double);
    #endif//_child_fair_width__double__GUARD__

    #ifndef _child_vol__GUARD__
    #define _child_vol__GUARD__
    DECL_STRONG_TYPE(child_vol, float);
    #endif//_child_vol__GUARD__

    #ifndef _child_prob__GUARD__
    #define _child_prob__GUARD__
    DECL_STRONG_TYPE(child_prob, float);
    #endif//_child_prob__GUARD__

    #ifndef _child_limit_ref_uprc__GUARD__
    #define _child_limit_ref_uprc__GUARD__
    DECL_STRONG_TYPE(child_limit_ref_uprc, double);
    #endif//_child_limit_ref_uprc__GUARD__

    #ifndef _child_limit_prc__GUARD__
    #define _child_limit_prc__GUARD__
    DECL_STRONG_TYPE(child_limit_prc, double);
    #endif//_child_limit_prc__GUARD__

    #ifndef _child_vol_atm__GUARD__
    #define _child_vol_atm__GUARD__
    DECL_STRONG_TYPE(child_vol_atm, float);
    #endif//_child_vol_atm__GUARD__

    #ifndef _child_pos_type__GUARD__
    #define _child_pos_type__GUARD__
    DECL_STRONG_TYPE(child_pos_type, spiderrock::protobuf::api::PositionType);
    #endif//_child_pos_type__GUARD__

    #ifndef _child_firm_opt_position__GUARD__
    #define _child_firm_opt_position__GUARD__
    DECL_STRONG_TYPE(child_firm_opt_position, int32);
    #endif//_child_firm_opt_position__GUARD__

    #ifndef _child_ssale_flag__GUARD__
    #define _child_ssale_flag__GUARD__
    DECL_STRONG_TYPE(child_ssale_flag, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_child_ssale_flag__GUARD__

    #ifndef _child_firm_stk_position__GUARD__
    #define _child_firm_stk_position__GUARD__
    DECL_STRONG_TYPE(child_firm_stk_position, int32);
    #endif//_child_firm_stk_position__GUARD__

    #ifndef _child_firm_open_orders__GUARD__
    #define _child_firm_open_orders__GUARD__
    DECL_STRONG_TYPE(child_firm_open_orders, int32);
    #endif//_child_firm_open_orders__GUARD__

    #ifndef _child_locate_quan__GUARD__
    #define _child_locate_quan__GUARD__
    DECL_STRONG_TYPE(child_locate_quan, int32);
    #endif//_child_locate_quan__GUARD__

    #ifndef _child_locate_firm__GUARD__
    #define _child_locate_firm__GUARD__
    DECL_STRONG_TYPE(child_locate_firm, string);
    #endif//_child_locate_firm__GUARD__

    #ifndef _child_locate_pool__GUARD__
    #define _child_locate_pool__GUARD__
    DECL_STRONG_TYPE(child_locate_pool, string);
    #endif//_child_locate_pool__GUARD__

    #ifndef _child_mkt_stance__GUARD__
    #define _child_mkt_stance__GUARD__
    DECL_STRONG_TYPE(child_mkt_stance, spiderrock::protobuf::api::MktStance);
    #endif//_child_mkt_stance__GUARD__

    #ifndef _child_cxl_attempted__GUARD__
    #define _child_cxl_attempted__GUARD__
    DECL_STRONG_TYPE(child_cxl_attempted, spiderrock::protobuf::api::YesNo);
    #endif//_child_cxl_attempted__GUARD__

    #ifndef _child_cxl_fill_latency__GUARD__
    #define _child_cxl_fill_latency__GUARD__
    DECL_STRONG_TYPE(child_cxl_fill_latency, float);
    #endif//_child_cxl_fill_latency__GUARD__

    #ifndef _child_method__GUARD__
    #define _child_method__GUARD__
    DECL_STRONG_TYPE(child_method, string);
    #endif//_child_method__GUARD__

    #ifndef _child_source__GUARD__
    #define _child_source__GUARD__
    DECL_STRONG_TYPE(child_source, string);
    #endif//_child_source__GUARD__

    #ifndef _firm_type__GUARD__
    #define _firm_type__GUARD__
    DECL_STRONG_TYPE(firm_type, spiderrock::protobuf::api::FirmType);
    #endif//_firm_type__GUARD__

    #ifndef _pri_agg_group__GUARD__
    #define _pri_agg_group__GUARD__
    DECL_STRONG_TYPE(pri_agg_group, string);
    #endif//_pri_agg_group__GUARD__

    #ifndef _sec_agg_group__GUARD__
    #define _sec_agg_group__GUARD__
    DECL_STRONG_TYPE(sec_agg_group, string);
    #endif//_sec_agg_group__GUARD__

    #ifndef _directed_client_firm__GUARD__
    #define _directed_client_firm__GUARD__
    DECL_STRONG_TYPE(directed_client_firm, string);
    #endif//_directed_client_firm__GUARD__

    #ifndef _is_comm_paying__GUARD__
    #define _is_comm_paying__GUARD__
    DECL_STRONG_TYPE(is_comm_paying, spiderrock::protobuf::api::YesNo);
    #endif//_is_comm_paying__GUARD__

    #ifndef _fill_transact_dttm__GUARD__
    #define _fill_transact_dttm__GUARD__
    DECL_STRONG_TYPE(fill_transact_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_fill_transact_dttm__GUARD__

    #ifndef _fill_ts__GUARD__
    #define _fill_ts__GUARD__
    DECL_STRONG_TYPE(fill_ts, double);
    #endif//_fill_ts__GUARD__

    #ifndef _fill_dttm__GUARD__
    #define _fill_dttm__GUARD__
    DECL_STRONG_TYPE(fill_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_fill_dttm__GUARD__

    #ifndef _fill_exch__GUARD__
    #define _fill_exch__GUARD__
    DECL_STRONG_TYPE(fill_exch, string);
    #endif//_fill_exch__GUARD__

    #ifndef _fill_exec_id__GUARD__
    #define _fill_exec_id__GUARD__
    DECL_STRONG_TYPE(fill_exec_id, string);
    #endif//_fill_exec_id__GUARD__

    #ifndef _fill_exec_ref_id__GUARD__
    #define _fill_exec_ref_id__GUARD__
    DECL_STRONG_TYPE(fill_exec_ref_id, string);
    #endif//_fill_exec_ref_id__GUARD__

    #ifndef _fill_leg_ref_id__GUARD__
    #define _fill_leg_ref_id__GUARD__
    DECL_STRONG_TYPE(fill_leg_ref_id, int64);
    #endif//_fill_leg_ref_id__GUARD__

    #ifndef _fill_leg_ratio__GUARD__
    #define _fill_leg_ratio__GUARD__
    DECL_STRONG_TYPE(fill_leg_ratio, int32);
    #endif//_fill_leg_ratio__GUARD__

    #ifndef _fill_exch_fee__GUARD__
    #define _fill_exch_fee__GUARD__
    DECL_STRONG_TYPE(fill_exch_fee, float);
    #endif//_fill_exch_fee__GUARD__

    #ifndef _fill_market__GUARD__
    #define _fill_market__GUARD__
    DECL_STRONG_TYPE(fill_market, string);
    #endif//_fill_market__GUARD__

    #ifndef _fill_price__GUARD__
    #define _fill_price__GUARD__
    DECL_STRONG_TYPE(fill_price, double);
    #endif//_fill_price__GUARD__

    #ifndef _fill_quantity__GUARD__
    #define _fill_quantity__GUARD__
    DECL_STRONG_TYPE(fill_quantity, int32);
    #endif//_fill_quantity__GUARD__

    #ifndef _fill_report_detail__GUARD__
    #define _fill_report_detail__GUARD__
    DECL_STRONG_TYPE(fill_report_detail, string);
    #endif//_fill_report_detail__GUARD__

    #ifndef _fill_bid__GUARD__
    #define _fill_bid__GUARD__
    DECL_STRONG_TYPE(fill_bid, double);
    #endif//_fill_bid__GUARD__

    #ifndef _fill_ask__GUARD__
    #define _fill_ask__GUARD__
    DECL_STRONG_TYPE(fill_ask, double);
    #endif//_fill_ask__GUARD__

    #ifndef _fill_mark__GUARD__
    #define _fill_mark__GUARD__
    DECL_STRONG_TYPE(fill_mark, double);
    #endif//_fill_mark__GUARD__

    #ifndef _fill_fair_width__double__GUARD__
    #define _fill_fair_width__double__GUARD__
    DECL_STRONG_TYPE(fill_fair_width__double, double);
    #endif//_fill_fair_width__double__GUARD__

    #ifndef _fill_umark__GUARD__
    #define _fill_umark__GUARD__
    DECL_STRONG_TYPE(fill_umark, double);
    #endif//_fill_umark__GUARD__

    #ifndef _fill_ubid__GUARD__
    #define _fill_ubid__GUARD__
    DECL_STRONG_TYPE(fill_ubid, double);
    #endif//_fill_ubid__GUARD__

    #ifndef _fill_uask__GUARD__
    #define _fill_uask__GUARD__
    DECL_STRONG_TYPE(fill_uask, double);
    #endif//_fill_uask__GUARD__

    #ifndef _fill_ubid_sz__GUARD__
    #define _fill_ubid_sz__GUARD__
    DECL_STRONG_TYPE(fill_ubid_sz, int32);
    #endif//_fill_ubid_sz__GUARD__

    #ifndef _fill_uask_sz__GUARD__
    #define _fill_uask_sz__GUARD__
    DECL_STRONG_TYPE(fill_uask_sz, int32);
    #endif//_fill_uask_sz__GUARD__

    #ifndef _fill_vol_atm__GUARD__
    #define _fill_vol_atm__GUARD__
    DECL_STRONG_TYPE(fill_vol_atm, float);
    #endif//_fill_vol_atm__GUARD__

    #ifndef _fill_mark1_m__GUARD__
    #define _fill_mark1_m__GUARD__
    DECL_STRONG_TYPE(fill_mark1_m, double);
    #endif//_fill_mark1_m__GUARD__

    #ifndef _fill_mark10_m__GUARD__
    #define _fill_mark10_m__GUARD__
    DECL_STRONG_TYPE(fill_mark10_m, double);
    #endif//_fill_mark10_m__GUARD__

    #ifndef _fill_bid1_m__GUARD__
    #define _fill_bid1_m__GUARD__
    DECL_STRONG_TYPE(fill_bid1_m, double);
    #endif//_fill_bid1_m__GUARD__

    #ifndef _fill_ask1_m__GUARD__
    #define _fill_ask1_m__GUARD__
    DECL_STRONG_TYPE(fill_ask1_m, double);
    #endif//_fill_ask1_m__GUARD__

    #ifndef _fill_bid10_m__GUARD__
    #define _fill_bid10_m__GUARD__
    DECL_STRONG_TYPE(fill_bid10_m, double);
    #endif//_fill_bid10_m__GUARD__

    #ifndef _fill_ask10_m__GUARD__
    #define _fill_ask10_m__GUARD__
    DECL_STRONG_TYPE(fill_ask10_m, double);
    #endif//_fill_ask10_m__GUARD__

    #ifndef _fill_umark1_m__GUARD__
    #define _fill_umark1_m__GUARD__
    DECL_STRONG_TYPE(fill_umark1_m, double);
    #endif//_fill_umark1_m__GUARD__

    #ifndef _fill_umark10_m__GUARD__
    #define _fill_umark10_m__GUARD__
    DECL_STRONG_TYPE(fill_umark10_m, double);
    #endif//_fill_umark10_m__GUARD__

    #ifndef _fill_vol_atm1_m__GUARD__
    #define _fill_vol_atm1_m__GUARD__
    DECL_STRONG_TYPE(fill_vol_atm1_m, float);
    #endif//_fill_vol_atm1_m__GUARD__

    #ifndef _fill_vol_atm10_m__GUARD__
    #define _fill_vol_atm10_m__GUARD__
    DECL_STRONG_TYPE(fill_vol_atm10_m, float);
    #endif//_fill_vol_atm10_m__GUARD__

    #ifndef _fill_state1_m__GUARD__
    #define _fill_state1_m__GUARD__
    DECL_STRONG_TYPE(fill_state1_m, spiderrock::protobuf::api::FillMarkState);
    #endif//_fill_state1_m__GUARD__

    #ifndef _fill_state10_m__GUARD__
    #define _fill_state10_m__GUARD__
    DECL_STRONG_TYPE(fill_state10_m, spiderrock::protobuf::api::FillMarkState);
    #endif//_fill_state10_m__GUARD__

    #ifndef _fill_vol__GUARD__
    #define _fill_vol__GUARD__
    DECL_STRONG_TYPE(fill_vol, float);
    #endif//_fill_vol__GUARD__

    #ifndef _fill_vol_s__GUARD__
    #define _fill_vol_s__GUARD__
    DECL_STRONG_TYPE(fill_vol_s, float);
    #endif//_fill_vol_s__GUARD__

    #ifndef _fill_prob__GUARD__
    #define _fill_prob__GUARD__
    DECL_STRONG_TYPE(fill_prob, float);
    #endif//_fill_prob__GUARD__

    #ifndef _fill_limit_ref_uprc__GUARD__
    #define _fill_limit_ref_uprc__GUARD__
    DECL_STRONG_TYPE(fill_limit_ref_uprc, double);
    #endif//_fill_limit_ref_uprc__GUARD__

    #ifndef _fill_limit_ref_sdiv__GUARD__
    #define _fill_limit_ref_sdiv__GUARD__
    DECL_STRONG_TYPE(fill_limit_ref_sdiv, double);
    #endif//_fill_limit_ref_sdiv__GUARD__

    #ifndef _fill_limit_prc__GUARD__
    #define _fill_limit_prc__GUARD__
    DECL_STRONG_TYPE(fill_limit_prc, double);
    #endif//_fill_limit_prc__GUARD__

    #ifndef _fill_ve__GUARD__
    #define _fill_ve__GUARD__
    DECL_STRONG_TYPE(fill_ve, float);
    #endif//_fill_ve__GUARD__

    #ifndef _fill_ga__GUARD__
    #define _fill_ga__GUARD__
    DECL_STRONG_TYPE(fill_ga, float);
    #endif//_fill_ga__GUARD__

    #ifndef _fill_de__GUARD__
    #define _fill_de__GUARD__
    DECL_STRONG_TYPE(fill_de, float);
    #endif//_fill_de__GUARD__

    #ifndef _fill_th__GUARD__
    #define _fill_th__GUARD__
    DECL_STRONG_TYPE(fill_th, float);
    #endif//_fill_th__GUARD__

    #ifndef _fill_ve_ratio__GUARD__
    #define _fill_ve_ratio__GUARD__
    DECL_STRONG_TYPE(fill_ve_ratio, float);
    #endif//_fill_ve_ratio__GUARD__

    #ifndef _fill_beta__GUARD__
    #define _fill_beta__GUARD__
    DECL_STRONG_TYPE(fill_beta, float);
    #endif//_fill_beta__GUARD__

    #ifndef _risk_vega__GUARD__
    #define _risk_vega__GUARD__
    DECL_STRONG_TYPE(risk_vega, float);
    #endif//_risk_vega__GUARD__

    #ifndef _risk_wt_vega__GUARD__
    #define _risk_wt_vega__GUARD__
    DECL_STRONG_TYPE(risk_wt_vega, float);
    #endif//_risk_wt_vega__GUARD__

    #ifndef _risk_nvalue__GUARD__
    #define _risk_nvalue__GUARD__
    DECL_STRONG_TYPE(risk_nvalue, float);
    #endif//_risk_nvalue__GUARD__

    #ifndef _risk_delta__GUARD__
    #define _risk_delta__GUARD__
    DECL_STRONG_TYPE(risk_delta, float);
    #endif//_risk_delta__GUARD__

    #ifndef _risk_ddelta__GUARD__
    #define _risk_ddelta__GUARD__
    DECL_STRONG_TYPE(risk_ddelta, float);
    #endif//_risk_ddelta__GUARD__

    #ifndef _risk_rm1__GUARD__
    #define _risk_rm1__GUARD__
    DECL_STRONG_TYPE(risk_rm1, float);
    #endif//_risk_rm1__GUARD__

    #ifndef _risk_rm2__GUARD__
    #define _risk_rm2__GUARD__
    DECL_STRONG_TYPE(risk_rm2, float);
    #endif//_risk_rm2__GUARD__

    #ifndef _risk_rm3__GUARD__
    #define _risk_rm3__GUARD__
    DECL_STRONG_TYPE(risk_rm3, float);
    #endif//_risk_rm3__GUARD__

    #ifndef _risk_rm4__GUARD__
    #define _risk_rm4__GUARD__
    DECL_STRONG_TYPE(risk_rm4, float);
    #endif//_risk_rm4__GUARD__

    #ifndef _risk_rm5__GUARD__
    #define _risk_rm5__GUARD__
    DECL_STRONG_TYPE(risk_rm5, float);
    #endif//_risk_rm5__GUARD__

    #ifndef _risk_rm6__GUARD__
    #define _risk_rm6__GUARD__
    DECL_STRONG_TYPE(risk_rm6, float);
    #endif//_risk_rm6__GUARD__

    #ifndef _risk_rm7__GUARD__
    #define _risk_rm7__GUARD__
    DECL_STRONG_TYPE(risk_rm7, float);
    #endif//_risk_rm7__GUARD__

    #ifndef _margin_udn_vdn__GUARD__
    #define _margin_udn_vdn__GUARD__
    DECL_STRONG_TYPE(margin_udn_vdn, float);
    #endif//_margin_udn_vdn__GUARD__

    #ifndef _margin_udn_vup__GUARD__
    #define _margin_udn_vup__GUARD__
    DECL_STRONG_TYPE(margin_udn_vup, float);
    #endif//_margin_udn_vup__GUARD__

    #ifndef _margin_uup_vdn__GUARD__
    #define _margin_uup_vdn__GUARD__
    DECL_STRONG_TYPE(margin_uup_vdn, float);
    #endif//_margin_uup_vdn__GUARD__

    #ifndef _margin_uup_vup__GUARD__
    #define _margin_uup_vup__GUARD__
    DECL_STRONG_TYPE(margin_uup_vup, float);
    #endif//_margin_uup_vup__GUARD__

    #ifndef _risk_u15_dn__GUARD__
    #define _risk_u15_dn__GUARD__
    DECL_STRONG_TYPE(risk_u15_dn, float);
    #endif//_risk_u15_dn__GUARD__

    #ifndef _risk_u15_up__GUARD__
    #define _risk_u15_up__GUARD__
    DECL_STRONG_TYPE(risk_u15_up, float);
    #endif//_risk_u15_up__GUARD__

    #ifndef _risk_u50_dn__GUARD__
    #define _risk_u50_dn__GUARD__
    DECL_STRONG_TYPE(risk_u50_dn, float);
    #endif//_risk_u50_dn__GUARD__

    #ifndef _risk_u50_up__GUARD__
    #define _risk_u50_up__GUARD__
    DECL_STRONG_TYPE(risk_u50_up, float);
    #endif//_risk_u50_up__GUARD__

    #ifndef _fill_brkr_rate__GUARD__
    #define _fill_brkr_rate__GUARD__
    DECL_STRONG_TYPE(fill_brkr_rate, float);
    #endif//_fill_brkr_rate__GUARD__

    #ifndef _fill_routing_rate__GUARD__
    #define _fill_routing_rate__GUARD__
    DECL_STRONG_TYPE(fill_routing_rate, float);
    #endif//_fill_routing_rate__GUARD__

    #ifndef _mm_pref_code__GUARD__
    #define _mm_pref_code__GUARD__
    DECL_STRONG_TYPE(mm_pref_code, string);
    #endif//_mm_pref_code__GUARD__

    #ifndef _mm_credit__GUARD__
    #define _mm_credit__GUARD__
    DECL_STRONG_TYPE(mm_credit, float);
    #endif//_mm_credit__GUARD__

    #ifndef _risk_code__GUARD__
    #define _risk_code__GUARD__
    DECL_STRONG_TYPE(risk_code, spiderrock::protobuf::api::RiskCode);
    #endif//_risk_code__GUARD__

    #ifndef _billing_sec_type__GUARD__
    #define _billing_sec_type__GUARD__
    DECL_STRONG_TYPE(billing_sec_type, spiderrock::protobuf::api::BillingSecType);
    #endif//_billing_sec_type__GUARD__

    #ifndef _billing_category__GUARD__
    #define _billing_category__GUARD__
    DECL_STRONG_TYPE(billing_category, spiderrock::protobuf::api::BillingCategory);
    #endif//_billing_category__GUARD__

    #ifndef _spdr_liquidity_tag__GUARD__
    #define _spdr_liquidity_tag__GUARD__
    DECL_STRONG_TYPE(spdr_liquidity_tag, string);
    #endif//_spdr_liquidity_tag__GUARD__

    #ifndef _exch_liquidity_tag__GUARD__
    #define _exch_liquidity_tag__GUARD__
    DECL_STRONG_TYPE(exch_liquidity_tag, string);
    #endif//_exch_liquidity_tag__GUARD__

    #ifndef _fill_exch_detail__GUARD__
    #define _fill_exch_detail__GUARD__
    DECL_STRONG_TYPE(fill_exch_detail, string);
    #endif//_fill_exch_detail__GUARD__

    #ifndef _cross_side__GUARD__
    #define _cross_side__GUARD__
    DECL_STRONG_TYPE(cross_side, spiderrock::protobuf::api::CrossSide);
    #endif//_cross_side__GUARD__

    #ifndef _is_cross_breakup_fill__GUARD__
    #define _is_cross_breakup_fill__GUARD__
    DECL_STRONG_TYPE(is_cross_breakup_fill, spiderrock::protobuf::api::YesNo);
    #endif//_is_cross_breakup_fill__GUARD__

    #ifndef _last_capacity__GUARD__
    #define _last_capacity__GUARD__
    DECL_STRONG_TYPE(last_capacity, spiderrock::protobuf::api::OrderCapacity);
    #endif//_last_capacity__GUARD__

    #ifndef _exch_firm_type__GUARD__
    #define _exch_firm_type__GUARD__
    DECL_STRONG_TYPE(exch_firm_type, string);
    #endif//_exch_firm_type__GUARD__

    #ifndef _ext_exec_broker__GUARD__
    #define _ext_exec_broker__GUARD__
    DECL_STRONG_TYPE(ext_exec_broker, string);
    #endif//_ext_exec_broker__GUARD__

    #ifndef _relationship_type__GUARD__
    #define _relationship_type__GUARD__
    DECL_STRONG_TYPE(relationship_type, spiderrock::protobuf::api::RelationshipType);
    #endif//_relationship_type__GUARD__

    #ifndef _cl_arrive_mark__GUARD__
    #define _cl_arrive_mark__GUARD__
    DECL_STRONG_TYPE(cl_arrive_mark, float);
    #endif//_cl_arrive_mark__GUARD__

    #ifndef _parent_dttm__GUARD__
    #define _parent_dttm__GUARD__
    DECL_STRONG_TYPE(parent_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_parent_dttm__GUARD__

    #ifndef _parent_order_size__GUARD__
    #define _parent_order_size__GUARD__
    DECL_STRONG_TYPE(parent_order_size, int32);
    #endif//_parent_order_size__GUARD__

    #ifndef _parent_ubid__GUARD__
    #define _parent_ubid__GUARD__
    DECL_STRONG_TYPE(parent_ubid, double);
    #endif//_parent_ubid__GUARD__

    #ifndef _parent_uask__GUARD__
    #define _parent_uask__GUARD__
    DECL_STRONG_TYPE(parent_uask, double);
    #endif//_parent_uask__GUARD__

    #ifndef _parent_umark__GUARD__
    #define _parent_umark__GUARD__
    DECL_STRONG_TYPE(parent_umark, double);
    #endif//_parent_umark__GUARD__

    #ifndef _parent_bid__GUARD__
    #define _parent_bid__GUARD__
    DECL_STRONG_TYPE(parent_bid, double);
    #endif//_parent_bid__GUARD__

    #ifndef _parent_ask__GUARD__
    #define _parent_ask__GUARD__
    DECL_STRONG_TYPE(parent_ask, double);
    #endif//_parent_ask__GUARD__

    #ifndef _parent_mark__GUARD__
    #define _parent_mark__GUARD__
    DECL_STRONG_TYPE(parent_mark, double);
    #endif//_parent_mark__GUARD__

    #ifndef _parent_fair_width__double__GUARD__
    #define _parent_fair_width__double__GUARD__
    DECL_STRONG_TYPE(parent_fair_width__double, double);
    #endif//_parent_fair_width__double__GUARD__

    #ifndef _parent_surf_vol__GUARD__
    #define _parent_surf_vol__GUARD__
    DECL_STRONG_TYPE(parent_surf_vol, double);
    #endif//_parent_surf_vol__GUARD__

    #ifndef _parent_limit_vol__GUARD__
    #define _parent_limit_vol__GUARD__
    DECL_STRONG_TYPE(parent_limit_vol, float);
    #endif//_parent_limit_vol__GUARD__

    #ifndef _parent_limit_prc__GUARD__
    #define _parent_limit_prc__GUARD__
    DECL_STRONG_TYPE(parent_limit_prc, double);
    #endif//_parent_limit_prc__GUARD__

    #ifndef _parent_limit_ref_uprc__GUARD__
    #define _parent_limit_ref_uprc__GUARD__
    DECL_STRONG_TYPE(parent_limit_ref_uprc, double);
    #endif//_parent_limit_ref_uprc__GUARD__

    #ifndef _parent_theo_vol__GUARD__
    #define _parent_theo_vol__GUARD__
    DECL_STRONG_TYPE(parent_theo_vol, float);
    #endif//_parent_theo_vol__GUARD__

    #ifndef _parent_theo_prc__GUARD__
    #define _parent_theo_prc__GUARD__
    DECL_STRONG_TYPE(parent_theo_prc, float);
    #endif//_parent_theo_prc__GUARD__

    #ifndef _parent_pos_type__GUARD__
    #define _parent_pos_type__GUARD__
    DECL_STRONG_TYPE(parent_pos_type, spiderrock::protobuf::api::PositionType);
    #endif//_parent_pos_type__GUARD__

    #ifndef _parent_ssale_flag__GUARD__
    #define _parent_ssale_flag__GUARD__
    DECL_STRONG_TYPE(parent_ssale_flag, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_parent_ssale_flag__GUARD__

    #ifndef _notice_number__GUARD__
    #define _notice_number__GUARD__
    DECL_STRONG_TYPE(notice_number, int64);
    #endif//_notice_number__GUARD__

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

    #ifndef _exch_mask_enabled__GUARD__
    #define _exch_mask_enabled__GUARD__
    DECL_STRONG_TYPE(exch_mask_enabled, spiderrock::protobuf::api::YesNo);
    #endif//_exch_mask_enabled__GUARD__

    #ifndef _time_in_force__GUARD__
    #define _time_in_force__GUARD__
    DECL_STRONG_TYPE(time_in_force, spiderrock::protobuf::api::TimeInForce);
    #endif//_time_in_force__GUARD__

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

    #ifndef _order_limit_class__GUARD__
    #define _order_limit_class__GUARD__
    DECL_STRONG_TYPE(order_limit_class, spiderrock::protobuf::api::SpdrLimitClass);
    #endif//_order_limit_class__GUARD__

    #ifndef _take_reach_rule__GUARD__
    #define _take_reach_rule__GUARD__
    DECL_STRONG_TYPE(take_reach_rule, spiderrock::protobuf::api::ReachRule);
    #endif//_take_reach_rule__GUARD__

    #ifndef _override_code__GUARD__
    #define _override_code__GUARD__
    DECL_STRONG_TYPE(override_code, spiderrock::protobuf::api::OverrideCode);
    #endif//_override_code__GUARD__

    #ifndef _alpha_type__GUARD__
    #define _alpha_type__GUARD__
    DECL_STRONG_TYPE(alpha_type, spiderrock::protobuf::api::AlphaType);
    #endif//_alpha_type__GUARD__

    #ifndef _parent_strategy__GUARD__
    #define _parent_strategy__GUARD__
    DECL_STRONG_TYPE(parent_strategy, string);
    #endif//_parent_strategy__GUARD__

    #ifndef _user_name__GUARD__
    #define _user_name__GUARD__
    DECL_STRONG_TYPE(user_name, string);
    #endif//_user_name__GUARD__

    #ifndef _auto_hedge__GUARD__
    #define _auto_hedge__GUARD__
    DECL_STRONG_TYPE(auto_hedge, spiderrock::protobuf::api::AutoHedge);
    #endif//_auto_hedge__GUARD__

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

    #ifndef _user_data1__GUARD__
    #define _user_data1__GUARD__
    DECL_STRONG_TYPE(user_data1, string);
    #endif//_user_data1__GUARD__

    #ifndef _user_data2__GUARD__
    #define _user_data2__GUARD__
    DECL_STRONG_TYPE(user_data2, string);
    #endif//_user_data2__GUARD__

    #ifndef _years__float__GUARD__
    #define _years__float__GUARD__
    DECL_STRONG_TYPE(years__float, float);
    #endif//_years__float__GUARD__

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

    #ifndef _u_prc_ratio__float__GUARD__
    #define _u_prc_ratio__float__GUARD__
    DECL_STRONG_TYPE(u_prc_ratio__float, float);
    #endif//_u_prc_ratio__float__GUARD__

    #ifndef _min_tick_size__float__GUARD__
    #define _min_tick_size__float__GUARD__
    DECL_STRONG_TYPE(min_tick_size__float, float);
    #endif//_min_tick_size__float__GUARD__

    #ifndef _price_format__GUARD__
    #define _price_format__GUARD__
    DECL_STRONG_TYPE(price_format, spiderrock::protobuf::api::PriceFormat);
    #endif//_price_format__GUARD__

    #ifndef _u_price_format__GUARD__
    #define _u_price_format__GUARD__
    DECL_STRONG_TYPE(u_price_format, spiderrock::protobuf::api::PriceFormat);
    #endif//_u_price_format__GUARD__

    #ifndef _response_type__GUARD__
    #define _response_type__GUARD__
    DECL_STRONG_TYPE(response_type, string);
    #endif//_response_type__GUARD__

    #ifndef _nbbo_bid__double__GUARD__
    #define _nbbo_bid__double__GUARD__
    DECL_STRONG_TYPE(nbbo_bid__double, double);
    #endif//_nbbo_bid__double__GUARD__

    #ifndef _nbbo_ask__double__GUARD__
    #define _nbbo_ask__double__GUARD__
    DECL_STRONG_TYPE(nbbo_ask__double, double);
    #endif//_nbbo_ask__double__GUARD__

    #ifndef _child_uprc__GUARD__
    #define _child_uprc__GUARD__
    DECL_STRONG_TYPE(child_uprc, double);
    #endif//_child_uprc__GUARD__

    #ifndef _exch_bid_sz__GUARD__
    #define _exch_bid_sz__GUARD__
    DECL_STRONG_TYPE(exch_bid_sz, int32);
    #endif//_exch_bid_sz__GUARD__

    #ifndef _exch_ask_sz__GUARD__
    #define _exch_ask_sz__GUARD__
    DECL_STRONG_TYPE(exch_ask_sz, int32);
    #endif//_exch_ask_sz__GUARD__

    #ifndef _live_uprc__double__GUARD__
    #define _live_uprc__double__GUARD__
    DECL_STRONG_TYPE(live_uprc__double, double);
    #endif//_live_uprc__double__GUARD__

    #ifndef _live_mark__GUARD__
    #define _live_mark__GUARD__
    DECL_STRONG_TYPE(live_mark, double);
    #endif//_live_mark__GUARD__

    #ifndef _src_timestamp__GUARD__
    #define _src_timestamp__GUARD__
    DECL_STRONG_TYPE(src_timestamp, int64);
    #endif//_src_timestamp__GUARD__

    #ifndef _sgw_timestamp__GUARD__
    #define _sgw_timestamp__GUARD__
    DECL_STRONG_TYPE(sgw_timestamp, int64);
    #endif//_sgw_timestamp__GUARD__

    #ifndef _eng_timestamp__GUARD__
    #define _eng_timestamp__GUARD__
    DECL_STRONG_TYPE(eng_timestamp, int64);
    #endif//_eng_timestamp__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _data_center__v7__GUARD__
    #define _data_center__v7__GUARD__
    DECL_STRONG_TYPE(data_center__v7, spiderrock::protobuf::api::SRDataCenter_V7);
    #endif//_data_center__v7__GUARD__

    #ifndef _face_side__v7__GUARD__
    #define _face_side__v7__GUARD__
    DECL_STRONG_TYPE(face_side__v7, spiderrock::protobuf::api::FaceSide);
    #endif//_face_side__v7__GUARD__

    #ifndef _face_shape__v7__GUARD__
    #define _face_shape__v7__GUARD__
    DECL_STRONG_TYPE(face_shape__v7, spiderrock::protobuf::api::FaceShape);
    #endif//_face_shape__v7__GUARD__

    #ifndef _child_locate_source__v7__GUARD__
    #define _child_locate_source__v7__GUARD__
    DECL_STRONG_TYPE(child_locate_source__v7, string);
    #endif//_child_locate_source__v7__GUARD__

    #ifndef _fill_pr__v7__GUARD__
    #define _fill_pr__v7__GUARD__
    DECL_STRONG_TYPE(fill_pr__v7, float);
    #endif//_fill_pr__v7__GUARD__

    #ifndef _fill_risk_metric1__v7__GUARD__
    #define _fill_risk_metric1__v7__GUARD__
    DECL_STRONG_TYPE(fill_risk_metric1__v7, float);
    #endif//_fill_risk_metric1__v7__GUARD__

    #ifndef _fill_risk_metric2__v7__GUARD__
    #define _fill_risk_metric2__v7__GUARD__
    DECL_STRONG_TYPE(fill_risk_metric2__v7, float);
    #endif//_fill_risk_metric2__v7__GUARD__

    #ifndef _fill_risk_metric3__v7__GUARD__
    #define _fill_risk_metric3__v7__GUARD__
    DECL_STRONG_TYPE(fill_risk_metric3__v7, float);
    #endif//_fill_risk_metric3__v7__GUARD__

    #ifndef _fill_risk_metric4__v7__GUARD__
    #define _fill_risk_metric4__v7__GUARD__
    DECL_STRONG_TYPE(fill_risk_metric4__v7, float);
    #endif//_fill_risk_metric4__v7__GUARD__

    #ifndef _fill_risk_metric5__v7__GUARD__
    #define _fill_risk_metric5__v7__GUARD__
    DECL_STRONG_TYPE(fill_risk_metric5__v7, float);
    #endif//_fill_risk_metric5__v7__GUARD__

    #ifndef _fill_risk_metric6__v7__GUARD__
    #define _fill_risk_metric6__v7__GUARD__
    DECL_STRONG_TYPE(fill_risk_metric6__v7, float);
    #endif//_fill_risk_metric6__v7__GUARD__

    #ifndef _fill_risk_metric7__v7__GUARD__
    #define _fill_risk_metric7__v7__GUARD__
    DECL_STRONG_TYPE(fill_risk_metric7__v7, float);
    #endif//_fill_risk_metric7__v7__GUARD__

    #ifndef _fill_s08_dn__v7__GUARD__
    #define _fill_s08_dn__v7__GUARD__
    DECL_STRONG_TYPE(fill_s08_dn__v7, float);
    #endif//_fill_s08_dn__v7__GUARD__

    #ifndef _fill_s06_up__v7__GUARD__
    #define _fill_s06_up__v7__GUARD__
    DECL_STRONG_TYPE(fill_s06_up__v7, float);
    #endif//_fill_s06_up__v7__GUARD__

    #ifndef _fill_s15_dn__v7__GUARD__
    #define _fill_s15_dn__v7__GUARD__
    DECL_STRONG_TYPE(fill_s15_dn__v7, float);
    #endif//_fill_s15_dn__v7__GUARD__

    #ifndef _fill_s15_up__v7__GUARD__
    #define _fill_s15_up__v7__GUARD__
    DECL_STRONG_TYPE(fill_s15_up__v7, float);
    #endif//_fill_s15_up__v7__GUARD__

    #ifndef _fill_s50_dn__v7__GUARD__
    #define _fill_s50_dn__v7__GUARD__
    DECL_STRONG_TYPE(fill_s50_dn__v7, float);
    #endif//_fill_s50_dn__v7__GUARD__

    #ifndef _fill_s50_up__v7__GUARD__
    #define _fill_s50_up__v7__GUARD__
    DECL_STRONG_TYPE(fill_s50_up__v7, float);
    #endif//_fill_s50_up__v7__GUARD__

    #ifndef _fill_number__GUARD__
    #define _fill_number__GUARD__
    DECL_STRONG_TYPE(fill_number, int64);
    #endif//_fill_number__GUARD__

    
    class SpdrParentExecution_PKey {
        public:
        //using statements for all types used in this class
        using fill_number = spiderrock::protobuf::api::fill_number;

        private:
        fill_number m_fill_number{};

        public:
        fill_number get_fill_number() const {
            return m_fill_number;
        }
        void set_fill_number(const fill_number& value)  {
            m_fill_number = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentExecution_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentExecution_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const fill_number & value) { set_fill_number(value); }


        SpdrParentExecution_PKey() {}

        virtual ~SpdrParentExecution_PKey() {
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
        bool IncludeFillNumber() const {
            return !(m_fill_number == 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeFillNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(10,m_fill_number);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeFillNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,10,m_fill_number);
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
                    case 10: {m_fill_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SpdrParentExecution {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrParentExecution_PKey;
        using sys_realm = spiderrock::protobuf::api::sys_realm;
        using sys_environment = spiderrock::protobuf::api::sys_environment;
        using run_status = spiderrock::protobuf::api::run_status;
        using version = spiderrock::protobuf::api::version__int32;
        using exec_status = spiderrock::protobuf::api::exec_status;
        using exec_shape = spiderrock::protobuf::api::exec_shape;
        using package_id = spiderrock::protobuf::api::package_id;
        using parent_number = spiderrock::protobuf::api::parent_number;
        using parent_version = spiderrock::protobuf::api::parent_version;
        using base_parent_number = spiderrock::protobuf::api::base_parent_number;
        using cl_ord_id = spiderrock::protobuf::api::cl_ord_id__int64;
        using review_cl_ord_id = spiderrock::protobuf::api::review_cl_ord_id;
        using alt_fill_id = spiderrock::protobuf::api::alt_fill_id;
        using alt_order_id = spiderrock::protobuf::api::alt_order_id;
        using alt_cross_id = spiderrock::protobuf::api::alt_cross_id;
        using alt_leg_ref_id = spiderrock::protobuf::api::alt_leg_ref_id;
        using alt_accnt = spiderrock::protobuf::api::alt_accnt;
        using alt_user_name = spiderrock::protobuf::api::alt_user_name;
        using src_routing_code = spiderrock::protobuf::api::src_routing_code;
        using risk_group_id = spiderrock::protobuf::api::risk_group_id;
        using trigger_group_id = spiderrock::protobuf::api::trigger_group_id;
        using trigger_timestamp = spiderrock::protobuf::api::trigger_timestamp;
        using street_cl_ord_id = spiderrock::protobuf::api::street_cl_ord_id;
        using street_order_id = spiderrock::protobuf::api::street_order_id;
        using side_cl_ord_id = spiderrock::protobuf::api::side_cl_ord_id;
        using parent_shape = spiderrock::protobuf::api::parent_shape;
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using origin_ticker = spiderrock::protobuf::api::origin_ticker;
        using origin_sec_key = spiderrock::protobuf::api::origin_sec_key;
        using accnt = spiderrock::protobuf::api::accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using strategy_accnt = spiderrock::protobuf::api::strategy_accnt;
        using spdr_source = spiderrock::protobuf::api::spdr_source;
        using grouping_code = spiderrock::protobuf::api::grouping_code;
        using core_client_firm = spiderrock::protobuf::api::core_client_firm;
        using sponsor_client_firm = spiderrock::protobuf::api::sponsor_client_firm;
        using routing_code = spiderrock::protobuf::api::routing_code;
        using engine_name = spiderrock::protobuf::api::engine_name;
        using gateway_name = spiderrock::protobuf::api::gateway_name;
        using exec_role = spiderrock::protobuf::api::exec_role;
        using exec_brkr_code = spiderrock::protobuf::api::exec_brkr_code;
        using exec_brkr_mpid = spiderrock::protobuf::api::exec_brkr_mpid;
        using alt_brkr_mpid = spiderrock::protobuf::api::alt_brkr_mpid;
        using exec_brkr_accnt = spiderrock::protobuf::api::exec_brkr_accnt;
        using exec_brkr_cl_firm = spiderrock::protobuf::api::exec_brkr_cl_firm;
        using exec_brkr_user_name = spiderrock::protobuf::api::exec_brkr_user_name;
        using clearing_flip_type = spiderrock::protobuf::api::clearing_flip_type;
        using clearing_flip_firm = spiderrock::protobuf::api::clearing_flip_firm;
        using clearing_flip_accnt = spiderrock::protobuf::api::clearing_flip_accnt;
        using clearing_firm = spiderrock::protobuf::api::clearing_firm;
        using clearing_accnt = spiderrock::protobuf::api::clearing_accnt;
        using orig_exec_id = spiderrock::protobuf::api::orig_exec_id;
        using last_exec_id = spiderrock::protobuf::api::last_exec_id;
        using remote_text = spiderrock::protobuf::api::remote_text;
        using order_side = spiderrock::protobuf::api::order_side;
        using spdr_order_status = spiderrock::protobuf::api::spdr_order_status;
        using spdr_close_reason = spiderrock::protobuf::api::spdr_close_reason;
        using cum_fill_quantity = spiderrock::protobuf::api::cum_fill_quantity;
        using avg_fill_price = spiderrock::protobuf::api::avg_fill_price;
        using cum_leg_fill_quantity = spiderrock::protobuf::api::cum_leg_fill_quantity;
        using avg_leg_fill_price = spiderrock::protobuf::api::avg_leg_fill_price;
        using leaves_qty = spiderrock::protobuf::api::leaves_qty;
        using price_type = spiderrock::protobuf::api::price_type__PriceType;
        using child_shape = spiderrock::protobuf::api::child_shape;
        using child_size = spiderrock::protobuf::api::child_size;
        using child_price = spiderrock::protobuf::api::child_price;
        using child_dttm = spiderrock::protobuf::api::child_dttm;
        using child_exch = spiderrock::protobuf::api::child_exch;
        using child_ex_dest = spiderrock::protobuf::api::child_ex_dest;
        using child_exec_broker = spiderrock::protobuf::api::child_exec_broker;
        using child_is_directed = spiderrock::protobuf::api::child_is_directed;
        using child_iso_sweep = spiderrock::protobuf::api::child_iso_sweep;
        using child_order_handling = spiderrock::protobuf::api::child_order_handling;
        using child_algo_handler = spiderrock::protobuf::api::child_algo_handler;
        using child_create_reason = spiderrock::protobuf::api::child_create_reason;
        using child_cancel_reason = spiderrock::protobuf::api::child_cancel_reason;
        using child_maker_taker = spiderrock::protobuf::api::child_maker_taker;
        using child_ubid = spiderrock::protobuf::api::child_ubid;
        using child_uask = spiderrock::protobuf::api::child_uask;
        using child_bid = spiderrock::protobuf::api::child_bid;
        using child_ask = spiderrock::protobuf::api::child_ask;
        using child_mark = spiderrock::protobuf::api::child_mark;
        using child_fair_width = spiderrock::protobuf::api::child_fair_width__double;
        using child_vol = spiderrock::protobuf::api::child_vol;
        using child_prob = spiderrock::protobuf::api::child_prob;
        using child_limit_ref_uprc = spiderrock::protobuf::api::child_limit_ref_uprc;
        using child_limit_prc = spiderrock::protobuf::api::child_limit_prc;
        using child_vol_atm = spiderrock::protobuf::api::child_vol_atm;
        using child_pos_type = spiderrock::protobuf::api::child_pos_type;
        using child_firm_opt_position = spiderrock::protobuf::api::child_firm_opt_position;
        using child_ssale_flag = spiderrock::protobuf::api::child_ssale_flag;
        using child_firm_stk_position = spiderrock::protobuf::api::child_firm_stk_position;
        using child_firm_open_orders = spiderrock::protobuf::api::child_firm_open_orders;
        using child_locate_quan = spiderrock::protobuf::api::child_locate_quan;
        using child_locate_firm = spiderrock::protobuf::api::child_locate_firm;
        using child_locate_pool = spiderrock::protobuf::api::child_locate_pool;
        using child_mkt_stance = spiderrock::protobuf::api::child_mkt_stance;
        using child_cxl_attempted = spiderrock::protobuf::api::child_cxl_attempted;
        using child_cxl_fill_latency = spiderrock::protobuf::api::child_cxl_fill_latency;
        using child_method = spiderrock::protobuf::api::child_method;
        using child_source = spiderrock::protobuf::api::child_source;
        using firm_type = spiderrock::protobuf::api::firm_type;
        using pri_agg_group = spiderrock::protobuf::api::pri_agg_group;
        using sec_agg_group = spiderrock::protobuf::api::sec_agg_group;
        using directed_client_firm = spiderrock::protobuf::api::directed_client_firm;
        using is_comm_paying = spiderrock::protobuf::api::is_comm_paying;
        using fill_transact_dttm = spiderrock::protobuf::api::fill_transact_dttm;
        using fill_ts = spiderrock::protobuf::api::fill_ts;
        using fill_dttm = spiderrock::protobuf::api::fill_dttm;
        using fill_exch = spiderrock::protobuf::api::fill_exch;
        using fill_exec_id = spiderrock::protobuf::api::fill_exec_id;
        using fill_exec_ref_id = spiderrock::protobuf::api::fill_exec_ref_id;
        using fill_leg_ref_id = spiderrock::protobuf::api::fill_leg_ref_id;
        using fill_leg_ratio = spiderrock::protobuf::api::fill_leg_ratio;
        using fill_exch_fee = spiderrock::protobuf::api::fill_exch_fee;
        using fill_market = spiderrock::protobuf::api::fill_market;
        using fill_price = spiderrock::protobuf::api::fill_price;
        using fill_quantity = spiderrock::protobuf::api::fill_quantity;
        using fill_report_detail = spiderrock::protobuf::api::fill_report_detail;
        using fill_bid = spiderrock::protobuf::api::fill_bid;
        using fill_ask = spiderrock::protobuf::api::fill_ask;
        using fill_mark = spiderrock::protobuf::api::fill_mark;
        using fill_fair_width = spiderrock::protobuf::api::fill_fair_width__double;
        using fill_umark = spiderrock::protobuf::api::fill_umark;
        using fill_ubid = spiderrock::protobuf::api::fill_ubid;
        using fill_uask = spiderrock::protobuf::api::fill_uask;
        using fill_ubid_sz = spiderrock::protobuf::api::fill_ubid_sz;
        using fill_uask_sz = spiderrock::protobuf::api::fill_uask_sz;
        using fill_vol_atm = spiderrock::protobuf::api::fill_vol_atm;
        using fill_mark1_m = spiderrock::protobuf::api::fill_mark1_m;
        using fill_mark10_m = spiderrock::protobuf::api::fill_mark10_m;
        using fill_bid1_m = spiderrock::protobuf::api::fill_bid1_m;
        using fill_ask1_m = spiderrock::protobuf::api::fill_ask1_m;
        using fill_bid10_m = spiderrock::protobuf::api::fill_bid10_m;
        using fill_ask10_m = spiderrock::protobuf::api::fill_ask10_m;
        using fill_umark1_m = spiderrock::protobuf::api::fill_umark1_m;
        using fill_umark10_m = spiderrock::protobuf::api::fill_umark10_m;
        using fill_vol_atm1_m = spiderrock::protobuf::api::fill_vol_atm1_m;
        using fill_vol_atm10_m = spiderrock::protobuf::api::fill_vol_atm10_m;
        using fill_state1_m = spiderrock::protobuf::api::fill_state1_m;
        using fill_state10_m = spiderrock::protobuf::api::fill_state10_m;
        using fill_vol = spiderrock::protobuf::api::fill_vol;
        using fill_vol_s = spiderrock::protobuf::api::fill_vol_s;
        using fill_prob = spiderrock::protobuf::api::fill_prob;
        using fill_limit_ref_uprc = spiderrock::protobuf::api::fill_limit_ref_uprc;
        using fill_limit_ref_sdiv = spiderrock::protobuf::api::fill_limit_ref_sdiv;
        using fill_limit_prc = spiderrock::protobuf::api::fill_limit_prc;
        using fill_ve = spiderrock::protobuf::api::fill_ve;
        using fill_ga = spiderrock::protobuf::api::fill_ga;
        using fill_de = spiderrock::protobuf::api::fill_de;
        using fill_th = spiderrock::protobuf::api::fill_th;
        using fill_ve_ratio = spiderrock::protobuf::api::fill_ve_ratio;
        using fill_beta = spiderrock::protobuf::api::fill_beta;
        using risk_vega = spiderrock::protobuf::api::risk_vega;
        using risk_wt_vega = spiderrock::protobuf::api::risk_wt_vega;
        using risk_nvalue = spiderrock::protobuf::api::risk_nvalue;
        using risk_delta = spiderrock::protobuf::api::risk_delta;
        using risk_ddelta = spiderrock::protobuf::api::risk_ddelta;
        using risk_rm1 = spiderrock::protobuf::api::risk_rm1;
        using risk_rm2 = spiderrock::protobuf::api::risk_rm2;
        using risk_rm3 = spiderrock::protobuf::api::risk_rm3;
        using risk_rm4 = spiderrock::protobuf::api::risk_rm4;
        using risk_rm5 = spiderrock::protobuf::api::risk_rm5;
        using risk_rm6 = spiderrock::protobuf::api::risk_rm6;
        using risk_rm7 = spiderrock::protobuf::api::risk_rm7;
        using margin_udn_vdn = spiderrock::protobuf::api::margin_udn_vdn;
        using margin_udn_vup = spiderrock::protobuf::api::margin_udn_vup;
        using margin_uup_vdn = spiderrock::protobuf::api::margin_uup_vdn;
        using margin_uup_vup = spiderrock::protobuf::api::margin_uup_vup;
        using risk_u15_dn = spiderrock::protobuf::api::risk_u15_dn;
        using risk_u15_up = spiderrock::protobuf::api::risk_u15_up;
        using risk_u50_dn = spiderrock::protobuf::api::risk_u50_dn;
        using risk_u50_up = spiderrock::protobuf::api::risk_u50_up;
        using fill_brkr_rate = spiderrock::protobuf::api::fill_brkr_rate;
        using fill_routing_rate = spiderrock::protobuf::api::fill_routing_rate;
        using mm_pref_code = spiderrock::protobuf::api::mm_pref_code;
        using mm_credit = spiderrock::protobuf::api::mm_credit;
        using risk_code = spiderrock::protobuf::api::risk_code;
        using billing_sec_type = spiderrock::protobuf::api::billing_sec_type;
        using billing_category = spiderrock::protobuf::api::billing_category;
        using spdr_liquidity_tag = spiderrock::protobuf::api::spdr_liquidity_tag;
        using exch_liquidity_tag = spiderrock::protobuf::api::exch_liquidity_tag;
        using fill_exch_detail = spiderrock::protobuf::api::fill_exch_detail;
        using cross_side = spiderrock::protobuf::api::cross_side;
        using is_cross_breakup_fill = spiderrock::protobuf::api::is_cross_breakup_fill;
        using last_capacity = spiderrock::protobuf::api::last_capacity;
        using exch_firm_type = spiderrock::protobuf::api::exch_firm_type;
        using ext_exec_broker = spiderrock::protobuf::api::ext_exec_broker;
        using relationship_type = spiderrock::protobuf::api::relationship_type;
        using cl_arrive_mark = spiderrock::protobuf::api::cl_arrive_mark;
        using parent_dttm = spiderrock::protobuf::api::parent_dttm;
        using parent_order_size = spiderrock::protobuf::api::parent_order_size;
        using parent_ubid = spiderrock::protobuf::api::parent_ubid;
        using parent_uask = spiderrock::protobuf::api::parent_uask;
        using parent_umark = spiderrock::protobuf::api::parent_umark;
        using parent_bid = spiderrock::protobuf::api::parent_bid;
        using parent_ask = spiderrock::protobuf::api::parent_ask;
        using parent_mark = spiderrock::protobuf::api::parent_mark;
        using parent_fair_width = spiderrock::protobuf::api::parent_fair_width__double;
        using parent_surf_vol = spiderrock::protobuf::api::parent_surf_vol;
        using parent_limit_vol = spiderrock::protobuf::api::parent_limit_vol;
        using parent_limit_prc = spiderrock::protobuf::api::parent_limit_prc;
        using parent_limit_ref_uprc = spiderrock::protobuf::api::parent_limit_ref_uprc;
        using parent_theo_vol = spiderrock::protobuf::api::parent_theo_vol;
        using parent_theo_prc = spiderrock::protobuf::api::parent_theo_prc;
        using parent_pos_type = spiderrock::protobuf::api::parent_pos_type;
        using parent_ssale_flag = spiderrock::protobuf::api::parent_ssale_flag;
        using notice_number = spiderrock::protobuf::api::notice_number;
        using num_make_exchanges = spiderrock::protobuf::api::num_make_exchanges;
        using public_size = spiderrock::protobuf::api::public_size;
        using can_overlap_cxl_repl = spiderrock::protobuf::api::can_overlap_cxl_repl;
        using progress_rule = spiderrock::protobuf::api::progress_rule;
        using exch_mask_enabled = spiderrock::protobuf::api::exch_mask_enabled;
        using time_in_force = spiderrock::protobuf::api::time_in_force;
        using parent_order_handling = spiderrock::protobuf::api::parent_order_handling;
        using parent_balance_handling = spiderrock::protobuf::api::parent_balance_handling;
        using order_limit_type = spiderrock::protobuf::api::order_limit_type;
        using order_limit_class = spiderrock::protobuf::api::order_limit_class;
        using take_reach_rule = spiderrock::protobuf::api::take_reach_rule;
        using override_code = spiderrock::protobuf::api::override_code;
        using alpha_type = spiderrock::protobuf::api::alpha_type;
        using parent_strategy = spiderrock::protobuf::api::parent_strategy;
        using user_name = spiderrock::protobuf::api::user_name;
        using auto_hedge = spiderrock::protobuf::api::auto_hedge;
        using hedge_sec_key = spiderrock::protobuf::api::hedge_sec_key;
        using hedge_sec_type = spiderrock::protobuf::api::hedge_sec_type;
        using hedge_beta_ratio = spiderrock::protobuf::api::hedge_beta_ratio;
        using hedge_scope = spiderrock::protobuf::api::hedge_scope;
        using user_data1 = spiderrock::protobuf::api::user_data1;
        using user_data2 = spiderrock::protobuf::api::user_data2;
        using years = spiderrock::protobuf::api::years__float;
        using underliers_per_cn = spiderrock::protobuf::api::underliers_per_cn;
        using underlier_type = spiderrock::protobuf::api::underlier_type__UnderlierType;
        using tick_value = spiderrock::protobuf::api::tick_value;
        using point_value = spiderrock::protobuf::api::point_value__float;
        using point_currency = spiderrock::protobuf::api::point_currency;
        using u_prc_ratio = spiderrock::protobuf::api::u_prc_ratio__float;
        using min_tick_size = spiderrock::protobuf::api::min_tick_size__float;
        using price_format = spiderrock::protobuf::api::price_format;
        using u_price_format = spiderrock::protobuf::api::u_price_format;
        using response_type = spiderrock::protobuf::api::response_type;
        using nbbo_bid = spiderrock::protobuf::api::nbbo_bid__double;
        using nbbo_ask = spiderrock::protobuf::api::nbbo_ask__double;
        using child_uprc = spiderrock::protobuf::api::child_uprc;
        using exch_bid_sz = spiderrock::protobuf::api::exch_bid_sz;
        using exch_ask_sz = spiderrock::protobuf::api::exch_ask_sz;
        using live_uprc = spiderrock::protobuf::api::live_uprc__double;
        using live_mark = spiderrock::protobuf::api::live_mark;
        using src_timestamp = spiderrock::protobuf::api::src_timestamp;
        using sgw_timestamp = spiderrock::protobuf::api::sgw_timestamp;
        using eng_timestamp = spiderrock::protobuf::api::eng_timestamp;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using data_center__v7 = spiderrock::protobuf::api::data_center__v7;
        using face_side__v7 = spiderrock::protobuf::api::face_side__v7;
        using face_shape__v7 = spiderrock::protobuf::api::face_shape__v7;
        using child_locate_source__v7 = spiderrock::protobuf::api::child_locate_source__v7;
        using fill_pr__v7 = spiderrock::protobuf::api::fill_pr__v7;
        using fill_risk_metric1__v7 = spiderrock::protobuf::api::fill_risk_metric1__v7;
        using fill_risk_metric2__v7 = spiderrock::protobuf::api::fill_risk_metric2__v7;
        using fill_risk_metric3__v7 = spiderrock::protobuf::api::fill_risk_metric3__v7;
        using fill_risk_metric4__v7 = spiderrock::protobuf::api::fill_risk_metric4__v7;
        using fill_risk_metric5__v7 = spiderrock::protobuf::api::fill_risk_metric5__v7;
        using fill_risk_metric6__v7 = spiderrock::protobuf::api::fill_risk_metric6__v7;
        using fill_risk_metric7__v7 = spiderrock::protobuf::api::fill_risk_metric7__v7;
        using fill_s08_dn__v7 = spiderrock::protobuf::api::fill_s08_dn__v7;
        using fill_s06_up__v7 = spiderrock::protobuf::api::fill_s06_up__v7;
        using fill_s15_dn__v7 = spiderrock::protobuf::api::fill_s15_dn__v7;
        using fill_s15_up__v7 = spiderrock::protobuf::api::fill_s15_up__v7;
        using fill_s50_dn__v7 = spiderrock::protobuf::api::fill_s50_dn__v7;
        using fill_s50_up__v7 = spiderrock::protobuf::api::fill_s50_up__v7;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        sys_realm m_sys_realm{};
        sys_environment m_sys_environment{};
        run_status m_run_status{};
        version m_version{};
        exec_status m_exec_status{};
        exec_shape m_exec_shape{};
        package_id m_package_id{};
        parent_number m_parent_number{};
        parent_version m_parent_version{};
        base_parent_number m_base_parent_number{};
        cl_ord_id m_cl_ord_id{};
        review_cl_ord_id m_review_cl_ord_id{};
        alt_fill_id m_alt_fill_id{};
        alt_order_id m_alt_order_id{};
        alt_cross_id m_alt_cross_id{};
        alt_leg_ref_id m_alt_leg_ref_id{};
        alt_accnt m_alt_accnt{};
        alt_user_name m_alt_user_name{};
        src_routing_code m_src_routing_code{};
        risk_group_id m_risk_group_id{};
        trigger_group_id m_trigger_group_id{};
        trigger_timestamp m_trigger_timestamp{};
        street_cl_ord_id m_street_cl_ord_id{};
        street_order_id m_street_order_id{};
        side_cl_ord_id m_side_cl_ord_id{};
        parent_shape m_parent_shape{};
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        ticker m_ticker{};
        origin_ticker m_origin_ticker{};
        origin_sec_key m_origin_sec_key{};
        accnt m_accnt{};
        client_firm m_client_firm{};
        strategy_accnt m_strategy_accnt{};
        spdr_source m_spdr_source{};
        grouping_code m_grouping_code{};
        core_client_firm m_core_client_firm{};
        sponsor_client_firm m_sponsor_client_firm{};
        routing_code m_routing_code{};
        engine_name m_engine_name{};
        gateway_name m_gateway_name{};
        exec_role m_exec_role{};
        exec_brkr_code m_exec_brkr_code{};
        exec_brkr_mpid m_exec_brkr_mpid{};
        alt_brkr_mpid m_alt_brkr_mpid{};
        exec_brkr_accnt m_exec_brkr_accnt{};
        exec_brkr_cl_firm m_exec_brkr_cl_firm{};
        exec_brkr_user_name m_exec_brkr_user_name{};
        clearing_flip_type m_clearing_flip_type{};
        clearing_flip_firm m_clearing_flip_firm{};
        clearing_flip_accnt m_clearing_flip_accnt{};
        clearing_firm m_clearing_firm{};
        clearing_accnt m_clearing_accnt{};
        orig_exec_id m_orig_exec_id{};
        last_exec_id m_last_exec_id{};
        remote_text m_remote_text{};
        order_side m_order_side{};
        spdr_order_status m_spdr_order_status{};
        spdr_close_reason m_spdr_close_reason{};
        cum_fill_quantity m_cum_fill_quantity{};
        avg_fill_price m_avg_fill_price{};
        cum_leg_fill_quantity m_cum_leg_fill_quantity{};
        avg_leg_fill_price m_avg_leg_fill_price{};
        leaves_qty m_leaves_qty{};
        price_type m_price_type{};
        child_shape m_child_shape{};
        child_size m_child_size{};
        child_price m_child_price{};
        child_dttm m_child_dttm{};
        child_exch m_child_exch{};
        child_ex_dest m_child_ex_dest{};
        child_exec_broker m_child_exec_broker{};
        child_is_directed m_child_is_directed{};
        child_iso_sweep m_child_iso_sweep{};
        child_order_handling m_child_order_handling{};
        child_algo_handler m_child_algo_handler{};
        child_create_reason m_child_create_reason{};
        child_cancel_reason m_child_cancel_reason{};
        child_maker_taker m_child_maker_taker{};
        child_ubid m_child_ubid{};
        child_uask m_child_uask{};
        child_bid m_child_bid{};
        child_ask m_child_ask{};
        child_mark m_child_mark{};
        child_fair_width m_child_fair_width{};
        child_vol m_child_vol{};
        child_prob m_child_prob{};
        child_limit_ref_uprc m_child_limit_ref_uprc{};
        child_limit_prc m_child_limit_prc{};
        child_vol_atm m_child_vol_atm{};
        child_pos_type m_child_pos_type{};
        child_firm_opt_position m_child_firm_opt_position{};
        child_ssale_flag m_child_ssale_flag{};
        child_firm_stk_position m_child_firm_stk_position{};
        child_firm_open_orders m_child_firm_open_orders{};
        child_locate_quan m_child_locate_quan{};
        child_locate_firm m_child_locate_firm{};
        child_locate_pool m_child_locate_pool{};
        child_mkt_stance m_child_mkt_stance{};
        child_cxl_attempted m_child_cxl_attempted{};
        child_cxl_fill_latency m_child_cxl_fill_latency{};
        child_method m_child_method{};
        child_source m_child_source{};
        firm_type m_firm_type{};
        pri_agg_group m_pri_agg_group{};
        sec_agg_group m_sec_agg_group{};
        directed_client_firm m_directed_client_firm{};
        is_comm_paying m_is_comm_paying{};
        fill_transact_dttm m_fill_transact_dttm{};
        fill_ts m_fill_ts{};
        fill_dttm m_fill_dttm{};
        fill_exch m_fill_exch{};
        fill_exec_id m_fill_exec_id{};
        fill_exec_ref_id m_fill_exec_ref_id{};
        fill_leg_ref_id m_fill_leg_ref_id{};
        fill_leg_ratio m_fill_leg_ratio{};
        fill_exch_fee m_fill_exch_fee{};
        fill_market m_fill_market{};
        fill_price m_fill_price{};
        fill_quantity m_fill_quantity{};
        fill_report_detail m_fill_report_detail{};
        fill_bid m_fill_bid{};
        fill_ask m_fill_ask{};
        fill_mark m_fill_mark{};
        fill_fair_width m_fill_fair_width{};
        fill_umark m_fill_umark{};
        fill_ubid m_fill_ubid{};
        fill_uask m_fill_uask{};
        fill_ubid_sz m_fill_ubid_sz{};
        fill_uask_sz m_fill_uask_sz{};
        fill_vol_atm m_fill_vol_atm{};
        fill_mark1_m m_fill_mark1_m{};
        fill_mark10_m m_fill_mark10_m{};
        fill_bid1_m m_fill_bid1_m{};
        fill_ask1_m m_fill_ask1_m{};
        fill_bid10_m m_fill_bid10_m{};
        fill_ask10_m m_fill_ask10_m{};
        fill_umark1_m m_fill_umark1_m{};
        fill_umark10_m m_fill_umark10_m{};
        fill_vol_atm1_m m_fill_vol_atm1_m{};
        fill_vol_atm10_m m_fill_vol_atm10_m{};
        fill_state1_m m_fill_state1_m{};
        fill_state10_m m_fill_state10_m{};
        fill_vol m_fill_vol{};
        fill_vol_s m_fill_vol_s{};
        fill_prob m_fill_prob{};
        fill_limit_ref_uprc m_fill_limit_ref_uprc{};
        fill_limit_ref_sdiv m_fill_limit_ref_sdiv{};
        fill_limit_prc m_fill_limit_prc{};
        fill_ve m_fill_ve{};
        fill_ga m_fill_ga{};
        fill_de m_fill_de{};
        fill_th m_fill_th{};
        fill_ve_ratio m_fill_ve_ratio{};
        fill_beta m_fill_beta{};
        risk_vega m_risk_vega{};
        risk_wt_vega m_risk_wt_vega{};
        risk_nvalue m_risk_nvalue{};
        risk_delta m_risk_delta{};
        risk_ddelta m_risk_ddelta{};
        risk_rm1 m_risk_rm1{};
        risk_rm2 m_risk_rm2{};
        risk_rm3 m_risk_rm3{};
        risk_rm4 m_risk_rm4{};
        risk_rm5 m_risk_rm5{};
        risk_rm6 m_risk_rm6{};
        risk_rm7 m_risk_rm7{};
        margin_udn_vdn m_margin_udn_vdn{};
        margin_udn_vup m_margin_udn_vup{};
        margin_uup_vdn m_margin_uup_vdn{};
        margin_uup_vup m_margin_uup_vup{};
        risk_u15_dn m_risk_u15_dn{};
        risk_u15_up m_risk_u15_up{};
        risk_u50_dn m_risk_u50_dn{};
        risk_u50_up m_risk_u50_up{};
        fill_brkr_rate m_fill_brkr_rate{};
        fill_routing_rate m_fill_routing_rate{};
        mm_pref_code m_mm_pref_code{};
        mm_credit m_mm_credit{};
        risk_code m_risk_code{};
        billing_sec_type m_billing_sec_type{};
        billing_category m_billing_category{};
        spdr_liquidity_tag m_spdr_liquidity_tag{};
        exch_liquidity_tag m_exch_liquidity_tag{};
        fill_exch_detail m_fill_exch_detail{};
        cross_side m_cross_side{};
        is_cross_breakup_fill m_is_cross_breakup_fill{};
        last_capacity m_last_capacity{};
        exch_firm_type m_exch_firm_type{};
        ext_exec_broker m_ext_exec_broker{};
        relationship_type m_relationship_type{};
        cl_arrive_mark m_cl_arrive_mark{};
        parent_dttm m_parent_dttm{};
        parent_order_size m_parent_order_size{};
        parent_ubid m_parent_ubid{};
        parent_uask m_parent_uask{};
        parent_umark m_parent_umark{};
        parent_bid m_parent_bid{};
        parent_ask m_parent_ask{};
        parent_mark m_parent_mark{};
        parent_fair_width m_parent_fair_width{};
        parent_surf_vol m_parent_surf_vol{};
        parent_limit_vol m_parent_limit_vol{};
        parent_limit_prc m_parent_limit_prc{};
        parent_limit_ref_uprc m_parent_limit_ref_uprc{};
        parent_theo_vol m_parent_theo_vol{};
        parent_theo_prc m_parent_theo_prc{};
        parent_pos_type m_parent_pos_type{};
        parent_ssale_flag m_parent_ssale_flag{};
        notice_number m_notice_number{};
        num_make_exchanges m_num_make_exchanges{};
        public_size m_public_size{};
        can_overlap_cxl_repl m_can_overlap_cxl_repl{};
        progress_rule m_progress_rule{};
        exch_mask_enabled m_exch_mask_enabled{};
        time_in_force m_time_in_force{};
        parent_order_handling m_parent_order_handling{};
        parent_balance_handling m_parent_balance_handling{};
        order_limit_type m_order_limit_type{};
        order_limit_class m_order_limit_class{};
        take_reach_rule m_take_reach_rule{};
        override_code m_override_code{};
        alpha_type m_alpha_type{};
        parent_strategy m_parent_strategy{};
        user_name m_user_name{};
        auto_hedge m_auto_hedge{};
        hedge_sec_key m_hedge_sec_key{};
        hedge_sec_type m_hedge_sec_type{};
        hedge_beta_ratio m_hedge_beta_ratio{};
        hedge_scope m_hedge_scope{};
        user_data1 m_user_data1{};
        user_data2 m_user_data2{};
        years m_years{};
        underliers_per_cn m_underliers_per_cn{};
        underlier_type m_underlier_type{};
        tick_value m_tick_value{};
        point_value m_point_value{};
        point_currency m_point_currency{};
        u_prc_ratio m_u_prc_ratio{};
        min_tick_size m_min_tick_size{};
        price_format m_price_format{};
        u_price_format m_u_price_format{};
        response_type m_response_type{};
        nbbo_bid m_nbbo_bid{};
        nbbo_ask m_nbbo_ask{};
        child_uprc m_child_uprc{};
        exch_bid_sz m_exch_bid_sz{};
        exch_ask_sz m_exch_ask_sz{};
        live_uprc m_live_uprc{};
        live_mark m_live_mark{};
        src_timestamp m_src_timestamp{};
        sgw_timestamp m_sgw_timestamp{};
        eng_timestamp m_eng_timestamp{};
        timestamp m_timestamp{};
        data_center__v7 m_data_center__v7{};
        face_side__v7 m_face_side__v7{};
        face_shape__v7 m_face_shape__v7{};
        child_locate_source__v7 m_child_locate_source__v7{};
        fill_pr__v7 m_fill_pr__v7{};
        fill_risk_metric1__v7 m_fill_risk_metric1__v7{};
        fill_risk_metric2__v7 m_fill_risk_metric2__v7{};
        fill_risk_metric3__v7 m_fill_risk_metric3__v7{};
        fill_risk_metric4__v7 m_fill_risk_metric4__v7{};
        fill_risk_metric5__v7 m_fill_risk_metric5__v7{};
        fill_risk_metric6__v7 m_fill_risk_metric6__v7{};
        fill_risk_metric7__v7 m_fill_risk_metric7__v7{};
        fill_s08_dn__v7 m_fill_s08_dn__v7{};
        fill_s06_up__v7 m_fill_s06_up__v7{};
        fill_s15_dn__v7 m_fill_s15_dn__v7{};
        fill_s15_up__v7 m_fill_s15_up__v7{};
        fill_s50_dn__v7 m_fill_s50_dn__v7{};
        fill_s50_up__v7 m_fill_s50_up__v7{};

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
        version get_version() const {
            return m_version;
        }		
        exec_status get_exec_status() const {
            return m_exec_status;
        }		
        exec_shape get_exec_shape() const {
            return m_exec_shape;
        }		
        package_id get_package_id() const {
            return m_package_id;
        }		
        parent_number get_parent_number() const {
            return m_parent_number;
        }		
        parent_version get_parent_version() const {
            return m_parent_version;
        }		
        base_parent_number get_base_parent_number() const {
            return m_base_parent_number;
        }		
        cl_ord_id get_cl_ord_id() const {
            return m_cl_ord_id;
        }		
        review_cl_ord_id get_review_cl_ord_id() const {
            return m_review_cl_ord_id;
        }		
        alt_fill_id get_alt_fill_id() const {
            return m_alt_fill_id;
        }		
        alt_order_id get_alt_order_id() const {
            return m_alt_order_id;
        }		
        alt_cross_id get_alt_cross_id() const {
            return m_alt_cross_id;
        }		
        alt_leg_ref_id get_alt_leg_ref_id() const {
            return m_alt_leg_ref_id;
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
        risk_group_id get_risk_group_id() const {
            return m_risk_group_id;
        }		
        trigger_group_id get_trigger_group_id() const {
            return m_trigger_group_id;
        }		
        trigger_timestamp get_trigger_timestamp() const {
            return m_trigger_timestamp;
        }		
        street_cl_ord_id get_street_cl_ord_id() const {
            return m_street_cl_ord_id;
        }		
        street_order_id get_street_order_id() const {
            return m_street_order_id;
        }		
        side_cl_ord_id get_side_cl_ord_id() const {
            return m_side_cl_ord_id;
        }		
        parent_shape get_parent_shape() const {
            return m_parent_shape;
        }		
        sec_key get_sec_key() const {
            return m_sec_key;
        }		
        sec_type get_sec_type() const {
            return m_sec_type;
        }		
        ticker get_ticker() const {
            return m_ticker;
        }		
        origin_ticker get_origin_ticker() const {
            return m_origin_ticker;
        }		
        origin_sec_key get_origin_sec_key() const {
            return m_origin_sec_key;
        }		
        accnt get_accnt() const {
            return m_accnt;
        }		
        client_firm get_client_firm() const {
            return m_client_firm;
        }		
        strategy_accnt get_strategy_accnt() const {
            return m_strategy_accnt;
        }		
        spdr_source get_spdr_source() const {
            return m_spdr_source;
        }		
        grouping_code get_grouping_code() const {
            return m_grouping_code;
        }		
        core_client_firm get_core_client_firm() const {
            return m_core_client_firm;
        }		
        sponsor_client_firm get_sponsor_client_firm() const {
            return m_sponsor_client_firm;
        }		
        routing_code get_routing_code() const {
            return m_routing_code;
        }		
        engine_name get_engine_name() const {
            return m_engine_name;
        }		
        gateway_name get_gateway_name() const {
            return m_gateway_name;
        }		
        exec_role get_exec_role() const {
            return m_exec_role;
        }		
        exec_brkr_code get_exec_brkr_code() const {
            return m_exec_brkr_code;
        }		
        exec_brkr_mpid get_exec_brkr_mpid() const {
            return m_exec_brkr_mpid;
        }		
        alt_brkr_mpid get_alt_brkr_mpid() const {
            return m_alt_brkr_mpid;
        }		
        exec_brkr_accnt get_exec_brkr_accnt() const {
            return m_exec_brkr_accnt;
        }		
        exec_brkr_cl_firm get_exec_brkr_cl_firm() const {
            return m_exec_brkr_cl_firm;
        }		
        exec_brkr_user_name get_exec_brkr_user_name() const {
            return m_exec_brkr_user_name;
        }		
        clearing_flip_type get_clearing_flip_type() const {
            return m_clearing_flip_type;
        }		
        clearing_flip_firm get_clearing_flip_firm() const {
            return m_clearing_flip_firm;
        }		
        clearing_flip_accnt get_clearing_flip_accnt() const {
            return m_clearing_flip_accnt;
        }		
        clearing_firm get_clearing_firm() const {
            return m_clearing_firm;
        }		
        clearing_accnt get_clearing_accnt() const {
            return m_clearing_accnt;
        }		
        orig_exec_id get_orig_exec_id() const {
            return m_orig_exec_id;
        }		
        last_exec_id get_last_exec_id() const {
            return m_last_exec_id;
        }		
        remote_text get_remote_text() const {
            return m_remote_text;
        }		
        order_side get_order_side() const {
            return m_order_side;
        }		
        spdr_order_status get_spdr_order_status() const {
            return m_spdr_order_status;
        }		
        spdr_close_reason get_spdr_close_reason() const {
            return m_spdr_close_reason;
        }		
        cum_fill_quantity get_cum_fill_quantity() const {
            return m_cum_fill_quantity;
        }		
        avg_fill_price get_avg_fill_price() const {
            return m_avg_fill_price;
        }		
        cum_leg_fill_quantity get_cum_leg_fill_quantity() const {
            return m_cum_leg_fill_quantity;
        }		
        avg_leg_fill_price get_avg_leg_fill_price() const {
            return m_avg_leg_fill_price;
        }		
        leaves_qty get_leaves_qty() const {
            return m_leaves_qty;
        }		
        price_type get_price_type() const {
            return m_price_type;
        }		
        child_shape get_child_shape() const {
            return m_child_shape;
        }		
        child_size get_child_size() const {
            return m_child_size;
        }		
        child_price get_child_price() const {
            return m_child_price;
        }		
        child_dttm get_child_dttm() const {
            return m_child_dttm;
        }		
        child_exch get_child_exch() const {
            return m_child_exch;
        }		
        child_ex_dest get_child_ex_dest() const {
            return m_child_ex_dest;
        }		
        child_exec_broker get_child_exec_broker() const {
            return m_child_exec_broker;
        }		
        child_is_directed get_child_is_directed() const {
            return m_child_is_directed;
        }		
        child_iso_sweep get_child_iso_sweep() const {
            return m_child_iso_sweep;
        }		
        child_order_handling get_child_order_handling() const {
            return m_child_order_handling;
        }		
        child_algo_handler get_child_algo_handler() const {
            return m_child_algo_handler;
        }		
        child_create_reason get_child_create_reason() const {
            return m_child_create_reason;
        }		
        child_cancel_reason get_child_cancel_reason() const {
            return m_child_cancel_reason;
        }		
        child_maker_taker get_child_maker_taker() const {
            return m_child_maker_taker;
        }		
        child_ubid get_child_ubid() const {
            return m_child_ubid;
        }		
        child_uask get_child_uask() const {
            return m_child_uask;
        }		
        child_bid get_child_bid() const {
            return m_child_bid;
        }		
        child_ask get_child_ask() const {
            return m_child_ask;
        }		
        child_mark get_child_mark() const {
            return m_child_mark;
        }		
        child_fair_width get_child_fair_width() const {
            return m_child_fair_width;
        }		
        child_vol get_child_vol() const {
            return m_child_vol;
        }		
        child_prob get_child_prob() const {
            return m_child_prob;
        }		
        child_limit_ref_uprc get_child_limit_ref_uprc() const {
            return m_child_limit_ref_uprc;
        }		
        child_limit_prc get_child_limit_prc() const {
            return m_child_limit_prc;
        }		
        child_vol_atm get_child_vol_atm() const {
            return m_child_vol_atm;
        }		
        child_pos_type get_child_pos_type() const {
            return m_child_pos_type;
        }		
        child_firm_opt_position get_child_firm_opt_position() const {
            return m_child_firm_opt_position;
        }		
        child_ssale_flag get_child_ssale_flag() const {
            return m_child_ssale_flag;
        }		
        child_firm_stk_position get_child_firm_stk_position() const {
            return m_child_firm_stk_position;
        }		
        child_firm_open_orders get_child_firm_open_orders() const {
            return m_child_firm_open_orders;
        }		
        child_locate_quan get_child_locate_quan() const {
            return m_child_locate_quan;
        }		
        child_locate_firm get_child_locate_firm() const {
            return m_child_locate_firm;
        }		
        child_locate_pool get_child_locate_pool() const {
            return m_child_locate_pool;
        }		
        child_mkt_stance get_child_mkt_stance() const {
            return m_child_mkt_stance;
        }		
        child_cxl_attempted get_child_cxl_attempted() const {
            return m_child_cxl_attempted;
        }		
        child_cxl_fill_latency get_child_cxl_fill_latency() const {
            return m_child_cxl_fill_latency;
        }		
        child_method get_child_method() const {
            return m_child_method;
        }		
        child_source get_child_source() const {
            return m_child_source;
        }		
        firm_type get_firm_type() const {
            return m_firm_type;
        }		
        pri_agg_group get_pri_agg_group() const {
            return m_pri_agg_group;
        }		
        sec_agg_group get_sec_agg_group() const {
            return m_sec_agg_group;
        }		
        directed_client_firm get_directed_client_firm() const {
            return m_directed_client_firm;
        }		
        is_comm_paying get_is_comm_paying() const {
            return m_is_comm_paying;
        }		
        fill_transact_dttm get_fill_transact_dttm() const {
            return m_fill_transact_dttm;
        }		
        fill_ts get_fill_ts() const {
            return m_fill_ts;
        }		
        fill_dttm get_fill_dttm() const {
            return m_fill_dttm;
        }		
        fill_exch get_fill_exch() const {
            return m_fill_exch;
        }		
        fill_exec_id get_fill_exec_id() const {
            return m_fill_exec_id;
        }		
        fill_exec_ref_id get_fill_exec_ref_id() const {
            return m_fill_exec_ref_id;
        }		
        fill_leg_ref_id get_fill_leg_ref_id() const {
            return m_fill_leg_ref_id;
        }		
        fill_leg_ratio get_fill_leg_ratio() const {
            return m_fill_leg_ratio;
        }		
        fill_exch_fee get_fill_exch_fee() const {
            return m_fill_exch_fee;
        }		
        fill_market get_fill_market() const {
            return m_fill_market;
        }		
        fill_price get_fill_price() const {
            return m_fill_price;
        }		
        fill_quantity get_fill_quantity() const {
            return m_fill_quantity;
        }		
        fill_report_detail get_fill_report_detail() const {
            return m_fill_report_detail;
        }		
        fill_bid get_fill_bid() const {
            return m_fill_bid;
        }		
        fill_ask get_fill_ask() const {
            return m_fill_ask;
        }		
        fill_mark get_fill_mark() const {
            return m_fill_mark;
        }		
        fill_fair_width get_fill_fair_width() const {
            return m_fill_fair_width;
        }		
        fill_umark get_fill_umark() const {
            return m_fill_umark;
        }		
        fill_ubid get_fill_ubid() const {
            return m_fill_ubid;
        }		
        fill_uask get_fill_uask() const {
            return m_fill_uask;
        }		
        fill_ubid_sz get_fill_ubid_sz() const {
            return m_fill_ubid_sz;
        }		
        fill_uask_sz get_fill_uask_sz() const {
            return m_fill_uask_sz;
        }		
        fill_vol_atm get_fill_vol_atm() const {
            return m_fill_vol_atm;
        }		
        fill_mark1_m get_fill_mark1_m() const {
            return m_fill_mark1_m;
        }		
        fill_mark10_m get_fill_mark10_m() const {
            return m_fill_mark10_m;
        }		
        fill_bid1_m get_fill_bid1_m() const {
            return m_fill_bid1_m;
        }		
        fill_ask1_m get_fill_ask1_m() const {
            return m_fill_ask1_m;
        }		
        fill_bid10_m get_fill_bid10_m() const {
            return m_fill_bid10_m;
        }		
        fill_ask10_m get_fill_ask10_m() const {
            return m_fill_ask10_m;
        }		
        fill_umark1_m get_fill_umark1_m() const {
            return m_fill_umark1_m;
        }		
        fill_umark10_m get_fill_umark10_m() const {
            return m_fill_umark10_m;
        }		
        fill_vol_atm1_m get_fill_vol_atm1_m() const {
            return m_fill_vol_atm1_m;
        }		
        fill_vol_atm10_m get_fill_vol_atm10_m() const {
            return m_fill_vol_atm10_m;
        }		
        fill_state1_m get_fill_state1_m() const {
            return m_fill_state1_m;
        }		
        fill_state10_m get_fill_state10_m() const {
            return m_fill_state10_m;
        }		
        fill_vol get_fill_vol() const {
            return m_fill_vol;
        }		
        fill_vol_s get_fill_vol_s() const {
            return m_fill_vol_s;
        }		
        fill_prob get_fill_prob() const {
            return m_fill_prob;
        }		
        fill_limit_ref_uprc get_fill_limit_ref_uprc() const {
            return m_fill_limit_ref_uprc;
        }		
        fill_limit_ref_sdiv get_fill_limit_ref_sdiv() const {
            return m_fill_limit_ref_sdiv;
        }		
        fill_limit_prc get_fill_limit_prc() const {
            return m_fill_limit_prc;
        }		
        fill_ve get_fill_ve() const {
            return m_fill_ve;
        }		
        fill_ga get_fill_ga() const {
            return m_fill_ga;
        }		
        fill_de get_fill_de() const {
            return m_fill_de;
        }		
        fill_th get_fill_th() const {
            return m_fill_th;
        }		
        fill_ve_ratio get_fill_ve_ratio() const {
            return m_fill_ve_ratio;
        }		
        fill_beta get_fill_beta() const {
            return m_fill_beta;
        }		
        risk_vega get_risk_vega() const {
            return m_risk_vega;
        }		
        risk_wt_vega get_risk_wt_vega() const {
            return m_risk_wt_vega;
        }		
        risk_nvalue get_risk_nvalue() const {
            return m_risk_nvalue;
        }		
        risk_delta get_risk_delta() const {
            return m_risk_delta;
        }		
        risk_ddelta get_risk_ddelta() const {
            return m_risk_ddelta;
        }		
        risk_rm1 get_risk_rm1() const {
            return m_risk_rm1;
        }		
        risk_rm2 get_risk_rm2() const {
            return m_risk_rm2;
        }		
        risk_rm3 get_risk_rm3() const {
            return m_risk_rm3;
        }		
        risk_rm4 get_risk_rm4() const {
            return m_risk_rm4;
        }		
        risk_rm5 get_risk_rm5() const {
            return m_risk_rm5;
        }		
        risk_rm6 get_risk_rm6() const {
            return m_risk_rm6;
        }		
        risk_rm7 get_risk_rm7() const {
            return m_risk_rm7;
        }		
        margin_udn_vdn get_margin_udn_vdn() const {
            return m_margin_udn_vdn;
        }		
        margin_udn_vup get_margin_udn_vup() const {
            return m_margin_udn_vup;
        }		
        margin_uup_vdn get_margin_uup_vdn() const {
            return m_margin_uup_vdn;
        }		
        margin_uup_vup get_margin_uup_vup() const {
            return m_margin_uup_vup;
        }		
        risk_u15_dn get_risk_u15_dn() const {
            return m_risk_u15_dn;
        }		
        risk_u15_up get_risk_u15_up() const {
            return m_risk_u15_up;
        }		
        risk_u50_dn get_risk_u50_dn() const {
            return m_risk_u50_dn;
        }		
        risk_u50_up get_risk_u50_up() const {
            return m_risk_u50_up;
        }		
        fill_brkr_rate get_fill_brkr_rate() const {
            return m_fill_brkr_rate;
        }		
        fill_routing_rate get_fill_routing_rate() const {
            return m_fill_routing_rate;
        }		
        mm_pref_code get_mm_pref_code() const {
            return m_mm_pref_code;
        }		
        mm_credit get_mm_credit() const {
            return m_mm_credit;
        }		
        risk_code get_risk_code() const {
            return m_risk_code;
        }		
        billing_sec_type get_billing_sec_type() const {
            return m_billing_sec_type;
        }		
        billing_category get_billing_category() const {
            return m_billing_category;
        }		
        spdr_liquidity_tag get_spdr_liquidity_tag() const {
            return m_spdr_liquidity_tag;
        }		
        exch_liquidity_tag get_exch_liquidity_tag() const {
            return m_exch_liquidity_tag;
        }		
        fill_exch_detail get_fill_exch_detail() const {
            return m_fill_exch_detail;
        }		
        cross_side get_cross_side() const {
            return m_cross_side;
        }		
        is_cross_breakup_fill get_is_cross_breakup_fill() const {
            return m_is_cross_breakup_fill;
        }		
        last_capacity get_last_capacity() const {
            return m_last_capacity;
        }		
        exch_firm_type get_exch_firm_type() const {
            return m_exch_firm_type;
        }		
        ext_exec_broker get_ext_exec_broker() const {
            return m_ext_exec_broker;
        }		
        relationship_type get_relationship_type() const {
            return m_relationship_type;
        }		
        cl_arrive_mark get_cl_arrive_mark() const {
            return m_cl_arrive_mark;
        }		
        parent_dttm get_parent_dttm() const {
            return m_parent_dttm;
        }		
        parent_order_size get_parent_order_size() const {
            return m_parent_order_size;
        }		
        parent_ubid get_parent_ubid() const {
            return m_parent_ubid;
        }		
        parent_uask get_parent_uask() const {
            return m_parent_uask;
        }		
        parent_umark get_parent_umark() const {
            return m_parent_umark;
        }		
        parent_bid get_parent_bid() const {
            return m_parent_bid;
        }		
        parent_ask get_parent_ask() const {
            return m_parent_ask;
        }		
        parent_mark get_parent_mark() const {
            return m_parent_mark;
        }		
        parent_fair_width get_parent_fair_width() const {
            return m_parent_fair_width;
        }		
        parent_surf_vol get_parent_surf_vol() const {
            return m_parent_surf_vol;
        }		
        parent_limit_vol get_parent_limit_vol() const {
            return m_parent_limit_vol;
        }		
        parent_limit_prc get_parent_limit_prc() const {
            return m_parent_limit_prc;
        }		
        parent_limit_ref_uprc get_parent_limit_ref_uprc() const {
            return m_parent_limit_ref_uprc;
        }		
        parent_theo_vol get_parent_theo_vol() const {
            return m_parent_theo_vol;
        }		
        parent_theo_prc get_parent_theo_prc() const {
            return m_parent_theo_prc;
        }		
        parent_pos_type get_parent_pos_type() const {
            return m_parent_pos_type;
        }		
        parent_ssale_flag get_parent_ssale_flag() const {
            return m_parent_ssale_flag;
        }		
        notice_number get_notice_number() const {
            return m_notice_number;
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
        exch_mask_enabled get_exch_mask_enabled() const {
            return m_exch_mask_enabled;
        }		
        time_in_force get_time_in_force() const {
            return m_time_in_force;
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
        order_limit_class get_order_limit_class() const {
            return m_order_limit_class;
        }		
        take_reach_rule get_take_reach_rule() const {
            return m_take_reach_rule;
        }		
        override_code get_override_code() const {
            return m_override_code;
        }		
        alpha_type get_alpha_type() const {
            return m_alpha_type;
        }		
        parent_strategy get_parent_strategy() const {
            return m_parent_strategy;
        }		
        user_name get_user_name() const {
            return m_user_name;
        }		
        auto_hedge get_auto_hedge() const {
            return m_auto_hedge;
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
        user_data1 get_user_data1() const {
            return m_user_data1;
        }		
        user_data2 get_user_data2() const {
            return m_user_data2;
        }		
        years get_years() const {
            return m_years;
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
        u_prc_ratio get_u_prc_ratio() const {
            return m_u_prc_ratio;
        }		
        min_tick_size get_min_tick_size() const {
            return m_min_tick_size;
        }		
        price_format get_price_format() const {
            return m_price_format;
        }		
        u_price_format get_u_price_format() const {
            return m_u_price_format;
        }		
        response_type get_response_type() const {
            return m_response_type;
        }		
        nbbo_bid get_nbbo_bid() const {
            return m_nbbo_bid;
        }		
        nbbo_ask get_nbbo_ask() const {
            return m_nbbo_ask;
        }		
        child_uprc get_child_uprc() const {
            return m_child_uprc;
        }		
        exch_bid_sz get_exch_bid_sz() const {
            return m_exch_bid_sz;
        }		
        exch_ask_sz get_exch_ask_sz() const {
            return m_exch_ask_sz;
        }		
        live_uprc get_live_uprc() const {
            return m_live_uprc;
        }		
        live_mark get_live_mark() const {
            return m_live_mark;
        }		
        src_timestamp get_src_timestamp() const {
            return m_src_timestamp;
        }		
        sgw_timestamp get_sgw_timestamp() const {
            return m_sgw_timestamp;
        }		
        eng_timestamp get_eng_timestamp() const {
            return m_eng_timestamp;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }		
        data_center__v7 get_data_center__v7() const {
            return m_data_center__v7;
        }		
        face_side__v7 get_face_side__v7() const {
            return m_face_side__v7;
        }		
        face_shape__v7 get_face_shape__v7() const {
            return m_face_shape__v7;
        }		
        child_locate_source__v7 get_child_locate_source__v7() const {
            return m_child_locate_source__v7;
        }		
        fill_pr__v7 get_fill_pr__v7() const {
            return m_fill_pr__v7;
        }		
        fill_risk_metric1__v7 get_fill_risk_metric1__v7() const {
            return m_fill_risk_metric1__v7;
        }		
        fill_risk_metric2__v7 get_fill_risk_metric2__v7() const {
            return m_fill_risk_metric2__v7;
        }		
        fill_risk_metric3__v7 get_fill_risk_metric3__v7() const {
            return m_fill_risk_metric3__v7;
        }		
        fill_risk_metric4__v7 get_fill_risk_metric4__v7() const {
            return m_fill_risk_metric4__v7;
        }		
        fill_risk_metric5__v7 get_fill_risk_metric5__v7() const {
            return m_fill_risk_metric5__v7;
        }		
        fill_risk_metric6__v7 get_fill_risk_metric6__v7() const {
            return m_fill_risk_metric6__v7;
        }		
        fill_risk_metric7__v7 get_fill_risk_metric7__v7() const {
            return m_fill_risk_metric7__v7;
        }		
        fill_s08_dn__v7 get_fill_s08_dn__v7() const {
            return m_fill_s08_dn__v7;
        }		
        fill_s06_up__v7 get_fill_s06_up__v7() const {
            return m_fill_s06_up__v7;
        }		
        fill_s15_dn__v7 get_fill_s15_dn__v7() const {
            return m_fill_s15_dn__v7;
        }		
        fill_s15_up__v7 get_fill_s15_up__v7() const {
            return m_fill_s15_up__v7;
        }		
        fill_s50_dn__v7 get_fill_s50_dn__v7() const {
            return m_fill_s50_dn__v7;
        }		
        fill_s50_up__v7 get_fill_s50_up__v7() const {
            return m_fill_s50_up__v7;
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
        void set_version(const version& value)  {
            m_version = value;
        }
        void set_exec_status(const exec_status& value)  {
            m_exec_status = value;
        }
        void set_exec_shape(const exec_shape& value)  {
            m_exec_shape = value;
        }
        void set_package_id(const package_id& value)  {
            m_package_id = value;
        }
        void set_parent_number(const parent_number& value)  {
            m_parent_number = value;
        }
        void set_parent_version(const parent_version& value)  {
            m_parent_version = value;
        }
        void set_base_parent_number(const base_parent_number& value)  {
            m_base_parent_number = value;
        }
        void set_cl_ord_id(const cl_ord_id& value)  {
            m_cl_ord_id = value;
        }
        void set_review_cl_ord_id(const review_cl_ord_id& value)  {
            m_review_cl_ord_id = value;
        }
        void set_alt_fill_id(const alt_fill_id& value)  {
            m_alt_fill_id = value;
        }
        void set_alt_order_id(const alt_order_id& value)  {
            m_alt_order_id = value;
        }
        void set_alt_cross_id(const alt_cross_id& value)  {
            m_alt_cross_id = value;
        }
        void set_alt_leg_ref_id(const alt_leg_ref_id& value)  {
            m_alt_leg_ref_id = value;
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
        void set_risk_group_id(const risk_group_id& value)  {
            m_risk_group_id = value;
        }
        void set_trigger_group_id(const trigger_group_id& value)  {
            m_trigger_group_id = value;
        }
        void set_trigger_timestamp(const trigger_timestamp& value)  {
            m_trigger_timestamp = value;
        }
        void set_street_cl_ord_id(const street_cl_ord_id& value)  {
            m_street_cl_ord_id = value;
        }
        void set_street_order_id(const street_order_id& value)  {
            m_street_order_id = value;
        }
        void set_side_cl_ord_id(const side_cl_ord_id& value)  {
            m_side_cl_ord_id = value;
        }
        void set_parent_shape(const parent_shape& value)  {
            m_parent_shape = value;
        }
        void set_sec_key(const sec_key& value)  {
            m_sec_key = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_origin_ticker(const origin_ticker& value)  {
            m_origin_ticker = value;
        }
        void set_origin_sec_key(const origin_sec_key& value)  {
            m_origin_sec_key = value;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_strategy_accnt(const strategy_accnt& value)  {
            m_strategy_accnt = value;
        }
        void set_spdr_source(const spdr_source& value)  {
            m_spdr_source = value;
        }
        void set_grouping_code(const grouping_code& value)  {
            m_grouping_code = value;
        }
        void set_core_client_firm(const core_client_firm& value)  {
            m_core_client_firm = value;
        }
        void set_sponsor_client_firm(const sponsor_client_firm& value)  {
            m_sponsor_client_firm = value;
        }
        void set_routing_code(const routing_code& value)  {
            m_routing_code = value;
        }
        void set_engine_name(const engine_name& value)  {
            m_engine_name = value;
        }
        void set_gateway_name(const gateway_name& value)  {
            m_gateway_name = value;
        }
        void set_exec_role(const exec_role& value)  {
            m_exec_role = value;
        }
        void set_exec_brkr_code(const exec_brkr_code& value)  {
            m_exec_brkr_code = value;
        }
        void set_exec_brkr_mpid(const exec_brkr_mpid& value)  {
            m_exec_brkr_mpid = value;
        }
        void set_alt_brkr_mpid(const alt_brkr_mpid& value)  {
            m_alt_brkr_mpid = value;
        }
        void set_exec_brkr_accnt(const exec_brkr_accnt& value)  {
            m_exec_brkr_accnt = value;
        }
        void set_exec_brkr_cl_firm(const exec_brkr_cl_firm& value)  {
            m_exec_brkr_cl_firm = value;
        }
        void set_exec_brkr_user_name(const exec_brkr_user_name& value)  {
            m_exec_brkr_user_name = value;
        }
        void set_clearing_flip_type(const clearing_flip_type& value)  {
            m_clearing_flip_type = value;
        }
        void set_clearing_flip_firm(const clearing_flip_firm& value)  {
            m_clearing_flip_firm = value;
        }
        void set_clearing_flip_accnt(const clearing_flip_accnt& value)  {
            m_clearing_flip_accnt = value;
        }
        void set_clearing_firm(const clearing_firm& value)  {
            m_clearing_firm = value;
        }
        void set_clearing_accnt(const clearing_accnt& value)  {
            m_clearing_accnt = value;
        }
        void set_orig_exec_id(const orig_exec_id& value)  {
            m_orig_exec_id = value;
        }
        void set_last_exec_id(const last_exec_id& value)  {
            m_last_exec_id = value;
        }
        void set_remote_text(const remote_text& value)  {
            m_remote_text = value;
        }
        void set_order_side(const order_side& value)  {
            m_order_side = value;
        }
        void set_spdr_order_status(const spdr_order_status& value)  {
            m_spdr_order_status = value;
        }
        void set_spdr_close_reason(const spdr_close_reason& value)  {
            m_spdr_close_reason = value;
        }
        void set_cum_fill_quantity(const cum_fill_quantity& value)  {
            m_cum_fill_quantity = value;
        }
        void set_avg_fill_price(const avg_fill_price& value)  {
            m_avg_fill_price = value;
        }
        void set_cum_leg_fill_quantity(const cum_leg_fill_quantity& value)  {
            m_cum_leg_fill_quantity = value;
        }
        void set_avg_leg_fill_price(const avg_leg_fill_price& value)  {
            m_avg_leg_fill_price = value;
        }
        void set_leaves_qty(const leaves_qty& value)  {
            m_leaves_qty = value;
        }
        void set_price_type(const price_type& value)  {
            m_price_type = value;
        }
        void set_child_shape(const child_shape& value)  {
            m_child_shape = value;
        }
        void set_child_size(const child_size& value)  {
            m_child_size = value;
        }
        void set_child_price(const child_price& value)  {
            m_child_price = value;
        }
        void set_child_dttm(const child_dttm& value)  {
            m_child_dttm = value;
        }
        void set_child_exch(const child_exch& value)  {
            m_child_exch = value;
        }
        void set_child_ex_dest(const child_ex_dest& value)  {
            m_child_ex_dest = value;
        }
        void set_child_exec_broker(const child_exec_broker& value)  {
            m_child_exec_broker = value;
        }
        void set_child_is_directed(const child_is_directed& value)  {
            m_child_is_directed = value;
        }
        void set_child_iso_sweep(const child_iso_sweep& value)  {
            m_child_iso_sweep = value;
        }
        void set_child_order_handling(const child_order_handling& value)  {
            m_child_order_handling = value;
        }
        void set_child_algo_handler(const child_algo_handler& value)  {
            m_child_algo_handler = value;
        }
        void set_child_create_reason(const child_create_reason& value)  {
            m_child_create_reason = value;
        }
        void set_child_cancel_reason(const child_cancel_reason& value)  {
            m_child_cancel_reason = value;
        }
        void set_child_maker_taker(const child_maker_taker& value)  {
            m_child_maker_taker = value;
        }
        void set_child_ubid(const child_ubid& value)  {
            m_child_ubid = value;
        }
        void set_child_uask(const child_uask& value)  {
            m_child_uask = value;
        }
        void set_child_bid(const child_bid& value)  {
            m_child_bid = value;
        }
        void set_child_ask(const child_ask& value)  {
            m_child_ask = value;
        }
        void set_child_mark(const child_mark& value)  {
            m_child_mark = value;
        }
        void set_child_fair_width(const child_fair_width& value)  {
            m_child_fair_width = value;
        }
        void set_child_vol(const child_vol& value)  {
            m_child_vol = value;
        }
        void set_child_prob(const child_prob& value)  {
            m_child_prob = value;
        }
        void set_child_limit_ref_uprc(const child_limit_ref_uprc& value)  {
            m_child_limit_ref_uprc = value;
        }
        void set_child_limit_prc(const child_limit_prc& value)  {
            m_child_limit_prc = value;
        }
        void set_child_vol_atm(const child_vol_atm& value)  {
            m_child_vol_atm = value;
        }
        void set_child_pos_type(const child_pos_type& value)  {
            m_child_pos_type = value;
        }
        void set_child_firm_opt_position(const child_firm_opt_position& value)  {
            m_child_firm_opt_position = value;
        }
        void set_child_ssale_flag(const child_ssale_flag& value)  {
            m_child_ssale_flag = value;
        }
        void set_child_firm_stk_position(const child_firm_stk_position& value)  {
            m_child_firm_stk_position = value;
        }
        void set_child_firm_open_orders(const child_firm_open_orders& value)  {
            m_child_firm_open_orders = value;
        }
        void set_child_locate_quan(const child_locate_quan& value)  {
            m_child_locate_quan = value;
        }
        void set_child_locate_firm(const child_locate_firm& value)  {
            m_child_locate_firm = value;
        }
        void set_child_locate_pool(const child_locate_pool& value)  {
            m_child_locate_pool = value;
        }
        void set_child_mkt_stance(const child_mkt_stance& value)  {
            m_child_mkt_stance = value;
        }
        void set_child_cxl_attempted(const child_cxl_attempted& value)  {
            m_child_cxl_attempted = value;
        }
        void set_child_cxl_fill_latency(const child_cxl_fill_latency& value)  {
            m_child_cxl_fill_latency = value;
        }
        void set_child_method(const child_method& value)  {
            m_child_method = value;
        }
        void set_child_source(const child_source& value)  {
            m_child_source = value;
        }
        void set_firm_type(const firm_type& value)  {
            m_firm_type = value;
        }
        void set_pri_agg_group(const pri_agg_group& value)  {
            m_pri_agg_group = value;
        }
        void set_sec_agg_group(const sec_agg_group& value)  {
            m_sec_agg_group = value;
        }
        void set_directed_client_firm(const directed_client_firm& value)  {
            m_directed_client_firm = value;
        }
        void set_is_comm_paying(const is_comm_paying& value)  {
            m_is_comm_paying = value;
        }
        void set_fill_transact_dttm(const fill_transact_dttm& value)  {
            m_fill_transact_dttm = value;
        }
        void set_fill_ts(const fill_ts& value)  {
            m_fill_ts = value;
        }
        void set_fill_dttm(const fill_dttm& value)  {
            m_fill_dttm = value;
        }
        void set_fill_exch(const fill_exch& value)  {
            m_fill_exch = value;
        }
        void set_fill_exec_id(const fill_exec_id& value)  {
            m_fill_exec_id = value;
        }
        void set_fill_exec_ref_id(const fill_exec_ref_id& value)  {
            m_fill_exec_ref_id = value;
        }
        void set_fill_leg_ref_id(const fill_leg_ref_id& value)  {
            m_fill_leg_ref_id = value;
        }
        void set_fill_leg_ratio(const fill_leg_ratio& value)  {
            m_fill_leg_ratio = value;
        }
        void set_fill_exch_fee(const fill_exch_fee& value)  {
            m_fill_exch_fee = value;
        }
        void set_fill_market(const fill_market& value)  {
            m_fill_market = value;
        }
        void set_fill_price(const fill_price& value)  {
            m_fill_price = value;
        }
        void set_fill_quantity(const fill_quantity& value)  {
            m_fill_quantity = value;
        }
        void set_fill_report_detail(const fill_report_detail& value)  {
            m_fill_report_detail = value;
        }
        void set_fill_bid(const fill_bid& value)  {
            m_fill_bid = value;
        }
        void set_fill_ask(const fill_ask& value)  {
            m_fill_ask = value;
        }
        void set_fill_mark(const fill_mark& value)  {
            m_fill_mark = value;
        }
        void set_fill_fair_width(const fill_fair_width& value)  {
            m_fill_fair_width = value;
        }
        void set_fill_umark(const fill_umark& value)  {
            m_fill_umark = value;
        }
        void set_fill_ubid(const fill_ubid& value)  {
            m_fill_ubid = value;
        }
        void set_fill_uask(const fill_uask& value)  {
            m_fill_uask = value;
        }
        void set_fill_ubid_sz(const fill_ubid_sz& value)  {
            m_fill_ubid_sz = value;
        }
        void set_fill_uask_sz(const fill_uask_sz& value)  {
            m_fill_uask_sz = value;
        }
        void set_fill_vol_atm(const fill_vol_atm& value)  {
            m_fill_vol_atm = value;
        }
        void set_fill_mark1_m(const fill_mark1_m& value)  {
            m_fill_mark1_m = value;
        }
        void set_fill_mark10_m(const fill_mark10_m& value)  {
            m_fill_mark10_m = value;
        }
        void set_fill_bid1_m(const fill_bid1_m& value)  {
            m_fill_bid1_m = value;
        }
        void set_fill_ask1_m(const fill_ask1_m& value)  {
            m_fill_ask1_m = value;
        }
        void set_fill_bid10_m(const fill_bid10_m& value)  {
            m_fill_bid10_m = value;
        }
        void set_fill_ask10_m(const fill_ask10_m& value)  {
            m_fill_ask10_m = value;
        }
        void set_fill_umark1_m(const fill_umark1_m& value)  {
            m_fill_umark1_m = value;
        }
        void set_fill_umark10_m(const fill_umark10_m& value)  {
            m_fill_umark10_m = value;
        }
        void set_fill_vol_atm1_m(const fill_vol_atm1_m& value)  {
            m_fill_vol_atm1_m = value;
        }
        void set_fill_vol_atm10_m(const fill_vol_atm10_m& value)  {
            m_fill_vol_atm10_m = value;
        }
        void set_fill_state1_m(const fill_state1_m& value)  {
            m_fill_state1_m = value;
        }
        void set_fill_state10_m(const fill_state10_m& value)  {
            m_fill_state10_m = value;
        }
        void set_fill_vol(const fill_vol& value)  {
            m_fill_vol = value;
        }
        void set_fill_vol_s(const fill_vol_s& value)  {
            m_fill_vol_s = value;
        }
        void set_fill_prob(const fill_prob& value)  {
            m_fill_prob = value;
        }
        void set_fill_limit_ref_uprc(const fill_limit_ref_uprc& value)  {
            m_fill_limit_ref_uprc = value;
        }
        void set_fill_limit_ref_sdiv(const fill_limit_ref_sdiv& value)  {
            m_fill_limit_ref_sdiv = value;
        }
        void set_fill_limit_prc(const fill_limit_prc& value)  {
            m_fill_limit_prc = value;
        }
        void set_fill_ve(const fill_ve& value)  {
            m_fill_ve = value;
        }
        void set_fill_ga(const fill_ga& value)  {
            m_fill_ga = value;
        }
        void set_fill_de(const fill_de& value)  {
            m_fill_de = value;
        }
        void set_fill_th(const fill_th& value)  {
            m_fill_th = value;
        }
        void set_fill_ve_ratio(const fill_ve_ratio& value)  {
            m_fill_ve_ratio = value;
        }
        void set_fill_beta(const fill_beta& value)  {
            m_fill_beta = value;
        }
        void set_risk_vega(const risk_vega& value)  {
            m_risk_vega = value;
        }
        void set_risk_wt_vega(const risk_wt_vega& value)  {
            m_risk_wt_vega = value;
        }
        void set_risk_nvalue(const risk_nvalue& value)  {
            m_risk_nvalue = value;
        }
        void set_risk_delta(const risk_delta& value)  {
            m_risk_delta = value;
        }
        void set_risk_ddelta(const risk_ddelta& value)  {
            m_risk_ddelta = value;
        }
        void set_risk_rm1(const risk_rm1& value)  {
            m_risk_rm1 = value;
        }
        void set_risk_rm2(const risk_rm2& value)  {
            m_risk_rm2 = value;
        }
        void set_risk_rm3(const risk_rm3& value)  {
            m_risk_rm3 = value;
        }
        void set_risk_rm4(const risk_rm4& value)  {
            m_risk_rm4 = value;
        }
        void set_risk_rm5(const risk_rm5& value)  {
            m_risk_rm5 = value;
        }
        void set_risk_rm6(const risk_rm6& value)  {
            m_risk_rm6 = value;
        }
        void set_risk_rm7(const risk_rm7& value)  {
            m_risk_rm7 = value;
        }
        void set_margin_udn_vdn(const margin_udn_vdn& value)  {
            m_margin_udn_vdn = value;
        }
        void set_margin_udn_vup(const margin_udn_vup& value)  {
            m_margin_udn_vup = value;
        }
        void set_margin_uup_vdn(const margin_uup_vdn& value)  {
            m_margin_uup_vdn = value;
        }
        void set_margin_uup_vup(const margin_uup_vup& value)  {
            m_margin_uup_vup = value;
        }
        void set_risk_u15_dn(const risk_u15_dn& value)  {
            m_risk_u15_dn = value;
        }
        void set_risk_u15_up(const risk_u15_up& value)  {
            m_risk_u15_up = value;
        }
        void set_risk_u50_dn(const risk_u50_dn& value)  {
            m_risk_u50_dn = value;
        }
        void set_risk_u50_up(const risk_u50_up& value)  {
            m_risk_u50_up = value;
        }
        void set_fill_brkr_rate(const fill_brkr_rate& value)  {
            m_fill_brkr_rate = value;
        }
        void set_fill_routing_rate(const fill_routing_rate& value)  {
            m_fill_routing_rate = value;
        }
        void set_mm_pref_code(const mm_pref_code& value)  {
            m_mm_pref_code = value;
        }
        void set_mm_credit(const mm_credit& value)  {
            m_mm_credit = value;
        }
        void set_risk_code(const risk_code& value)  {
            m_risk_code = value;
        }
        void set_billing_sec_type(const billing_sec_type& value)  {
            m_billing_sec_type = value;
        }
        void set_billing_category(const billing_category& value)  {
            m_billing_category = value;
        }
        void set_spdr_liquidity_tag(const spdr_liquidity_tag& value)  {
            m_spdr_liquidity_tag = value;
        }
        void set_exch_liquidity_tag(const exch_liquidity_tag& value)  {
            m_exch_liquidity_tag = value;
        }
        void set_fill_exch_detail(const fill_exch_detail& value)  {
            m_fill_exch_detail = value;
        }
        void set_cross_side(const cross_side& value)  {
            m_cross_side = value;
        }
        void set_is_cross_breakup_fill(const is_cross_breakup_fill& value)  {
            m_is_cross_breakup_fill = value;
        }
        void set_last_capacity(const last_capacity& value)  {
            m_last_capacity = value;
        }
        void set_exch_firm_type(const exch_firm_type& value)  {
            m_exch_firm_type = value;
        }
        void set_ext_exec_broker(const ext_exec_broker& value)  {
            m_ext_exec_broker = value;
        }
        void set_relationship_type(const relationship_type& value)  {
            m_relationship_type = value;
        }
        void set_cl_arrive_mark(const cl_arrive_mark& value)  {
            m_cl_arrive_mark = value;
        }
        void set_parent_dttm(const parent_dttm& value)  {
            m_parent_dttm = value;
        }
        void set_parent_order_size(const parent_order_size& value)  {
            m_parent_order_size = value;
        }
        void set_parent_ubid(const parent_ubid& value)  {
            m_parent_ubid = value;
        }
        void set_parent_uask(const parent_uask& value)  {
            m_parent_uask = value;
        }
        void set_parent_umark(const parent_umark& value)  {
            m_parent_umark = value;
        }
        void set_parent_bid(const parent_bid& value)  {
            m_parent_bid = value;
        }
        void set_parent_ask(const parent_ask& value)  {
            m_parent_ask = value;
        }
        void set_parent_mark(const parent_mark& value)  {
            m_parent_mark = value;
        }
        void set_parent_fair_width(const parent_fair_width& value)  {
            m_parent_fair_width = value;
        }
        void set_parent_surf_vol(const parent_surf_vol& value)  {
            m_parent_surf_vol = value;
        }
        void set_parent_limit_vol(const parent_limit_vol& value)  {
            m_parent_limit_vol = value;
        }
        void set_parent_limit_prc(const parent_limit_prc& value)  {
            m_parent_limit_prc = value;
        }
        void set_parent_limit_ref_uprc(const parent_limit_ref_uprc& value)  {
            m_parent_limit_ref_uprc = value;
        }
        void set_parent_theo_vol(const parent_theo_vol& value)  {
            m_parent_theo_vol = value;
        }
        void set_parent_theo_prc(const parent_theo_prc& value)  {
            m_parent_theo_prc = value;
        }
        void set_parent_pos_type(const parent_pos_type& value)  {
            m_parent_pos_type = value;
        }
        void set_parent_ssale_flag(const parent_ssale_flag& value)  {
            m_parent_ssale_flag = value;
        }
        void set_notice_number(const notice_number& value)  {
            m_notice_number = value;
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
        void set_exch_mask_enabled(const exch_mask_enabled& value)  {
            m_exch_mask_enabled = value;
        }
        void set_time_in_force(const time_in_force& value)  {
            m_time_in_force = value;
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
        void set_order_limit_class(const order_limit_class& value)  {
            m_order_limit_class = value;
        }
        void set_take_reach_rule(const take_reach_rule& value)  {
            m_take_reach_rule = value;
        }
        void set_override_code(const override_code& value)  {
            m_override_code = value;
        }
        void set_alpha_type(const alpha_type& value)  {
            m_alpha_type = value;
        }
        void set_parent_strategy(const parent_strategy& value)  {
            m_parent_strategy = value;
        }
        void set_user_name(const user_name& value)  {
            m_user_name = value;
        }
        void set_auto_hedge(const auto_hedge& value)  {
            m_auto_hedge = value;
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
        void set_user_data1(const user_data1& value)  {
            m_user_data1 = value;
        }
        void set_user_data2(const user_data2& value)  {
            m_user_data2 = value;
        }
        void set_years(const years& value)  {
            m_years = value;
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
        void set_u_prc_ratio(const u_prc_ratio& value)  {
            m_u_prc_ratio = value;
        }
        void set_min_tick_size(const min_tick_size& value)  {
            m_min_tick_size = value;
        }
        void set_price_format(const price_format& value)  {
            m_price_format = value;
        }
        void set_u_price_format(const u_price_format& value)  {
            m_u_price_format = value;
        }
        void set_response_type(const response_type& value)  {
            m_response_type = value;
        }
        void set_nbbo_bid(const nbbo_bid& value)  {
            m_nbbo_bid = value;
        }
        void set_nbbo_ask(const nbbo_ask& value)  {
            m_nbbo_ask = value;
        }
        void set_child_uprc(const child_uprc& value)  {
            m_child_uprc = value;
        }
        void set_exch_bid_sz(const exch_bid_sz& value)  {
            m_exch_bid_sz = value;
        }
        void set_exch_ask_sz(const exch_ask_sz& value)  {
            m_exch_ask_sz = value;
        }
        void set_live_uprc(const live_uprc& value)  {
            m_live_uprc = value;
        }
        void set_live_mark(const live_mark& value)  {
            m_live_mark = value;
        }
        void set_src_timestamp(const src_timestamp& value)  {
            m_src_timestamp = value;
        }
        void set_sgw_timestamp(const sgw_timestamp& value)  {
            m_sgw_timestamp = value;
        }
        void set_eng_timestamp(const eng_timestamp& value)  {
            m_eng_timestamp = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_data_center__v7(const data_center__v7& value)  {
            m_data_center__v7 = value;
        }
        void set_face_side__v7(const face_side__v7& value)  {
            m_face_side__v7 = value;
        }
        void set_face_shape__v7(const face_shape__v7& value)  {
            m_face_shape__v7 = value;
        }
        void set_child_locate_source__v7(const child_locate_source__v7& value)  {
            m_child_locate_source__v7 = value;
        }
        void set_fill_pr__v7(const fill_pr__v7& value)  {
            m_fill_pr__v7 = value;
        }
        void set_fill_risk_metric1__v7(const fill_risk_metric1__v7& value)  {
            m_fill_risk_metric1__v7 = value;
        }
        void set_fill_risk_metric2__v7(const fill_risk_metric2__v7& value)  {
            m_fill_risk_metric2__v7 = value;
        }
        void set_fill_risk_metric3__v7(const fill_risk_metric3__v7& value)  {
            m_fill_risk_metric3__v7 = value;
        }
        void set_fill_risk_metric4__v7(const fill_risk_metric4__v7& value)  {
            m_fill_risk_metric4__v7 = value;
        }
        void set_fill_risk_metric5__v7(const fill_risk_metric5__v7& value)  {
            m_fill_risk_metric5__v7 = value;
        }
        void set_fill_risk_metric6__v7(const fill_risk_metric6__v7& value)  {
            m_fill_risk_metric6__v7 = value;
        }
        void set_fill_risk_metric7__v7(const fill_risk_metric7__v7& value)  {
            m_fill_risk_metric7__v7 = value;
        }
        void set_fill_s08_dn__v7(const fill_s08_dn__v7& value)  {
            m_fill_s08_dn__v7 = value;
        }
        void set_fill_s06_up__v7(const fill_s06_up__v7& value)  {
            m_fill_s06_up__v7 = value;
        }
        void set_fill_s15_dn__v7(const fill_s15_dn__v7& value)  {
            m_fill_s15_dn__v7 = value;
        }
        void set_fill_s15_up__v7(const fill_s15_up__v7& value)  {
            m_fill_s15_up__v7 = value;
        }
        void set_fill_s50_dn__v7(const fill_s50_dn__v7& value)  {
            m_fill_s50_dn__v7 = value;
        }
        void set_fill_s50_up__v7(const fill_s50_up__v7& value)  {
            m_fill_s50_up__v7 = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentExecution::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const version & value) {
            set_version(value);
        }
        void set(const exec_status & value) {
            set_exec_status(value);
        }
        void set(const exec_shape & value) {
            set_exec_shape(value);
        }
        void set(const package_id & value) {
            set_package_id(value);
        }
        void set(const parent_number & value) {
            set_parent_number(value);
        }
        void set(const parent_version & value) {
            set_parent_version(value);
        }
        void set(const base_parent_number & value) {
            set_base_parent_number(value);
        }
        void set(const cl_ord_id & value) {
            set_cl_ord_id(value);
        }
        void set(const review_cl_ord_id & value) {
            set_review_cl_ord_id(value);
        }
        void set(const alt_fill_id & value) {
            set_alt_fill_id(value);
        }
        void set(const alt_order_id & value) {
            set_alt_order_id(value);
        }
        void set(const alt_cross_id & value) {
            set_alt_cross_id(value);
        }
        void set(const alt_leg_ref_id & value) {
            set_alt_leg_ref_id(value);
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
        void set(const risk_group_id & value) {
            set_risk_group_id(value);
        }
        void set(const trigger_group_id & value) {
            set_trigger_group_id(value);
        }
        void set(const trigger_timestamp & value) {
            set_trigger_timestamp(value);
        }
        void set(const street_cl_ord_id & value) {
            set_street_cl_ord_id(value);
        }
        void set(const street_order_id & value) {
            set_street_order_id(value);
        }
        void set(const side_cl_ord_id & value) {
            set_side_cl_ord_id(value);
        }
        void set(const parent_shape & value) {
            set_parent_shape(value);
        }
        void set(const sec_key & value) {
            set_sec_key(value);
        }
        void set(const sec_type & value) {
            set_sec_type(value);
        }
        void set(const ticker & value) {
            set_ticker(value);
        }
        void set(const origin_ticker & value) {
            set_origin_ticker(value);
        }
        void set(const origin_sec_key & value) {
            set_origin_sec_key(value);
        }
        void set(const accnt & value) {
            set_accnt(value);
        }
        void set(const client_firm & value) {
            set_client_firm(value);
        }
        void set(const strategy_accnt & value) {
            set_strategy_accnt(value);
        }
        void set(const spdr_source & value) {
            set_spdr_source(value);
        }
        void set(const grouping_code & value) {
            set_grouping_code(value);
        }
        void set(const core_client_firm & value) {
            set_core_client_firm(value);
        }
        void set(const sponsor_client_firm & value) {
            set_sponsor_client_firm(value);
        }
        void set(const routing_code & value) {
            set_routing_code(value);
        }
        void set(const engine_name & value) {
            set_engine_name(value);
        }
        void set(const gateway_name & value) {
            set_gateway_name(value);
        }
        void set(const exec_role & value) {
            set_exec_role(value);
        }
        void set(const exec_brkr_code & value) {
            set_exec_brkr_code(value);
        }
        void set(const exec_brkr_mpid & value) {
            set_exec_brkr_mpid(value);
        }
        void set(const alt_brkr_mpid & value) {
            set_alt_brkr_mpid(value);
        }
        void set(const exec_brkr_accnt & value) {
            set_exec_brkr_accnt(value);
        }
        void set(const exec_brkr_cl_firm & value) {
            set_exec_brkr_cl_firm(value);
        }
        void set(const exec_brkr_user_name & value) {
            set_exec_brkr_user_name(value);
        }
        void set(const clearing_flip_type & value) {
            set_clearing_flip_type(value);
        }
        void set(const clearing_flip_firm & value) {
            set_clearing_flip_firm(value);
        }
        void set(const clearing_flip_accnt & value) {
            set_clearing_flip_accnt(value);
        }
        void set(const clearing_firm & value) {
            set_clearing_firm(value);
        }
        void set(const clearing_accnt & value) {
            set_clearing_accnt(value);
        }
        void set(const orig_exec_id & value) {
            set_orig_exec_id(value);
        }
        void set(const last_exec_id & value) {
            set_last_exec_id(value);
        }
        void set(const remote_text & value) {
            set_remote_text(value);
        }
        void set(const order_side & value) {
            set_order_side(value);
        }
        void set(const spdr_order_status & value) {
            set_spdr_order_status(value);
        }
        void set(const spdr_close_reason & value) {
            set_spdr_close_reason(value);
        }
        void set(const cum_fill_quantity & value) {
            set_cum_fill_quantity(value);
        }
        void set(const avg_fill_price & value) {
            set_avg_fill_price(value);
        }
        void set(const cum_leg_fill_quantity & value) {
            set_cum_leg_fill_quantity(value);
        }
        void set(const avg_leg_fill_price & value) {
            set_avg_leg_fill_price(value);
        }
        void set(const leaves_qty & value) {
            set_leaves_qty(value);
        }
        void set(const price_type & value) {
            set_price_type(value);
        }
        void set(const child_shape & value) {
            set_child_shape(value);
        }
        void set(const child_size & value) {
            set_child_size(value);
        }
        void set(const child_price & value) {
            set_child_price(value);
        }
        void set(const child_dttm & value) {
            set_child_dttm(value);
        }
        void set(const child_exch & value) {
            set_child_exch(value);
        }
        void set(const child_ex_dest & value) {
            set_child_ex_dest(value);
        }
        void set(const child_exec_broker & value) {
            set_child_exec_broker(value);
        }
        void set(const child_is_directed & value) {
            set_child_is_directed(value);
        }
        void set(const child_iso_sweep & value) {
            set_child_iso_sweep(value);
        }
        void set(const child_order_handling & value) {
            set_child_order_handling(value);
        }
        void set(const child_algo_handler & value) {
            set_child_algo_handler(value);
        }
        void set(const child_create_reason & value) {
            set_child_create_reason(value);
        }
        void set(const child_cancel_reason & value) {
            set_child_cancel_reason(value);
        }
        void set(const child_maker_taker & value) {
            set_child_maker_taker(value);
        }
        void set(const child_ubid & value) {
            set_child_ubid(value);
        }
        void set(const child_uask & value) {
            set_child_uask(value);
        }
        void set(const child_bid & value) {
            set_child_bid(value);
        }
        void set(const child_ask & value) {
            set_child_ask(value);
        }
        void set(const child_mark & value) {
            set_child_mark(value);
        }
        void set(const child_fair_width & value) {
            set_child_fair_width(value);
        }
        void set(const child_vol & value) {
            set_child_vol(value);
        }
        void set(const child_prob & value) {
            set_child_prob(value);
        }
        void set(const child_limit_ref_uprc & value) {
            set_child_limit_ref_uprc(value);
        }
        void set(const child_limit_prc & value) {
            set_child_limit_prc(value);
        }
        void set(const child_vol_atm & value) {
            set_child_vol_atm(value);
        }
        void set(const child_pos_type & value) {
            set_child_pos_type(value);
        }
        void set(const child_firm_opt_position & value) {
            set_child_firm_opt_position(value);
        }
        void set(const child_ssale_flag & value) {
            set_child_ssale_flag(value);
        }
        void set(const child_firm_stk_position & value) {
            set_child_firm_stk_position(value);
        }
        void set(const child_firm_open_orders & value) {
            set_child_firm_open_orders(value);
        }
        void set(const child_locate_quan & value) {
            set_child_locate_quan(value);
        }
        void set(const child_locate_firm & value) {
            set_child_locate_firm(value);
        }
        void set(const child_locate_pool & value) {
            set_child_locate_pool(value);
        }
        void set(const child_mkt_stance & value) {
            set_child_mkt_stance(value);
        }
        void set(const child_cxl_attempted & value) {
            set_child_cxl_attempted(value);
        }
        void set(const child_cxl_fill_latency & value) {
            set_child_cxl_fill_latency(value);
        }
        void set(const child_method & value) {
            set_child_method(value);
        }
        void set(const child_source & value) {
            set_child_source(value);
        }
        void set(const firm_type & value) {
            set_firm_type(value);
        }
        void set(const pri_agg_group & value) {
            set_pri_agg_group(value);
        }
        void set(const sec_agg_group & value) {
            set_sec_agg_group(value);
        }
        void set(const directed_client_firm & value) {
            set_directed_client_firm(value);
        }
        void set(const is_comm_paying & value) {
            set_is_comm_paying(value);
        }
        void set(const fill_transact_dttm & value) {
            set_fill_transact_dttm(value);
        }
        void set(const fill_ts & value) {
            set_fill_ts(value);
        }
        void set(const fill_dttm & value) {
            set_fill_dttm(value);
        }
        void set(const fill_exch & value) {
            set_fill_exch(value);
        }
        void set(const fill_exec_id & value) {
            set_fill_exec_id(value);
        }
        void set(const fill_exec_ref_id & value) {
            set_fill_exec_ref_id(value);
        }
        void set(const fill_leg_ref_id & value) {
            set_fill_leg_ref_id(value);
        }
        void set(const fill_leg_ratio & value) {
            set_fill_leg_ratio(value);
        }
        void set(const fill_exch_fee & value) {
            set_fill_exch_fee(value);
        }
        void set(const fill_market & value) {
            set_fill_market(value);
        }
        void set(const fill_price & value) {
            set_fill_price(value);
        }
        void set(const fill_quantity & value) {
            set_fill_quantity(value);
        }
        void set(const fill_report_detail & value) {
            set_fill_report_detail(value);
        }
        void set(const fill_bid & value) {
            set_fill_bid(value);
        }
        void set(const fill_ask & value) {
            set_fill_ask(value);
        }
        void set(const fill_mark & value) {
            set_fill_mark(value);
        }
        void set(const fill_fair_width & value) {
            set_fill_fair_width(value);
        }
        void set(const fill_umark & value) {
            set_fill_umark(value);
        }
        void set(const fill_ubid & value) {
            set_fill_ubid(value);
        }
        void set(const fill_uask & value) {
            set_fill_uask(value);
        }
        void set(const fill_ubid_sz & value) {
            set_fill_ubid_sz(value);
        }
        void set(const fill_uask_sz & value) {
            set_fill_uask_sz(value);
        }
        void set(const fill_vol_atm & value) {
            set_fill_vol_atm(value);
        }
        void set(const fill_mark1_m & value) {
            set_fill_mark1_m(value);
        }
        void set(const fill_mark10_m & value) {
            set_fill_mark10_m(value);
        }
        void set(const fill_bid1_m & value) {
            set_fill_bid1_m(value);
        }
        void set(const fill_ask1_m & value) {
            set_fill_ask1_m(value);
        }
        void set(const fill_bid10_m & value) {
            set_fill_bid10_m(value);
        }
        void set(const fill_ask10_m & value) {
            set_fill_ask10_m(value);
        }
        void set(const fill_umark1_m & value) {
            set_fill_umark1_m(value);
        }
        void set(const fill_umark10_m & value) {
            set_fill_umark10_m(value);
        }
        void set(const fill_vol_atm1_m & value) {
            set_fill_vol_atm1_m(value);
        }
        void set(const fill_vol_atm10_m & value) {
            set_fill_vol_atm10_m(value);
        }
        void set(const fill_state1_m & value) {
            set_fill_state1_m(value);
        }
        void set(const fill_state10_m & value) {
            set_fill_state10_m(value);
        }
        void set(const fill_vol & value) {
            set_fill_vol(value);
        }
        void set(const fill_vol_s & value) {
            set_fill_vol_s(value);
        }
        void set(const fill_prob & value) {
            set_fill_prob(value);
        }
        void set(const fill_limit_ref_uprc & value) {
            set_fill_limit_ref_uprc(value);
        }
        void set(const fill_limit_ref_sdiv & value) {
            set_fill_limit_ref_sdiv(value);
        }
        void set(const fill_limit_prc & value) {
            set_fill_limit_prc(value);
        }
        void set(const fill_ve & value) {
            set_fill_ve(value);
        }
        void set(const fill_ga & value) {
            set_fill_ga(value);
        }
        void set(const fill_de & value) {
            set_fill_de(value);
        }
        void set(const fill_th & value) {
            set_fill_th(value);
        }
        void set(const fill_ve_ratio & value) {
            set_fill_ve_ratio(value);
        }
        void set(const fill_beta & value) {
            set_fill_beta(value);
        }
        void set(const risk_vega & value) {
            set_risk_vega(value);
        }
        void set(const risk_wt_vega & value) {
            set_risk_wt_vega(value);
        }
        void set(const risk_nvalue & value) {
            set_risk_nvalue(value);
        }
        void set(const risk_delta & value) {
            set_risk_delta(value);
        }
        void set(const risk_ddelta & value) {
            set_risk_ddelta(value);
        }
        void set(const risk_rm1 & value) {
            set_risk_rm1(value);
        }
        void set(const risk_rm2 & value) {
            set_risk_rm2(value);
        }
        void set(const risk_rm3 & value) {
            set_risk_rm3(value);
        }
        void set(const risk_rm4 & value) {
            set_risk_rm4(value);
        }
        void set(const risk_rm5 & value) {
            set_risk_rm5(value);
        }
        void set(const risk_rm6 & value) {
            set_risk_rm6(value);
        }
        void set(const risk_rm7 & value) {
            set_risk_rm7(value);
        }
        void set(const margin_udn_vdn & value) {
            set_margin_udn_vdn(value);
        }
        void set(const margin_udn_vup & value) {
            set_margin_udn_vup(value);
        }
        void set(const margin_uup_vdn & value) {
            set_margin_uup_vdn(value);
        }
        void set(const margin_uup_vup & value) {
            set_margin_uup_vup(value);
        }
        void set(const risk_u15_dn & value) {
            set_risk_u15_dn(value);
        }
        void set(const risk_u15_up & value) {
            set_risk_u15_up(value);
        }
        void set(const risk_u50_dn & value) {
            set_risk_u50_dn(value);
        }
        void set(const risk_u50_up & value) {
            set_risk_u50_up(value);
        }
        void set(const fill_brkr_rate & value) {
            set_fill_brkr_rate(value);
        }
        void set(const fill_routing_rate & value) {
            set_fill_routing_rate(value);
        }
        void set(const mm_pref_code & value) {
            set_mm_pref_code(value);
        }
        void set(const mm_credit & value) {
            set_mm_credit(value);
        }
        void set(const risk_code & value) {
            set_risk_code(value);
        }
        void set(const billing_sec_type & value) {
            set_billing_sec_type(value);
        }
        void set(const billing_category & value) {
            set_billing_category(value);
        }
        void set(const spdr_liquidity_tag & value) {
            set_spdr_liquidity_tag(value);
        }
        void set(const exch_liquidity_tag & value) {
            set_exch_liquidity_tag(value);
        }
        void set(const fill_exch_detail & value) {
            set_fill_exch_detail(value);
        }
        void set(const cross_side & value) {
            set_cross_side(value);
        }
        void set(const is_cross_breakup_fill & value) {
            set_is_cross_breakup_fill(value);
        }
        void set(const last_capacity & value) {
            set_last_capacity(value);
        }
        void set(const exch_firm_type & value) {
            set_exch_firm_type(value);
        }
        void set(const ext_exec_broker & value) {
            set_ext_exec_broker(value);
        }
        void set(const relationship_type & value) {
            set_relationship_type(value);
        }
        void set(const cl_arrive_mark & value) {
            set_cl_arrive_mark(value);
        }
        void set(const parent_dttm & value) {
            set_parent_dttm(value);
        }
        void set(const parent_order_size & value) {
            set_parent_order_size(value);
        }
        void set(const parent_ubid & value) {
            set_parent_ubid(value);
        }
        void set(const parent_uask & value) {
            set_parent_uask(value);
        }
        void set(const parent_umark & value) {
            set_parent_umark(value);
        }
        void set(const parent_bid & value) {
            set_parent_bid(value);
        }
        void set(const parent_ask & value) {
            set_parent_ask(value);
        }
        void set(const parent_mark & value) {
            set_parent_mark(value);
        }
        void set(const parent_fair_width & value) {
            set_parent_fair_width(value);
        }
        void set(const parent_surf_vol & value) {
            set_parent_surf_vol(value);
        }
        void set(const parent_limit_vol & value) {
            set_parent_limit_vol(value);
        }
        void set(const parent_limit_prc & value) {
            set_parent_limit_prc(value);
        }
        void set(const parent_limit_ref_uprc & value) {
            set_parent_limit_ref_uprc(value);
        }
        void set(const parent_theo_vol & value) {
            set_parent_theo_vol(value);
        }
        void set(const parent_theo_prc & value) {
            set_parent_theo_prc(value);
        }
        void set(const parent_pos_type & value) {
            set_parent_pos_type(value);
        }
        void set(const parent_ssale_flag & value) {
            set_parent_ssale_flag(value);
        }
        void set(const notice_number & value) {
            set_notice_number(value);
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
        void set(const exch_mask_enabled & value) {
            set_exch_mask_enabled(value);
        }
        void set(const time_in_force & value) {
            set_time_in_force(value);
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
        void set(const order_limit_class & value) {
            set_order_limit_class(value);
        }
        void set(const take_reach_rule & value) {
            set_take_reach_rule(value);
        }
        void set(const override_code & value) {
            set_override_code(value);
        }
        void set(const alpha_type & value) {
            set_alpha_type(value);
        }
        void set(const parent_strategy & value) {
            set_parent_strategy(value);
        }
        void set(const user_name & value) {
            set_user_name(value);
        }
        void set(const auto_hedge & value) {
            set_auto_hedge(value);
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
        void set(const user_data1 & value) {
            set_user_data1(value);
        }
        void set(const user_data2 & value) {
            set_user_data2(value);
        }
        void set(const years & value) {
            set_years(value);
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
        void set(const u_prc_ratio & value) {
            set_u_prc_ratio(value);
        }
        void set(const min_tick_size & value) {
            set_min_tick_size(value);
        }
        void set(const price_format & value) {
            set_price_format(value);
        }
        void set(const u_price_format & value) {
            set_u_price_format(value);
        }
        void set(const response_type & value) {
            set_response_type(value);
        }
        void set(const nbbo_bid & value) {
            set_nbbo_bid(value);
        }
        void set(const nbbo_ask & value) {
            set_nbbo_ask(value);
        }
        void set(const child_uprc & value) {
            set_child_uprc(value);
        }
        void set(const exch_bid_sz & value) {
            set_exch_bid_sz(value);
        }
        void set(const exch_ask_sz & value) {
            set_exch_ask_sz(value);
        }
        void set(const live_uprc & value) {
            set_live_uprc(value);
        }
        void set(const live_mark & value) {
            set_live_mark(value);
        }
        void set(const src_timestamp & value) {
            set_src_timestamp(value);
        }
        void set(const sgw_timestamp & value) {
            set_sgw_timestamp(value);
        }
        void set(const eng_timestamp & value) {
            set_eng_timestamp(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const data_center__v7 & value) {
            set_data_center__v7(value);
        }
        void set(const face_side__v7 & value) {
            set_face_side__v7(value);
        }
        void set(const face_shape__v7 & value) {
            set_face_shape__v7(value);
        }
        void set(const child_locate_source__v7 & value) {
            set_child_locate_source__v7(value);
        }
        void set(const fill_pr__v7 & value) {
            set_fill_pr__v7(value);
        }
        void set(const fill_risk_metric1__v7 & value) {
            set_fill_risk_metric1__v7(value);
        }
        void set(const fill_risk_metric2__v7 & value) {
            set_fill_risk_metric2__v7(value);
        }
        void set(const fill_risk_metric3__v7 & value) {
            set_fill_risk_metric3__v7(value);
        }
        void set(const fill_risk_metric4__v7 & value) {
            set_fill_risk_metric4__v7(value);
        }
        void set(const fill_risk_metric5__v7 & value) {
            set_fill_risk_metric5__v7(value);
        }
        void set(const fill_risk_metric6__v7 & value) {
            set_fill_risk_metric6__v7(value);
        }
        void set(const fill_risk_metric7__v7 & value) {
            set_fill_risk_metric7__v7(value);
        }
        void set(const fill_s08_dn__v7 & value) {
            set_fill_s08_dn__v7(value);
        }
        void set(const fill_s06_up__v7 & value) {
            set_fill_s06_up__v7(value);
        }
        void set(const fill_s15_dn__v7 & value) {
            set_fill_s15_dn__v7(value);
        }
        void set(const fill_s15_up__v7 & value) {
            set_fill_s15_up__v7(value);
        }
        void set(const fill_s50_dn__v7 & value) {
            set_fill_s50_dn__v7(value);
        }
        void set(const fill_s50_up__v7 & value) {
            set_fill_s50_up__v7(value);
        }

        void set(const SpdrParentExecution & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_sys_realm);
            set(value.m_sys_environment);
            set(value.m_run_status);
            set(value.m_version);
            set(value.m_exec_status);
            set(value.m_exec_shape);
            set(value.m_package_id);
            set(value.m_parent_number);
            set(value.m_parent_version);
            set(value.m_base_parent_number);
            set(value.m_cl_ord_id);
            set(value.m_review_cl_ord_id);
            set(value.m_alt_fill_id);
            set(value.m_alt_order_id);
            set(value.m_alt_cross_id);
            set(value.m_alt_leg_ref_id);
            set(value.m_alt_accnt);
            set(value.m_alt_user_name);
            set(value.m_src_routing_code);
            set(value.m_risk_group_id);
            set(value.m_trigger_group_id);
            set(value.m_trigger_timestamp);
            set(value.m_street_cl_ord_id);
            set(value.m_street_order_id);
            set(value.m_side_cl_ord_id);
            set(value.m_parent_shape);
            set(value.m_sec_key);
            set(value.m_sec_type);
            set(value.m_ticker);
            set(value.m_origin_ticker);
            set(value.m_origin_sec_key);
            set(value.m_accnt);
            set(value.m_client_firm);
            set(value.m_strategy_accnt);
            set(value.m_spdr_source);
            set(value.m_grouping_code);
            set(value.m_core_client_firm);
            set(value.m_sponsor_client_firm);
            set(value.m_routing_code);
            set(value.m_engine_name);
            set(value.m_gateway_name);
            set(value.m_exec_role);
            set(value.m_exec_brkr_code);
            set(value.m_exec_brkr_mpid);
            set(value.m_alt_brkr_mpid);
            set(value.m_exec_brkr_accnt);
            set(value.m_exec_brkr_cl_firm);
            set(value.m_exec_brkr_user_name);
            set(value.m_clearing_flip_type);
            set(value.m_clearing_flip_firm);
            set(value.m_clearing_flip_accnt);
            set(value.m_clearing_firm);
            set(value.m_clearing_accnt);
            set(value.m_orig_exec_id);
            set(value.m_last_exec_id);
            set(value.m_remote_text);
            set(value.m_order_side);
            set(value.m_spdr_order_status);
            set(value.m_spdr_close_reason);
            set(value.m_cum_fill_quantity);
            set(value.m_avg_fill_price);
            set(value.m_cum_leg_fill_quantity);
            set(value.m_avg_leg_fill_price);
            set(value.m_leaves_qty);
            set(value.m_price_type);
            set(value.m_child_shape);
            set(value.m_child_size);
            set(value.m_child_price);
            set(value.m_child_dttm);
            set(value.m_child_exch);
            set(value.m_child_ex_dest);
            set(value.m_child_exec_broker);
            set(value.m_child_is_directed);
            set(value.m_child_iso_sweep);
            set(value.m_child_order_handling);
            set(value.m_child_algo_handler);
            set(value.m_child_create_reason);
            set(value.m_child_cancel_reason);
            set(value.m_child_maker_taker);
            set(value.m_child_ubid);
            set(value.m_child_uask);
            set(value.m_child_bid);
            set(value.m_child_ask);
            set(value.m_child_mark);
            set(value.m_child_fair_width);
            set(value.m_child_vol);
            set(value.m_child_prob);
            set(value.m_child_limit_ref_uprc);
            set(value.m_child_limit_prc);
            set(value.m_child_vol_atm);
            set(value.m_child_pos_type);
            set(value.m_child_firm_opt_position);
            set(value.m_child_ssale_flag);
            set(value.m_child_firm_stk_position);
            set(value.m_child_firm_open_orders);
            set(value.m_child_locate_quan);
            set(value.m_child_locate_firm);
            set(value.m_child_locate_pool);
            set(value.m_child_mkt_stance);
            set(value.m_child_cxl_attempted);
            set(value.m_child_cxl_fill_latency);
            set(value.m_child_method);
            set(value.m_child_source);
            set(value.m_firm_type);
            set(value.m_pri_agg_group);
            set(value.m_sec_agg_group);
            set(value.m_directed_client_firm);
            set(value.m_is_comm_paying);
            set(value.m_fill_transact_dttm);
            set(value.m_fill_ts);
            set(value.m_fill_dttm);
            set(value.m_fill_exch);
            set(value.m_fill_exec_id);
            set(value.m_fill_exec_ref_id);
            set(value.m_fill_leg_ref_id);
            set(value.m_fill_leg_ratio);
            set(value.m_fill_exch_fee);
            set(value.m_fill_market);
            set(value.m_fill_price);
            set(value.m_fill_quantity);
            set(value.m_fill_report_detail);
            set(value.m_fill_bid);
            set(value.m_fill_ask);
            set(value.m_fill_mark);
            set(value.m_fill_fair_width);
            set(value.m_fill_umark);
            set(value.m_fill_ubid);
            set(value.m_fill_uask);
            set(value.m_fill_ubid_sz);
            set(value.m_fill_uask_sz);
            set(value.m_fill_vol_atm);
            set(value.m_fill_mark1_m);
            set(value.m_fill_mark10_m);
            set(value.m_fill_bid1_m);
            set(value.m_fill_ask1_m);
            set(value.m_fill_bid10_m);
            set(value.m_fill_ask10_m);
            set(value.m_fill_umark1_m);
            set(value.m_fill_umark10_m);
            set(value.m_fill_vol_atm1_m);
            set(value.m_fill_vol_atm10_m);
            set(value.m_fill_state1_m);
            set(value.m_fill_state10_m);
            set(value.m_fill_vol);
            set(value.m_fill_vol_s);
            set(value.m_fill_prob);
            set(value.m_fill_limit_ref_uprc);
            set(value.m_fill_limit_ref_sdiv);
            set(value.m_fill_limit_prc);
            set(value.m_fill_ve);
            set(value.m_fill_ga);
            set(value.m_fill_de);
            set(value.m_fill_th);
            set(value.m_fill_ve_ratio);
            set(value.m_fill_beta);
            set(value.m_risk_vega);
            set(value.m_risk_wt_vega);
            set(value.m_risk_nvalue);
            set(value.m_risk_delta);
            set(value.m_risk_ddelta);
            set(value.m_risk_rm1);
            set(value.m_risk_rm2);
            set(value.m_risk_rm3);
            set(value.m_risk_rm4);
            set(value.m_risk_rm5);
            set(value.m_risk_rm6);
            set(value.m_risk_rm7);
            set(value.m_margin_udn_vdn);
            set(value.m_margin_udn_vup);
            set(value.m_margin_uup_vdn);
            set(value.m_margin_uup_vup);
            set(value.m_risk_u15_dn);
            set(value.m_risk_u15_up);
            set(value.m_risk_u50_dn);
            set(value.m_risk_u50_up);
            set(value.m_fill_brkr_rate);
            set(value.m_fill_routing_rate);
            set(value.m_mm_pref_code);
            set(value.m_mm_credit);
            set(value.m_risk_code);
            set(value.m_billing_sec_type);
            set(value.m_billing_category);
            set(value.m_spdr_liquidity_tag);
            set(value.m_exch_liquidity_tag);
            set(value.m_fill_exch_detail);
            set(value.m_cross_side);
            set(value.m_is_cross_breakup_fill);
            set(value.m_last_capacity);
            set(value.m_exch_firm_type);
            set(value.m_ext_exec_broker);
            set(value.m_relationship_type);
            set(value.m_cl_arrive_mark);
            set(value.m_parent_dttm);
            set(value.m_parent_order_size);
            set(value.m_parent_ubid);
            set(value.m_parent_uask);
            set(value.m_parent_umark);
            set(value.m_parent_bid);
            set(value.m_parent_ask);
            set(value.m_parent_mark);
            set(value.m_parent_fair_width);
            set(value.m_parent_surf_vol);
            set(value.m_parent_limit_vol);
            set(value.m_parent_limit_prc);
            set(value.m_parent_limit_ref_uprc);
            set(value.m_parent_theo_vol);
            set(value.m_parent_theo_prc);
            set(value.m_parent_pos_type);
            set(value.m_parent_ssale_flag);
            set(value.m_notice_number);
            set(value.m_num_make_exchanges);
            set(value.m_public_size);
            set(value.m_can_overlap_cxl_repl);
            set(value.m_progress_rule);
            set(value.m_exch_mask_enabled);
            set(value.m_time_in_force);
            set(value.m_parent_order_handling);
            set(value.m_parent_balance_handling);
            set(value.m_order_limit_type);
            set(value.m_order_limit_class);
            set(value.m_take_reach_rule);
            set(value.m_override_code);
            set(value.m_alpha_type);
            set(value.m_parent_strategy);
            set(value.m_user_name);
            set(value.m_auto_hedge);
            set(value.m_hedge_sec_key);
            set(value.m_hedge_sec_type);
            set(value.m_hedge_beta_ratio);
            set(value.m_hedge_scope);
            set(value.m_user_data1);
            set(value.m_user_data2);
            set(value.m_years);
            set(value.m_underliers_per_cn);
            set(value.m_underlier_type);
            set(value.m_tick_value);
            set(value.m_point_value);
            set(value.m_point_currency);
            set(value.m_u_prc_ratio);
            set(value.m_min_tick_size);
            set(value.m_price_format);
            set(value.m_u_price_format);
            set(value.m_response_type);
            set(value.m_nbbo_bid);
            set(value.m_nbbo_ask);
            set(value.m_child_uprc);
            set(value.m_exch_bid_sz);
            set(value.m_exch_ask_sz);
            set(value.m_live_uprc);
            set(value.m_live_mark);
            set(value.m_src_timestamp);
            set(value.m_sgw_timestamp);
            set(value.m_eng_timestamp);
            set(value.m_timestamp);
            set(value.m_data_center__v7);
            set(value.m_face_side__v7);
            set(value.m_face_shape__v7);
            set(value.m_child_locate_source__v7);
            set(value.m_fill_pr__v7);
            set(value.m_fill_risk_metric1__v7);
            set(value.m_fill_risk_metric2__v7);
            set(value.m_fill_risk_metric3__v7);
            set(value.m_fill_risk_metric4__v7);
            set(value.m_fill_risk_metric5__v7);
            set(value.m_fill_risk_metric6__v7);
            set(value.m_fill_risk_metric7__v7);
            set(value.m_fill_s08_dn__v7);
            set(value.m_fill_s06_up__v7);
            set(value.m_fill_s15_dn__v7);
            set(value.m_fill_s15_up__v7);
            set(value.m_fill_s50_dn__v7);
            set(value.m_fill_s50_up__v7);
        }

        SpdrParentExecution() {
            m__meta.set_message_type("SpdrParentExecution");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4085, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4085, length);
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
             *this = SpdrParentExecution{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeVersion() const {
            return !(m_version == 0);
        }
        bool IncludePackageId() const {
            return !(m_package_id == 0);
        }
        bool IncludeParentNumber() const {
            return !(m_parent_number == 0);
        }
        bool IncludeParentVersion() const {
            return !(m_parent_version == 0);
        }
        bool IncludeBaseParentNumber() const {
            return !(m_base_parent_number == 0);
        }
        bool IncludeClOrdId() const {
            return !(m_cl_ord_id == 0);
        }
        bool IncludeReviewClOrdId() const {
            return !(m_review_cl_ord_id.empty());
        }
        bool IncludeAltFillId() const {
            return !(m_alt_fill_id == 0);
        }
        bool IncludeAltOrderId() const {
            return !(m_alt_order_id.empty());
        }
        bool IncludeAltCrossId() const {
            return !(m_alt_cross_id.empty());
        }
        bool IncludeAltLegRefId() const {
            return !(m_alt_leg_ref_id.empty());
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
        bool IncludeRiskGroupId() const {
            return !(m_risk_group_id == 0);
        }
        bool IncludeTriggerGroupId() const {
            return !(m_trigger_group_id == 0);
        }
        bool IncludeTriggerTimestamp() const {
            return !(m_trigger_timestamp == 0);
        }
        bool IncludeStreetClOrdId() const {
            return !(m_street_cl_ord_id.empty());
        }
        bool IncludeStreetOrderId() const {
            return !(m_street_order_id.empty());
        }
        bool IncludeSideClOrdId() const {
            return !(m_side_cl_ord_id == 0);
        }
        bool IncludeSecKey() const {
            return (m_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeOriginTicker() const {
            return (m_origin_ticker.ByteSizeLong() > 0);
        }
        bool IncludeOriginSecKey() const {
            return (m_origin_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeAccnt() const {
            return !(m_accnt.empty());
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }
        bool IncludeStrategyAccnt() const {
            return !(m_strategy_accnt.empty());
        }
        bool IncludeGroupingCode() const {
            return !(m_grouping_code == 0);
        }
        bool IncludeCoreClientFirm() const {
            return !(m_core_client_firm.empty());
        }
        bool IncludeSponsorClientFirm() const {
            return !(m_sponsor_client_firm.empty());
        }
        bool IncludeRoutingCode() const {
            return !(m_routing_code.empty());
        }
        bool IncludeEngineName() const {
            return !(m_engine_name.empty());
        }
        bool IncludeGatewayName() const {
            return !(m_gateway_name.empty());
        }
        bool IncludeExecBrkrCode() const {
            return !(m_exec_brkr_code.empty());
        }
        bool IncludeExecBrkrMpid() const {
            return !(m_exec_brkr_mpid.empty());
        }
        bool IncludeAltBrkrMpid() const {
            return !(m_alt_brkr_mpid.empty());
        }
        bool IncludeExecBrkrAccnt() const {
            return !(m_exec_brkr_accnt.empty());
        }
        bool IncludeExecBrkrClFirm() const {
            return !(m_exec_brkr_cl_firm.empty());
        }
        bool IncludeExecBrkrUserName() const {
            return !(m_exec_brkr_user_name.empty());
        }
        bool IncludeClearingFlipFirm() const {
            return !(m_clearing_flip_firm.empty());
        }
        bool IncludeClearingFlipAccnt() const {
            return !(m_clearing_flip_accnt.empty());
        }
        bool IncludeClearingFirm() const {
            return !(m_clearing_firm.empty());
        }
        bool IncludeClearingAccnt() const {
            return !(m_clearing_accnt.empty());
        }
        bool IncludeOrigExecId() const {
            return !(m_orig_exec_id.empty());
        }
        bool IncludeLastExecId() const {
            return !(m_last_exec_id.empty());
        }
        bool IncludeRemoteText() const {
            return !(m_remote_text.empty());
        }
        bool IncludeCumFillQuantity() const {
            return !(m_cum_fill_quantity == 0);
        }
        bool IncludeAvgFillPrice() const {
            return !(m_avg_fill_price == 0.0);
        }
        bool IncludeCumLegFillQuantity() const {
            return !(m_cum_leg_fill_quantity == 0);
        }
        bool IncludeAvgLegFillPrice() const {
            return !(m_avg_leg_fill_price == 0.0);
        }
        bool IncludeLeavesQty() const {
            return !(m_leaves_qty == 0);
        }
        bool IncludeChildSize() const {
            return !(m_child_size == 0);
        }
        bool IncludeChildPrice() const {
            return !(m_child_price == 0.0);
        }
        bool IncludeChildDttm() const {
            return (m_child_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeChildExch() const {
            return !(m_child_exch.empty());
        }
        bool IncludeChildExDest() const {
            return !(m_child_ex_dest.empty());
        }
        bool IncludeChildExecBroker() const {
            return !(m_child_exec_broker.empty());
        }
        bool IncludeChildOrderHandling() const {
            return !(m_child_order_handling.empty());
        }
        bool IncludeChildUbid() const {
            return !(m_child_ubid == 0.0);
        }
        bool IncludeChildUask() const {
            return !(m_child_uask == 0.0);
        }
        bool IncludeChildBid() const {
            return !(m_child_bid == 0.0);
        }
        bool IncludeChildAsk() const {
            return !(m_child_ask == 0.0);
        }
        bool IncludeChildMark() const {
            return !(m_child_mark == 0.0);
        }
        bool IncludeChildFairWidth() const {
            return !(m_child_fair_width == 0.0);
        }
        bool IncludeChildVol() const {
            return !(m_child_vol == 0.0);
        }
        bool IncludeChildProb() const {
            return !(m_child_prob == 0.0);
        }
        bool IncludeChildLimitRefUprc() const {
            return !(m_child_limit_ref_uprc == 0.0);
        }
        bool IncludeChildLimitPrc() const {
            return !(m_child_limit_prc == 0.0);
        }
        bool IncludeChildVolAtm() const {
            return !(m_child_vol_atm == 0.0);
        }
        bool IncludeChildFirmOptPosition() const {
            return !(m_child_firm_opt_position == 0);
        }
        bool IncludeChildFirmStkPosition() const {
            return !(m_child_firm_stk_position == 0);
        }
        bool IncludeChildFirmOpenOrders() const {
            return !(m_child_firm_open_orders == 0);
        }
        bool IncludeChildLocateQuan() const {
            return !(m_child_locate_quan == 0);
        }
        bool IncludeChildLocateFirm() const {
            return !(m_child_locate_firm.empty());
        }
        bool IncludeChildLocatePool() const {
            return !(m_child_locate_pool.empty());
        }
        bool IncludeChildCxlFillLatency() const {
            return !(m_child_cxl_fill_latency == 0.0);
        }
        bool IncludeChildMethod() const {
            return !(m_child_method.empty());
        }
        bool IncludeChildSource() const {
            return !(m_child_source.empty());
        }
        bool IncludePriAggGroup() const {
            return !(m_pri_agg_group.empty());
        }
        bool IncludeSecAggGroup() const {
            return !(m_sec_agg_group.empty());
        }
        bool IncludeDirectedClientFirm() const {
            return !(m_directed_client_firm.empty());
        }
        bool IncludeFillTransactDttm() const {
            return (m_fill_transact_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeFillTs() const {
            return !(m_fill_ts == 0.0);
        }
        bool IncludeFillDttm() const {
            return (m_fill_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeFillExch() const {
            return !(m_fill_exch.empty());
        }
        bool IncludeFillExecId() const {
            return !(m_fill_exec_id.empty());
        }
        bool IncludeFillExecRefId() const {
            return !(m_fill_exec_ref_id.empty());
        }
        bool IncludeFillLegRefId() const {
            return !(m_fill_leg_ref_id == 0);
        }
        bool IncludeFillLegRatio() const {
            return !(m_fill_leg_ratio == 0);
        }
        bool IncludeFillExchFee() const {
            return !(m_fill_exch_fee == 0.0);
        }
        bool IncludeFillMarket() const {
            return !(m_fill_market.empty());
        }
        bool IncludeFillPrice() const {
            return !(m_fill_price == 0.0);
        }
        bool IncludeFillQuantity() const {
            return !(m_fill_quantity == 0);
        }
        bool IncludeFillReportDetail() const {
            return !(m_fill_report_detail.empty());
        }
        bool IncludeFillBid() const {
            return !(m_fill_bid == 0.0);
        }
        bool IncludeFillAsk() const {
            return !(m_fill_ask == 0.0);
        }
        bool IncludeFillMark() const {
            return !(m_fill_mark == 0.0);
        }
        bool IncludeFillFairWidth() const {
            return !(m_fill_fair_width == 0.0);
        }
        bool IncludeFillUmark() const {
            return !(m_fill_umark == 0.0);
        }
        bool IncludeFillUbid() const {
            return !(m_fill_ubid == 0.0);
        }
        bool IncludeFillUask() const {
            return !(m_fill_uask == 0.0);
        }
        bool IncludeFillUbidSz() const {
            return !(m_fill_ubid_sz == 0);
        }
        bool IncludeFillUaskSz() const {
            return !(m_fill_uask_sz == 0);
        }
        bool IncludeFillVolAtm() const {
            return !(m_fill_vol_atm == 0.0);
        }
        bool IncludeFillMark1M() const {
            return !(m_fill_mark1_m == 0.0);
        }
        bool IncludeFillMark10M() const {
            return !(m_fill_mark10_m == 0.0);
        }
        bool IncludeFillBid1M() const {
            return !(m_fill_bid1_m == 0.0);
        }
        bool IncludeFillAsk1M() const {
            return !(m_fill_ask1_m == 0.0);
        }
        bool IncludeFillBid10M() const {
            return !(m_fill_bid10_m == 0.0);
        }
        bool IncludeFillAsk10M() const {
            return !(m_fill_ask10_m == 0.0);
        }
        bool IncludeFillUmark1M() const {
            return !(m_fill_umark1_m == 0.0);
        }
        bool IncludeFillUmark10M() const {
            return !(m_fill_umark10_m == 0.0);
        }
        bool IncludeFillVolAtm1M() const {
            return !(m_fill_vol_atm1_m == 0.0);
        }
        bool IncludeFillVolAtm10M() const {
            return !(m_fill_vol_atm10_m == 0.0);
        }
        bool IncludeFillVol() const {
            return !(m_fill_vol == 0.0);
        }
        bool IncludeFillVolS() const {
            return !(m_fill_vol_s == 0.0);
        }
        bool IncludeFillProb() const {
            return !(m_fill_prob == 0.0);
        }
        bool IncludeFillLimitRefUprc() const {
            return !(m_fill_limit_ref_uprc == 0.0);
        }
        bool IncludeFillLimitRefSdiv() const {
            return !(m_fill_limit_ref_sdiv == 0.0);
        }
        bool IncludeFillLimitPrc() const {
            return !(m_fill_limit_prc == 0.0);
        }
        bool IncludeFillVe() const {
            return !(m_fill_ve == 0.0);
        }
        bool IncludeFillGa() const {
            return !(m_fill_ga == 0.0);
        }
        bool IncludeFillDe() const {
            return !(m_fill_de == 0.0);
        }
        bool IncludeFillTh() const {
            return !(m_fill_th == 0.0);
        }
        bool IncludeFillVeRatio() const {
            return !(m_fill_ve_ratio == 0.0);
        }
        bool IncludeFillBeta() const {
            return !(m_fill_beta == 0.0);
        }
        bool IncludeRiskVega() const {
            return !(m_risk_vega == 0.0);
        }
        bool IncludeRiskWtVega() const {
            return !(m_risk_wt_vega == 0.0);
        }
        bool IncludeRiskNvalue() const {
            return !(m_risk_nvalue == 0.0);
        }
        bool IncludeRiskDelta() const {
            return !(m_risk_delta == 0.0);
        }
        bool IncludeRiskDdelta() const {
            return !(m_risk_ddelta == 0.0);
        }
        bool IncludeRiskRm1() const {
            return !(m_risk_rm1 == 0.0);
        }
        bool IncludeRiskRm2() const {
            return !(m_risk_rm2 == 0.0);
        }
        bool IncludeRiskRm3() const {
            return !(m_risk_rm3 == 0.0);
        }
        bool IncludeRiskRm4() const {
            return !(m_risk_rm4 == 0.0);
        }
        bool IncludeRiskRm5() const {
            return !(m_risk_rm5 == 0.0);
        }
        bool IncludeRiskRm6() const {
            return !(m_risk_rm6 == 0.0);
        }
        bool IncludeRiskRm7() const {
            return !(m_risk_rm7 == 0.0);
        }
        bool IncludeMarginUdnVdn() const {
            return !(m_margin_udn_vdn == 0.0);
        }
        bool IncludeMarginUdnVup() const {
            return !(m_margin_udn_vup == 0.0);
        }
        bool IncludeMarginUupVdn() const {
            return !(m_margin_uup_vdn == 0.0);
        }
        bool IncludeMarginUupVup() const {
            return !(m_margin_uup_vup == 0.0);
        }
        bool IncludeRiskU15Dn() const {
            return !(m_risk_u15_dn == 0.0);
        }
        bool IncludeRiskU15Up() const {
            return !(m_risk_u15_up == 0.0);
        }
        bool IncludeRiskU50Dn() const {
            return !(m_risk_u50_dn == 0.0);
        }
        bool IncludeRiskU50Up() const {
            return !(m_risk_u50_up == 0.0);
        }
        bool IncludeFillBrkrRate() const {
            return !(m_fill_brkr_rate == 0.0);
        }
        bool IncludeFillRoutingRate() const {
            return !(m_fill_routing_rate == 0.0);
        }
        bool IncludeMmPrefCode() const {
            return !(m_mm_pref_code.empty());
        }
        bool IncludeMmCredit() const {
            return !(m_mm_credit == 0.0);
        }
        bool IncludeSpdrLiquidityTag() const {
            return !(m_spdr_liquidity_tag.empty());
        }
        bool IncludeExchLiquidityTag() const {
            return !(m_exch_liquidity_tag.empty());
        }
        bool IncludeFillExchDetail() const {
            return !(m_fill_exch_detail.empty());
        }
        bool IncludeExchFirmType() const {
            return !(m_exch_firm_type.empty());
        }
        bool IncludeExtExecBroker() const {
            return !(m_ext_exec_broker.empty());
        }
        bool IncludeClArriveMark() const {
            return !(m_cl_arrive_mark == 0.0);
        }
        bool IncludeParentDttm() const {
            return (m_parent_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeParentOrderSize() const {
            return !(m_parent_order_size == 0);
        }
        bool IncludeParentUbid() const {
            return !(m_parent_ubid == 0.0);
        }
        bool IncludeParentUask() const {
            return !(m_parent_uask == 0.0);
        }
        bool IncludeParentUmark() const {
            return !(m_parent_umark == 0.0);
        }
        bool IncludeParentBid() const {
            return !(m_parent_bid == 0.0);
        }
        bool IncludeParentAsk() const {
            return !(m_parent_ask == 0.0);
        }
        bool IncludeParentMark() const {
            return !(m_parent_mark == 0.0);
        }
        bool IncludeParentFairWidth() const {
            return !(m_parent_fair_width == 0.0);
        }
        bool IncludeParentSurfVol() const {
            return !(m_parent_surf_vol == 0.0);
        }
        bool IncludeParentLimitVol() const {
            return !(m_parent_limit_vol == 0.0);
        }
        bool IncludeParentLimitPrc() const {
            return !(m_parent_limit_prc == 0.0);
        }
        bool IncludeParentLimitRefUprc() const {
            return !(m_parent_limit_ref_uprc == 0.0);
        }
        bool IncludeParentTheoVol() const {
            return !(m_parent_theo_vol == 0.0);
        }
        bool IncludeParentTheoPrc() const {
            return !(m_parent_theo_prc == 0.0);
        }
        bool IncludeNoticeNumber() const {
            return !(m_notice_number == 0);
        }
        bool IncludeNumMakeExchanges() const {
            return !(m_num_make_exchanges == 0);
        }
        bool IncludeParentStrategy() const {
            return !(m_parent_strategy.empty());
        }
        bool IncludeUserName() const {
            return !(m_user_name.empty());
        }
        bool IncludeHedgeSecKey() const {
            return (m_hedge_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeHedgeBetaRatio() const {
            return !(m_hedge_beta_ratio == 0.0);
        }
        bool IncludeUserData1() const {
            return !(m_user_data1.empty());
        }
        bool IncludeUserData2() const {
            return !(m_user_data2.empty());
        }
        bool IncludeYears() const {
            return !(m_years == 0.0);
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
        bool IncludeUPrcRatio() const {
            return !(m_u_prc_ratio == 0.0);
        }
        bool IncludeMinTickSize() const {
            return !(m_min_tick_size == 0.0);
        }
        bool IncludeResponseType() const {
            return !(m_response_type.empty());
        }
        bool IncludeNbboBid() const {
            return !(m_nbbo_bid == 0.0);
        }
        bool IncludeNbboAsk() const {
            return !(m_nbbo_ask == 0.0);
        }
        bool IncludeChildUprc() const {
            return !(m_child_uprc == 0.0);
        }
        bool IncludeExchBidSz() const {
            return !(m_exch_bid_sz == 0);
        }
        bool IncludeExchAskSz() const {
            return !(m_exch_ask_sz == 0);
        }
        bool IncludeLiveUprc() const {
            return !(m_live_uprc == 0.0);
        }
        bool IncludeLiveMark() const {
            return !(m_live_mark == 0.0);
        }
        bool IncludeSrcTimestamp() const {
            return !(m_src_timestamp == 0);
        }
        bool IncludeSgwTimestamp() const {
            return !(m_sgw_timestamp == 0);
        }
        bool IncludeEngTimestamp() const {
            return !(m_eng_timestamp == 0);
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeChildLocateSourceV7() const {
            return !(m_child_locate_source__v7.empty());
        }
        bool IncludeFillPrV7() const {
            return !(m_fill_pr__v7 == 0.0);
        }
        bool IncludeFillRiskMetric1V7() const {
            return !(m_fill_risk_metric1__v7 == 0.0);
        }
        bool IncludeFillRiskMetric2V7() const {
            return !(m_fill_risk_metric2__v7 == 0.0);
        }
        bool IncludeFillRiskMetric3V7() const {
            return !(m_fill_risk_metric3__v7 == 0.0);
        }
        bool IncludeFillRiskMetric4V7() const {
            return !(m_fill_risk_metric4__v7 == 0.0);
        }
        bool IncludeFillRiskMetric5V7() const {
            return !(m_fill_risk_metric5__v7 == 0.0);
        }
        bool IncludeFillRiskMetric6V7() const {
            return !(m_fill_risk_metric6__v7 == 0.0);
        }
        bool IncludeFillRiskMetric7V7() const {
            return !(m_fill_risk_metric7__v7 == 0.0);
        }
        bool IncludeFillS08DnV7() const {
            return !(m_fill_s08_dn__v7 == 0.0);
        }
        bool IncludeFillS06UpV7() const {
            return !(m_fill_s06_up__v7 == 0.0);
        }
        bool IncludeFillS15DnV7() const {
            return !(m_fill_s15_dn__v7 == 0.0);
        }
        bool IncludeFillS15UpV7() const {
            return !(m_fill_s15_up__v7 == 0.0);
        }
        bool IncludeFillS50DnV7() const {
            return !(m_fill_s50_dn__v7 == 0.0);
        }
        bool IncludeFillS50UpV7() const {
            return !(m_fill_s50_up__v7 == 0.0);
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
            if ( IncludeVersion()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(109,m_version);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecStatus>(m_exec_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecShape>(m_exec_shape)));
            if ( IncludePackageId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(118,m_package_id);
            }
            if ( IncludeParentNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(121,m_parent_number);
            }
            if ( IncludeParentVersion()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(124,m_parent_version);
            }
            if ( IncludeBaseParentNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(127,m_base_parent_number);
            }
            if ( IncludeClOrdId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(130,m_cl_ord_id);
            }
            if ( IncludeReviewClOrdId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(133,m_review_cl_ord_id);
            }
            if ( IncludeAltFillId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(136,m_alt_fill_id);
            }
            if ( IncludeAltOrderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(139,m_alt_order_id);
            }
            if ( IncludeAltCrossId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(142,m_alt_cross_id);
            }
            if ( IncludeAltLegRefId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(145,m_alt_leg_ref_id);
            }
            if ( IncludeAltAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(148,m_alt_accnt);
            }
            if ( IncludeAltUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(151,m_alt_user_name);
            }
            if ( IncludeSrcRoutingCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(154,m_src_routing_code);
            }
            if ( IncludeRiskGroupId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(157,m_risk_group_id);
            }
            if ( IncludeTriggerGroupId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(160,m_trigger_group_id);
            }
            if ( IncludeTriggerTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(163,m_trigger_timestamp);
            }
            if ( IncludeStreetClOrdId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(166,m_street_cl_ord_id);
            }
            if ( IncludeStreetOrderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(169,m_street_order_id);
            }
            if ( IncludeSideClOrdId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(846,m_side_cl_ord_id);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(178,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>(m_parent_shape)));
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(181, optionKeyLayout_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(187, tickerKeyLayout_ticker);
            }
            if ( IncludeOriginTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_origin_ticker{};
                m_origin_ticker.setCodecTickerKey(tickerKeyLayout_origin_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(843, tickerKeyLayout_origin_ticker);
            }
            if ( IncludeOriginSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_origin_sec_key{};
                m_origin_sec_key.setCodecOptionKey(optionKeyLayout_origin_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(844, optionKeyLayout_origin_sec_key);
            }
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(190,m_accnt);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(193,m_client_firm);
            }
            if ( IncludeStrategyAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(848,m_strategy_accnt);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(196,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            if ( IncludeGroupingCode()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(199,m_grouping_code);
            }
            if ( IncludeCoreClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(809,m_core_client_firm);
            }
            if ( IncludeSponsorClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(810,m_sponsor_client_firm);
            }
            if ( IncludeRoutingCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(202,m_routing_code);
            }
            if ( IncludeEngineName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(811,m_engine_name);
            }
            if ( IncludeGatewayName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(208,m_gateway_name);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(211,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecRole>(m_exec_role)));
            if ( IncludeExecBrkrCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(833,m_exec_brkr_code);
            }
            if ( IncludeExecBrkrMpid()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(217,m_exec_brkr_mpid);
            }
            if ( IncludeAltBrkrMpid()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(834,m_alt_brkr_mpid);
            }
            if ( IncludeExecBrkrAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(220,m_exec_brkr_accnt);
            }
            if ( IncludeExecBrkrClFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(223,m_exec_brkr_cl_firm);
            }
            if ( IncludeExecBrkrUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(226,m_exec_brkr_user_name);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(229,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlipType>(m_clearing_flip_type)));
            if ( IncludeClearingFlipFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(232,m_clearing_flip_firm);
            }
            if ( IncludeClearingFlipAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(235,m_clearing_flip_accnt);
            }
            if ( IncludeClearingFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(238,m_clearing_firm);
            }
            if ( IncludeClearingAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(241,m_clearing_accnt);
            }
            if ( IncludeOrigExecId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(244,m_orig_exec_id);
            }
            if ( IncludeLastExecId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(247,m_last_exec_id);
            }
            if ( IncludeRemoteText()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(250,m_remote_text);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(253,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(256,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(m_spdr_order_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(259,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrCloseReason>(m_spdr_close_reason)));
            if ( IncludeCumFillQuantity()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(262,m_cum_fill_quantity);
            }
            if ( IncludeAvgFillPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(265,m_avg_fill_price);
            }
            if ( IncludeCumLegFillQuantity()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(268,m_cum_leg_fill_quantity);
            }
            if ( IncludeAvgLegFillPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(271,m_avg_leg_fill_price);
            }
            if ( IncludeLeavesQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(274,m_leaves_qty);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(277,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceType>(m_price_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(280,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>(m_child_shape)));
            if ( IncludeChildSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(283,m_child_size);
            }
            if ( IncludeChildPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(286,m_child_price);
            }
            if ( IncludeChildDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(289, m_child_dttm);
            }
            if ( IncludeChildExch()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(292,m_child_exch);
            }
            if ( IncludeChildExDest()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(845,m_child_ex_dest);
            }
            if ( IncludeChildExecBroker()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(298,m_child_exec_broker);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(301,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_child_is_directed)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(304,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_child_iso_sweep)));
            if ( IncludeChildOrderHandling()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(307,m_child_order_handling);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(310,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildHandler>(m_child_algo_handler)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(313,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildCreateReason>(m_child_create_reason)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(316,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildCancelReason>(m_child_cancel_reason)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(319,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MakerTaker>(m_child_maker_taker)));
            if ( IncludeChildUbid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(322,m_child_ubid);
            }
            if ( IncludeChildUask()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(325,m_child_uask);
            }
            if ( IncludeChildBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(328,m_child_bid);
            }
            if ( IncludeChildAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(331,m_child_ask);
            }
            if ( IncludeChildMark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(334,m_child_mark);
            }
            if ( IncludeChildFairWidth()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(337,m_child_fair_width);
            }
            if ( IncludeChildVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(340,m_child_vol);
            }
            if ( IncludeChildProb()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(343,m_child_prob);
            }
            if ( IncludeChildLimitRefUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(346,m_child_limit_ref_uprc);
            }
            if ( IncludeChildLimitPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(349,m_child_limit_prc);
            }
            if ( IncludeChildVolAtm()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(352,m_child_vol_atm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(355,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_child_pos_type)));
            if ( IncludeChildFirmOptPosition()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(358,m_child_firm_opt_position);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(361,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_child_ssale_flag)));
            if ( IncludeChildFirmStkPosition()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(364,m_child_firm_stk_position);
            }
            if ( IncludeChildFirmOpenOrders()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(367,m_child_firm_open_orders);
            }
            if ( IncludeChildLocateQuan()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(370,m_child_locate_quan);
            }
            if ( IncludeChildLocateFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(373,m_child_locate_firm);
            }
            if ( IncludeChildLocatePool()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(376,m_child_locate_pool);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(379,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktStance>(m_child_mkt_stance)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(382,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_child_cxl_attempted)));
            if ( IncludeChildCxlFillLatency()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(385,m_child_cxl_fill_latency);
            }
            if ( IncludeChildMethod()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(388,m_child_method);
            }
            if ( IncludeChildSource()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(391,m_child_source);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(394,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_firm_type)));
            if ( IncludePriAggGroup()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(397,m_pri_agg_group);
            }
            if ( IncludeSecAggGroup()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(400,m_sec_agg_group);
            }
            if ( IncludeDirectedClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(403,m_directed_client_firm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(406,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_comm_paying)));
            if ( IncludeFillTransactDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(409, m_fill_transact_dttm);
            }
            if ( IncludeFillTs()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(412,m_fill_ts);
            }
            if ( IncludeFillDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(415, m_fill_dttm);
            }
            if ( IncludeFillExch()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(418,m_fill_exch);
            }
            if ( IncludeFillExecId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(421,m_fill_exec_id);
            }
            if ( IncludeFillExecRefId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(424,m_fill_exec_ref_id);
            }
            if ( IncludeFillLegRefId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(427,m_fill_leg_ref_id);
            }
            if ( IncludeFillLegRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(430,m_fill_leg_ratio);
            }
            if ( IncludeFillExchFee()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(433,m_fill_exch_fee);
            }
            if ( IncludeFillMarket()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(436,m_fill_market);
            }
            if ( IncludeFillPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(439,m_fill_price);
            }
            if ( IncludeFillQuantity()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(442,m_fill_quantity);
            }
            if ( IncludeFillReportDetail()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(445,m_fill_report_detail);
            }
            if ( IncludeFillBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(448,m_fill_bid);
            }
            if ( IncludeFillAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(451,m_fill_ask);
            }
            if ( IncludeFillMark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(454,m_fill_mark);
            }
            if ( IncludeFillFairWidth()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(457,m_fill_fair_width);
            }
            if ( IncludeFillUmark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(460,m_fill_umark);
            }
            if ( IncludeFillUbid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(463,m_fill_ubid);
            }
            if ( IncludeFillUask()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(466,m_fill_uask);
            }
            if ( IncludeFillUbidSz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(469,m_fill_ubid_sz);
            }
            if ( IncludeFillUaskSz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(472,m_fill_uask_sz);
            }
            if ( IncludeFillVolAtm()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(475,m_fill_vol_atm);
            }
            if ( IncludeFillMark1M()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(478,m_fill_mark1_m);
            }
            if ( IncludeFillMark10M()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(481,m_fill_mark10_m);
            }
            if ( IncludeFillBid1M()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(484,m_fill_bid1_m);
            }
            if ( IncludeFillAsk1M()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(487,m_fill_ask1_m);
            }
            if ( IncludeFillBid10M()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(490,m_fill_bid10_m);
            }
            if ( IncludeFillAsk10M()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(493,m_fill_ask10_m);
            }
            if ( IncludeFillUmark1M()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(496,m_fill_umark1_m);
            }
            if ( IncludeFillUmark10M()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(499,m_fill_umark10_m);
            }
            if ( IncludeFillVolAtm1M()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(502,m_fill_vol_atm1_m);
            }
            if ( IncludeFillVolAtm10M()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(505,m_fill_vol_atm10_m);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(508,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FillMarkState>(m_fill_state1_m)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(511,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FillMarkState>(m_fill_state10_m)));
            if ( IncludeFillVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(514,m_fill_vol);
            }
            if ( IncludeFillVolS()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(517,m_fill_vol_s);
            }
            if ( IncludeFillProb()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(520,m_fill_prob);
            }
            if ( IncludeFillLimitRefUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(523,m_fill_limit_ref_uprc);
            }
            if ( IncludeFillLimitRefSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(526,m_fill_limit_ref_sdiv);
            }
            if ( IncludeFillLimitPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(529,m_fill_limit_prc);
            }
            if ( IncludeFillVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(532,m_fill_ve);
            }
            if ( IncludeFillGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(535,m_fill_ga);
            }
            if ( IncludeFillDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(538,m_fill_de);
            }
            if ( IncludeFillTh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(541,m_fill_th);
            }
            if ( IncludeFillVeRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(547,m_fill_ve_ratio);
            }
            if ( IncludeFillBeta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(550,m_fill_beta);
            }
            if ( IncludeRiskVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(812,m_risk_vega);
            }
            if ( IncludeRiskWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(813,m_risk_wt_vega);
            }
            if ( IncludeRiskNvalue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(814,m_risk_nvalue);
            }
            if ( IncludeRiskDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(815,m_risk_delta);
            }
            if ( IncludeRiskDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(816,m_risk_ddelta);
            }
            if ( IncludeRiskRm1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(817,m_risk_rm1);
            }
            if ( IncludeRiskRm2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(818,m_risk_rm2);
            }
            if ( IncludeRiskRm3()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(819,m_risk_rm3);
            }
            if ( IncludeRiskRm4()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(820,m_risk_rm4);
            }
            if ( IncludeRiskRm5()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(821,m_risk_rm5);
            }
            if ( IncludeRiskRm6()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(822,m_risk_rm6);
            }
            if ( IncludeRiskRm7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(823,m_risk_rm7);
            }
            if ( IncludeMarginUdnVdn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(824,m_margin_udn_vdn);
            }
            if ( IncludeMarginUdnVup()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(825,m_margin_udn_vup);
            }
            if ( IncludeMarginUupVdn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(826,m_margin_uup_vdn);
            }
            if ( IncludeMarginUupVup()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(827,m_margin_uup_vup);
            }
            if ( IncludeRiskU15Dn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(828,m_risk_u15_dn);
            }
            if ( IncludeRiskU15Up()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(829,m_risk_u15_up);
            }
            if ( IncludeRiskU50Dn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(830,m_risk_u50_dn);
            }
            if ( IncludeRiskU50Up()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(831,m_risk_u50_up);
            }
            if ( IncludeFillBrkrRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(604,m_fill_brkr_rate);
            }
            if ( IncludeFillRoutingRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(607,m_fill_routing_rate);
            }
            if ( IncludeMmPrefCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(835,m_mm_pref_code);
            }
            if ( IncludeMmCredit()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(836,m_mm_credit);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(610,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskCode>(m_risk_code)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(613,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BillingSecType>(m_billing_sec_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(616,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BillingCategory>(m_billing_category)));
            if ( IncludeSpdrLiquidityTag()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(619,m_spdr_liquidity_tag);
            }
            if ( IncludeExchLiquidityTag()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(622,m_exch_liquidity_tag);
            }
            if ( IncludeFillExchDetail()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(625,m_fill_exch_detail);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(849,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CrossSide>(m_cross_side)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(847,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_cross_breakup_fill)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(628,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCapacity>(m_last_capacity)));
            if ( IncludeExchFirmType()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(631,m_exch_firm_type);
            }
            if ( IncludeExtExecBroker()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(634,m_ext_exec_broker);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(637,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RelationshipType>(m_relationship_type)));
            if ( IncludeClArriveMark()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(640,m_cl_arrive_mark);
            }
            if ( IncludeParentDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(643, m_parent_dttm);
            }
            if ( IncludeParentOrderSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(646,m_parent_order_size);
            }
            if ( IncludeParentUbid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(649,m_parent_ubid);
            }
            if ( IncludeParentUask()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(652,m_parent_uask);
            }
            if ( IncludeParentUmark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(655,m_parent_umark);
            }
            if ( IncludeParentBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(658,m_parent_bid);
            }
            if ( IncludeParentAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(661,m_parent_ask);
            }
            if ( IncludeParentMark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(664,m_parent_mark);
            }
            if ( IncludeParentFairWidth()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(667,m_parent_fair_width);
            }
            if ( IncludeParentSurfVol()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(670,m_parent_surf_vol);
            }
            if ( IncludeParentLimitVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(673,m_parent_limit_vol);
            }
            if ( IncludeParentLimitPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(676,m_parent_limit_prc);
            }
            if ( IncludeParentLimitRefUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(679,m_parent_limit_ref_uprc);
            }
            if ( IncludeParentTheoVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(682,m_parent_theo_vol);
            }
            if ( IncludeParentTheoPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(685,m_parent_theo_prc);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(688,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_parent_pos_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(691,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_parent_ssale_flag)));
            if ( IncludeNoticeNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(832,m_notice_number);
            }
            if ( IncludeNumMakeExchanges()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(697,m_num_make_exchanges);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(700,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PublicSizeHandling>(m_public_size)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(703,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_overlap_cxl_repl)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(706,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProgressRule>(m_progress_rule)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(709,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_exch_mask_enabled)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(712,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TimeInForce>(m_time_in_force)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(715,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentOrderHandling>(m_parent_order_handling)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(718,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentBalanceHandling>(m_parent_balance_handling)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(721,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitType>(m_order_limit_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(724,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>(m_order_limit_class)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(727,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ReachRule>(m_take_reach_rule)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(730,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OverrideCode>(m_override_code)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(733,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>(m_alpha_type)));
            if ( IncludeParentStrategy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(736,m_parent_strategy);
            }
            if ( IncludeUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(739,m_user_name);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(742,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>(m_auto_hedge)));
            if ( IncludeHedgeSecKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_hedge_sec_key{};
                m_hedge_sec_key.setCodecExpiryKey(expiryKeyLayout_hedge_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(745, expiryKeyLayout_hedge_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(748,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_hedge_sec_type)));
            if ( IncludeHedgeBetaRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(751,m_hedge_beta_ratio);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(754,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeScope>(m_hedge_scope)));
            if ( IncludeUserData1()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(757,m_user_data1);
            }
            if ( IncludeUserData2()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(760,m_user_data2);
            }
            if ( IncludeYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(763,m_years);
            }
            if ( IncludeUnderliersPerCn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(766,m_underliers_per_cn);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(769,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>(m_underlier_type)));
            if ( IncludeTickValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(772,m_tick_value);
            }
            if ( IncludePointValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(775,m_point_value);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(778,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            if ( IncludeUPrcRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(781,m_u_prc_ratio);
            }
            if ( IncludeMinTickSize()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(784,m_min_tick_size);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(787,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(790,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_u_price_format)));
            if ( IncludeResponseType()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(837,m_response_type);
            }
            if ( IncludeNbboBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(838,m_nbbo_bid);
            }
            if ( IncludeNbboAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(839,m_nbbo_ask);
            }
            if ( IncludeChildUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(840,m_child_uprc);
            }
            if ( IncludeExchBidSz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(841,m_exch_bid_sz);
            }
            if ( IncludeExchAskSz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(842,m_exch_ask_sz);
            }
            if ( IncludeLiveUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(793,m_live_uprc);
            }
            if ( IncludeLiveMark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(796,m_live_mark);
            }
            if ( IncludeSrcTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(799,m_src_timestamp);
            }
            if ( IncludeSgwTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(802,m_sgw_timestamp);
            }
            if ( IncludeEngTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(805,m_eng_timestamp);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(808, m_timestamp);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5000,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SRDataCenter_V7>(m_data_center__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5001,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FaceSide>(m_face_side__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5002,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FaceShape>(m_face_shape__v7)));
            if ( IncludeChildLocateSourceV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5003,m_child_locate_source__v7);
            }
            if ( IncludeFillPrV7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(5004,m_fill_pr__v7);
            }
            if ( IncludeFillRiskMetric1V7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(5005,m_fill_risk_metric1__v7);
            }
            if ( IncludeFillRiskMetric2V7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(5006,m_fill_risk_metric2__v7);
            }
            if ( IncludeFillRiskMetric3V7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(5007,m_fill_risk_metric3__v7);
            }
            if ( IncludeFillRiskMetric4V7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(5008,m_fill_risk_metric4__v7);
            }
            if ( IncludeFillRiskMetric5V7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(5009,m_fill_risk_metric5__v7);
            }
            if ( IncludeFillRiskMetric6V7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(5010,m_fill_risk_metric6__v7);
            }
            if ( IncludeFillRiskMetric7V7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(5011,m_fill_risk_metric7__v7);
            }
            if ( IncludeFillS08DnV7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(5012,m_fill_s08_dn__v7);
            }
            if ( IncludeFillS06UpV7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(5013,m_fill_s06_up__v7);
            }
            if ( IncludeFillS15DnV7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(5014,m_fill_s15_dn__v7);
            }
            if ( IncludeFillS15UpV7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(5015,m_fill_s15_up__v7);
            }
            if ( IncludeFillS50DnV7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(5016,m_fill_s50_dn__v7);
            }
            if ( IncludeFillS50UpV7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(5017,m_fill_s50_up__v7);
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
            if ( IncludeVersion()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,109,m_version);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecStatus>(m_exec_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecShape>(m_exec_shape)));
            if ( IncludePackageId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,118,m_package_id);
            }
            if ( IncludeParentNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,121,m_parent_number);
            }
            if ( IncludeParentVersion()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,124,m_parent_version);
            }
            if ( IncludeBaseParentNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,127,m_base_parent_number);
            }
            if ( IncludeClOrdId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,130,m_cl_ord_id);
            }
            if ( IncludeReviewClOrdId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,133,static_cast<string>(m_review_cl_ord_id));
            }
            if ( IncludeAltFillId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,136,m_alt_fill_id);
            }
            if ( IncludeAltOrderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,139,static_cast<string>(m_alt_order_id));
            }
            if ( IncludeAltCrossId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,142,static_cast<string>(m_alt_cross_id));
            }
            if ( IncludeAltLegRefId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,145,static_cast<string>(m_alt_leg_ref_id));
            }
            if ( IncludeAltAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,148,static_cast<string>(m_alt_accnt));
            }
            if ( IncludeAltUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,151,static_cast<string>(m_alt_user_name));
            }
            if ( IncludeSrcRoutingCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,154,static_cast<string>(m_src_routing_code));
            }
            if ( IncludeRiskGroupId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,157,m_risk_group_id);
            }
            if ( IncludeTriggerGroupId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,160,m_trigger_group_id);
            }
            if ( IncludeTriggerTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,163,m_trigger_timestamp);
            }
            if ( IncludeStreetClOrdId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,166,static_cast<string>(m_street_cl_ord_id));
            }
            if ( IncludeStreetOrderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,169,static_cast<string>(m_street_order_id));
            }
            if ( IncludeSideClOrdId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,846,m_side_cl_ord_id);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,178,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>(m_parent_shape)));
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 181, optionKeyLayout_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 187, tickerKeyLayout_ticker);
            }
            if ( IncludeOriginTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_origin_ticker{};
                m_origin_ticker.setCodecTickerKey(tickerKeyLayout_origin_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 843, tickerKeyLayout_origin_ticker);
            }
            if ( IncludeOriginSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_origin_sec_key{};
                m_origin_sec_key.setCodecOptionKey(optionKeyLayout_origin_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 844, optionKeyLayout_origin_sec_key);
            }
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,190,static_cast<string>(m_accnt));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,193,static_cast<string>(m_client_firm));
            }
            if ( IncludeStrategyAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,848,static_cast<string>(m_strategy_accnt));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,196,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            if ( IncludeGroupingCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,199,m_grouping_code);
            }
            if ( IncludeCoreClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,809,static_cast<string>(m_core_client_firm));
            }
            if ( IncludeSponsorClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,810,static_cast<string>(m_sponsor_client_firm));
            }
            if ( IncludeRoutingCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,202,static_cast<string>(m_routing_code));
            }
            if ( IncludeEngineName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,811,static_cast<string>(m_engine_name));
            }
            if ( IncludeGatewayName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,208,static_cast<string>(m_gateway_name));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,211,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecRole>(m_exec_role)));
            if ( IncludeExecBrkrCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,833,static_cast<string>(m_exec_brkr_code));
            }
            if ( IncludeExecBrkrMpid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,217,static_cast<string>(m_exec_brkr_mpid));
            }
            if ( IncludeAltBrkrMpid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,834,static_cast<string>(m_alt_brkr_mpid));
            }
            if ( IncludeExecBrkrAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,220,static_cast<string>(m_exec_brkr_accnt));
            }
            if ( IncludeExecBrkrClFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,223,static_cast<string>(m_exec_brkr_cl_firm));
            }
            if ( IncludeExecBrkrUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,226,static_cast<string>(m_exec_brkr_user_name));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,229,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlipType>(m_clearing_flip_type)));
            if ( IncludeClearingFlipFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,232,static_cast<string>(m_clearing_flip_firm));
            }
            if ( IncludeClearingFlipAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,235,static_cast<string>(m_clearing_flip_accnt));
            }
            if ( IncludeClearingFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,238,static_cast<string>(m_clearing_firm));
            }
            if ( IncludeClearingAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,241,static_cast<string>(m_clearing_accnt));
            }
            if ( IncludeOrigExecId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,244,static_cast<string>(m_orig_exec_id));
            }
            if ( IncludeLastExecId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,247,static_cast<string>(m_last_exec_id));
            }
            if ( IncludeRemoteText()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,250,static_cast<string>(m_remote_text));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,253,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,256,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(m_spdr_order_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,259,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrCloseReason>(m_spdr_close_reason)));
            if ( IncludeCumFillQuantity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,262,m_cum_fill_quantity);
            }
            if ( IncludeAvgFillPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,265,m_avg_fill_price);
            }
            if ( IncludeCumLegFillQuantity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,268,m_cum_leg_fill_quantity);
            }
            if ( IncludeAvgLegFillPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,271,m_avg_leg_fill_price);
            }
            if ( IncludeLeavesQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,274,m_leaves_qty);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,277,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceType>(m_price_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,280,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>(m_child_shape)));
            if ( IncludeChildSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,283,m_child_size);
            }
            if ( IncludeChildPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,286,m_child_price);
            }
            if ( IncludeChildDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 289, m_child_dttm);
            }
            if ( IncludeChildExch()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,292,static_cast<string>(m_child_exch));
            }
            if ( IncludeChildExDest()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,845,static_cast<string>(m_child_ex_dest));
            }
            if ( IncludeChildExecBroker()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,298,static_cast<string>(m_child_exec_broker));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,301,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_child_is_directed)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,304,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_child_iso_sweep)));
            if ( IncludeChildOrderHandling()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,307,static_cast<string>(m_child_order_handling));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,310,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildHandler>(m_child_algo_handler)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,313,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildCreateReason>(m_child_create_reason)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,316,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildCancelReason>(m_child_cancel_reason)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,319,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MakerTaker>(m_child_maker_taker)));
            if ( IncludeChildUbid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,322,m_child_ubid);
            }
            if ( IncludeChildUask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,325,m_child_uask);
            }
            if ( IncludeChildBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,328,m_child_bid);
            }
            if ( IncludeChildAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,331,m_child_ask);
            }
            if ( IncludeChildMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,334,m_child_mark);
            }
            if ( IncludeChildFairWidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,337,m_child_fair_width);
            }
            if ( IncludeChildVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,340,m_child_vol);
            }
            if ( IncludeChildProb()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,343,m_child_prob);
            }
            if ( IncludeChildLimitRefUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,346,m_child_limit_ref_uprc);
            }
            if ( IncludeChildLimitPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,349,m_child_limit_prc);
            }
            if ( IncludeChildVolAtm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,352,m_child_vol_atm);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,355,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_child_pos_type)));
            if ( IncludeChildFirmOptPosition()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,358,m_child_firm_opt_position);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,361,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_child_ssale_flag)));
            if ( IncludeChildFirmStkPosition()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,364,m_child_firm_stk_position);
            }
            if ( IncludeChildFirmOpenOrders()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,367,m_child_firm_open_orders);
            }
            if ( IncludeChildLocateQuan()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,370,m_child_locate_quan);
            }
            if ( IncludeChildLocateFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,373,static_cast<string>(m_child_locate_firm));
            }
            if ( IncludeChildLocatePool()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,376,static_cast<string>(m_child_locate_pool));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,379,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktStance>(m_child_mkt_stance)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,382,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_child_cxl_attempted)));
            if ( IncludeChildCxlFillLatency()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,385,m_child_cxl_fill_latency);
            }
            if ( IncludeChildMethod()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,388,static_cast<string>(m_child_method));
            }
            if ( IncludeChildSource()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,391,static_cast<string>(m_child_source));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,394,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_firm_type)));
            if ( IncludePriAggGroup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,397,static_cast<string>(m_pri_agg_group));
            }
            if ( IncludeSecAggGroup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,400,static_cast<string>(m_sec_agg_group));
            }
            if ( IncludeDirectedClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,403,static_cast<string>(m_directed_client_firm));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,406,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_comm_paying)));
            if ( IncludeFillTransactDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 409, m_fill_transact_dttm);
            }
            if ( IncludeFillTs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,412,m_fill_ts);
            }
            if ( IncludeFillDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 415, m_fill_dttm);
            }
            if ( IncludeFillExch()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,418,static_cast<string>(m_fill_exch));
            }
            if ( IncludeFillExecId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,421,static_cast<string>(m_fill_exec_id));
            }
            if ( IncludeFillExecRefId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,424,static_cast<string>(m_fill_exec_ref_id));
            }
            if ( IncludeFillLegRefId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,427,m_fill_leg_ref_id);
            }
            if ( IncludeFillLegRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,430,m_fill_leg_ratio);
            }
            if ( IncludeFillExchFee()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,433,m_fill_exch_fee);
            }
            if ( IncludeFillMarket()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,436,static_cast<string>(m_fill_market));
            }
            if ( IncludeFillPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,439,m_fill_price);
            }
            if ( IncludeFillQuantity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,442,m_fill_quantity);
            }
            if ( IncludeFillReportDetail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,445,static_cast<string>(m_fill_report_detail));
            }
            if ( IncludeFillBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,448,m_fill_bid);
            }
            if ( IncludeFillAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,451,m_fill_ask);
            }
            if ( IncludeFillMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,454,m_fill_mark);
            }
            if ( IncludeFillFairWidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,457,m_fill_fair_width);
            }
            if ( IncludeFillUmark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,460,m_fill_umark);
            }
            if ( IncludeFillUbid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,463,m_fill_ubid);
            }
            if ( IncludeFillUask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,466,m_fill_uask);
            }
            if ( IncludeFillUbidSz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,469,m_fill_ubid_sz);
            }
            if ( IncludeFillUaskSz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,472,m_fill_uask_sz);
            }
            if ( IncludeFillVolAtm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,475,m_fill_vol_atm);
            }
            if ( IncludeFillMark1M()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,478,m_fill_mark1_m);
            }
            if ( IncludeFillMark10M()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,481,m_fill_mark10_m);
            }
            if ( IncludeFillBid1M()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,484,m_fill_bid1_m);
            }
            if ( IncludeFillAsk1M()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,487,m_fill_ask1_m);
            }
            if ( IncludeFillBid10M()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,490,m_fill_bid10_m);
            }
            if ( IncludeFillAsk10M()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,493,m_fill_ask10_m);
            }
            if ( IncludeFillUmark1M()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,496,m_fill_umark1_m);
            }
            if ( IncludeFillUmark10M()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,499,m_fill_umark10_m);
            }
            if ( IncludeFillVolAtm1M()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,502,m_fill_vol_atm1_m);
            }
            if ( IncludeFillVolAtm10M()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,505,m_fill_vol_atm10_m);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,508,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FillMarkState>(m_fill_state1_m)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,511,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FillMarkState>(m_fill_state10_m)));
            if ( IncludeFillVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,514,m_fill_vol);
            }
            if ( IncludeFillVolS()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,517,m_fill_vol_s);
            }
            if ( IncludeFillProb()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,520,m_fill_prob);
            }
            if ( IncludeFillLimitRefUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,523,m_fill_limit_ref_uprc);
            }
            if ( IncludeFillLimitRefSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,526,m_fill_limit_ref_sdiv);
            }
            if ( IncludeFillLimitPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,529,m_fill_limit_prc);
            }
            if ( IncludeFillVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,532,m_fill_ve);
            }
            if ( IncludeFillGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,535,m_fill_ga);
            }
            if ( IncludeFillDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,538,m_fill_de);
            }
            if ( IncludeFillTh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,541,m_fill_th);
            }
            if ( IncludeFillVeRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,547,m_fill_ve_ratio);
            }
            if ( IncludeFillBeta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,550,m_fill_beta);
            }
            if ( IncludeRiskVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,812,m_risk_vega);
            }
            if ( IncludeRiskWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,813,m_risk_wt_vega);
            }
            if ( IncludeRiskNvalue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,814,m_risk_nvalue);
            }
            if ( IncludeRiskDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,815,m_risk_delta);
            }
            if ( IncludeRiskDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,816,m_risk_ddelta);
            }
            if ( IncludeRiskRm1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,817,m_risk_rm1);
            }
            if ( IncludeRiskRm2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,818,m_risk_rm2);
            }
            if ( IncludeRiskRm3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,819,m_risk_rm3);
            }
            if ( IncludeRiskRm4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,820,m_risk_rm4);
            }
            if ( IncludeRiskRm5()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,821,m_risk_rm5);
            }
            if ( IncludeRiskRm6()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,822,m_risk_rm6);
            }
            if ( IncludeRiskRm7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,823,m_risk_rm7);
            }
            if ( IncludeMarginUdnVdn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,824,m_margin_udn_vdn);
            }
            if ( IncludeMarginUdnVup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,825,m_margin_udn_vup);
            }
            if ( IncludeMarginUupVdn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,826,m_margin_uup_vdn);
            }
            if ( IncludeMarginUupVup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,827,m_margin_uup_vup);
            }
            if ( IncludeRiskU15Dn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,828,m_risk_u15_dn);
            }
            if ( IncludeRiskU15Up()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,829,m_risk_u15_up);
            }
            if ( IncludeRiskU50Dn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,830,m_risk_u50_dn);
            }
            if ( IncludeRiskU50Up()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,831,m_risk_u50_up);
            }
            if ( IncludeFillBrkrRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,604,m_fill_brkr_rate);
            }
            if ( IncludeFillRoutingRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,607,m_fill_routing_rate);
            }
            if ( IncludeMmPrefCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,835,static_cast<string>(m_mm_pref_code));
            }
            if ( IncludeMmCredit()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,836,m_mm_credit);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,610,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskCode>(m_risk_code)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,613,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BillingSecType>(m_billing_sec_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,616,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BillingCategory>(m_billing_category)));
            if ( IncludeSpdrLiquidityTag()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,619,static_cast<string>(m_spdr_liquidity_tag));
            }
            if ( IncludeExchLiquidityTag()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,622,static_cast<string>(m_exch_liquidity_tag));
            }
            if ( IncludeFillExchDetail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,625,static_cast<string>(m_fill_exch_detail));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,849,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CrossSide>(m_cross_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,847,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_cross_breakup_fill)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,628,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCapacity>(m_last_capacity)));
            if ( IncludeExchFirmType()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,631,static_cast<string>(m_exch_firm_type));
            }
            if ( IncludeExtExecBroker()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,634,static_cast<string>(m_ext_exec_broker));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,637,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RelationshipType>(m_relationship_type)));
            if ( IncludeClArriveMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,640,m_cl_arrive_mark);
            }
            if ( IncludeParentDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 643, m_parent_dttm);
            }
            if ( IncludeParentOrderSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,646,m_parent_order_size);
            }
            if ( IncludeParentUbid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,649,m_parent_ubid);
            }
            if ( IncludeParentUask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,652,m_parent_uask);
            }
            if ( IncludeParentUmark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,655,m_parent_umark);
            }
            if ( IncludeParentBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,658,m_parent_bid);
            }
            if ( IncludeParentAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,661,m_parent_ask);
            }
            if ( IncludeParentMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,664,m_parent_mark);
            }
            if ( IncludeParentFairWidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,667,m_parent_fair_width);
            }
            if ( IncludeParentSurfVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,670,m_parent_surf_vol);
            }
            if ( IncludeParentLimitVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,673,m_parent_limit_vol);
            }
            if ( IncludeParentLimitPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,676,m_parent_limit_prc);
            }
            if ( IncludeParentLimitRefUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,679,m_parent_limit_ref_uprc);
            }
            if ( IncludeParentTheoVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,682,m_parent_theo_vol);
            }
            if ( IncludeParentTheoPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,685,m_parent_theo_prc);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,688,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_parent_pos_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,691,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_parent_ssale_flag)));
            if ( IncludeNoticeNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,832,m_notice_number);
            }
            if ( IncludeNumMakeExchanges()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,697,m_num_make_exchanges);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,700,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PublicSizeHandling>(m_public_size)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,703,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_overlap_cxl_repl)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,706,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProgressRule>(m_progress_rule)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,709,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_exch_mask_enabled)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,712,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TimeInForce>(m_time_in_force)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,715,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentOrderHandling>(m_parent_order_handling)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,718,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentBalanceHandling>(m_parent_balance_handling)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,721,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitType>(m_order_limit_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,724,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>(m_order_limit_class)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,727,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ReachRule>(m_take_reach_rule)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,730,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OverrideCode>(m_override_code)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,733,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>(m_alpha_type)));
            if ( IncludeParentStrategy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,736,static_cast<string>(m_parent_strategy));
            }
            if ( IncludeUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,739,static_cast<string>(m_user_name));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,742,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>(m_auto_hedge)));
            if ( IncludeHedgeSecKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_hedge_sec_key{};
                m_hedge_sec_key.setCodecExpiryKey(expiryKeyLayout_hedge_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 745, expiryKeyLayout_hedge_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,748,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_hedge_sec_type)));
            if ( IncludeHedgeBetaRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,751,m_hedge_beta_ratio);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,754,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeScope>(m_hedge_scope)));
            if ( IncludeUserData1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,757,static_cast<string>(m_user_data1));
            }
            if ( IncludeUserData2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,760,static_cast<string>(m_user_data2));
            }
            if ( IncludeYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,763,m_years);
            }
            if ( IncludeUnderliersPerCn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,766,m_underliers_per_cn);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,769,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>(m_underlier_type)));
            if ( IncludeTickValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,772,m_tick_value);
            }
            if ( IncludePointValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,775,m_point_value);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,778,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            if ( IncludeUPrcRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,781,m_u_prc_ratio);
            }
            if ( IncludeMinTickSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,784,m_min_tick_size);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,787,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,790,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_u_price_format)));
            if ( IncludeResponseType()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,837,static_cast<string>(m_response_type));
            }
            if ( IncludeNbboBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,838,m_nbbo_bid);
            }
            if ( IncludeNbboAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,839,m_nbbo_ask);
            }
            if ( IncludeChildUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,840,m_child_uprc);
            }
            if ( IncludeExchBidSz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,841,m_exch_bid_sz);
            }
            if ( IncludeExchAskSz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,842,m_exch_ask_sz);
            }
            if ( IncludeLiveUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,793,m_live_uprc);
            }
            if ( IncludeLiveMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,796,m_live_mark);
            }
            if ( IncludeSrcTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,799,m_src_timestamp);
            }
            if ( IncludeSgwTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,802,m_sgw_timestamp);
            }
            if ( IncludeEngTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,805,m_eng_timestamp);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 808, m_timestamp);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5000,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SRDataCenter_V7>(m_data_center__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5001,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FaceSide>(m_face_side__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5002,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FaceShape>(m_face_shape__v7)));
            if ( IncludeChildLocateSourceV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5003,static_cast<string>(m_child_locate_source__v7));
            }
            if ( IncludeFillPrV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,5004,m_fill_pr__v7);
            }
            if ( IncludeFillRiskMetric1V7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,5005,m_fill_risk_metric1__v7);
            }
            if ( IncludeFillRiskMetric2V7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,5006,m_fill_risk_metric2__v7);
            }
            if ( IncludeFillRiskMetric3V7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,5007,m_fill_risk_metric3__v7);
            }
            if ( IncludeFillRiskMetric4V7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,5008,m_fill_risk_metric4__v7);
            }
            if ( IncludeFillRiskMetric5V7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,5009,m_fill_risk_metric5__v7);
            }
            if ( IncludeFillRiskMetric6V7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,5010,m_fill_risk_metric6__v7);
            }
            if ( IncludeFillRiskMetric7V7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,5011,m_fill_risk_metric7__v7);
            }
            if ( IncludeFillS08DnV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,5012,m_fill_s08_dn__v7);
            }
            if ( IncludeFillS06UpV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,5013,m_fill_s06_up__v7);
            }
            if ( IncludeFillS15DnV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,5014,m_fill_s15_dn__v7);
            }
            if ( IncludeFillS15UpV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,5015,m_fill_s15_up__v7);
            }
            if ( IncludeFillS50DnV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,5016,m_fill_s50_dn__v7);
            }
            if ( IncludeFillS50UpV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,5017,m_fill_s50_up__v7);
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
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_version = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_exec_status = static_cast<spiderrock::protobuf::api::ExecStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_exec_shape = static_cast<spiderrock::protobuf::api::ExecShape>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_package_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_parent_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_parent_version = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_base_parent_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_cl_ord_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_review_cl_ord_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_alt_fill_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_order_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_cross_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_leg_ref_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
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
                            m_risk_group_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_trigger_group_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_trigger_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_street_cl_ord_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_street_order_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 846: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_side_cl_ord_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 178: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_parent_shape = static_cast<spiderrock::protobuf::api::SpdrOrderShape>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::OptionKeyCodec::TagType) {
                            auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                            m_sec_key.setFromCodec(optionKey);
                        }
                        break;
                    }
                    case 184: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 843: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_origin_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 844: {
                        if (tagType == SRProtobufCPP::OptionKeyCodec::TagType) {
                            auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                            m_origin_sec_key.setFromCodec(optionKey);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 848: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_strategy_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 196: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_source = static_cast<spiderrock::protobuf::api::SpdrSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_grouping_code = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 809: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_core_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 810: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_sponsor_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_routing_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 811: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_engine_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_gateway_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 211: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_exec_role = static_cast<spiderrock::protobuf::api::ExecRole>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 833: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_brkr_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_brkr_mpid = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 834: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_brkr_mpid = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_brkr_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_brkr_cl_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 226: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_brkr_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 229: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_clearing_flip_type = static_cast<spiderrock::protobuf::api::FlipType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 232: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_clearing_flip_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_clearing_flip_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 238: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_clearing_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 241: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_clearing_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 244: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_orig_exec_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 247: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_last_exec_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 250: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_remote_text = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 253: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_order_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 256: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_order_status = static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 259: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_close_reason = static_cast<spiderrock::protobuf::api::SpdrCloseReason>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 262: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_fill_quantity = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 265: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_avg_fill_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 268: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_leg_fill_quantity = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 271: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_avg_leg_fill_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 274: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_leaves_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 277: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_type = static_cast<spiderrock::protobuf::api::PriceType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 280: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_child_shape = static_cast<spiderrock::protobuf::api::SpdrOrderShape>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 283: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_child_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 286: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_child_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 289: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_child_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 292: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_child_exch = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 845: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_child_ex_dest = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 298: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_child_exec_broker = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 301: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_child_is_directed = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 304: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_child_iso_sweep = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 307: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_child_order_handling = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 310: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_child_algo_handler = static_cast<spiderrock::protobuf::api::ChildHandler>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 313: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_child_create_reason = static_cast<spiderrock::protobuf::api::ChildCreateReason>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 316: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_child_cancel_reason = static_cast<spiderrock::protobuf::api::ChildCancelReason>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 319: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_child_maker_taker = static_cast<spiderrock::protobuf::api::MakerTaker>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 322: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_child_ubid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 325: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_child_uask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 328: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_child_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 331: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_child_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 334: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_child_mark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 337: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_child_fair_width = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 340: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_child_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 343: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_child_prob = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 346: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_child_limit_ref_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 349: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_child_limit_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 352: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_child_vol_atm = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 355: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_child_pos_type = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 358: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_child_firm_opt_position = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 361: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_child_ssale_flag = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 364: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_child_firm_stk_position = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 367: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_child_firm_open_orders = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 370: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_child_locate_quan = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 373: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_child_locate_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 376: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_child_locate_pool = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 379: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_child_mkt_stance = static_cast<spiderrock::protobuf::api::MktStance>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 382: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_child_cxl_attempted = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 385: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_child_cxl_fill_latency = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 388: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_child_method = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 391: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_child_source = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 394: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_firm_type = static_cast<spiderrock::protobuf::api::FirmType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 397: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_pri_agg_group = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 400: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_sec_agg_group = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 403: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_directed_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 406: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_comm_paying = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 409: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_fill_transact_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 412: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_ts = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 415: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_fill_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 418: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_exch = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 421: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_exec_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 424: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_exec_ref_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 427: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_fill_leg_ref_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 430: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fill_leg_ratio = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 433: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_exch_fee = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 436: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_market = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 439: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 442: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fill_quantity = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 445: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_report_detail = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 448: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 451: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 454: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_mark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 457: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_fair_width = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 460: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_umark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 463: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_ubid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 466: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_uask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 469: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fill_ubid_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 472: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fill_uask_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 475: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_vol_atm = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 478: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_mark1_m = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 481: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_mark10_m = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 484: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_bid1_m = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 487: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_ask1_m = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 490: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_bid10_m = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 493: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_ask10_m = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 496: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_umark1_m = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 499: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_umark10_m = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 502: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_vol_atm1_m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 505: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_vol_atm10_m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 508: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_fill_state1_m = static_cast<spiderrock::protobuf::api::FillMarkState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 511: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_fill_state10_m = static_cast<spiderrock::protobuf::api::FillMarkState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 514: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 517: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_vol_s = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 520: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_prob = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 523: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_limit_ref_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 526: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_limit_ref_sdiv = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 529: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_limit_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 532: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 535: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 538: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 541: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_th = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 547: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_ve_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 550: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_beta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 812: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 813: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 814: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_nvalue = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 815: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 816: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_ddelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 817: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_rm1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 818: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_rm2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 819: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_rm3 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 820: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_rm4 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 821: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_rm5 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 822: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_rm6 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 823: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_rm7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 824: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_udn_vdn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 825: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_udn_vup = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 826: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_uup_vdn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 827: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_uup_vup = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 828: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_u15_dn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 829: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_u15_up = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 830: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_u50_dn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 831: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_u50_up = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 604: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_brkr_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 607: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_routing_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 835: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_mm_pref_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 836: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mm_credit = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 610: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_risk_code = static_cast<spiderrock::protobuf::api::RiskCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 613: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_billing_sec_type = static_cast<spiderrock::protobuf::api::BillingSecType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 616: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_billing_category = static_cast<spiderrock::protobuf::api::BillingCategory>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 619: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_spdr_liquidity_tag = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 622: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exch_liquidity_tag = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 625: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_exch_detail = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 849: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cross_side = static_cast<spiderrock::protobuf::api::CrossSide>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 847: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_cross_breakup_fill = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 628: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_last_capacity = static_cast<spiderrock::protobuf::api::OrderCapacity>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 631: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exch_firm_type = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 634: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_ext_exec_broker = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 637: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_relationship_type = static_cast<spiderrock::protobuf::api::RelationshipType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 640: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cl_arrive_mark = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 643: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_parent_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 646: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_parent_order_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 649: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_parent_ubid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 652: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_parent_uask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 655: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_parent_umark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 658: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_parent_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 661: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_parent_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 664: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_parent_mark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 667: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_parent_fair_width = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 670: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_parent_surf_vol = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 673: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_parent_limit_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 676: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_parent_limit_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 679: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_parent_limit_ref_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 682: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_parent_theo_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 685: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_parent_theo_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 688: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_parent_pos_type = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 691: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_parent_ssale_flag = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 832: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_notice_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 697: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_make_exchanges = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 700: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_public_size = static_cast<spiderrock::protobuf::api::PublicSizeHandling>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 703: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_overlap_cxl_repl = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 706: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_progress_rule = static_cast<spiderrock::protobuf::api::ProgressRule>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 709: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_exch_mask_enabled = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 712: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_time_in_force = static_cast<spiderrock::protobuf::api::TimeInForce>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 715: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_parent_order_handling = static_cast<spiderrock::protobuf::api::ParentOrderHandling>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 718: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_parent_balance_handling = static_cast<spiderrock::protobuf::api::ParentBalanceHandling>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 721: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_order_limit_type = static_cast<spiderrock::protobuf::api::SpdrLimitType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 724: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_order_limit_class = static_cast<spiderrock::protobuf::api::SpdrLimitClass>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 727: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_take_reach_rule = static_cast<spiderrock::protobuf::api::ReachRule>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 730: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_override_code = static_cast<spiderrock::protobuf::api::OverrideCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 733: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_alpha_type = static_cast<spiderrock::protobuf::api::AlphaType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 736: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_parent_strategy = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 739: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 742: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auto_hedge = static_cast<spiderrock::protobuf::api::AutoHedge>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 745: {
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_hedge_sec_key.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 748: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 751: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_hedge_beta_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 754: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_scope = static_cast<spiderrock::protobuf::api::HedgeScope>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 757: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_data1 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 760: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_data2 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 763: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 766: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_underliers_per_cn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 769: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_underlier_type = static_cast<spiderrock::protobuf::api::UnderlierType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 772: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_tick_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 775: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_point_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 778: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_point_currency = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 781: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_prc_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 784: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_tick_size = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 787: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_format = static_cast<spiderrock::protobuf::api::PriceFormat>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 790: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_u_price_format = static_cast<spiderrock::protobuf::api::PriceFormat>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 837: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_response_type = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 838: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_nbbo_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 839: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_nbbo_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 840: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_child_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 841: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_exch_bid_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 842: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_exch_ask_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 793: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_live_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 796: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_live_mark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 799: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_src_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 802: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_sgw_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 805: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_eng_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 808: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 5000: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_data_center__v7 = static_cast<spiderrock::protobuf::api::SRDataCenter_V7>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5001: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_face_side__v7 = static_cast<spiderrock::protobuf::api::FaceSide>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5002: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_face_shape__v7 = static_cast<spiderrock::protobuf::api::FaceShape>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5003: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_child_locate_source__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5004: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_pr__v7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 5005: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_risk_metric1__v7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 5006: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_risk_metric2__v7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 5007: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_risk_metric3__v7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 5008: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_risk_metric4__v7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 5009: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_risk_metric5__v7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 5010: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_risk_metric6__v7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 5011: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_risk_metric7__v7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 5012: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_s08_dn__v7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 5013: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_s06_up__v7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 5014: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_s15_dn__v7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 5015: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_s15_up__v7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 5016: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_s50_dn__v7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 5017: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_s50_up__v7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::_meta>() const { return SpdrParentExecution::_meta{ m__meta}; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::pkey>() const { return SpdrParentExecution::pkey{ m_pkey}; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::sys_realm>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysRealm>( m_sys_realm)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::sys_environment>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_sys_environment)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::run_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>( m_run_status)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::version>() const { return m_version; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::exec_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecStatus>( m_exec_status)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::exec_shape>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecShape>( m_exec_shape)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::package_id>() const { return m_package_id; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::parent_number>() const { return m_parent_number; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::parent_version>() const { return m_parent_version; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::base_parent_number>() const { return m_base_parent_number; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::cl_ord_id>() const { return m_cl_ord_id; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::review_cl_ord_id>() const { return m_review_cl_ord_id; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::alt_fill_id>() const { return m_alt_fill_id; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::alt_order_id>() const { return m_alt_order_id; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::alt_cross_id>() const { return m_alt_cross_id; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::alt_leg_ref_id>() const { return m_alt_leg_ref_id; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::alt_accnt>() const { return m_alt_accnt; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::alt_user_name>() const { return m_alt_user_name; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::src_routing_code>() const { return m_src_routing_code; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::risk_group_id>() const { return m_risk_group_id; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::trigger_group_id>() const { return m_trigger_group_id; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::trigger_timestamp>() const { return m_trigger_timestamp; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::street_cl_ord_id>() const { return m_street_cl_ord_id; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::street_order_id>() const { return m_street_order_id; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::side_cl_ord_id>() const { return m_side_cl_ord_id; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::parent_shape>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>( m_parent_shape)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::sec_key>() const { return SpdrParentExecution::sec_key{ m_sec_key}; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_sec_type)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::ticker>() const { return SpdrParentExecution::ticker{ m_ticker}; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::origin_ticker>() const { return SpdrParentExecution::origin_ticker{ m_origin_ticker}; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::origin_sec_key>() const { return SpdrParentExecution::origin_sec_key{ m_origin_sec_key}; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::accnt>() const { return m_accnt; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::client_firm>() const { return m_client_firm; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::strategy_accnt>() const { return m_strategy_accnt; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::spdr_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>( m_spdr_source)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::grouping_code>() const { return m_grouping_code; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::core_client_firm>() const { return m_core_client_firm; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::sponsor_client_firm>() const { return m_sponsor_client_firm; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::routing_code>() const { return m_routing_code; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::engine_name>() const { return m_engine_name; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::gateway_name>() const { return m_gateway_name; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::exec_role>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecRole>( m_exec_role)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::exec_brkr_code>() const { return m_exec_brkr_code; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::exec_brkr_mpid>() const { return m_exec_brkr_mpid; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::alt_brkr_mpid>() const { return m_alt_brkr_mpid; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::exec_brkr_accnt>() const { return m_exec_brkr_accnt; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::exec_brkr_cl_firm>() const { return m_exec_brkr_cl_firm; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::exec_brkr_user_name>() const { return m_exec_brkr_user_name; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::clearing_flip_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlipType>( m_clearing_flip_type)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::clearing_flip_firm>() const { return m_clearing_flip_firm; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::clearing_flip_accnt>() const { return m_clearing_flip_accnt; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::clearing_firm>() const { return m_clearing_firm; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::clearing_accnt>() const { return m_clearing_accnt; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::orig_exec_id>() const { return m_orig_exec_id; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::last_exec_id>() const { return m_last_exec_id; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::remote_text>() const { return m_remote_text; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::order_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_order_side)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::spdr_order_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>( m_spdr_order_status)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::spdr_close_reason>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrCloseReason>( m_spdr_close_reason)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::cum_fill_quantity>() const { return m_cum_fill_quantity; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::avg_fill_price>() const { return m_avg_fill_price; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::cum_leg_fill_quantity>() const { return m_cum_leg_fill_quantity; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::avg_leg_fill_price>() const { return m_avg_leg_fill_price; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::leaves_qty>() const { return m_leaves_qty; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::price_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceType>( m_price_type)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_shape>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>( m_child_shape)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_size>() const { return m_child_size; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_price>() const { return m_child_price; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_dttm>() const { return m_child_dttm; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_exch>() const { return m_child_exch; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_ex_dest>() const { return m_child_ex_dest; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_exec_broker>() const { return m_child_exec_broker; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_is_directed>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_child_is_directed)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_iso_sweep>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_child_iso_sweep)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_order_handling>() const { return m_child_order_handling; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_algo_handler>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildHandler>( m_child_algo_handler)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_create_reason>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildCreateReason>( m_child_create_reason)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_cancel_reason>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildCancelReason>( m_child_cancel_reason)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_maker_taker>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MakerTaker>( m_child_maker_taker)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_ubid>() const { return m_child_ubid; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_uask>() const { return m_child_uask; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_bid>() const { return m_child_bid; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_ask>() const { return m_child_ask; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_mark>() const { return m_child_mark; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_fair_width>() const { return m_child_fair_width; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_vol>() const { return m_child_vol; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_prob>() const { return m_child_prob; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_limit_ref_uprc>() const { return m_child_limit_ref_uprc; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_limit_prc>() const { return m_child_limit_prc; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_vol_atm>() const { return m_child_vol_atm; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_pos_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>( m_child_pos_type)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_firm_opt_position>() const { return m_child_firm_opt_position; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_ssale_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>( m_child_ssale_flag)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_firm_stk_position>() const { return m_child_firm_stk_position; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_firm_open_orders>() const { return m_child_firm_open_orders; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_locate_quan>() const { return m_child_locate_quan; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_locate_firm>() const { return m_child_locate_firm; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_locate_pool>() const { return m_child_locate_pool; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_mkt_stance>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktStance>( m_child_mkt_stance)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_cxl_attempted>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_child_cxl_attempted)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_cxl_fill_latency>() const { return m_child_cxl_fill_latency; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_method>() const { return m_child_method; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_source>() const { return m_child_source; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::firm_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>( m_firm_type)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::pri_agg_group>() const { return m_pri_agg_group; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::sec_agg_group>() const { return m_sec_agg_group; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::directed_client_firm>() const { return m_directed_client_firm; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::is_comm_paying>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_comm_paying)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_transact_dttm>() const { return m_fill_transact_dttm; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_ts>() const { return m_fill_ts; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_dttm>() const { return m_fill_dttm; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_exch>() const { return m_fill_exch; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_exec_id>() const { return m_fill_exec_id; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_exec_ref_id>() const { return m_fill_exec_ref_id; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_leg_ref_id>() const { return m_fill_leg_ref_id; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_leg_ratio>() const { return m_fill_leg_ratio; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_exch_fee>() const { return m_fill_exch_fee; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_market>() const { return m_fill_market; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_price>() const { return m_fill_price; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_quantity>() const { return m_fill_quantity; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_report_detail>() const { return m_fill_report_detail; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_bid>() const { return m_fill_bid; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_ask>() const { return m_fill_ask; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_mark>() const { return m_fill_mark; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_fair_width>() const { return m_fill_fair_width; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_umark>() const { return m_fill_umark; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_ubid>() const { return m_fill_ubid; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_uask>() const { return m_fill_uask; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_ubid_sz>() const { return m_fill_ubid_sz; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_uask_sz>() const { return m_fill_uask_sz; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_vol_atm>() const { return m_fill_vol_atm; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_mark1_m>() const { return m_fill_mark1_m; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_mark10_m>() const { return m_fill_mark10_m; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_bid1_m>() const { return m_fill_bid1_m; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_ask1_m>() const { return m_fill_ask1_m; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_bid10_m>() const { return m_fill_bid10_m; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_ask10_m>() const { return m_fill_ask10_m; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_umark1_m>() const { return m_fill_umark1_m; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_umark10_m>() const { return m_fill_umark10_m; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_vol_atm1_m>() const { return m_fill_vol_atm1_m; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_vol_atm10_m>() const { return m_fill_vol_atm10_m; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_state1_m>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FillMarkState>( m_fill_state1_m)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_state10_m>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FillMarkState>( m_fill_state10_m)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_vol>() const { return m_fill_vol; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_vol_s>() const { return m_fill_vol_s; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_prob>() const { return m_fill_prob; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_limit_ref_uprc>() const { return m_fill_limit_ref_uprc; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_limit_ref_sdiv>() const { return m_fill_limit_ref_sdiv; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_limit_prc>() const { return m_fill_limit_prc; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_ve>() const { return m_fill_ve; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_ga>() const { return m_fill_ga; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_de>() const { return m_fill_de; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_th>() const { return m_fill_th; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_ve_ratio>() const { return m_fill_ve_ratio; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_beta>() const { return m_fill_beta; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::risk_vega>() const { return m_risk_vega; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::risk_wt_vega>() const { return m_risk_wt_vega; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::risk_nvalue>() const { return m_risk_nvalue; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::risk_delta>() const { return m_risk_delta; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::risk_ddelta>() const { return m_risk_ddelta; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::risk_rm1>() const { return m_risk_rm1; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::risk_rm2>() const { return m_risk_rm2; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::risk_rm3>() const { return m_risk_rm3; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::risk_rm4>() const { return m_risk_rm4; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::risk_rm5>() const { return m_risk_rm5; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::risk_rm6>() const { return m_risk_rm6; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::risk_rm7>() const { return m_risk_rm7; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::margin_udn_vdn>() const { return m_margin_udn_vdn; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::margin_udn_vup>() const { return m_margin_udn_vup; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::margin_uup_vdn>() const { return m_margin_uup_vdn; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::margin_uup_vup>() const { return m_margin_uup_vup; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::risk_u15_dn>() const { return m_risk_u15_dn; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::risk_u15_up>() const { return m_risk_u15_up; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::risk_u50_dn>() const { return m_risk_u50_dn; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::risk_u50_up>() const { return m_risk_u50_up; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_brkr_rate>() const { return m_fill_brkr_rate; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_routing_rate>() const { return m_fill_routing_rate; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::mm_pref_code>() const { return m_mm_pref_code; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::mm_credit>() const { return m_mm_credit; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::risk_code>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskCode>( m_risk_code)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::billing_sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BillingSecType>( m_billing_sec_type)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::billing_category>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BillingCategory>( m_billing_category)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::spdr_liquidity_tag>() const { return m_spdr_liquidity_tag; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::exch_liquidity_tag>() const { return m_exch_liquidity_tag; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_exch_detail>() const { return m_fill_exch_detail; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::cross_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CrossSide>( m_cross_side)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::is_cross_breakup_fill>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_cross_breakup_fill)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::last_capacity>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCapacity>( m_last_capacity)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::exch_firm_type>() const { return m_exch_firm_type; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::ext_exec_broker>() const { return m_ext_exec_broker; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::relationship_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RelationshipType>( m_relationship_type)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::cl_arrive_mark>() const { return m_cl_arrive_mark; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::parent_dttm>() const { return m_parent_dttm; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::parent_order_size>() const { return m_parent_order_size; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::parent_ubid>() const { return m_parent_ubid; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::parent_uask>() const { return m_parent_uask; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::parent_umark>() const { return m_parent_umark; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::parent_bid>() const { return m_parent_bid; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::parent_ask>() const { return m_parent_ask; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::parent_mark>() const { return m_parent_mark; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::parent_fair_width>() const { return m_parent_fair_width; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::parent_surf_vol>() const { return m_parent_surf_vol; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::parent_limit_vol>() const { return m_parent_limit_vol; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::parent_limit_prc>() const { return m_parent_limit_prc; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::parent_limit_ref_uprc>() const { return m_parent_limit_ref_uprc; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::parent_theo_vol>() const { return m_parent_theo_vol; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::parent_theo_prc>() const { return m_parent_theo_prc; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::parent_pos_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>( m_parent_pos_type)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::parent_ssale_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>( m_parent_ssale_flag)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::notice_number>() const { return m_notice_number; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::num_make_exchanges>() const { return m_num_make_exchanges; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::public_size>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PublicSizeHandling>( m_public_size)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::can_overlap_cxl_repl>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_overlap_cxl_repl)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::progress_rule>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProgressRule>( m_progress_rule)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::exch_mask_enabled>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_exch_mask_enabled)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::time_in_force>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TimeInForce>( m_time_in_force)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::parent_order_handling>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentOrderHandling>( m_parent_order_handling)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::parent_balance_handling>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentBalanceHandling>( m_parent_balance_handling)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::order_limit_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitType>( m_order_limit_type)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::order_limit_class>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>( m_order_limit_class)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::take_reach_rule>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ReachRule>( m_take_reach_rule)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::override_code>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OverrideCode>( m_override_code)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::alpha_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>( m_alpha_type)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::parent_strategy>() const { return m_parent_strategy; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::user_name>() const { return m_user_name; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::auto_hedge>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>( m_auto_hedge)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::hedge_sec_key>() const { return SpdrParentExecution::hedge_sec_key{ m_hedge_sec_key}; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::hedge_sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_hedge_sec_type)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::hedge_beta_ratio>() const { return m_hedge_beta_ratio; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::hedge_scope>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeScope>( m_hedge_scope)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::user_data1>() const { return m_user_data1; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::user_data2>() const { return m_user_data2; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::years>() const { return m_years; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::underliers_per_cn>() const { return m_underliers_per_cn; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::underlier_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>( m_underlier_type)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::tick_value>() const { return m_tick_value; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::point_value>() const { return m_point_value; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::point_currency>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>( m_point_currency)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::u_prc_ratio>() const { return m_u_prc_ratio; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::min_tick_size>() const { return m_min_tick_size; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::price_format>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>( m_price_format)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::u_price_format>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>( m_u_price_format)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::response_type>() const { return m_response_type; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::nbbo_bid>() const { return m_nbbo_bid; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::nbbo_ask>() const { return m_nbbo_ask; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_uprc>() const { return m_child_uprc; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::exch_bid_sz>() const { return m_exch_bid_sz; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::exch_ask_sz>() const { return m_exch_ask_sz; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::live_uprc>() const { return m_live_uprc; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::live_mark>() const { return m_live_mark; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::src_timestamp>() const { return m_src_timestamp; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::sgw_timestamp>() const { return m_sgw_timestamp; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::eng_timestamp>() const { return m_eng_timestamp; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::data_center__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SRDataCenter_V7>( m_data_center__v7)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::face_side__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FaceSide>( m_face_side__v7)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::face_shape__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FaceShape>( m_face_shape__v7)); }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::child_locate_source__v7>() const { return m_child_locate_source__v7; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_pr__v7>() const { return m_fill_pr__v7; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_risk_metric1__v7>() const { return m_fill_risk_metric1__v7; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_risk_metric2__v7>() const { return m_fill_risk_metric2__v7; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_risk_metric3__v7>() const { return m_fill_risk_metric3__v7; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_risk_metric4__v7>() const { return m_fill_risk_metric4__v7; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_risk_metric5__v7>() const { return m_fill_risk_metric5__v7; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_risk_metric6__v7>() const { return m_fill_risk_metric6__v7; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_risk_metric7__v7>() const { return m_fill_risk_metric7__v7; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_s08_dn__v7>() const { return m_fill_s08_dn__v7; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_s06_up__v7>() const { return m_fill_s06_up__v7; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_s15_dn__v7>() const { return m_fill_s15_dn__v7; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_s15_up__v7>() const { return m_fill_s15_up__v7; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_s50_dn__v7>() const { return m_fill_s50_dn__v7; }
    template<> inline const auto SpdrParentExecution::get<SpdrParentExecution::fill_s50_up__v7>() const { return m_fill_s50_up__v7; }
    template<> inline const auto SpdrParentExecution_PKey::get<SpdrParentExecution_PKey::fill_number>() const { return m_fill_number; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrParentExecution_PKey& m) {
        o << "\"fill_number\":" << m.get<SpdrParentExecution_PKey::fill_number>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrParentExecution& m) {
        o << "\"_meta\":{" << m.get<SpdrParentExecution::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrParentExecution::pkey>() << "}";
        o << ",\"sys_realm\":" << (int64_t)m.get<SpdrParentExecution::sys_realm>();
        o << ",\"sys_environment\":" << (int64_t)m.get<SpdrParentExecution::sys_environment>();
        o << ",\"run_status\":" << (int64_t)m.get<SpdrParentExecution::run_status>();
        o << ",\"version\":" << m.get<SpdrParentExecution::version>();
        o << ",\"exec_status\":" << (int64_t)m.get<SpdrParentExecution::exec_status>();
        o << ",\"exec_shape\":" << (int64_t)m.get<SpdrParentExecution::exec_shape>();
        o << ",\"package_id\":" << m.get<SpdrParentExecution::package_id>();
        o << ",\"parent_number\":" << m.get<SpdrParentExecution::parent_number>();
        o << ",\"parent_version\":" << m.get<SpdrParentExecution::parent_version>();
        o << ",\"base_parent_number\":" << m.get<SpdrParentExecution::base_parent_number>();
        o << ",\"cl_ord_id\":" << m.get<SpdrParentExecution::cl_ord_id>();
        o << ",\"review_cl_ord_id\":\"" << m.get<SpdrParentExecution::review_cl_ord_id>() << "\"";
        o << ",\"alt_fill_id\":" << m.get<SpdrParentExecution::alt_fill_id>();
        o << ",\"alt_order_id\":\"" << m.get<SpdrParentExecution::alt_order_id>() << "\"";
        o << ",\"alt_cross_id\":\"" << m.get<SpdrParentExecution::alt_cross_id>() << "\"";
        o << ",\"alt_leg_ref_id\":\"" << m.get<SpdrParentExecution::alt_leg_ref_id>() << "\"";
        o << ",\"alt_accnt\":\"" << m.get<SpdrParentExecution::alt_accnt>() << "\"";
        o << ",\"alt_user_name\":\"" << m.get<SpdrParentExecution::alt_user_name>() << "\"";
        o << ",\"src_routing_code\":\"" << m.get<SpdrParentExecution::src_routing_code>() << "\"";
        o << ",\"risk_group_id\":" << m.get<SpdrParentExecution::risk_group_id>();
        o << ",\"trigger_group_id\":" << m.get<SpdrParentExecution::trigger_group_id>();
        o << ",\"trigger_timestamp\":" << m.get<SpdrParentExecution::trigger_timestamp>();
        o << ",\"street_cl_ord_id\":\"" << m.get<SpdrParentExecution::street_cl_ord_id>() << "\"";
        o << ",\"street_order_id\":\"" << m.get<SpdrParentExecution::street_order_id>() << "\"";
        o << ",\"side_cl_ord_id\":" << m.get<SpdrParentExecution::side_cl_ord_id>();
        o << ",\"parent_shape\":" << (int64_t)m.get<SpdrParentExecution::parent_shape>();
        o << ",\"sec_key\":{" << m.get<SpdrParentExecution::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<SpdrParentExecution::sec_type>();
        o << ",\"ticker\":{" << m.get<SpdrParentExecution::ticker>() << "}";
        o << ",\"origin_ticker\":{" << m.get<SpdrParentExecution::origin_ticker>() << "}";
        o << ",\"origin_sec_key\":{" << m.get<SpdrParentExecution::origin_sec_key>() << "}";
        o << ",\"accnt\":\"" << m.get<SpdrParentExecution::accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<SpdrParentExecution::client_firm>() << "\"";
        o << ",\"strategy_accnt\":\"" << m.get<SpdrParentExecution::strategy_accnt>() << "\"";
        o << ",\"spdr_source\":" << (int64_t)m.get<SpdrParentExecution::spdr_source>();
        o << ",\"grouping_code\":" << m.get<SpdrParentExecution::grouping_code>();
        o << ",\"core_client_firm\":\"" << m.get<SpdrParentExecution::core_client_firm>() << "\"";
        o << ",\"sponsor_client_firm\":\"" << m.get<SpdrParentExecution::sponsor_client_firm>() << "\"";
        o << ",\"routing_code\":\"" << m.get<SpdrParentExecution::routing_code>() << "\"";
        o << ",\"engine_name\":\"" << m.get<SpdrParentExecution::engine_name>() << "\"";
        o << ",\"gateway_name\":\"" << m.get<SpdrParentExecution::gateway_name>() << "\"";
        o << ",\"exec_role\":" << (int64_t)m.get<SpdrParentExecution::exec_role>();
        o << ",\"exec_brkr_code\":\"" << m.get<SpdrParentExecution::exec_brkr_code>() << "\"";
        o << ",\"exec_brkr_mpid\":\"" << m.get<SpdrParentExecution::exec_brkr_mpid>() << "\"";
        o << ",\"alt_brkr_mpid\":\"" << m.get<SpdrParentExecution::alt_brkr_mpid>() << "\"";
        o << ",\"exec_brkr_accnt\":\"" << m.get<SpdrParentExecution::exec_brkr_accnt>() << "\"";
        o << ",\"exec_brkr_cl_firm\":\"" << m.get<SpdrParentExecution::exec_brkr_cl_firm>() << "\"";
        o << ",\"exec_brkr_user_name\":\"" << m.get<SpdrParentExecution::exec_brkr_user_name>() << "\"";
        o << ",\"clearing_flip_type\":" << (int64_t)m.get<SpdrParentExecution::clearing_flip_type>();
        o << ",\"clearing_flip_firm\":\"" << m.get<SpdrParentExecution::clearing_flip_firm>() << "\"";
        o << ",\"clearing_flip_accnt\":\"" << m.get<SpdrParentExecution::clearing_flip_accnt>() << "\"";
        o << ",\"clearing_firm\":\"" << m.get<SpdrParentExecution::clearing_firm>() << "\"";
        o << ",\"clearing_accnt\":\"" << m.get<SpdrParentExecution::clearing_accnt>() << "\"";
        o << ",\"orig_exec_id\":\"" << m.get<SpdrParentExecution::orig_exec_id>() << "\"";
        o << ",\"last_exec_id\":\"" << m.get<SpdrParentExecution::last_exec_id>() << "\"";
        o << ",\"remote_text\":\"" << m.get<SpdrParentExecution::remote_text>() << "\"";
        o << ",\"order_side\":" << (int64_t)m.get<SpdrParentExecution::order_side>();
        o << ",\"spdr_order_status\":" << (int64_t)m.get<SpdrParentExecution::spdr_order_status>();
        o << ",\"spdr_close_reason\":" << (int64_t)m.get<SpdrParentExecution::spdr_close_reason>();
        o << ",\"cum_fill_quantity\":" << m.get<SpdrParentExecution::cum_fill_quantity>();
        o << ",\"avg_fill_price\":" << m.get<SpdrParentExecution::avg_fill_price>();
        o << ",\"cum_leg_fill_quantity\":" << m.get<SpdrParentExecution::cum_leg_fill_quantity>();
        o << ",\"avg_leg_fill_price\":" << m.get<SpdrParentExecution::avg_leg_fill_price>();
        o << ",\"leaves_qty\":" << m.get<SpdrParentExecution::leaves_qty>();
        o << ",\"price_type\":" << (int64_t)m.get<SpdrParentExecution::price_type>();
        o << ",\"child_shape\":" << (int64_t)m.get<SpdrParentExecution::child_shape>();
        o << ",\"child_size\":" << m.get<SpdrParentExecution::child_size>();
        o << ",\"child_price\":" << m.get<SpdrParentExecution::child_price>();
        {
            std::time_t tt = m.get<SpdrParentExecution::child_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"child_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"child_exch\":\"" << m.get<SpdrParentExecution::child_exch>() << "\"";
        o << ",\"child_ex_dest\":\"" << m.get<SpdrParentExecution::child_ex_dest>() << "\"";
        o << ",\"child_exec_broker\":\"" << m.get<SpdrParentExecution::child_exec_broker>() << "\"";
        o << ",\"child_is_directed\":" << (int64_t)m.get<SpdrParentExecution::child_is_directed>();
        o << ",\"child_iso_sweep\":" << (int64_t)m.get<SpdrParentExecution::child_iso_sweep>();
        o << ",\"child_order_handling\":\"" << m.get<SpdrParentExecution::child_order_handling>() << "\"";
        o << ",\"child_algo_handler\":" << (int64_t)m.get<SpdrParentExecution::child_algo_handler>();
        o << ",\"child_create_reason\":" << (int64_t)m.get<SpdrParentExecution::child_create_reason>();
        o << ",\"child_cancel_reason\":" << (int64_t)m.get<SpdrParentExecution::child_cancel_reason>();
        o << ",\"child_maker_taker\":" << (int64_t)m.get<SpdrParentExecution::child_maker_taker>();
        o << ",\"child_ubid\":" << m.get<SpdrParentExecution::child_ubid>();
        o << ",\"child_uask\":" << m.get<SpdrParentExecution::child_uask>();
        o << ",\"child_bid\":" << m.get<SpdrParentExecution::child_bid>();
        o << ",\"child_ask\":" << m.get<SpdrParentExecution::child_ask>();
        o << ",\"child_mark\":" << m.get<SpdrParentExecution::child_mark>();
        o << ",\"child_fair_width\":" << m.get<SpdrParentExecution::child_fair_width>();
        o << ",\"child_vol\":" << m.get<SpdrParentExecution::child_vol>();
        o << ",\"child_prob\":" << m.get<SpdrParentExecution::child_prob>();
        o << ",\"child_limit_ref_uprc\":" << m.get<SpdrParentExecution::child_limit_ref_uprc>();
        o << ",\"child_limit_prc\":" << m.get<SpdrParentExecution::child_limit_prc>();
        o << ",\"child_vol_atm\":" << m.get<SpdrParentExecution::child_vol_atm>();
        o << ",\"child_pos_type\":" << (int64_t)m.get<SpdrParentExecution::child_pos_type>();
        o << ",\"child_firm_opt_position\":" << m.get<SpdrParentExecution::child_firm_opt_position>();
        o << ",\"child_ssale_flag\":" << (int64_t)m.get<SpdrParentExecution::child_ssale_flag>();
        o << ",\"child_firm_stk_position\":" << m.get<SpdrParentExecution::child_firm_stk_position>();
        o << ",\"child_firm_open_orders\":" << m.get<SpdrParentExecution::child_firm_open_orders>();
        o << ",\"child_locate_quan\":" << m.get<SpdrParentExecution::child_locate_quan>();
        o << ",\"child_locate_firm\":\"" << m.get<SpdrParentExecution::child_locate_firm>() << "\"";
        o << ",\"child_locate_pool\":\"" << m.get<SpdrParentExecution::child_locate_pool>() << "\"";
        o << ",\"child_mkt_stance\":" << (int64_t)m.get<SpdrParentExecution::child_mkt_stance>();
        o << ",\"child_cxl_attempted\":" << (int64_t)m.get<SpdrParentExecution::child_cxl_attempted>();
        o << ",\"child_cxl_fill_latency\":" << m.get<SpdrParentExecution::child_cxl_fill_latency>();
        o << ",\"child_method\":\"" << m.get<SpdrParentExecution::child_method>() << "\"";
        o << ",\"child_source\":\"" << m.get<SpdrParentExecution::child_source>() << "\"";
        o << ",\"firm_type\":" << (int64_t)m.get<SpdrParentExecution::firm_type>();
        o << ",\"pri_agg_group\":\"" << m.get<SpdrParentExecution::pri_agg_group>() << "\"";
        o << ",\"sec_agg_group\":\"" << m.get<SpdrParentExecution::sec_agg_group>() << "\"";
        o << ",\"directed_client_firm\":\"" << m.get<SpdrParentExecution::directed_client_firm>() << "\"";
        o << ",\"is_comm_paying\":" << (int64_t)m.get<SpdrParentExecution::is_comm_paying>();
        {
            std::time_t tt = m.get<SpdrParentExecution::fill_transact_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"fill_transact_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"fill_ts\":" << m.get<SpdrParentExecution::fill_ts>();
        {
            std::time_t tt = m.get<SpdrParentExecution::fill_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"fill_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"fill_exch\":\"" << m.get<SpdrParentExecution::fill_exch>() << "\"";
        o << ",\"fill_exec_id\":\"" << m.get<SpdrParentExecution::fill_exec_id>() << "\"";
        o << ",\"fill_exec_ref_id\":\"" << m.get<SpdrParentExecution::fill_exec_ref_id>() << "\"";
        o << ",\"fill_leg_ref_id\":" << m.get<SpdrParentExecution::fill_leg_ref_id>();
        o << ",\"fill_leg_ratio\":" << m.get<SpdrParentExecution::fill_leg_ratio>();
        o << ",\"fill_exch_fee\":" << m.get<SpdrParentExecution::fill_exch_fee>();
        o << ",\"fill_market\":\"" << m.get<SpdrParentExecution::fill_market>() << "\"";
        o << ",\"fill_price\":" << m.get<SpdrParentExecution::fill_price>();
        o << ",\"fill_quantity\":" << m.get<SpdrParentExecution::fill_quantity>();
        o << ",\"fill_report_detail\":\"" << m.get<SpdrParentExecution::fill_report_detail>() << "\"";
        o << ",\"fill_bid\":" << m.get<SpdrParentExecution::fill_bid>();
        o << ",\"fill_ask\":" << m.get<SpdrParentExecution::fill_ask>();
        o << ",\"fill_mark\":" << m.get<SpdrParentExecution::fill_mark>();
        o << ",\"fill_fair_width\":" << m.get<SpdrParentExecution::fill_fair_width>();
        o << ",\"fill_umark\":" << m.get<SpdrParentExecution::fill_umark>();
        o << ",\"fill_ubid\":" << m.get<SpdrParentExecution::fill_ubid>();
        o << ",\"fill_uask\":" << m.get<SpdrParentExecution::fill_uask>();
        o << ",\"fill_ubid_sz\":" << m.get<SpdrParentExecution::fill_ubid_sz>();
        o << ",\"fill_uask_sz\":" << m.get<SpdrParentExecution::fill_uask_sz>();
        o << ",\"fill_vol_atm\":" << m.get<SpdrParentExecution::fill_vol_atm>();
        o << ",\"fill_mark1_m\":" << m.get<SpdrParentExecution::fill_mark1_m>();
        o << ",\"fill_mark10_m\":" << m.get<SpdrParentExecution::fill_mark10_m>();
        o << ",\"fill_bid1_m\":" << m.get<SpdrParentExecution::fill_bid1_m>();
        o << ",\"fill_ask1_m\":" << m.get<SpdrParentExecution::fill_ask1_m>();
        o << ",\"fill_bid10_m\":" << m.get<SpdrParentExecution::fill_bid10_m>();
        o << ",\"fill_ask10_m\":" << m.get<SpdrParentExecution::fill_ask10_m>();
        o << ",\"fill_umark1_m\":" << m.get<SpdrParentExecution::fill_umark1_m>();
        o << ",\"fill_umark10_m\":" << m.get<SpdrParentExecution::fill_umark10_m>();
        o << ",\"fill_vol_atm1_m\":" << m.get<SpdrParentExecution::fill_vol_atm1_m>();
        o << ",\"fill_vol_atm10_m\":" << m.get<SpdrParentExecution::fill_vol_atm10_m>();
        o << ",\"fill_state1_m\":" << (int64_t)m.get<SpdrParentExecution::fill_state1_m>();
        o << ",\"fill_state10_m\":" << (int64_t)m.get<SpdrParentExecution::fill_state10_m>();
        o << ",\"fill_vol\":" << m.get<SpdrParentExecution::fill_vol>();
        o << ",\"fill_vol_s\":" << m.get<SpdrParentExecution::fill_vol_s>();
        o << ",\"fill_prob\":" << m.get<SpdrParentExecution::fill_prob>();
        o << ",\"fill_limit_ref_uprc\":" << m.get<SpdrParentExecution::fill_limit_ref_uprc>();
        o << ",\"fill_limit_ref_sdiv\":" << m.get<SpdrParentExecution::fill_limit_ref_sdiv>();
        o << ",\"fill_limit_prc\":" << m.get<SpdrParentExecution::fill_limit_prc>();
        o << ",\"fill_ve\":" << m.get<SpdrParentExecution::fill_ve>();
        o << ",\"fill_ga\":" << m.get<SpdrParentExecution::fill_ga>();
        o << ",\"fill_de\":" << m.get<SpdrParentExecution::fill_de>();
        o << ",\"fill_th\":" << m.get<SpdrParentExecution::fill_th>();
        o << ",\"fill_ve_ratio\":" << m.get<SpdrParentExecution::fill_ve_ratio>();
        o << ",\"fill_beta\":" << m.get<SpdrParentExecution::fill_beta>();
        o << ",\"risk_vega\":" << m.get<SpdrParentExecution::risk_vega>();
        o << ",\"risk_wt_vega\":" << m.get<SpdrParentExecution::risk_wt_vega>();
        o << ",\"risk_nvalue\":" << m.get<SpdrParentExecution::risk_nvalue>();
        o << ",\"risk_delta\":" << m.get<SpdrParentExecution::risk_delta>();
        o << ",\"risk_ddelta\":" << m.get<SpdrParentExecution::risk_ddelta>();
        o << ",\"risk_rm1\":" << m.get<SpdrParentExecution::risk_rm1>();
        o << ",\"risk_rm2\":" << m.get<SpdrParentExecution::risk_rm2>();
        o << ",\"risk_rm3\":" << m.get<SpdrParentExecution::risk_rm3>();
        o << ",\"risk_rm4\":" << m.get<SpdrParentExecution::risk_rm4>();
        o << ",\"risk_rm5\":" << m.get<SpdrParentExecution::risk_rm5>();
        o << ",\"risk_rm6\":" << m.get<SpdrParentExecution::risk_rm6>();
        o << ",\"risk_rm7\":" << m.get<SpdrParentExecution::risk_rm7>();
        o << ",\"margin_udn_vdn\":" << m.get<SpdrParentExecution::margin_udn_vdn>();
        o << ",\"margin_udn_vup\":" << m.get<SpdrParentExecution::margin_udn_vup>();
        o << ",\"margin_uup_vdn\":" << m.get<SpdrParentExecution::margin_uup_vdn>();
        o << ",\"margin_uup_vup\":" << m.get<SpdrParentExecution::margin_uup_vup>();
        o << ",\"risk_u15_dn\":" << m.get<SpdrParentExecution::risk_u15_dn>();
        o << ",\"risk_u15_up\":" << m.get<SpdrParentExecution::risk_u15_up>();
        o << ",\"risk_u50_dn\":" << m.get<SpdrParentExecution::risk_u50_dn>();
        o << ",\"risk_u50_up\":" << m.get<SpdrParentExecution::risk_u50_up>();
        o << ",\"fill_brkr_rate\":" << m.get<SpdrParentExecution::fill_brkr_rate>();
        o << ",\"fill_routing_rate\":" << m.get<SpdrParentExecution::fill_routing_rate>();
        o << ",\"mm_pref_code\":\"" << m.get<SpdrParentExecution::mm_pref_code>() << "\"";
        o << ",\"mm_credit\":" << m.get<SpdrParentExecution::mm_credit>();
        o << ",\"risk_code\":" << (int64_t)m.get<SpdrParentExecution::risk_code>();
        o << ",\"billing_sec_type\":" << (int64_t)m.get<SpdrParentExecution::billing_sec_type>();
        o << ",\"billing_category\":" << (int64_t)m.get<SpdrParentExecution::billing_category>();
        o << ",\"spdr_liquidity_tag\":\"" << m.get<SpdrParentExecution::spdr_liquidity_tag>() << "\"";
        o << ",\"exch_liquidity_tag\":\"" << m.get<SpdrParentExecution::exch_liquidity_tag>() << "\"";
        o << ",\"fill_exch_detail\":\"" << m.get<SpdrParentExecution::fill_exch_detail>() << "\"";
        o << ",\"cross_side\":" << (int64_t)m.get<SpdrParentExecution::cross_side>();
        o << ",\"is_cross_breakup_fill\":" << (int64_t)m.get<SpdrParentExecution::is_cross_breakup_fill>();
        o << ",\"last_capacity\":" << (int64_t)m.get<SpdrParentExecution::last_capacity>();
        o << ",\"exch_firm_type\":\"" << m.get<SpdrParentExecution::exch_firm_type>() << "\"";
        o << ",\"ext_exec_broker\":\"" << m.get<SpdrParentExecution::ext_exec_broker>() << "\"";
        o << ",\"relationship_type\":" << (int64_t)m.get<SpdrParentExecution::relationship_type>();
        o << ",\"cl_arrive_mark\":" << m.get<SpdrParentExecution::cl_arrive_mark>();
        {
            std::time_t tt = m.get<SpdrParentExecution::parent_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"parent_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"parent_order_size\":" << m.get<SpdrParentExecution::parent_order_size>();
        o << ",\"parent_ubid\":" << m.get<SpdrParentExecution::parent_ubid>();
        o << ",\"parent_uask\":" << m.get<SpdrParentExecution::parent_uask>();
        o << ",\"parent_umark\":" << m.get<SpdrParentExecution::parent_umark>();
        o << ",\"parent_bid\":" << m.get<SpdrParentExecution::parent_bid>();
        o << ",\"parent_ask\":" << m.get<SpdrParentExecution::parent_ask>();
        o << ",\"parent_mark\":" << m.get<SpdrParentExecution::parent_mark>();
        o << ",\"parent_fair_width\":" << m.get<SpdrParentExecution::parent_fair_width>();
        o << ",\"parent_surf_vol\":" << m.get<SpdrParentExecution::parent_surf_vol>();
        o << ",\"parent_limit_vol\":" << m.get<SpdrParentExecution::parent_limit_vol>();
        o << ",\"parent_limit_prc\":" << m.get<SpdrParentExecution::parent_limit_prc>();
        o << ",\"parent_limit_ref_uprc\":" << m.get<SpdrParentExecution::parent_limit_ref_uprc>();
        o << ",\"parent_theo_vol\":" << m.get<SpdrParentExecution::parent_theo_vol>();
        o << ",\"parent_theo_prc\":" << m.get<SpdrParentExecution::parent_theo_prc>();
        o << ",\"parent_pos_type\":" << (int64_t)m.get<SpdrParentExecution::parent_pos_type>();
        o << ",\"parent_ssale_flag\":" << (int64_t)m.get<SpdrParentExecution::parent_ssale_flag>();
        o << ",\"notice_number\":" << m.get<SpdrParentExecution::notice_number>();
        o << ",\"num_make_exchanges\":" << m.get<SpdrParentExecution::num_make_exchanges>();
        o << ",\"public_size\":" << (int64_t)m.get<SpdrParentExecution::public_size>();
        o << ",\"can_overlap_cxl_repl\":" << (int64_t)m.get<SpdrParentExecution::can_overlap_cxl_repl>();
        o << ",\"progress_rule\":" << (int64_t)m.get<SpdrParentExecution::progress_rule>();
        o << ",\"exch_mask_enabled\":" << (int64_t)m.get<SpdrParentExecution::exch_mask_enabled>();
        o << ",\"time_in_force\":" << (int64_t)m.get<SpdrParentExecution::time_in_force>();
        o << ",\"parent_order_handling\":" << (int64_t)m.get<SpdrParentExecution::parent_order_handling>();
        o << ",\"parent_balance_handling\":" << (int64_t)m.get<SpdrParentExecution::parent_balance_handling>();
        o << ",\"order_limit_type\":" << (int64_t)m.get<SpdrParentExecution::order_limit_type>();
        o << ",\"order_limit_class\":" << (int64_t)m.get<SpdrParentExecution::order_limit_class>();
        o << ",\"take_reach_rule\":" << (int64_t)m.get<SpdrParentExecution::take_reach_rule>();
        o << ",\"override_code\":" << (int64_t)m.get<SpdrParentExecution::override_code>();
        o << ",\"alpha_type\":" << (int64_t)m.get<SpdrParentExecution::alpha_type>();
        o << ",\"parent_strategy\":\"" << m.get<SpdrParentExecution::parent_strategy>() << "\"";
        o << ",\"user_name\":\"" << m.get<SpdrParentExecution::user_name>() << "\"";
        o << ",\"auto_hedge\":" << (int64_t)m.get<SpdrParentExecution::auto_hedge>();
        o << ",\"hedge_sec_key\":{" << m.get<SpdrParentExecution::hedge_sec_key>() << "}";
        o << ",\"hedge_sec_type\":" << (int64_t)m.get<SpdrParentExecution::hedge_sec_type>();
        o << ",\"hedge_beta_ratio\":" << m.get<SpdrParentExecution::hedge_beta_ratio>();
        o << ",\"hedge_scope\":" << (int64_t)m.get<SpdrParentExecution::hedge_scope>();
        o << ",\"user_data1\":\"" << m.get<SpdrParentExecution::user_data1>() << "\"";
        o << ",\"user_data2\":\"" << m.get<SpdrParentExecution::user_data2>() << "\"";
        o << ",\"years\":" << m.get<SpdrParentExecution::years>();
        o << ",\"underliers_per_cn\":" << m.get<SpdrParentExecution::underliers_per_cn>();
        o << ",\"underlier_type\":" << (int64_t)m.get<SpdrParentExecution::underlier_type>();
        o << ",\"tick_value\":" << m.get<SpdrParentExecution::tick_value>();
        o << ",\"point_value\":" << m.get<SpdrParentExecution::point_value>();
        o << ",\"point_currency\":" << (int64_t)m.get<SpdrParentExecution::point_currency>();
        o << ",\"u_prc_ratio\":" << m.get<SpdrParentExecution::u_prc_ratio>();
        o << ",\"min_tick_size\":" << m.get<SpdrParentExecution::min_tick_size>();
        o << ",\"price_format\":" << (int64_t)m.get<SpdrParentExecution::price_format>();
        o << ",\"u_price_format\":" << (int64_t)m.get<SpdrParentExecution::u_price_format>();
        o << ",\"response_type\":\"" << m.get<SpdrParentExecution::response_type>() << "\"";
        o << ",\"nbbo_bid\":" << m.get<SpdrParentExecution::nbbo_bid>();
        o << ",\"nbbo_ask\":" << m.get<SpdrParentExecution::nbbo_ask>();
        o << ",\"child_uprc\":" << m.get<SpdrParentExecution::child_uprc>();
        o << ",\"exch_bid_sz\":" << m.get<SpdrParentExecution::exch_bid_sz>();
        o << ",\"exch_ask_sz\":" << m.get<SpdrParentExecution::exch_ask_sz>();
        o << ",\"live_uprc\":" << m.get<SpdrParentExecution::live_uprc>();
        o << ",\"live_mark\":" << m.get<SpdrParentExecution::live_mark>();
        o << ",\"src_timestamp\":" << m.get<SpdrParentExecution::src_timestamp>();
        o << ",\"sgw_timestamp\":" << m.get<SpdrParentExecution::sgw_timestamp>();
        o << ",\"eng_timestamp\":" << m.get<SpdrParentExecution::eng_timestamp>();
        {
            std::time_t tt = m.get<SpdrParentExecution::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"data_center__v7\":" << (int64_t)m.get<SpdrParentExecution::data_center__v7>();
        o << ",\"face_side__v7\":" << (int64_t)m.get<SpdrParentExecution::face_side__v7>();
        o << ",\"face_shape__v7\":" << (int64_t)m.get<SpdrParentExecution::face_shape__v7>();
        o << ",\"child_locate_source__v7\":\"" << m.get<SpdrParentExecution::child_locate_source__v7>() << "\"";
        o << ",\"fill_pr__v7\":" << m.get<SpdrParentExecution::fill_pr__v7>();
        o << ",\"fill_risk_metric1__v7\":" << m.get<SpdrParentExecution::fill_risk_metric1__v7>();
        o << ",\"fill_risk_metric2__v7\":" << m.get<SpdrParentExecution::fill_risk_metric2__v7>();
        o << ",\"fill_risk_metric3__v7\":" << m.get<SpdrParentExecution::fill_risk_metric3__v7>();
        o << ",\"fill_risk_metric4__v7\":" << m.get<SpdrParentExecution::fill_risk_metric4__v7>();
        o << ",\"fill_risk_metric5__v7\":" << m.get<SpdrParentExecution::fill_risk_metric5__v7>();
        o << ",\"fill_risk_metric6__v7\":" << m.get<SpdrParentExecution::fill_risk_metric6__v7>();
        o << ",\"fill_risk_metric7__v7\":" << m.get<SpdrParentExecution::fill_risk_metric7__v7>();
        o << ",\"fill_s08_dn__v7\":" << m.get<SpdrParentExecution::fill_s08_dn__v7>();
        o << ",\"fill_s06_up__v7\":" << m.get<SpdrParentExecution::fill_s06_up__v7>();
        o << ",\"fill_s15_dn__v7\":" << m.get<SpdrParentExecution::fill_s15_dn__v7>();
        o << ",\"fill_s15_up__v7\":" << m.get<SpdrParentExecution::fill_s15_up__v7>();
        o << ",\"fill_s50_dn__v7\":" << m.get<SpdrParentExecution::fill_s50_dn__v7>();
        o << ",\"fill_s50_up__v7\":" << m.get<SpdrParentExecution::fill_s50_up__v7>();
        return o;
    }

}
}
}