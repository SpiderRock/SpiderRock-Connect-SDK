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

    #ifndef _run_status__GUARD__
    #define _run_status__GUARD__
    DECL_STRONG_TYPE(run_status, spiderrock::protobuf::api::RunStatus);
    #endif//_run_status__GUARD__

    #ifndef _sys_environment__GUARD__
    #define _sys_environment__GUARD__
    DECL_STRONG_TYPE(sys_environment, spiderrock::protobuf::api::SysEnvironment);
    #endif//_sys_environment__GUARD__

    #ifndef _version__int32__GUARD__
    #define _version__int32__GUARD__
    DECL_STRONG_TYPE(version__int32, int32);
    #endif//_version__int32__GUARD__

    #ifndef _cl_ord_id__string__GUARD__
    #define _cl_ord_id__string__GUARD__
    DECL_STRONG_TYPE(cl_ord_id__string, string);
    #endif//_cl_ord_id__string__GUARD__

    #ifndef _parent_number__GUARD__
    #define _parent_number__GUARD__
    DECL_STRONG_TYPE(parent_number, int64);
    #endif//_parent_number__GUARD__

    #ifndef _package_id__GUARD__
    #define _package_id__GUARD__
    DECL_STRONG_TYPE(package_id, int64);
    #endif//_package_id__GUARD__

    #ifndef _alt_order_id__GUARD__
    #define _alt_order_id__GUARD__
    DECL_STRONG_TYPE(alt_order_id, string);
    #endif//_alt_order_id__GUARD__

    #ifndef _src_routing_code__GUARD__
    #define _src_routing_code__GUARD__
    DECL_STRONG_TYPE(src_routing_code, string);
    #endif//_src_routing_code__GUARD__

    #ifndef _spdr_source__GUARD__
    #define _spdr_source__GUARD__
    DECL_STRONG_TYPE(spdr_source, spiderrock::protobuf::api::SpdrSource);
    #endif//_spdr_source__GUARD__

    #ifndef _grouping_code__GUARD__
    #define _grouping_code__GUARD__
    DECL_STRONG_TYPE(grouping_code, int64);
    #endif//_grouping_code__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _pri_agg_group__GUARD__
    #define _pri_agg_group__GUARD__
    DECL_STRONG_TYPE(pri_agg_group, string);
    #endif//_pri_agg_group__GUARD__

    #ifndef _sec_agg_group__GUARD__
    #define _sec_agg_group__GUARD__
    DECL_STRONG_TYPE(sec_agg_group, string);
    #endif//_sec_agg_group__GUARD__

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

    #ifndef _risk_class__GUARD__
    #define _risk_class__GUARD__
    DECL_STRONG_TYPE(risk_class, string);
    #endif//_risk_class__GUARD__

    #ifndef _symbol_type__GUARD__
    #define _symbol_type__GUARD__
    DECL_STRONG_TYPE(symbol_type, spiderrock::protobuf::api::SymbolType);
    #endif//_symbol_type__GUARD__

    #ifndef _sector__GUARD__
    #define _sector__GUARD__
    DECL_STRONG_TYPE(sector, string);
    #endif//_sector__GUARD__

    #ifndef _ind_num__GUARD__
    #define _ind_num__GUARD__
    DECL_STRONG_TYPE(ind_num, int32);
    #endif//_ind_num__GUARD__

    #ifndef _sub_num__GUARD__
    #define _sub_num__GUARD__
    DECL_STRONG_TYPE(sub_num, int32);
    #endif//_sub_num__GUARD__

    #ifndef _grp_num__GUARD__
    #define _grp_num__GUARD__
    DECL_STRONG_TYPE(grp_num, int32);
    #endif//_grp_num__GUARD__

    #ifndef _nbr_num__GUARD__
    #define _nbr_num__GUARD__
    DECL_STRONG_TYPE(nbr_num, int32);
    #endif//_nbr_num__GUARD__

    #ifndef _edays__GUARD__
    #define _edays__GUARD__
    DECL_STRONG_TYPE(edays, int32);
    #endif//_edays__GUARD__

    #ifndef _exp_code__GUARD__
    #define _exp_code__GUARD__
    DECL_STRONG_TYPE(exp_code, spiderrock::protobuf::api::ExpCode);
    #endif//_exp_code__GUARD__

    #ifndef _skew_code__GUARD__
    #define _skew_code__GUARD__
    DECL_STRONG_TYPE(skew_code, spiderrock::protobuf::api::SkewCode);
    #endif//_skew_code__GUARD__

    #ifndef _width_code__GUARD__
    #define _width_code__GUARD__
    DECL_STRONG_TYPE(width_code, spiderrock::protobuf::api::WidthCode);
    #endif//_width_code__GUARD__

    #ifndef _price_format__GUARD__
    #define _price_format__GUARD__
    DECL_STRONG_TYPE(price_format, spiderrock::protobuf::api::PriceFormat);
    #endif//_price_format__GUARD__

    #ifndef _u_price_format__GUARD__
    #define _u_price_format__GUARD__
    DECL_STRONG_TYPE(u_price_format, spiderrock::protobuf::api::PriceFormat);
    #endif//_u_price_format__GUARD__

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

    #ifndef _routing_code__GUARD__
    #define _routing_code__GUARD__
    DECL_STRONG_TYPE(routing_code, string);
    #endif//_routing_code__GUARD__

    #ifndef _orig_exec_id__GUARD__
    #define _orig_exec_id__GUARD__
    DECL_STRONG_TYPE(orig_exec_id, string);
    #endif//_orig_exec_id__GUARD__

    #ifndef _last_exec_id__GUARD__
    #define _last_exec_id__GUARD__
    DECL_STRONG_TYPE(last_exec_id, string);
    #endif//_last_exec_id__GUARD__

    #ifndef _transact_dttm__GUARD__
    #define _transact_dttm__GUARD__
    DECL_STRONG_TYPE(transact_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_transact_dttm__GUARD__

    #ifndef _exec_status__GUARD__
    #define _exec_status__GUARD__
    DECL_STRONG_TYPE(exec_status, spiderrock::protobuf::api::ExecStatus);
    #endif//_exec_status__GUARD__

    #ifndef _remote_text__GUARD__
    #define _remote_text__GUARD__
    DECL_STRONG_TYPE(remote_text, string);
    #endif//_remote_text__GUARD__

    #ifndef _order_limit_type__GUARD__
    #define _order_limit_type__GUARD__
    DECL_STRONG_TYPE(order_limit_type, spiderrock::protobuf::api::SpdrLimitType);
    #endif//_order_limit_type__GUARD__

    #ifndef _order_limit_class__GUARD__
    #define _order_limit_class__GUARD__
    DECL_STRONG_TYPE(order_limit_class, spiderrock::protobuf::api::SpdrLimitClass);
    #endif//_order_limit_class__GUARD__

    #ifndef _parent_shape__GUARD__
    #define _parent_shape__GUARD__
    DECL_STRONG_TYPE(parent_shape, spiderrock::protobuf::api::SpdrOrderShape);
    #endif//_parent_shape__GUARD__

    #ifndef _parent_order_handling__GUARD__
    #define _parent_order_handling__GUARD__
    DECL_STRONG_TYPE(parent_order_handling, spiderrock::protobuf::api::ParentOrderHandling);
    #endif//_parent_order_handling__GUARD__

    #ifndef _parent_balance_handling__GUARD__
    #define _parent_balance_handling__GUARD__
    DECL_STRONG_TYPE(parent_balance_handling, spiderrock::protobuf::api::ParentBalanceHandling);
    #endif//_parent_balance_handling__GUARD__

    #ifndef _parent_order_size__GUARD__
    #define _parent_order_size__GUARD__
    DECL_STRONG_TYPE(parent_order_size, int32);
    #endif//_parent_order_size__GUARD__

    #ifndef _method__GUARD__
    #define _method__GUARD__
    DECL_STRONG_TYPE(method, string);
    #endif//_method__GUARD__

    #ifndef _strategy__GUARD__
    #define _strategy__GUARD__
    DECL_STRONG_TYPE(strategy, string);
    #endif//_strategy__GUARD__

    #ifndef _user_name__GUARD__
    #define _user_name__GUARD__
    DECL_STRONG_TYPE(user_name, string);
    #endif//_user_name__GUARD__

    #ifndef _origin__GUARD__
    #define _origin__GUARD__
    DECL_STRONG_TYPE(origin, string);
    #endif//_origin__GUARD__

    #ifndef _source__string__GUARD__
    #define _source__string__GUARD__
    DECL_STRONG_TYPE(source__string, string);
    #endif//_source__string__GUARD__

    #ifndef _server__GUARD__
    #define _server__GUARD__
    DECL_STRONG_TYPE(server, string);
    #endif//_server__GUARD__

    #ifndef _clearing_firm__GUARD__
    #define _clearing_firm__GUARD__
    DECL_STRONG_TYPE(clearing_firm, string);
    #endif//_clearing_firm__GUARD__

    #ifndef _clearing_accnt__GUARD__
    #define _clearing_accnt__GUARD__
    DECL_STRONG_TYPE(clearing_accnt, string);
    #endif//_clearing_accnt__GUARD__

    #ifndef _last_capacity__GUARD__
    #define _last_capacity__GUARD__
    DECL_STRONG_TYPE(last_capacity, spiderrock::protobuf::api::OrderCapacity);
    #endif//_last_capacity__GUARD__

    #ifndef _exec_role__GUARD__
    #define _exec_role__GUARD__
    DECL_STRONG_TYPE(exec_role, spiderrock::protobuf::api::ExecRole);
    #endif//_exec_role__GUARD__

    #ifndef _exec_brkr_code__GUARD__
    #define _exec_brkr_code__GUARD__
    DECL_STRONG_TYPE(exec_brkr_code, string);
    #endif//_exec_brkr_code__GUARD__

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

    #ifndef _risk_group_id__GUARD__
    #define _risk_group_id__GUARD__
    DECL_STRONG_TYPE(risk_group_id, int64);
    #endif//_risk_group_id__GUARD__

    #ifndef _fill_brkr_rate__GUARD__
    #define _fill_brkr_rate__GUARD__
    DECL_STRONG_TYPE(fill_brkr_rate, float);
    #endif//_fill_brkr_rate__GUARD__

    #ifndef _fill_routing_rate__GUARD__
    #define _fill_routing_rate__GUARD__
    DECL_STRONG_TYPE(fill_routing_rate, float);
    #endif//_fill_routing_rate__GUARD__

    #ifndef _billing_sec_type__GUARD__
    #define _billing_sec_type__GUARD__
    DECL_STRONG_TYPE(billing_sec_type, spiderrock::protobuf::api::BillingSecType);
    #endif//_billing_sec_type__GUARD__

    #ifndef _billing_category__GUARD__
    #define _billing_category__GUARD__
    DECL_STRONG_TYPE(billing_category, spiderrock::protobuf::api::BillingCategory);
    #endif//_billing_category__GUARD__

    #ifndef _firm_type__GUARD__
    #define _firm_type__GUARD__
    DECL_STRONG_TYPE(firm_type, spiderrock::protobuf::api::FirmType);
    #endif//_firm_type__GUARD__

    #ifndef _side__GUARD__
    #define _side__GUARD__
    DECL_STRONG_TYPE(side, spiderrock::protobuf::api::BuySell);
    #endif//_side__GUARD__

    #ifndef _price_type__PriceType__GUARD__
    #define _price_type__PriceType__GUARD__
    DECL_STRONG_TYPE(price_type__PriceType, spiderrock::protobuf::api::PriceType);
    #endif//_price_type__PriceType__GUARD__

    #ifndef _ssale_flag__GUARD__
    #define _ssale_flag__GUARD__
    DECL_STRONG_TYPE(ssale_flag, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag__GUARD__

    #ifndef _spdr_ssale_flag__GUARD__
    #define _spdr_ssale_flag__GUARD__
    DECL_STRONG_TYPE(spdr_ssale_flag, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_spdr_ssale_flag__GUARD__

    #ifndef _position_type__PositionType__GUARD__
    #define _position_type__PositionType__GUARD__
    DECL_STRONG_TYPE(position_type__PositionType, spiderrock::protobuf::api::PositionType);
    #endif//_position_type__PositionType__GUARD__

    #ifndef _auto_hedge__GUARD__
    #define _auto_hedge__GUARD__
    DECL_STRONG_TYPE(auto_hedge, spiderrock::protobuf::api::AutoHedge);
    #endif//_auto_hedge__GUARD__

    #ifndef _order_dttm__GUARD__
    #define _order_dttm__GUARD__
    DECL_STRONG_TYPE(order_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_order_dttm__GUARD__

    #ifndef _order_ubid__GUARD__
    #define _order_ubid__GUARD__
    DECL_STRONG_TYPE(order_ubid, double);
    #endif//_order_ubid__GUARD__

    #ifndef _order_uask__GUARD__
    #define _order_uask__GUARD__
    DECL_STRONG_TYPE(order_uask, double);
    #endif//_order_uask__GUARD__

    #ifndef _order_bid__GUARD__
    #define _order_bid__GUARD__
    DECL_STRONG_TYPE(order_bid, double);
    #endif//_order_bid__GUARD__

    #ifndef _order_ask__GUARD__
    #define _order_ask__GUARD__
    DECL_STRONG_TYPE(order_ask, double);
    #endif//_order_ask__GUARD__

    #ifndef _order_surf_prc__GUARD__
    #define _order_surf_prc__GUARD__
    DECL_STRONG_TYPE(order_surf_prc, float);
    #endif//_order_surf_prc__GUARD__

    #ifndef _order_surf_vol__GUARD__
    #define _order_surf_vol__GUARD__
    DECL_STRONG_TYPE(order_surf_vol, float);
    #endif//_order_surf_vol__GUARD__

    #ifndef _order_limit_vol__GUARD__
    #define _order_limit_vol__GUARD__
    DECL_STRONG_TYPE(order_limit_vol, float);
    #endif//_order_limit_vol__GUARD__

    #ifndef _order_limit_prc__GUARD__
    #define _order_limit_prc__GUARD__
    DECL_STRONG_TYPE(order_limit_prc, double);
    #endif//_order_limit_prc__GUARD__

    #ifndef _order_limit_ref_uprc__GUARD__
    #define _order_limit_ref_uprc__GUARD__
    DECL_STRONG_TYPE(order_limit_ref_uprc, double);
    #endif//_order_limit_ref_uprc__GUARD__

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

    #ifndef _child_exch__GUARD__
    #define _child_exch__GUARD__
    DECL_STRONG_TYPE(child_exch, string);
    #endif//_child_exch__GUARD__

    #ifndef _child_ex_dest__GUARD__
    #define _child_ex_dest__GUARD__
    DECL_STRONG_TYPE(child_ex_dest, string);
    #endif//_child_ex_dest__GUARD__

    #ifndef _child_dttm__GUARD__
    #define _child_dttm__GUARD__
    DECL_STRONG_TYPE(child_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_child_dttm__GUARD__

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

    #ifndef _child_surf_prc__GUARD__
    #define _child_surf_prc__GUARD__
    DECL_STRONG_TYPE(child_surf_prc, float);
    #endif//_child_surf_prc__GUARD__

    #ifndef _child_vol__GUARD__
    #define _child_vol__GUARD__
    DECL_STRONG_TYPE(child_vol, float);
    #endif//_child_vol__GUARD__

    #ifndef _child_prob__GUARD__
    #define _child_prob__GUARD__
    DECL_STRONG_TYPE(child_prob, float);
    #endif//_child_prob__GUARD__

    #ifndef _child_limit_prc__GUARD__
    #define _child_limit_prc__GUARD__
    DECL_STRONG_TYPE(child_limit_prc, double);
    #endif//_child_limit_prc__GUARD__

    #ifndef _child_limit_ref_uprc__GUARD__
    #define _child_limit_ref_uprc__GUARD__
    DECL_STRONG_TYPE(child_limit_ref_uprc, double);
    #endif//_child_limit_ref_uprc__GUARD__

    #ifndef _child_limit_pnl__GUARD__
    #define _child_limit_pnl__GUARD__
    DECL_STRONG_TYPE(child_limit_pnl, float);
    #endif//_child_limit_pnl__GUARD__

    #ifndef _child_algo_handler__GUARD__
    #define _child_algo_handler__GUARD__
    DECL_STRONG_TYPE(child_algo_handler, spiderrock::protobuf::api::ChildHandler);
    #endif//_child_algo_handler__GUARD__

    #ifndef _child_order_handling__GUARD__
    #define _child_order_handling__GUARD__
    DECL_STRONG_TYPE(child_order_handling, string);
    #endif//_child_order_handling__GUARD__

    #ifndef _child_create_reason__GUARD__
    #define _child_create_reason__GUARD__
    DECL_STRONG_TYPE(child_create_reason, spiderrock::protobuf::api::ChildCreateReason);
    #endif//_child_create_reason__GUARD__

    #ifndef _child_cancel_reason__GUARD__
    #define _child_cancel_reason__GUARD__
    DECL_STRONG_TYPE(child_cancel_reason, spiderrock::protobuf::api::ChildCancelReason);
    #endif//_child_cancel_reason__GUARD__

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

    #ifndef _fill_exch__GUARD__
    #define _fill_exch__GUARD__
    DECL_STRONG_TYPE(fill_exch, string);
    #endif//_fill_exch__GUARD__

    #ifndef _fill_price__GUARD__
    #define _fill_price__GUARD__
    DECL_STRONG_TYPE(fill_price, double);
    #endif//_fill_price__GUARD__

    #ifndef _fill_ts__GUARD__
    #define _fill_ts__GUARD__
    DECL_STRONG_TYPE(fill_ts, double);
    #endif//_fill_ts__GUARD__

    #ifndef _fill_dttm__GUARD__
    #define _fill_dttm__GUARD__
    DECL_STRONG_TYPE(fill_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_fill_dttm__GUARD__

    #ifndef _fill_size__GUARD__
    #define _fill_size__GUARD__
    DECL_STRONG_TYPE(fill_size, int32);
    #endif//_fill_size__GUARD__

    #ifndef _eff_fill_size__GUARD__
    #define _eff_fill_size__GUARD__
    DECL_STRONG_TYPE(eff_fill_size, int32);
    #endif//_eff_fill_size__GUARD__

    #ifndef _fill_vol__GUARD__
    #define _fill_vol__GUARD__
    DECL_STRONG_TYPE(fill_vol, float);
    #endif//_fill_vol__GUARD__

    #ifndef _fill_prob__GUARD__
    #define _fill_prob__GUARD__
    DECL_STRONG_TYPE(fill_prob, float);
    #endif//_fill_prob__GUARD__

    #ifndef _fill_limit_prc__GUARD__
    #define _fill_limit_prc__GUARD__
    DECL_STRONG_TYPE(fill_limit_prc, double);
    #endif//_fill_limit_prc__GUARD__

    #ifndef _fill_limit_ref_uprc__GUARD__
    #define _fill_limit_ref_uprc__GUARD__
    DECL_STRONG_TYPE(fill_limit_ref_uprc, double);
    #endif//_fill_limit_ref_uprc__GUARD__

    #ifndef _fill_limit_pnl__GUARD__
    #define _fill_limit_pnl__GUARD__
    DECL_STRONG_TYPE(fill_limit_pnl, float);
    #endif//_fill_limit_pnl__GUARD__

    #ifndef _fill_de__GUARD__
    #define _fill_de__GUARD__
    DECL_STRONG_TYPE(fill_de, float);
    #endif//_fill_de__GUARD__

    #ifndef _fill_ve__GUARD__
    #define _fill_ve__GUARD__
    DECL_STRONG_TYPE(fill_ve, float);
    #endif//_fill_ve__GUARD__

    #ifndef _fill_th__GUARD__
    #define _fill_th__GUARD__
    DECL_STRONG_TYPE(fill_th, float);
    #endif//_fill_th__GUARD__

    #ifndef _fill_uprc__GUARD__
    #define _fill_uprc__GUARD__
    DECL_STRONG_TYPE(fill_uprc, double);
    #endif//_fill_uprc__GUARD__

    #ifndef _fill_beta__GUARD__
    #define _fill_beta__GUARD__
    DECL_STRONG_TYPE(fill_beta, float);
    #endif//_fill_beta__GUARD__

    #ifndef _fill_tv__GUARD__
    #define _fill_tv__GUARD__
    DECL_STRONG_TYPE(fill_tv, float);
    #endif//_fill_tv__GUARD__

    #ifndef _fill_tp__GUARD__
    #define _fill_tp__GUARD__
    DECL_STRONG_TYPE(fill_tp, float);
    #endif//_fill_tp__GUARD__

    #ifndef _fill_ubid__GUARD__
    #define _fill_ubid__GUARD__
    DECL_STRONG_TYPE(fill_ubid, double);
    #endif//_fill_ubid__GUARD__

    #ifndef _fill_uask__GUARD__
    #define _fill_uask__GUARD__
    DECL_STRONG_TYPE(fill_uask, double);
    #endif//_fill_uask__GUARD__

    #ifndef _fill_bid__GUARD__
    #define _fill_bid__GUARD__
    DECL_STRONG_TYPE(fill_bid, double);
    #endif//_fill_bid__GUARD__

    #ifndef _fill_ask__GUARD__
    #define _fill_ask__GUARD__
    DECL_STRONG_TYPE(fill_ask, double);
    #endif//_fill_ask__GUARD__

    #ifndef _fill_surf_prc__GUARD__
    #define _fill_surf_prc__GUARD__
    DECL_STRONG_TYPE(fill_surf_prc, float);
    #endif//_fill_surf_prc__GUARD__

    #ifndef _fill_post_umark1_m__GUARD__
    #define _fill_post_umark1_m__GUARD__
    DECL_STRONG_TYPE(fill_post_umark1_m, double);
    #endif//_fill_post_umark1_m__GUARD__

    #ifndef _fill_post_umark10_m__GUARD__
    #define _fill_post_umark10_m__GUARD__
    DECL_STRONG_TYPE(fill_post_umark10_m, double);
    #endif//_fill_post_umark10_m__GUARD__

    #ifndef _fill_post_mark1_m__GUARD__
    #define _fill_post_mark1_m__GUARD__
    DECL_STRONG_TYPE(fill_post_mark1_m, double);
    #endif//_fill_post_mark1_m__GUARD__

    #ifndef _fill_post_mark10_m__GUARD__
    #define _fill_post_mark10_m__GUARD__
    DECL_STRONG_TYPE(fill_post_mark10_m, double);
    #endif//_fill_post_mark10_m__GUARD__

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

    #ifndef _risk_code__GUARD__
    #define _risk_code__GUARD__
    DECL_STRONG_TYPE(risk_code, spiderrock::protobuf::api::RiskCode);
    #endif//_risk_code__GUARD__

    #ifndef _exch_liquidity_tag__GUARD__
    #define _exch_liquidity_tag__GUARD__
    DECL_STRONG_TYPE(exch_liquidity_tag, string);
    #endif//_exch_liquidity_tag__GUARD__

    #ifndef _spdr_liquidity_tag__GUARD__
    #define _spdr_liquidity_tag__GUARD__
    DECL_STRONG_TYPE(spdr_liquidity_tag, string);
    #endif//_spdr_liquidity_tag__GUARD__

    #ifndef _fill_exch_detail__GUARD__
    #define _fill_exch_detail__GUARD__
    DECL_STRONG_TYPE(fill_exch_detail, string);
    #endif//_fill_exch_detail__GUARD__

    #ifndef _notional_value__GUARD__
    #define _notional_value__GUARD__
    DECL_STRONG_TYPE(notional_value, float);
    #endif//_notional_value__GUARD__

    #ifndef _market_value__GUARD__
    #define _market_value__GUARD__
    DECL_STRONG_TYPE(market_value, float);
    #endif//_market_value__GUARD__

    #ifndef _order_mkt_width__GUARD__
    #define _order_mkt_width__GUARD__
    DECL_STRONG_TYPE(order_mkt_width, float);
    #endif//_order_mkt_width__GUARD__

    #ifndef _child_mkt_width__GUARD__
    #define _child_mkt_width__GUARD__
    DECL_STRONG_TYPE(child_mkt_width, float);
    #endif//_child_mkt_width__GUARD__

    #ifndef _fill_mkt_width__GUARD__
    #define _fill_mkt_width__GUARD__
    DECL_STRONG_TYPE(fill_mkt_width, float);
    #endif//_fill_mkt_width__GUARD__

    #ifndef _parent_order_age__GUARD__
    #define _parent_order_age__GUARD__
    DECL_STRONG_TYPE(parent_order_age, float);
    #endif//_parent_order_age__GUARD__

    #ifndef _parent_age_code__GUARD__
    #define _parent_age_code__GUARD__
    DECL_STRONG_TYPE(parent_age_code, spiderrock::protobuf::api::ParentAge);
    #endif//_parent_age_code__GUARD__

    #ifndef _trd_delta__GUARD__
    #define _trd_delta__GUARD__
    DECL_STRONG_TYPE(trd_delta, float);
    #endif//_trd_delta__GUARD__

    #ifndef _trd_ddelta__GUARD__
    #define _trd_ddelta__GUARD__
    DECL_STRONG_TYPE(trd_ddelta, float);
    #endif//_trd_ddelta__GUARD__

    #ifndef _trd_gamma__GUARD__
    #define _trd_gamma__GUARD__
    DECL_STRONG_TYPE(trd_gamma, float);
    #endif//_trd_gamma__GUARD__

    #ifndef _trd_vega__GUARD__
    #define _trd_vega__GUARD__
    DECL_STRONG_TYPE(trd_vega, float);
    #endif//_trd_vega__GUARD__

    #ifndef _trd_wt_vega__GUARD__
    #define _trd_wt_vega__GUARD__
    DECL_STRONG_TYPE(trd_wt_vega, float);
    #endif//_trd_wt_vega__GUARD__

    #ifndef _trd_theta__GUARD__
    #define _trd_theta__GUARD__
    DECL_STRONG_TYPE(trd_theta, float);
    #endif//_trd_theta__GUARD__

    #ifndef _trd_prem__GUARD__
    #define _trd_prem__GUARD__
    DECL_STRONG_TYPE(trd_prem, float);
    #endif//_trd_prem__GUARD__

    #ifndef _trd_beta__GUARD__
    #define _trd_beta__GUARD__
    DECL_STRONG_TYPE(trd_beta, float);
    #endif//_trd_beta__GUARD__

    #ifndef _trd_dbeta__GUARD__
    #define _trd_dbeta__GUARD__
    DECL_STRONG_TYPE(trd_dbeta, float);
    #endif//_trd_dbeta__GUARD__

    #ifndef _surf_edge__GUARD__
    #define _surf_edge__GUARD__
    DECL_STRONG_TYPE(surf_edge, float);
    #endif//_surf_edge__GUARD__

    #ifndef _surf_edge_unit__GUARD__
    #define _surf_edge_unit__GUARD__
    DECL_STRONG_TYPE(surf_edge_unit, float);
    #endif//_surf_edge_unit__GUARD__

    #ifndef _theo_edge__GUARD__
    #define _theo_edge__GUARD__
    DECL_STRONG_TYPE(theo_edge, float);
    #endif//_theo_edge__GUARD__

    #ifndef _theo_edge_unit__GUARD__
    #define _theo_edge_unit__GUARD__
    DECL_STRONG_TYPE(theo_edge_unit, float);
    #endif//_theo_edge_unit__GUARD__

    #ifndef _exch_fee__GUARD__
    #define _exch_fee__GUARD__
    DECL_STRONG_TYPE(exch_fee, float);
    #endif//_exch_fee__GUARD__

    #ifndef _half_width_pnl__GUARD__
    #define _half_width_pnl__GUARD__
    DECL_STRONG_TYPE(half_width_pnl, float);
    #endif//_half_width_pnl__GUARD__

    #ifndef _cl_arrive_pnl__GUARD__
    #define _cl_arrive_pnl__GUARD__
    DECL_STRONG_TYPE(cl_arrive_pnl, float);
    #endif//_cl_arrive_pnl__GUARD__

    #ifndef _arrive_pnl__GUARD__
    #define _arrive_pnl__GUARD__
    DECL_STRONG_TYPE(arrive_pnl, float);
    #endif//_arrive_pnl__GUARD__

    #ifndef _arrive_dn_pnl__GUARD__
    #define _arrive_dn_pnl__GUARD__
    DECL_STRONG_TYPE(arrive_dn_pnl, float);
    #endif//_arrive_dn_pnl__GUARD__

    #ifndef _u_drift_arrive_pnl__GUARD__
    #define _u_drift_arrive_pnl__GUARD__
    DECL_STRONG_TYPE(u_drift_arrive_pnl, float);
    #endif//_u_drift_arrive_pnl__GUARD__

    #ifndef _day_dn_pnl__GUARD__
    #define _day_dn_pnl__GUARD__
    DECL_STRONG_TYPE(day_dn_pnl, float);
    #endif//_day_dn_pnl__GUARD__

    #ifndef _day_m1_pnl__GUARD__
    #define _day_m1_pnl__GUARD__
    DECL_STRONG_TYPE(day_m1_pnl, float);
    #endif//_day_m1_pnl__GUARD__

    #ifndef _day_m10_pnl__GUARD__
    #define _day_m10_pnl__GUARD__
    DECL_STRONG_TYPE(day_m10_pnl, float);
    #endif//_day_m10_pnl__GUARD__

    #ifndef _u_drift_day_pnl__GUARD__
    #define _u_drift_day_pnl__GUARD__
    DECL_STRONG_TYPE(u_drift_day_pnl, float);
    #endif//_u_drift_day_pnl__GUARD__

    #ifndef _u_drift_m1_pnl__GUARD__
    #define _u_drift_m1_pnl__GUARD__
    DECL_STRONG_TYPE(u_drift_m1_pnl, float);
    #endif//_u_drift_m1_pnl__GUARD__

    #ifndef _u_drift_m10_pnl__GUARD__
    #define _u_drift_m10_pnl__GUARD__
    DECL_STRONG_TYPE(u_drift_m10_pnl, float);
    #endif//_u_drift_m10_pnl__GUARD__

    #ifndef _day_pnl__GUARD__
    #define _day_pnl__GUARD__
    DECL_STRONG_TYPE(day_pnl, float);
    #endif//_day_pnl__GUARD__

    #ifndef _live_mark__GUARD__
    #define _live_mark__GUARD__
    DECL_STRONG_TYPE(live_mark, double);
    #endif//_live_mark__GUARD__

    #ifndef _live_uprc__double__GUARD__
    #define _live_uprc__double__GUARD__
    DECL_STRONG_TYPE(live_uprc__double, double);
    #endif//_live_uprc__double__GUARD__

    #ifndef _pend_mark__GUARD__
    #define _pend_mark__GUARD__
    DECL_STRONG_TYPE(pend_mark, double);
    #endif//_pend_mark__GUARD__

    #ifndef _pend_uprc__GUARD__
    #define _pend_uprc__GUARD__
    DECL_STRONG_TYPE(pend_uprc, double);
    #endif//_pend_uprc__GUARD__

    #ifndef _trd_mark_error__GUARD__
    #define _trd_mark_error__GUARD__
    DECL_STRONG_TYPE(trd_mark_error, string);
    #endif//_trd_mark_error__GUARD__

    #ifndef _day_mark_error__GUARD__
    #define _day_mark_error__GUARD__
    DECL_STRONG_TYPE(day_mark_error, string);
    #endif//_day_mark_error__GUARD__

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

    #ifndef _fill_number__GUARD__
    #define _fill_number__GUARD__
    DECL_STRONG_TYPE(fill_number, int64);
    #endif//_fill_number__GUARD__

    #ifndef _trade_date__GUARD__
    #define _trade_date__GUARD__
    DECL_STRONG_TYPE(trade_date, DateKey);
    #endif//_trade_date__GUARD__

    
    class TradeCubeDetailV5_PKey {
        public:
        //using statements for all types used in this class
        using fill_number = spiderrock::protobuf::api::fill_number;
        using trade_date = spiderrock::protobuf::api::trade_date;

        private:
        fill_number m_fill_number{};
        trade_date m_trade_date{};

        public:
        fill_number get_fill_number() const {
            return m_fill_number;
        }
		trade_date get_trade_date() const {
            return m_trade_date;
        }
        void set_fill_number(const fill_number& value)  {
            m_fill_number = value;
        }
        void set_trade_date(const trade_date& value)  {
            m_trade_date = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to TradeCubeDetailV5_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to TradeCubeDetailV5_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const fill_number & value) { set_fill_number(value); }
        void set(const trade_date & value) { set_trade_date(value); }


        TradeCubeDetailV5_PKey() {}

        virtual ~TradeCubeDetailV5_PKey() {
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
        bool IncludeTradeDate() const {
            return (m_trade_date.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeFillNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(10,m_fill_number);
            }
            if ( IncludeTradeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(11, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeFillNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,10,m_fill_number);
            }
            if ( IncludeTradeDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,11, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
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
                    case 11: {
                        auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                        m_trade_date.set_year(dateKey.year());
                        m_trade_date.set_month(dateKey.month());
                        m_trade_date.set_day(dateKey.day());
                        break;
                    }
                }
            }
        }

    };
    

    class TradeCubeDetailV5 {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::TradeCubeDetailV5_PKey;
        using run_status = spiderrock::protobuf::api::run_status;
        using sys_environment = spiderrock::protobuf::api::sys_environment;
        using version = spiderrock::protobuf::api::version__int32;
        using cl_ord_id = spiderrock::protobuf::api::cl_ord_id__string;
        using parent_number = spiderrock::protobuf::api::parent_number;
        using package_id = spiderrock::protobuf::api::package_id;
        using alt_order_id = spiderrock::protobuf::api::alt_order_id;
        using src_routing_code = spiderrock::protobuf::api::src_routing_code;
        using spdr_source = spiderrock::protobuf::api::spdr_source;
        using grouping_code = spiderrock::protobuf::api::grouping_code;
        using accnt = spiderrock::protobuf::api::accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using pri_agg_group = spiderrock::protobuf::api::pri_agg_group;
        using sec_agg_group = spiderrock::protobuf::api::sec_agg_group;
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using view_group1 = spiderrock::protobuf::api::view_group1;
        using view_group2 = spiderrock::protobuf::api::view_group2;
        using view_group3 = spiderrock::protobuf::api::view_group3;
        using risk_class = spiderrock::protobuf::api::risk_class;
        using symbol_type = spiderrock::protobuf::api::symbol_type;
        using sector = spiderrock::protobuf::api::sector;
        using ind_num = spiderrock::protobuf::api::ind_num;
        using sub_num = spiderrock::protobuf::api::sub_num;
        using grp_num = spiderrock::protobuf::api::grp_num;
        using nbr_num = spiderrock::protobuf::api::nbr_num;
        using edays = spiderrock::protobuf::api::edays;
        using exp_code = spiderrock::protobuf::api::exp_code;
        using skew_code = spiderrock::protobuf::api::skew_code;
        using width_code = spiderrock::protobuf::api::width_code;
        using price_format = spiderrock::protobuf::api::price_format;
        using u_price_format = spiderrock::protobuf::api::u_price_format;
        using years = spiderrock::protobuf::api::years__float;
        using underliers_per_cn = spiderrock::protobuf::api::underliers_per_cn;
        using underlier_type = spiderrock::protobuf::api::underlier_type__UnderlierType;
        using tick_value = spiderrock::protobuf::api::tick_value;
        using point_value = spiderrock::protobuf::api::point_value__float;
        using point_currency = spiderrock::protobuf::api::point_currency;
        using u_prc_ratio = spiderrock::protobuf::api::u_prc_ratio__float;
        using min_tick_size = spiderrock::protobuf::api::min_tick_size__float;
        using routing_code = spiderrock::protobuf::api::routing_code;
        using orig_exec_id = spiderrock::protobuf::api::orig_exec_id;
        using last_exec_id = spiderrock::protobuf::api::last_exec_id;
        using transact_dttm = spiderrock::protobuf::api::transact_dttm;
        using exec_status = spiderrock::protobuf::api::exec_status;
        using remote_text = spiderrock::protobuf::api::remote_text;
        using order_limit_type = spiderrock::protobuf::api::order_limit_type;
        using order_limit_class = spiderrock::protobuf::api::order_limit_class;
        using parent_shape = spiderrock::protobuf::api::parent_shape;
        using parent_order_handling = spiderrock::protobuf::api::parent_order_handling;
        using parent_balance_handling = spiderrock::protobuf::api::parent_balance_handling;
        using parent_order_size = spiderrock::protobuf::api::parent_order_size;
        using method = spiderrock::protobuf::api::method;
        using strategy = spiderrock::protobuf::api::strategy;
        using user_name = spiderrock::protobuf::api::user_name;
        using origin = spiderrock::protobuf::api::origin;
        using source = spiderrock::protobuf::api::source__string;
        using server = spiderrock::protobuf::api::server;
        using clearing_firm = spiderrock::protobuf::api::clearing_firm;
        using clearing_accnt = spiderrock::protobuf::api::clearing_accnt;
        using last_capacity = spiderrock::protobuf::api::last_capacity;
        using exec_role = spiderrock::protobuf::api::exec_role;
        using exec_brkr_code = spiderrock::protobuf::api::exec_brkr_code;
        using exec_brkr_accnt = spiderrock::protobuf::api::exec_brkr_accnt;
        using exec_brkr_cl_firm = spiderrock::protobuf::api::exec_brkr_cl_firm;
        using exec_brkr_user_name = spiderrock::protobuf::api::exec_brkr_user_name;
        using clearing_flip_type = spiderrock::protobuf::api::clearing_flip_type;
        using clearing_flip_firm = spiderrock::protobuf::api::clearing_flip_firm;
        using clearing_flip_accnt = spiderrock::protobuf::api::clearing_flip_accnt;
        using risk_group_id = spiderrock::protobuf::api::risk_group_id;
        using fill_brkr_rate = spiderrock::protobuf::api::fill_brkr_rate;
        using fill_routing_rate = spiderrock::protobuf::api::fill_routing_rate;
        using billing_sec_type = spiderrock::protobuf::api::billing_sec_type;
        using billing_category = spiderrock::protobuf::api::billing_category;
        using firm_type = spiderrock::protobuf::api::firm_type;
        using side = spiderrock::protobuf::api::side;
        using price_type = spiderrock::protobuf::api::price_type__PriceType;
        using ssale_flag = spiderrock::protobuf::api::ssale_flag;
        using spdr_ssale_flag = spiderrock::protobuf::api::spdr_ssale_flag;
        using position_type = spiderrock::protobuf::api::position_type__PositionType;
        using auto_hedge = spiderrock::protobuf::api::auto_hedge;
        using order_dttm = spiderrock::protobuf::api::order_dttm;
        using order_ubid = spiderrock::protobuf::api::order_ubid;
        using order_uask = spiderrock::protobuf::api::order_uask;
        using order_bid = spiderrock::protobuf::api::order_bid;
        using order_ask = spiderrock::protobuf::api::order_ask;
        using order_surf_prc = spiderrock::protobuf::api::order_surf_prc;
        using order_surf_vol = spiderrock::protobuf::api::order_surf_vol;
        using order_limit_vol = spiderrock::protobuf::api::order_limit_vol;
        using order_limit_prc = spiderrock::protobuf::api::order_limit_prc;
        using order_limit_ref_uprc = spiderrock::protobuf::api::order_limit_ref_uprc;
        using child_shape = spiderrock::protobuf::api::child_shape;
        using child_size = spiderrock::protobuf::api::child_size;
        using child_price = spiderrock::protobuf::api::child_price;
        using child_exch = spiderrock::protobuf::api::child_exch;
        using child_ex_dest = spiderrock::protobuf::api::child_ex_dest;
        using child_dttm = spiderrock::protobuf::api::child_dttm;
        using child_ubid = spiderrock::protobuf::api::child_ubid;
        using child_uask = spiderrock::protobuf::api::child_uask;
        using child_bid = spiderrock::protobuf::api::child_bid;
        using child_ask = spiderrock::protobuf::api::child_ask;
        using child_surf_prc = spiderrock::protobuf::api::child_surf_prc;
        using child_vol = spiderrock::protobuf::api::child_vol;
        using child_prob = spiderrock::protobuf::api::child_prob;
        using child_limit_prc = spiderrock::protobuf::api::child_limit_prc;
        using child_limit_ref_uprc = spiderrock::protobuf::api::child_limit_ref_uprc;
        using child_limit_pnl = spiderrock::protobuf::api::child_limit_pnl;
        using child_algo_handler = spiderrock::protobuf::api::child_algo_handler;
        using child_order_handling = spiderrock::protobuf::api::child_order_handling;
        using child_create_reason = spiderrock::protobuf::api::child_create_reason;
        using child_cancel_reason = spiderrock::protobuf::api::child_cancel_reason;
        using child_mkt_stance = spiderrock::protobuf::api::child_mkt_stance;
        using child_cxl_attempted = spiderrock::protobuf::api::child_cxl_attempted;
        using child_cxl_fill_latency = spiderrock::protobuf::api::child_cxl_fill_latency;
        using fill_exch = spiderrock::protobuf::api::fill_exch;
        using fill_price = spiderrock::protobuf::api::fill_price;
        using fill_ts = spiderrock::protobuf::api::fill_ts;
        using fill_dttm = spiderrock::protobuf::api::fill_dttm;
        using fill_size = spiderrock::protobuf::api::fill_size;
        using eff_fill_size = spiderrock::protobuf::api::eff_fill_size;
        using fill_vol = spiderrock::protobuf::api::fill_vol;
        using fill_prob = spiderrock::protobuf::api::fill_prob;
        using fill_limit_prc = spiderrock::protobuf::api::fill_limit_prc;
        using fill_limit_ref_uprc = spiderrock::protobuf::api::fill_limit_ref_uprc;
        using fill_limit_pnl = spiderrock::protobuf::api::fill_limit_pnl;
        using fill_de = spiderrock::protobuf::api::fill_de;
        using fill_ve = spiderrock::protobuf::api::fill_ve;
        using fill_th = spiderrock::protobuf::api::fill_th;
        using fill_uprc = spiderrock::protobuf::api::fill_uprc;
        using fill_beta = spiderrock::protobuf::api::fill_beta;
        using fill_tv = spiderrock::protobuf::api::fill_tv;
        using fill_tp = spiderrock::protobuf::api::fill_tp;
        using fill_ubid = spiderrock::protobuf::api::fill_ubid;
        using fill_uask = spiderrock::protobuf::api::fill_uask;
        using fill_bid = spiderrock::protobuf::api::fill_bid;
        using fill_ask = spiderrock::protobuf::api::fill_ask;
        using fill_surf_prc = spiderrock::protobuf::api::fill_surf_prc;
        using fill_post_umark1_m = spiderrock::protobuf::api::fill_post_umark1_m;
        using fill_post_umark10_m = spiderrock::protobuf::api::fill_post_umark10_m;
        using fill_post_mark1_m = spiderrock::protobuf::api::fill_post_mark1_m;
        using fill_post_mark10_m = spiderrock::protobuf::api::fill_post_mark10_m;
        using margin_udn_vdn = spiderrock::protobuf::api::margin_udn_vdn;
        using margin_udn_vup = spiderrock::protobuf::api::margin_udn_vup;
        using margin_uup_vdn = spiderrock::protobuf::api::margin_uup_vdn;
        using margin_uup_vup = spiderrock::protobuf::api::margin_uup_vup;
        using risk_code = spiderrock::protobuf::api::risk_code;
        using exch_liquidity_tag = spiderrock::protobuf::api::exch_liquidity_tag;
        using spdr_liquidity_tag = spiderrock::protobuf::api::spdr_liquidity_tag;
        using fill_exch_detail = spiderrock::protobuf::api::fill_exch_detail;
        using notional_value = spiderrock::protobuf::api::notional_value;
        using market_value = spiderrock::protobuf::api::market_value;
        using order_mkt_width = spiderrock::protobuf::api::order_mkt_width;
        using child_mkt_width = spiderrock::protobuf::api::child_mkt_width;
        using fill_mkt_width = spiderrock::protobuf::api::fill_mkt_width;
        using parent_order_age = spiderrock::protobuf::api::parent_order_age;
        using parent_age_code = spiderrock::protobuf::api::parent_age_code;
        using trd_delta = spiderrock::protobuf::api::trd_delta;
        using trd_ddelta = spiderrock::protobuf::api::trd_ddelta;
        using trd_gamma = spiderrock::protobuf::api::trd_gamma;
        using trd_vega = spiderrock::protobuf::api::trd_vega;
        using trd_wt_vega = spiderrock::protobuf::api::trd_wt_vega;
        using trd_theta = spiderrock::protobuf::api::trd_theta;
        using trd_prem = spiderrock::protobuf::api::trd_prem;
        using trd_beta = spiderrock::protobuf::api::trd_beta;
        using trd_dbeta = spiderrock::protobuf::api::trd_dbeta;
        using surf_edge = spiderrock::protobuf::api::surf_edge;
        using surf_edge_unit = spiderrock::protobuf::api::surf_edge_unit;
        using theo_edge = spiderrock::protobuf::api::theo_edge;
        using theo_edge_unit = spiderrock::protobuf::api::theo_edge_unit;
        using exch_fee = spiderrock::protobuf::api::exch_fee;
        using half_width_pnl = spiderrock::protobuf::api::half_width_pnl;
        using cl_arrive_pnl = spiderrock::protobuf::api::cl_arrive_pnl;
        using arrive_pnl = spiderrock::protobuf::api::arrive_pnl;
        using arrive_dn_pnl = spiderrock::protobuf::api::arrive_dn_pnl;
        using u_drift_arrive_pnl = spiderrock::protobuf::api::u_drift_arrive_pnl;
        using day_dn_pnl = spiderrock::protobuf::api::day_dn_pnl;
        using day_m1_pnl = spiderrock::protobuf::api::day_m1_pnl;
        using day_m10_pnl = spiderrock::protobuf::api::day_m10_pnl;
        using u_drift_day_pnl = spiderrock::protobuf::api::u_drift_day_pnl;
        using u_drift_m1_pnl = spiderrock::protobuf::api::u_drift_m1_pnl;
        using u_drift_m10_pnl = spiderrock::protobuf::api::u_drift_m10_pnl;
        using day_pnl = spiderrock::protobuf::api::day_pnl;
        using live_mark = spiderrock::protobuf::api::live_mark;
        using live_uprc = spiderrock::protobuf::api::live_uprc__double;
        using pend_mark = spiderrock::protobuf::api::pend_mark;
        using pend_uprc = spiderrock::protobuf::api::pend_uprc;
        using trd_mark_error = spiderrock::protobuf::api::trd_mark_error;
        using day_mark_error = spiderrock::protobuf::api::day_mark_error;
        using user_data1 = spiderrock::protobuf::api::user_data1;
        using user_data2 = spiderrock::protobuf::api::user_data2;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        run_status m_run_status{};
        sys_environment m_sys_environment{};
        version m_version{};
        cl_ord_id m_cl_ord_id{};
        parent_number m_parent_number{};
        package_id m_package_id{};
        alt_order_id m_alt_order_id{};
        src_routing_code m_src_routing_code{};
        spdr_source m_spdr_source{};
        grouping_code m_grouping_code{};
        accnt m_accnt{};
        client_firm m_client_firm{};
        pri_agg_group m_pri_agg_group{};
        sec_agg_group m_sec_agg_group{};
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        ticker m_ticker{};
        view_group1 m_view_group1{};
        view_group2 m_view_group2{};
        view_group3 m_view_group3{};
        risk_class m_risk_class{};
        symbol_type m_symbol_type{};
        sector m_sector{};
        ind_num m_ind_num{};
        sub_num m_sub_num{};
        grp_num m_grp_num{};
        nbr_num m_nbr_num{};
        edays m_edays{};
        exp_code m_exp_code{};
        skew_code m_skew_code{};
        width_code m_width_code{};
        price_format m_price_format{};
        u_price_format m_u_price_format{};
        years m_years{};
        underliers_per_cn m_underliers_per_cn{};
        underlier_type m_underlier_type{};
        tick_value m_tick_value{};
        point_value m_point_value{};
        point_currency m_point_currency{};
        u_prc_ratio m_u_prc_ratio{};
        min_tick_size m_min_tick_size{};
        routing_code m_routing_code{};
        orig_exec_id m_orig_exec_id{};
        last_exec_id m_last_exec_id{};
        transact_dttm m_transact_dttm{};
        exec_status m_exec_status{};
        remote_text m_remote_text{};
        order_limit_type m_order_limit_type{};
        order_limit_class m_order_limit_class{};
        parent_shape m_parent_shape{};
        parent_order_handling m_parent_order_handling{};
        parent_balance_handling m_parent_balance_handling{};
        parent_order_size m_parent_order_size{};
        method m_method{};
        strategy m_strategy{};
        user_name m_user_name{};
        origin m_origin{};
        source m_source{};
        server m_server{};
        clearing_firm m_clearing_firm{};
        clearing_accnt m_clearing_accnt{};
        last_capacity m_last_capacity{};
        exec_role m_exec_role{};
        exec_brkr_code m_exec_brkr_code{};
        exec_brkr_accnt m_exec_brkr_accnt{};
        exec_brkr_cl_firm m_exec_brkr_cl_firm{};
        exec_brkr_user_name m_exec_brkr_user_name{};
        clearing_flip_type m_clearing_flip_type{};
        clearing_flip_firm m_clearing_flip_firm{};
        clearing_flip_accnt m_clearing_flip_accnt{};
        risk_group_id m_risk_group_id{};
        fill_brkr_rate m_fill_brkr_rate{};
        fill_routing_rate m_fill_routing_rate{};
        billing_sec_type m_billing_sec_type{};
        billing_category m_billing_category{};
        firm_type m_firm_type{};
        side m_side{};
        price_type m_price_type{};
        ssale_flag m_ssale_flag{};
        spdr_ssale_flag m_spdr_ssale_flag{};
        position_type m_position_type{};
        auto_hedge m_auto_hedge{};
        order_dttm m_order_dttm{};
        order_ubid m_order_ubid{};
        order_uask m_order_uask{};
        order_bid m_order_bid{};
        order_ask m_order_ask{};
        order_surf_prc m_order_surf_prc{};
        order_surf_vol m_order_surf_vol{};
        order_limit_vol m_order_limit_vol{};
        order_limit_prc m_order_limit_prc{};
        order_limit_ref_uprc m_order_limit_ref_uprc{};
        child_shape m_child_shape{};
        child_size m_child_size{};
        child_price m_child_price{};
        child_exch m_child_exch{};
        child_ex_dest m_child_ex_dest{};
        child_dttm m_child_dttm{};
        child_ubid m_child_ubid{};
        child_uask m_child_uask{};
        child_bid m_child_bid{};
        child_ask m_child_ask{};
        child_surf_prc m_child_surf_prc{};
        child_vol m_child_vol{};
        child_prob m_child_prob{};
        child_limit_prc m_child_limit_prc{};
        child_limit_ref_uprc m_child_limit_ref_uprc{};
        child_limit_pnl m_child_limit_pnl{};
        child_algo_handler m_child_algo_handler{};
        child_order_handling m_child_order_handling{};
        child_create_reason m_child_create_reason{};
        child_cancel_reason m_child_cancel_reason{};
        child_mkt_stance m_child_mkt_stance{};
        child_cxl_attempted m_child_cxl_attempted{};
        child_cxl_fill_latency m_child_cxl_fill_latency{};
        fill_exch m_fill_exch{};
        fill_price m_fill_price{};
        fill_ts m_fill_ts{};
        fill_dttm m_fill_dttm{};
        fill_size m_fill_size{};
        eff_fill_size m_eff_fill_size{};
        fill_vol m_fill_vol{};
        fill_prob m_fill_prob{};
        fill_limit_prc m_fill_limit_prc{};
        fill_limit_ref_uprc m_fill_limit_ref_uprc{};
        fill_limit_pnl m_fill_limit_pnl{};
        fill_de m_fill_de{};
        fill_ve m_fill_ve{};
        fill_th m_fill_th{};
        fill_uprc m_fill_uprc{};
        fill_beta m_fill_beta{};
        fill_tv m_fill_tv{};
        fill_tp m_fill_tp{};
        fill_ubid m_fill_ubid{};
        fill_uask m_fill_uask{};
        fill_bid m_fill_bid{};
        fill_ask m_fill_ask{};
        fill_surf_prc m_fill_surf_prc{};
        fill_post_umark1_m m_fill_post_umark1_m{};
        fill_post_umark10_m m_fill_post_umark10_m{};
        fill_post_mark1_m m_fill_post_mark1_m{};
        fill_post_mark10_m m_fill_post_mark10_m{};
        margin_udn_vdn m_margin_udn_vdn{};
        margin_udn_vup m_margin_udn_vup{};
        margin_uup_vdn m_margin_uup_vdn{};
        margin_uup_vup m_margin_uup_vup{};
        risk_code m_risk_code{};
        exch_liquidity_tag m_exch_liquidity_tag{};
        spdr_liquidity_tag m_spdr_liquidity_tag{};
        fill_exch_detail m_fill_exch_detail{};
        notional_value m_notional_value{};
        market_value m_market_value{};
        order_mkt_width m_order_mkt_width{};
        child_mkt_width m_child_mkt_width{};
        fill_mkt_width m_fill_mkt_width{};
        parent_order_age m_parent_order_age{};
        parent_age_code m_parent_age_code{};
        trd_delta m_trd_delta{};
        trd_ddelta m_trd_ddelta{};
        trd_gamma m_trd_gamma{};
        trd_vega m_trd_vega{};
        trd_wt_vega m_trd_wt_vega{};
        trd_theta m_trd_theta{};
        trd_prem m_trd_prem{};
        trd_beta m_trd_beta{};
        trd_dbeta m_trd_dbeta{};
        surf_edge m_surf_edge{};
        surf_edge_unit m_surf_edge_unit{};
        theo_edge m_theo_edge{};
        theo_edge_unit m_theo_edge_unit{};
        exch_fee m_exch_fee{};
        half_width_pnl m_half_width_pnl{};
        cl_arrive_pnl m_cl_arrive_pnl{};
        arrive_pnl m_arrive_pnl{};
        arrive_dn_pnl m_arrive_dn_pnl{};
        u_drift_arrive_pnl m_u_drift_arrive_pnl{};
        day_dn_pnl m_day_dn_pnl{};
        day_m1_pnl m_day_m1_pnl{};
        day_m10_pnl m_day_m10_pnl{};
        u_drift_day_pnl m_u_drift_day_pnl{};
        u_drift_m1_pnl m_u_drift_m1_pnl{};
        u_drift_m10_pnl m_u_drift_m10_pnl{};
        day_pnl m_day_pnl{};
        live_mark m_live_mark{};
        live_uprc m_live_uprc{};
        pend_mark m_pend_mark{};
        pend_uprc m_pend_uprc{};
        trd_mark_error m_trd_mark_error{};
        day_mark_error m_day_mark_error{};
        user_data1 m_user_data1{};
        user_data2 m_user_data2{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        run_status get_run_status() const {
            return m_run_status;
        }		
        sys_environment get_sys_environment() const {
            return m_sys_environment;
        }		
        version get_version() const {
            return m_version;
        }		
        cl_ord_id get_cl_ord_id() const {
            return m_cl_ord_id;
        }		
        parent_number get_parent_number() const {
            return m_parent_number;
        }		
        package_id get_package_id() const {
            return m_package_id;
        }		
        alt_order_id get_alt_order_id() const {
            return m_alt_order_id;
        }		
        src_routing_code get_src_routing_code() const {
            return m_src_routing_code;
        }		
        spdr_source get_spdr_source() const {
            return m_spdr_source;
        }		
        grouping_code get_grouping_code() const {
            return m_grouping_code;
        }		
        accnt get_accnt() const {
            return m_accnt;
        }		
        client_firm get_client_firm() const {
            return m_client_firm;
        }		
        pri_agg_group get_pri_agg_group() const {
            return m_pri_agg_group;
        }		
        sec_agg_group get_sec_agg_group() const {
            return m_sec_agg_group;
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
        view_group1 get_view_group1() const {
            return m_view_group1;
        }		
        view_group2 get_view_group2() const {
            return m_view_group2;
        }		
        view_group3 get_view_group3() const {
            return m_view_group3;
        }		
        risk_class get_risk_class() const {
            return m_risk_class;
        }		
        symbol_type get_symbol_type() const {
            return m_symbol_type;
        }		
        sector get_sector() const {
            return m_sector;
        }		
        ind_num get_ind_num() const {
            return m_ind_num;
        }		
        sub_num get_sub_num() const {
            return m_sub_num;
        }		
        grp_num get_grp_num() const {
            return m_grp_num;
        }		
        nbr_num get_nbr_num() const {
            return m_nbr_num;
        }		
        edays get_edays() const {
            return m_edays;
        }		
        exp_code get_exp_code() const {
            return m_exp_code;
        }		
        skew_code get_skew_code() const {
            return m_skew_code;
        }		
        width_code get_width_code() const {
            return m_width_code;
        }		
        price_format get_price_format() const {
            return m_price_format;
        }		
        u_price_format get_u_price_format() const {
            return m_u_price_format;
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
        routing_code get_routing_code() const {
            return m_routing_code;
        }		
        orig_exec_id get_orig_exec_id() const {
            return m_orig_exec_id;
        }		
        last_exec_id get_last_exec_id() const {
            return m_last_exec_id;
        }		
        transact_dttm get_transact_dttm() const {
            return m_transact_dttm;
        }		
        exec_status get_exec_status() const {
            return m_exec_status;
        }		
        remote_text get_remote_text() const {
            return m_remote_text;
        }		
        order_limit_type get_order_limit_type() const {
            return m_order_limit_type;
        }		
        order_limit_class get_order_limit_class() const {
            return m_order_limit_class;
        }		
        parent_shape get_parent_shape() const {
            return m_parent_shape;
        }		
        parent_order_handling get_parent_order_handling() const {
            return m_parent_order_handling;
        }		
        parent_balance_handling get_parent_balance_handling() const {
            return m_parent_balance_handling;
        }		
        parent_order_size get_parent_order_size() const {
            return m_parent_order_size;
        }		
        method get_method() const {
            return m_method;
        }		
        strategy get_strategy() const {
            return m_strategy;
        }		
        user_name get_user_name() const {
            return m_user_name;
        }		
        origin get_origin() const {
            return m_origin;
        }		
        source get_source() const {
            return m_source;
        }		
        server get_server() const {
            return m_server;
        }		
        clearing_firm get_clearing_firm() const {
            return m_clearing_firm;
        }		
        clearing_accnt get_clearing_accnt() const {
            return m_clearing_accnt;
        }		
        last_capacity get_last_capacity() const {
            return m_last_capacity;
        }		
        exec_role get_exec_role() const {
            return m_exec_role;
        }		
        exec_brkr_code get_exec_brkr_code() const {
            return m_exec_brkr_code;
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
        risk_group_id get_risk_group_id() const {
            return m_risk_group_id;
        }		
        fill_brkr_rate get_fill_brkr_rate() const {
            return m_fill_brkr_rate;
        }		
        fill_routing_rate get_fill_routing_rate() const {
            return m_fill_routing_rate;
        }		
        billing_sec_type get_billing_sec_type() const {
            return m_billing_sec_type;
        }		
        billing_category get_billing_category() const {
            return m_billing_category;
        }		
        firm_type get_firm_type() const {
            return m_firm_type;
        }		
        side get_side() const {
            return m_side;
        }		
        price_type get_price_type() const {
            return m_price_type;
        }		
        ssale_flag get_ssale_flag() const {
            return m_ssale_flag;
        }		
        spdr_ssale_flag get_spdr_ssale_flag() const {
            return m_spdr_ssale_flag;
        }		
        position_type get_position_type() const {
            return m_position_type;
        }		
        auto_hedge get_auto_hedge() const {
            return m_auto_hedge;
        }		
        order_dttm get_order_dttm() const {
            return m_order_dttm;
        }		
        order_ubid get_order_ubid() const {
            return m_order_ubid;
        }		
        order_uask get_order_uask() const {
            return m_order_uask;
        }		
        order_bid get_order_bid() const {
            return m_order_bid;
        }		
        order_ask get_order_ask() const {
            return m_order_ask;
        }		
        order_surf_prc get_order_surf_prc() const {
            return m_order_surf_prc;
        }		
        order_surf_vol get_order_surf_vol() const {
            return m_order_surf_vol;
        }		
        order_limit_vol get_order_limit_vol() const {
            return m_order_limit_vol;
        }		
        order_limit_prc get_order_limit_prc() const {
            return m_order_limit_prc;
        }		
        order_limit_ref_uprc get_order_limit_ref_uprc() const {
            return m_order_limit_ref_uprc;
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
        child_exch get_child_exch() const {
            return m_child_exch;
        }		
        child_ex_dest get_child_ex_dest() const {
            return m_child_ex_dest;
        }		
        child_dttm get_child_dttm() const {
            return m_child_dttm;
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
        child_surf_prc get_child_surf_prc() const {
            return m_child_surf_prc;
        }		
        child_vol get_child_vol() const {
            return m_child_vol;
        }		
        child_prob get_child_prob() const {
            return m_child_prob;
        }		
        child_limit_prc get_child_limit_prc() const {
            return m_child_limit_prc;
        }		
        child_limit_ref_uprc get_child_limit_ref_uprc() const {
            return m_child_limit_ref_uprc;
        }		
        child_limit_pnl get_child_limit_pnl() const {
            return m_child_limit_pnl;
        }		
        child_algo_handler get_child_algo_handler() const {
            return m_child_algo_handler;
        }		
        child_order_handling get_child_order_handling() const {
            return m_child_order_handling;
        }		
        child_create_reason get_child_create_reason() const {
            return m_child_create_reason;
        }		
        child_cancel_reason get_child_cancel_reason() const {
            return m_child_cancel_reason;
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
        fill_exch get_fill_exch() const {
            return m_fill_exch;
        }		
        fill_price get_fill_price() const {
            return m_fill_price;
        }		
        fill_ts get_fill_ts() const {
            return m_fill_ts;
        }		
        fill_dttm get_fill_dttm() const {
            return m_fill_dttm;
        }		
        fill_size get_fill_size() const {
            return m_fill_size;
        }		
        eff_fill_size get_eff_fill_size() const {
            return m_eff_fill_size;
        }		
        fill_vol get_fill_vol() const {
            return m_fill_vol;
        }		
        fill_prob get_fill_prob() const {
            return m_fill_prob;
        }		
        fill_limit_prc get_fill_limit_prc() const {
            return m_fill_limit_prc;
        }		
        fill_limit_ref_uprc get_fill_limit_ref_uprc() const {
            return m_fill_limit_ref_uprc;
        }		
        fill_limit_pnl get_fill_limit_pnl() const {
            return m_fill_limit_pnl;
        }		
        fill_de get_fill_de() const {
            return m_fill_de;
        }		
        fill_ve get_fill_ve() const {
            return m_fill_ve;
        }		
        fill_th get_fill_th() const {
            return m_fill_th;
        }		
        fill_uprc get_fill_uprc() const {
            return m_fill_uprc;
        }		
        fill_beta get_fill_beta() const {
            return m_fill_beta;
        }		
        fill_tv get_fill_tv() const {
            return m_fill_tv;
        }		
        fill_tp get_fill_tp() const {
            return m_fill_tp;
        }		
        fill_ubid get_fill_ubid() const {
            return m_fill_ubid;
        }		
        fill_uask get_fill_uask() const {
            return m_fill_uask;
        }		
        fill_bid get_fill_bid() const {
            return m_fill_bid;
        }		
        fill_ask get_fill_ask() const {
            return m_fill_ask;
        }		
        fill_surf_prc get_fill_surf_prc() const {
            return m_fill_surf_prc;
        }		
        fill_post_umark1_m get_fill_post_umark1_m() const {
            return m_fill_post_umark1_m;
        }		
        fill_post_umark10_m get_fill_post_umark10_m() const {
            return m_fill_post_umark10_m;
        }		
        fill_post_mark1_m get_fill_post_mark1_m() const {
            return m_fill_post_mark1_m;
        }		
        fill_post_mark10_m get_fill_post_mark10_m() const {
            return m_fill_post_mark10_m;
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
        risk_code get_risk_code() const {
            return m_risk_code;
        }		
        exch_liquidity_tag get_exch_liquidity_tag() const {
            return m_exch_liquidity_tag;
        }		
        spdr_liquidity_tag get_spdr_liquidity_tag() const {
            return m_spdr_liquidity_tag;
        }		
        fill_exch_detail get_fill_exch_detail() const {
            return m_fill_exch_detail;
        }		
        notional_value get_notional_value() const {
            return m_notional_value;
        }		
        market_value get_market_value() const {
            return m_market_value;
        }		
        order_mkt_width get_order_mkt_width() const {
            return m_order_mkt_width;
        }		
        child_mkt_width get_child_mkt_width() const {
            return m_child_mkt_width;
        }		
        fill_mkt_width get_fill_mkt_width() const {
            return m_fill_mkt_width;
        }		
        parent_order_age get_parent_order_age() const {
            return m_parent_order_age;
        }		
        parent_age_code get_parent_age_code() const {
            return m_parent_age_code;
        }		
        trd_delta get_trd_delta() const {
            return m_trd_delta;
        }		
        trd_ddelta get_trd_ddelta() const {
            return m_trd_ddelta;
        }		
        trd_gamma get_trd_gamma() const {
            return m_trd_gamma;
        }		
        trd_vega get_trd_vega() const {
            return m_trd_vega;
        }		
        trd_wt_vega get_trd_wt_vega() const {
            return m_trd_wt_vega;
        }		
        trd_theta get_trd_theta() const {
            return m_trd_theta;
        }		
        trd_prem get_trd_prem() const {
            return m_trd_prem;
        }		
        trd_beta get_trd_beta() const {
            return m_trd_beta;
        }		
        trd_dbeta get_trd_dbeta() const {
            return m_trd_dbeta;
        }		
        surf_edge get_surf_edge() const {
            return m_surf_edge;
        }		
        surf_edge_unit get_surf_edge_unit() const {
            return m_surf_edge_unit;
        }		
        theo_edge get_theo_edge() const {
            return m_theo_edge;
        }		
        theo_edge_unit get_theo_edge_unit() const {
            return m_theo_edge_unit;
        }		
        exch_fee get_exch_fee() const {
            return m_exch_fee;
        }		
        half_width_pnl get_half_width_pnl() const {
            return m_half_width_pnl;
        }		
        cl_arrive_pnl get_cl_arrive_pnl() const {
            return m_cl_arrive_pnl;
        }		
        arrive_pnl get_arrive_pnl() const {
            return m_arrive_pnl;
        }		
        arrive_dn_pnl get_arrive_dn_pnl() const {
            return m_arrive_dn_pnl;
        }		
        u_drift_arrive_pnl get_u_drift_arrive_pnl() const {
            return m_u_drift_arrive_pnl;
        }		
        day_dn_pnl get_day_dn_pnl() const {
            return m_day_dn_pnl;
        }		
        day_m1_pnl get_day_m1_pnl() const {
            return m_day_m1_pnl;
        }		
        day_m10_pnl get_day_m10_pnl() const {
            return m_day_m10_pnl;
        }		
        u_drift_day_pnl get_u_drift_day_pnl() const {
            return m_u_drift_day_pnl;
        }		
        u_drift_m1_pnl get_u_drift_m1_pnl() const {
            return m_u_drift_m1_pnl;
        }		
        u_drift_m10_pnl get_u_drift_m10_pnl() const {
            return m_u_drift_m10_pnl;
        }		
        day_pnl get_day_pnl() const {
            return m_day_pnl;
        }		
        live_mark get_live_mark() const {
            return m_live_mark;
        }		
        live_uprc get_live_uprc() const {
            return m_live_uprc;
        }		
        pend_mark get_pend_mark() const {
            return m_pend_mark;
        }		
        pend_uprc get_pend_uprc() const {
            return m_pend_uprc;
        }		
        trd_mark_error get_trd_mark_error() const {
            return m_trd_mark_error;
        }		
        day_mark_error get_day_mark_error() const {
            return m_day_mark_error;
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
        void set_run_status(const run_status& value)  {
            m_run_status = value;
        }
        void set_sys_environment(const sys_environment& value)  {
            m_sys_environment = value;
        }
        void set_version(const version& value)  {
            m_version = value;
        }
        void set_cl_ord_id(const cl_ord_id& value)  {
            m_cl_ord_id = value;
        }
        void set_parent_number(const parent_number& value)  {
            m_parent_number = value;
        }
        void set_package_id(const package_id& value)  {
            m_package_id = value;
        }
        void set_alt_order_id(const alt_order_id& value)  {
            m_alt_order_id = value;
        }
        void set_src_routing_code(const src_routing_code& value)  {
            m_src_routing_code = value;
        }
        void set_spdr_source(const spdr_source& value)  {
            m_spdr_source = value;
        }
        void set_grouping_code(const grouping_code& value)  {
            m_grouping_code = value;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_pri_agg_group(const pri_agg_group& value)  {
            m_pri_agg_group = value;
        }
        void set_sec_agg_group(const sec_agg_group& value)  {
            m_sec_agg_group = value;
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
        void set_view_group1(const view_group1& value)  {
            m_view_group1 = value;
        }
        void set_view_group2(const view_group2& value)  {
            m_view_group2 = value;
        }
        void set_view_group3(const view_group3& value)  {
            m_view_group3 = value;
        }
        void set_risk_class(const risk_class& value)  {
            m_risk_class = value;
        }
        void set_symbol_type(const symbol_type& value)  {
            m_symbol_type = value;
        }
        void set_sector(const sector& value)  {
            m_sector = value;
        }
        void set_ind_num(const ind_num& value)  {
            m_ind_num = value;
        }
        void set_sub_num(const sub_num& value)  {
            m_sub_num = value;
        }
        void set_grp_num(const grp_num& value)  {
            m_grp_num = value;
        }
        void set_nbr_num(const nbr_num& value)  {
            m_nbr_num = value;
        }
        void set_edays(const edays& value)  {
            m_edays = value;
        }
        void set_exp_code(const exp_code& value)  {
            m_exp_code = value;
        }
        void set_skew_code(const skew_code& value)  {
            m_skew_code = value;
        }
        void set_width_code(const width_code& value)  {
            m_width_code = value;
        }
        void set_price_format(const price_format& value)  {
            m_price_format = value;
        }
        void set_u_price_format(const u_price_format& value)  {
            m_u_price_format = value;
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
        void set_routing_code(const routing_code& value)  {
            m_routing_code = value;
        }
        void set_orig_exec_id(const orig_exec_id& value)  {
            m_orig_exec_id = value;
        }
        void set_last_exec_id(const last_exec_id& value)  {
            m_last_exec_id = value;
        }
        void set_transact_dttm(const transact_dttm& value)  {
            m_transact_dttm = value;
        }
        void set_exec_status(const exec_status& value)  {
            m_exec_status = value;
        }
        void set_remote_text(const remote_text& value)  {
            m_remote_text = value;
        }
        void set_order_limit_type(const order_limit_type& value)  {
            m_order_limit_type = value;
        }
        void set_order_limit_class(const order_limit_class& value)  {
            m_order_limit_class = value;
        }
        void set_parent_shape(const parent_shape& value)  {
            m_parent_shape = value;
        }
        void set_parent_order_handling(const parent_order_handling& value)  {
            m_parent_order_handling = value;
        }
        void set_parent_balance_handling(const parent_balance_handling& value)  {
            m_parent_balance_handling = value;
        }
        void set_parent_order_size(const parent_order_size& value)  {
            m_parent_order_size = value;
        }
        void set_method(const method& value)  {
            m_method = value;
        }
        void set_strategy(const strategy& value)  {
            m_strategy = value;
        }
        void set_user_name(const user_name& value)  {
            m_user_name = value;
        }
        void set_origin(const origin& value)  {
            m_origin = value;
        }
        void set_source(const source& value)  {
            m_source = value;
        }
        void set_server(const server& value)  {
            m_server = value;
        }
        void set_clearing_firm(const clearing_firm& value)  {
            m_clearing_firm = value;
        }
        void set_clearing_accnt(const clearing_accnt& value)  {
            m_clearing_accnt = value;
        }
        void set_last_capacity(const last_capacity& value)  {
            m_last_capacity = value;
        }
        void set_exec_role(const exec_role& value)  {
            m_exec_role = value;
        }
        void set_exec_brkr_code(const exec_brkr_code& value)  {
            m_exec_brkr_code = value;
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
        void set_risk_group_id(const risk_group_id& value)  {
            m_risk_group_id = value;
        }
        void set_fill_brkr_rate(const fill_brkr_rate& value)  {
            m_fill_brkr_rate = value;
        }
        void set_fill_routing_rate(const fill_routing_rate& value)  {
            m_fill_routing_rate = value;
        }
        void set_billing_sec_type(const billing_sec_type& value)  {
            m_billing_sec_type = value;
        }
        void set_billing_category(const billing_category& value)  {
            m_billing_category = value;
        }
        void set_firm_type(const firm_type& value)  {
            m_firm_type = value;
        }
        void set_side(const side& value)  {
            m_side = value;
        }
        void set_price_type(const price_type& value)  {
            m_price_type = value;
        }
        void set_ssale_flag(const ssale_flag& value)  {
            m_ssale_flag = value;
        }
        void set_spdr_ssale_flag(const spdr_ssale_flag& value)  {
            m_spdr_ssale_flag = value;
        }
        void set_position_type(const position_type& value)  {
            m_position_type = value;
        }
        void set_auto_hedge(const auto_hedge& value)  {
            m_auto_hedge = value;
        }
        void set_order_dttm(const order_dttm& value)  {
            m_order_dttm = value;
        }
        void set_order_ubid(const order_ubid& value)  {
            m_order_ubid = value;
        }
        void set_order_uask(const order_uask& value)  {
            m_order_uask = value;
        }
        void set_order_bid(const order_bid& value)  {
            m_order_bid = value;
        }
        void set_order_ask(const order_ask& value)  {
            m_order_ask = value;
        }
        void set_order_surf_prc(const order_surf_prc& value)  {
            m_order_surf_prc = value;
        }
        void set_order_surf_vol(const order_surf_vol& value)  {
            m_order_surf_vol = value;
        }
        void set_order_limit_vol(const order_limit_vol& value)  {
            m_order_limit_vol = value;
        }
        void set_order_limit_prc(const order_limit_prc& value)  {
            m_order_limit_prc = value;
        }
        void set_order_limit_ref_uprc(const order_limit_ref_uprc& value)  {
            m_order_limit_ref_uprc = value;
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
        void set_child_exch(const child_exch& value)  {
            m_child_exch = value;
        }
        void set_child_ex_dest(const child_ex_dest& value)  {
            m_child_ex_dest = value;
        }
        void set_child_dttm(const child_dttm& value)  {
            m_child_dttm = value;
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
        void set_child_surf_prc(const child_surf_prc& value)  {
            m_child_surf_prc = value;
        }
        void set_child_vol(const child_vol& value)  {
            m_child_vol = value;
        }
        void set_child_prob(const child_prob& value)  {
            m_child_prob = value;
        }
        void set_child_limit_prc(const child_limit_prc& value)  {
            m_child_limit_prc = value;
        }
        void set_child_limit_ref_uprc(const child_limit_ref_uprc& value)  {
            m_child_limit_ref_uprc = value;
        }
        void set_child_limit_pnl(const child_limit_pnl& value)  {
            m_child_limit_pnl = value;
        }
        void set_child_algo_handler(const child_algo_handler& value)  {
            m_child_algo_handler = value;
        }
        void set_child_order_handling(const child_order_handling& value)  {
            m_child_order_handling = value;
        }
        void set_child_create_reason(const child_create_reason& value)  {
            m_child_create_reason = value;
        }
        void set_child_cancel_reason(const child_cancel_reason& value)  {
            m_child_cancel_reason = value;
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
        void set_fill_exch(const fill_exch& value)  {
            m_fill_exch = value;
        }
        void set_fill_price(const fill_price& value)  {
            m_fill_price = value;
        }
        void set_fill_ts(const fill_ts& value)  {
            m_fill_ts = value;
        }
        void set_fill_dttm(const fill_dttm& value)  {
            m_fill_dttm = value;
        }
        void set_fill_size(const fill_size& value)  {
            m_fill_size = value;
        }
        void set_eff_fill_size(const eff_fill_size& value)  {
            m_eff_fill_size = value;
        }
        void set_fill_vol(const fill_vol& value)  {
            m_fill_vol = value;
        }
        void set_fill_prob(const fill_prob& value)  {
            m_fill_prob = value;
        }
        void set_fill_limit_prc(const fill_limit_prc& value)  {
            m_fill_limit_prc = value;
        }
        void set_fill_limit_ref_uprc(const fill_limit_ref_uprc& value)  {
            m_fill_limit_ref_uprc = value;
        }
        void set_fill_limit_pnl(const fill_limit_pnl& value)  {
            m_fill_limit_pnl = value;
        }
        void set_fill_de(const fill_de& value)  {
            m_fill_de = value;
        }
        void set_fill_ve(const fill_ve& value)  {
            m_fill_ve = value;
        }
        void set_fill_th(const fill_th& value)  {
            m_fill_th = value;
        }
        void set_fill_uprc(const fill_uprc& value)  {
            m_fill_uprc = value;
        }
        void set_fill_beta(const fill_beta& value)  {
            m_fill_beta = value;
        }
        void set_fill_tv(const fill_tv& value)  {
            m_fill_tv = value;
        }
        void set_fill_tp(const fill_tp& value)  {
            m_fill_tp = value;
        }
        void set_fill_ubid(const fill_ubid& value)  {
            m_fill_ubid = value;
        }
        void set_fill_uask(const fill_uask& value)  {
            m_fill_uask = value;
        }
        void set_fill_bid(const fill_bid& value)  {
            m_fill_bid = value;
        }
        void set_fill_ask(const fill_ask& value)  {
            m_fill_ask = value;
        }
        void set_fill_surf_prc(const fill_surf_prc& value)  {
            m_fill_surf_prc = value;
        }
        void set_fill_post_umark1_m(const fill_post_umark1_m& value)  {
            m_fill_post_umark1_m = value;
        }
        void set_fill_post_umark10_m(const fill_post_umark10_m& value)  {
            m_fill_post_umark10_m = value;
        }
        void set_fill_post_mark1_m(const fill_post_mark1_m& value)  {
            m_fill_post_mark1_m = value;
        }
        void set_fill_post_mark10_m(const fill_post_mark10_m& value)  {
            m_fill_post_mark10_m = value;
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
        void set_risk_code(const risk_code& value)  {
            m_risk_code = value;
        }
        void set_exch_liquidity_tag(const exch_liquidity_tag& value)  {
            m_exch_liquidity_tag = value;
        }
        void set_spdr_liquidity_tag(const spdr_liquidity_tag& value)  {
            m_spdr_liquidity_tag = value;
        }
        void set_fill_exch_detail(const fill_exch_detail& value)  {
            m_fill_exch_detail = value;
        }
        void set_notional_value(const notional_value& value)  {
            m_notional_value = value;
        }
        void set_market_value(const market_value& value)  {
            m_market_value = value;
        }
        void set_order_mkt_width(const order_mkt_width& value)  {
            m_order_mkt_width = value;
        }
        void set_child_mkt_width(const child_mkt_width& value)  {
            m_child_mkt_width = value;
        }
        void set_fill_mkt_width(const fill_mkt_width& value)  {
            m_fill_mkt_width = value;
        }
        void set_parent_order_age(const parent_order_age& value)  {
            m_parent_order_age = value;
        }
        void set_parent_age_code(const parent_age_code& value)  {
            m_parent_age_code = value;
        }
        void set_trd_delta(const trd_delta& value)  {
            m_trd_delta = value;
        }
        void set_trd_ddelta(const trd_ddelta& value)  {
            m_trd_ddelta = value;
        }
        void set_trd_gamma(const trd_gamma& value)  {
            m_trd_gamma = value;
        }
        void set_trd_vega(const trd_vega& value)  {
            m_trd_vega = value;
        }
        void set_trd_wt_vega(const trd_wt_vega& value)  {
            m_trd_wt_vega = value;
        }
        void set_trd_theta(const trd_theta& value)  {
            m_trd_theta = value;
        }
        void set_trd_prem(const trd_prem& value)  {
            m_trd_prem = value;
        }
        void set_trd_beta(const trd_beta& value)  {
            m_trd_beta = value;
        }
        void set_trd_dbeta(const trd_dbeta& value)  {
            m_trd_dbeta = value;
        }
        void set_surf_edge(const surf_edge& value)  {
            m_surf_edge = value;
        }
        void set_surf_edge_unit(const surf_edge_unit& value)  {
            m_surf_edge_unit = value;
        }
        void set_theo_edge(const theo_edge& value)  {
            m_theo_edge = value;
        }
        void set_theo_edge_unit(const theo_edge_unit& value)  {
            m_theo_edge_unit = value;
        }
        void set_exch_fee(const exch_fee& value)  {
            m_exch_fee = value;
        }
        void set_half_width_pnl(const half_width_pnl& value)  {
            m_half_width_pnl = value;
        }
        void set_cl_arrive_pnl(const cl_arrive_pnl& value)  {
            m_cl_arrive_pnl = value;
        }
        void set_arrive_pnl(const arrive_pnl& value)  {
            m_arrive_pnl = value;
        }
        void set_arrive_dn_pnl(const arrive_dn_pnl& value)  {
            m_arrive_dn_pnl = value;
        }
        void set_u_drift_arrive_pnl(const u_drift_arrive_pnl& value)  {
            m_u_drift_arrive_pnl = value;
        }
        void set_day_dn_pnl(const day_dn_pnl& value)  {
            m_day_dn_pnl = value;
        }
        void set_day_m1_pnl(const day_m1_pnl& value)  {
            m_day_m1_pnl = value;
        }
        void set_day_m10_pnl(const day_m10_pnl& value)  {
            m_day_m10_pnl = value;
        }
        void set_u_drift_day_pnl(const u_drift_day_pnl& value)  {
            m_u_drift_day_pnl = value;
        }
        void set_u_drift_m1_pnl(const u_drift_m1_pnl& value)  {
            m_u_drift_m1_pnl = value;
        }
        void set_u_drift_m10_pnl(const u_drift_m10_pnl& value)  {
            m_u_drift_m10_pnl = value;
        }
        void set_day_pnl(const day_pnl& value)  {
            m_day_pnl = value;
        }
        void set_live_mark(const live_mark& value)  {
            m_live_mark = value;
        }
        void set_live_uprc(const live_uprc& value)  {
            m_live_uprc = value;
        }
        void set_pend_mark(const pend_mark& value)  {
            m_pend_mark = value;
        }
        void set_pend_uprc(const pend_uprc& value)  {
            m_pend_uprc = value;
        }
        void set_trd_mark_error(const trd_mark_error& value)  {
            m_trd_mark_error = value;
        }
        void set_day_mark_error(const day_mark_error& value)  {
            m_day_mark_error = value;
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

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to TradeCubeDetailV5::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const run_status & value) {
            set_run_status(value);
        }
        void set(const sys_environment & value) {
            set_sys_environment(value);
        }
        void set(const version & value) {
            set_version(value);
        }
        void set(const cl_ord_id & value) {
            set_cl_ord_id(value);
        }
        void set(const parent_number & value) {
            set_parent_number(value);
        }
        void set(const package_id & value) {
            set_package_id(value);
        }
        void set(const alt_order_id & value) {
            set_alt_order_id(value);
        }
        void set(const src_routing_code & value) {
            set_src_routing_code(value);
        }
        void set(const spdr_source & value) {
            set_spdr_source(value);
        }
        void set(const grouping_code & value) {
            set_grouping_code(value);
        }
        void set(const accnt & value) {
            set_accnt(value);
        }
        void set(const client_firm & value) {
            set_client_firm(value);
        }
        void set(const pri_agg_group & value) {
            set_pri_agg_group(value);
        }
        void set(const sec_agg_group & value) {
            set_sec_agg_group(value);
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
        void set(const view_group1 & value) {
            set_view_group1(value);
        }
        void set(const view_group2 & value) {
            set_view_group2(value);
        }
        void set(const view_group3 & value) {
            set_view_group3(value);
        }
        void set(const risk_class & value) {
            set_risk_class(value);
        }
        void set(const symbol_type & value) {
            set_symbol_type(value);
        }
        void set(const sector & value) {
            set_sector(value);
        }
        void set(const ind_num & value) {
            set_ind_num(value);
        }
        void set(const sub_num & value) {
            set_sub_num(value);
        }
        void set(const grp_num & value) {
            set_grp_num(value);
        }
        void set(const nbr_num & value) {
            set_nbr_num(value);
        }
        void set(const edays & value) {
            set_edays(value);
        }
        void set(const exp_code & value) {
            set_exp_code(value);
        }
        void set(const skew_code & value) {
            set_skew_code(value);
        }
        void set(const width_code & value) {
            set_width_code(value);
        }
        void set(const price_format & value) {
            set_price_format(value);
        }
        void set(const u_price_format & value) {
            set_u_price_format(value);
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
        void set(const routing_code & value) {
            set_routing_code(value);
        }
        void set(const orig_exec_id & value) {
            set_orig_exec_id(value);
        }
        void set(const last_exec_id & value) {
            set_last_exec_id(value);
        }
        void set(const transact_dttm & value) {
            set_transact_dttm(value);
        }
        void set(const exec_status & value) {
            set_exec_status(value);
        }
        void set(const remote_text & value) {
            set_remote_text(value);
        }
        void set(const order_limit_type & value) {
            set_order_limit_type(value);
        }
        void set(const order_limit_class & value) {
            set_order_limit_class(value);
        }
        void set(const parent_shape & value) {
            set_parent_shape(value);
        }
        void set(const parent_order_handling & value) {
            set_parent_order_handling(value);
        }
        void set(const parent_balance_handling & value) {
            set_parent_balance_handling(value);
        }
        void set(const parent_order_size & value) {
            set_parent_order_size(value);
        }
        void set(const method & value) {
            set_method(value);
        }
        void set(const strategy & value) {
            set_strategy(value);
        }
        void set(const user_name & value) {
            set_user_name(value);
        }
        void set(const origin & value) {
            set_origin(value);
        }
        void set(const source & value) {
            set_source(value);
        }
        void set(const server & value) {
            set_server(value);
        }
        void set(const clearing_firm & value) {
            set_clearing_firm(value);
        }
        void set(const clearing_accnt & value) {
            set_clearing_accnt(value);
        }
        void set(const last_capacity & value) {
            set_last_capacity(value);
        }
        void set(const exec_role & value) {
            set_exec_role(value);
        }
        void set(const exec_brkr_code & value) {
            set_exec_brkr_code(value);
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
        void set(const risk_group_id & value) {
            set_risk_group_id(value);
        }
        void set(const fill_brkr_rate & value) {
            set_fill_brkr_rate(value);
        }
        void set(const fill_routing_rate & value) {
            set_fill_routing_rate(value);
        }
        void set(const billing_sec_type & value) {
            set_billing_sec_type(value);
        }
        void set(const billing_category & value) {
            set_billing_category(value);
        }
        void set(const firm_type & value) {
            set_firm_type(value);
        }
        void set(const side & value) {
            set_side(value);
        }
        void set(const price_type & value) {
            set_price_type(value);
        }
        void set(const ssale_flag & value) {
            set_ssale_flag(value);
        }
        void set(const spdr_ssale_flag & value) {
            set_spdr_ssale_flag(value);
        }
        void set(const position_type & value) {
            set_position_type(value);
        }
        void set(const auto_hedge & value) {
            set_auto_hedge(value);
        }
        void set(const order_dttm & value) {
            set_order_dttm(value);
        }
        void set(const order_ubid & value) {
            set_order_ubid(value);
        }
        void set(const order_uask & value) {
            set_order_uask(value);
        }
        void set(const order_bid & value) {
            set_order_bid(value);
        }
        void set(const order_ask & value) {
            set_order_ask(value);
        }
        void set(const order_surf_prc & value) {
            set_order_surf_prc(value);
        }
        void set(const order_surf_vol & value) {
            set_order_surf_vol(value);
        }
        void set(const order_limit_vol & value) {
            set_order_limit_vol(value);
        }
        void set(const order_limit_prc & value) {
            set_order_limit_prc(value);
        }
        void set(const order_limit_ref_uprc & value) {
            set_order_limit_ref_uprc(value);
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
        void set(const child_exch & value) {
            set_child_exch(value);
        }
        void set(const child_ex_dest & value) {
            set_child_ex_dest(value);
        }
        void set(const child_dttm & value) {
            set_child_dttm(value);
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
        void set(const child_surf_prc & value) {
            set_child_surf_prc(value);
        }
        void set(const child_vol & value) {
            set_child_vol(value);
        }
        void set(const child_prob & value) {
            set_child_prob(value);
        }
        void set(const child_limit_prc & value) {
            set_child_limit_prc(value);
        }
        void set(const child_limit_ref_uprc & value) {
            set_child_limit_ref_uprc(value);
        }
        void set(const child_limit_pnl & value) {
            set_child_limit_pnl(value);
        }
        void set(const child_algo_handler & value) {
            set_child_algo_handler(value);
        }
        void set(const child_order_handling & value) {
            set_child_order_handling(value);
        }
        void set(const child_create_reason & value) {
            set_child_create_reason(value);
        }
        void set(const child_cancel_reason & value) {
            set_child_cancel_reason(value);
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
        void set(const fill_exch & value) {
            set_fill_exch(value);
        }
        void set(const fill_price & value) {
            set_fill_price(value);
        }
        void set(const fill_ts & value) {
            set_fill_ts(value);
        }
        void set(const fill_dttm & value) {
            set_fill_dttm(value);
        }
        void set(const fill_size & value) {
            set_fill_size(value);
        }
        void set(const eff_fill_size & value) {
            set_eff_fill_size(value);
        }
        void set(const fill_vol & value) {
            set_fill_vol(value);
        }
        void set(const fill_prob & value) {
            set_fill_prob(value);
        }
        void set(const fill_limit_prc & value) {
            set_fill_limit_prc(value);
        }
        void set(const fill_limit_ref_uprc & value) {
            set_fill_limit_ref_uprc(value);
        }
        void set(const fill_limit_pnl & value) {
            set_fill_limit_pnl(value);
        }
        void set(const fill_de & value) {
            set_fill_de(value);
        }
        void set(const fill_ve & value) {
            set_fill_ve(value);
        }
        void set(const fill_th & value) {
            set_fill_th(value);
        }
        void set(const fill_uprc & value) {
            set_fill_uprc(value);
        }
        void set(const fill_beta & value) {
            set_fill_beta(value);
        }
        void set(const fill_tv & value) {
            set_fill_tv(value);
        }
        void set(const fill_tp & value) {
            set_fill_tp(value);
        }
        void set(const fill_ubid & value) {
            set_fill_ubid(value);
        }
        void set(const fill_uask & value) {
            set_fill_uask(value);
        }
        void set(const fill_bid & value) {
            set_fill_bid(value);
        }
        void set(const fill_ask & value) {
            set_fill_ask(value);
        }
        void set(const fill_surf_prc & value) {
            set_fill_surf_prc(value);
        }
        void set(const fill_post_umark1_m & value) {
            set_fill_post_umark1_m(value);
        }
        void set(const fill_post_umark10_m & value) {
            set_fill_post_umark10_m(value);
        }
        void set(const fill_post_mark1_m & value) {
            set_fill_post_mark1_m(value);
        }
        void set(const fill_post_mark10_m & value) {
            set_fill_post_mark10_m(value);
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
        void set(const risk_code & value) {
            set_risk_code(value);
        }
        void set(const exch_liquidity_tag & value) {
            set_exch_liquidity_tag(value);
        }
        void set(const spdr_liquidity_tag & value) {
            set_spdr_liquidity_tag(value);
        }
        void set(const fill_exch_detail & value) {
            set_fill_exch_detail(value);
        }
        void set(const notional_value & value) {
            set_notional_value(value);
        }
        void set(const market_value & value) {
            set_market_value(value);
        }
        void set(const order_mkt_width & value) {
            set_order_mkt_width(value);
        }
        void set(const child_mkt_width & value) {
            set_child_mkt_width(value);
        }
        void set(const fill_mkt_width & value) {
            set_fill_mkt_width(value);
        }
        void set(const parent_order_age & value) {
            set_parent_order_age(value);
        }
        void set(const parent_age_code & value) {
            set_parent_age_code(value);
        }
        void set(const trd_delta & value) {
            set_trd_delta(value);
        }
        void set(const trd_ddelta & value) {
            set_trd_ddelta(value);
        }
        void set(const trd_gamma & value) {
            set_trd_gamma(value);
        }
        void set(const trd_vega & value) {
            set_trd_vega(value);
        }
        void set(const trd_wt_vega & value) {
            set_trd_wt_vega(value);
        }
        void set(const trd_theta & value) {
            set_trd_theta(value);
        }
        void set(const trd_prem & value) {
            set_trd_prem(value);
        }
        void set(const trd_beta & value) {
            set_trd_beta(value);
        }
        void set(const trd_dbeta & value) {
            set_trd_dbeta(value);
        }
        void set(const surf_edge & value) {
            set_surf_edge(value);
        }
        void set(const surf_edge_unit & value) {
            set_surf_edge_unit(value);
        }
        void set(const theo_edge & value) {
            set_theo_edge(value);
        }
        void set(const theo_edge_unit & value) {
            set_theo_edge_unit(value);
        }
        void set(const exch_fee & value) {
            set_exch_fee(value);
        }
        void set(const half_width_pnl & value) {
            set_half_width_pnl(value);
        }
        void set(const cl_arrive_pnl & value) {
            set_cl_arrive_pnl(value);
        }
        void set(const arrive_pnl & value) {
            set_arrive_pnl(value);
        }
        void set(const arrive_dn_pnl & value) {
            set_arrive_dn_pnl(value);
        }
        void set(const u_drift_arrive_pnl & value) {
            set_u_drift_arrive_pnl(value);
        }
        void set(const day_dn_pnl & value) {
            set_day_dn_pnl(value);
        }
        void set(const day_m1_pnl & value) {
            set_day_m1_pnl(value);
        }
        void set(const day_m10_pnl & value) {
            set_day_m10_pnl(value);
        }
        void set(const u_drift_day_pnl & value) {
            set_u_drift_day_pnl(value);
        }
        void set(const u_drift_m1_pnl & value) {
            set_u_drift_m1_pnl(value);
        }
        void set(const u_drift_m10_pnl & value) {
            set_u_drift_m10_pnl(value);
        }
        void set(const day_pnl & value) {
            set_day_pnl(value);
        }
        void set(const live_mark & value) {
            set_live_mark(value);
        }
        void set(const live_uprc & value) {
            set_live_uprc(value);
        }
        void set(const pend_mark & value) {
            set_pend_mark(value);
        }
        void set(const pend_uprc & value) {
            set_pend_uprc(value);
        }
        void set(const trd_mark_error & value) {
            set_trd_mark_error(value);
        }
        void set(const day_mark_error & value) {
            set_day_mark_error(value);
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

        void set(const TradeCubeDetailV5 & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_run_status);
            set(value.m_sys_environment);
            set(value.m_version);
            set(value.m_cl_ord_id);
            set(value.m_parent_number);
            set(value.m_package_id);
            set(value.m_alt_order_id);
            set(value.m_src_routing_code);
            set(value.m_spdr_source);
            set(value.m_grouping_code);
            set(value.m_accnt);
            set(value.m_client_firm);
            set(value.m_pri_agg_group);
            set(value.m_sec_agg_group);
            set(value.m_sec_key);
            set(value.m_sec_type);
            set(value.m_ticker);
            set(value.m_view_group1);
            set(value.m_view_group2);
            set(value.m_view_group3);
            set(value.m_risk_class);
            set(value.m_symbol_type);
            set(value.m_sector);
            set(value.m_ind_num);
            set(value.m_sub_num);
            set(value.m_grp_num);
            set(value.m_nbr_num);
            set(value.m_edays);
            set(value.m_exp_code);
            set(value.m_skew_code);
            set(value.m_width_code);
            set(value.m_price_format);
            set(value.m_u_price_format);
            set(value.m_years);
            set(value.m_underliers_per_cn);
            set(value.m_underlier_type);
            set(value.m_tick_value);
            set(value.m_point_value);
            set(value.m_point_currency);
            set(value.m_u_prc_ratio);
            set(value.m_min_tick_size);
            set(value.m_routing_code);
            set(value.m_orig_exec_id);
            set(value.m_last_exec_id);
            set(value.m_transact_dttm);
            set(value.m_exec_status);
            set(value.m_remote_text);
            set(value.m_order_limit_type);
            set(value.m_order_limit_class);
            set(value.m_parent_shape);
            set(value.m_parent_order_handling);
            set(value.m_parent_balance_handling);
            set(value.m_parent_order_size);
            set(value.m_method);
            set(value.m_strategy);
            set(value.m_user_name);
            set(value.m_origin);
            set(value.m_source);
            set(value.m_server);
            set(value.m_clearing_firm);
            set(value.m_clearing_accnt);
            set(value.m_last_capacity);
            set(value.m_exec_role);
            set(value.m_exec_brkr_code);
            set(value.m_exec_brkr_accnt);
            set(value.m_exec_brkr_cl_firm);
            set(value.m_exec_brkr_user_name);
            set(value.m_clearing_flip_type);
            set(value.m_clearing_flip_firm);
            set(value.m_clearing_flip_accnt);
            set(value.m_risk_group_id);
            set(value.m_fill_brkr_rate);
            set(value.m_fill_routing_rate);
            set(value.m_billing_sec_type);
            set(value.m_billing_category);
            set(value.m_firm_type);
            set(value.m_side);
            set(value.m_price_type);
            set(value.m_ssale_flag);
            set(value.m_spdr_ssale_flag);
            set(value.m_position_type);
            set(value.m_auto_hedge);
            set(value.m_order_dttm);
            set(value.m_order_ubid);
            set(value.m_order_uask);
            set(value.m_order_bid);
            set(value.m_order_ask);
            set(value.m_order_surf_prc);
            set(value.m_order_surf_vol);
            set(value.m_order_limit_vol);
            set(value.m_order_limit_prc);
            set(value.m_order_limit_ref_uprc);
            set(value.m_child_shape);
            set(value.m_child_size);
            set(value.m_child_price);
            set(value.m_child_exch);
            set(value.m_child_ex_dest);
            set(value.m_child_dttm);
            set(value.m_child_ubid);
            set(value.m_child_uask);
            set(value.m_child_bid);
            set(value.m_child_ask);
            set(value.m_child_surf_prc);
            set(value.m_child_vol);
            set(value.m_child_prob);
            set(value.m_child_limit_prc);
            set(value.m_child_limit_ref_uprc);
            set(value.m_child_limit_pnl);
            set(value.m_child_algo_handler);
            set(value.m_child_order_handling);
            set(value.m_child_create_reason);
            set(value.m_child_cancel_reason);
            set(value.m_child_mkt_stance);
            set(value.m_child_cxl_attempted);
            set(value.m_child_cxl_fill_latency);
            set(value.m_fill_exch);
            set(value.m_fill_price);
            set(value.m_fill_ts);
            set(value.m_fill_dttm);
            set(value.m_fill_size);
            set(value.m_eff_fill_size);
            set(value.m_fill_vol);
            set(value.m_fill_prob);
            set(value.m_fill_limit_prc);
            set(value.m_fill_limit_ref_uprc);
            set(value.m_fill_limit_pnl);
            set(value.m_fill_de);
            set(value.m_fill_ve);
            set(value.m_fill_th);
            set(value.m_fill_uprc);
            set(value.m_fill_beta);
            set(value.m_fill_tv);
            set(value.m_fill_tp);
            set(value.m_fill_ubid);
            set(value.m_fill_uask);
            set(value.m_fill_bid);
            set(value.m_fill_ask);
            set(value.m_fill_surf_prc);
            set(value.m_fill_post_umark1_m);
            set(value.m_fill_post_umark10_m);
            set(value.m_fill_post_mark1_m);
            set(value.m_fill_post_mark10_m);
            set(value.m_margin_udn_vdn);
            set(value.m_margin_udn_vup);
            set(value.m_margin_uup_vdn);
            set(value.m_margin_uup_vup);
            set(value.m_risk_code);
            set(value.m_exch_liquidity_tag);
            set(value.m_spdr_liquidity_tag);
            set(value.m_fill_exch_detail);
            set(value.m_notional_value);
            set(value.m_market_value);
            set(value.m_order_mkt_width);
            set(value.m_child_mkt_width);
            set(value.m_fill_mkt_width);
            set(value.m_parent_order_age);
            set(value.m_parent_age_code);
            set(value.m_trd_delta);
            set(value.m_trd_ddelta);
            set(value.m_trd_gamma);
            set(value.m_trd_vega);
            set(value.m_trd_wt_vega);
            set(value.m_trd_theta);
            set(value.m_trd_prem);
            set(value.m_trd_beta);
            set(value.m_trd_dbeta);
            set(value.m_surf_edge);
            set(value.m_surf_edge_unit);
            set(value.m_theo_edge);
            set(value.m_theo_edge_unit);
            set(value.m_exch_fee);
            set(value.m_half_width_pnl);
            set(value.m_cl_arrive_pnl);
            set(value.m_arrive_pnl);
            set(value.m_arrive_dn_pnl);
            set(value.m_u_drift_arrive_pnl);
            set(value.m_day_dn_pnl);
            set(value.m_day_m1_pnl);
            set(value.m_day_m10_pnl);
            set(value.m_u_drift_day_pnl);
            set(value.m_u_drift_m1_pnl);
            set(value.m_u_drift_m10_pnl);
            set(value.m_day_pnl);
            set(value.m_live_mark);
            set(value.m_live_uprc);
            set(value.m_pend_mark);
            set(value.m_pend_uprc);
            set(value.m_trd_mark_error);
            set(value.m_day_mark_error);
            set(value.m_user_data1);
            set(value.m_user_data2);
            set(value.m_timestamp);
        }

        TradeCubeDetailV5() {
            m__meta.set_message_type("TradeCubeDetailV5");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4870, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4870, length);
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
             *this = TradeCubeDetailV5{};
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
        bool IncludeClOrdId() const {
            return !(m_cl_ord_id.empty());
        }
        bool IncludeParentNumber() const {
            return !(m_parent_number == 0);
        }
        bool IncludePackageId() const {
            return !(m_package_id == 0);
        }
        bool IncludeAltOrderId() const {
            return !(m_alt_order_id.empty());
        }
        bool IncludeSrcRoutingCode() const {
            return !(m_src_routing_code.empty());
        }
        bool IncludeGroupingCode() const {
            return !(m_grouping_code == 0);
        }
        bool IncludeAccnt() const {
            return !(m_accnt.empty());
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }
        bool IncludePriAggGroup() const {
            return !(m_pri_agg_group.empty());
        }
        bool IncludeSecAggGroup() const {
            return !(m_sec_agg_group.empty());
        }
        bool IncludeSecKey() const {
            return (m_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
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
        bool IncludeSector() const {
            return !(m_sector.empty());
        }
        bool IncludeIndNum() const {
            return !(m_ind_num == 0);
        }
        bool IncludeSubNum() const {
            return !(m_sub_num == 0);
        }
        bool IncludeGrpNum() const {
            return !(m_grp_num == 0);
        }
        bool IncludeNbrNum() const {
            return !(m_nbr_num == 0);
        }
        bool IncludeEdays() const {
            return !(m_edays == 0);
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
        bool IncludeRoutingCode() const {
            return !(m_routing_code.empty());
        }
        bool IncludeOrigExecId() const {
            return !(m_orig_exec_id.empty());
        }
        bool IncludeLastExecId() const {
            return !(m_last_exec_id.empty());
        }
        bool IncludeTransactDttm() const {
            return (m_transact_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeRemoteText() const {
            return !(m_remote_text.empty());
        }
        bool IncludeParentOrderSize() const {
            return !(m_parent_order_size == 0);
        }
        bool IncludeMethod() const {
            return !(m_method.empty());
        }
        bool IncludeStrategy() const {
            return !(m_strategy.empty());
        }
        bool IncludeUserName() const {
            return !(m_user_name.empty());
        }
        bool IncludeOrigin() const {
            return !(m_origin.empty());
        }
        bool IncludeSource() const {
            return !(m_source.empty());
        }
        bool IncludeServer() const {
            return !(m_server.empty());
        }
        bool IncludeClearingFirm() const {
            return !(m_clearing_firm.empty());
        }
        bool IncludeClearingAccnt() const {
            return !(m_clearing_accnt.empty());
        }
        bool IncludeExecBrkrCode() const {
            return !(m_exec_brkr_code.empty());
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
        bool IncludeRiskGroupId() const {
            return !(m_risk_group_id == 0);
        }
        bool IncludeFillBrkrRate() const {
            return !(m_fill_brkr_rate == 0.0);
        }
        bool IncludeFillRoutingRate() const {
            return !(m_fill_routing_rate == 0.0);
        }
        bool IncludeOrderDttm() const {
            return (m_order_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeOrderUbid() const {
            return !(m_order_ubid == 0.0);
        }
        bool IncludeOrderUask() const {
            return !(m_order_uask == 0.0);
        }
        bool IncludeOrderBid() const {
            return !(m_order_bid == 0.0);
        }
        bool IncludeOrderAsk() const {
            return !(m_order_ask == 0.0);
        }
        bool IncludeOrderSurfPrc() const {
            return !(m_order_surf_prc == 0.0);
        }
        bool IncludeOrderSurfVol() const {
            return !(m_order_surf_vol == 0.0);
        }
        bool IncludeOrderLimitVol() const {
            return !(m_order_limit_vol == 0.0);
        }
        bool IncludeOrderLimitPrc() const {
            return !(m_order_limit_prc == 0.0);
        }
        bool IncludeOrderLimitRefUprc() const {
            return !(m_order_limit_ref_uprc == 0.0);
        }
        bool IncludeChildSize() const {
            return !(m_child_size == 0);
        }
        bool IncludeChildPrice() const {
            return !(m_child_price == 0.0);
        }
        bool IncludeChildExch() const {
            return !(m_child_exch.empty());
        }
        bool IncludeChildExDest() const {
            return !(m_child_ex_dest.empty());
        }
        bool IncludeChildDttm() const {
            return (m_child_dttm.time_since_epoch().count() != 0);
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
        bool IncludeChildSurfPrc() const {
            return !(m_child_surf_prc == 0.0);
        }
        bool IncludeChildVol() const {
            return !(m_child_vol == 0.0);
        }
        bool IncludeChildProb() const {
            return !(m_child_prob == 0.0);
        }
        bool IncludeChildLimitPrc() const {
            return !(m_child_limit_prc == 0.0);
        }
        bool IncludeChildLimitRefUprc() const {
            return !(m_child_limit_ref_uprc == 0.0);
        }
        bool IncludeChildLimitPnl() const {
            return !(m_child_limit_pnl == 0.0);
        }
        bool IncludeChildOrderHandling() const {
            return !(m_child_order_handling.empty());
        }
        bool IncludeChildCxlFillLatency() const {
            return !(m_child_cxl_fill_latency == 0.0);
        }
        bool IncludeFillExch() const {
            return !(m_fill_exch.empty());
        }
        bool IncludeFillPrice() const {
            return !(m_fill_price == 0.0);
        }
        bool IncludeFillTs() const {
            return !(m_fill_ts == 0.0);
        }
        bool IncludeFillDttm() const {
            return (m_fill_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeFillSize() const {
            return !(m_fill_size == 0);
        }
        bool IncludeEffFillSize() const {
            return !(m_eff_fill_size == 0);
        }
        bool IncludeFillVol() const {
            return !(m_fill_vol == 0.0);
        }
        bool IncludeFillProb() const {
            return !(m_fill_prob == 0.0);
        }
        bool IncludeFillLimitPrc() const {
            return !(m_fill_limit_prc == 0.0);
        }
        bool IncludeFillLimitRefUprc() const {
            return !(m_fill_limit_ref_uprc == 0.0);
        }
        bool IncludeFillLimitPnl() const {
            return !(m_fill_limit_pnl == 0.0);
        }
        bool IncludeFillDe() const {
            return !(m_fill_de == 0.0);
        }
        bool IncludeFillVe() const {
            return !(m_fill_ve == 0.0);
        }
        bool IncludeFillTh() const {
            return !(m_fill_th == 0.0);
        }
        bool IncludeFillUprc() const {
            return !(m_fill_uprc == 0.0);
        }
        bool IncludeFillBeta() const {
            return !(m_fill_beta == 0.0);
        }
        bool IncludeFillTv() const {
            return !(m_fill_tv == 0.0);
        }
        bool IncludeFillTp() const {
            return !(m_fill_tp == 0.0);
        }
        bool IncludeFillUbid() const {
            return !(m_fill_ubid == 0.0);
        }
        bool IncludeFillUask() const {
            return !(m_fill_uask == 0.0);
        }
        bool IncludeFillBid() const {
            return !(m_fill_bid == 0.0);
        }
        bool IncludeFillAsk() const {
            return !(m_fill_ask == 0.0);
        }
        bool IncludeFillSurfPrc() const {
            return !(m_fill_surf_prc == 0.0);
        }
        bool IncludeFillPostUmark1M() const {
            return !(m_fill_post_umark1_m == 0.0);
        }
        bool IncludeFillPostUmark10M() const {
            return !(m_fill_post_umark10_m == 0.0);
        }
        bool IncludeFillPostMark1M() const {
            return !(m_fill_post_mark1_m == 0.0);
        }
        bool IncludeFillPostMark10M() const {
            return !(m_fill_post_mark10_m == 0.0);
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
        bool IncludeExchLiquidityTag() const {
            return !(m_exch_liquidity_tag.empty());
        }
        bool IncludeSpdrLiquidityTag() const {
            return !(m_spdr_liquidity_tag.empty());
        }
        bool IncludeFillExchDetail() const {
            return !(m_fill_exch_detail.empty());
        }
        bool IncludeNotionalValue() const {
            return !(m_notional_value == 0.0);
        }
        bool IncludeMarketValue() const {
            return !(m_market_value == 0.0);
        }
        bool IncludeOrderMktWidth() const {
            return !(m_order_mkt_width == 0.0);
        }
        bool IncludeChildMktWidth() const {
            return !(m_child_mkt_width == 0.0);
        }
        bool IncludeFillMktWidth() const {
            return !(m_fill_mkt_width == 0.0);
        }
        bool IncludeParentOrderAge() const {
            return !(m_parent_order_age == 0.0);
        }
        bool IncludeTrdDelta() const {
            return !(m_trd_delta == 0.0);
        }
        bool IncludeTrdDdelta() const {
            return !(m_trd_ddelta == 0.0);
        }
        bool IncludeTrdGamma() const {
            return !(m_trd_gamma == 0.0);
        }
        bool IncludeTrdVega() const {
            return !(m_trd_vega == 0.0);
        }
        bool IncludeTrdWtVega() const {
            return !(m_trd_wt_vega == 0.0);
        }
        bool IncludeTrdTheta() const {
            return !(m_trd_theta == 0.0);
        }
        bool IncludeTrdPrem() const {
            return !(m_trd_prem == 0.0);
        }
        bool IncludeTrdBeta() const {
            return !(m_trd_beta == 0.0);
        }
        bool IncludeTrdDbeta() const {
            return !(m_trd_dbeta == 0.0);
        }
        bool IncludeSurfEdge() const {
            return !(m_surf_edge == 0.0);
        }
        bool IncludeSurfEdgeUnit() const {
            return !(m_surf_edge_unit == 0.0);
        }
        bool IncludeTheoEdge() const {
            return !(m_theo_edge == 0.0);
        }
        bool IncludeTheoEdgeUnit() const {
            return !(m_theo_edge_unit == 0.0);
        }
        bool IncludeExchFee() const {
            return !(m_exch_fee == 0.0);
        }
        bool IncludeHalfWidthPnl() const {
            return !(m_half_width_pnl == 0.0);
        }
        bool IncludeClArrivePnl() const {
            return !(m_cl_arrive_pnl == 0.0);
        }
        bool IncludeArrivePnl() const {
            return !(m_arrive_pnl == 0.0);
        }
        bool IncludeArriveDnPnl() const {
            return !(m_arrive_dn_pnl == 0.0);
        }
        bool IncludeUDriftArrivePnl() const {
            return !(m_u_drift_arrive_pnl == 0.0);
        }
        bool IncludeDayDnPnl() const {
            return !(m_day_dn_pnl == 0.0);
        }
        bool IncludeDayM1Pnl() const {
            return !(m_day_m1_pnl == 0.0);
        }
        bool IncludeDayM10Pnl() const {
            return !(m_day_m10_pnl == 0.0);
        }
        bool IncludeUDriftDayPnl() const {
            return !(m_u_drift_day_pnl == 0.0);
        }
        bool IncludeUDriftM1Pnl() const {
            return !(m_u_drift_m1_pnl == 0.0);
        }
        bool IncludeUDriftM10Pnl() const {
            return !(m_u_drift_m10_pnl == 0.0);
        }
        bool IncludeDayPnl() const {
            return !(m_day_pnl == 0.0);
        }
        bool IncludeLiveMark() const {
            return !(m_live_mark == 0.0);
        }
        bool IncludeLiveUprc() const {
            return !(m_live_uprc == 0.0);
        }
        bool IncludePendMark() const {
            return !(m_pend_mark == 0.0);
        }
        bool IncludePendUprc() const {
            return !(m_pend_uprc == 0.0);
        }
        bool IncludeTrdMarkError() const {
            return !(m_trd_mark_error.empty());
        }
        bool IncludeDayMarkError() const {
            return !(m_day_mark_error.empty());
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>(m_run_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_sys_environment)));
            if ( IncludeVersion()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(106,m_version);
            }
            if ( IncludeClOrdId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(109,m_cl_ord_id);
            }
            if ( IncludeParentNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(112,m_parent_number);
            }
            if ( IncludePackageId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(115,m_package_id);
            }
            if ( IncludeAltOrderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(118,m_alt_order_id);
            }
            if ( IncludeSrcRoutingCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(121,m_src_routing_code);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            if ( IncludeGroupingCode()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(127,m_grouping_code);
            }
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(130,m_accnt);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(133,m_client_firm);
            }
            if ( IncludePriAggGroup()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(136,m_pri_agg_group);
            }
            if ( IncludeSecAggGroup()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(139,m_sec_agg_group);
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(145, optionKeyLayout_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(151, tickerKeyLayout_ticker);
            }
            if ( IncludeViewGroup1()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(154,m_view_group1);
            }
            if ( IncludeViewGroup2()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(157,m_view_group2);
            }
            if ( IncludeViewGroup3()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(160,m_view_group3);
            }
            if ( IncludeRiskClass()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(163,m_risk_class);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(166,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>(m_symbol_type)));
            if ( IncludeSector()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(169,m_sector);
            }
            if ( IncludeIndNum()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(172,m_ind_num);
            }
            if ( IncludeSubNum()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(175,m_sub_num);
            }
            if ( IncludeGrpNum()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(178,m_grp_num);
            }
            if ( IncludeNbrNum()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(181,m_nbr_num);
            }
            if ( IncludeEdays()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(184,m_edays);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(187,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExpCode>(m_exp_code)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(190,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SkewCode>(m_skew_code)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(193,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::WidthCode>(m_width_code)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(196,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(199,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_u_price_format)));
            if ( IncludeYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(202,m_years);
            }
            if ( IncludeUnderliersPerCn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(205,m_underliers_per_cn);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(208,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>(m_underlier_type)));
            if ( IncludeTickValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(211,m_tick_value);
            }
            if ( IncludePointValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(214,m_point_value);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(217,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            if ( IncludeUPrcRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(220,m_u_prc_ratio);
            }
            if ( IncludeMinTickSize()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(223,m_min_tick_size);
            }
            if ( IncludeRoutingCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(226,m_routing_code);
            }
            if ( IncludeOrigExecId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(229,m_orig_exec_id);
            }
            if ( IncludeLastExecId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(232,m_last_exec_id);
            }
            if ( IncludeTransactDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(235, m_transact_dttm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(238,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecStatus>(m_exec_status)));
            if ( IncludeRemoteText()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(241,m_remote_text);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(244,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitType>(m_order_limit_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(247,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>(m_order_limit_class)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(250,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>(m_parent_shape)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(253,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentOrderHandling>(m_parent_order_handling)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(256,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentBalanceHandling>(m_parent_balance_handling)));
            if ( IncludeParentOrderSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(259,m_parent_order_size);
            }
            if ( IncludeMethod()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(262,m_method);
            }
            if ( IncludeStrategy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(265,m_strategy);
            }
            if ( IncludeUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(268,m_user_name);
            }
            if ( IncludeOrigin()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(271,m_origin);
            }
            if ( IncludeSource()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(274,m_source);
            }
            if ( IncludeServer()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(277,m_server);
            }
            if ( IncludeClearingFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(280,m_clearing_firm);
            }
            if ( IncludeClearingAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(283,m_clearing_accnt);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(286,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCapacity>(m_last_capacity)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(289,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecRole>(m_exec_role)));
            if ( IncludeExecBrkrCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(705,m_exec_brkr_code);
            }
            if ( IncludeExecBrkrAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(295,m_exec_brkr_accnt);
            }
            if ( IncludeExecBrkrClFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(298,m_exec_brkr_cl_firm);
            }
            if ( IncludeExecBrkrUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(301,m_exec_brkr_user_name);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(304,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlipType>(m_clearing_flip_type)));
            if ( IncludeClearingFlipFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(307,m_clearing_flip_firm);
            }
            if ( IncludeClearingFlipAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(310,m_clearing_flip_accnt);
            }
            if ( IncludeRiskGroupId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(313,m_risk_group_id);
            }
            if ( IncludeFillBrkrRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(316,m_fill_brkr_rate);
            }
            if ( IncludeFillRoutingRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(319,m_fill_routing_rate);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(322,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BillingSecType>(m_billing_sec_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(325,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BillingCategory>(m_billing_category)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(328,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_firm_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(331,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(334,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceType>(m_price_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(337,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(340,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_spdr_ssale_flag)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(343,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(346,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>(m_auto_hedge)));
            if ( IncludeOrderDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(349, m_order_dttm);
            }
            if ( IncludeOrderUbid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(352,m_order_ubid);
            }
            if ( IncludeOrderUask()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(355,m_order_uask);
            }
            if ( IncludeOrderBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(358,m_order_bid);
            }
            if ( IncludeOrderAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(361,m_order_ask);
            }
            if ( IncludeOrderSurfPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(364,m_order_surf_prc);
            }
            if ( IncludeOrderSurfVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(367,m_order_surf_vol);
            }
            if ( IncludeOrderLimitVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(370,m_order_limit_vol);
            }
            if ( IncludeOrderLimitPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(373,m_order_limit_prc);
            }
            if ( IncludeOrderLimitRefUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(376,m_order_limit_ref_uprc);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(379,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>(m_child_shape)));
            if ( IncludeChildSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(382,m_child_size);
            }
            if ( IncludeChildPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(385,m_child_price);
            }
            if ( IncludeChildExch()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(388,m_child_exch);
            }
            if ( IncludeChildExDest()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(706,m_child_ex_dest);
            }
            if ( IncludeChildDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(394, m_child_dttm);
            }
            if ( IncludeChildUbid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(397,m_child_ubid);
            }
            if ( IncludeChildUask()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(400,m_child_uask);
            }
            if ( IncludeChildBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(403,m_child_bid);
            }
            if ( IncludeChildAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(406,m_child_ask);
            }
            if ( IncludeChildSurfPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(409,m_child_surf_prc);
            }
            if ( IncludeChildVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(412,m_child_vol);
            }
            if ( IncludeChildProb()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(415,m_child_prob);
            }
            if ( IncludeChildLimitPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(418,m_child_limit_prc);
            }
            if ( IncludeChildLimitRefUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(421,m_child_limit_ref_uprc);
            }
            if ( IncludeChildLimitPnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(424,m_child_limit_pnl);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(427,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildHandler>(m_child_algo_handler)));
            if ( IncludeChildOrderHandling()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(430,m_child_order_handling);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(433,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildCreateReason>(m_child_create_reason)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(436,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildCancelReason>(m_child_cancel_reason)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(439,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktStance>(m_child_mkt_stance)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(442,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_child_cxl_attempted)));
            if ( IncludeChildCxlFillLatency()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(445,m_child_cxl_fill_latency);
            }
            if ( IncludeFillExch()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(448,m_fill_exch);
            }
            if ( IncludeFillPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(451,m_fill_price);
            }
            if ( IncludeFillTs()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(454,m_fill_ts);
            }
            if ( IncludeFillDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(457, m_fill_dttm);
            }
            if ( IncludeFillSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(460,m_fill_size);
            }
            if ( IncludeEffFillSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(463,m_eff_fill_size);
            }
            if ( IncludeFillVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(466,m_fill_vol);
            }
            if ( IncludeFillProb()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(469,m_fill_prob);
            }
            if ( IncludeFillLimitPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(472,m_fill_limit_prc);
            }
            if ( IncludeFillLimitRefUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(475,m_fill_limit_ref_uprc);
            }
            if ( IncludeFillLimitPnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(478,m_fill_limit_pnl);
            }
            if ( IncludeFillDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(481,m_fill_de);
            }
            if ( IncludeFillVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(484,m_fill_ve);
            }
            if ( IncludeFillTh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(487,m_fill_th);
            }
            if ( IncludeFillUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(493,m_fill_uprc);
            }
            if ( IncludeFillBeta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(496,m_fill_beta);
            }
            if ( IncludeFillTv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(532,m_fill_tv);
            }
            if ( IncludeFillTp()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(535,m_fill_tp);
            }
            if ( IncludeFillUbid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(538,m_fill_ubid);
            }
            if ( IncludeFillUask()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(541,m_fill_uask);
            }
            if ( IncludeFillBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(544,m_fill_bid);
            }
            if ( IncludeFillAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(547,m_fill_ask);
            }
            if ( IncludeFillSurfPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(550,m_fill_surf_prc);
            }
            if ( IncludeFillPostUmark1M()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(553,m_fill_post_umark1_m);
            }
            if ( IncludeFillPostUmark10M()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(556,m_fill_post_umark10_m);
            }
            if ( IncludeFillPostMark1M()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(559,m_fill_post_mark1_m);
            }
            if ( IncludeFillPostMark10M()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(562,m_fill_post_mark10_m);
            }
            if ( IncludeMarginUdnVdn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(701,m_margin_udn_vdn);
            }
            if ( IncludeMarginUdnVup()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(702,m_margin_udn_vup);
            }
            if ( IncludeMarginUupVdn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(703,m_margin_uup_vdn);
            }
            if ( IncludeMarginUupVup()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(704,m_margin_uup_vup);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(565,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskCode>(m_risk_code)));
            if ( IncludeExchLiquidityTag()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(568,m_exch_liquidity_tag);
            }
            if ( IncludeSpdrLiquidityTag()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(571,m_spdr_liquidity_tag);
            }
            if ( IncludeFillExchDetail()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(574,m_fill_exch_detail);
            }
            if ( IncludeNotionalValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(577,m_notional_value);
            }
            if ( IncludeMarketValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(580,m_market_value);
            }
            if ( IncludeOrderMktWidth()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(583,m_order_mkt_width);
            }
            if ( IncludeChildMktWidth()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(586,m_child_mkt_width);
            }
            if ( IncludeFillMktWidth()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(589,m_fill_mkt_width);
            }
            if ( IncludeParentOrderAge()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(592,m_parent_order_age);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(595,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentAge>(m_parent_age_code)));
            if ( IncludeTrdDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(598,m_trd_delta);
            }
            if ( IncludeTrdDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(601,m_trd_ddelta);
            }
            if ( IncludeTrdGamma()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(604,m_trd_gamma);
            }
            if ( IncludeTrdVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(607,m_trd_vega);
            }
            if ( IncludeTrdWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(610,m_trd_wt_vega);
            }
            if ( IncludeTrdTheta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(613,m_trd_theta);
            }
            if ( IncludeTrdPrem()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(616,m_trd_prem);
            }
            if ( IncludeTrdBeta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(619,m_trd_beta);
            }
            if ( IncludeTrdDbeta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(622,m_trd_dbeta);
            }
            if ( IncludeSurfEdge()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(625,m_surf_edge);
            }
            if ( IncludeSurfEdgeUnit()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(628,m_surf_edge_unit);
            }
            if ( IncludeTheoEdge()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(631,m_theo_edge);
            }
            if ( IncludeTheoEdgeUnit()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(634,m_theo_edge_unit);
            }
            if ( IncludeExchFee()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(637,m_exch_fee);
            }
            if ( IncludeHalfWidthPnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(640,m_half_width_pnl);
            }
            if ( IncludeClArrivePnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(643,m_cl_arrive_pnl);
            }
            if ( IncludeArrivePnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(646,m_arrive_pnl);
            }
            if ( IncludeArriveDnPnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(649,m_arrive_dn_pnl);
            }
            if ( IncludeUDriftArrivePnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(652,m_u_drift_arrive_pnl);
            }
            if ( IncludeDayDnPnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(655,m_day_dn_pnl);
            }
            if ( IncludeDayM1Pnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(658,m_day_m1_pnl);
            }
            if ( IncludeDayM10Pnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(661,m_day_m10_pnl);
            }
            if ( IncludeUDriftDayPnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(664,m_u_drift_day_pnl);
            }
            if ( IncludeUDriftM1Pnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(667,m_u_drift_m1_pnl);
            }
            if ( IncludeUDriftM10Pnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(670,m_u_drift_m10_pnl);
            }
            if ( IncludeDayPnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(673,m_day_pnl);
            }
            if ( IncludeLiveMark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(676,m_live_mark);
            }
            if ( IncludeLiveUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(679,m_live_uprc);
            }
            if ( IncludePendMark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(682,m_pend_mark);
            }
            if ( IncludePendUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(685,m_pend_uprc);
            }
            if ( IncludeTrdMarkError()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(688,m_trd_mark_error);
            }
            if ( IncludeDayMarkError()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(691,m_day_mark_error);
            }
            if ( IncludeUserData1()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(694,m_user_data1);
            }
            if ( IncludeUserData2()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(697,m_user_data2);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(700, m_timestamp);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>(m_run_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_sys_environment)));
            if ( IncludeVersion()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,106,m_version);
            }
            if ( IncludeClOrdId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,109,static_cast<string>(m_cl_ord_id));
            }
            if ( IncludeParentNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,112,m_parent_number);
            }
            if ( IncludePackageId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,115,m_package_id);
            }
            if ( IncludeAltOrderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,118,static_cast<string>(m_alt_order_id));
            }
            if ( IncludeSrcRoutingCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,121,static_cast<string>(m_src_routing_code));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            if ( IncludeGroupingCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,127,m_grouping_code);
            }
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,130,static_cast<string>(m_accnt));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,133,static_cast<string>(m_client_firm));
            }
            if ( IncludePriAggGroup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,136,static_cast<string>(m_pri_agg_group));
            }
            if ( IncludeSecAggGroup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,139,static_cast<string>(m_sec_agg_group));
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 145, optionKeyLayout_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 151, tickerKeyLayout_ticker);
            }
            if ( IncludeViewGroup1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,154,static_cast<string>(m_view_group1));
            }
            if ( IncludeViewGroup2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,157,static_cast<string>(m_view_group2));
            }
            if ( IncludeViewGroup3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,160,static_cast<string>(m_view_group3));
            }
            if ( IncludeRiskClass()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,163,static_cast<string>(m_risk_class));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,166,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>(m_symbol_type)));
            if ( IncludeSector()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,169,static_cast<string>(m_sector));
            }
            if ( IncludeIndNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,172,m_ind_num);
            }
            if ( IncludeSubNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,175,m_sub_num);
            }
            if ( IncludeGrpNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,178,m_grp_num);
            }
            if ( IncludeNbrNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,181,m_nbr_num);
            }
            if ( IncludeEdays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,184,m_edays);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,187,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExpCode>(m_exp_code)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,190,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SkewCode>(m_skew_code)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,193,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::WidthCode>(m_width_code)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,196,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,199,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_u_price_format)));
            if ( IncludeYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,202,m_years);
            }
            if ( IncludeUnderliersPerCn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,205,m_underliers_per_cn);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,208,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>(m_underlier_type)));
            if ( IncludeTickValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,211,m_tick_value);
            }
            if ( IncludePointValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,214,m_point_value);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,217,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            if ( IncludeUPrcRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,220,m_u_prc_ratio);
            }
            if ( IncludeMinTickSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,223,m_min_tick_size);
            }
            if ( IncludeRoutingCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,226,static_cast<string>(m_routing_code));
            }
            if ( IncludeOrigExecId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,229,static_cast<string>(m_orig_exec_id));
            }
            if ( IncludeLastExecId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,232,static_cast<string>(m_last_exec_id));
            }
            if ( IncludeTransactDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 235, m_transact_dttm);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,238,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecStatus>(m_exec_status)));
            if ( IncludeRemoteText()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,241,static_cast<string>(m_remote_text));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,244,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitType>(m_order_limit_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,247,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>(m_order_limit_class)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,250,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>(m_parent_shape)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,253,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentOrderHandling>(m_parent_order_handling)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,256,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentBalanceHandling>(m_parent_balance_handling)));
            if ( IncludeParentOrderSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,259,m_parent_order_size);
            }
            if ( IncludeMethod()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,262,static_cast<string>(m_method));
            }
            if ( IncludeStrategy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,265,static_cast<string>(m_strategy));
            }
            if ( IncludeUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,268,static_cast<string>(m_user_name));
            }
            if ( IncludeOrigin()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,271,static_cast<string>(m_origin));
            }
            if ( IncludeSource()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,274,static_cast<string>(m_source));
            }
            if ( IncludeServer()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,277,static_cast<string>(m_server));
            }
            if ( IncludeClearingFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,280,static_cast<string>(m_clearing_firm));
            }
            if ( IncludeClearingAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,283,static_cast<string>(m_clearing_accnt));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,286,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCapacity>(m_last_capacity)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,289,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecRole>(m_exec_role)));
            if ( IncludeExecBrkrCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,705,static_cast<string>(m_exec_brkr_code));
            }
            if ( IncludeExecBrkrAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,295,static_cast<string>(m_exec_brkr_accnt));
            }
            if ( IncludeExecBrkrClFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,298,static_cast<string>(m_exec_brkr_cl_firm));
            }
            if ( IncludeExecBrkrUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,301,static_cast<string>(m_exec_brkr_user_name));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,304,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlipType>(m_clearing_flip_type)));
            if ( IncludeClearingFlipFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,307,static_cast<string>(m_clearing_flip_firm));
            }
            if ( IncludeClearingFlipAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,310,static_cast<string>(m_clearing_flip_accnt));
            }
            if ( IncludeRiskGroupId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,313,m_risk_group_id);
            }
            if ( IncludeFillBrkrRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,316,m_fill_brkr_rate);
            }
            if ( IncludeFillRoutingRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,319,m_fill_routing_rate);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,322,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BillingSecType>(m_billing_sec_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,325,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BillingCategory>(m_billing_category)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,328,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_firm_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,331,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,334,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceType>(m_price_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,337,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,340,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_spdr_ssale_flag)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,343,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,346,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>(m_auto_hedge)));
            if ( IncludeOrderDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 349, m_order_dttm);
            }
            if ( IncludeOrderUbid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,352,m_order_ubid);
            }
            if ( IncludeOrderUask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,355,m_order_uask);
            }
            if ( IncludeOrderBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,358,m_order_bid);
            }
            if ( IncludeOrderAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,361,m_order_ask);
            }
            if ( IncludeOrderSurfPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,364,m_order_surf_prc);
            }
            if ( IncludeOrderSurfVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,367,m_order_surf_vol);
            }
            if ( IncludeOrderLimitVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,370,m_order_limit_vol);
            }
            if ( IncludeOrderLimitPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,373,m_order_limit_prc);
            }
            if ( IncludeOrderLimitRefUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,376,m_order_limit_ref_uprc);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,379,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>(m_child_shape)));
            if ( IncludeChildSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,382,m_child_size);
            }
            if ( IncludeChildPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,385,m_child_price);
            }
            if ( IncludeChildExch()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,388,static_cast<string>(m_child_exch));
            }
            if ( IncludeChildExDest()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,706,static_cast<string>(m_child_ex_dest));
            }
            if ( IncludeChildDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 394, m_child_dttm);
            }
            if ( IncludeChildUbid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,397,m_child_ubid);
            }
            if ( IncludeChildUask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,400,m_child_uask);
            }
            if ( IncludeChildBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,403,m_child_bid);
            }
            if ( IncludeChildAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,406,m_child_ask);
            }
            if ( IncludeChildSurfPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,409,m_child_surf_prc);
            }
            if ( IncludeChildVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,412,m_child_vol);
            }
            if ( IncludeChildProb()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,415,m_child_prob);
            }
            if ( IncludeChildLimitPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,418,m_child_limit_prc);
            }
            if ( IncludeChildLimitRefUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,421,m_child_limit_ref_uprc);
            }
            if ( IncludeChildLimitPnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,424,m_child_limit_pnl);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,427,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildHandler>(m_child_algo_handler)));
            if ( IncludeChildOrderHandling()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,430,static_cast<string>(m_child_order_handling));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,433,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildCreateReason>(m_child_create_reason)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,436,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildCancelReason>(m_child_cancel_reason)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,439,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktStance>(m_child_mkt_stance)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,442,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_child_cxl_attempted)));
            if ( IncludeChildCxlFillLatency()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,445,m_child_cxl_fill_latency);
            }
            if ( IncludeFillExch()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,448,static_cast<string>(m_fill_exch));
            }
            if ( IncludeFillPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,451,m_fill_price);
            }
            if ( IncludeFillTs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,454,m_fill_ts);
            }
            if ( IncludeFillDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 457, m_fill_dttm);
            }
            if ( IncludeFillSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,460,m_fill_size);
            }
            if ( IncludeEffFillSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,463,m_eff_fill_size);
            }
            if ( IncludeFillVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,466,m_fill_vol);
            }
            if ( IncludeFillProb()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,469,m_fill_prob);
            }
            if ( IncludeFillLimitPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,472,m_fill_limit_prc);
            }
            if ( IncludeFillLimitRefUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,475,m_fill_limit_ref_uprc);
            }
            if ( IncludeFillLimitPnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,478,m_fill_limit_pnl);
            }
            if ( IncludeFillDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,481,m_fill_de);
            }
            if ( IncludeFillVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,484,m_fill_ve);
            }
            if ( IncludeFillTh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,487,m_fill_th);
            }
            if ( IncludeFillUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,493,m_fill_uprc);
            }
            if ( IncludeFillBeta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,496,m_fill_beta);
            }
            if ( IncludeFillTv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,532,m_fill_tv);
            }
            if ( IncludeFillTp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,535,m_fill_tp);
            }
            if ( IncludeFillUbid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,538,m_fill_ubid);
            }
            if ( IncludeFillUask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,541,m_fill_uask);
            }
            if ( IncludeFillBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,544,m_fill_bid);
            }
            if ( IncludeFillAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,547,m_fill_ask);
            }
            if ( IncludeFillSurfPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,550,m_fill_surf_prc);
            }
            if ( IncludeFillPostUmark1M()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,553,m_fill_post_umark1_m);
            }
            if ( IncludeFillPostUmark10M()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,556,m_fill_post_umark10_m);
            }
            if ( IncludeFillPostMark1M()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,559,m_fill_post_mark1_m);
            }
            if ( IncludeFillPostMark10M()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,562,m_fill_post_mark10_m);
            }
            if ( IncludeMarginUdnVdn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,701,m_margin_udn_vdn);
            }
            if ( IncludeMarginUdnVup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,702,m_margin_udn_vup);
            }
            if ( IncludeMarginUupVdn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,703,m_margin_uup_vdn);
            }
            if ( IncludeMarginUupVup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,704,m_margin_uup_vup);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,565,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskCode>(m_risk_code)));
            if ( IncludeExchLiquidityTag()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,568,static_cast<string>(m_exch_liquidity_tag));
            }
            if ( IncludeSpdrLiquidityTag()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,571,static_cast<string>(m_spdr_liquidity_tag));
            }
            if ( IncludeFillExchDetail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,574,static_cast<string>(m_fill_exch_detail));
            }
            if ( IncludeNotionalValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,577,m_notional_value);
            }
            if ( IncludeMarketValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,580,m_market_value);
            }
            if ( IncludeOrderMktWidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,583,m_order_mkt_width);
            }
            if ( IncludeChildMktWidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,586,m_child_mkt_width);
            }
            if ( IncludeFillMktWidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,589,m_fill_mkt_width);
            }
            if ( IncludeParentOrderAge()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,592,m_parent_order_age);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,595,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentAge>(m_parent_age_code)));
            if ( IncludeTrdDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,598,m_trd_delta);
            }
            if ( IncludeTrdDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,601,m_trd_ddelta);
            }
            if ( IncludeTrdGamma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,604,m_trd_gamma);
            }
            if ( IncludeTrdVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,607,m_trd_vega);
            }
            if ( IncludeTrdWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,610,m_trd_wt_vega);
            }
            if ( IncludeTrdTheta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,613,m_trd_theta);
            }
            if ( IncludeTrdPrem()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,616,m_trd_prem);
            }
            if ( IncludeTrdBeta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,619,m_trd_beta);
            }
            if ( IncludeTrdDbeta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,622,m_trd_dbeta);
            }
            if ( IncludeSurfEdge()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,625,m_surf_edge);
            }
            if ( IncludeSurfEdgeUnit()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,628,m_surf_edge_unit);
            }
            if ( IncludeTheoEdge()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,631,m_theo_edge);
            }
            if ( IncludeTheoEdgeUnit()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,634,m_theo_edge_unit);
            }
            if ( IncludeExchFee()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,637,m_exch_fee);
            }
            if ( IncludeHalfWidthPnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,640,m_half_width_pnl);
            }
            if ( IncludeClArrivePnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,643,m_cl_arrive_pnl);
            }
            if ( IncludeArrivePnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,646,m_arrive_pnl);
            }
            if ( IncludeArriveDnPnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,649,m_arrive_dn_pnl);
            }
            if ( IncludeUDriftArrivePnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,652,m_u_drift_arrive_pnl);
            }
            if ( IncludeDayDnPnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,655,m_day_dn_pnl);
            }
            if ( IncludeDayM1Pnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,658,m_day_m1_pnl);
            }
            if ( IncludeDayM10Pnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,661,m_day_m10_pnl);
            }
            if ( IncludeUDriftDayPnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,664,m_u_drift_day_pnl);
            }
            if ( IncludeUDriftM1Pnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,667,m_u_drift_m1_pnl);
            }
            if ( IncludeUDriftM10Pnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,670,m_u_drift_m10_pnl);
            }
            if ( IncludeDayPnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,673,m_day_pnl);
            }
            if ( IncludeLiveMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,676,m_live_mark);
            }
            if ( IncludeLiveUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,679,m_live_uprc);
            }
            if ( IncludePendMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,682,m_pend_mark);
            }
            if ( IncludePendUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,685,m_pend_uprc);
            }
            if ( IncludeTrdMarkError()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,688,static_cast<string>(m_trd_mark_error));
            }
            if ( IncludeDayMarkError()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,691,static_cast<string>(m_day_mark_error));
            }
            if ( IncludeUserData1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,694,static_cast<string>(m_user_data1));
            }
            if ( IncludeUserData2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,697,static_cast<string>(m_user_data2));
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 700, m_timestamp);
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
                            m_run_status = static_cast<spiderrock::protobuf::api::RunStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sys_environment = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_version = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cl_ord_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_parent_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_package_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_order_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_src_routing_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 124: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_source = static_cast<spiderrock::protobuf::api::SpdrSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_grouping_code = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_pri_agg_group = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_sec_agg_group = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::OptionKeyCodec::TagType) {
                            auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                            m_sec_key.setFromCodec(optionKey);
                        }
                        break;
                    }
                    case 148: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_view_group1 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_view_group2 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_view_group3 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_risk_class = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 166: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_symbol_type = static_cast<spiderrock::protobuf::api::SymbolType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_sector = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ind_num = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sub_num = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_grp_num = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_nbr_num = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_edays = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 187: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_exp_code = static_cast<spiderrock::protobuf::api::ExpCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 190: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_skew_code = static_cast<spiderrock::protobuf::api::SkewCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 193: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_width_code = static_cast<spiderrock::protobuf::api::WidthCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 196: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_format = static_cast<spiderrock::protobuf::api::PriceFormat>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 199: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_u_price_format = static_cast<spiderrock::protobuf::api::PriceFormat>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_underliers_per_cn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 208: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_underlier_type = static_cast<spiderrock::protobuf::api::UnderlierType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_tick_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_point_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 217: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_point_currency = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_prc_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_tick_size = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 226: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_routing_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 229: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_orig_exec_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 232: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_last_exec_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_transact_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 238: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_exec_status = static_cast<spiderrock::protobuf::api::ExecStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 241: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_remote_text = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 244: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_order_limit_type = static_cast<spiderrock::protobuf::api::SpdrLimitType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 247: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_order_limit_class = static_cast<spiderrock::protobuf::api::SpdrLimitClass>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 250: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_parent_shape = static_cast<spiderrock::protobuf::api::SpdrOrderShape>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 253: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_parent_order_handling = static_cast<spiderrock::protobuf::api::ParentOrderHandling>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 256: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_parent_balance_handling = static_cast<spiderrock::protobuf::api::ParentBalanceHandling>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 259: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_parent_order_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 262: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_method = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 265: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_strategy = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 268: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 271: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_origin = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 274: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_source = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 277: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_server = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 280: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_clearing_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 283: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_clearing_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 286: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_last_capacity = static_cast<spiderrock::protobuf::api::OrderCapacity>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 289: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_exec_role = static_cast<spiderrock::protobuf::api::ExecRole>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 705: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_brkr_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 295: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_brkr_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 298: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_brkr_cl_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 301: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_brkr_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 304: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_clearing_flip_type = static_cast<spiderrock::protobuf::api::FlipType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 307: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_clearing_flip_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 310: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_clearing_flip_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 313: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_risk_group_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 316: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_brkr_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 319: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_routing_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 322: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_billing_sec_type = static_cast<spiderrock::protobuf::api::BillingSecType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 325: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_billing_category = static_cast<spiderrock::protobuf::api::BillingCategory>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 328: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_firm_type = static_cast<spiderrock::protobuf::api::FirmType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 331: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 334: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_type = static_cast<spiderrock::protobuf::api::PriceType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 337: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ssale_flag = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 340: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_ssale_flag = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 343: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_position_type = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 346: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auto_hedge = static_cast<spiderrock::protobuf::api::AutoHedge>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 349: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_order_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 352: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_order_ubid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 355: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_order_uask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 358: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_order_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 361: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_order_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 364: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_surf_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 367: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_surf_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 370: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_limit_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 373: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_order_limit_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 376: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_order_limit_ref_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 379: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_child_shape = static_cast<spiderrock::protobuf::api::SpdrOrderShape>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 382: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_child_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 385: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_child_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 388: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_child_exch = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 706: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_child_ex_dest = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 394: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_child_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 397: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_child_ubid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 400: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_child_uask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 403: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_child_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 406: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_child_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 409: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_child_surf_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 412: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_child_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 415: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_child_prob = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 418: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_child_limit_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 421: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_child_limit_ref_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 424: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_child_limit_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 427: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_child_algo_handler = static_cast<spiderrock::protobuf::api::ChildHandler>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 430: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_child_order_handling = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 433: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_child_create_reason = static_cast<spiderrock::protobuf::api::ChildCreateReason>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 436: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_child_cancel_reason = static_cast<spiderrock::protobuf::api::ChildCancelReason>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 439: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_child_mkt_stance = static_cast<spiderrock::protobuf::api::MktStance>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 442: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_child_cxl_attempted = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 445: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_child_cxl_fill_latency = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 448: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_exch = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 451: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 454: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_ts = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 457: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_fill_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 460: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fill_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 463: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_eff_fill_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 466: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 469: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_prob = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 472: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_limit_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 475: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_limit_ref_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 478: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_limit_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 481: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 484: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 487: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_th = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 493: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 496: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_beta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 532: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_tv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 535: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_tp = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 538: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_ubid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 541: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_uask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 544: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 547: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 550: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_surf_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 553: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_post_umark1_m = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 556: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_post_umark10_m = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 559: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_post_mark1_m = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 562: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_post_mark10_m = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 701: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_udn_vdn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 702: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_udn_vup = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 703: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_uup_vdn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 704: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_uup_vup = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 565: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_risk_code = static_cast<spiderrock::protobuf::api::RiskCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 568: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exch_liquidity_tag = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 571: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_spdr_liquidity_tag = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 574: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_exch_detail = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 577: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_notional_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 580: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_market_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 583: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_mkt_width = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 586: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_child_mkt_width = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 589: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_mkt_width = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 592: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_parent_order_age = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 595: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_parent_age_code = static_cast<spiderrock::protobuf::api::ParentAge>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 598: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_trd_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 601: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_trd_ddelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 604: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_trd_gamma = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 607: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_trd_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 610: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_trd_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 613: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_trd_theta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 616: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_trd_prem = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 619: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_trd_beta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 622: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_trd_dbeta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 625: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surf_edge = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 628: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surf_edge_unit = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 631: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_theo_edge = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 634: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_theo_edge_unit = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 637: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_exch_fee = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 640: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_half_width_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 643: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cl_arrive_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 646: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_arrive_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 649: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_arrive_dn_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 652: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_drift_arrive_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 655: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_dn_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 658: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_m1_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 661: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_m10_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 664: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_drift_day_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 667: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_drift_m1_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 670: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_drift_m10_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 673: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 676: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_live_mark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 679: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_live_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 682: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_pend_mark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 685: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_pend_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 688: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_trd_mark_error = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 691: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_day_mark_error = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 694: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_data1 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 697: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_data2 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 700: {
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

    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::_meta>() const { return TradeCubeDetailV5::_meta{ m__meta}; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::pkey>() const { return TradeCubeDetailV5::pkey{ m_pkey}; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::run_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>( m_run_status)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::sys_environment>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_sys_environment)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::version>() const { return m_version; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::cl_ord_id>() const { return m_cl_ord_id; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::parent_number>() const { return m_parent_number; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::package_id>() const { return m_package_id; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::alt_order_id>() const { return m_alt_order_id; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::src_routing_code>() const { return m_src_routing_code; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::spdr_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>( m_spdr_source)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::grouping_code>() const { return m_grouping_code; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::accnt>() const { return m_accnt; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::client_firm>() const { return m_client_firm; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::pri_agg_group>() const { return m_pri_agg_group; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::sec_agg_group>() const { return m_sec_agg_group; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::sec_key>() const { return TradeCubeDetailV5::sec_key{ m_sec_key}; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_sec_type)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::ticker>() const { return TradeCubeDetailV5::ticker{ m_ticker}; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::view_group1>() const { return m_view_group1; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::view_group2>() const { return m_view_group2; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::view_group3>() const { return m_view_group3; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::risk_class>() const { return m_risk_class; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::symbol_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>( m_symbol_type)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::sector>() const { return m_sector; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::ind_num>() const { return m_ind_num; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::sub_num>() const { return m_sub_num; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::grp_num>() const { return m_grp_num; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::nbr_num>() const { return m_nbr_num; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::edays>() const { return m_edays; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::exp_code>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExpCode>( m_exp_code)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::skew_code>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SkewCode>( m_skew_code)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::width_code>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::WidthCode>( m_width_code)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::price_format>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>( m_price_format)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::u_price_format>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>( m_u_price_format)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::years>() const { return m_years; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::underliers_per_cn>() const { return m_underliers_per_cn; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::underlier_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>( m_underlier_type)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::tick_value>() const { return m_tick_value; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::point_value>() const { return m_point_value; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::point_currency>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>( m_point_currency)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::u_prc_ratio>() const { return m_u_prc_ratio; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::min_tick_size>() const { return m_min_tick_size; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::routing_code>() const { return m_routing_code; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::orig_exec_id>() const { return m_orig_exec_id; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::last_exec_id>() const { return m_last_exec_id; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::transact_dttm>() const { return m_transact_dttm; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::exec_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecStatus>( m_exec_status)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::remote_text>() const { return m_remote_text; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::order_limit_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitType>( m_order_limit_type)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::order_limit_class>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>( m_order_limit_class)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::parent_shape>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>( m_parent_shape)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::parent_order_handling>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentOrderHandling>( m_parent_order_handling)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::parent_balance_handling>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentBalanceHandling>( m_parent_balance_handling)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::parent_order_size>() const { return m_parent_order_size; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::method>() const { return m_method; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::strategy>() const { return m_strategy; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::user_name>() const { return m_user_name; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::origin>() const { return m_origin; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::source>() const { return m_source; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::server>() const { return m_server; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::clearing_firm>() const { return m_clearing_firm; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::clearing_accnt>() const { return m_clearing_accnt; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::last_capacity>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCapacity>( m_last_capacity)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::exec_role>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecRole>( m_exec_role)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::exec_brkr_code>() const { return m_exec_brkr_code; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::exec_brkr_accnt>() const { return m_exec_brkr_accnt; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::exec_brkr_cl_firm>() const { return m_exec_brkr_cl_firm; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::exec_brkr_user_name>() const { return m_exec_brkr_user_name; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::clearing_flip_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlipType>( m_clearing_flip_type)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::clearing_flip_firm>() const { return m_clearing_flip_firm; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::clearing_flip_accnt>() const { return m_clearing_flip_accnt; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::risk_group_id>() const { return m_risk_group_id; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_brkr_rate>() const { return m_fill_brkr_rate; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_routing_rate>() const { return m_fill_routing_rate; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::billing_sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BillingSecType>( m_billing_sec_type)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::billing_category>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BillingCategory>( m_billing_category)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::firm_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>( m_firm_type)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_side)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::price_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceType>( m_price_type)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::ssale_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>( m_ssale_flag)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::spdr_ssale_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>( m_spdr_ssale_flag)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::position_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>( m_position_type)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::auto_hedge>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>( m_auto_hedge)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::order_dttm>() const { return m_order_dttm; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::order_ubid>() const { return m_order_ubid; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::order_uask>() const { return m_order_uask; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::order_bid>() const { return m_order_bid; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::order_ask>() const { return m_order_ask; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::order_surf_prc>() const { return m_order_surf_prc; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::order_surf_vol>() const { return m_order_surf_vol; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::order_limit_vol>() const { return m_order_limit_vol; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::order_limit_prc>() const { return m_order_limit_prc; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::order_limit_ref_uprc>() const { return m_order_limit_ref_uprc; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::child_shape>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>( m_child_shape)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::child_size>() const { return m_child_size; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::child_price>() const { return m_child_price; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::child_exch>() const { return m_child_exch; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::child_ex_dest>() const { return m_child_ex_dest; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::child_dttm>() const { return m_child_dttm; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::child_ubid>() const { return m_child_ubid; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::child_uask>() const { return m_child_uask; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::child_bid>() const { return m_child_bid; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::child_ask>() const { return m_child_ask; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::child_surf_prc>() const { return m_child_surf_prc; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::child_vol>() const { return m_child_vol; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::child_prob>() const { return m_child_prob; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::child_limit_prc>() const { return m_child_limit_prc; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::child_limit_ref_uprc>() const { return m_child_limit_ref_uprc; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::child_limit_pnl>() const { return m_child_limit_pnl; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::child_algo_handler>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildHandler>( m_child_algo_handler)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::child_order_handling>() const { return m_child_order_handling; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::child_create_reason>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildCreateReason>( m_child_create_reason)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::child_cancel_reason>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildCancelReason>( m_child_cancel_reason)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::child_mkt_stance>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktStance>( m_child_mkt_stance)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::child_cxl_attempted>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_child_cxl_attempted)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::child_cxl_fill_latency>() const { return m_child_cxl_fill_latency; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_exch>() const { return m_fill_exch; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_price>() const { return m_fill_price; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_ts>() const { return m_fill_ts; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_dttm>() const { return m_fill_dttm; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_size>() const { return m_fill_size; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::eff_fill_size>() const { return m_eff_fill_size; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_vol>() const { return m_fill_vol; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_prob>() const { return m_fill_prob; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_limit_prc>() const { return m_fill_limit_prc; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_limit_ref_uprc>() const { return m_fill_limit_ref_uprc; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_limit_pnl>() const { return m_fill_limit_pnl; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_de>() const { return m_fill_de; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_ve>() const { return m_fill_ve; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_th>() const { return m_fill_th; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_uprc>() const { return m_fill_uprc; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_beta>() const { return m_fill_beta; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_tv>() const { return m_fill_tv; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_tp>() const { return m_fill_tp; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_ubid>() const { return m_fill_ubid; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_uask>() const { return m_fill_uask; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_bid>() const { return m_fill_bid; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_ask>() const { return m_fill_ask; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_surf_prc>() const { return m_fill_surf_prc; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_post_umark1_m>() const { return m_fill_post_umark1_m; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_post_umark10_m>() const { return m_fill_post_umark10_m; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_post_mark1_m>() const { return m_fill_post_mark1_m; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_post_mark10_m>() const { return m_fill_post_mark10_m; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::margin_udn_vdn>() const { return m_margin_udn_vdn; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::margin_udn_vup>() const { return m_margin_udn_vup; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::margin_uup_vdn>() const { return m_margin_uup_vdn; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::margin_uup_vup>() const { return m_margin_uup_vup; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::risk_code>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskCode>( m_risk_code)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::exch_liquidity_tag>() const { return m_exch_liquidity_tag; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::spdr_liquidity_tag>() const { return m_spdr_liquidity_tag; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_exch_detail>() const { return m_fill_exch_detail; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::notional_value>() const { return m_notional_value; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::market_value>() const { return m_market_value; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::order_mkt_width>() const { return m_order_mkt_width; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::child_mkt_width>() const { return m_child_mkt_width; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::fill_mkt_width>() const { return m_fill_mkt_width; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::parent_order_age>() const { return m_parent_order_age; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::parent_age_code>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentAge>( m_parent_age_code)); }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::trd_delta>() const { return m_trd_delta; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::trd_ddelta>() const { return m_trd_ddelta; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::trd_gamma>() const { return m_trd_gamma; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::trd_vega>() const { return m_trd_vega; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::trd_wt_vega>() const { return m_trd_wt_vega; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::trd_theta>() const { return m_trd_theta; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::trd_prem>() const { return m_trd_prem; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::trd_beta>() const { return m_trd_beta; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::trd_dbeta>() const { return m_trd_dbeta; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::surf_edge>() const { return m_surf_edge; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::surf_edge_unit>() const { return m_surf_edge_unit; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::theo_edge>() const { return m_theo_edge; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::theo_edge_unit>() const { return m_theo_edge_unit; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::exch_fee>() const { return m_exch_fee; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::half_width_pnl>() const { return m_half_width_pnl; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::cl_arrive_pnl>() const { return m_cl_arrive_pnl; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::arrive_pnl>() const { return m_arrive_pnl; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::arrive_dn_pnl>() const { return m_arrive_dn_pnl; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::u_drift_arrive_pnl>() const { return m_u_drift_arrive_pnl; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::day_dn_pnl>() const { return m_day_dn_pnl; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::day_m1_pnl>() const { return m_day_m1_pnl; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::day_m10_pnl>() const { return m_day_m10_pnl; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::u_drift_day_pnl>() const { return m_u_drift_day_pnl; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::u_drift_m1_pnl>() const { return m_u_drift_m1_pnl; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::u_drift_m10_pnl>() const { return m_u_drift_m10_pnl; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::day_pnl>() const { return m_day_pnl; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::live_mark>() const { return m_live_mark; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::live_uprc>() const { return m_live_uprc; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::pend_mark>() const { return m_pend_mark; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::pend_uprc>() const { return m_pend_uprc; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::trd_mark_error>() const { return m_trd_mark_error; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::day_mark_error>() const { return m_day_mark_error; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::user_data1>() const { return m_user_data1; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::user_data2>() const { return m_user_data2; }
    template<> inline const auto TradeCubeDetailV5::get<TradeCubeDetailV5::timestamp>() const { return m_timestamp; }
    template<> inline const auto TradeCubeDetailV5_PKey::get<TradeCubeDetailV5_PKey::fill_number>() const { return m_fill_number; }
    template<> inline const auto TradeCubeDetailV5_PKey::get<TradeCubeDetailV5_PKey::trade_date>() const { return TradeCubeDetailV5_PKey::trade_date{m_trade_date}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const TradeCubeDetailV5_PKey& m) {
        o << "\"fill_number\":" << m.get<TradeCubeDetailV5_PKey::fill_number>();
        o << ",\"trade_date\":{" << m.get<TradeCubeDetailV5_PKey::trade_date>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const TradeCubeDetailV5& m) {
        o << "\"_meta\":{" << m.get<TradeCubeDetailV5::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<TradeCubeDetailV5::pkey>() << "}";
        o << ",\"run_status\":" << (int64_t)m.get<TradeCubeDetailV5::run_status>();
        o << ",\"sys_environment\":" << (int64_t)m.get<TradeCubeDetailV5::sys_environment>();
        o << ",\"version\":" << m.get<TradeCubeDetailV5::version>();
        o << ",\"cl_ord_id\":\"" << m.get<TradeCubeDetailV5::cl_ord_id>() << "\"";
        o << ",\"parent_number\":" << m.get<TradeCubeDetailV5::parent_number>();
        o << ",\"package_id\":" << m.get<TradeCubeDetailV5::package_id>();
        o << ",\"alt_order_id\":\"" << m.get<TradeCubeDetailV5::alt_order_id>() << "\"";
        o << ",\"src_routing_code\":\"" << m.get<TradeCubeDetailV5::src_routing_code>() << "\"";
        o << ",\"spdr_source\":" << (int64_t)m.get<TradeCubeDetailV5::spdr_source>();
        o << ",\"grouping_code\":" << m.get<TradeCubeDetailV5::grouping_code>();
        o << ",\"accnt\":\"" << m.get<TradeCubeDetailV5::accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<TradeCubeDetailV5::client_firm>() << "\"";
        o << ",\"pri_agg_group\":\"" << m.get<TradeCubeDetailV5::pri_agg_group>() << "\"";
        o << ",\"sec_agg_group\":\"" << m.get<TradeCubeDetailV5::sec_agg_group>() << "\"";
        o << ",\"sec_key\":{" << m.get<TradeCubeDetailV5::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<TradeCubeDetailV5::sec_type>();
        o << ",\"ticker\":{" << m.get<TradeCubeDetailV5::ticker>() << "}";
        o << ",\"view_group1\":\"" << m.get<TradeCubeDetailV5::view_group1>() << "\"";
        o << ",\"view_group2\":\"" << m.get<TradeCubeDetailV5::view_group2>() << "\"";
        o << ",\"view_group3\":\"" << m.get<TradeCubeDetailV5::view_group3>() << "\"";
        o << ",\"risk_class\":\"" << m.get<TradeCubeDetailV5::risk_class>() << "\"";
        o << ",\"symbol_type\":" << (int64_t)m.get<TradeCubeDetailV5::symbol_type>();
        o << ",\"sector\":\"" << m.get<TradeCubeDetailV5::sector>() << "\"";
        o << ",\"ind_num\":" << m.get<TradeCubeDetailV5::ind_num>();
        o << ",\"sub_num\":" << m.get<TradeCubeDetailV5::sub_num>();
        o << ",\"grp_num\":" << m.get<TradeCubeDetailV5::grp_num>();
        o << ",\"nbr_num\":" << m.get<TradeCubeDetailV5::nbr_num>();
        o << ",\"edays\":" << m.get<TradeCubeDetailV5::edays>();
        o << ",\"exp_code\":" << (int64_t)m.get<TradeCubeDetailV5::exp_code>();
        o << ",\"skew_code\":" << (int64_t)m.get<TradeCubeDetailV5::skew_code>();
        o << ",\"width_code\":" << (int64_t)m.get<TradeCubeDetailV5::width_code>();
        o << ",\"price_format\":" << (int64_t)m.get<TradeCubeDetailV5::price_format>();
        o << ",\"u_price_format\":" << (int64_t)m.get<TradeCubeDetailV5::u_price_format>();
        o << ",\"years\":" << m.get<TradeCubeDetailV5::years>();
        o << ",\"underliers_per_cn\":" << m.get<TradeCubeDetailV5::underliers_per_cn>();
        o << ",\"underlier_type\":" << (int64_t)m.get<TradeCubeDetailV5::underlier_type>();
        o << ",\"tick_value\":" << m.get<TradeCubeDetailV5::tick_value>();
        o << ",\"point_value\":" << m.get<TradeCubeDetailV5::point_value>();
        o << ",\"point_currency\":" << (int64_t)m.get<TradeCubeDetailV5::point_currency>();
        o << ",\"u_prc_ratio\":" << m.get<TradeCubeDetailV5::u_prc_ratio>();
        o << ",\"min_tick_size\":" << m.get<TradeCubeDetailV5::min_tick_size>();
        o << ",\"routing_code\":\"" << m.get<TradeCubeDetailV5::routing_code>() << "\"";
        o << ",\"orig_exec_id\":\"" << m.get<TradeCubeDetailV5::orig_exec_id>() << "\"";
        o << ",\"last_exec_id\":\"" << m.get<TradeCubeDetailV5::last_exec_id>() << "\"";
        {
            std::time_t tt = m.get<TradeCubeDetailV5::transact_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"transact_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"exec_status\":" << (int64_t)m.get<TradeCubeDetailV5::exec_status>();
        o << ",\"remote_text\":\"" << m.get<TradeCubeDetailV5::remote_text>() << "\"";
        o << ",\"order_limit_type\":" << (int64_t)m.get<TradeCubeDetailV5::order_limit_type>();
        o << ",\"order_limit_class\":" << (int64_t)m.get<TradeCubeDetailV5::order_limit_class>();
        o << ",\"parent_shape\":" << (int64_t)m.get<TradeCubeDetailV5::parent_shape>();
        o << ",\"parent_order_handling\":" << (int64_t)m.get<TradeCubeDetailV5::parent_order_handling>();
        o << ",\"parent_balance_handling\":" << (int64_t)m.get<TradeCubeDetailV5::parent_balance_handling>();
        o << ",\"parent_order_size\":" << m.get<TradeCubeDetailV5::parent_order_size>();
        o << ",\"method\":\"" << m.get<TradeCubeDetailV5::method>() << "\"";
        o << ",\"strategy\":\"" << m.get<TradeCubeDetailV5::strategy>() << "\"";
        o << ",\"user_name\":\"" << m.get<TradeCubeDetailV5::user_name>() << "\"";
        o << ",\"origin\":\"" << m.get<TradeCubeDetailV5::origin>() << "\"";
        o << ",\"source\":\"" << m.get<TradeCubeDetailV5::source>() << "\"";
        o << ",\"server\":\"" << m.get<TradeCubeDetailV5::server>() << "\"";
        o << ",\"clearing_firm\":\"" << m.get<TradeCubeDetailV5::clearing_firm>() << "\"";
        o << ",\"clearing_accnt\":\"" << m.get<TradeCubeDetailV5::clearing_accnt>() << "\"";
        o << ",\"last_capacity\":" << (int64_t)m.get<TradeCubeDetailV5::last_capacity>();
        o << ",\"exec_role\":" << (int64_t)m.get<TradeCubeDetailV5::exec_role>();
        o << ",\"exec_brkr_code\":\"" << m.get<TradeCubeDetailV5::exec_brkr_code>() << "\"";
        o << ",\"exec_brkr_accnt\":\"" << m.get<TradeCubeDetailV5::exec_brkr_accnt>() << "\"";
        o << ",\"exec_brkr_cl_firm\":\"" << m.get<TradeCubeDetailV5::exec_brkr_cl_firm>() << "\"";
        o << ",\"exec_brkr_user_name\":\"" << m.get<TradeCubeDetailV5::exec_brkr_user_name>() << "\"";
        o << ",\"clearing_flip_type\":" << (int64_t)m.get<TradeCubeDetailV5::clearing_flip_type>();
        o << ",\"clearing_flip_firm\":\"" << m.get<TradeCubeDetailV5::clearing_flip_firm>() << "\"";
        o << ",\"clearing_flip_accnt\":\"" << m.get<TradeCubeDetailV5::clearing_flip_accnt>() << "\"";
        o << ",\"risk_group_id\":" << m.get<TradeCubeDetailV5::risk_group_id>();
        o << ",\"fill_brkr_rate\":" << m.get<TradeCubeDetailV5::fill_brkr_rate>();
        o << ",\"fill_routing_rate\":" << m.get<TradeCubeDetailV5::fill_routing_rate>();
        o << ",\"billing_sec_type\":" << (int64_t)m.get<TradeCubeDetailV5::billing_sec_type>();
        o << ",\"billing_category\":" << (int64_t)m.get<TradeCubeDetailV5::billing_category>();
        o << ",\"firm_type\":" << (int64_t)m.get<TradeCubeDetailV5::firm_type>();
        o << ",\"side\":" << (int64_t)m.get<TradeCubeDetailV5::side>();
        o << ",\"price_type\":" << (int64_t)m.get<TradeCubeDetailV5::price_type>();
        o << ",\"ssale_flag\":" << (int64_t)m.get<TradeCubeDetailV5::ssale_flag>();
        o << ",\"spdr_ssale_flag\":" << (int64_t)m.get<TradeCubeDetailV5::spdr_ssale_flag>();
        o << ",\"position_type\":" << (int64_t)m.get<TradeCubeDetailV5::position_type>();
        o << ",\"auto_hedge\":" << (int64_t)m.get<TradeCubeDetailV5::auto_hedge>();
        {
            std::time_t tt = m.get<TradeCubeDetailV5::order_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"order_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"order_ubid\":" << m.get<TradeCubeDetailV5::order_ubid>();
        o << ",\"order_uask\":" << m.get<TradeCubeDetailV5::order_uask>();
        o << ",\"order_bid\":" << m.get<TradeCubeDetailV5::order_bid>();
        o << ",\"order_ask\":" << m.get<TradeCubeDetailV5::order_ask>();
        o << ",\"order_surf_prc\":" << m.get<TradeCubeDetailV5::order_surf_prc>();
        o << ",\"order_surf_vol\":" << m.get<TradeCubeDetailV5::order_surf_vol>();
        o << ",\"order_limit_vol\":" << m.get<TradeCubeDetailV5::order_limit_vol>();
        o << ",\"order_limit_prc\":" << m.get<TradeCubeDetailV5::order_limit_prc>();
        o << ",\"order_limit_ref_uprc\":" << m.get<TradeCubeDetailV5::order_limit_ref_uprc>();
        o << ",\"child_shape\":" << (int64_t)m.get<TradeCubeDetailV5::child_shape>();
        o << ",\"child_size\":" << m.get<TradeCubeDetailV5::child_size>();
        o << ",\"child_price\":" << m.get<TradeCubeDetailV5::child_price>();
        o << ",\"child_exch\":\"" << m.get<TradeCubeDetailV5::child_exch>() << "\"";
        o << ",\"child_ex_dest\":\"" << m.get<TradeCubeDetailV5::child_ex_dest>() << "\"";
        {
            std::time_t tt = m.get<TradeCubeDetailV5::child_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"child_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"child_ubid\":" << m.get<TradeCubeDetailV5::child_ubid>();
        o << ",\"child_uask\":" << m.get<TradeCubeDetailV5::child_uask>();
        o << ",\"child_bid\":" << m.get<TradeCubeDetailV5::child_bid>();
        o << ",\"child_ask\":" << m.get<TradeCubeDetailV5::child_ask>();
        o << ",\"child_surf_prc\":" << m.get<TradeCubeDetailV5::child_surf_prc>();
        o << ",\"child_vol\":" << m.get<TradeCubeDetailV5::child_vol>();
        o << ",\"child_prob\":" << m.get<TradeCubeDetailV5::child_prob>();
        o << ",\"child_limit_prc\":" << m.get<TradeCubeDetailV5::child_limit_prc>();
        o << ",\"child_limit_ref_uprc\":" << m.get<TradeCubeDetailV5::child_limit_ref_uprc>();
        o << ",\"child_limit_pnl\":" << m.get<TradeCubeDetailV5::child_limit_pnl>();
        o << ",\"child_algo_handler\":" << (int64_t)m.get<TradeCubeDetailV5::child_algo_handler>();
        o << ",\"child_order_handling\":\"" << m.get<TradeCubeDetailV5::child_order_handling>() << "\"";
        o << ",\"child_create_reason\":" << (int64_t)m.get<TradeCubeDetailV5::child_create_reason>();
        o << ",\"child_cancel_reason\":" << (int64_t)m.get<TradeCubeDetailV5::child_cancel_reason>();
        o << ",\"child_mkt_stance\":" << (int64_t)m.get<TradeCubeDetailV5::child_mkt_stance>();
        o << ",\"child_cxl_attempted\":" << (int64_t)m.get<TradeCubeDetailV5::child_cxl_attempted>();
        o << ",\"child_cxl_fill_latency\":" << m.get<TradeCubeDetailV5::child_cxl_fill_latency>();
        o << ",\"fill_exch\":\"" << m.get<TradeCubeDetailV5::fill_exch>() << "\"";
        o << ",\"fill_price\":" << m.get<TradeCubeDetailV5::fill_price>();
        o << ",\"fill_ts\":" << m.get<TradeCubeDetailV5::fill_ts>();
        {
            std::time_t tt = m.get<TradeCubeDetailV5::fill_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"fill_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"fill_size\":" << m.get<TradeCubeDetailV5::fill_size>();
        o << ",\"eff_fill_size\":" << m.get<TradeCubeDetailV5::eff_fill_size>();
        o << ",\"fill_vol\":" << m.get<TradeCubeDetailV5::fill_vol>();
        o << ",\"fill_prob\":" << m.get<TradeCubeDetailV5::fill_prob>();
        o << ",\"fill_limit_prc\":" << m.get<TradeCubeDetailV5::fill_limit_prc>();
        o << ",\"fill_limit_ref_uprc\":" << m.get<TradeCubeDetailV5::fill_limit_ref_uprc>();
        o << ",\"fill_limit_pnl\":" << m.get<TradeCubeDetailV5::fill_limit_pnl>();
        o << ",\"fill_de\":" << m.get<TradeCubeDetailV5::fill_de>();
        o << ",\"fill_ve\":" << m.get<TradeCubeDetailV5::fill_ve>();
        o << ",\"fill_th\":" << m.get<TradeCubeDetailV5::fill_th>();
        o << ",\"fill_uprc\":" << m.get<TradeCubeDetailV5::fill_uprc>();
        o << ",\"fill_beta\":" << m.get<TradeCubeDetailV5::fill_beta>();
        o << ",\"fill_tv\":" << m.get<TradeCubeDetailV5::fill_tv>();
        o << ",\"fill_tp\":" << m.get<TradeCubeDetailV5::fill_tp>();
        o << ",\"fill_ubid\":" << m.get<TradeCubeDetailV5::fill_ubid>();
        o << ",\"fill_uask\":" << m.get<TradeCubeDetailV5::fill_uask>();
        o << ",\"fill_bid\":" << m.get<TradeCubeDetailV5::fill_bid>();
        o << ",\"fill_ask\":" << m.get<TradeCubeDetailV5::fill_ask>();
        o << ",\"fill_surf_prc\":" << m.get<TradeCubeDetailV5::fill_surf_prc>();
        o << ",\"fill_post_umark1_m\":" << m.get<TradeCubeDetailV5::fill_post_umark1_m>();
        o << ",\"fill_post_umark10_m\":" << m.get<TradeCubeDetailV5::fill_post_umark10_m>();
        o << ",\"fill_post_mark1_m\":" << m.get<TradeCubeDetailV5::fill_post_mark1_m>();
        o << ",\"fill_post_mark10_m\":" << m.get<TradeCubeDetailV5::fill_post_mark10_m>();
        o << ",\"margin_udn_vdn\":" << m.get<TradeCubeDetailV5::margin_udn_vdn>();
        o << ",\"margin_udn_vup\":" << m.get<TradeCubeDetailV5::margin_udn_vup>();
        o << ",\"margin_uup_vdn\":" << m.get<TradeCubeDetailV5::margin_uup_vdn>();
        o << ",\"margin_uup_vup\":" << m.get<TradeCubeDetailV5::margin_uup_vup>();
        o << ",\"risk_code\":" << (int64_t)m.get<TradeCubeDetailV5::risk_code>();
        o << ",\"exch_liquidity_tag\":\"" << m.get<TradeCubeDetailV5::exch_liquidity_tag>() << "\"";
        o << ",\"spdr_liquidity_tag\":\"" << m.get<TradeCubeDetailV5::spdr_liquidity_tag>() << "\"";
        o << ",\"fill_exch_detail\":\"" << m.get<TradeCubeDetailV5::fill_exch_detail>() << "\"";
        o << ",\"notional_value\":" << m.get<TradeCubeDetailV5::notional_value>();
        o << ",\"market_value\":" << m.get<TradeCubeDetailV5::market_value>();
        o << ",\"order_mkt_width\":" << m.get<TradeCubeDetailV5::order_mkt_width>();
        o << ",\"child_mkt_width\":" << m.get<TradeCubeDetailV5::child_mkt_width>();
        o << ",\"fill_mkt_width\":" << m.get<TradeCubeDetailV5::fill_mkt_width>();
        o << ",\"parent_order_age\":" << m.get<TradeCubeDetailV5::parent_order_age>();
        o << ",\"parent_age_code\":" << (int64_t)m.get<TradeCubeDetailV5::parent_age_code>();
        o << ",\"trd_delta\":" << m.get<TradeCubeDetailV5::trd_delta>();
        o << ",\"trd_ddelta\":" << m.get<TradeCubeDetailV5::trd_ddelta>();
        o << ",\"trd_gamma\":" << m.get<TradeCubeDetailV5::trd_gamma>();
        o << ",\"trd_vega\":" << m.get<TradeCubeDetailV5::trd_vega>();
        o << ",\"trd_wt_vega\":" << m.get<TradeCubeDetailV5::trd_wt_vega>();
        o << ",\"trd_theta\":" << m.get<TradeCubeDetailV5::trd_theta>();
        o << ",\"trd_prem\":" << m.get<TradeCubeDetailV5::trd_prem>();
        o << ",\"trd_beta\":" << m.get<TradeCubeDetailV5::trd_beta>();
        o << ",\"trd_dbeta\":" << m.get<TradeCubeDetailV5::trd_dbeta>();
        o << ",\"surf_edge\":" << m.get<TradeCubeDetailV5::surf_edge>();
        o << ",\"surf_edge_unit\":" << m.get<TradeCubeDetailV5::surf_edge_unit>();
        o << ",\"theo_edge\":" << m.get<TradeCubeDetailV5::theo_edge>();
        o << ",\"theo_edge_unit\":" << m.get<TradeCubeDetailV5::theo_edge_unit>();
        o << ",\"exch_fee\":" << m.get<TradeCubeDetailV5::exch_fee>();
        o << ",\"half_width_pnl\":" << m.get<TradeCubeDetailV5::half_width_pnl>();
        o << ",\"cl_arrive_pnl\":" << m.get<TradeCubeDetailV5::cl_arrive_pnl>();
        o << ",\"arrive_pnl\":" << m.get<TradeCubeDetailV5::arrive_pnl>();
        o << ",\"arrive_dn_pnl\":" << m.get<TradeCubeDetailV5::arrive_dn_pnl>();
        o << ",\"u_drift_arrive_pnl\":" << m.get<TradeCubeDetailV5::u_drift_arrive_pnl>();
        o << ",\"day_dn_pnl\":" << m.get<TradeCubeDetailV5::day_dn_pnl>();
        o << ",\"day_m1_pnl\":" << m.get<TradeCubeDetailV5::day_m1_pnl>();
        o << ",\"day_m10_pnl\":" << m.get<TradeCubeDetailV5::day_m10_pnl>();
        o << ",\"u_drift_day_pnl\":" << m.get<TradeCubeDetailV5::u_drift_day_pnl>();
        o << ",\"u_drift_m1_pnl\":" << m.get<TradeCubeDetailV5::u_drift_m1_pnl>();
        o << ",\"u_drift_m10_pnl\":" << m.get<TradeCubeDetailV5::u_drift_m10_pnl>();
        o << ",\"day_pnl\":" << m.get<TradeCubeDetailV5::day_pnl>();
        o << ",\"live_mark\":" << m.get<TradeCubeDetailV5::live_mark>();
        o << ",\"live_uprc\":" << m.get<TradeCubeDetailV5::live_uprc>();
        o << ",\"pend_mark\":" << m.get<TradeCubeDetailV5::pend_mark>();
        o << ",\"pend_uprc\":" << m.get<TradeCubeDetailV5::pend_uprc>();
        o << ",\"trd_mark_error\":\"" << m.get<TradeCubeDetailV5::trd_mark_error>() << "\"";
        o << ",\"day_mark_error\":\"" << m.get<TradeCubeDetailV5::day_mark_error>() << "\"";
        o << ",\"user_data1\":\"" << m.get<TradeCubeDetailV5::user_data1>() << "\"";
        o << ",\"user_data2\":\"" << m.get<TradeCubeDetailV5::user_data2>() << "\"";
        {
            std::time_t tt = m.get<TradeCubeDetailV5::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}