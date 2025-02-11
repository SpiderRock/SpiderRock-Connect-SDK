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

    #ifndef _trade_date__GUARD__
    #define _trade_date__GUARD__
    DECL_STRONG_TYPE(trade_date, DateKey);
    #endif//_trade_date__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _sec_key__OptionKey__GUARD__
    #define _sec_key__OptionKey__GUARD__
    DECL_STRONG_TYPE(sec_key__OptionKey, OptionKey);
    #endif//_sec_key__OptionKey__GUARD__

    #ifndef _sec_type__SpdrKeyType__GUARD__
    #define _sec_type__SpdrKeyType__GUARD__
    DECL_STRONG_TYPE(sec_type__SpdrKeyType, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__SpdrKeyType__GUARD__

    #ifndef _side__GUARD__
    #define _side__GUARD__
    DECL_STRONG_TYPE(side, spiderrock::protobuf::api::BuySell);
    #endif//_side__GUARD__

    #ifndef _version__int32__GUARD__
    #define _version__int32__GUARD__
    DECL_STRONG_TYPE(version__int32, int32);
    #endif//_version__int32__GUARD__

    #ifndef _parent_number__GUARD__
    #define _parent_number__GUARD__
    DECL_STRONG_TYPE(parent_number, int64);
    #endif//_parent_number__GUARD__

    #ifndef _base_parent_number__GUARD__
    #define _base_parent_number__GUARD__
    DECL_STRONG_TYPE(base_parent_number, int64);
    #endif//_base_parent_number__GUARD__

    #ifndef _spdr_source__GUARD__
    #define _spdr_source__GUARD__
    DECL_STRONG_TYPE(spdr_source, spiderrock::protobuf::api::SpdrSource);
    #endif//_spdr_source__GUARD__

    #ifndef _grouping_code__GUARD__
    #define _grouping_code__GUARD__
    DECL_STRONG_TYPE(grouping_code, int64);
    #endif//_grouping_code__GUARD__

    #ifndef _risk_group_id__GUARD__
    #define _risk_group_id__GUARD__
    DECL_STRONG_TYPE(risk_group_id, int64);
    #endif//_risk_group_id__GUARD__

    #ifndef _alt_order_id__GUARD__
    #define _alt_order_id__GUARD__
    DECL_STRONG_TYPE(alt_order_id, string);
    #endif//_alt_order_id__GUARD__

    #ifndef _src_routing_code__GUARD__
    #define _src_routing_code__GUARD__
    DECL_STRONG_TYPE(src_routing_code, string);
    #endif//_src_routing_code__GUARD__

    #ifndef _user_name__GUARD__
    #define _user_name__GUARD__
    DECL_STRONG_TYPE(user_name, string);
    #endif//_user_name__GUARD__

    #ifndef _server__GUARD__
    #define _server__GUARD__
    DECL_STRONG_TYPE(server, string);
    #endif//_server__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _sector__GUARD__
    #define _sector__GUARD__
    DECL_STRONG_TYPE(sector, string);
    #endif//_sector__GUARD__

    #ifndef _client_tags__GUARD__
    #define _client_tags__GUARD__
    DECL_STRONG_TYPE(client_tags, string);
    #endif//_client_tags__GUARD__

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

    #ifndef _underlier_type__UnderlierType__GUARD__
    #define _underlier_type__UnderlierType__GUARD__
    DECL_STRONG_TYPE(underlier_type__UnderlierType, spiderrock::protobuf::api::UnderlierType);
    #endif//_underlier_type__UnderlierType__GUARD__

    #ifndef _min_tick_size__float__GUARD__
    #define _min_tick_size__float__GUARD__
    DECL_STRONG_TYPE(min_tick_size__float, float);
    #endif//_min_tick_size__float__GUARD__

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

    #ifndef _parent_shape__GUARD__
    #define _parent_shape__GUARD__
    DECL_STRONG_TYPE(parent_shape, spiderrock::protobuf::api::SpdrOrderShape);
    #endif//_parent_shape__GUARD__

    #ifndef _parent_limit_type__GUARD__
    #define _parent_limit_type__GUARD__
    DECL_STRONG_TYPE(parent_limit_type, spiderrock::protobuf::api::SpdrLimitType);
    #endif//_parent_limit_type__GUARD__

    #ifndef _parent_limit_class__GUARD__
    #define _parent_limit_class__GUARD__
    DECL_STRONG_TYPE(parent_limit_class, spiderrock::protobuf::api::SpdrLimitClass);
    #endif//_parent_limit_class__GUARD__

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

    #ifndef _parent_dttm__GUARD__
    #define _parent_dttm__GUARD__
    DECL_STRONG_TYPE(parent_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_parent_dttm__GUARD__

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

    #ifndef _parent_fair_prc__GUARD__
    #define _parent_fair_prc__GUARD__
    DECL_STRONG_TYPE(parent_fair_prc, float);
    #endif//_parent_fair_prc__GUARD__

    #ifndef _parent_fair_width__float__GUARD__
    #define _parent_fair_width__float__GUARD__
    DECL_STRONG_TYPE(parent_fair_width__float, float);
    #endif//_parent_fair_width__float__GUARD__

    #ifndef _parent_limit_prc__GUARD__
    #define _parent_limit_prc__GUARD__
    DECL_STRONG_TYPE(parent_limit_prc, double);
    #endif//_parent_limit_prc__GUARD__

    #ifndef _parent_limit_ref_uprc__GUARD__
    #define _parent_limit_ref_uprc__GUARD__
    DECL_STRONG_TYPE(parent_limit_ref_uprc, double);
    #endif//_parent_limit_ref_uprc__GUARD__

    #ifndef _parent_ssale_flag__GUARD__
    #define _parent_ssale_flag__GUARD__
    DECL_STRONG_TYPE(parent_ssale_flag, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_parent_ssale_flag__GUARD__

    #ifndef _parent_position_type__GUARD__
    #define _parent_position_type__GUARD__
    DECL_STRONG_TYPE(parent_position_type, spiderrock::protobuf::api::PositionType);
    #endif//_parent_position_type__GUARD__

    #ifndef _parent_strategy__GUARD__
    #define _parent_strategy__GUARD__
    DECL_STRONG_TYPE(parent_strategy, string);
    #endif//_parent_strategy__GUARD__

    #ifndef _parent_auto_hedge__GUARD__
    #define _parent_auto_hedge__GUARD__
    DECL_STRONG_TYPE(parent_auto_hedge, spiderrock::protobuf::api::AutoHedge);
    #endif//_parent_auto_hedge__GUARD__

    #ifndef _child_dttm__GUARD__
    #define _child_dttm__GUARD__
    DECL_STRONG_TYPE(child_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_child_dttm__GUARD__

    #ifndef _child_cl_ord_id__GUARD__
    #define _child_cl_ord_id__GUARD__
    DECL_STRONG_TYPE(child_cl_ord_id, string);
    #endif//_child_cl_ord_id__GUARD__

    #ifndef _child_routing_code__GUARD__
    #define _child_routing_code__GUARD__
    DECL_STRONG_TYPE(child_routing_code, string);
    #endif//_child_routing_code__GUARD__

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

    #ifndef _child_uprc__GUARD__
    #define _child_uprc__GUARD__
    DECL_STRONG_TYPE(child_uprc, double);
    #endif//_child_uprc__GUARD__

    #ifndef _child_bid__GUARD__
    #define _child_bid__GUARD__
    DECL_STRONG_TYPE(child_bid, double);
    #endif//_child_bid__GUARD__

    #ifndef _child_ask__GUARD__
    #define _child_ask__GUARD__
    DECL_STRONG_TYPE(child_ask, double);
    #endif//_child_ask__GUARD__

    #ifndef _child_fair_prc__GUARD__
    #define _child_fair_prc__GUARD__
    DECL_STRONG_TYPE(child_fair_prc, float);
    #endif//_child_fair_prc__GUARD__

    #ifndef _child_fair_width__float__GUARD__
    #define _child_fair_width__float__GUARD__
    DECL_STRONG_TYPE(child_fair_width__float, float);
    #endif//_child_fair_width__float__GUARD__

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

    #ifndef _child_ssale_flag__GUARD__
    #define _child_ssale_flag__GUARD__
    DECL_STRONG_TYPE(child_ssale_flag, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_child_ssale_flag__GUARD__

    #ifndef _child_position_type__GUARD__
    #define _child_position_type__GUARD__
    DECL_STRONG_TYPE(child_position_type, spiderrock::protobuf::api::PositionType);
    #endif//_child_position_type__GUARD__

    #ifndef _child_firm_type__GUARD__
    #define _child_firm_type__GUARD__
    DECL_STRONG_TYPE(child_firm_type, spiderrock::protobuf::api::FirmType);
    #endif//_child_firm_type__GUARD__

    #ifndef _child_capacity__GUARD__
    #define _child_capacity__GUARD__
    DECL_STRONG_TYPE(child_capacity, spiderrock::protobuf::api::OrderCapacity);
    #endif//_child_capacity__GUARD__

    #ifndef _fill_exch__GUARD__
    #define _fill_exch__GUARD__
    DECL_STRONG_TYPE(fill_exch, string);
    #endif//_fill_exch__GUARD__

    #ifndef _fill_price__GUARD__
    #define _fill_price__GUARD__
    DECL_STRONG_TYPE(fill_price, double);
    #endif//_fill_price__GUARD__

    #ifndef _fill_dttm__GUARD__
    #define _fill_dttm__GUARD__
    DECL_STRONG_TYPE(fill_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_fill_dttm__GUARD__

    #ifndef _fill_size__GUARD__
    #define _fill_size__GUARD__
    DECL_STRONG_TYPE(fill_size, int32);
    #endif//_fill_size__GUARD__

    #ifndef _fill_point_value__GUARD__
    #define _fill_point_value__GUARD__
    DECL_STRONG_TYPE(fill_point_value, int32);
    #endif//_fill_point_value__GUARD__

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

    #ifndef _fill_bid__GUARD__
    #define _fill_bid__GUARD__
    DECL_STRONG_TYPE(fill_bid, double);
    #endif//_fill_bid__GUARD__

    #ifndef _fill_ask__GUARD__
    #define _fill_ask__GUARD__
    DECL_STRONG_TYPE(fill_ask, double);
    #endif//_fill_ask__GUARD__

    #ifndef _fill_fair_prc__GUARD__
    #define _fill_fair_prc__GUARD__
    DECL_STRONG_TYPE(fill_fair_prc, float);
    #endif//_fill_fair_prc__GUARD__

    #ifndef _fill_fair_width__float__GUARD__
    #define _fill_fair_width__float__GUARD__
    DECL_STRONG_TYPE(fill_fair_width__float, float);
    #endif//_fill_fair_width__float__GUARD__

    #ifndef _fill_brkr_rate__GUARD__
    #define _fill_brkr_rate__GUARD__
    DECL_STRONG_TYPE(fill_brkr_rate, float);
    #endif//_fill_brkr_rate__GUARD__

    #ifndef _fill_routing_rate__GUARD__
    #define _fill_routing_rate__GUARD__
    DECL_STRONG_TYPE(fill_routing_rate, float);
    #endif//_fill_routing_rate__GUARD__

    #ifndef _fill_orig_exec_id__GUARD__
    #define _fill_orig_exec_id__GUARD__
    DECL_STRONG_TYPE(fill_orig_exec_id, string);
    #endif//_fill_orig_exec_id__GUARD__

    #ifndef _fill_last_exec_id__GUARD__
    #define _fill_last_exec_id__GUARD__
    DECL_STRONG_TYPE(fill_last_exec_id, string);
    #endif//_fill_last_exec_id__GUARD__

    #ifndef _fill_exec_status__GUARD__
    #define _fill_exec_status__GUARD__
    DECL_STRONG_TYPE(fill_exec_status, spiderrock::protobuf::api::ExecStatus);
    #endif//_fill_exec_status__GUARD__

    #ifndef _fill_remote_text__GUARD__
    #define _fill_remote_text__GUARD__
    DECL_STRONG_TYPE(fill_remote_text, string);
    #endif//_fill_remote_text__GUARD__

    #ifndef _fill_transact_dttm__GUARD__
    #define _fill_transact_dttm__GUARD__
    DECL_STRONG_TYPE(fill_transact_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_fill_transact_dttm__GUARD__

    #ifndef _fill_liquidity_tag__GUARD__
    #define _fill_liquidity_tag__GUARD__
    DECL_STRONG_TYPE(fill_liquidity_tag, string);
    #endif//_fill_liquidity_tag__GUARD__

    #ifndef _fill_exch_fee__GUARD__
    #define _fill_exch_fee__GUARD__
    DECL_STRONG_TYPE(fill_exch_fee, float);
    #endif//_fill_exch_fee__GUARD__

    #ifndef _fill_de__GUARD__
    #define _fill_de__GUARD__
    DECL_STRONG_TYPE(fill_de, float);
    #endif//_fill_de__GUARD__

    #ifndef _fill_ga__GUARD__
    #define _fill_ga__GUARD__
    DECL_STRONG_TYPE(fill_ga, float);
    #endif//_fill_ga__GUARD__

    #ifndef _fill_ve__GUARD__
    #define _fill_ve__GUARD__
    DECL_STRONG_TYPE(fill_ve, float);
    #endif//_fill_ve__GUARD__

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

    #ifndef _clearing_agent__GUARD__
    #define _clearing_agent__GUARD__
    DECL_STRONG_TYPE(clearing_agent, string);
    #endif//_clearing_agent__GUARD__

    #ifndef _clearing_tax_id__GUARD__
    #define _clearing_tax_id__GUARD__
    DECL_STRONG_TYPE(clearing_tax_id, string);
    #endif//_clearing_tax_id__GUARD__

    #ifndef _billing_sec_type__GUARD__
    #define _billing_sec_type__GUARD__
    DECL_STRONG_TYPE(billing_sec_type, spiderrock::protobuf::api::BillingSecType);
    #endif//_billing_sec_type__GUARD__

    #ifndef _billing_category__GUARD__
    #define _billing_category__GUARD__
    DECL_STRONG_TYPE(billing_category, spiderrock::protobuf::api::BillingCategory);
    #endif//_billing_category__GUARD__

    #ifndef _pri_agg_group__GUARD__
    #define _pri_agg_group__GUARD__
    DECL_STRONG_TYPE(pri_agg_group, string);
    #endif//_pri_agg_group__GUARD__

    #ifndef _sec_agg_group__GUARD__
    #define _sec_agg_group__GUARD__
    DECL_STRONG_TYPE(sec_agg_group, string);
    #endif//_sec_agg_group__GUARD__

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

    #ifndef _trd_dgamma__GUARD__
    #define _trd_dgamma__GUARD__
    DECL_STRONG_TYPE(trd_dgamma, float);
    #endif//_trd_dgamma__GUARD__

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

    #ifndef _trd_beta__GUARD__
    #define _trd_beta__GUARD__
    DECL_STRONG_TYPE(trd_beta, float);
    #endif//_trd_beta__GUARD__

    #ifndef _trd_dbeta__GUARD__
    #define _trd_dbeta__GUARD__
    DECL_STRONG_TYPE(trd_dbeta, float);
    #endif//_trd_dbeta__GUARD__

    #ifndef _trd_notional_value__GUARD__
    #define _trd_notional_value__GUARD__
    DECL_STRONG_TYPE(trd_notional_value, float);
    #endif//_trd_notional_value__GUARD__

    #ifndef _trd_market_value__GUARD__
    #define _trd_market_value__GUARD__
    DECL_STRONG_TYPE(trd_market_value, float);
    #endif//_trd_market_value__GUARD__

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

    #ifndef _trd_fair_edge__GUARD__
    #define _trd_fair_edge__GUARD__
    DECL_STRONG_TYPE(trd_fair_edge, float);
    #endif//_trd_fair_edge__GUARD__

    #ifndef _trd_fair_edge_unit__GUARD__
    #define _trd_fair_edge_unit__GUARD__
    DECL_STRONG_TYPE(trd_fair_edge_unit, float);
    #endif//_trd_fair_edge_unit__GUARD__

    #ifndef _trd_theo_edge__GUARD__
    #define _trd_theo_edge__GUARD__
    DECL_STRONG_TYPE(trd_theo_edge, float);
    #endif//_trd_theo_edge__GUARD__

    #ifndef _trd_theo_edge_unit__GUARD__
    #define _trd_theo_edge_unit__GUARD__
    DECL_STRONG_TYPE(trd_theo_edge_unit, float);
    #endif//_trd_theo_edge_unit__GUARD__

    #ifndef _cl_arrive_pn_l__GUARD__
    #define _cl_arrive_pn_l__GUARD__
    DECL_STRONG_TYPE(cl_arrive_pn_l, float);
    #endif//_cl_arrive_pn_l__GUARD__

    #ifndef _arrive_pn_l__GUARD__
    #define _arrive_pn_l__GUARD__
    DECL_STRONG_TYPE(arrive_pn_l, float);
    #endif//_arrive_pn_l__GUARD__

    #ifndef _arrive_dn_pn_l__GUARD__
    #define _arrive_dn_pn_l__GUARD__
    DECL_STRONG_TYPE(arrive_dn_pn_l, float);
    #endif//_arrive_dn_pn_l__GUARD__

    #ifndef _u_drift_arrive_pn_l__GUARD__
    #define _u_drift_arrive_pn_l__GUARD__
    DECL_STRONG_TYPE(u_drift_arrive_pn_l, float);
    #endif//_u_drift_arrive_pn_l__GUARD__

    #ifndef _child_limit_slip__GUARD__
    #define _child_limit_slip__GUARD__
    DECL_STRONG_TYPE(child_limit_slip, float);
    #endif//_child_limit_slip__GUARD__

    #ifndef _half_width_pn_l__GUARD__
    #define _half_width_pn_l__GUARD__
    DECL_STRONG_TYPE(half_width_pn_l, float);
    #endif//_half_width_pn_l__GUARD__

    #ifndef _day_dn_pn_l__GUARD__
    #define _day_dn_pn_l__GUARD__
    DECL_STRONG_TYPE(day_dn_pn_l, float);
    #endif//_day_dn_pn_l__GUARD__

    #ifndef _day_m1_pn_l__GUARD__
    #define _day_m1_pn_l__GUARD__
    DECL_STRONG_TYPE(day_m1_pn_l, float);
    #endif//_day_m1_pn_l__GUARD__

    #ifndef _day_m10_pn_l__GUARD__
    #define _day_m10_pn_l__GUARD__
    DECL_STRONG_TYPE(day_m10_pn_l, float);
    #endif//_day_m10_pn_l__GUARD__

    #ifndef _u_drift_day_pn_l__GUARD__
    #define _u_drift_day_pn_l__GUARD__
    DECL_STRONG_TYPE(u_drift_day_pn_l, float);
    #endif//_u_drift_day_pn_l__GUARD__

    #ifndef _u_drift_m1_pn_l__GUARD__
    #define _u_drift_m1_pn_l__GUARD__
    DECL_STRONG_TYPE(u_drift_m1_pn_l, float);
    #endif//_u_drift_m1_pn_l__GUARD__

    #ifndef _u_drift_m10_pn_l__GUARD__
    #define _u_drift_m10_pn_l__GUARD__
    DECL_STRONG_TYPE(u_drift_m10_pn_l, float);
    #endif//_u_drift_m10_pn_l__GUARD__

    #ifndef _day_pn_l__GUARD__
    #define _day_pn_l__GUARD__
    DECL_STRONG_TYPE(day_pn_l, float);
    #endif//_day_pn_l__GUARD__

    #ifndef _m1_mark__GUARD__
    #define _m1_mark__GUARD__
    DECL_STRONG_TYPE(m1_mark, double);
    #endif//_m1_mark__GUARD__

    #ifndef _m1_uprc__GUARD__
    #define _m1_uprc__GUARD__
    DECL_STRONG_TYPE(m1_uprc, double);
    #endif//_m1_uprc__GUARD__

    #ifndef _m10_mark__GUARD__
    #define _m10_mark__GUARD__
    DECL_STRONG_TYPE(m10_mark, double);
    #endif//_m10_mark__GUARD__

    #ifndef _m10_uprc__GUARD__
    #define _m10_uprc__GUARD__
    DECL_STRONG_TYPE(m10_uprc, double);
    #endif//_m10_uprc__GUARD__

    #ifndef _live_mark__GUARD__
    #define _live_mark__GUARD__
    DECL_STRONG_TYPE(live_mark, double);
    #endif//_live_mark__GUARD__

    #ifndef _live_uprc__double__GUARD__
    #define _live_uprc__double__GUARD__
    DECL_STRONG_TYPE(live_uprc__double, double);
    #endif//_live_uprc__double__GUARD__

    #ifndef _trd_mark_error__GUARD__
    #define _trd_mark_error__GUARD__
    DECL_STRONG_TYPE(trd_mark_error, string);
    #endif//_trd_mark_error__GUARD__

    #ifndef _day_mark_error__GUARD__
    #define _day_mark_error__GUARD__
    DECL_STRONG_TYPE(day_mark_error, string);
    #endif//_day_mark_error__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _fill_number__GUARD__
    #define _fill_number__GUARD__
    DECL_STRONG_TYPE(fill_number, int64);
    #endif//_fill_number__GUARD__

    
    class ToolCompositeExecution_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ToolCompositeExecution_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to ToolCompositeExecution_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const fill_number & value) { set_fill_number(value); }


        ToolCompositeExecution_PKey() {}

        virtual ~ToolCompositeExecution_PKey() {
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
    

    class ToolCompositeExecution {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::ToolCompositeExecution_PKey;
        using trade_date = spiderrock::protobuf::api::trade_date;
        using accnt = spiderrock::protobuf::api::accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using side = spiderrock::protobuf::api::side;
        using version = spiderrock::protobuf::api::version__int32;
        using parent_number = spiderrock::protobuf::api::parent_number;
        using base_parent_number = spiderrock::protobuf::api::base_parent_number;
        using spdr_source = spiderrock::protobuf::api::spdr_source;
        using grouping_code = spiderrock::protobuf::api::grouping_code;
        using risk_group_id = spiderrock::protobuf::api::risk_group_id;
        using alt_order_id = spiderrock::protobuf::api::alt_order_id;
        using src_routing_code = spiderrock::protobuf::api::src_routing_code;
        using user_name = spiderrock::protobuf::api::user_name;
        using server = spiderrock::protobuf::api::server;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using sector = spiderrock::protobuf::api::sector;
        using client_tags = spiderrock::protobuf::api::client_tags;
        using ind_num = spiderrock::protobuf::api::ind_num;
        using sub_num = spiderrock::protobuf::api::sub_num;
        using grp_num = spiderrock::protobuf::api::grp_num;
        using nbr_num = spiderrock::protobuf::api::nbr_num;
        using exp_code = spiderrock::protobuf::api::exp_code;
        using skew_code = spiderrock::protobuf::api::skew_code;
        using width_code = spiderrock::protobuf::api::width_code;
        using price_format = spiderrock::protobuf::api::price_format;
        using u_price_format = spiderrock::protobuf::api::u_price_format;
        using years = spiderrock::protobuf::api::years__float;
        using underlier_type = spiderrock::protobuf::api::underlier_type__UnderlierType;
        using min_tick_size = spiderrock::protobuf::api::min_tick_size__float;
        using point_value = spiderrock::protobuf::api::point_value__float;
        using point_currency = spiderrock::protobuf::api::point_currency;
        using underliers_per_cn = spiderrock::protobuf::api::underliers_per_cn;
        using parent_shape = spiderrock::protobuf::api::parent_shape;
        using parent_limit_type = spiderrock::protobuf::api::parent_limit_type;
        using parent_limit_class = spiderrock::protobuf::api::parent_limit_class;
        using parent_order_handling = spiderrock::protobuf::api::parent_order_handling;
        using parent_balance_handling = spiderrock::protobuf::api::parent_balance_handling;
        using parent_order_size = spiderrock::protobuf::api::parent_order_size;
        using parent_dttm = spiderrock::protobuf::api::parent_dttm;
        using parent_umark = spiderrock::protobuf::api::parent_umark;
        using parent_bid = spiderrock::protobuf::api::parent_bid;
        using parent_ask = spiderrock::protobuf::api::parent_ask;
        using parent_fair_prc = spiderrock::protobuf::api::parent_fair_prc;
        using parent_fair_width = spiderrock::protobuf::api::parent_fair_width__float;
        using parent_limit_prc = spiderrock::protobuf::api::parent_limit_prc;
        using parent_limit_ref_uprc = spiderrock::protobuf::api::parent_limit_ref_uprc;
        using parent_ssale_flag = spiderrock::protobuf::api::parent_ssale_flag;
        using parent_position_type = spiderrock::protobuf::api::parent_position_type;
        using parent_strategy = spiderrock::protobuf::api::parent_strategy;
        using parent_auto_hedge = spiderrock::protobuf::api::parent_auto_hedge;
        using child_dttm = spiderrock::protobuf::api::child_dttm;
        using child_cl_ord_id = spiderrock::protobuf::api::child_cl_ord_id;
        using child_routing_code = spiderrock::protobuf::api::child_routing_code;
        using child_size = spiderrock::protobuf::api::child_size;
        using child_price = spiderrock::protobuf::api::child_price;
        using child_exch = spiderrock::protobuf::api::child_exch;
        using child_ex_dest = spiderrock::protobuf::api::child_ex_dest;
        using child_uprc = spiderrock::protobuf::api::child_uprc;
        using child_bid = spiderrock::protobuf::api::child_bid;
        using child_ask = spiderrock::protobuf::api::child_ask;
        using child_fair_prc = spiderrock::protobuf::api::child_fair_prc;
        using child_fair_width = spiderrock::protobuf::api::child_fair_width__float;
        using child_vol = spiderrock::protobuf::api::child_vol;
        using child_prob = spiderrock::protobuf::api::child_prob;
        using child_limit_prc = spiderrock::protobuf::api::child_limit_prc;
        using child_limit_ref_uprc = spiderrock::protobuf::api::child_limit_ref_uprc;
        using child_algo_handler = spiderrock::protobuf::api::child_algo_handler;
        using child_order_handling = spiderrock::protobuf::api::child_order_handling;
        using child_create_reason = spiderrock::protobuf::api::child_create_reason;
        using child_cancel_reason = spiderrock::protobuf::api::child_cancel_reason;
        using child_mkt_stance = spiderrock::protobuf::api::child_mkt_stance;
        using child_cxl_attempted = spiderrock::protobuf::api::child_cxl_attempted;
        using child_ssale_flag = spiderrock::protobuf::api::child_ssale_flag;
        using child_position_type = spiderrock::protobuf::api::child_position_type;
        using child_firm_type = spiderrock::protobuf::api::child_firm_type;
        using child_capacity = spiderrock::protobuf::api::child_capacity;
        using fill_exch = spiderrock::protobuf::api::fill_exch;
        using fill_price = spiderrock::protobuf::api::fill_price;
        using fill_dttm = spiderrock::protobuf::api::fill_dttm;
        using fill_size = spiderrock::protobuf::api::fill_size;
        using fill_point_value = spiderrock::protobuf::api::fill_point_value;
        using fill_vol = spiderrock::protobuf::api::fill_vol;
        using fill_prob = spiderrock::protobuf::api::fill_prob;
        using fill_limit_prc = spiderrock::protobuf::api::fill_limit_prc;
        using fill_limit_ref_uprc = spiderrock::protobuf::api::fill_limit_ref_uprc;
        using fill_uprc = spiderrock::protobuf::api::fill_uprc;
        using fill_beta = spiderrock::protobuf::api::fill_beta;
        using fill_tv = spiderrock::protobuf::api::fill_tv;
        using fill_tp = spiderrock::protobuf::api::fill_tp;
        using fill_bid = spiderrock::protobuf::api::fill_bid;
        using fill_ask = spiderrock::protobuf::api::fill_ask;
        using fill_fair_prc = spiderrock::protobuf::api::fill_fair_prc;
        using fill_fair_width = spiderrock::protobuf::api::fill_fair_width__float;
        using fill_brkr_rate = spiderrock::protobuf::api::fill_brkr_rate;
        using fill_routing_rate = spiderrock::protobuf::api::fill_routing_rate;
        using fill_orig_exec_id = spiderrock::protobuf::api::fill_orig_exec_id;
        using fill_last_exec_id = spiderrock::protobuf::api::fill_last_exec_id;
        using fill_exec_status = spiderrock::protobuf::api::fill_exec_status;
        using fill_remote_text = spiderrock::protobuf::api::fill_remote_text;
        using fill_transact_dttm = spiderrock::protobuf::api::fill_transact_dttm;
        using fill_liquidity_tag = spiderrock::protobuf::api::fill_liquidity_tag;
        using fill_exch_fee = spiderrock::protobuf::api::fill_exch_fee;
        using fill_de = spiderrock::protobuf::api::fill_de;
        using fill_ga = spiderrock::protobuf::api::fill_ga;
        using fill_ve = spiderrock::protobuf::api::fill_ve;
        using exec_role = spiderrock::protobuf::api::exec_role;
        using exec_brkr_code = spiderrock::protobuf::api::exec_brkr_code;
        using exec_brkr_accnt = spiderrock::protobuf::api::exec_brkr_accnt;
        using exec_brkr_cl_firm = spiderrock::protobuf::api::exec_brkr_cl_firm;
        using exec_brkr_user_name = spiderrock::protobuf::api::exec_brkr_user_name;
        using clearing_flip_type = spiderrock::protobuf::api::clearing_flip_type;
        using clearing_flip_firm = spiderrock::protobuf::api::clearing_flip_firm;
        using clearing_flip_accnt = spiderrock::protobuf::api::clearing_flip_accnt;
        using clearing_agent = spiderrock::protobuf::api::clearing_agent;
        using clearing_tax_id = spiderrock::protobuf::api::clearing_tax_id;
        using billing_sec_type = spiderrock::protobuf::api::billing_sec_type;
        using billing_category = spiderrock::protobuf::api::billing_category;
        using pri_agg_group = spiderrock::protobuf::api::pri_agg_group;
        using sec_agg_group = spiderrock::protobuf::api::sec_agg_group;
        using trd_delta = spiderrock::protobuf::api::trd_delta;
        using trd_ddelta = spiderrock::protobuf::api::trd_ddelta;
        using trd_gamma = spiderrock::protobuf::api::trd_gamma;
        using trd_dgamma = spiderrock::protobuf::api::trd_dgamma;
        using trd_vega = spiderrock::protobuf::api::trd_vega;
        using trd_wt_vega = spiderrock::protobuf::api::trd_wt_vega;
        using trd_theta = spiderrock::protobuf::api::trd_theta;
        using trd_beta = spiderrock::protobuf::api::trd_beta;
        using trd_dbeta = spiderrock::protobuf::api::trd_dbeta;
        using trd_notional_value = spiderrock::protobuf::api::trd_notional_value;
        using trd_market_value = spiderrock::protobuf::api::trd_market_value;
        using margin_udn_vdn = spiderrock::protobuf::api::margin_udn_vdn;
        using margin_udn_vup = spiderrock::protobuf::api::margin_udn_vup;
        using margin_uup_vdn = spiderrock::protobuf::api::margin_uup_vdn;
        using margin_uup_vup = spiderrock::protobuf::api::margin_uup_vup;
        using trd_fair_edge = spiderrock::protobuf::api::trd_fair_edge;
        using trd_fair_edge_unit = spiderrock::protobuf::api::trd_fair_edge_unit;
        using trd_theo_edge = spiderrock::protobuf::api::trd_theo_edge;
        using trd_theo_edge_unit = spiderrock::protobuf::api::trd_theo_edge_unit;
        using cl_arrive_pn_l = spiderrock::protobuf::api::cl_arrive_pn_l;
        using arrive_pn_l = spiderrock::protobuf::api::arrive_pn_l;
        using arrive_dn_pn_l = spiderrock::protobuf::api::arrive_dn_pn_l;
        using u_drift_arrive_pn_l = spiderrock::protobuf::api::u_drift_arrive_pn_l;
        using child_limit_slip = spiderrock::protobuf::api::child_limit_slip;
        using half_width_pn_l = spiderrock::protobuf::api::half_width_pn_l;
        using day_dn_pn_l = spiderrock::protobuf::api::day_dn_pn_l;
        using day_m1_pn_l = spiderrock::protobuf::api::day_m1_pn_l;
        using day_m10_pn_l = spiderrock::protobuf::api::day_m10_pn_l;
        using u_drift_day_pn_l = spiderrock::protobuf::api::u_drift_day_pn_l;
        using u_drift_m1_pn_l = spiderrock::protobuf::api::u_drift_m1_pn_l;
        using u_drift_m10_pn_l = spiderrock::protobuf::api::u_drift_m10_pn_l;
        using day_pn_l = spiderrock::protobuf::api::day_pn_l;
        using m1_mark = spiderrock::protobuf::api::m1_mark;
        using m1_uprc = spiderrock::protobuf::api::m1_uprc;
        using m10_mark = spiderrock::protobuf::api::m10_mark;
        using m10_uprc = spiderrock::protobuf::api::m10_uprc;
        using live_mark = spiderrock::protobuf::api::live_mark;
        using live_uprc = spiderrock::protobuf::api::live_uprc__double;
        using trd_mark_error = spiderrock::protobuf::api::trd_mark_error;
        using day_mark_error = spiderrock::protobuf::api::day_mark_error;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        trade_date m_trade_date{};
        accnt m_accnt{};
        client_firm m_client_firm{};
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        side m_side{};
        version m_version{};
        parent_number m_parent_number{};
        base_parent_number m_base_parent_number{};
        spdr_source m_spdr_source{};
        grouping_code m_grouping_code{};
        risk_group_id m_risk_group_id{};
        alt_order_id m_alt_order_id{};
        src_routing_code m_src_routing_code{};
        user_name m_user_name{};
        server m_server{};
        ticker m_ticker{};
        sector m_sector{};
        client_tags m_client_tags{};
        ind_num m_ind_num{};
        sub_num m_sub_num{};
        grp_num m_grp_num{};
        nbr_num m_nbr_num{};
        exp_code m_exp_code{};
        skew_code m_skew_code{};
        width_code m_width_code{};
        price_format m_price_format{};
        u_price_format m_u_price_format{};
        years m_years{};
        underlier_type m_underlier_type{};
        min_tick_size m_min_tick_size{};
        point_value m_point_value{};
        point_currency m_point_currency{};
        underliers_per_cn m_underliers_per_cn{};
        parent_shape m_parent_shape{};
        parent_limit_type m_parent_limit_type{};
        parent_limit_class m_parent_limit_class{};
        parent_order_handling m_parent_order_handling{};
        parent_balance_handling m_parent_balance_handling{};
        parent_order_size m_parent_order_size{};
        parent_dttm m_parent_dttm{};
        parent_umark m_parent_umark{};
        parent_bid m_parent_bid{};
        parent_ask m_parent_ask{};
        parent_fair_prc m_parent_fair_prc{};
        parent_fair_width m_parent_fair_width{};
        parent_limit_prc m_parent_limit_prc{};
        parent_limit_ref_uprc m_parent_limit_ref_uprc{};
        parent_ssale_flag m_parent_ssale_flag{};
        parent_position_type m_parent_position_type{};
        parent_strategy m_parent_strategy{};
        parent_auto_hedge m_parent_auto_hedge{};
        child_dttm m_child_dttm{};
        child_cl_ord_id m_child_cl_ord_id{};
        child_routing_code m_child_routing_code{};
        child_size m_child_size{};
        child_price m_child_price{};
        child_exch m_child_exch{};
        child_ex_dest m_child_ex_dest{};
        child_uprc m_child_uprc{};
        child_bid m_child_bid{};
        child_ask m_child_ask{};
        child_fair_prc m_child_fair_prc{};
        child_fair_width m_child_fair_width{};
        child_vol m_child_vol{};
        child_prob m_child_prob{};
        child_limit_prc m_child_limit_prc{};
        child_limit_ref_uprc m_child_limit_ref_uprc{};
        child_algo_handler m_child_algo_handler{};
        child_order_handling m_child_order_handling{};
        child_create_reason m_child_create_reason{};
        child_cancel_reason m_child_cancel_reason{};
        child_mkt_stance m_child_mkt_stance{};
        child_cxl_attempted m_child_cxl_attempted{};
        child_ssale_flag m_child_ssale_flag{};
        child_position_type m_child_position_type{};
        child_firm_type m_child_firm_type{};
        child_capacity m_child_capacity{};
        fill_exch m_fill_exch{};
        fill_price m_fill_price{};
        fill_dttm m_fill_dttm{};
        fill_size m_fill_size{};
        fill_point_value m_fill_point_value{};
        fill_vol m_fill_vol{};
        fill_prob m_fill_prob{};
        fill_limit_prc m_fill_limit_prc{};
        fill_limit_ref_uprc m_fill_limit_ref_uprc{};
        fill_uprc m_fill_uprc{};
        fill_beta m_fill_beta{};
        fill_tv m_fill_tv{};
        fill_tp m_fill_tp{};
        fill_bid m_fill_bid{};
        fill_ask m_fill_ask{};
        fill_fair_prc m_fill_fair_prc{};
        fill_fair_width m_fill_fair_width{};
        fill_brkr_rate m_fill_brkr_rate{};
        fill_routing_rate m_fill_routing_rate{};
        fill_orig_exec_id m_fill_orig_exec_id{};
        fill_last_exec_id m_fill_last_exec_id{};
        fill_exec_status m_fill_exec_status{};
        fill_remote_text m_fill_remote_text{};
        fill_transact_dttm m_fill_transact_dttm{};
        fill_liquidity_tag m_fill_liquidity_tag{};
        fill_exch_fee m_fill_exch_fee{};
        fill_de m_fill_de{};
        fill_ga m_fill_ga{};
        fill_ve m_fill_ve{};
        exec_role m_exec_role{};
        exec_brkr_code m_exec_brkr_code{};
        exec_brkr_accnt m_exec_brkr_accnt{};
        exec_brkr_cl_firm m_exec_brkr_cl_firm{};
        exec_brkr_user_name m_exec_brkr_user_name{};
        clearing_flip_type m_clearing_flip_type{};
        clearing_flip_firm m_clearing_flip_firm{};
        clearing_flip_accnt m_clearing_flip_accnt{};
        clearing_agent m_clearing_agent{};
        clearing_tax_id m_clearing_tax_id{};
        billing_sec_type m_billing_sec_type{};
        billing_category m_billing_category{};
        pri_agg_group m_pri_agg_group{};
        sec_agg_group m_sec_agg_group{};
        trd_delta m_trd_delta{};
        trd_ddelta m_trd_ddelta{};
        trd_gamma m_trd_gamma{};
        trd_dgamma m_trd_dgamma{};
        trd_vega m_trd_vega{};
        trd_wt_vega m_trd_wt_vega{};
        trd_theta m_trd_theta{};
        trd_beta m_trd_beta{};
        trd_dbeta m_trd_dbeta{};
        trd_notional_value m_trd_notional_value{};
        trd_market_value m_trd_market_value{};
        margin_udn_vdn m_margin_udn_vdn{};
        margin_udn_vup m_margin_udn_vup{};
        margin_uup_vdn m_margin_uup_vdn{};
        margin_uup_vup m_margin_uup_vup{};
        trd_fair_edge m_trd_fair_edge{};
        trd_fair_edge_unit m_trd_fair_edge_unit{};
        trd_theo_edge m_trd_theo_edge{};
        trd_theo_edge_unit m_trd_theo_edge_unit{};
        cl_arrive_pn_l m_cl_arrive_pn_l{};
        arrive_pn_l m_arrive_pn_l{};
        arrive_dn_pn_l m_arrive_dn_pn_l{};
        u_drift_arrive_pn_l m_u_drift_arrive_pn_l{};
        child_limit_slip m_child_limit_slip{};
        half_width_pn_l m_half_width_pn_l{};
        day_dn_pn_l m_day_dn_pn_l{};
        day_m1_pn_l m_day_m1_pn_l{};
        day_m10_pn_l m_day_m10_pn_l{};
        u_drift_day_pn_l m_u_drift_day_pn_l{};
        u_drift_m1_pn_l m_u_drift_m1_pn_l{};
        u_drift_m10_pn_l m_u_drift_m10_pn_l{};
        day_pn_l m_day_pn_l{};
        m1_mark m_m1_mark{};
        m1_uprc m_m1_uprc{};
        m10_mark m_m10_mark{};
        m10_uprc m_m10_uprc{};
        live_mark m_live_mark{};
        live_uprc m_live_uprc{};
        trd_mark_error m_trd_mark_error{};
        day_mark_error m_day_mark_error{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        trade_date get_trade_date() const {
            return m_trade_date;
        }		
        accnt get_accnt() const {
            return m_accnt;
        }		
        client_firm get_client_firm() const {
            return m_client_firm;
        }		
        sec_key get_sec_key() const {
            return m_sec_key;
        }		
        sec_type get_sec_type() const {
            return m_sec_type;
        }		
        side get_side() const {
            return m_side;
        }		
        version get_version() const {
            return m_version;
        }		
        parent_number get_parent_number() const {
            return m_parent_number;
        }		
        base_parent_number get_base_parent_number() const {
            return m_base_parent_number;
        }		
        spdr_source get_spdr_source() const {
            return m_spdr_source;
        }		
        grouping_code get_grouping_code() const {
            return m_grouping_code;
        }		
        risk_group_id get_risk_group_id() const {
            return m_risk_group_id;
        }		
        alt_order_id get_alt_order_id() const {
            return m_alt_order_id;
        }		
        src_routing_code get_src_routing_code() const {
            return m_src_routing_code;
        }		
        user_name get_user_name() const {
            return m_user_name;
        }		
        server get_server() const {
            return m_server;
        }		
        ticker get_ticker() const {
            return m_ticker;
        }		
        sector get_sector() const {
            return m_sector;
        }		
        client_tags get_client_tags() const {
            return m_client_tags;
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
        underlier_type get_underlier_type() const {
            return m_underlier_type;
        }		
        min_tick_size get_min_tick_size() const {
            return m_min_tick_size;
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
        parent_shape get_parent_shape() const {
            return m_parent_shape;
        }		
        parent_limit_type get_parent_limit_type() const {
            return m_parent_limit_type;
        }		
        parent_limit_class get_parent_limit_class() const {
            return m_parent_limit_class;
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
        parent_dttm get_parent_dttm() const {
            return m_parent_dttm;
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
        parent_fair_prc get_parent_fair_prc() const {
            return m_parent_fair_prc;
        }		
        parent_fair_width get_parent_fair_width() const {
            return m_parent_fair_width;
        }		
        parent_limit_prc get_parent_limit_prc() const {
            return m_parent_limit_prc;
        }		
        parent_limit_ref_uprc get_parent_limit_ref_uprc() const {
            return m_parent_limit_ref_uprc;
        }		
        parent_ssale_flag get_parent_ssale_flag() const {
            return m_parent_ssale_flag;
        }		
        parent_position_type get_parent_position_type() const {
            return m_parent_position_type;
        }		
        parent_strategy get_parent_strategy() const {
            return m_parent_strategy;
        }		
        parent_auto_hedge get_parent_auto_hedge() const {
            return m_parent_auto_hedge;
        }		
        child_dttm get_child_dttm() const {
            return m_child_dttm;
        }		
        child_cl_ord_id get_child_cl_ord_id() const {
            return m_child_cl_ord_id;
        }		
        child_routing_code get_child_routing_code() const {
            return m_child_routing_code;
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
        child_uprc get_child_uprc() const {
            return m_child_uprc;
        }		
        child_bid get_child_bid() const {
            return m_child_bid;
        }		
        child_ask get_child_ask() const {
            return m_child_ask;
        }		
        child_fair_prc get_child_fair_prc() const {
            return m_child_fair_prc;
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
        child_limit_prc get_child_limit_prc() const {
            return m_child_limit_prc;
        }		
        child_limit_ref_uprc get_child_limit_ref_uprc() const {
            return m_child_limit_ref_uprc;
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
        child_ssale_flag get_child_ssale_flag() const {
            return m_child_ssale_flag;
        }		
        child_position_type get_child_position_type() const {
            return m_child_position_type;
        }		
        child_firm_type get_child_firm_type() const {
            return m_child_firm_type;
        }		
        child_capacity get_child_capacity() const {
            return m_child_capacity;
        }		
        fill_exch get_fill_exch() const {
            return m_fill_exch;
        }		
        fill_price get_fill_price() const {
            return m_fill_price;
        }		
        fill_dttm get_fill_dttm() const {
            return m_fill_dttm;
        }		
        fill_size get_fill_size() const {
            return m_fill_size;
        }		
        fill_point_value get_fill_point_value() const {
            return m_fill_point_value;
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
        fill_bid get_fill_bid() const {
            return m_fill_bid;
        }		
        fill_ask get_fill_ask() const {
            return m_fill_ask;
        }		
        fill_fair_prc get_fill_fair_prc() const {
            return m_fill_fair_prc;
        }		
        fill_fair_width get_fill_fair_width() const {
            return m_fill_fair_width;
        }		
        fill_brkr_rate get_fill_brkr_rate() const {
            return m_fill_brkr_rate;
        }		
        fill_routing_rate get_fill_routing_rate() const {
            return m_fill_routing_rate;
        }		
        fill_orig_exec_id get_fill_orig_exec_id() const {
            return m_fill_orig_exec_id;
        }		
        fill_last_exec_id get_fill_last_exec_id() const {
            return m_fill_last_exec_id;
        }		
        fill_exec_status get_fill_exec_status() const {
            return m_fill_exec_status;
        }		
        fill_remote_text get_fill_remote_text() const {
            return m_fill_remote_text;
        }		
        fill_transact_dttm get_fill_transact_dttm() const {
            return m_fill_transact_dttm;
        }		
        fill_liquidity_tag get_fill_liquidity_tag() const {
            return m_fill_liquidity_tag;
        }		
        fill_exch_fee get_fill_exch_fee() const {
            return m_fill_exch_fee;
        }		
        fill_de get_fill_de() const {
            return m_fill_de;
        }		
        fill_ga get_fill_ga() const {
            return m_fill_ga;
        }		
        fill_ve get_fill_ve() const {
            return m_fill_ve;
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
        clearing_agent get_clearing_agent() const {
            return m_clearing_agent;
        }		
        clearing_tax_id get_clearing_tax_id() const {
            return m_clearing_tax_id;
        }		
        billing_sec_type get_billing_sec_type() const {
            return m_billing_sec_type;
        }		
        billing_category get_billing_category() const {
            return m_billing_category;
        }		
        pri_agg_group get_pri_agg_group() const {
            return m_pri_agg_group;
        }		
        sec_agg_group get_sec_agg_group() const {
            return m_sec_agg_group;
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
        trd_dgamma get_trd_dgamma() const {
            return m_trd_dgamma;
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
        trd_beta get_trd_beta() const {
            return m_trd_beta;
        }		
        trd_dbeta get_trd_dbeta() const {
            return m_trd_dbeta;
        }		
        trd_notional_value get_trd_notional_value() const {
            return m_trd_notional_value;
        }		
        trd_market_value get_trd_market_value() const {
            return m_trd_market_value;
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
        trd_fair_edge get_trd_fair_edge() const {
            return m_trd_fair_edge;
        }		
        trd_fair_edge_unit get_trd_fair_edge_unit() const {
            return m_trd_fair_edge_unit;
        }		
        trd_theo_edge get_trd_theo_edge() const {
            return m_trd_theo_edge;
        }		
        trd_theo_edge_unit get_trd_theo_edge_unit() const {
            return m_trd_theo_edge_unit;
        }		
        cl_arrive_pn_l get_cl_arrive_pn_l() const {
            return m_cl_arrive_pn_l;
        }		
        arrive_pn_l get_arrive_pn_l() const {
            return m_arrive_pn_l;
        }		
        arrive_dn_pn_l get_arrive_dn_pn_l() const {
            return m_arrive_dn_pn_l;
        }		
        u_drift_arrive_pn_l get_u_drift_arrive_pn_l() const {
            return m_u_drift_arrive_pn_l;
        }		
        child_limit_slip get_child_limit_slip() const {
            return m_child_limit_slip;
        }		
        half_width_pn_l get_half_width_pn_l() const {
            return m_half_width_pn_l;
        }		
        day_dn_pn_l get_day_dn_pn_l() const {
            return m_day_dn_pn_l;
        }		
        day_m1_pn_l get_day_m1_pn_l() const {
            return m_day_m1_pn_l;
        }		
        day_m10_pn_l get_day_m10_pn_l() const {
            return m_day_m10_pn_l;
        }		
        u_drift_day_pn_l get_u_drift_day_pn_l() const {
            return m_u_drift_day_pn_l;
        }		
        u_drift_m1_pn_l get_u_drift_m1_pn_l() const {
            return m_u_drift_m1_pn_l;
        }		
        u_drift_m10_pn_l get_u_drift_m10_pn_l() const {
            return m_u_drift_m10_pn_l;
        }		
        day_pn_l get_day_pn_l() const {
            return m_day_pn_l;
        }		
        m1_mark get_m1_mark() const {
            return m_m1_mark;
        }		
        m1_uprc get_m1_uprc() const {
            return m_m1_uprc;
        }		
        m10_mark get_m10_mark() const {
            return m_m10_mark;
        }		
        m10_uprc get_m10_uprc() const {
            return m_m10_uprc;
        }		
        live_mark get_live_mark() const {
            return m_live_mark;
        }		
        live_uprc get_live_uprc() const {
            return m_live_uprc;
        }		
        trd_mark_error get_trd_mark_error() const {
            return m_trd_mark_error;
        }		
        day_mark_error get_day_mark_error() const {
            return m_day_mark_error;
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
        void set_trade_date(const trade_date& value)  {
            m_trade_date = value;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_sec_key(const sec_key& value)  {
            m_sec_key = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        void set_side(const side& value)  {
            m_side = value;
        }
        void set_version(const version& value)  {
            m_version = value;
        }
        void set_parent_number(const parent_number& value)  {
            m_parent_number = value;
        }
        void set_base_parent_number(const base_parent_number& value)  {
            m_base_parent_number = value;
        }
        void set_spdr_source(const spdr_source& value)  {
            m_spdr_source = value;
        }
        void set_grouping_code(const grouping_code& value)  {
            m_grouping_code = value;
        }
        void set_risk_group_id(const risk_group_id& value)  {
            m_risk_group_id = value;
        }
        void set_alt_order_id(const alt_order_id& value)  {
            m_alt_order_id = value;
        }
        void set_src_routing_code(const src_routing_code& value)  {
            m_src_routing_code = value;
        }
        void set_user_name(const user_name& value)  {
            m_user_name = value;
        }
        void set_server(const server& value)  {
            m_server = value;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_sector(const sector& value)  {
            m_sector = value;
        }
        void set_client_tags(const client_tags& value)  {
            m_client_tags = value;
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
        void set_underlier_type(const underlier_type& value)  {
            m_underlier_type = value;
        }
        void set_min_tick_size(const min_tick_size& value)  {
            m_min_tick_size = value;
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
        void set_parent_shape(const parent_shape& value)  {
            m_parent_shape = value;
        }
        void set_parent_limit_type(const parent_limit_type& value)  {
            m_parent_limit_type = value;
        }
        void set_parent_limit_class(const parent_limit_class& value)  {
            m_parent_limit_class = value;
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
        void set_parent_dttm(const parent_dttm& value)  {
            m_parent_dttm = value;
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
        void set_parent_fair_prc(const parent_fair_prc& value)  {
            m_parent_fair_prc = value;
        }
        void set_parent_fair_width(const parent_fair_width& value)  {
            m_parent_fair_width = value;
        }
        void set_parent_limit_prc(const parent_limit_prc& value)  {
            m_parent_limit_prc = value;
        }
        void set_parent_limit_ref_uprc(const parent_limit_ref_uprc& value)  {
            m_parent_limit_ref_uprc = value;
        }
        void set_parent_ssale_flag(const parent_ssale_flag& value)  {
            m_parent_ssale_flag = value;
        }
        void set_parent_position_type(const parent_position_type& value)  {
            m_parent_position_type = value;
        }
        void set_parent_strategy(const parent_strategy& value)  {
            m_parent_strategy = value;
        }
        void set_parent_auto_hedge(const parent_auto_hedge& value)  {
            m_parent_auto_hedge = value;
        }
        void set_child_dttm(const child_dttm& value)  {
            m_child_dttm = value;
        }
        void set_child_cl_ord_id(const child_cl_ord_id& value)  {
            m_child_cl_ord_id = value;
        }
        void set_child_routing_code(const child_routing_code& value)  {
            m_child_routing_code = value;
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
        void set_child_uprc(const child_uprc& value)  {
            m_child_uprc = value;
        }
        void set_child_bid(const child_bid& value)  {
            m_child_bid = value;
        }
        void set_child_ask(const child_ask& value)  {
            m_child_ask = value;
        }
        void set_child_fair_prc(const child_fair_prc& value)  {
            m_child_fair_prc = value;
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
        void set_child_limit_prc(const child_limit_prc& value)  {
            m_child_limit_prc = value;
        }
        void set_child_limit_ref_uprc(const child_limit_ref_uprc& value)  {
            m_child_limit_ref_uprc = value;
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
        void set_child_ssale_flag(const child_ssale_flag& value)  {
            m_child_ssale_flag = value;
        }
        void set_child_position_type(const child_position_type& value)  {
            m_child_position_type = value;
        }
        void set_child_firm_type(const child_firm_type& value)  {
            m_child_firm_type = value;
        }
        void set_child_capacity(const child_capacity& value)  {
            m_child_capacity = value;
        }
        void set_fill_exch(const fill_exch& value)  {
            m_fill_exch = value;
        }
        void set_fill_price(const fill_price& value)  {
            m_fill_price = value;
        }
        void set_fill_dttm(const fill_dttm& value)  {
            m_fill_dttm = value;
        }
        void set_fill_size(const fill_size& value)  {
            m_fill_size = value;
        }
        void set_fill_point_value(const fill_point_value& value)  {
            m_fill_point_value = value;
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
        void set_fill_bid(const fill_bid& value)  {
            m_fill_bid = value;
        }
        void set_fill_ask(const fill_ask& value)  {
            m_fill_ask = value;
        }
        void set_fill_fair_prc(const fill_fair_prc& value)  {
            m_fill_fair_prc = value;
        }
        void set_fill_fair_width(const fill_fair_width& value)  {
            m_fill_fair_width = value;
        }
        void set_fill_brkr_rate(const fill_brkr_rate& value)  {
            m_fill_brkr_rate = value;
        }
        void set_fill_routing_rate(const fill_routing_rate& value)  {
            m_fill_routing_rate = value;
        }
        void set_fill_orig_exec_id(const fill_orig_exec_id& value)  {
            m_fill_orig_exec_id = value;
        }
        void set_fill_last_exec_id(const fill_last_exec_id& value)  {
            m_fill_last_exec_id = value;
        }
        void set_fill_exec_status(const fill_exec_status& value)  {
            m_fill_exec_status = value;
        }
        void set_fill_remote_text(const fill_remote_text& value)  {
            m_fill_remote_text = value;
        }
        void set_fill_transact_dttm(const fill_transact_dttm& value)  {
            m_fill_transact_dttm = value;
        }
        void set_fill_liquidity_tag(const fill_liquidity_tag& value)  {
            m_fill_liquidity_tag = value;
        }
        void set_fill_exch_fee(const fill_exch_fee& value)  {
            m_fill_exch_fee = value;
        }
        void set_fill_de(const fill_de& value)  {
            m_fill_de = value;
        }
        void set_fill_ga(const fill_ga& value)  {
            m_fill_ga = value;
        }
        void set_fill_ve(const fill_ve& value)  {
            m_fill_ve = value;
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
        void set_clearing_agent(const clearing_agent& value)  {
            m_clearing_agent = value;
        }
        void set_clearing_tax_id(const clearing_tax_id& value)  {
            m_clearing_tax_id = value;
        }
        void set_billing_sec_type(const billing_sec_type& value)  {
            m_billing_sec_type = value;
        }
        void set_billing_category(const billing_category& value)  {
            m_billing_category = value;
        }
        void set_pri_agg_group(const pri_agg_group& value)  {
            m_pri_agg_group = value;
        }
        void set_sec_agg_group(const sec_agg_group& value)  {
            m_sec_agg_group = value;
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
        void set_trd_dgamma(const trd_dgamma& value)  {
            m_trd_dgamma = value;
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
        void set_trd_beta(const trd_beta& value)  {
            m_trd_beta = value;
        }
        void set_trd_dbeta(const trd_dbeta& value)  {
            m_trd_dbeta = value;
        }
        void set_trd_notional_value(const trd_notional_value& value)  {
            m_trd_notional_value = value;
        }
        void set_trd_market_value(const trd_market_value& value)  {
            m_trd_market_value = value;
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
        void set_trd_fair_edge(const trd_fair_edge& value)  {
            m_trd_fair_edge = value;
        }
        void set_trd_fair_edge_unit(const trd_fair_edge_unit& value)  {
            m_trd_fair_edge_unit = value;
        }
        void set_trd_theo_edge(const trd_theo_edge& value)  {
            m_trd_theo_edge = value;
        }
        void set_trd_theo_edge_unit(const trd_theo_edge_unit& value)  {
            m_trd_theo_edge_unit = value;
        }
        void set_cl_arrive_pn_l(const cl_arrive_pn_l& value)  {
            m_cl_arrive_pn_l = value;
        }
        void set_arrive_pn_l(const arrive_pn_l& value)  {
            m_arrive_pn_l = value;
        }
        void set_arrive_dn_pn_l(const arrive_dn_pn_l& value)  {
            m_arrive_dn_pn_l = value;
        }
        void set_u_drift_arrive_pn_l(const u_drift_arrive_pn_l& value)  {
            m_u_drift_arrive_pn_l = value;
        }
        void set_child_limit_slip(const child_limit_slip& value)  {
            m_child_limit_slip = value;
        }
        void set_half_width_pn_l(const half_width_pn_l& value)  {
            m_half_width_pn_l = value;
        }
        void set_day_dn_pn_l(const day_dn_pn_l& value)  {
            m_day_dn_pn_l = value;
        }
        void set_day_m1_pn_l(const day_m1_pn_l& value)  {
            m_day_m1_pn_l = value;
        }
        void set_day_m10_pn_l(const day_m10_pn_l& value)  {
            m_day_m10_pn_l = value;
        }
        void set_u_drift_day_pn_l(const u_drift_day_pn_l& value)  {
            m_u_drift_day_pn_l = value;
        }
        void set_u_drift_m1_pn_l(const u_drift_m1_pn_l& value)  {
            m_u_drift_m1_pn_l = value;
        }
        void set_u_drift_m10_pn_l(const u_drift_m10_pn_l& value)  {
            m_u_drift_m10_pn_l = value;
        }
        void set_day_pn_l(const day_pn_l& value)  {
            m_day_pn_l = value;
        }
        void set_m1_mark(const m1_mark& value)  {
            m_m1_mark = value;
        }
        void set_m1_uprc(const m1_uprc& value)  {
            m_m1_uprc = value;
        }
        void set_m10_mark(const m10_mark& value)  {
            m_m10_mark = value;
        }
        void set_m10_uprc(const m10_uprc& value)  {
            m_m10_uprc = value;
        }
        void set_live_mark(const live_mark& value)  {
            m_live_mark = value;
        }
        void set_live_uprc(const live_uprc& value)  {
            m_live_uprc = value;
        }
        void set_trd_mark_error(const trd_mark_error& value)  {
            m_trd_mark_error = value;
        }
        void set_day_mark_error(const day_mark_error& value)  {
            m_day_mark_error = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ToolCompositeExecution::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const trade_date & value) {
            set_trade_date(value);
        }
        void set(const accnt & value) {
            set_accnt(value);
        }
        void set(const client_firm & value) {
            set_client_firm(value);
        }
        void set(const sec_key & value) {
            set_sec_key(value);
        }
        void set(const sec_type & value) {
            set_sec_type(value);
        }
        void set(const side & value) {
            set_side(value);
        }
        void set(const version & value) {
            set_version(value);
        }
        void set(const parent_number & value) {
            set_parent_number(value);
        }
        void set(const base_parent_number & value) {
            set_base_parent_number(value);
        }
        void set(const spdr_source & value) {
            set_spdr_source(value);
        }
        void set(const grouping_code & value) {
            set_grouping_code(value);
        }
        void set(const risk_group_id & value) {
            set_risk_group_id(value);
        }
        void set(const alt_order_id & value) {
            set_alt_order_id(value);
        }
        void set(const src_routing_code & value) {
            set_src_routing_code(value);
        }
        void set(const user_name & value) {
            set_user_name(value);
        }
        void set(const server & value) {
            set_server(value);
        }
        void set(const ticker & value) {
            set_ticker(value);
        }
        void set(const sector & value) {
            set_sector(value);
        }
        void set(const client_tags & value) {
            set_client_tags(value);
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
        void set(const underlier_type & value) {
            set_underlier_type(value);
        }
        void set(const min_tick_size & value) {
            set_min_tick_size(value);
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
        void set(const parent_shape & value) {
            set_parent_shape(value);
        }
        void set(const parent_limit_type & value) {
            set_parent_limit_type(value);
        }
        void set(const parent_limit_class & value) {
            set_parent_limit_class(value);
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
        void set(const parent_dttm & value) {
            set_parent_dttm(value);
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
        void set(const parent_fair_prc & value) {
            set_parent_fair_prc(value);
        }
        void set(const parent_fair_width & value) {
            set_parent_fair_width(value);
        }
        void set(const parent_limit_prc & value) {
            set_parent_limit_prc(value);
        }
        void set(const parent_limit_ref_uprc & value) {
            set_parent_limit_ref_uprc(value);
        }
        void set(const parent_ssale_flag & value) {
            set_parent_ssale_flag(value);
        }
        void set(const parent_position_type & value) {
            set_parent_position_type(value);
        }
        void set(const parent_strategy & value) {
            set_parent_strategy(value);
        }
        void set(const parent_auto_hedge & value) {
            set_parent_auto_hedge(value);
        }
        void set(const child_dttm & value) {
            set_child_dttm(value);
        }
        void set(const child_cl_ord_id & value) {
            set_child_cl_ord_id(value);
        }
        void set(const child_routing_code & value) {
            set_child_routing_code(value);
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
        void set(const child_uprc & value) {
            set_child_uprc(value);
        }
        void set(const child_bid & value) {
            set_child_bid(value);
        }
        void set(const child_ask & value) {
            set_child_ask(value);
        }
        void set(const child_fair_prc & value) {
            set_child_fair_prc(value);
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
        void set(const child_limit_prc & value) {
            set_child_limit_prc(value);
        }
        void set(const child_limit_ref_uprc & value) {
            set_child_limit_ref_uprc(value);
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
        void set(const child_ssale_flag & value) {
            set_child_ssale_flag(value);
        }
        void set(const child_position_type & value) {
            set_child_position_type(value);
        }
        void set(const child_firm_type & value) {
            set_child_firm_type(value);
        }
        void set(const child_capacity & value) {
            set_child_capacity(value);
        }
        void set(const fill_exch & value) {
            set_fill_exch(value);
        }
        void set(const fill_price & value) {
            set_fill_price(value);
        }
        void set(const fill_dttm & value) {
            set_fill_dttm(value);
        }
        void set(const fill_size & value) {
            set_fill_size(value);
        }
        void set(const fill_point_value & value) {
            set_fill_point_value(value);
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
        void set(const fill_bid & value) {
            set_fill_bid(value);
        }
        void set(const fill_ask & value) {
            set_fill_ask(value);
        }
        void set(const fill_fair_prc & value) {
            set_fill_fair_prc(value);
        }
        void set(const fill_fair_width & value) {
            set_fill_fair_width(value);
        }
        void set(const fill_brkr_rate & value) {
            set_fill_brkr_rate(value);
        }
        void set(const fill_routing_rate & value) {
            set_fill_routing_rate(value);
        }
        void set(const fill_orig_exec_id & value) {
            set_fill_orig_exec_id(value);
        }
        void set(const fill_last_exec_id & value) {
            set_fill_last_exec_id(value);
        }
        void set(const fill_exec_status & value) {
            set_fill_exec_status(value);
        }
        void set(const fill_remote_text & value) {
            set_fill_remote_text(value);
        }
        void set(const fill_transact_dttm & value) {
            set_fill_transact_dttm(value);
        }
        void set(const fill_liquidity_tag & value) {
            set_fill_liquidity_tag(value);
        }
        void set(const fill_exch_fee & value) {
            set_fill_exch_fee(value);
        }
        void set(const fill_de & value) {
            set_fill_de(value);
        }
        void set(const fill_ga & value) {
            set_fill_ga(value);
        }
        void set(const fill_ve & value) {
            set_fill_ve(value);
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
        void set(const clearing_agent & value) {
            set_clearing_agent(value);
        }
        void set(const clearing_tax_id & value) {
            set_clearing_tax_id(value);
        }
        void set(const billing_sec_type & value) {
            set_billing_sec_type(value);
        }
        void set(const billing_category & value) {
            set_billing_category(value);
        }
        void set(const pri_agg_group & value) {
            set_pri_agg_group(value);
        }
        void set(const sec_agg_group & value) {
            set_sec_agg_group(value);
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
        void set(const trd_dgamma & value) {
            set_trd_dgamma(value);
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
        void set(const trd_beta & value) {
            set_trd_beta(value);
        }
        void set(const trd_dbeta & value) {
            set_trd_dbeta(value);
        }
        void set(const trd_notional_value & value) {
            set_trd_notional_value(value);
        }
        void set(const trd_market_value & value) {
            set_trd_market_value(value);
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
        void set(const trd_fair_edge & value) {
            set_trd_fair_edge(value);
        }
        void set(const trd_fair_edge_unit & value) {
            set_trd_fair_edge_unit(value);
        }
        void set(const trd_theo_edge & value) {
            set_trd_theo_edge(value);
        }
        void set(const trd_theo_edge_unit & value) {
            set_trd_theo_edge_unit(value);
        }
        void set(const cl_arrive_pn_l & value) {
            set_cl_arrive_pn_l(value);
        }
        void set(const arrive_pn_l & value) {
            set_arrive_pn_l(value);
        }
        void set(const arrive_dn_pn_l & value) {
            set_arrive_dn_pn_l(value);
        }
        void set(const u_drift_arrive_pn_l & value) {
            set_u_drift_arrive_pn_l(value);
        }
        void set(const child_limit_slip & value) {
            set_child_limit_slip(value);
        }
        void set(const half_width_pn_l & value) {
            set_half_width_pn_l(value);
        }
        void set(const day_dn_pn_l & value) {
            set_day_dn_pn_l(value);
        }
        void set(const day_m1_pn_l & value) {
            set_day_m1_pn_l(value);
        }
        void set(const day_m10_pn_l & value) {
            set_day_m10_pn_l(value);
        }
        void set(const u_drift_day_pn_l & value) {
            set_u_drift_day_pn_l(value);
        }
        void set(const u_drift_m1_pn_l & value) {
            set_u_drift_m1_pn_l(value);
        }
        void set(const u_drift_m10_pn_l & value) {
            set_u_drift_m10_pn_l(value);
        }
        void set(const day_pn_l & value) {
            set_day_pn_l(value);
        }
        void set(const m1_mark & value) {
            set_m1_mark(value);
        }
        void set(const m1_uprc & value) {
            set_m1_uprc(value);
        }
        void set(const m10_mark & value) {
            set_m10_mark(value);
        }
        void set(const m10_uprc & value) {
            set_m10_uprc(value);
        }
        void set(const live_mark & value) {
            set_live_mark(value);
        }
        void set(const live_uprc & value) {
            set_live_uprc(value);
        }
        void set(const trd_mark_error & value) {
            set_trd_mark_error(value);
        }
        void set(const day_mark_error & value) {
            set_day_mark_error(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const ToolCompositeExecution & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_trade_date);
            set(value.m_accnt);
            set(value.m_client_firm);
            set(value.m_sec_key);
            set(value.m_sec_type);
            set(value.m_side);
            set(value.m_version);
            set(value.m_parent_number);
            set(value.m_base_parent_number);
            set(value.m_spdr_source);
            set(value.m_grouping_code);
            set(value.m_risk_group_id);
            set(value.m_alt_order_id);
            set(value.m_src_routing_code);
            set(value.m_user_name);
            set(value.m_server);
            set(value.m_ticker);
            set(value.m_sector);
            set(value.m_client_tags);
            set(value.m_ind_num);
            set(value.m_sub_num);
            set(value.m_grp_num);
            set(value.m_nbr_num);
            set(value.m_exp_code);
            set(value.m_skew_code);
            set(value.m_width_code);
            set(value.m_price_format);
            set(value.m_u_price_format);
            set(value.m_years);
            set(value.m_underlier_type);
            set(value.m_min_tick_size);
            set(value.m_point_value);
            set(value.m_point_currency);
            set(value.m_underliers_per_cn);
            set(value.m_parent_shape);
            set(value.m_parent_limit_type);
            set(value.m_parent_limit_class);
            set(value.m_parent_order_handling);
            set(value.m_parent_balance_handling);
            set(value.m_parent_order_size);
            set(value.m_parent_dttm);
            set(value.m_parent_umark);
            set(value.m_parent_bid);
            set(value.m_parent_ask);
            set(value.m_parent_fair_prc);
            set(value.m_parent_fair_width);
            set(value.m_parent_limit_prc);
            set(value.m_parent_limit_ref_uprc);
            set(value.m_parent_ssale_flag);
            set(value.m_parent_position_type);
            set(value.m_parent_strategy);
            set(value.m_parent_auto_hedge);
            set(value.m_child_dttm);
            set(value.m_child_cl_ord_id);
            set(value.m_child_routing_code);
            set(value.m_child_size);
            set(value.m_child_price);
            set(value.m_child_exch);
            set(value.m_child_ex_dest);
            set(value.m_child_uprc);
            set(value.m_child_bid);
            set(value.m_child_ask);
            set(value.m_child_fair_prc);
            set(value.m_child_fair_width);
            set(value.m_child_vol);
            set(value.m_child_prob);
            set(value.m_child_limit_prc);
            set(value.m_child_limit_ref_uprc);
            set(value.m_child_algo_handler);
            set(value.m_child_order_handling);
            set(value.m_child_create_reason);
            set(value.m_child_cancel_reason);
            set(value.m_child_mkt_stance);
            set(value.m_child_cxl_attempted);
            set(value.m_child_ssale_flag);
            set(value.m_child_position_type);
            set(value.m_child_firm_type);
            set(value.m_child_capacity);
            set(value.m_fill_exch);
            set(value.m_fill_price);
            set(value.m_fill_dttm);
            set(value.m_fill_size);
            set(value.m_fill_point_value);
            set(value.m_fill_vol);
            set(value.m_fill_prob);
            set(value.m_fill_limit_prc);
            set(value.m_fill_limit_ref_uprc);
            set(value.m_fill_uprc);
            set(value.m_fill_beta);
            set(value.m_fill_tv);
            set(value.m_fill_tp);
            set(value.m_fill_bid);
            set(value.m_fill_ask);
            set(value.m_fill_fair_prc);
            set(value.m_fill_fair_width);
            set(value.m_fill_brkr_rate);
            set(value.m_fill_routing_rate);
            set(value.m_fill_orig_exec_id);
            set(value.m_fill_last_exec_id);
            set(value.m_fill_exec_status);
            set(value.m_fill_remote_text);
            set(value.m_fill_transact_dttm);
            set(value.m_fill_liquidity_tag);
            set(value.m_fill_exch_fee);
            set(value.m_fill_de);
            set(value.m_fill_ga);
            set(value.m_fill_ve);
            set(value.m_exec_role);
            set(value.m_exec_brkr_code);
            set(value.m_exec_brkr_accnt);
            set(value.m_exec_brkr_cl_firm);
            set(value.m_exec_brkr_user_name);
            set(value.m_clearing_flip_type);
            set(value.m_clearing_flip_firm);
            set(value.m_clearing_flip_accnt);
            set(value.m_clearing_agent);
            set(value.m_clearing_tax_id);
            set(value.m_billing_sec_type);
            set(value.m_billing_category);
            set(value.m_pri_agg_group);
            set(value.m_sec_agg_group);
            set(value.m_trd_delta);
            set(value.m_trd_ddelta);
            set(value.m_trd_gamma);
            set(value.m_trd_dgamma);
            set(value.m_trd_vega);
            set(value.m_trd_wt_vega);
            set(value.m_trd_theta);
            set(value.m_trd_beta);
            set(value.m_trd_dbeta);
            set(value.m_trd_notional_value);
            set(value.m_trd_market_value);
            set(value.m_margin_udn_vdn);
            set(value.m_margin_udn_vup);
            set(value.m_margin_uup_vdn);
            set(value.m_margin_uup_vup);
            set(value.m_trd_fair_edge);
            set(value.m_trd_fair_edge_unit);
            set(value.m_trd_theo_edge);
            set(value.m_trd_theo_edge_unit);
            set(value.m_cl_arrive_pn_l);
            set(value.m_arrive_pn_l);
            set(value.m_arrive_dn_pn_l);
            set(value.m_u_drift_arrive_pn_l);
            set(value.m_child_limit_slip);
            set(value.m_half_width_pn_l);
            set(value.m_day_dn_pn_l);
            set(value.m_day_m1_pn_l);
            set(value.m_day_m10_pn_l);
            set(value.m_u_drift_day_pn_l);
            set(value.m_u_drift_m1_pn_l);
            set(value.m_u_drift_m10_pn_l);
            set(value.m_day_pn_l);
            set(value.m_m1_mark);
            set(value.m_m1_uprc);
            set(value.m_m10_mark);
            set(value.m_m10_uprc);
            set(value.m_live_mark);
            set(value.m_live_uprc);
            set(value.m_trd_mark_error);
            set(value.m_day_mark_error);
            set(value.m_timestamp);
        }

        ToolCompositeExecution() {
            m__meta.set_message_type("ToolCompositeExecution");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3480, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3480, length);
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
             *this = ToolCompositeExecution{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeTradeDate() const {
            return (m_trade_date.ByteSizeLong() > 0);
        }
        bool IncludeAccnt() const {
            return !(m_accnt.empty());
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }
        bool IncludeSecKey() const {
            return (m_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeVersion() const {
            return !(m_version == 0);
        }
        bool IncludeParentNumber() const {
            return !(m_parent_number == 0);
        }
        bool IncludeBaseParentNumber() const {
            return !(m_base_parent_number == 0);
        }
        bool IncludeGroupingCode() const {
            return !(m_grouping_code == 0);
        }
        bool IncludeRiskGroupId() const {
            return !(m_risk_group_id == 0);
        }
        bool IncludeAltOrderId() const {
            return !(m_alt_order_id.empty());
        }
        bool IncludeSrcRoutingCode() const {
            return !(m_src_routing_code.empty());
        }
        bool IncludeUserName() const {
            return !(m_user_name.empty());
        }
        bool IncludeServer() const {
            return !(m_server.empty());
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeSector() const {
            return !(m_sector.empty());
        }
        bool IncludeClientTags() const {
            return !(m_client_tags.empty());
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
        bool IncludeYears() const {
            return !(m_years == 0.0);
        }
        bool IncludeMinTickSize() const {
            return !(m_min_tick_size == 0.0);
        }
        bool IncludePointValue() const {
            return !(m_point_value == 0.0);
        }
        bool IncludeUnderliersPerCn() const {
            return !(m_underliers_per_cn == 0);
        }
        bool IncludeParentOrderSize() const {
            return !(m_parent_order_size == 0);
        }
        bool IncludeParentDttm() const {
            return (m_parent_dttm.time_since_epoch().count() != 0);
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
        bool IncludeParentFairPrc() const {
            return !(m_parent_fair_prc == 0.0);
        }
        bool IncludeParentFairWidth() const {
            return !(m_parent_fair_width == 0.0);
        }
        bool IncludeParentLimitPrc() const {
            return !(m_parent_limit_prc == 0.0);
        }
        bool IncludeParentLimitRefUprc() const {
            return !(m_parent_limit_ref_uprc == 0.0);
        }
        bool IncludeParentStrategy() const {
            return !(m_parent_strategy.empty());
        }
        bool IncludeChildDttm() const {
            return (m_child_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeChildClOrdId() const {
            return !(m_child_cl_ord_id.empty());
        }
        bool IncludeChildRoutingCode() const {
            return !(m_child_routing_code.empty());
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
        bool IncludeChildUprc() const {
            return !(m_child_uprc == 0.0);
        }
        bool IncludeChildBid() const {
            return !(m_child_bid == 0.0);
        }
        bool IncludeChildAsk() const {
            return !(m_child_ask == 0.0);
        }
        bool IncludeChildFairPrc() const {
            return !(m_child_fair_prc == 0.0);
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
        bool IncludeChildLimitPrc() const {
            return !(m_child_limit_prc == 0.0);
        }
        bool IncludeChildLimitRefUprc() const {
            return !(m_child_limit_ref_uprc == 0.0);
        }
        bool IncludeChildOrderHandling() const {
            return !(m_child_order_handling.empty());
        }
        bool IncludeFillExch() const {
            return !(m_fill_exch.empty());
        }
        bool IncludeFillPrice() const {
            return !(m_fill_price == 0.0);
        }
        bool IncludeFillDttm() const {
            return (m_fill_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeFillSize() const {
            return !(m_fill_size == 0);
        }
        bool IncludeFillPointValue() const {
            return !(m_fill_point_value == 0);
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
        bool IncludeFillBid() const {
            return !(m_fill_bid == 0.0);
        }
        bool IncludeFillAsk() const {
            return !(m_fill_ask == 0.0);
        }
        bool IncludeFillFairPrc() const {
            return !(m_fill_fair_prc == 0.0);
        }
        bool IncludeFillFairWidth() const {
            return !(m_fill_fair_width == 0.0);
        }
        bool IncludeFillBrkrRate() const {
            return !(m_fill_brkr_rate == 0.0);
        }
        bool IncludeFillRoutingRate() const {
            return !(m_fill_routing_rate == 0.0);
        }
        bool IncludeFillOrigExecId() const {
            return !(m_fill_orig_exec_id.empty());
        }
        bool IncludeFillLastExecId() const {
            return !(m_fill_last_exec_id.empty());
        }
        bool IncludeFillRemoteText() const {
            return !(m_fill_remote_text.empty());
        }
        bool IncludeFillTransactDttm() const {
            return (m_fill_transact_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeFillLiquidityTag() const {
            return !(m_fill_liquidity_tag.empty());
        }
        bool IncludeFillExchFee() const {
            return !(m_fill_exch_fee == 0.0);
        }
        bool IncludeFillDe() const {
            return !(m_fill_de == 0.0);
        }
        bool IncludeFillGa() const {
            return !(m_fill_ga == 0.0);
        }
        bool IncludeFillVe() const {
            return !(m_fill_ve == 0.0);
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
        bool IncludeClearingAgent() const {
            return !(m_clearing_agent.empty());
        }
        bool IncludeClearingTaxId() const {
            return !(m_clearing_tax_id.empty());
        }
        bool IncludePriAggGroup() const {
            return !(m_pri_agg_group.empty());
        }
        bool IncludeSecAggGroup() const {
            return !(m_sec_agg_group.empty());
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
        bool IncludeTrdDgamma() const {
            return !(m_trd_dgamma == 0.0);
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
        bool IncludeTrdBeta() const {
            return !(m_trd_beta == 0.0);
        }
        bool IncludeTrdDbeta() const {
            return !(m_trd_dbeta == 0.0);
        }
        bool IncludeTrdNotionalValue() const {
            return !(m_trd_notional_value == 0.0);
        }
        bool IncludeTrdMarketValue() const {
            return !(m_trd_market_value == 0.0);
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
        bool IncludeTrdFairEdge() const {
            return !(m_trd_fair_edge == 0.0);
        }
        bool IncludeTrdFairEdgeUnit() const {
            return !(m_trd_fair_edge_unit == 0.0);
        }
        bool IncludeTrdTheoEdge() const {
            return !(m_trd_theo_edge == 0.0);
        }
        bool IncludeTrdTheoEdgeUnit() const {
            return !(m_trd_theo_edge_unit == 0.0);
        }
        bool IncludeClArrivePnL() const {
            return !(m_cl_arrive_pn_l == 0.0);
        }
        bool IncludeArrivePnL() const {
            return !(m_arrive_pn_l == 0.0);
        }
        bool IncludeArriveDnPnL() const {
            return !(m_arrive_dn_pn_l == 0.0);
        }
        bool IncludeUDriftArrivePnL() const {
            return !(m_u_drift_arrive_pn_l == 0.0);
        }
        bool IncludeChildLimitSlip() const {
            return !(m_child_limit_slip == 0.0);
        }
        bool IncludeHalfWidthPnL() const {
            return !(m_half_width_pn_l == 0.0);
        }
        bool IncludeDayDnPnL() const {
            return !(m_day_dn_pn_l == 0.0);
        }
        bool IncludeDayM1PnL() const {
            return !(m_day_m1_pn_l == 0.0);
        }
        bool IncludeDayM10PnL() const {
            return !(m_day_m10_pn_l == 0.0);
        }
        bool IncludeUDriftDayPnL() const {
            return !(m_u_drift_day_pn_l == 0.0);
        }
        bool IncludeUDriftM1PnL() const {
            return !(m_u_drift_m1_pn_l == 0.0);
        }
        bool IncludeUDriftM10PnL() const {
            return !(m_u_drift_m10_pn_l == 0.0);
        }
        bool IncludeDayPnL() const {
            return !(m_day_pn_l == 0.0);
        }
        bool IncludeM1Mark() const {
            return !(m_m1_mark == 0.0);
        }
        bool IncludeM1Uprc() const {
            return !(m_m1_uprc == 0.0);
        }
        bool IncludeM10Mark() const {
            return !(m_m10_mark == 0.0);
        }
        bool IncludeM10Uprc() const {
            return !(m_m10_uprc == 0.0);
        }
        bool IncludeLiveMark() const {
            return !(m_live_mark == 0.0);
        }
        bool IncludeLiveUprc() const {
            return !(m_live_uprc == 0.0);
        }
        bool IncludeTrdMarkError() const {
            return !(m_trd_mark_error.empty());
        }
        bool IncludeDayMarkError() const {
            return !(m_day_mark_error.empty());
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
            if ( IncludeTradeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(100, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_accnt);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_client_firm);
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(109, optionKeyLayout_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side)));
            if ( IncludeVersion()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(118,m_version);
            }
            if ( IncludeParentNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(121,m_parent_number);
            }
            if ( IncludeBaseParentNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(124,m_base_parent_number);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            if ( IncludeGroupingCode()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(130,m_grouping_code);
            }
            if ( IncludeRiskGroupId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(133,m_risk_group_id);
            }
            if ( IncludeAltOrderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(136,m_alt_order_id);
            }
            if ( IncludeSrcRoutingCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(139,m_src_routing_code);
            }
            if ( IncludeUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(142,m_user_name);
            }
            if ( IncludeServer()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(145,m_server);
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(148, tickerKeyLayout_ticker);
            }
            if ( IncludeSector()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(151,m_sector);
            }
            if ( IncludeClientTags()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(154,m_client_tags);
            }
            if ( IncludeIndNum()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(157,m_ind_num);
            }
            if ( IncludeSubNum()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(160,m_sub_num);
            }
            if ( IncludeGrpNum()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(163,m_grp_num);
            }
            if ( IncludeNbrNum()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(166,m_nbr_num);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(169,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExpCode>(m_exp_code)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(172,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SkewCode>(m_skew_code)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(175,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::WidthCode>(m_width_code)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(178,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(181,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_u_price_format)));
            if ( IncludeYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(184,m_years);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(187,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>(m_underlier_type)));
            if ( IncludeMinTickSize()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(190,m_min_tick_size);
            }
            if ( IncludePointValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(193,m_point_value);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(196,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            if ( IncludeUnderliersPerCn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(199,m_underliers_per_cn);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(202,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>(m_parent_shape)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(205,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitType>(m_parent_limit_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(208,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>(m_parent_limit_class)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(211,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentOrderHandling>(m_parent_order_handling)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(214,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentBalanceHandling>(m_parent_balance_handling)));
            if ( IncludeParentOrderSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(217,m_parent_order_size);
            }
            if ( IncludeParentDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(220, m_parent_dttm);
            }
            if ( IncludeParentUmark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(223,m_parent_umark);
            }
            if ( IncludeParentBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(226,m_parent_bid);
            }
            if ( IncludeParentAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(229,m_parent_ask);
            }
            if ( IncludeParentFairPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(232,m_parent_fair_prc);
            }
            if ( IncludeParentFairWidth()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(235,m_parent_fair_width);
            }
            if ( IncludeParentLimitPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(238,m_parent_limit_prc);
            }
            if ( IncludeParentLimitRefUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(241,m_parent_limit_ref_uprc);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(244,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_parent_ssale_flag)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(247,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_parent_position_type)));
            if ( IncludeParentStrategy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(250,m_parent_strategy);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(253,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>(m_parent_auto_hedge)));
            if ( IncludeChildDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(256, m_child_dttm);
            }
            if ( IncludeChildClOrdId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(259,m_child_cl_ord_id);
            }
            if ( IncludeChildRoutingCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(262,m_child_routing_code);
            }
            if ( IncludeChildSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(265,m_child_size);
            }
            if ( IncludeChildPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(268,m_child_price);
            }
            if ( IncludeChildExch()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(271,m_child_exch);
            }
            if ( IncludeChildExDest()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(600,m_child_ex_dest);
            }
            if ( IncludeChildUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(277,m_child_uprc);
            }
            if ( IncludeChildBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(280,m_child_bid);
            }
            if ( IncludeChildAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(283,m_child_ask);
            }
            if ( IncludeChildFairPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(286,m_child_fair_prc);
            }
            if ( IncludeChildFairWidth()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(289,m_child_fair_width);
            }
            if ( IncludeChildVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(292,m_child_vol);
            }
            if ( IncludeChildProb()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(295,m_child_prob);
            }
            if ( IncludeChildLimitPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(298,m_child_limit_prc);
            }
            if ( IncludeChildLimitRefUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(301,m_child_limit_ref_uprc);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(304,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildHandler>(m_child_algo_handler)));
            if ( IncludeChildOrderHandling()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(307,m_child_order_handling);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(310,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildCreateReason>(m_child_create_reason)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(313,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildCancelReason>(m_child_cancel_reason)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(316,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktStance>(m_child_mkt_stance)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(319,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_child_cxl_attempted)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(322,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_child_ssale_flag)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(325,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_child_position_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(328,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_child_firm_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(331,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCapacity>(m_child_capacity)));
            if ( IncludeFillExch()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(334,m_fill_exch);
            }
            if ( IncludeFillPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(337,m_fill_price);
            }
            if ( IncludeFillDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(340, m_fill_dttm);
            }
            if ( IncludeFillSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(343,m_fill_size);
            }
            if ( IncludeFillPointValue()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(346,m_fill_point_value);
            }
            if ( IncludeFillVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(349,m_fill_vol);
            }
            if ( IncludeFillProb()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(352,m_fill_prob);
            }
            if ( IncludeFillLimitPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(355,m_fill_limit_prc);
            }
            if ( IncludeFillLimitRefUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(358,m_fill_limit_ref_uprc);
            }
            if ( IncludeFillUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(361,m_fill_uprc);
            }
            if ( IncludeFillBeta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(364,m_fill_beta);
            }
            if ( IncludeFillTv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(367,m_fill_tv);
            }
            if ( IncludeFillTp()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(370,m_fill_tp);
            }
            if ( IncludeFillBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(373,m_fill_bid);
            }
            if ( IncludeFillAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(376,m_fill_ask);
            }
            if ( IncludeFillFairPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(379,m_fill_fair_prc);
            }
            if ( IncludeFillFairWidth()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(382,m_fill_fair_width);
            }
            if ( IncludeFillBrkrRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(385,m_fill_brkr_rate);
            }
            if ( IncludeFillRoutingRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(388,m_fill_routing_rate);
            }
            if ( IncludeFillOrigExecId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(391,m_fill_orig_exec_id);
            }
            if ( IncludeFillLastExecId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(394,m_fill_last_exec_id);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(397,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecStatus>(m_fill_exec_status)));
            if ( IncludeFillRemoteText()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(400,m_fill_remote_text);
            }
            if ( IncludeFillTransactDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(403, m_fill_transact_dttm);
            }
            if ( IncludeFillLiquidityTag()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(406,m_fill_liquidity_tag);
            }
            if ( IncludeFillExchFee()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(409,m_fill_exch_fee);
            }
            if ( IncludeFillDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(412,m_fill_de);
            }
            if ( IncludeFillGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(415,m_fill_ga);
            }
            if ( IncludeFillVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(418,m_fill_ve);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(421,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecRole>(m_exec_role)));
            if ( IncludeExecBrkrCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(599,m_exec_brkr_code);
            }
            if ( IncludeExecBrkrAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(427,m_exec_brkr_accnt);
            }
            if ( IncludeExecBrkrClFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(430,m_exec_brkr_cl_firm);
            }
            if ( IncludeExecBrkrUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(433,m_exec_brkr_user_name);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(436,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlipType>(m_clearing_flip_type)));
            if ( IncludeClearingFlipFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(439,m_clearing_flip_firm);
            }
            if ( IncludeClearingFlipAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(442,m_clearing_flip_accnt);
            }
            if ( IncludeClearingAgent()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(593,m_clearing_agent);
            }
            if ( IncludeClearingTaxId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(594,m_clearing_tax_id);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(445,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BillingSecType>(m_billing_sec_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(448,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BillingCategory>(m_billing_category)));
            if ( IncludePriAggGroup()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(451,m_pri_agg_group);
            }
            if ( IncludeSecAggGroup()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(454,m_sec_agg_group);
            }
            if ( IncludeTrdDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(457,m_trd_delta);
            }
            if ( IncludeTrdDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(460,m_trd_ddelta);
            }
            if ( IncludeTrdGamma()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(463,m_trd_gamma);
            }
            if ( IncludeTrdDgamma()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(466,m_trd_dgamma);
            }
            if ( IncludeTrdVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(469,m_trd_vega);
            }
            if ( IncludeTrdWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(472,m_trd_wt_vega);
            }
            if ( IncludeTrdTheta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(478,m_trd_theta);
            }
            if ( IncludeTrdBeta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(481,m_trd_beta);
            }
            if ( IncludeTrdDbeta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(484,m_trd_dbeta);
            }
            if ( IncludeTrdNotionalValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(487,m_trd_notional_value);
            }
            if ( IncludeTrdMarketValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(490,m_trd_market_value);
            }
            if ( IncludeMarginUdnVdn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(595,m_margin_udn_vdn);
            }
            if ( IncludeMarginUdnVup()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(596,m_margin_udn_vup);
            }
            if ( IncludeMarginUupVdn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(597,m_margin_uup_vdn);
            }
            if ( IncludeMarginUupVup()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(598,m_margin_uup_vup);
            }
            if ( IncludeTrdFairEdge()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(517,m_trd_fair_edge);
            }
            if ( IncludeTrdFairEdgeUnit()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(520,m_trd_fair_edge_unit);
            }
            if ( IncludeTrdTheoEdge()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(523,m_trd_theo_edge);
            }
            if ( IncludeTrdTheoEdgeUnit()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(526,m_trd_theo_edge_unit);
            }
            if ( IncludeClArrivePnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(529,m_cl_arrive_pn_l);
            }
            if ( IncludeArrivePnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(532,m_arrive_pn_l);
            }
            if ( IncludeArriveDnPnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(535,m_arrive_dn_pn_l);
            }
            if ( IncludeUDriftArrivePnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(538,m_u_drift_arrive_pn_l);
            }
            if ( IncludeChildLimitSlip()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(541,m_child_limit_slip);
            }
            if ( IncludeHalfWidthPnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(544,m_half_width_pn_l);
            }
            if ( IncludeDayDnPnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(547,m_day_dn_pn_l);
            }
            if ( IncludeDayM1PnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(550,m_day_m1_pn_l);
            }
            if ( IncludeDayM10PnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(553,m_day_m10_pn_l);
            }
            if ( IncludeUDriftDayPnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(556,m_u_drift_day_pn_l);
            }
            if ( IncludeUDriftM1PnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(559,m_u_drift_m1_pn_l);
            }
            if ( IncludeUDriftM10PnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(562,m_u_drift_m10_pn_l);
            }
            if ( IncludeDayPnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(565,m_day_pn_l);
            }
            if ( IncludeM1Mark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(568,m_m1_mark);
            }
            if ( IncludeM1Uprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(571,m_m1_uprc);
            }
            if ( IncludeM10Mark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(574,m_m10_mark);
            }
            if ( IncludeM10Uprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(577,m_m10_uprc);
            }
            if ( IncludeLiveMark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(580,m_live_mark);
            }
            if ( IncludeLiveUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(583,m_live_uprc);
            }
            if ( IncludeTrdMarkError()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(586,m_trd_mark_error);
            }
            if ( IncludeDayMarkError()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(589,m_day_mark_error);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(592, m_timestamp);
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
            if ( IncludeTradeDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,100, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_accnt));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_client_firm));
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 109, optionKeyLayout_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side)));
            if ( IncludeVersion()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,118,m_version);
            }
            if ( IncludeParentNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,121,m_parent_number);
            }
            if ( IncludeBaseParentNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,124,m_base_parent_number);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            if ( IncludeGroupingCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,130,m_grouping_code);
            }
            if ( IncludeRiskGroupId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,133,m_risk_group_id);
            }
            if ( IncludeAltOrderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,136,static_cast<string>(m_alt_order_id));
            }
            if ( IncludeSrcRoutingCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,139,static_cast<string>(m_src_routing_code));
            }
            if ( IncludeUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,142,static_cast<string>(m_user_name));
            }
            if ( IncludeServer()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,145,static_cast<string>(m_server));
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 148, tickerKeyLayout_ticker);
            }
            if ( IncludeSector()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,151,static_cast<string>(m_sector));
            }
            if ( IncludeClientTags()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,154,static_cast<string>(m_client_tags));
            }
            if ( IncludeIndNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,157,m_ind_num);
            }
            if ( IncludeSubNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,160,m_sub_num);
            }
            if ( IncludeGrpNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,163,m_grp_num);
            }
            if ( IncludeNbrNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,166,m_nbr_num);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,169,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExpCode>(m_exp_code)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,172,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SkewCode>(m_skew_code)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,175,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::WidthCode>(m_width_code)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,178,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,181,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_u_price_format)));
            if ( IncludeYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,184,m_years);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,187,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>(m_underlier_type)));
            if ( IncludeMinTickSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,190,m_min_tick_size);
            }
            if ( IncludePointValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,193,m_point_value);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,196,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            if ( IncludeUnderliersPerCn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,199,m_underliers_per_cn);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,202,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>(m_parent_shape)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,205,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitType>(m_parent_limit_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,208,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>(m_parent_limit_class)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,211,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentOrderHandling>(m_parent_order_handling)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,214,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentBalanceHandling>(m_parent_balance_handling)));
            if ( IncludeParentOrderSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,217,m_parent_order_size);
            }
            if ( IncludeParentDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 220, m_parent_dttm);
            }
            if ( IncludeParentUmark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,223,m_parent_umark);
            }
            if ( IncludeParentBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,226,m_parent_bid);
            }
            if ( IncludeParentAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,229,m_parent_ask);
            }
            if ( IncludeParentFairPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,232,m_parent_fair_prc);
            }
            if ( IncludeParentFairWidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,235,m_parent_fair_width);
            }
            if ( IncludeParentLimitPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,238,m_parent_limit_prc);
            }
            if ( IncludeParentLimitRefUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,241,m_parent_limit_ref_uprc);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,244,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_parent_ssale_flag)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,247,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_parent_position_type)));
            if ( IncludeParentStrategy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,250,static_cast<string>(m_parent_strategy));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,253,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>(m_parent_auto_hedge)));
            if ( IncludeChildDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 256, m_child_dttm);
            }
            if ( IncludeChildClOrdId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,259,static_cast<string>(m_child_cl_ord_id));
            }
            if ( IncludeChildRoutingCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,262,static_cast<string>(m_child_routing_code));
            }
            if ( IncludeChildSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,265,m_child_size);
            }
            if ( IncludeChildPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,268,m_child_price);
            }
            if ( IncludeChildExch()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,271,static_cast<string>(m_child_exch));
            }
            if ( IncludeChildExDest()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,600,static_cast<string>(m_child_ex_dest));
            }
            if ( IncludeChildUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,277,m_child_uprc);
            }
            if ( IncludeChildBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,280,m_child_bid);
            }
            if ( IncludeChildAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,283,m_child_ask);
            }
            if ( IncludeChildFairPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,286,m_child_fair_prc);
            }
            if ( IncludeChildFairWidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,289,m_child_fair_width);
            }
            if ( IncludeChildVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,292,m_child_vol);
            }
            if ( IncludeChildProb()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,295,m_child_prob);
            }
            if ( IncludeChildLimitPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,298,m_child_limit_prc);
            }
            if ( IncludeChildLimitRefUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,301,m_child_limit_ref_uprc);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,304,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildHandler>(m_child_algo_handler)));
            if ( IncludeChildOrderHandling()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,307,static_cast<string>(m_child_order_handling));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,310,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildCreateReason>(m_child_create_reason)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,313,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildCancelReason>(m_child_cancel_reason)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,316,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktStance>(m_child_mkt_stance)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,319,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_child_cxl_attempted)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,322,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_child_ssale_flag)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,325,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_child_position_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,328,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_child_firm_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,331,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCapacity>(m_child_capacity)));
            if ( IncludeFillExch()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,334,static_cast<string>(m_fill_exch));
            }
            if ( IncludeFillPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,337,m_fill_price);
            }
            if ( IncludeFillDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 340, m_fill_dttm);
            }
            if ( IncludeFillSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,343,m_fill_size);
            }
            if ( IncludeFillPointValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,346,m_fill_point_value);
            }
            if ( IncludeFillVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,349,m_fill_vol);
            }
            if ( IncludeFillProb()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,352,m_fill_prob);
            }
            if ( IncludeFillLimitPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,355,m_fill_limit_prc);
            }
            if ( IncludeFillLimitRefUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,358,m_fill_limit_ref_uprc);
            }
            if ( IncludeFillUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,361,m_fill_uprc);
            }
            if ( IncludeFillBeta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,364,m_fill_beta);
            }
            if ( IncludeFillTv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,367,m_fill_tv);
            }
            if ( IncludeFillTp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,370,m_fill_tp);
            }
            if ( IncludeFillBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,373,m_fill_bid);
            }
            if ( IncludeFillAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,376,m_fill_ask);
            }
            if ( IncludeFillFairPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,379,m_fill_fair_prc);
            }
            if ( IncludeFillFairWidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,382,m_fill_fair_width);
            }
            if ( IncludeFillBrkrRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,385,m_fill_brkr_rate);
            }
            if ( IncludeFillRoutingRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,388,m_fill_routing_rate);
            }
            if ( IncludeFillOrigExecId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,391,static_cast<string>(m_fill_orig_exec_id));
            }
            if ( IncludeFillLastExecId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,394,static_cast<string>(m_fill_last_exec_id));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,397,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecStatus>(m_fill_exec_status)));
            if ( IncludeFillRemoteText()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,400,static_cast<string>(m_fill_remote_text));
            }
            if ( IncludeFillTransactDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 403, m_fill_transact_dttm);
            }
            if ( IncludeFillLiquidityTag()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,406,static_cast<string>(m_fill_liquidity_tag));
            }
            if ( IncludeFillExchFee()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,409,m_fill_exch_fee);
            }
            if ( IncludeFillDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,412,m_fill_de);
            }
            if ( IncludeFillGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,415,m_fill_ga);
            }
            if ( IncludeFillVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,418,m_fill_ve);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,421,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecRole>(m_exec_role)));
            if ( IncludeExecBrkrCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,599,static_cast<string>(m_exec_brkr_code));
            }
            if ( IncludeExecBrkrAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,427,static_cast<string>(m_exec_brkr_accnt));
            }
            if ( IncludeExecBrkrClFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,430,static_cast<string>(m_exec_brkr_cl_firm));
            }
            if ( IncludeExecBrkrUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,433,static_cast<string>(m_exec_brkr_user_name));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,436,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlipType>(m_clearing_flip_type)));
            if ( IncludeClearingFlipFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,439,static_cast<string>(m_clearing_flip_firm));
            }
            if ( IncludeClearingFlipAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,442,static_cast<string>(m_clearing_flip_accnt));
            }
            if ( IncludeClearingAgent()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,593,static_cast<string>(m_clearing_agent));
            }
            if ( IncludeClearingTaxId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,594,static_cast<string>(m_clearing_tax_id));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,445,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BillingSecType>(m_billing_sec_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,448,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BillingCategory>(m_billing_category)));
            if ( IncludePriAggGroup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,451,static_cast<string>(m_pri_agg_group));
            }
            if ( IncludeSecAggGroup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,454,static_cast<string>(m_sec_agg_group));
            }
            if ( IncludeTrdDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,457,m_trd_delta);
            }
            if ( IncludeTrdDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,460,m_trd_ddelta);
            }
            if ( IncludeTrdGamma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,463,m_trd_gamma);
            }
            if ( IncludeTrdDgamma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,466,m_trd_dgamma);
            }
            if ( IncludeTrdVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,469,m_trd_vega);
            }
            if ( IncludeTrdWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,472,m_trd_wt_vega);
            }
            if ( IncludeTrdTheta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,478,m_trd_theta);
            }
            if ( IncludeTrdBeta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,481,m_trd_beta);
            }
            if ( IncludeTrdDbeta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,484,m_trd_dbeta);
            }
            if ( IncludeTrdNotionalValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,487,m_trd_notional_value);
            }
            if ( IncludeTrdMarketValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,490,m_trd_market_value);
            }
            if ( IncludeMarginUdnVdn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,595,m_margin_udn_vdn);
            }
            if ( IncludeMarginUdnVup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,596,m_margin_udn_vup);
            }
            if ( IncludeMarginUupVdn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,597,m_margin_uup_vdn);
            }
            if ( IncludeMarginUupVup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,598,m_margin_uup_vup);
            }
            if ( IncludeTrdFairEdge()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,517,m_trd_fair_edge);
            }
            if ( IncludeTrdFairEdgeUnit()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,520,m_trd_fair_edge_unit);
            }
            if ( IncludeTrdTheoEdge()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,523,m_trd_theo_edge);
            }
            if ( IncludeTrdTheoEdgeUnit()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,526,m_trd_theo_edge_unit);
            }
            if ( IncludeClArrivePnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,529,m_cl_arrive_pn_l);
            }
            if ( IncludeArrivePnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,532,m_arrive_pn_l);
            }
            if ( IncludeArriveDnPnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,535,m_arrive_dn_pn_l);
            }
            if ( IncludeUDriftArrivePnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,538,m_u_drift_arrive_pn_l);
            }
            if ( IncludeChildLimitSlip()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,541,m_child_limit_slip);
            }
            if ( IncludeHalfWidthPnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,544,m_half_width_pn_l);
            }
            if ( IncludeDayDnPnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,547,m_day_dn_pn_l);
            }
            if ( IncludeDayM1PnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,550,m_day_m1_pn_l);
            }
            if ( IncludeDayM10PnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,553,m_day_m10_pn_l);
            }
            if ( IncludeUDriftDayPnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,556,m_u_drift_day_pn_l);
            }
            if ( IncludeUDriftM1PnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,559,m_u_drift_m1_pn_l);
            }
            if ( IncludeUDriftM10PnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,562,m_u_drift_m10_pn_l);
            }
            if ( IncludeDayPnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,565,m_day_pn_l);
            }
            if ( IncludeM1Mark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,568,m_m1_mark);
            }
            if ( IncludeM1Uprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,571,m_m1_uprc);
            }
            if ( IncludeM10Mark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,574,m_m10_mark);
            }
            if ( IncludeM10Uprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,577,m_m10_uprc);
            }
            if ( IncludeLiveMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,580,m_live_mark);
            }
            if ( IncludeLiveUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,583,m_live_uprc);
            }
            if ( IncludeTrdMarkError()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,586,static_cast<string>(m_trd_mark_error));
            }
            if ( IncludeDayMarkError()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,589,static_cast<string>(m_day_mark_error));
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 592, m_timestamp);
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
                            auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                            m_trade_date.set_year(dateKey.year());
                            m_trade_date.set_month(dateKey.month());
                            m_trade_date.set_day(dateKey.day());
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::OptionKeyCodec::TagType) {
                            auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                            m_sec_key.setFromCodec(optionKey);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_version = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
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
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_base_parent_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 127: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_source = static_cast<spiderrock::protobuf::api::SpdrSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_grouping_code = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_risk_group_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_order_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_src_routing_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_server = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_sector = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_client_tags = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ind_num = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sub_num = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_grp_num = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_nbr_num = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 169: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_exp_code = static_cast<spiderrock::protobuf::api::ExpCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 172: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_skew_code = static_cast<spiderrock::protobuf::api::SkewCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 175: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_width_code = static_cast<spiderrock::protobuf::api::WidthCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 178: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_format = static_cast<spiderrock::protobuf::api::PriceFormat>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 181: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_u_price_format = static_cast<spiderrock::protobuf::api::PriceFormat>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 187: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_underlier_type = static_cast<spiderrock::protobuf::api::UnderlierType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_tick_size = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_point_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 196: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_point_currency = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_underliers_per_cn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 202: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_parent_shape = static_cast<spiderrock::protobuf::api::SpdrOrderShape>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 205: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_parent_limit_type = static_cast<spiderrock::protobuf::api::SpdrLimitType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 208: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_parent_limit_class = static_cast<spiderrock::protobuf::api::SpdrLimitClass>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 211: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_parent_order_handling = static_cast<spiderrock::protobuf::api::ParentOrderHandling>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 214: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_parent_balance_handling = static_cast<spiderrock::protobuf::api::ParentBalanceHandling>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_parent_order_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_parent_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_parent_umark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 226: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_parent_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 229: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_parent_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 232: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_parent_fair_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_parent_fair_width = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 238: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_parent_limit_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 241: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_parent_limit_ref_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 244: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_parent_ssale_flag = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 247: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_parent_position_type = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 250: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_parent_strategy = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 253: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_parent_auto_hedge = static_cast<spiderrock::protobuf::api::AutoHedge>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 256: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_child_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 259: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_child_cl_ord_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 262: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_child_routing_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 265: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_child_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 268: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_child_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 271: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_child_exch = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 600: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_child_ex_dest = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 277: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_child_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 280: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_child_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 283: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_child_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 286: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_child_fair_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 289: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_child_fair_width = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 292: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_child_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 295: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_child_prob = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 298: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_child_limit_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 301: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_child_limit_ref_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 304: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_child_algo_handler = static_cast<spiderrock::protobuf::api::ChildHandler>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
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
                            m_child_create_reason = static_cast<spiderrock::protobuf::api::ChildCreateReason>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 313: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_child_cancel_reason = static_cast<spiderrock::protobuf::api::ChildCancelReason>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 316: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_child_mkt_stance = static_cast<spiderrock::protobuf::api::MktStance>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 319: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_child_cxl_attempted = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 322: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_child_ssale_flag = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 325: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_child_position_type = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 328: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_child_firm_type = static_cast<spiderrock::protobuf::api::FirmType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 331: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_child_capacity = static_cast<spiderrock::protobuf::api::OrderCapacity>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 334: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_exch = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 337: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 340: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_fill_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 343: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fill_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 346: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fill_point_value = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 349: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 352: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_prob = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 355: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_limit_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 358: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_limit_ref_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 361: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 364: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_beta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 367: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_tv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 370: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_tp = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 373: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 376: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 379: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_fair_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 382: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_fair_width = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 385: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_brkr_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 388: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_routing_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 391: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_orig_exec_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 394: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_last_exec_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 397: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_fill_exec_status = static_cast<spiderrock::protobuf::api::ExecStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 400: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_remote_text = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 403: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_fill_transact_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 406: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_liquidity_tag = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 409: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_exch_fee = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 412: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 415: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 418: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 421: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_exec_role = static_cast<spiderrock::protobuf::api::ExecRole>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 599: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_brkr_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 427: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_brkr_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 430: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_brkr_cl_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 433: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_brkr_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 436: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_clearing_flip_type = static_cast<spiderrock::protobuf::api::FlipType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 439: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_clearing_flip_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 442: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_clearing_flip_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 593: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_clearing_agent = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 594: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_clearing_tax_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 445: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_billing_sec_type = static_cast<spiderrock::protobuf::api::BillingSecType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 448: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_billing_category = static_cast<spiderrock::protobuf::api::BillingCategory>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 451: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_pri_agg_group = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 454: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_sec_agg_group = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 457: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_trd_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 460: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_trd_ddelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 463: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_trd_gamma = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 466: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_trd_dgamma = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 469: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_trd_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 472: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_trd_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 478: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_trd_theta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 481: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_trd_beta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 484: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_trd_dbeta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 487: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_trd_notional_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 490: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_trd_market_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 595: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_udn_vdn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 596: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_udn_vup = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 597: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_uup_vdn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 598: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_uup_vup = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 517: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_trd_fair_edge = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 520: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_trd_fair_edge_unit = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 523: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_trd_theo_edge = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 526: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_trd_theo_edge_unit = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 529: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cl_arrive_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 532: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_arrive_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 535: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_arrive_dn_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 538: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_drift_arrive_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 541: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_child_limit_slip = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 544: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_half_width_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 547: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_dn_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 550: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_m1_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 553: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_m10_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 556: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_drift_day_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 559: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_drift_m1_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 562: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_drift_m10_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 565: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 568: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_m1_mark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 571: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_m1_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 574: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_m10_mark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 577: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_m10_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 580: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_live_mark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 583: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_live_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 586: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_trd_mark_error = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 589: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_day_mark_error = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 592: {
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

    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::_meta>() const { return ToolCompositeExecution::_meta{ m__meta}; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::pkey>() const { return ToolCompositeExecution::pkey{ m_pkey}; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::trade_date>() const { return ToolCompositeExecution::trade_date{ m_trade_date}; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::accnt>() const { return m_accnt; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::client_firm>() const { return m_client_firm; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::sec_key>() const { return ToolCompositeExecution::sec_key{ m_sec_key}; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_sec_type)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_side)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::version>() const { return m_version; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::parent_number>() const { return m_parent_number; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::base_parent_number>() const { return m_base_parent_number; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::spdr_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>( m_spdr_source)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::grouping_code>() const { return m_grouping_code; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::risk_group_id>() const { return m_risk_group_id; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::alt_order_id>() const { return m_alt_order_id; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::src_routing_code>() const { return m_src_routing_code; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::user_name>() const { return m_user_name; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::server>() const { return m_server; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::ticker>() const { return ToolCompositeExecution::ticker{ m_ticker}; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::sector>() const { return m_sector; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::client_tags>() const { return m_client_tags; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::ind_num>() const { return m_ind_num; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::sub_num>() const { return m_sub_num; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::grp_num>() const { return m_grp_num; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::nbr_num>() const { return m_nbr_num; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::exp_code>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExpCode>( m_exp_code)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::skew_code>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SkewCode>( m_skew_code)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::width_code>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::WidthCode>( m_width_code)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::price_format>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>( m_price_format)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::u_price_format>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>( m_u_price_format)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::years>() const { return m_years; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::underlier_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>( m_underlier_type)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::min_tick_size>() const { return m_min_tick_size; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::point_value>() const { return m_point_value; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::point_currency>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>( m_point_currency)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::underliers_per_cn>() const { return m_underliers_per_cn; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::parent_shape>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>( m_parent_shape)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::parent_limit_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitType>( m_parent_limit_type)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::parent_limit_class>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>( m_parent_limit_class)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::parent_order_handling>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentOrderHandling>( m_parent_order_handling)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::parent_balance_handling>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentBalanceHandling>( m_parent_balance_handling)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::parent_order_size>() const { return m_parent_order_size; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::parent_dttm>() const { return m_parent_dttm; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::parent_umark>() const { return m_parent_umark; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::parent_bid>() const { return m_parent_bid; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::parent_ask>() const { return m_parent_ask; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::parent_fair_prc>() const { return m_parent_fair_prc; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::parent_fair_width>() const { return m_parent_fair_width; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::parent_limit_prc>() const { return m_parent_limit_prc; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::parent_limit_ref_uprc>() const { return m_parent_limit_ref_uprc; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::parent_ssale_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>( m_parent_ssale_flag)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::parent_position_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>( m_parent_position_type)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::parent_strategy>() const { return m_parent_strategy; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::parent_auto_hedge>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>( m_parent_auto_hedge)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::child_dttm>() const { return m_child_dttm; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::child_cl_ord_id>() const { return m_child_cl_ord_id; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::child_routing_code>() const { return m_child_routing_code; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::child_size>() const { return m_child_size; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::child_price>() const { return m_child_price; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::child_exch>() const { return m_child_exch; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::child_ex_dest>() const { return m_child_ex_dest; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::child_uprc>() const { return m_child_uprc; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::child_bid>() const { return m_child_bid; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::child_ask>() const { return m_child_ask; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::child_fair_prc>() const { return m_child_fair_prc; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::child_fair_width>() const { return m_child_fair_width; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::child_vol>() const { return m_child_vol; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::child_prob>() const { return m_child_prob; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::child_limit_prc>() const { return m_child_limit_prc; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::child_limit_ref_uprc>() const { return m_child_limit_ref_uprc; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::child_algo_handler>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildHandler>( m_child_algo_handler)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::child_order_handling>() const { return m_child_order_handling; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::child_create_reason>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildCreateReason>( m_child_create_reason)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::child_cancel_reason>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildCancelReason>( m_child_cancel_reason)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::child_mkt_stance>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktStance>( m_child_mkt_stance)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::child_cxl_attempted>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_child_cxl_attempted)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::child_ssale_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>( m_child_ssale_flag)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::child_position_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>( m_child_position_type)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::child_firm_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>( m_child_firm_type)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::child_capacity>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCapacity>( m_child_capacity)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::fill_exch>() const { return m_fill_exch; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::fill_price>() const { return m_fill_price; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::fill_dttm>() const { return m_fill_dttm; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::fill_size>() const { return m_fill_size; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::fill_point_value>() const { return m_fill_point_value; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::fill_vol>() const { return m_fill_vol; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::fill_prob>() const { return m_fill_prob; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::fill_limit_prc>() const { return m_fill_limit_prc; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::fill_limit_ref_uprc>() const { return m_fill_limit_ref_uprc; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::fill_uprc>() const { return m_fill_uprc; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::fill_beta>() const { return m_fill_beta; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::fill_tv>() const { return m_fill_tv; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::fill_tp>() const { return m_fill_tp; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::fill_bid>() const { return m_fill_bid; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::fill_ask>() const { return m_fill_ask; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::fill_fair_prc>() const { return m_fill_fair_prc; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::fill_fair_width>() const { return m_fill_fair_width; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::fill_brkr_rate>() const { return m_fill_brkr_rate; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::fill_routing_rate>() const { return m_fill_routing_rate; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::fill_orig_exec_id>() const { return m_fill_orig_exec_id; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::fill_last_exec_id>() const { return m_fill_last_exec_id; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::fill_exec_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecStatus>( m_fill_exec_status)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::fill_remote_text>() const { return m_fill_remote_text; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::fill_transact_dttm>() const { return m_fill_transact_dttm; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::fill_liquidity_tag>() const { return m_fill_liquidity_tag; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::fill_exch_fee>() const { return m_fill_exch_fee; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::fill_de>() const { return m_fill_de; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::fill_ga>() const { return m_fill_ga; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::fill_ve>() const { return m_fill_ve; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::exec_role>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecRole>( m_exec_role)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::exec_brkr_code>() const { return m_exec_brkr_code; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::exec_brkr_accnt>() const { return m_exec_brkr_accnt; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::exec_brkr_cl_firm>() const { return m_exec_brkr_cl_firm; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::exec_brkr_user_name>() const { return m_exec_brkr_user_name; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::clearing_flip_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlipType>( m_clearing_flip_type)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::clearing_flip_firm>() const { return m_clearing_flip_firm; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::clearing_flip_accnt>() const { return m_clearing_flip_accnt; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::clearing_agent>() const { return m_clearing_agent; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::clearing_tax_id>() const { return m_clearing_tax_id; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::billing_sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BillingSecType>( m_billing_sec_type)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::billing_category>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BillingCategory>( m_billing_category)); }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::pri_agg_group>() const { return m_pri_agg_group; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::sec_agg_group>() const { return m_sec_agg_group; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::trd_delta>() const { return m_trd_delta; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::trd_ddelta>() const { return m_trd_ddelta; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::trd_gamma>() const { return m_trd_gamma; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::trd_dgamma>() const { return m_trd_dgamma; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::trd_vega>() const { return m_trd_vega; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::trd_wt_vega>() const { return m_trd_wt_vega; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::trd_theta>() const { return m_trd_theta; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::trd_beta>() const { return m_trd_beta; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::trd_dbeta>() const { return m_trd_dbeta; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::trd_notional_value>() const { return m_trd_notional_value; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::trd_market_value>() const { return m_trd_market_value; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::margin_udn_vdn>() const { return m_margin_udn_vdn; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::margin_udn_vup>() const { return m_margin_udn_vup; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::margin_uup_vdn>() const { return m_margin_uup_vdn; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::margin_uup_vup>() const { return m_margin_uup_vup; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::trd_fair_edge>() const { return m_trd_fair_edge; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::trd_fair_edge_unit>() const { return m_trd_fair_edge_unit; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::trd_theo_edge>() const { return m_trd_theo_edge; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::trd_theo_edge_unit>() const { return m_trd_theo_edge_unit; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::cl_arrive_pn_l>() const { return m_cl_arrive_pn_l; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::arrive_pn_l>() const { return m_arrive_pn_l; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::arrive_dn_pn_l>() const { return m_arrive_dn_pn_l; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::u_drift_arrive_pn_l>() const { return m_u_drift_arrive_pn_l; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::child_limit_slip>() const { return m_child_limit_slip; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::half_width_pn_l>() const { return m_half_width_pn_l; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::day_dn_pn_l>() const { return m_day_dn_pn_l; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::day_m1_pn_l>() const { return m_day_m1_pn_l; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::day_m10_pn_l>() const { return m_day_m10_pn_l; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::u_drift_day_pn_l>() const { return m_u_drift_day_pn_l; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::u_drift_m1_pn_l>() const { return m_u_drift_m1_pn_l; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::u_drift_m10_pn_l>() const { return m_u_drift_m10_pn_l; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::day_pn_l>() const { return m_day_pn_l; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::m1_mark>() const { return m_m1_mark; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::m1_uprc>() const { return m_m1_uprc; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::m10_mark>() const { return m_m10_mark; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::m10_uprc>() const { return m_m10_uprc; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::live_mark>() const { return m_live_mark; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::live_uprc>() const { return m_live_uprc; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::trd_mark_error>() const { return m_trd_mark_error; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::day_mark_error>() const { return m_day_mark_error; }
    template<> inline const auto ToolCompositeExecution::get<ToolCompositeExecution::timestamp>() const { return m_timestamp; }
    template<> inline const auto ToolCompositeExecution_PKey::get<ToolCompositeExecution_PKey::fill_number>() const { return m_fill_number; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const ToolCompositeExecution_PKey& m) {
        o << "\"fill_number\":" << m.get<ToolCompositeExecution_PKey::fill_number>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const ToolCompositeExecution& m) {
        o << "\"_meta\":{" << m.get<ToolCompositeExecution::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<ToolCompositeExecution::pkey>() << "}";
        o << ",\"trade_date\":{" << m.get<ToolCompositeExecution::trade_date>() << "}";
        o << ",\"accnt\":\"" << m.get<ToolCompositeExecution::accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<ToolCompositeExecution::client_firm>() << "\"";
        o << ",\"sec_key\":{" << m.get<ToolCompositeExecution::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<ToolCompositeExecution::sec_type>();
        o << ",\"side\":" << (int64_t)m.get<ToolCompositeExecution::side>();
        o << ",\"version\":" << m.get<ToolCompositeExecution::version>();
        o << ",\"parent_number\":" << m.get<ToolCompositeExecution::parent_number>();
        o << ",\"base_parent_number\":" << m.get<ToolCompositeExecution::base_parent_number>();
        o << ",\"spdr_source\":" << (int64_t)m.get<ToolCompositeExecution::spdr_source>();
        o << ",\"grouping_code\":" << m.get<ToolCompositeExecution::grouping_code>();
        o << ",\"risk_group_id\":" << m.get<ToolCompositeExecution::risk_group_id>();
        o << ",\"alt_order_id\":\"" << m.get<ToolCompositeExecution::alt_order_id>() << "\"";
        o << ",\"src_routing_code\":\"" << m.get<ToolCompositeExecution::src_routing_code>() << "\"";
        o << ",\"user_name\":\"" << m.get<ToolCompositeExecution::user_name>() << "\"";
        o << ",\"server\":\"" << m.get<ToolCompositeExecution::server>() << "\"";
        o << ",\"ticker\":{" << m.get<ToolCompositeExecution::ticker>() << "}";
        o << ",\"sector\":\"" << m.get<ToolCompositeExecution::sector>() << "\"";
        o << ",\"client_tags\":\"" << m.get<ToolCompositeExecution::client_tags>() << "\"";
        o << ",\"ind_num\":" << m.get<ToolCompositeExecution::ind_num>();
        o << ",\"sub_num\":" << m.get<ToolCompositeExecution::sub_num>();
        o << ",\"grp_num\":" << m.get<ToolCompositeExecution::grp_num>();
        o << ",\"nbr_num\":" << m.get<ToolCompositeExecution::nbr_num>();
        o << ",\"exp_code\":" << (int64_t)m.get<ToolCompositeExecution::exp_code>();
        o << ",\"skew_code\":" << (int64_t)m.get<ToolCompositeExecution::skew_code>();
        o << ",\"width_code\":" << (int64_t)m.get<ToolCompositeExecution::width_code>();
        o << ",\"price_format\":" << (int64_t)m.get<ToolCompositeExecution::price_format>();
        o << ",\"u_price_format\":" << (int64_t)m.get<ToolCompositeExecution::u_price_format>();
        o << ",\"years\":" << m.get<ToolCompositeExecution::years>();
        o << ",\"underlier_type\":" << (int64_t)m.get<ToolCompositeExecution::underlier_type>();
        o << ",\"min_tick_size\":" << m.get<ToolCompositeExecution::min_tick_size>();
        o << ",\"point_value\":" << m.get<ToolCompositeExecution::point_value>();
        o << ",\"point_currency\":" << (int64_t)m.get<ToolCompositeExecution::point_currency>();
        o << ",\"underliers_per_cn\":" << m.get<ToolCompositeExecution::underliers_per_cn>();
        o << ",\"parent_shape\":" << (int64_t)m.get<ToolCompositeExecution::parent_shape>();
        o << ",\"parent_limit_type\":" << (int64_t)m.get<ToolCompositeExecution::parent_limit_type>();
        o << ",\"parent_limit_class\":" << (int64_t)m.get<ToolCompositeExecution::parent_limit_class>();
        o << ",\"parent_order_handling\":" << (int64_t)m.get<ToolCompositeExecution::parent_order_handling>();
        o << ",\"parent_balance_handling\":" << (int64_t)m.get<ToolCompositeExecution::parent_balance_handling>();
        o << ",\"parent_order_size\":" << m.get<ToolCompositeExecution::parent_order_size>();
        {
            std::time_t tt = m.get<ToolCompositeExecution::parent_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"parent_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"parent_umark\":" << m.get<ToolCompositeExecution::parent_umark>();
        o << ",\"parent_bid\":" << m.get<ToolCompositeExecution::parent_bid>();
        o << ",\"parent_ask\":" << m.get<ToolCompositeExecution::parent_ask>();
        o << ",\"parent_fair_prc\":" << m.get<ToolCompositeExecution::parent_fair_prc>();
        o << ",\"parent_fair_width\":" << m.get<ToolCompositeExecution::parent_fair_width>();
        o << ",\"parent_limit_prc\":" << m.get<ToolCompositeExecution::parent_limit_prc>();
        o << ",\"parent_limit_ref_uprc\":" << m.get<ToolCompositeExecution::parent_limit_ref_uprc>();
        o << ",\"parent_ssale_flag\":" << (int64_t)m.get<ToolCompositeExecution::parent_ssale_flag>();
        o << ",\"parent_position_type\":" << (int64_t)m.get<ToolCompositeExecution::parent_position_type>();
        o << ",\"parent_strategy\":\"" << m.get<ToolCompositeExecution::parent_strategy>() << "\"";
        o << ",\"parent_auto_hedge\":" << (int64_t)m.get<ToolCompositeExecution::parent_auto_hedge>();
        {
            std::time_t tt = m.get<ToolCompositeExecution::child_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"child_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"child_cl_ord_id\":\"" << m.get<ToolCompositeExecution::child_cl_ord_id>() << "\"";
        o << ",\"child_routing_code\":\"" << m.get<ToolCompositeExecution::child_routing_code>() << "\"";
        o << ",\"child_size\":" << m.get<ToolCompositeExecution::child_size>();
        o << ",\"child_price\":" << m.get<ToolCompositeExecution::child_price>();
        o << ",\"child_exch\":\"" << m.get<ToolCompositeExecution::child_exch>() << "\"";
        o << ",\"child_ex_dest\":\"" << m.get<ToolCompositeExecution::child_ex_dest>() << "\"";
        o << ",\"child_uprc\":" << m.get<ToolCompositeExecution::child_uprc>();
        o << ",\"child_bid\":" << m.get<ToolCompositeExecution::child_bid>();
        o << ",\"child_ask\":" << m.get<ToolCompositeExecution::child_ask>();
        o << ",\"child_fair_prc\":" << m.get<ToolCompositeExecution::child_fair_prc>();
        o << ",\"child_fair_width\":" << m.get<ToolCompositeExecution::child_fair_width>();
        o << ",\"child_vol\":" << m.get<ToolCompositeExecution::child_vol>();
        o << ",\"child_prob\":" << m.get<ToolCompositeExecution::child_prob>();
        o << ",\"child_limit_prc\":" << m.get<ToolCompositeExecution::child_limit_prc>();
        o << ",\"child_limit_ref_uprc\":" << m.get<ToolCompositeExecution::child_limit_ref_uprc>();
        o << ",\"child_algo_handler\":" << (int64_t)m.get<ToolCompositeExecution::child_algo_handler>();
        o << ",\"child_order_handling\":\"" << m.get<ToolCompositeExecution::child_order_handling>() << "\"";
        o << ",\"child_create_reason\":" << (int64_t)m.get<ToolCompositeExecution::child_create_reason>();
        o << ",\"child_cancel_reason\":" << (int64_t)m.get<ToolCompositeExecution::child_cancel_reason>();
        o << ",\"child_mkt_stance\":" << (int64_t)m.get<ToolCompositeExecution::child_mkt_stance>();
        o << ",\"child_cxl_attempted\":" << (int64_t)m.get<ToolCompositeExecution::child_cxl_attempted>();
        o << ",\"child_ssale_flag\":" << (int64_t)m.get<ToolCompositeExecution::child_ssale_flag>();
        o << ",\"child_position_type\":" << (int64_t)m.get<ToolCompositeExecution::child_position_type>();
        o << ",\"child_firm_type\":" << (int64_t)m.get<ToolCompositeExecution::child_firm_type>();
        o << ",\"child_capacity\":" << (int64_t)m.get<ToolCompositeExecution::child_capacity>();
        o << ",\"fill_exch\":\"" << m.get<ToolCompositeExecution::fill_exch>() << "\"";
        o << ",\"fill_price\":" << m.get<ToolCompositeExecution::fill_price>();
        {
            std::time_t tt = m.get<ToolCompositeExecution::fill_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"fill_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"fill_size\":" << m.get<ToolCompositeExecution::fill_size>();
        o << ",\"fill_point_value\":" << m.get<ToolCompositeExecution::fill_point_value>();
        o << ",\"fill_vol\":" << m.get<ToolCompositeExecution::fill_vol>();
        o << ",\"fill_prob\":" << m.get<ToolCompositeExecution::fill_prob>();
        o << ",\"fill_limit_prc\":" << m.get<ToolCompositeExecution::fill_limit_prc>();
        o << ",\"fill_limit_ref_uprc\":" << m.get<ToolCompositeExecution::fill_limit_ref_uprc>();
        o << ",\"fill_uprc\":" << m.get<ToolCompositeExecution::fill_uprc>();
        o << ",\"fill_beta\":" << m.get<ToolCompositeExecution::fill_beta>();
        o << ",\"fill_tv\":" << m.get<ToolCompositeExecution::fill_tv>();
        o << ",\"fill_tp\":" << m.get<ToolCompositeExecution::fill_tp>();
        o << ",\"fill_bid\":" << m.get<ToolCompositeExecution::fill_bid>();
        o << ",\"fill_ask\":" << m.get<ToolCompositeExecution::fill_ask>();
        o << ",\"fill_fair_prc\":" << m.get<ToolCompositeExecution::fill_fair_prc>();
        o << ",\"fill_fair_width\":" << m.get<ToolCompositeExecution::fill_fair_width>();
        o << ",\"fill_brkr_rate\":" << m.get<ToolCompositeExecution::fill_brkr_rate>();
        o << ",\"fill_routing_rate\":" << m.get<ToolCompositeExecution::fill_routing_rate>();
        o << ",\"fill_orig_exec_id\":\"" << m.get<ToolCompositeExecution::fill_orig_exec_id>() << "\"";
        o << ",\"fill_last_exec_id\":\"" << m.get<ToolCompositeExecution::fill_last_exec_id>() << "\"";
        o << ",\"fill_exec_status\":" << (int64_t)m.get<ToolCompositeExecution::fill_exec_status>();
        o << ",\"fill_remote_text\":\"" << m.get<ToolCompositeExecution::fill_remote_text>() << "\"";
        {
            std::time_t tt = m.get<ToolCompositeExecution::fill_transact_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"fill_transact_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"fill_liquidity_tag\":\"" << m.get<ToolCompositeExecution::fill_liquidity_tag>() << "\"";
        o << ",\"fill_exch_fee\":" << m.get<ToolCompositeExecution::fill_exch_fee>();
        o << ",\"fill_de\":" << m.get<ToolCompositeExecution::fill_de>();
        o << ",\"fill_ga\":" << m.get<ToolCompositeExecution::fill_ga>();
        o << ",\"fill_ve\":" << m.get<ToolCompositeExecution::fill_ve>();
        o << ",\"exec_role\":" << (int64_t)m.get<ToolCompositeExecution::exec_role>();
        o << ",\"exec_brkr_code\":\"" << m.get<ToolCompositeExecution::exec_brkr_code>() << "\"";
        o << ",\"exec_brkr_accnt\":\"" << m.get<ToolCompositeExecution::exec_brkr_accnt>() << "\"";
        o << ",\"exec_brkr_cl_firm\":\"" << m.get<ToolCompositeExecution::exec_brkr_cl_firm>() << "\"";
        o << ",\"exec_brkr_user_name\":\"" << m.get<ToolCompositeExecution::exec_brkr_user_name>() << "\"";
        o << ",\"clearing_flip_type\":" << (int64_t)m.get<ToolCompositeExecution::clearing_flip_type>();
        o << ",\"clearing_flip_firm\":\"" << m.get<ToolCompositeExecution::clearing_flip_firm>() << "\"";
        o << ",\"clearing_flip_accnt\":\"" << m.get<ToolCompositeExecution::clearing_flip_accnt>() << "\"";
        o << ",\"clearing_agent\":\"" << m.get<ToolCompositeExecution::clearing_agent>() << "\"";
        o << ",\"clearing_tax_id\":\"" << m.get<ToolCompositeExecution::clearing_tax_id>() << "\"";
        o << ",\"billing_sec_type\":" << (int64_t)m.get<ToolCompositeExecution::billing_sec_type>();
        o << ",\"billing_category\":" << (int64_t)m.get<ToolCompositeExecution::billing_category>();
        o << ",\"pri_agg_group\":\"" << m.get<ToolCompositeExecution::pri_agg_group>() << "\"";
        o << ",\"sec_agg_group\":\"" << m.get<ToolCompositeExecution::sec_agg_group>() << "\"";
        o << ",\"trd_delta\":" << m.get<ToolCompositeExecution::trd_delta>();
        o << ",\"trd_ddelta\":" << m.get<ToolCompositeExecution::trd_ddelta>();
        o << ",\"trd_gamma\":" << m.get<ToolCompositeExecution::trd_gamma>();
        o << ",\"trd_dgamma\":" << m.get<ToolCompositeExecution::trd_dgamma>();
        o << ",\"trd_vega\":" << m.get<ToolCompositeExecution::trd_vega>();
        o << ",\"trd_wt_vega\":" << m.get<ToolCompositeExecution::trd_wt_vega>();
        o << ",\"trd_theta\":" << m.get<ToolCompositeExecution::trd_theta>();
        o << ",\"trd_beta\":" << m.get<ToolCompositeExecution::trd_beta>();
        o << ",\"trd_dbeta\":" << m.get<ToolCompositeExecution::trd_dbeta>();
        o << ",\"trd_notional_value\":" << m.get<ToolCompositeExecution::trd_notional_value>();
        o << ",\"trd_market_value\":" << m.get<ToolCompositeExecution::trd_market_value>();
        o << ",\"margin_udn_vdn\":" << m.get<ToolCompositeExecution::margin_udn_vdn>();
        o << ",\"margin_udn_vup\":" << m.get<ToolCompositeExecution::margin_udn_vup>();
        o << ",\"margin_uup_vdn\":" << m.get<ToolCompositeExecution::margin_uup_vdn>();
        o << ",\"margin_uup_vup\":" << m.get<ToolCompositeExecution::margin_uup_vup>();
        o << ",\"trd_fair_edge\":" << m.get<ToolCompositeExecution::trd_fair_edge>();
        o << ",\"trd_fair_edge_unit\":" << m.get<ToolCompositeExecution::trd_fair_edge_unit>();
        o << ",\"trd_theo_edge\":" << m.get<ToolCompositeExecution::trd_theo_edge>();
        o << ",\"trd_theo_edge_unit\":" << m.get<ToolCompositeExecution::trd_theo_edge_unit>();
        o << ",\"cl_arrive_pn_l\":" << m.get<ToolCompositeExecution::cl_arrive_pn_l>();
        o << ",\"arrive_pn_l\":" << m.get<ToolCompositeExecution::arrive_pn_l>();
        o << ",\"arrive_dn_pn_l\":" << m.get<ToolCompositeExecution::arrive_dn_pn_l>();
        o << ",\"u_drift_arrive_pn_l\":" << m.get<ToolCompositeExecution::u_drift_arrive_pn_l>();
        o << ",\"child_limit_slip\":" << m.get<ToolCompositeExecution::child_limit_slip>();
        o << ",\"half_width_pn_l\":" << m.get<ToolCompositeExecution::half_width_pn_l>();
        o << ",\"day_dn_pn_l\":" << m.get<ToolCompositeExecution::day_dn_pn_l>();
        o << ",\"day_m1_pn_l\":" << m.get<ToolCompositeExecution::day_m1_pn_l>();
        o << ",\"day_m10_pn_l\":" << m.get<ToolCompositeExecution::day_m10_pn_l>();
        o << ",\"u_drift_day_pn_l\":" << m.get<ToolCompositeExecution::u_drift_day_pn_l>();
        o << ",\"u_drift_m1_pn_l\":" << m.get<ToolCompositeExecution::u_drift_m1_pn_l>();
        o << ",\"u_drift_m10_pn_l\":" << m.get<ToolCompositeExecution::u_drift_m10_pn_l>();
        o << ",\"day_pn_l\":" << m.get<ToolCompositeExecution::day_pn_l>();
        o << ",\"m1_mark\":" << m.get<ToolCompositeExecution::m1_mark>();
        o << ",\"m1_uprc\":" << m.get<ToolCompositeExecution::m1_uprc>();
        o << ",\"m10_mark\":" << m.get<ToolCompositeExecution::m10_mark>();
        o << ",\"m10_uprc\":" << m.get<ToolCompositeExecution::m10_uprc>();
        o << ",\"live_mark\":" << m.get<ToolCompositeExecution::live_mark>();
        o << ",\"live_uprc\":" << m.get<ToolCompositeExecution::live_uprc>();
        o << ",\"trd_mark_error\":\"" << m.get<ToolCompositeExecution::trd_mark_error>() << "\"";
        o << ",\"day_mark_error\":\"" << m.get<ToolCompositeExecution::day_mark_error>() << "\"";
        {
            std::time_t tt = m.get<ToolCompositeExecution::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}