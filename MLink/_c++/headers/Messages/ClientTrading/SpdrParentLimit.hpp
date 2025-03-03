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

    #ifndef _order_active_size__GUARD__
    #define _order_active_size__GUARD__
    DECL_STRONG_TYPE(order_active_size, int32);
    #endif//_order_active_size__GUARD__

    #ifndef _add_cum_fill_quantity__GUARD__
    #define _add_cum_fill_quantity__GUARD__
    DECL_STRONG_TYPE(add_cum_fill_quantity, spiderrock::protobuf::api::YesNo);
    #endif//_add_cum_fill_quantity__GUARD__

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

    #ifndef _exch_mask__GUARD__
    #define _exch_mask__GUARD__
    DECL_STRONG_TYPE(exch_mask, uint32);
    #endif//_exch_mask__GUARD__

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

    #ifndef _start_dttm__GUARD__
    #define _start_dttm__GUARD__
    DECL_STRONG_TYPE(start_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_start_dttm__GUARD__

    #ifndef _active_duration__GUARD__
    #define _active_duration__GUARD__
    DECL_STRONG_TYPE(active_duration, int32);
    #endif//_active_duration__GUARD__

    #ifndef _progress_expose_time__GUARD__
    #define _progress_expose_time__GUARD__
    DECL_STRONG_TYPE(progress_expose_time, int32);
    #endif//_progress_expose_time__GUARD__

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

    #ifndef _theo_vol__GUARD__
    #define _theo_vol__GUARD__
    DECL_STRONG_TYPE(theo_vol, float);
    #endif//_theo_vol__GUARD__

    #ifndef _cl_arrive_mark__GUARD__
    #define _cl_arrive_mark__GUARD__
    DECL_STRONG_TYPE(cl_arrive_mark, float);
    #endif//_cl_arrive_mark__GUARD__

    #ifndef _user_data1__GUARD__
    #define _user_data1__GUARD__
    DECL_STRONG_TYPE(user_data1, string);
    #endif//_user_data1__GUARD__

    #ifndef _user_data2__GUARD__
    #define _user_data2__GUARD__
    DECL_STRONG_TYPE(user_data2, string);
    #endif//_user_data2__GUARD__

    #ifndef _exec_brkr_code__GUARD__
    #define _exec_brkr_code__GUARD__
    DECL_STRONG_TYPE(exec_brkr_code, string);
    #endif//_exec_brkr_code__GUARD__

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

    #ifndef _order_side__GUARD__
    #define _order_side__GUARD__
    DECL_STRONG_TYPE(order_side, spiderrock::protobuf::api::BuySell);
    #endif//_order_side__GUARD__

    #ifndef _grouping_code__GUARD__
    #define _grouping_code__GUARD__
    DECL_STRONG_TYPE(grouping_code, int64);
    #endif//_grouping_code__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    
    class SpdrParentLimit_PKey {
        public:
        //using statements for all types used in this class
        using accnt = spiderrock::protobuf::api::accnt;
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using spdr_source = spiderrock::protobuf::api::spdr_source;
        using order_side = spiderrock::protobuf::api::order_side;
        using grouping_code = spiderrock::protobuf::api::grouping_code;
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        accnt m_accnt{};
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        spdr_source m_spdr_source{};
        order_side m_order_side{};
        grouping_code m_grouping_code{};
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
        order_side get_order_side() const {
            return m_order_side;
        }
        grouping_code get_grouping_code() const {
            return m_grouping_code;
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
        void set_order_side(const order_side& value)  {
            m_order_side = value;
        }
        void set_grouping_code(const grouping_code& value)  {
            m_grouping_code = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentLimit_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentLimit_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const sec_key & value) { set_sec_key(value); }
        void set(const sec_type & value) { set_sec_type(value); }
        void set(const spdr_source & value) { set_spdr_source(value); }
        void set(const order_side & value) { set_order_side(value); }
        void set(const grouping_code & value) { set_grouping_code(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        SpdrParentLimit_PKey() {}

        virtual ~SpdrParentLimit_PKey() {
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(14,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            if ( IncludeGroupingCode()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(15,m_grouping_code);
            }
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,14,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            if ( IncludeGroupingCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,15,m_grouping_code);
            }
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
                    case 14: {m_order_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 15: {m_grouping_code = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 16: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SpdrParentLimit {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrParentLimit_PKey;
        using sys_environment = spiderrock::protobuf::api::sys_environment;
        using run_status = spiderrock::protobuf::api::run_status;
        using order_active_size = spiderrock::protobuf::api::order_active_size;
        using add_cum_fill_quantity = spiderrock::protobuf::api::add_cum_fill_quantity;
        using order_limit_type = spiderrock::protobuf::api::order_limit_type;
        using take_limit_class = spiderrock::protobuf::api::take_limit_class;
        using make_limit_class = spiderrock::protobuf::api::make_limit_class;
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
        using exch_mask = spiderrock::protobuf::api::exch_mask;
        using cxl_uprc_range = spiderrock::protobuf::api::cxl_uprc_range;
        using min_ubid = spiderrock::protobuf::api::min_ubid;
        using max_uask = spiderrock::protobuf::api::max_uask;
        using min_max_type = spiderrock::protobuf::api::min_max_type;
        using min_option_px = spiderrock::protobuf::api::min_option_px;
        using start_dttm = spiderrock::protobuf::api::start_dttm;
        using active_duration = spiderrock::protobuf::api::active_duration;
        using progress_expose_time = spiderrock::protobuf::api::progress_expose_time;
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
        using order_ref_rmetric1 = spiderrock::protobuf::api::order_ref_rmetric1;
        using order_ref_rmetric2 = spiderrock::protobuf::api::order_ref_rmetric2;
        using order_ref_rmetric3 = spiderrock::protobuf::api::order_ref_rmetric3;
        using order_ref_rmetric4 = spiderrock::protobuf::api::order_ref_rmetric4;
        using order_ref_rmetric5 = spiderrock::protobuf::api::order_ref_rmetric5;
        using order_ref_rmetric6 = spiderrock::protobuf::api::order_ref_rmetric6;
        using order_ref_rmetric7 = spiderrock::protobuf::api::order_ref_rmetric7;
        using sym_ema_cxl_ddelta_ln = spiderrock::protobuf::api::sym_ema_cxl_ddelta_ln;
        using sym_ema_cxl_ddelta_sh = spiderrock::protobuf::api::sym_ema_cxl_ddelta_sh;
        using sym_ema_cxl_wt_vega_ln = spiderrock::protobuf::api::sym_ema_cxl_wt_vega_ln;
        using sym_ema_cxl_wt_vega_sh = spiderrock::protobuf::api::sym_ema_cxl_wt_vega_sh;
        using theo_vol = spiderrock::protobuf::api::theo_vol;
        using cl_arrive_mark = spiderrock::protobuf::api::cl_arrive_mark;
        using user_data1 = spiderrock::protobuf::api::user_data1;
        using user_data2 = spiderrock::protobuf::api::user_data2;
        using exec_brkr_code = spiderrock::protobuf::api::exec_brkr_code;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        sys_environment m_sys_environment{};
        run_status m_run_status{};
        order_active_size m_order_active_size{};
        add_cum_fill_quantity m_add_cum_fill_quantity{};
        order_limit_type m_order_limit_type{};
        take_limit_class m_take_limit_class{};
        make_limit_class m_make_limit_class{};
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
        exch_mask m_exch_mask{};
        cxl_uprc_range m_cxl_uprc_range{};
        min_ubid m_min_ubid{};
        max_uask m_max_uask{};
        min_max_type m_min_max_type{};
        min_option_px m_min_option_px{};
        start_dttm m_start_dttm{};
        active_duration m_active_duration{};
        progress_expose_time m_progress_expose_time{};
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
        order_ref_rmetric1 m_order_ref_rmetric1{};
        order_ref_rmetric2 m_order_ref_rmetric2{};
        order_ref_rmetric3 m_order_ref_rmetric3{};
        order_ref_rmetric4 m_order_ref_rmetric4{};
        order_ref_rmetric5 m_order_ref_rmetric5{};
        order_ref_rmetric6 m_order_ref_rmetric6{};
        order_ref_rmetric7 m_order_ref_rmetric7{};
        sym_ema_cxl_ddelta_ln m_sym_ema_cxl_ddelta_ln{};
        sym_ema_cxl_ddelta_sh m_sym_ema_cxl_ddelta_sh{};
        sym_ema_cxl_wt_vega_ln m_sym_ema_cxl_wt_vega_ln{};
        sym_ema_cxl_wt_vega_sh m_sym_ema_cxl_wt_vega_sh{};
        theo_vol m_theo_vol{};
        cl_arrive_mark m_cl_arrive_mark{};
        user_data1 m_user_data1{};
        user_data2 m_user_data2{};
        exec_brkr_code m_exec_brkr_code{};
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
        sys_environment get_sys_environment() const {
            return m_sys_environment;
        }		
        run_status get_run_status() const {
            return m_run_status;
        }		
        order_active_size get_order_active_size() const {
            return m_order_active_size;
        }		
        add_cum_fill_quantity get_add_cum_fill_quantity() const {
            return m_add_cum_fill_quantity;
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
        exch_mask get_exch_mask() const {
            return m_exch_mask;
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
        start_dttm get_start_dttm() const {
            return m_start_dttm;
        }		
        active_duration get_active_duration() const {
            return m_active_duration;
        }		
        progress_expose_time get_progress_expose_time() const {
            return m_progress_expose_time;
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
        theo_vol get_theo_vol() const {
            return m_theo_vol;
        }		
        cl_arrive_mark get_cl_arrive_mark() const {
            return m_cl_arrive_mark;
        }		
        user_data1 get_user_data1() const {
            return m_user_data1;
        }		
        user_data2 get_user_data2() const {
            return m_user_data2;
        }		
        exec_brkr_code get_exec_brkr_code() const {
            return m_exec_brkr_code;
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
        void set_sys_environment(const sys_environment& value)  {
            m_sys_environment = value;
        }
        void set_run_status(const run_status& value)  {
            m_run_status = value;
        }
        void set_order_active_size(const order_active_size& value)  {
            m_order_active_size = value;
        }
        void set_add_cum_fill_quantity(const add_cum_fill_quantity& value)  {
            m_add_cum_fill_quantity = value;
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
        void set_exch_mask(const exch_mask& value)  {
            m_exch_mask = value;
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
        void set_start_dttm(const start_dttm& value)  {
            m_start_dttm = value;
        }
        void set_active_duration(const active_duration& value)  {
            m_active_duration = value;
        }
        void set_progress_expose_time(const progress_expose_time& value)  {
            m_progress_expose_time = value;
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
        void set_theo_vol(const theo_vol& value)  {
            m_theo_vol = value;
        }
        void set_cl_arrive_mark(const cl_arrive_mark& value)  {
            m_cl_arrive_mark = value;
        }
        void set_user_data1(const user_data1& value)  {
            m_user_data1 = value;
        }
        void set_user_data2(const user_data2& value)  {
            m_user_data2 = value;
        }
        void set_exec_brkr_code(const exec_brkr_code& value)  {
            m_exec_brkr_code = value;
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentLimit::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const order_active_size & value) {
            set_order_active_size(value);
        }
        void set(const add_cum_fill_quantity & value) {
            set_add_cum_fill_quantity(value);
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
        void set(const exch_mask & value) {
            set_exch_mask(value);
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
        void set(const start_dttm & value) {
            set_start_dttm(value);
        }
        void set(const active_duration & value) {
            set_active_duration(value);
        }
        void set(const progress_expose_time & value) {
            set_progress_expose_time(value);
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
        void set(const theo_vol & value) {
            set_theo_vol(value);
        }
        void set(const cl_arrive_mark & value) {
            set_cl_arrive_mark(value);
        }
        void set(const user_data1 & value) {
            set_user_data1(value);
        }
        void set(const user_data2 & value) {
            set_user_data2(value);
        }
        void set(const exec_brkr_code & value) {
            set_exec_brkr_code(value);
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

        void set(const SpdrParentLimit & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_sys_environment);
            set(value.m_run_status);
            set(value.m_order_active_size);
            set(value.m_add_cum_fill_quantity);
            set(value.m_order_limit_type);
            set(value.m_take_limit_class);
            set(value.m_make_limit_class);
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
            set(value.m_exch_mask);
            set(value.m_cxl_uprc_range);
            set(value.m_min_ubid);
            set(value.m_max_uask);
            set(value.m_min_max_type);
            set(value.m_min_option_px);
            set(value.m_start_dttm);
            set(value.m_active_duration);
            set(value.m_progress_expose_time);
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
            set(value.m_order_ref_rmetric1);
            set(value.m_order_ref_rmetric2);
            set(value.m_order_ref_rmetric3);
            set(value.m_order_ref_rmetric4);
            set(value.m_order_ref_rmetric5);
            set(value.m_order_ref_rmetric6);
            set(value.m_order_ref_rmetric7);
            set(value.m_sym_ema_cxl_ddelta_ln);
            set(value.m_sym_ema_cxl_ddelta_sh);
            set(value.m_sym_ema_cxl_wt_vega_ln);
            set(value.m_sym_ema_cxl_wt_vega_sh);
            set(value.m_theo_vol);
            set(value.m_cl_arrive_mark);
            set(value.m_user_data1);
            set(value.m_user_data2);
            set(value.m_exec_brkr_code);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);
        }

        SpdrParentLimit() {
            m__meta.set_message_type("SpdrParentLimit");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4090, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4090, length);
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
             *this = SpdrParentLimit{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeOrderActiveSize() const {
            return !(m_order_active_size == 0);
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
        bool IncludeExchMask() const {
            return !(m_exch_mask == 0);
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
        bool IncludeStartDttm() const {
            return (m_start_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeActiveDuration() const {
            return !(m_active_duration == 0);
        }
        bool IncludeProgressExposeTime() const {
            return !(m_progress_expose_time == 0);
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
        bool IncludeTheoVol() const {
            return !(m_theo_vol == 0.0);
        }
        bool IncludeClArriveMark() const {
            return !(m_cl_arrive_mark == 0.0);
        }
        bool IncludeUserData1() const {
            return !(m_user_data1.empty());
        }
        bool IncludeUserData2() const {
            return !(m_user_data2.empty());
        }
        bool IncludeExecBrkrCode() const {
            return !(m_exec_brkr_code.empty());
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_sys_environment)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>(m_run_status)));
            if ( IncludeOrderActiveSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(106,m_order_active_size);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_add_cum_fill_quantity)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitType>(m_order_limit_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>(m_take_limit_class)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>(m_make_limit_class)));
            if ( IncludeOrderPrcLimit()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(121,m_order_prc_limit);
            }
            if ( IncludeOrderRefUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(124,m_order_ref_uprc);
            }
            if ( IncludeOrderRefDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_order_ref_delta);
            }
            if ( IncludeOrderRefGamma()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_order_ref_gamma);
            }
            if ( IncludeOrderVolLimit()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_order_vol_limit);
            }
            if ( IncludeRateOverride()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_rate_override);
            }
            if ( IncludeSdivOverride()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_sdiv_override);
            }
            if ( IncludeDdivOverride()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(142,m_ddiv_override);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OverrideCode>(m_override_code)));
            if ( IncludeOrderPrcOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(148,m_order_prc_offset);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StateModel>(m_state_model)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StateModel>(m_u_state_model)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(157,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>(m_take_alpha_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(160,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>(m_make_alpha_type)));
            if ( IncludeTakeAlphaFactor()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_take_alpha_factor);
            }
            if ( IncludeMakeAlphaFactor()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_make_alpha_factor);
            }
            if ( IncludeTakeProbability()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(169,m_take_probability);
            }
            if ( IncludeMakeProbability()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(172,m_make_probability);
            }
            if ( IncludeTakeSurfPrcOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(175,m_take_surf_prc_offset);
            }
            if ( IncludeTakeSurfVolOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_take_surf_vol_offset);
            }
            if ( IncludeTakeSurfWidthOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(181,m_take_surf_width_offset);
            }
            if ( IncludeMakeSurfPrcOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(184,m_make_surf_prc_offset);
            }
            if ( IncludeMakeSurfVolOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(187,m_make_surf_vol_offset);
            }
            if ( IncludeMakeSurfWidthOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(190,m_make_surf_width_offset);
            }
            if ( IncludeOrderRefEventMult()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(193,m_order_ref_event_mult);
            }
            if ( IncludeOrderRefEventDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(196, m_order_ref_event_dttm);
            }
            if ( IncludeExchMask()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(199,m_exch_mask);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(401,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UPrcCxl>(m_cxl_uprc_range)));
            if ( IncludeMinUbid()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(402,m_min_ubid);
            }
            if ( IncludeMaxUask()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(403,m_max_uask);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(404,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MinMaxType>(m_min_max_type)));
            if ( IncludeMinOptionPx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(405,m_min_option_px);
            }
            if ( IncludeStartDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(205, m_start_dttm);
            }
            if ( IncludeActiveDuration()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(406,m_active_duration);
            }
            if ( IncludeProgressExposeTime()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(214,m_progress_expose_time);
            }
            if ( IncludeExpDayWtVegaOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(241,m_exp_day_wt_vega_offset);
            }
            if ( IncludeMaxExpDayWtVegaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(235,m_max_exp_day_wt_vega_ln);
            }
            if ( IncludeMaxExpDayWtVegaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(238,m_max_exp_day_wt_vega_sh);
            }
            if ( IncludeMaxExpDayRmetric6Ln()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(271,m_max_exp_day_rmetric6_ln);
            }
            if ( IncludeMaxExpDayRmetric6Sh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(274,m_max_exp_day_rmetric6_sh);
            }
            if ( IncludeSymDayDdeltaOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(268,m_sym_day_ddelta_offset);
            }
            if ( IncludeMaxSymDayDdeltaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(262,m_max_sym_day_ddelta_ln);
            }
            if ( IncludeMaxSymDayDdeltaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(265,m_max_sym_day_ddelta_sh);
            }
            if ( IncludeSymDayVegaOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(250,m_sym_day_vega_offset);
            }
            if ( IncludeMaxSymDayVegaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(244,m_max_sym_day_vega_ln);
            }
            if ( IncludeMaxSymDayVegaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(247,m_max_sym_day_vega_sh);
            }
            if ( IncludeSymDayWtVegaOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(259,m_sym_day_wt_vega_offset);
            }
            if ( IncludeMaxSymDayWtVegaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(253,m_max_sym_day_wt_vega_ln);
            }
            if ( IncludeMaxSymDayWtVegaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(256,m_max_sym_day_wt_vega_sh);
            }
            if ( IncludeMaxSymDayRmetric7Ln()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(280,m_max_sym_day_rmetric7_ln);
            }
            if ( IncludeMaxSymDayRmetric7Sh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(283,m_max_sym_day_rmetric7_sh);
            }
            if ( IncludeMaxGrpDayDdeltaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(289,m_max_grp_day_ddelta_ln);
            }
            if ( IncludeMaxGrpDayDdeltaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(292,m_max_grp_day_ddelta_sh);
            }
            if ( IncludeMaxGrpDayVegaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(298,m_max_grp_day_vega_ln);
            }
            if ( IncludeMaxGrpDayVegaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(301,m_max_grp_day_vega_sh);
            }
            if ( IncludeMaxGrpDayVegaAbs()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(304,m_max_grp_day_vega_abs);
            }
            if ( IncludeGrpDayVegaRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(307,m_grp_day_vega_ratio);
            }
            if ( IncludeMaxGrpDayContractsLn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(358,m_max_grp_day_contracts_ln);
            }
            if ( IncludeMaxGrpDayContractsSh()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(361,m_max_grp_day_contracts_sh);
            }
            if ( IncludeMaxGrpDayContractsAbs()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(364,m_max_grp_day_contracts_abs);
            }
            if ( IncludeMaxGrpDayRmetric1Ln()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(322,m_max_grp_day_rmetric1_ln);
            }
            if ( IncludeMaxGrpDayRmetric1Sh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(325,m_max_grp_day_rmetric1_sh);
            }
            if ( IncludeMaxGrpDayRmetric1Abs()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(328,m_max_grp_day_rmetric1_abs);
            }
            if ( IncludeGrpDayRmetric1Ratio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(331,m_grp_day_rmetric1_ratio);
            }
            if ( IncludeMaxGrpDayRmetric2Ln()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(334,m_max_grp_day_rmetric2_ln);
            }
            if ( IncludeMaxGrpDayRmetric2Sh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(337,m_max_grp_day_rmetric2_sh);
            }
            if ( IncludeMaxGrpDayRmetric3Ln()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(340,m_max_grp_day_rmetric3_ln);
            }
            if ( IncludeMaxGrpDayRmetric3Sh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(343,m_max_grp_day_rmetric3_sh);
            }
            if ( IncludeMaxGrpDayRmetric4Ln()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(346,m_max_grp_day_rmetric4_ln);
            }
            if ( IncludeMaxGrpDayRmetric4Sh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(349,m_max_grp_day_rmetric4_sh);
            }
            if ( IncludeMaxGrpDayRmetric5Ln()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(352,m_max_grp_day_rmetric5_ln);
            }
            if ( IncludeMaxGrpDayRmetric5Sh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(355,m_max_grp_day_rmetric5_sh);
            }
            if ( IncludeOrderRefRmetric1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(408,m_order_ref_rmetric1);
            }
            if ( IncludeOrderRefRmetric2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(409,m_order_ref_rmetric2);
            }
            if ( IncludeOrderRefRmetric3()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(410,m_order_ref_rmetric3);
            }
            if ( IncludeOrderRefRmetric4()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(411,m_order_ref_rmetric4);
            }
            if ( IncludeOrderRefRmetric5()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(412,m_order_ref_rmetric5);
            }
            if ( IncludeOrderRefRmetric6()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(413,m_order_ref_rmetric6);
            }
            if ( IncludeOrderRefRmetric7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(414,m_order_ref_rmetric7);
            }
            if ( IncludeSymEmaCxlDdeltaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(367,m_sym_ema_cxl_ddelta_ln);
            }
            if ( IncludeSymEmaCxlDdeltaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(370,m_sym_ema_cxl_ddelta_sh);
            }
            if ( IncludeSymEmaCxlWtVegaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(373,m_sym_ema_cxl_wt_vega_ln);
            }
            if ( IncludeSymEmaCxlWtVegaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(376,m_sym_ema_cxl_wt_vega_sh);
            }
            if ( IncludeTheoVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(379,m_theo_vol);
            }
            if ( IncludeClArriveMark()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(382,m_cl_arrive_mark);
            }
            if ( IncludeUserData1()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(385,m_user_data1);
            }
            if ( IncludeUserData2()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(388,m_user_data2);
            }
            if ( IncludeExecBrkrCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(407,m_exec_brkr_code);
            }
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(394,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(397,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(400, m_timestamp);
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
            if ( IncludeOrderActiveSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,106,m_order_active_size);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_add_cum_fill_quantity)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitType>(m_order_limit_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>(m_take_limit_class)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>(m_make_limit_class)));
            if ( IncludeOrderPrcLimit()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,121,m_order_prc_limit);
            }
            if ( IncludeOrderRefUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,124,m_order_ref_uprc);
            }
            if ( IncludeOrderRefDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_order_ref_delta);
            }
            if ( IncludeOrderRefGamma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_order_ref_gamma);
            }
            if ( IncludeOrderVolLimit()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_order_vol_limit);
            }
            if ( IncludeRateOverride()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_rate_override);
            }
            if ( IncludeSdivOverride()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_sdiv_override);
            }
            if ( IncludeDdivOverride()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,142,static_cast<string>(m_ddiv_override));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OverrideCode>(m_override_code)));
            if ( IncludeOrderPrcOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,148,m_order_prc_offset);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StateModel>(m_state_model)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StateModel>(m_u_state_model)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,157,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>(m_take_alpha_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,160,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>(m_make_alpha_type)));
            if ( IncludeTakeAlphaFactor()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_take_alpha_factor);
            }
            if ( IncludeMakeAlphaFactor()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_make_alpha_factor);
            }
            if ( IncludeTakeProbability()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,169,m_take_probability);
            }
            if ( IncludeMakeProbability()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,172,m_make_probability);
            }
            if ( IncludeTakeSurfPrcOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,175,m_take_surf_prc_offset);
            }
            if ( IncludeTakeSurfVolOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_take_surf_vol_offset);
            }
            if ( IncludeTakeSurfWidthOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,181,m_take_surf_width_offset);
            }
            if ( IncludeMakeSurfPrcOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,184,m_make_surf_prc_offset);
            }
            if ( IncludeMakeSurfVolOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,187,m_make_surf_vol_offset);
            }
            if ( IncludeMakeSurfWidthOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,190,m_make_surf_width_offset);
            }
            if ( IncludeOrderRefEventMult()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,193,m_order_ref_event_mult);
            }
            if ( IncludeOrderRefEventDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 196, m_order_ref_event_dttm);
            }
            if ( IncludeExchMask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,199,m_exch_mask);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,401,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UPrcCxl>(m_cxl_uprc_range)));
            if ( IncludeMinUbid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,402,m_min_ubid);
            }
            if ( IncludeMaxUask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,403,m_max_uask);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,404,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MinMaxType>(m_min_max_type)));
            if ( IncludeMinOptionPx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,405,m_min_option_px);
            }
            if ( IncludeStartDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 205, m_start_dttm);
            }
            if ( IncludeActiveDuration()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,406,m_active_duration);
            }
            if ( IncludeProgressExposeTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,214,m_progress_expose_time);
            }
            if ( IncludeExpDayWtVegaOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,241,m_exp_day_wt_vega_offset);
            }
            if ( IncludeMaxExpDayWtVegaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,235,m_max_exp_day_wt_vega_ln);
            }
            if ( IncludeMaxExpDayWtVegaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,238,m_max_exp_day_wt_vega_sh);
            }
            if ( IncludeMaxExpDayRmetric6Ln()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,271,m_max_exp_day_rmetric6_ln);
            }
            if ( IncludeMaxExpDayRmetric6Sh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,274,m_max_exp_day_rmetric6_sh);
            }
            if ( IncludeSymDayDdeltaOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,268,m_sym_day_ddelta_offset);
            }
            if ( IncludeMaxSymDayDdeltaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,262,m_max_sym_day_ddelta_ln);
            }
            if ( IncludeMaxSymDayDdeltaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,265,m_max_sym_day_ddelta_sh);
            }
            if ( IncludeSymDayVegaOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,250,m_sym_day_vega_offset);
            }
            if ( IncludeMaxSymDayVegaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,244,m_max_sym_day_vega_ln);
            }
            if ( IncludeMaxSymDayVegaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,247,m_max_sym_day_vega_sh);
            }
            if ( IncludeSymDayWtVegaOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,259,m_sym_day_wt_vega_offset);
            }
            if ( IncludeMaxSymDayWtVegaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,253,m_max_sym_day_wt_vega_ln);
            }
            if ( IncludeMaxSymDayWtVegaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,256,m_max_sym_day_wt_vega_sh);
            }
            if ( IncludeMaxSymDayRmetric7Ln()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,280,m_max_sym_day_rmetric7_ln);
            }
            if ( IncludeMaxSymDayRmetric7Sh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,283,m_max_sym_day_rmetric7_sh);
            }
            if ( IncludeMaxGrpDayDdeltaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,289,m_max_grp_day_ddelta_ln);
            }
            if ( IncludeMaxGrpDayDdeltaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,292,m_max_grp_day_ddelta_sh);
            }
            if ( IncludeMaxGrpDayVegaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,298,m_max_grp_day_vega_ln);
            }
            if ( IncludeMaxGrpDayVegaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,301,m_max_grp_day_vega_sh);
            }
            if ( IncludeMaxGrpDayVegaAbs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,304,m_max_grp_day_vega_abs);
            }
            if ( IncludeGrpDayVegaRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,307,m_grp_day_vega_ratio);
            }
            if ( IncludeMaxGrpDayContractsLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,358,m_max_grp_day_contracts_ln);
            }
            if ( IncludeMaxGrpDayContractsSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,361,m_max_grp_day_contracts_sh);
            }
            if ( IncludeMaxGrpDayContractsAbs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,364,m_max_grp_day_contracts_abs);
            }
            if ( IncludeMaxGrpDayRmetric1Ln()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,322,m_max_grp_day_rmetric1_ln);
            }
            if ( IncludeMaxGrpDayRmetric1Sh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,325,m_max_grp_day_rmetric1_sh);
            }
            if ( IncludeMaxGrpDayRmetric1Abs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,328,m_max_grp_day_rmetric1_abs);
            }
            if ( IncludeGrpDayRmetric1Ratio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,331,m_grp_day_rmetric1_ratio);
            }
            if ( IncludeMaxGrpDayRmetric2Ln()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,334,m_max_grp_day_rmetric2_ln);
            }
            if ( IncludeMaxGrpDayRmetric2Sh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,337,m_max_grp_day_rmetric2_sh);
            }
            if ( IncludeMaxGrpDayRmetric3Ln()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,340,m_max_grp_day_rmetric3_ln);
            }
            if ( IncludeMaxGrpDayRmetric3Sh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,343,m_max_grp_day_rmetric3_sh);
            }
            if ( IncludeMaxGrpDayRmetric4Ln()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,346,m_max_grp_day_rmetric4_ln);
            }
            if ( IncludeMaxGrpDayRmetric4Sh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,349,m_max_grp_day_rmetric4_sh);
            }
            if ( IncludeMaxGrpDayRmetric5Ln()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,352,m_max_grp_day_rmetric5_ln);
            }
            if ( IncludeMaxGrpDayRmetric5Sh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,355,m_max_grp_day_rmetric5_sh);
            }
            if ( IncludeOrderRefRmetric1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,408,m_order_ref_rmetric1);
            }
            if ( IncludeOrderRefRmetric2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,409,m_order_ref_rmetric2);
            }
            if ( IncludeOrderRefRmetric3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,410,m_order_ref_rmetric3);
            }
            if ( IncludeOrderRefRmetric4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,411,m_order_ref_rmetric4);
            }
            if ( IncludeOrderRefRmetric5()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,412,m_order_ref_rmetric5);
            }
            if ( IncludeOrderRefRmetric6()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,413,m_order_ref_rmetric6);
            }
            if ( IncludeOrderRefRmetric7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,414,m_order_ref_rmetric7);
            }
            if ( IncludeSymEmaCxlDdeltaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,367,m_sym_ema_cxl_ddelta_ln);
            }
            if ( IncludeSymEmaCxlDdeltaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,370,m_sym_ema_cxl_ddelta_sh);
            }
            if ( IncludeSymEmaCxlWtVegaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,373,m_sym_ema_cxl_wt_vega_ln);
            }
            if ( IncludeSymEmaCxlWtVegaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,376,m_sym_ema_cxl_wt_vega_sh);
            }
            if ( IncludeTheoVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,379,m_theo_vol);
            }
            if ( IncludeClArriveMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,382,m_cl_arrive_mark);
            }
            if ( IncludeUserData1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,385,static_cast<string>(m_user_data1));
            }
            if ( IncludeUserData2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,388,static_cast<string>(m_user_data2));
            }
            if ( IncludeExecBrkrCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,407,static_cast<string>(m_exec_brkr_code));
            }
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,394,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,397,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 400, m_timestamp);
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
                    case 106: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_order_active_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_add_cum_fill_quantity = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_order_limit_type = static_cast<spiderrock::protobuf::api::SpdrLimitType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_take_limit_class = static_cast<spiderrock::protobuf::api::SpdrLimitClass>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_make_limit_class = static_cast<spiderrock::protobuf::api::SpdrLimitClass>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_order_prc_limit = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_order_ref_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_ref_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_ref_gamma = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_vol_limit = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rate_override = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sdiv_override = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_ddiv_override = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 145: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_override_code = static_cast<spiderrock::protobuf::api::OverrideCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_order_prc_offset = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 151: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_state_model = static_cast<spiderrock::protobuf::api::StateModel>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 154: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_u_state_model = static_cast<spiderrock::protobuf::api::StateModel>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 157: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_take_alpha_type = static_cast<spiderrock::protobuf::api::AlphaType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 160: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_make_alpha_type = static_cast<spiderrock::protobuf::api::AlphaType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_take_alpha_factor = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_make_alpha_factor = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_take_probability = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_make_probability = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_take_surf_prc_offset = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_take_surf_vol_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_take_surf_width_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_make_surf_prc_offset = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_make_surf_vol_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_make_surf_width_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_ref_event_mult = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_order_ref_event_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_exch_mask = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 401: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cxl_uprc_range = static_cast<spiderrock::protobuf::api::UPrcCxl>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 402: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_ubid = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 403: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_uask = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 404: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_min_max_type = static_cast<spiderrock::protobuf::api::MinMaxType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 405: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_option_px = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_start_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 406: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_active_duration = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_progress_expose_time = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 241: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_exp_day_wt_vega_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_exp_day_wt_vega_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 238: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_exp_day_wt_vega_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 271: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_exp_day_rmetric6_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 274: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_exp_day_rmetric6_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 268: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sym_day_ddelta_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 262: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_sym_day_ddelta_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 265: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_sym_day_ddelta_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 250: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sym_day_vega_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 244: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_sym_day_vega_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 247: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_sym_day_vega_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 259: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sym_day_wt_vega_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 253: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_sym_day_wt_vega_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 256: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_sym_day_wt_vega_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 280: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_sym_day_rmetric7_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 283: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_sym_day_rmetric7_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 289: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_ddelta_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 292: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_ddelta_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 298: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_vega_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 301: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_vega_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 304: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_vega_abs = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 307: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_grp_day_vega_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 358: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_grp_day_contracts_ln = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 361: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_grp_day_contracts_sh = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 364: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_grp_day_contracts_abs = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 322: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric1_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 325: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric1_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 328: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric1_abs = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 331: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_grp_day_rmetric1_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 334: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric2_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 337: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric2_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 340: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric3_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 343: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric3_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 346: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric4_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 349: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric4_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 352: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric5_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 355: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric5_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 408: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_ref_rmetric1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 409: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_ref_rmetric2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 410: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_ref_rmetric3 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 411: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_ref_rmetric4 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 412: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_ref_rmetric5 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 413: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_ref_rmetric6 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 414: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_ref_rmetric7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 367: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sym_ema_cxl_ddelta_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 370: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sym_ema_cxl_ddelta_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 373: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sym_ema_cxl_wt_vega_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 376: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sym_ema_cxl_wt_vega_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 379: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_theo_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 382: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cl_arrive_mark = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 385: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_data1 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 388: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_data2 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 407: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_brkr_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 394: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 397: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 400: {
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

    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::_meta>() const { return SpdrParentLimit::_meta{ m__meta}; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::pkey>() const { return SpdrParentLimit::pkey{ m_pkey}; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::sys_environment>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_sys_environment)); }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::run_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>( m_run_status)); }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::order_active_size>() const { return m_order_active_size; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::add_cum_fill_quantity>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_add_cum_fill_quantity)); }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::order_limit_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitType>( m_order_limit_type)); }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::take_limit_class>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>( m_take_limit_class)); }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::make_limit_class>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>( m_make_limit_class)); }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::order_prc_limit>() const { return m_order_prc_limit; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::order_ref_uprc>() const { return m_order_ref_uprc; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::order_ref_delta>() const { return m_order_ref_delta; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::order_ref_gamma>() const { return m_order_ref_gamma; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::order_vol_limit>() const { return m_order_vol_limit; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::rate_override>() const { return m_rate_override; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::sdiv_override>() const { return m_sdiv_override; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::ddiv_override>() const { return m_ddiv_override; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::override_code>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OverrideCode>( m_override_code)); }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::order_prc_offset>() const { return m_order_prc_offset; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::state_model>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StateModel>( m_state_model)); }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::u_state_model>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StateModel>( m_u_state_model)); }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::take_alpha_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>( m_take_alpha_type)); }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::make_alpha_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>( m_make_alpha_type)); }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::take_alpha_factor>() const { return m_take_alpha_factor; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::make_alpha_factor>() const { return m_make_alpha_factor; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::take_probability>() const { return m_take_probability; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::make_probability>() const { return m_make_probability; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::take_surf_prc_offset>() const { return m_take_surf_prc_offset; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::take_surf_vol_offset>() const { return m_take_surf_vol_offset; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::take_surf_width_offset>() const { return m_take_surf_width_offset; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::make_surf_prc_offset>() const { return m_make_surf_prc_offset; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::make_surf_vol_offset>() const { return m_make_surf_vol_offset; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::make_surf_width_offset>() const { return m_make_surf_width_offset; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::order_ref_event_mult>() const { return m_order_ref_event_mult; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::order_ref_event_dttm>() const { return m_order_ref_event_dttm; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::exch_mask>() const { return m_exch_mask; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::cxl_uprc_range>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UPrcCxl>( m_cxl_uprc_range)); }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::min_ubid>() const { return m_min_ubid; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_uask>() const { return m_max_uask; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::min_max_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MinMaxType>( m_min_max_type)); }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::min_option_px>() const { return m_min_option_px; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::start_dttm>() const { return m_start_dttm; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::active_duration>() const { return m_active_duration; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::progress_expose_time>() const { return m_progress_expose_time; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::exp_day_wt_vega_offset>() const { return m_exp_day_wt_vega_offset; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_exp_day_wt_vega_ln>() const { return m_max_exp_day_wt_vega_ln; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_exp_day_wt_vega_sh>() const { return m_max_exp_day_wt_vega_sh; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_exp_day_rmetric6_ln>() const { return m_max_exp_day_rmetric6_ln; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_exp_day_rmetric6_sh>() const { return m_max_exp_day_rmetric6_sh; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::sym_day_ddelta_offset>() const { return m_sym_day_ddelta_offset; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_sym_day_ddelta_ln>() const { return m_max_sym_day_ddelta_ln; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_sym_day_ddelta_sh>() const { return m_max_sym_day_ddelta_sh; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::sym_day_vega_offset>() const { return m_sym_day_vega_offset; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_sym_day_vega_ln>() const { return m_max_sym_day_vega_ln; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_sym_day_vega_sh>() const { return m_max_sym_day_vega_sh; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::sym_day_wt_vega_offset>() const { return m_sym_day_wt_vega_offset; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_sym_day_wt_vega_ln>() const { return m_max_sym_day_wt_vega_ln; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_sym_day_wt_vega_sh>() const { return m_max_sym_day_wt_vega_sh; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_sym_day_rmetric7_ln>() const { return m_max_sym_day_rmetric7_ln; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_sym_day_rmetric7_sh>() const { return m_max_sym_day_rmetric7_sh; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_grp_day_ddelta_ln>() const { return m_max_grp_day_ddelta_ln; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_grp_day_ddelta_sh>() const { return m_max_grp_day_ddelta_sh; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_grp_day_vega_ln>() const { return m_max_grp_day_vega_ln; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_grp_day_vega_sh>() const { return m_max_grp_day_vega_sh; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_grp_day_vega_abs>() const { return m_max_grp_day_vega_abs; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::grp_day_vega_ratio>() const { return m_grp_day_vega_ratio; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_grp_day_contracts_ln>() const { return m_max_grp_day_contracts_ln; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_grp_day_contracts_sh>() const { return m_max_grp_day_contracts_sh; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_grp_day_contracts_abs>() const { return m_max_grp_day_contracts_abs; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_grp_day_rmetric1_ln>() const { return m_max_grp_day_rmetric1_ln; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_grp_day_rmetric1_sh>() const { return m_max_grp_day_rmetric1_sh; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_grp_day_rmetric1_abs>() const { return m_max_grp_day_rmetric1_abs; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::grp_day_rmetric1_ratio>() const { return m_grp_day_rmetric1_ratio; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_grp_day_rmetric2_ln>() const { return m_max_grp_day_rmetric2_ln; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_grp_day_rmetric2_sh>() const { return m_max_grp_day_rmetric2_sh; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_grp_day_rmetric3_ln>() const { return m_max_grp_day_rmetric3_ln; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_grp_day_rmetric3_sh>() const { return m_max_grp_day_rmetric3_sh; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_grp_day_rmetric4_ln>() const { return m_max_grp_day_rmetric4_ln; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_grp_day_rmetric4_sh>() const { return m_max_grp_day_rmetric4_sh; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_grp_day_rmetric5_ln>() const { return m_max_grp_day_rmetric5_ln; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::max_grp_day_rmetric5_sh>() const { return m_max_grp_day_rmetric5_sh; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::order_ref_rmetric1>() const { return m_order_ref_rmetric1; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::order_ref_rmetric2>() const { return m_order_ref_rmetric2; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::order_ref_rmetric3>() const { return m_order_ref_rmetric3; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::order_ref_rmetric4>() const { return m_order_ref_rmetric4; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::order_ref_rmetric5>() const { return m_order_ref_rmetric5; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::order_ref_rmetric6>() const { return m_order_ref_rmetric6; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::order_ref_rmetric7>() const { return m_order_ref_rmetric7; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::sym_ema_cxl_ddelta_ln>() const { return m_sym_ema_cxl_ddelta_ln; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::sym_ema_cxl_ddelta_sh>() const { return m_sym_ema_cxl_ddelta_sh; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::sym_ema_cxl_wt_vega_ln>() const { return m_sym_ema_cxl_wt_vega_ln; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::sym_ema_cxl_wt_vega_sh>() const { return m_sym_ema_cxl_wt_vega_sh; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::theo_vol>() const { return m_theo_vol; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::cl_arrive_mark>() const { return m_cl_arrive_mark; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::user_data1>() const { return m_user_data1; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::user_data2>() const { return m_user_data2; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::exec_brkr_code>() const { return m_exec_brkr_code; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::modified_by>() const { return m_modified_by; }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto SpdrParentLimit::get<SpdrParentLimit::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrParentLimit_PKey::get<SpdrParentLimit_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto SpdrParentLimit_PKey::get<SpdrParentLimit_PKey::sec_key>() const { return SpdrParentLimit_PKey::sec_key{m_sec_key}; }
    template<> inline const auto SpdrParentLimit_PKey::get<SpdrParentLimit_PKey::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type));}
    template<> inline const auto SpdrParentLimit_PKey::get<SpdrParentLimit_PKey::spdr_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source));}
    template<> inline const auto SpdrParentLimit_PKey::get<SpdrParentLimit_PKey::order_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side));}
    template<> inline const auto SpdrParentLimit_PKey::get<SpdrParentLimit_PKey::grouping_code>() const { return m_grouping_code; }
    template<> inline const auto SpdrParentLimit_PKey::get<SpdrParentLimit_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrParentLimit_PKey& m) {
        o << "\"accnt\":\"" << m.get<SpdrParentLimit_PKey::accnt>() << "\"";
        o << ",\"sec_key\":{" << m.get<SpdrParentLimit_PKey::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<SpdrParentLimit_PKey::sec_type>();
        o << ",\"spdr_source\":" << (int64_t)m.get<SpdrParentLimit_PKey::spdr_source>();
        o << ",\"order_side\":" << (int64_t)m.get<SpdrParentLimit_PKey::order_side>();
        o << ",\"grouping_code\":" << m.get<SpdrParentLimit_PKey::grouping_code>();
        o << ",\"client_firm\":\"" << m.get<SpdrParentLimit_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrParentLimit& m) {
        o << "\"_meta\":{" << m.get<SpdrParentLimit::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrParentLimit::pkey>() << "}";
        o << ",\"sys_environment\":" << (int64_t)m.get<SpdrParentLimit::sys_environment>();
        o << ",\"run_status\":" << (int64_t)m.get<SpdrParentLimit::run_status>();
        o << ",\"order_active_size\":" << m.get<SpdrParentLimit::order_active_size>();
        o << ",\"add_cum_fill_quantity\":" << (int64_t)m.get<SpdrParentLimit::add_cum_fill_quantity>();
        o << ",\"order_limit_type\":" << (int64_t)m.get<SpdrParentLimit::order_limit_type>();
        o << ",\"take_limit_class\":" << (int64_t)m.get<SpdrParentLimit::take_limit_class>();
        o << ",\"make_limit_class\":" << (int64_t)m.get<SpdrParentLimit::make_limit_class>();
        o << ",\"order_prc_limit\":" << m.get<SpdrParentLimit::order_prc_limit>();
        o << ",\"order_ref_uprc\":" << m.get<SpdrParentLimit::order_ref_uprc>();
        o << ",\"order_ref_delta\":" << m.get<SpdrParentLimit::order_ref_delta>();
        o << ",\"order_ref_gamma\":" << m.get<SpdrParentLimit::order_ref_gamma>();
        o << ",\"order_vol_limit\":" << m.get<SpdrParentLimit::order_vol_limit>();
        o << ",\"rate_override\":" << m.get<SpdrParentLimit::rate_override>();
        o << ",\"sdiv_override\":" << m.get<SpdrParentLimit::sdiv_override>();
        o << ",\"ddiv_override\":\"" << m.get<SpdrParentLimit::ddiv_override>() << "\"";
        o << ",\"override_code\":" << (int64_t)m.get<SpdrParentLimit::override_code>();
        o << ",\"order_prc_offset\":" << m.get<SpdrParentLimit::order_prc_offset>();
        o << ",\"state_model\":" << (int64_t)m.get<SpdrParentLimit::state_model>();
        o << ",\"u_state_model\":" << (int64_t)m.get<SpdrParentLimit::u_state_model>();
        o << ",\"take_alpha_type\":" << (int64_t)m.get<SpdrParentLimit::take_alpha_type>();
        o << ",\"make_alpha_type\":" << (int64_t)m.get<SpdrParentLimit::make_alpha_type>();
        o << ",\"take_alpha_factor\":" << m.get<SpdrParentLimit::take_alpha_factor>();
        o << ",\"make_alpha_factor\":" << m.get<SpdrParentLimit::make_alpha_factor>();
        o << ",\"take_probability\":" << m.get<SpdrParentLimit::take_probability>();
        o << ",\"make_probability\":" << m.get<SpdrParentLimit::make_probability>();
        o << ",\"take_surf_prc_offset\":" << m.get<SpdrParentLimit::take_surf_prc_offset>();
        o << ",\"take_surf_vol_offset\":" << m.get<SpdrParentLimit::take_surf_vol_offset>();
        o << ",\"take_surf_width_offset\":" << m.get<SpdrParentLimit::take_surf_width_offset>();
        o << ",\"make_surf_prc_offset\":" << m.get<SpdrParentLimit::make_surf_prc_offset>();
        o << ",\"make_surf_vol_offset\":" << m.get<SpdrParentLimit::make_surf_vol_offset>();
        o << ",\"make_surf_width_offset\":" << m.get<SpdrParentLimit::make_surf_width_offset>();
        o << ",\"order_ref_event_mult\":" << m.get<SpdrParentLimit::order_ref_event_mult>();
        {
            std::time_t tt = m.get<SpdrParentLimit::order_ref_event_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"order_ref_event_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"exch_mask\":" << m.get<SpdrParentLimit::exch_mask>();
        o << ",\"cxl_uprc_range\":" << (int64_t)m.get<SpdrParentLimit::cxl_uprc_range>();
        o << ",\"min_ubid\":" << m.get<SpdrParentLimit::min_ubid>();
        o << ",\"max_uask\":" << m.get<SpdrParentLimit::max_uask>();
        o << ",\"min_max_type\":" << (int64_t)m.get<SpdrParentLimit::min_max_type>();
        o << ",\"min_option_px\":" << m.get<SpdrParentLimit::min_option_px>();
        {
            std::time_t tt = m.get<SpdrParentLimit::start_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"start_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"active_duration\":" << m.get<SpdrParentLimit::active_duration>();
        o << ",\"progress_expose_time\":" << m.get<SpdrParentLimit::progress_expose_time>();
        o << ",\"exp_day_wt_vega_offset\":" << m.get<SpdrParentLimit::exp_day_wt_vega_offset>();
        o << ",\"max_exp_day_wt_vega_ln\":" << m.get<SpdrParentLimit::max_exp_day_wt_vega_ln>();
        o << ",\"max_exp_day_wt_vega_sh\":" << m.get<SpdrParentLimit::max_exp_day_wt_vega_sh>();
        o << ",\"max_exp_day_rmetric6_ln\":" << m.get<SpdrParentLimit::max_exp_day_rmetric6_ln>();
        o << ",\"max_exp_day_rmetric6_sh\":" << m.get<SpdrParentLimit::max_exp_day_rmetric6_sh>();
        o << ",\"sym_day_ddelta_offset\":" << m.get<SpdrParentLimit::sym_day_ddelta_offset>();
        o << ",\"max_sym_day_ddelta_ln\":" << m.get<SpdrParentLimit::max_sym_day_ddelta_ln>();
        o << ",\"max_sym_day_ddelta_sh\":" << m.get<SpdrParentLimit::max_sym_day_ddelta_sh>();
        o << ",\"sym_day_vega_offset\":" << m.get<SpdrParentLimit::sym_day_vega_offset>();
        o << ",\"max_sym_day_vega_ln\":" << m.get<SpdrParentLimit::max_sym_day_vega_ln>();
        o << ",\"max_sym_day_vega_sh\":" << m.get<SpdrParentLimit::max_sym_day_vega_sh>();
        o << ",\"sym_day_wt_vega_offset\":" << m.get<SpdrParentLimit::sym_day_wt_vega_offset>();
        o << ",\"max_sym_day_wt_vega_ln\":" << m.get<SpdrParentLimit::max_sym_day_wt_vega_ln>();
        o << ",\"max_sym_day_wt_vega_sh\":" << m.get<SpdrParentLimit::max_sym_day_wt_vega_sh>();
        o << ",\"max_sym_day_rmetric7_ln\":" << m.get<SpdrParentLimit::max_sym_day_rmetric7_ln>();
        o << ",\"max_sym_day_rmetric7_sh\":" << m.get<SpdrParentLimit::max_sym_day_rmetric7_sh>();
        o << ",\"max_grp_day_ddelta_ln\":" << m.get<SpdrParentLimit::max_grp_day_ddelta_ln>();
        o << ",\"max_grp_day_ddelta_sh\":" << m.get<SpdrParentLimit::max_grp_day_ddelta_sh>();
        o << ",\"max_grp_day_vega_ln\":" << m.get<SpdrParentLimit::max_grp_day_vega_ln>();
        o << ",\"max_grp_day_vega_sh\":" << m.get<SpdrParentLimit::max_grp_day_vega_sh>();
        o << ",\"max_grp_day_vega_abs\":" << m.get<SpdrParentLimit::max_grp_day_vega_abs>();
        o << ",\"grp_day_vega_ratio\":" << m.get<SpdrParentLimit::grp_day_vega_ratio>();
        o << ",\"max_grp_day_contracts_ln\":" << m.get<SpdrParentLimit::max_grp_day_contracts_ln>();
        o << ",\"max_grp_day_contracts_sh\":" << m.get<SpdrParentLimit::max_grp_day_contracts_sh>();
        o << ",\"max_grp_day_contracts_abs\":" << m.get<SpdrParentLimit::max_grp_day_contracts_abs>();
        o << ",\"max_grp_day_rmetric1_ln\":" << m.get<SpdrParentLimit::max_grp_day_rmetric1_ln>();
        o << ",\"max_grp_day_rmetric1_sh\":" << m.get<SpdrParentLimit::max_grp_day_rmetric1_sh>();
        o << ",\"max_grp_day_rmetric1_abs\":" << m.get<SpdrParentLimit::max_grp_day_rmetric1_abs>();
        o << ",\"grp_day_rmetric1_ratio\":" << m.get<SpdrParentLimit::grp_day_rmetric1_ratio>();
        o << ",\"max_grp_day_rmetric2_ln\":" << m.get<SpdrParentLimit::max_grp_day_rmetric2_ln>();
        o << ",\"max_grp_day_rmetric2_sh\":" << m.get<SpdrParentLimit::max_grp_day_rmetric2_sh>();
        o << ",\"max_grp_day_rmetric3_ln\":" << m.get<SpdrParentLimit::max_grp_day_rmetric3_ln>();
        o << ",\"max_grp_day_rmetric3_sh\":" << m.get<SpdrParentLimit::max_grp_day_rmetric3_sh>();
        o << ",\"max_grp_day_rmetric4_ln\":" << m.get<SpdrParentLimit::max_grp_day_rmetric4_ln>();
        o << ",\"max_grp_day_rmetric4_sh\":" << m.get<SpdrParentLimit::max_grp_day_rmetric4_sh>();
        o << ",\"max_grp_day_rmetric5_ln\":" << m.get<SpdrParentLimit::max_grp_day_rmetric5_ln>();
        o << ",\"max_grp_day_rmetric5_sh\":" << m.get<SpdrParentLimit::max_grp_day_rmetric5_sh>();
        o << ",\"order_ref_rmetric1\":" << m.get<SpdrParentLimit::order_ref_rmetric1>();
        o << ",\"order_ref_rmetric2\":" << m.get<SpdrParentLimit::order_ref_rmetric2>();
        o << ",\"order_ref_rmetric3\":" << m.get<SpdrParentLimit::order_ref_rmetric3>();
        o << ",\"order_ref_rmetric4\":" << m.get<SpdrParentLimit::order_ref_rmetric4>();
        o << ",\"order_ref_rmetric5\":" << m.get<SpdrParentLimit::order_ref_rmetric5>();
        o << ",\"order_ref_rmetric6\":" << m.get<SpdrParentLimit::order_ref_rmetric6>();
        o << ",\"order_ref_rmetric7\":" << m.get<SpdrParentLimit::order_ref_rmetric7>();
        o << ",\"sym_ema_cxl_ddelta_ln\":" << m.get<SpdrParentLimit::sym_ema_cxl_ddelta_ln>();
        o << ",\"sym_ema_cxl_ddelta_sh\":" << m.get<SpdrParentLimit::sym_ema_cxl_ddelta_sh>();
        o << ",\"sym_ema_cxl_wt_vega_ln\":" << m.get<SpdrParentLimit::sym_ema_cxl_wt_vega_ln>();
        o << ",\"sym_ema_cxl_wt_vega_sh\":" << m.get<SpdrParentLimit::sym_ema_cxl_wt_vega_sh>();
        o << ",\"theo_vol\":" << m.get<SpdrParentLimit::theo_vol>();
        o << ",\"cl_arrive_mark\":" << m.get<SpdrParentLimit::cl_arrive_mark>();
        o << ",\"user_data1\":\"" << m.get<SpdrParentLimit::user_data1>() << "\"";
        o << ",\"user_data2\":\"" << m.get<SpdrParentLimit::user_data2>() << "\"";
        o << ",\"exec_brkr_code\":\"" << m.get<SpdrParentLimit::exec_brkr_code>() << "\"";
        o << ",\"modified_by\":\"" << m.get<SpdrParentLimit::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<SpdrParentLimit::modified_in>();
        {
            std::time_t tt = m.get<SpdrParentLimit::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}