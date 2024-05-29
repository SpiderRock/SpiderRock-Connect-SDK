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

    #ifndef _syn_spot__GUARD__
    #define _syn_spot__GUARD__
    DECL_STRONG_TYPE(syn_spot, double);
    #endif//_syn_spot__GUARD__

    #ifndef _h_emove__GUARD__
    #define _h_emove__GUARD__
    DECL_STRONG_TYPE(h_emove, float);
    #endif//_h_emove__GUARD__

    #ifndef _h_emove_num__GUARD__
    #define _h_emove_num__GUARD__
    DECL_STRONG_TYPE(h_emove_num, int32);
    #endif//_h_emove_num__GUARD__

    #ifndef _h_emove_avg__GUARD__
    #define _h_emove_avg__GUARD__
    DECL_STRONG_TYPE(h_emove_avg, float);
    #endif//_h_emove_avg__GUARD__

    #ifndef _h_emove_std__GUARD__
    #define _h_emove_std__GUARD__
    DECL_STRONG_TYPE(h_emove_std, float);
    #endif//_h_emove_std__GUARD__

    #ifndef _h_emove_min__GUARD__
    #define _h_emove_min__GUARD__
    DECL_STRONG_TYPE(h_emove_min, float);
    #endif//_h_emove_min__GUARD__

    #ifndef _h_emove_max__GUARD__
    #define _h_emove_max__GUARD__
    DECL_STRONG_TYPE(h_emove_max, float);
    #endif//_h_emove_max__GUARD__

    #ifndef _i_emove__GUARD__
    #define _i_emove__GUARD__
    DECL_STRONG_TYPE(i_emove, float);
    #endif//_i_emove__GUARD__

    #ifndef _i_efit_code__GUARD__
    #define _i_efit_code__GUARD__
    DECL_STRONG_TYPE(i_efit_code, spiderrock::protobuf::api::EFitCode);
    #endif//_i_efit_code__GUARD__

    #ifndef _i_efit_error__GUARD__
    #define _i_efit_error__GUARD__
    DECL_STRONG_TYPE(i_efit_error, float);
    #endif//_i_efit_error__GUARD__

    #ifndef _expiry_count__GUARD__
    #define _expiry_count__GUARD__
    DECL_STRONG_TYPE(expiry_count, int32);
    #endif//_expiry_count__GUARD__

    #ifndef _i_emove_avg__GUARD__
    #define _i_emove_avg__GUARD__
    DECL_STRONG_TYPE(i_emove_avg, float);
    #endif//_i_emove_avg__GUARD__

    #ifndef _i_emove_std__GUARD__
    #define _i_emove_std__GUARD__
    DECL_STRONG_TYPE(i_emove_std, float);
    #endif//_i_emove_std__GUARD__

    #ifndef _i_emove_min__GUARD__
    #define _i_emove_min__GUARD__
    DECL_STRONG_TYPE(i_emove_min, float);
    #endif//_i_emove_min__GUARD__

    #ifndef _i_emove_max__GUARD__
    #define _i_emove_max__GUARD__
    DECL_STRONG_TYPE(i_emove_max, float);
    #endif//_i_emove_max__GUARD__

    #ifndef _i_emove_cnt__GUARD__
    #define _i_emove_cnt__GUARD__
    DECL_STRONG_TYPE(i_emove_cnt, int32);
    #endif//_i_emove_cnt__GUARD__

    #ifndef _e_move_exp_adj1__GUARD__
    #define _e_move_exp_adj1__GUARD__
    DECL_STRONG_TYPE(e_move_exp_adj1, int32);
    #endif//_e_move_exp_adj1__GUARD__

    #ifndef _e_move_yrs_adj1__GUARD__
    #define _e_move_yrs_adj1__GUARD__
    DECL_STRONG_TYPE(e_move_yrs_adj1, float);
    #endif//_e_move_yrs_adj1__GUARD__

    #ifndef _e_move_years1__GUARD__
    #define _e_move_years1__GUARD__
    DECL_STRONG_TYPE(e_move_years1, float);
    #endif//_e_move_years1__GUARD__

    #ifndef _e_move_ekey1__GUARD__
    #define _e_move_ekey1__GUARD__
    DECL_STRONG_TYPE(e_move_ekey1, ExpiryKey);
    #endif//_e_move_ekey1__GUARD__

    #ifndef _e_move_exp_adj2__GUARD__
    #define _e_move_exp_adj2__GUARD__
    DECL_STRONG_TYPE(e_move_exp_adj2, int32);
    #endif//_e_move_exp_adj2__GUARD__

    #ifndef _e_move_yrs_adj2__GUARD__
    #define _e_move_yrs_adj2__GUARD__
    DECL_STRONG_TYPE(e_move_yrs_adj2, float);
    #endif//_e_move_yrs_adj2__GUARD__

    #ifndef _e_move_years2__GUARD__
    #define _e_move_years2__GUARD__
    DECL_STRONG_TYPE(e_move_years2, float);
    #endif//_e_move_years2__GUARD__

    #ifndef _e_move_ekey2__GUARD__
    #define _e_move_ekey2__GUARD__
    DECL_STRONG_TYPE(e_move_ekey2, ExpiryKey);
    #endif//_e_move_ekey2__GUARD__

    #ifndef _atm_cen_i_st__GUARD__
    #define _atm_cen_i_st__GUARD__
    DECL_STRONG_TYPE(atm_cen_i_st, float);
    #endif//_atm_cen_i_st__GUARD__

    #ifndef _atm_cen_i_lt__GUARD__
    #define _atm_cen_i_lt__GUARD__
    DECL_STRONG_TYPE(atm_cen_i_lt, float);
    #endif//_atm_cen_i_lt__GUARD__

    #ifndef _atm_cen_i_decay__GUARD__
    #define _atm_cen_i_decay__GUARD__
    DECL_STRONG_TYPE(atm_cen_i_decay, float);
    #endif//_atm_cen_i_decay__GUARD__

    #ifndef _atm_cen_i_5d__GUARD__
    #define _atm_cen_i_5d__GUARD__
    DECL_STRONG_TYPE(atm_cen_i_5d, float);
    #endif//_atm_cen_i_5d__GUARD__

    #ifndef _atm_cen_i_10d__GUARD__
    #define _atm_cen_i_10d__GUARD__
    DECL_STRONG_TYPE(atm_cen_i_10d, float);
    #endif//_atm_cen_i_10d__GUARD__

    #ifndef _atm_cen_i_21d__GUARD__
    #define _atm_cen_i_21d__GUARD__
    DECL_STRONG_TYPE(atm_cen_i_21d, float);
    #endif//_atm_cen_i_21d__GUARD__

    #ifndef _atm_cen_i_42d__GUARD__
    #define _atm_cen_i_42d__GUARD__
    DECL_STRONG_TYPE(atm_cen_i_42d, float);
    #endif//_atm_cen_i_42d__GUARD__

    #ifndef _atm_cen_i_63d__GUARD__
    #define _atm_cen_i_63d__GUARD__
    DECL_STRONG_TYPE(atm_cen_i_63d, float);
    #endif//_atm_cen_i_63d__GUARD__

    #ifndef _atm_cen_i_84d__GUARD__
    #define _atm_cen_i_84d__GUARD__
    DECL_STRONG_TYPE(atm_cen_i_84d, float);
    #endif//_atm_cen_i_84d__GUARD__

    #ifndef _atm_cen_i_105d__GUARD__
    #define _atm_cen_i_105d__GUARD__
    DECL_STRONG_TYPE(atm_cen_i_105d, float);
    #endif//_atm_cen_i_105d__GUARD__

    #ifndef _atm_cen_i_126d__GUARD__
    #define _atm_cen_i_126d__GUARD__
    DECL_STRONG_TYPE(atm_cen_i_126d, float);
    #endif//_atm_cen_i_126d__GUARD__

    #ifndef _atm_cen_i_189d__GUARD__
    #define _atm_cen_i_189d__GUARD__
    DECL_STRONG_TYPE(atm_cen_i_189d, float);
    #endif//_atm_cen_i_189d__GUARD__

    #ifndef _atm_cen_i_252d__GUARD__
    #define _atm_cen_i_252d__GUARD__
    DECL_STRONG_TYPE(atm_cen_i_252d, float);
    #endif//_atm_cen_i_252d__GUARD__

    #ifndef _atm_cen_i_378d__GUARD__
    #define _atm_cen_i_378d__GUARD__
    DECL_STRONG_TYPE(atm_cen_i_378d, float);
    #endif//_atm_cen_i_378d__GUARD__

    #ifndef _atm_cen_i_504d__GUARD__
    #define _atm_cen_i_504d__GUARD__
    DECL_STRONG_TYPE(atm_cen_i_504d, float);
    #endif//_atm_cen_i_504d__GUARD__

    #ifndef _atm_cen_h_st__GUARD__
    #define _atm_cen_h_st__GUARD__
    DECL_STRONG_TYPE(atm_cen_h_st, float);
    #endif//_atm_cen_h_st__GUARD__

    #ifndef _atm_cen_h_lt__GUARD__
    #define _atm_cen_h_lt__GUARD__
    DECL_STRONG_TYPE(atm_cen_h_lt, float);
    #endif//_atm_cen_h_lt__GUARD__

    #ifndef _atm_cen_h_decay__GUARD__
    #define _atm_cen_h_decay__GUARD__
    DECL_STRONG_TYPE(atm_cen_h_decay, float);
    #endif//_atm_cen_h_decay__GUARD__

    #ifndef _atm_cen_h_5d__GUARD__
    #define _atm_cen_h_5d__GUARD__
    DECL_STRONG_TYPE(atm_cen_h_5d, float);
    #endif//_atm_cen_h_5d__GUARD__

    #ifndef _atm_cen_h_10d__GUARD__
    #define _atm_cen_h_10d__GUARD__
    DECL_STRONG_TYPE(atm_cen_h_10d, float);
    #endif//_atm_cen_h_10d__GUARD__

    #ifndef _atm_cen_h_21d__GUARD__
    #define _atm_cen_h_21d__GUARD__
    DECL_STRONG_TYPE(atm_cen_h_21d, float);
    #endif//_atm_cen_h_21d__GUARD__

    #ifndef _atm_cen_h_42d__GUARD__
    #define _atm_cen_h_42d__GUARD__
    DECL_STRONG_TYPE(atm_cen_h_42d, float);
    #endif//_atm_cen_h_42d__GUARD__

    #ifndef _atm_cen_h_63d__GUARD__
    #define _atm_cen_h_63d__GUARD__
    DECL_STRONG_TYPE(atm_cen_h_63d, float);
    #endif//_atm_cen_h_63d__GUARD__

    #ifndef _atm_cen_h_84d__GUARD__
    #define _atm_cen_h_84d__GUARD__
    DECL_STRONG_TYPE(atm_cen_h_84d, float);
    #endif//_atm_cen_h_84d__GUARD__

    #ifndef _atm_cen_h_105d__GUARD__
    #define _atm_cen_h_105d__GUARD__
    DECL_STRONG_TYPE(atm_cen_h_105d, float);
    #endif//_atm_cen_h_105d__GUARD__

    #ifndef _atm_cen_h_126d__GUARD__
    #define _atm_cen_h_126d__GUARD__
    DECL_STRONG_TYPE(atm_cen_h_126d, float);
    #endif//_atm_cen_h_126d__GUARD__

    #ifndef _atm_cen_h_189d__GUARD__
    #define _atm_cen_h_189d__GUARD__
    DECL_STRONG_TYPE(atm_cen_h_189d, float);
    #endif//_atm_cen_h_189d__GUARD__

    #ifndef _atm_cen_h_252d__GUARD__
    #define _atm_cen_h_252d__GUARD__
    DECL_STRONG_TYPE(atm_cen_h_252d, float);
    #endif//_atm_cen_h_252d__GUARD__

    #ifndef _atm_cen_h_378d__GUARD__
    #define _atm_cen_h_378d__GUARD__
    DECL_STRONG_TYPE(atm_cen_h_378d, float);
    #endif//_atm_cen_h_378d__GUARD__

    #ifndef _atm_cen_h_504d__GUARD__
    #define _atm_cen_h_504d__GUARD__
    DECL_STRONG_TYPE(atm_cen_h_504d, float);
    #endif//_atm_cen_h_504d__GUARD__

    #ifndef _s_div_5d__GUARD__
    #define _s_div_5d__GUARD__
    DECL_STRONG_TYPE(s_div_5d, float);
    #endif//_s_div_5d__GUARD__

    #ifndef _s_div_10d__GUARD__
    #define _s_div_10d__GUARD__
    DECL_STRONG_TYPE(s_div_10d, float);
    #endif//_s_div_10d__GUARD__

    #ifndef _s_div_21d__GUARD__
    #define _s_div_21d__GUARD__
    DECL_STRONG_TYPE(s_div_21d, float);
    #endif//_s_div_21d__GUARD__

    #ifndef _s_div_42d__GUARD__
    #define _s_div_42d__GUARD__
    DECL_STRONG_TYPE(s_div_42d, float);
    #endif//_s_div_42d__GUARD__

    #ifndef _s_div_63d__GUARD__
    #define _s_div_63d__GUARD__
    DECL_STRONG_TYPE(s_div_63d, float);
    #endif//_s_div_63d__GUARD__

    #ifndef _s_div_84d__GUARD__
    #define _s_div_84d__GUARD__
    DECL_STRONG_TYPE(s_div_84d, float);
    #endif//_s_div_84d__GUARD__

    #ifndef _s_div_105d__GUARD__
    #define _s_div_105d__GUARD__
    DECL_STRONG_TYPE(s_div_105d, float);
    #endif//_s_div_105d__GUARD__

    #ifndef _s_div_126d__GUARD__
    #define _s_div_126d__GUARD__
    DECL_STRONG_TYPE(s_div_126d, float);
    #endif//_s_div_126d__GUARD__

    #ifndef _s_div_189d__GUARD__
    #define _s_div_189d__GUARD__
    DECL_STRONG_TYPE(s_div_189d, float);
    #endif//_s_div_189d__GUARD__

    #ifndef _s_div_252d__GUARD__
    #define _s_div_252d__GUARD__
    DECL_STRONG_TYPE(s_div_252d, float);
    #endif//_s_div_252d__GUARD__

    #ifndef _s_div_378d__GUARD__
    #define _s_div_378d__GUARD__
    DECL_STRONG_TYPE(s_div_378d, float);
    #endif//_s_div_378d__GUARD__

    #ifndef _s_div_504d__GUARD__
    #define _s_div_504d__GUARD__
    DECL_STRONG_TYPE(s_div_504d, float);
    #endif//_s_div_504d__GUARD__

    #ifndef _fwd_uprc_5d__GUARD__
    #define _fwd_uprc_5d__GUARD__
    DECL_STRONG_TYPE(fwd_uprc_5d, float);
    #endif//_fwd_uprc_5d__GUARD__

    #ifndef _fwd_uprc_10d__GUARD__
    #define _fwd_uprc_10d__GUARD__
    DECL_STRONG_TYPE(fwd_uprc_10d, float);
    #endif//_fwd_uprc_10d__GUARD__

    #ifndef _fwd_uprc_21d__GUARD__
    #define _fwd_uprc_21d__GUARD__
    DECL_STRONG_TYPE(fwd_uprc_21d, float);
    #endif//_fwd_uprc_21d__GUARD__

    #ifndef _fwd_uprc_42d__GUARD__
    #define _fwd_uprc_42d__GUARD__
    DECL_STRONG_TYPE(fwd_uprc_42d, float);
    #endif//_fwd_uprc_42d__GUARD__

    #ifndef _fwd_uprc_63d__GUARD__
    #define _fwd_uprc_63d__GUARD__
    DECL_STRONG_TYPE(fwd_uprc_63d, float);
    #endif//_fwd_uprc_63d__GUARD__

    #ifndef _fwd_uprc_84d__GUARD__
    #define _fwd_uprc_84d__GUARD__
    DECL_STRONG_TYPE(fwd_uprc_84d, float);
    #endif//_fwd_uprc_84d__GUARD__

    #ifndef _fwd_uprc_105d__GUARD__
    #define _fwd_uprc_105d__GUARD__
    DECL_STRONG_TYPE(fwd_uprc_105d, float);
    #endif//_fwd_uprc_105d__GUARD__

    #ifndef _fwd_uprc_126d__GUARD__
    #define _fwd_uprc_126d__GUARD__
    DECL_STRONG_TYPE(fwd_uprc_126d, float);
    #endif//_fwd_uprc_126d__GUARD__

    #ifndef _fwd_uprc_189d__GUARD__
    #define _fwd_uprc_189d__GUARD__
    DECL_STRONG_TYPE(fwd_uprc_189d, float);
    #endif//_fwd_uprc_189d__GUARD__

    #ifndef _fwd_uprc_252d__GUARD__
    #define _fwd_uprc_252d__GUARD__
    DECL_STRONG_TYPE(fwd_uprc_252d, float);
    #endif//_fwd_uprc_252d__GUARD__

    #ifndef _fwd_uprc_378d__GUARD__
    #define _fwd_uprc_378d__GUARD__
    DECL_STRONG_TYPE(fwd_uprc_378d, float);
    #endif//_fwd_uprc_378d__GUARD__

    #ifndef _fwd_uprc_504d__GUARD__
    #define _fwd_uprc_504d__GUARD__
    DECL_STRONG_TYPE(fwd_uprc_504d, float);
    #endif//_fwd_uprc_504d__GUARD__

    #ifndef _v_width_5d__GUARD__
    #define _v_width_5d__GUARD__
    DECL_STRONG_TYPE(v_width_5d, float);
    #endif//_v_width_5d__GUARD__

    #ifndef _v_width_10d__GUARD__
    #define _v_width_10d__GUARD__
    DECL_STRONG_TYPE(v_width_10d, float);
    #endif//_v_width_10d__GUARD__

    #ifndef _v_width_21d__GUARD__
    #define _v_width_21d__GUARD__
    DECL_STRONG_TYPE(v_width_21d, float);
    #endif//_v_width_21d__GUARD__

    #ifndef _v_width_42d__GUARD__
    #define _v_width_42d__GUARD__
    DECL_STRONG_TYPE(v_width_42d, float);
    #endif//_v_width_42d__GUARD__

    #ifndef _v_width_63d__GUARD__
    #define _v_width_63d__GUARD__
    DECL_STRONG_TYPE(v_width_63d, float);
    #endif//_v_width_63d__GUARD__

    #ifndef _v_width_84d__GUARD__
    #define _v_width_84d__GUARD__
    DECL_STRONG_TYPE(v_width_84d, float);
    #endif//_v_width_84d__GUARD__

    #ifndef _v_width_105d__GUARD__
    #define _v_width_105d__GUARD__
    DECL_STRONG_TYPE(v_width_105d, float);
    #endif//_v_width_105d__GUARD__

    #ifndef _v_width_126d__GUARD__
    #define _v_width_126d__GUARD__
    DECL_STRONG_TYPE(v_width_126d, float);
    #endif//_v_width_126d__GUARD__

    #ifndef _v_width_189d__GUARD__
    #define _v_width_189d__GUARD__
    DECL_STRONG_TYPE(v_width_189d, float);
    #endif//_v_width_189d__GUARD__

    #ifndef _v_width_252d__GUARD__
    #define _v_width_252d__GUARD__
    DECL_STRONG_TYPE(v_width_252d, float);
    #endif//_v_width_252d__GUARD__

    #ifndef _v_width_378d__GUARD__
    #define _v_width_378d__GUARD__
    DECL_STRONG_TYPE(v_width_378d, float);
    #endif//_v_width_378d__GUARD__

    #ifndef _v_width_504d__GUARD__
    #define _v_width_504d__GUARD__
    DECL_STRONG_TYPE(v_width_504d, float);
    #endif//_v_width_504d__GUARD__

    #ifndef _v_slope_5d__GUARD__
    #define _v_slope_5d__GUARD__
    DECL_STRONG_TYPE(v_slope_5d, float);
    #endif//_v_slope_5d__GUARD__

    #ifndef _v_slope_10d__GUARD__
    #define _v_slope_10d__GUARD__
    DECL_STRONG_TYPE(v_slope_10d, float);
    #endif//_v_slope_10d__GUARD__

    #ifndef _v_slope_21d__GUARD__
    #define _v_slope_21d__GUARD__
    DECL_STRONG_TYPE(v_slope_21d, float);
    #endif//_v_slope_21d__GUARD__

    #ifndef _v_slope_42d__GUARD__
    #define _v_slope_42d__GUARD__
    DECL_STRONG_TYPE(v_slope_42d, float);
    #endif//_v_slope_42d__GUARD__

    #ifndef _v_slope_63d__GUARD__
    #define _v_slope_63d__GUARD__
    DECL_STRONG_TYPE(v_slope_63d, float);
    #endif//_v_slope_63d__GUARD__

    #ifndef _v_slope_84d__GUARD__
    #define _v_slope_84d__GUARD__
    DECL_STRONG_TYPE(v_slope_84d, float);
    #endif//_v_slope_84d__GUARD__

    #ifndef _v_slope_105d__GUARD__
    #define _v_slope_105d__GUARD__
    DECL_STRONG_TYPE(v_slope_105d, float);
    #endif//_v_slope_105d__GUARD__

    #ifndef _v_slope_126d__GUARD__
    #define _v_slope_126d__GUARD__
    DECL_STRONG_TYPE(v_slope_126d, float);
    #endif//_v_slope_126d__GUARD__

    #ifndef _v_slope_189d__GUARD__
    #define _v_slope_189d__GUARD__
    DECL_STRONG_TYPE(v_slope_189d, float);
    #endif//_v_slope_189d__GUARD__

    #ifndef _v_slope_252d__GUARD__
    #define _v_slope_252d__GUARD__
    DECL_STRONG_TYPE(v_slope_252d, float);
    #endif//_v_slope_252d__GUARD__

    #ifndef _v_slope_378d__GUARD__
    #define _v_slope_378d__GUARD__
    DECL_STRONG_TYPE(v_slope_378d, float);
    #endif//_v_slope_378d__GUARD__

    #ifndef _v_slope_504d__GUARD__
    #define _v_slope_504d__GUARD__
    DECL_STRONG_TYPE(v_slope_504d, float);
    #endif//_v_slope_504d__GUARD__

    #ifndef _e_cnt_5d__GUARD__
    #define _e_cnt_5d__GUARD__
    DECL_STRONG_TYPE(e_cnt_5d, int32);
    #endif//_e_cnt_5d__GUARD__

    #ifndef _e_cnt_10d__GUARD__
    #define _e_cnt_10d__GUARD__
    DECL_STRONG_TYPE(e_cnt_10d, int32);
    #endif//_e_cnt_10d__GUARD__

    #ifndef _e_cnt_21d__GUARD__
    #define _e_cnt_21d__GUARD__
    DECL_STRONG_TYPE(e_cnt_21d, int32);
    #endif//_e_cnt_21d__GUARD__

    #ifndef _e_cnt_42d__GUARD__
    #define _e_cnt_42d__GUARD__
    DECL_STRONG_TYPE(e_cnt_42d, int32);
    #endif//_e_cnt_42d__GUARD__

    #ifndef _e_cnt_63d__GUARD__
    #define _e_cnt_63d__GUARD__
    DECL_STRONG_TYPE(e_cnt_63d, int32);
    #endif//_e_cnt_63d__GUARD__

    #ifndef _e_cnt_84d__GUARD__
    #define _e_cnt_84d__GUARD__
    DECL_STRONG_TYPE(e_cnt_84d, int32);
    #endif//_e_cnt_84d__GUARD__

    #ifndef _e_cnt_105d__GUARD__
    #define _e_cnt_105d__GUARD__
    DECL_STRONG_TYPE(e_cnt_105d, int32);
    #endif//_e_cnt_105d__GUARD__

    #ifndef _e_cnt_126d__GUARD__
    #define _e_cnt_126d__GUARD__
    DECL_STRONG_TYPE(e_cnt_126d, int32);
    #endif//_e_cnt_126d__GUARD__

    #ifndef _e_cnt_189d__GUARD__
    #define _e_cnt_189d__GUARD__
    DECL_STRONG_TYPE(e_cnt_189d, int32);
    #endif//_e_cnt_189d__GUARD__

    #ifndef _e_cnt_252d__GUARD__
    #define _e_cnt_252d__GUARD__
    DECL_STRONG_TYPE(e_cnt_252d, int32);
    #endif//_e_cnt_252d__GUARD__

    #ifndef _e_cnt_378d__GUARD__
    #define _e_cnt_378d__GUARD__
    DECL_STRONG_TYPE(e_cnt_378d, int32);
    #endif//_e_cnt_378d__GUARD__

    #ifndef _e_cnt_504d__GUARD__
    #define _e_cnt_504d__GUARD__
    DECL_STRONG_TYPE(e_cnt_504d, int32);
    #endif//_e_cnt_504d__GUARD__

    #ifndef _status__CurveStatus__GUARD__
    #define _status__CurveStatus__GUARD__
    DECL_STRONG_TYPE(status__CurveStatus, spiderrock::protobuf::api::CurveStatus);
    #endif//_status__CurveStatus__GUARD__

    #ifndef _time__duration__GUARD__
    #define _time__duration__GUARD__
    DECL_STRONG_TYPE(time__duration, std::chrono::nanoseconds);
    #endif//_time__duration__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _surface_type__GUARD__
    #define _surface_type__GUARD__
    DECL_STRONG_TYPE(surface_type, spiderrock::protobuf::api::SurfaceCurveType);
    #endif//_surface_type__GUARD__

    
    class LiveSurfaceFixedTerm_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using surface_type = spiderrock::protobuf::api::surface_type;

        private:
        ticker m_ticker{};
        surface_type m_surface_type{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
        surface_type get_surface_type() const {
            return m_surface_type;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_surface_type(const surface_type& value)  {
            m_surface_type = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveSurfaceFixedTerm_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveSurfaceFixedTerm_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const surface_type & value) { set_surface_type(value); }


        LiveSurfaceFixedTerm_PKey() {}

        virtual ~LiveSurfaceFixedTerm_PKey() {
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
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SurfaceCurveType>(m_surface_type)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SurfaceCurveType>(m_surface_type)));
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
                    case 10: {
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_ticker.setFromCodec(tickerKey);
                        break;
                    }
                    case 11: {m_surface_type = static_cast<spiderrock::protobuf::api::SurfaceCurveType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class LiveSurfaceFixedTerm {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::LiveSurfaceFixedTerm_PKey;
        using syn_spot = spiderrock::protobuf::api::syn_spot;
        using h_emove = spiderrock::protobuf::api::h_emove;
        using h_emove_num = spiderrock::protobuf::api::h_emove_num;
        using h_emove_avg = spiderrock::protobuf::api::h_emove_avg;
        using h_emove_std = spiderrock::protobuf::api::h_emove_std;
        using h_emove_min = spiderrock::protobuf::api::h_emove_min;
        using h_emove_max = spiderrock::protobuf::api::h_emove_max;
        using i_emove = spiderrock::protobuf::api::i_emove;
        using i_efit_code = spiderrock::protobuf::api::i_efit_code;
        using i_efit_error = spiderrock::protobuf::api::i_efit_error;
        using expiry_count = spiderrock::protobuf::api::expiry_count;
        using i_emove_avg = spiderrock::protobuf::api::i_emove_avg;
        using i_emove_std = spiderrock::protobuf::api::i_emove_std;
        using i_emove_min = spiderrock::protobuf::api::i_emove_min;
        using i_emove_max = spiderrock::protobuf::api::i_emove_max;
        using i_emove_cnt = spiderrock::protobuf::api::i_emove_cnt;
        using e_move_exp_adj1 = spiderrock::protobuf::api::e_move_exp_adj1;
        using e_move_yrs_adj1 = spiderrock::protobuf::api::e_move_yrs_adj1;
        using e_move_years1 = spiderrock::protobuf::api::e_move_years1;
        using e_move_ekey1 = spiderrock::protobuf::api::e_move_ekey1;
        using e_move_exp_adj2 = spiderrock::protobuf::api::e_move_exp_adj2;
        using e_move_yrs_adj2 = spiderrock::protobuf::api::e_move_yrs_adj2;
        using e_move_years2 = spiderrock::protobuf::api::e_move_years2;
        using e_move_ekey2 = spiderrock::protobuf::api::e_move_ekey2;
        using atm_cen_i_st = spiderrock::protobuf::api::atm_cen_i_st;
        using atm_cen_i_lt = spiderrock::protobuf::api::atm_cen_i_lt;
        using atm_cen_i_decay = spiderrock::protobuf::api::atm_cen_i_decay;
        using atm_cen_i_5d = spiderrock::protobuf::api::atm_cen_i_5d;
        using atm_cen_i_10d = spiderrock::protobuf::api::atm_cen_i_10d;
        using atm_cen_i_21d = spiderrock::protobuf::api::atm_cen_i_21d;
        using atm_cen_i_42d = spiderrock::protobuf::api::atm_cen_i_42d;
        using atm_cen_i_63d = spiderrock::protobuf::api::atm_cen_i_63d;
        using atm_cen_i_84d = spiderrock::protobuf::api::atm_cen_i_84d;
        using atm_cen_i_105d = spiderrock::protobuf::api::atm_cen_i_105d;
        using atm_cen_i_126d = spiderrock::protobuf::api::atm_cen_i_126d;
        using atm_cen_i_189d = spiderrock::protobuf::api::atm_cen_i_189d;
        using atm_cen_i_252d = spiderrock::protobuf::api::atm_cen_i_252d;
        using atm_cen_i_378d = spiderrock::protobuf::api::atm_cen_i_378d;
        using atm_cen_i_504d = spiderrock::protobuf::api::atm_cen_i_504d;
        using atm_cen_h_st = spiderrock::protobuf::api::atm_cen_h_st;
        using atm_cen_h_lt = spiderrock::protobuf::api::atm_cen_h_lt;
        using atm_cen_h_decay = spiderrock::protobuf::api::atm_cen_h_decay;
        using atm_cen_h_5d = spiderrock::protobuf::api::atm_cen_h_5d;
        using atm_cen_h_10d = spiderrock::protobuf::api::atm_cen_h_10d;
        using atm_cen_h_21d = spiderrock::protobuf::api::atm_cen_h_21d;
        using atm_cen_h_42d = spiderrock::protobuf::api::atm_cen_h_42d;
        using atm_cen_h_63d = spiderrock::protobuf::api::atm_cen_h_63d;
        using atm_cen_h_84d = spiderrock::protobuf::api::atm_cen_h_84d;
        using atm_cen_h_105d = spiderrock::protobuf::api::atm_cen_h_105d;
        using atm_cen_h_126d = spiderrock::protobuf::api::atm_cen_h_126d;
        using atm_cen_h_189d = spiderrock::protobuf::api::atm_cen_h_189d;
        using atm_cen_h_252d = spiderrock::protobuf::api::atm_cen_h_252d;
        using atm_cen_h_378d = spiderrock::protobuf::api::atm_cen_h_378d;
        using atm_cen_h_504d = spiderrock::protobuf::api::atm_cen_h_504d;
        using s_div_5d = spiderrock::protobuf::api::s_div_5d;
        using s_div_10d = spiderrock::protobuf::api::s_div_10d;
        using s_div_21d = spiderrock::protobuf::api::s_div_21d;
        using s_div_42d = spiderrock::protobuf::api::s_div_42d;
        using s_div_63d = spiderrock::protobuf::api::s_div_63d;
        using s_div_84d = spiderrock::protobuf::api::s_div_84d;
        using s_div_105d = spiderrock::protobuf::api::s_div_105d;
        using s_div_126d = spiderrock::protobuf::api::s_div_126d;
        using s_div_189d = spiderrock::protobuf::api::s_div_189d;
        using s_div_252d = spiderrock::protobuf::api::s_div_252d;
        using s_div_378d = spiderrock::protobuf::api::s_div_378d;
        using s_div_504d = spiderrock::protobuf::api::s_div_504d;
        using fwd_uprc_5d = spiderrock::protobuf::api::fwd_uprc_5d;
        using fwd_uprc_10d = spiderrock::protobuf::api::fwd_uprc_10d;
        using fwd_uprc_21d = spiderrock::protobuf::api::fwd_uprc_21d;
        using fwd_uprc_42d = spiderrock::protobuf::api::fwd_uprc_42d;
        using fwd_uprc_63d = spiderrock::protobuf::api::fwd_uprc_63d;
        using fwd_uprc_84d = spiderrock::protobuf::api::fwd_uprc_84d;
        using fwd_uprc_105d = spiderrock::protobuf::api::fwd_uprc_105d;
        using fwd_uprc_126d = spiderrock::protobuf::api::fwd_uprc_126d;
        using fwd_uprc_189d = spiderrock::protobuf::api::fwd_uprc_189d;
        using fwd_uprc_252d = spiderrock::protobuf::api::fwd_uprc_252d;
        using fwd_uprc_378d = spiderrock::protobuf::api::fwd_uprc_378d;
        using fwd_uprc_504d = spiderrock::protobuf::api::fwd_uprc_504d;
        using v_width_5d = spiderrock::protobuf::api::v_width_5d;
        using v_width_10d = spiderrock::protobuf::api::v_width_10d;
        using v_width_21d = spiderrock::protobuf::api::v_width_21d;
        using v_width_42d = spiderrock::protobuf::api::v_width_42d;
        using v_width_63d = spiderrock::protobuf::api::v_width_63d;
        using v_width_84d = spiderrock::protobuf::api::v_width_84d;
        using v_width_105d = spiderrock::protobuf::api::v_width_105d;
        using v_width_126d = spiderrock::protobuf::api::v_width_126d;
        using v_width_189d = spiderrock::protobuf::api::v_width_189d;
        using v_width_252d = spiderrock::protobuf::api::v_width_252d;
        using v_width_378d = spiderrock::protobuf::api::v_width_378d;
        using v_width_504d = spiderrock::protobuf::api::v_width_504d;
        using v_slope_5d = spiderrock::protobuf::api::v_slope_5d;
        using v_slope_10d = spiderrock::protobuf::api::v_slope_10d;
        using v_slope_21d = spiderrock::protobuf::api::v_slope_21d;
        using v_slope_42d = spiderrock::protobuf::api::v_slope_42d;
        using v_slope_63d = spiderrock::protobuf::api::v_slope_63d;
        using v_slope_84d = spiderrock::protobuf::api::v_slope_84d;
        using v_slope_105d = spiderrock::protobuf::api::v_slope_105d;
        using v_slope_126d = spiderrock::protobuf::api::v_slope_126d;
        using v_slope_189d = spiderrock::protobuf::api::v_slope_189d;
        using v_slope_252d = spiderrock::protobuf::api::v_slope_252d;
        using v_slope_378d = spiderrock::protobuf::api::v_slope_378d;
        using v_slope_504d = spiderrock::protobuf::api::v_slope_504d;
        using e_cnt_5d = spiderrock::protobuf::api::e_cnt_5d;
        using e_cnt_10d = spiderrock::protobuf::api::e_cnt_10d;
        using e_cnt_21d = spiderrock::protobuf::api::e_cnt_21d;
        using e_cnt_42d = spiderrock::protobuf::api::e_cnt_42d;
        using e_cnt_63d = spiderrock::protobuf::api::e_cnt_63d;
        using e_cnt_84d = spiderrock::protobuf::api::e_cnt_84d;
        using e_cnt_105d = spiderrock::protobuf::api::e_cnt_105d;
        using e_cnt_126d = spiderrock::protobuf::api::e_cnt_126d;
        using e_cnt_189d = spiderrock::protobuf::api::e_cnt_189d;
        using e_cnt_252d = spiderrock::protobuf::api::e_cnt_252d;
        using e_cnt_378d = spiderrock::protobuf::api::e_cnt_378d;
        using e_cnt_504d = spiderrock::protobuf::api::e_cnt_504d;
        using status = spiderrock::protobuf::api::status__CurveStatus;
        using time = spiderrock::protobuf::api::time__duration;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        syn_spot m_syn_spot{};
        h_emove m_h_emove{};
        h_emove_num m_h_emove_num{};
        h_emove_avg m_h_emove_avg{};
        h_emove_std m_h_emove_std{};
        h_emove_min m_h_emove_min{};
        h_emove_max m_h_emove_max{};
        i_emove m_i_emove{};
        i_efit_code m_i_efit_code{};
        i_efit_error m_i_efit_error{};
        expiry_count m_expiry_count{};
        i_emove_avg m_i_emove_avg{};
        i_emove_std m_i_emove_std{};
        i_emove_min m_i_emove_min{};
        i_emove_max m_i_emove_max{};
        i_emove_cnt m_i_emove_cnt{};
        e_move_exp_adj1 m_e_move_exp_adj1{};
        e_move_yrs_adj1 m_e_move_yrs_adj1{};
        e_move_years1 m_e_move_years1{};
        e_move_ekey1 m_e_move_ekey1{};
        e_move_exp_adj2 m_e_move_exp_adj2{};
        e_move_yrs_adj2 m_e_move_yrs_adj2{};
        e_move_years2 m_e_move_years2{};
        e_move_ekey2 m_e_move_ekey2{};
        atm_cen_i_st m_atm_cen_i_st{};
        atm_cen_i_lt m_atm_cen_i_lt{};
        atm_cen_i_decay m_atm_cen_i_decay{};
        atm_cen_i_5d m_atm_cen_i_5d{};
        atm_cen_i_10d m_atm_cen_i_10d{};
        atm_cen_i_21d m_atm_cen_i_21d{};
        atm_cen_i_42d m_atm_cen_i_42d{};
        atm_cen_i_63d m_atm_cen_i_63d{};
        atm_cen_i_84d m_atm_cen_i_84d{};
        atm_cen_i_105d m_atm_cen_i_105d{};
        atm_cen_i_126d m_atm_cen_i_126d{};
        atm_cen_i_189d m_atm_cen_i_189d{};
        atm_cen_i_252d m_atm_cen_i_252d{};
        atm_cen_i_378d m_atm_cen_i_378d{};
        atm_cen_i_504d m_atm_cen_i_504d{};
        atm_cen_h_st m_atm_cen_h_st{};
        atm_cen_h_lt m_atm_cen_h_lt{};
        atm_cen_h_decay m_atm_cen_h_decay{};
        atm_cen_h_5d m_atm_cen_h_5d{};
        atm_cen_h_10d m_atm_cen_h_10d{};
        atm_cen_h_21d m_atm_cen_h_21d{};
        atm_cen_h_42d m_atm_cen_h_42d{};
        atm_cen_h_63d m_atm_cen_h_63d{};
        atm_cen_h_84d m_atm_cen_h_84d{};
        atm_cen_h_105d m_atm_cen_h_105d{};
        atm_cen_h_126d m_atm_cen_h_126d{};
        atm_cen_h_189d m_atm_cen_h_189d{};
        atm_cen_h_252d m_atm_cen_h_252d{};
        atm_cen_h_378d m_atm_cen_h_378d{};
        atm_cen_h_504d m_atm_cen_h_504d{};
        s_div_5d m_s_div_5d{};
        s_div_10d m_s_div_10d{};
        s_div_21d m_s_div_21d{};
        s_div_42d m_s_div_42d{};
        s_div_63d m_s_div_63d{};
        s_div_84d m_s_div_84d{};
        s_div_105d m_s_div_105d{};
        s_div_126d m_s_div_126d{};
        s_div_189d m_s_div_189d{};
        s_div_252d m_s_div_252d{};
        s_div_378d m_s_div_378d{};
        s_div_504d m_s_div_504d{};
        fwd_uprc_5d m_fwd_uprc_5d{};
        fwd_uprc_10d m_fwd_uprc_10d{};
        fwd_uprc_21d m_fwd_uprc_21d{};
        fwd_uprc_42d m_fwd_uprc_42d{};
        fwd_uprc_63d m_fwd_uprc_63d{};
        fwd_uprc_84d m_fwd_uprc_84d{};
        fwd_uprc_105d m_fwd_uprc_105d{};
        fwd_uprc_126d m_fwd_uprc_126d{};
        fwd_uprc_189d m_fwd_uprc_189d{};
        fwd_uprc_252d m_fwd_uprc_252d{};
        fwd_uprc_378d m_fwd_uprc_378d{};
        fwd_uprc_504d m_fwd_uprc_504d{};
        v_width_5d m_v_width_5d{};
        v_width_10d m_v_width_10d{};
        v_width_21d m_v_width_21d{};
        v_width_42d m_v_width_42d{};
        v_width_63d m_v_width_63d{};
        v_width_84d m_v_width_84d{};
        v_width_105d m_v_width_105d{};
        v_width_126d m_v_width_126d{};
        v_width_189d m_v_width_189d{};
        v_width_252d m_v_width_252d{};
        v_width_378d m_v_width_378d{};
        v_width_504d m_v_width_504d{};
        v_slope_5d m_v_slope_5d{};
        v_slope_10d m_v_slope_10d{};
        v_slope_21d m_v_slope_21d{};
        v_slope_42d m_v_slope_42d{};
        v_slope_63d m_v_slope_63d{};
        v_slope_84d m_v_slope_84d{};
        v_slope_105d m_v_slope_105d{};
        v_slope_126d m_v_slope_126d{};
        v_slope_189d m_v_slope_189d{};
        v_slope_252d m_v_slope_252d{};
        v_slope_378d m_v_slope_378d{};
        v_slope_504d m_v_slope_504d{};
        e_cnt_5d m_e_cnt_5d{};
        e_cnt_10d m_e_cnt_10d{};
        e_cnt_21d m_e_cnt_21d{};
        e_cnt_42d m_e_cnt_42d{};
        e_cnt_63d m_e_cnt_63d{};
        e_cnt_84d m_e_cnt_84d{};
        e_cnt_105d m_e_cnt_105d{};
        e_cnt_126d m_e_cnt_126d{};
        e_cnt_189d m_e_cnt_189d{};
        e_cnt_252d m_e_cnt_252d{};
        e_cnt_378d m_e_cnt_378d{};
        e_cnt_504d m_e_cnt_504d{};
        status m_status{};
        time m_time{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        syn_spot get_syn_spot() const {
            return m_syn_spot;
        }		
        h_emove get_h_emove() const {
            return m_h_emove;
        }		
        h_emove_num get_h_emove_num() const {
            return m_h_emove_num;
        }		
        h_emove_avg get_h_emove_avg() const {
            return m_h_emove_avg;
        }		
        h_emove_std get_h_emove_std() const {
            return m_h_emove_std;
        }		
        h_emove_min get_h_emove_min() const {
            return m_h_emove_min;
        }		
        h_emove_max get_h_emove_max() const {
            return m_h_emove_max;
        }		
        i_emove get_i_emove() const {
            return m_i_emove;
        }		
        i_efit_code get_i_efit_code() const {
            return m_i_efit_code;
        }		
        i_efit_error get_i_efit_error() const {
            return m_i_efit_error;
        }		
        expiry_count get_expiry_count() const {
            return m_expiry_count;
        }		
        i_emove_avg get_i_emove_avg() const {
            return m_i_emove_avg;
        }		
        i_emove_std get_i_emove_std() const {
            return m_i_emove_std;
        }		
        i_emove_min get_i_emove_min() const {
            return m_i_emove_min;
        }		
        i_emove_max get_i_emove_max() const {
            return m_i_emove_max;
        }		
        i_emove_cnt get_i_emove_cnt() const {
            return m_i_emove_cnt;
        }		
        e_move_exp_adj1 get_e_move_exp_adj1() const {
            return m_e_move_exp_adj1;
        }		
        e_move_yrs_adj1 get_e_move_yrs_adj1() const {
            return m_e_move_yrs_adj1;
        }		
        e_move_years1 get_e_move_years1() const {
            return m_e_move_years1;
        }		
        e_move_ekey1 get_e_move_ekey1() const {
            return m_e_move_ekey1;
        }		
        e_move_exp_adj2 get_e_move_exp_adj2() const {
            return m_e_move_exp_adj2;
        }		
        e_move_yrs_adj2 get_e_move_yrs_adj2() const {
            return m_e_move_yrs_adj2;
        }		
        e_move_years2 get_e_move_years2() const {
            return m_e_move_years2;
        }		
        e_move_ekey2 get_e_move_ekey2() const {
            return m_e_move_ekey2;
        }		
        atm_cen_i_st get_atm_cen_i_st() const {
            return m_atm_cen_i_st;
        }		
        atm_cen_i_lt get_atm_cen_i_lt() const {
            return m_atm_cen_i_lt;
        }		
        atm_cen_i_decay get_atm_cen_i_decay() const {
            return m_atm_cen_i_decay;
        }		
        atm_cen_i_5d get_atm_cen_i_5d() const {
            return m_atm_cen_i_5d;
        }		
        atm_cen_i_10d get_atm_cen_i_10d() const {
            return m_atm_cen_i_10d;
        }		
        atm_cen_i_21d get_atm_cen_i_21d() const {
            return m_atm_cen_i_21d;
        }		
        atm_cen_i_42d get_atm_cen_i_42d() const {
            return m_atm_cen_i_42d;
        }		
        atm_cen_i_63d get_atm_cen_i_63d() const {
            return m_atm_cen_i_63d;
        }		
        atm_cen_i_84d get_atm_cen_i_84d() const {
            return m_atm_cen_i_84d;
        }		
        atm_cen_i_105d get_atm_cen_i_105d() const {
            return m_atm_cen_i_105d;
        }		
        atm_cen_i_126d get_atm_cen_i_126d() const {
            return m_atm_cen_i_126d;
        }		
        atm_cen_i_189d get_atm_cen_i_189d() const {
            return m_atm_cen_i_189d;
        }		
        atm_cen_i_252d get_atm_cen_i_252d() const {
            return m_atm_cen_i_252d;
        }		
        atm_cen_i_378d get_atm_cen_i_378d() const {
            return m_atm_cen_i_378d;
        }		
        atm_cen_i_504d get_atm_cen_i_504d() const {
            return m_atm_cen_i_504d;
        }		
        atm_cen_h_st get_atm_cen_h_st() const {
            return m_atm_cen_h_st;
        }		
        atm_cen_h_lt get_atm_cen_h_lt() const {
            return m_atm_cen_h_lt;
        }		
        atm_cen_h_decay get_atm_cen_h_decay() const {
            return m_atm_cen_h_decay;
        }		
        atm_cen_h_5d get_atm_cen_h_5d() const {
            return m_atm_cen_h_5d;
        }		
        atm_cen_h_10d get_atm_cen_h_10d() const {
            return m_atm_cen_h_10d;
        }		
        atm_cen_h_21d get_atm_cen_h_21d() const {
            return m_atm_cen_h_21d;
        }		
        atm_cen_h_42d get_atm_cen_h_42d() const {
            return m_atm_cen_h_42d;
        }		
        atm_cen_h_63d get_atm_cen_h_63d() const {
            return m_atm_cen_h_63d;
        }		
        atm_cen_h_84d get_atm_cen_h_84d() const {
            return m_atm_cen_h_84d;
        }		
        atm_cen_h_105d get_atm_cen_h_105d() const {
            return m_atm_cen_h_105d;
        }		
        atm_cen_h_126d get_atm_cen_h_126d() const {
            return m_atm_cen_h_126d;
        }		
        atm_cen_h_189d get_atm_cen_h_189d() const {
            return m_atm_cen_h_189d;
        }		
        atm_cen_h_252d get_atm_cen_h_252d() const {
            return m_atm_cen_h_252d;
        }		
        atm_cen_h_378d get_atm_cen_h_378d() const {
            return m_atm_cen_h_378d;
        }		
        atm_cen_h_504d get_atm_cen_h_504d() const {
            return m_atm_cen_h_504d;
        }		
        s_div_5d get_s_div_5d() const {
            return m_s_div_5d;
        }		
        s_div_10d get_s_div_10d() const {
            return m_s_div_10d;
        }		
        s_div_21d get_s_div_21d() const {
            return m_s_div_21d;
        }		
        s_div_42d get_s_div_42d() const {
            return m_s_div_42d;
        }		
        s_div_63d get_s_div_63d() const {
            return m_s_div_63d;
        }		
        s_div_84d get_s_div_84d() const {
            return m_s_div_84d;
        }		
        s_div_105d get_s_div_105d() const {
            return m_s_div_105d;
        }		
        s_div_126d get_s_div_126d() const {
            return m_s_div_126d;
        }		
        s_div_189d get_s_div_189d() const {
            return m_s_div_189d;
        }		
        s_div_252d get_s_div_252d() const {
            return m_s_div_252d;
        }		
        s_div_378d get_s_div_378d() const {
            return m_s_div_378d;
        }		
        s_div_504d get_s_div_504d() const {
            return m_s_div_504d;
        }		
        fwd_uprc_5d get_fwd_uprc_5d() const {
            return m_fwd_uprc_5d;
        }		
        fwd_uprc_10d get_fwd_uprc_10d() const {
            return m_fwd_uprc_10d;
        }		
        fwd_uprc_21d get_fwd_uprc_21d() const {
            return m_fwd_uprc_21d;
        }		
        fwd_uprc_42d get_fwd_uprc_42d() const {
            return m_fwd_uprc_42d;
        }		
        fwd_uprc_63d get_fwd_uprc_63d() const {
            return m_fwd_uprc_63d;
        }		
        fwd_uprc_84d get_fwd_uprc_84d() const {
            return m_fwd_uprc_84d;
        }		
        fwd_uprc_105d get_fwd_uprc_105d() const {
            return m_fwd_uprc_105d;
        }		
        fwd_uprc_126d get_fwd_uprc_126d() const {
            return m_fwd_uprc_126d;
        }		
        fwd_uprc_189d get_fwd_uprc_189d() const {
            return m_fwd_uprc_189d;
        }		
        fwd_uprc_252d get_fwd_uprc_252d() const {
            return m_fwd_uprc_252d;
        }		
        fwd_uprc_378d get_fwd_uprc_378d() const {
            return m_fwd_uprc_378d;
        }		
        fwd_uprc_504d get_fwd_uprc_504d() const {
            return m_fwd_uprc_504d;
        }		
        v_width_5d get_v_width_5d() const {
            return m_v_width_5d;
        }		
        v_width_10d get_v_width_10d() const {
            return m_v_width_10d;
        }		
        v_width_21d get_v_width_21d() const {
            return m_v_width_21d;
        }		
        v_width_42d get_v_width_42d() const {
            return m_v_width_42d;
        }		
        v_width_63d get_v_width_63d() const {
            return m_v_width_63d;
        }		
        v_width_84d get_v_width_84d() const {
            return m_v_width_84d;
        }		
        v_width_105d get_v_width_105d() const {
            return m_v_width_105d;
        }		
        v_width_126d get_v_width_126d() const {
            return m_v_width_126d;
        }		
        v_width_189d get_v_width_189d() const {
            return m_v_width_189d;
        }		
        v_width_252d get_v_width_252d() const {
            return m_v_width_252d;
        }		
        v_width_378d get_v_width_378d() const {
            return m_v_width_378d;
        }		
        v_width_504d get_v_width_504d() const {
            return m_v_width_504d;
        }		
        v_slope_5d get_v_slope_5d() const {
            return m_v_slope_5d;
        }		
        v_slope_10d get_v_slope_10d() const {
            return m_v_slope_10d;
        }		
        v_slope_21d get_v_slope_21d() const {
            return m_v_slope_21d;
        }		
        v_slope_42d get_v_slope_42d() const {
            return m_v_slope_42d;
        }		
        v_slope_63d get_v_slope_63d() const {
            return m_v_slope_63d;
        }		
        v_slope_84d get_v_slope_84d() const {
            return m_v_slope_84d;
        }		
        v_slope_105d get_v_slope_105d() const {
            return m_v_slope_105d;
        }		
        v_slope_126d get_v_slope_126d() const {
            return m_v_slope_126d;
        }		
        v_slope_189d get_v_slope_189d() const {
            return m_v_slope_189d;
        }		
        v_slope_252d get_v_slope_252d() const {
            return m_v_slope_252d;
        }		
        v_slope_378d get_v_slope_378d() const {
            return m_v_slope_378d;
        }		
        v_slope_504d get_v_slope_504d() const {
            return m_v_slope_504d;
        }		
        e_cnt_5d get_e_cnt_5d() const {
            return m_e_cnt_5d;
        }		
        e_cnt_10d get_e_cnt_10d() const {
            return m_e_cnt_10d;
        }		
        e_cnt_21d get_e_cnt_21d() const {
            return m_e_cnt_21d;
        }		
        e_cnt_42d get_e_cnt_42d() const {
            return m_e_cnt_42d;
        }		
        e_cnt_63d get_e_cnt_63d() const {
            return m_e_cnt_63d;
        }		
        e_cnt_84d get_e_cnt_84d() const {
            return m_e_cnt_84d;
        }		
        e_cnt_105d get_e_cnt_105d() const {
            return m_e_cnt_105d;
        }		
        e_cnt_126d get_e_cnt_126d() const {
            return m_e_cnt_126d;
        }		
        e_cnt_189d get_e_cnt_189d() const {
            return m_e_cnt_189d;
        }		
        e_cnt_252d get_e_cnt_252d() const {
            return m_e_cnt_252d;
        }		
        e_cnt_378d get_e_cnt_378d() const {
            return m_e_cnt_378d;
        }		
        e_cnt_504d get_e_cnt_504d() const {
            return m_e_cnt_504d;
        }		
        status get_status() const {
            return m_status;
        }		
        time get_time() const {
            return m_time;
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
        void set_syn_spot(const syn_spot& value)  {
            m_syn_spot = value;
        }
        void set_h_emove(const h_emove& value)  {
            m_h_emove = value;
        }
        void set_h_emove_num(const h_emove_num& value)  {
            m_h_emove_num = value;
        }
        void set_h_emove_avg(const h_emove_avg& value)  {
            m_h_emove_avg = value;
        }
        void set_h_emove_std(const h_emove_std& value)  {
            m_h_emove_std = value;
        }
        void set_h_emove_min(const h_emove_min& value)  {
            m_h_emove_min = value;
        }
        void set_h_emove_max(const h_emove_max& value)  {
            m_h_emove_max = value;
        }
        void set_i_emove(const i_emove& value)  {
            m_i_emove = value;
        }
        void set_i_efit_code(const i_efit_code& value)  {
            m_i_efit_code = value;
        }
        void set_i_efit_error(const i_efit_error& value)  {
            m_i_efit_error = value;
        }
        void set_expiry_count(const expiry_count& value)  {
            m_expiry_count = value;
        }
        void set_i_emove_avg(const i_emove_avg& value)  {
            m_i_emove_avg = value;
        }
        void set_i_emove_std(const i_emove_std& value)  {
            m_i_emove_std = value;
        }
        void set_i_emove_min(const i_emove_min& value)  {
            m_i_emove_min = value;
        }
        void set_i_emove_max(const i_emove_max& value)  {
            m_i_emove_max = value;
        }
        void set_i_emove_cnt(const i_emove_cnt& value)  {
            m_i_emove_cnt = value;
        }
        void set_e_move_exp_adj1(const e_move_exp_adj1& value)  {
            m_e_move_exp_adj1 = value;
        }
        void set_e_move_yrs_adj1(const e_move_yrs_adj1& value)  {
            m_e_move_yrs_adj1 = value;
        }
        void set_e_move_years1(const e_move_years1& value)  {
            m_e_move_years1 = value;
        }
        void set_e_move_ekey1(const e_move_ekey1& value)  {
            m_e_move_ekey1 = value;
        }
        void set_e_move_exp_adj2(const e_move_exp_adj2& value)  {
            m_e_move_exp_adj2 = value;
        }
        void set_e_move_yrs_adj2(const e_move_yrs_adj2& value)  {
            m_e_move_yrs_adj2 = value;
        }
        void set_e_move_years2(const e_move_years2& value)  {
            m_e_move_years2 = value;
        }
        void set_e_move_ekey2(const e_move_ekey2& value)  {
            m_e_move_ekey2 = value;
        }
        void set_atm_cen_i_st(const atm_cen_i_st& value)  {
            m_atm_cen_i_st = value;
        }
        void set_atm_cen_i_lt(const atm_cen_i_lt& value)  {
            m_atm_cen_i_lt = value;
        }
        void set_atm_cen_i_decay(const atm_cen_i_decay& value)  {
            m_atm_cen_i_decay = value;
        }
        void set_atm_cen_i_5d(const atm_cen_i_5d& value)  {
            m_atm_cen_i_5d = value;
        }
        void set_atm_cen_i_10d(const atm_cen_i_10d& value)  {
            m_atm_cen_i_10d = value;
        }
        void set_atm_cen_i_21d(const atm_cen_i_21d& value)  {
            m_atm_cen_i_21d = value;
        }
        void set_atm_cen_i_42d(const atm_cen_i_42d& value)  {
            m_atm_cen_i_42d = value;
        }
        void set_atm_cen_i_63d(const atm_cen_i_63d& value)  {
            m_atm_cen_i_63d = value;
        }
        void set_atm_cen_i_84d(const atm_cen_i_84d& value)  {
            m_atm_cen_i_84d = value;
        }
        void set_atm_cen_i_105d(const atm_cen_i_105d& value)  {
            m_atm_cen_i_105d = value;
        }
        void set_atm_cen_i_126d(const atm_cen_i_126d& value)  {
            m_atm_cen_i_126d = value;
        }
        void set_atm_cen_i_189d(const atm_cen_i_189d& value)  {
            m_atm_cen_i_189d = value;
        }
        void set_atm_cen_i_252d(const atm_cen_i_252d& value)  {
            m_atm_cen_i_252d = value;
        }
        void set_atm_cen_i_378d(const atm_cen_i_378d& value)  {
            m_atm_cen_i_378d = value;
        }
        void set_atm_cen_i_504d(const atm_cen_i_504d& value)  {
            m_atm_cen_i_504d = value;
        }
        void set_atm_cen_h_st(const atm_cen_h_st& value)  {
            m_atm_cen_h_st = value;
        }
        void set_atm_cen_h_lt(const atm_cen_h_lt& value)  {
            m_atm_cen_h_lt = value;
        }
        void set_atm_cen_h_decay(const atm_cen_h_decay& value)  {
            m_atm_cen_h_decay = value;
        }
        void set_atm_cen_h_5d(const atm_cen_h_5d& value)  {
            m_atm_cen_h_5d = value;
        }
        void set_atm_cen_h_10d(const atm_cen_h_10d& value)  {
            m_atm_cen_h_10d = value;
        }
        void set_atm_cen_h_21d(const atm_cen_h_21d& value)  {
            m_atm_cen_h_21d = value;
        }
        void set_atm_cen_h_42d(const atm_cen_h_42d& value)  {
            m_atm_cen_h_42d = value;
        }
        void set_atm_cen_h_63d(const atm_cen_h_63d& value)  {
            m_atm_cen_h_63d = value;
        }
        void set_atm_cen_h_84d(const atm_cen_h_84d& value)  {
            m_atm_cen_h_84d = value;
        }
        void set_atm_cen_h_105d(const atm_cen_h_105d& value)  {
            m_atm_cen_h_105d = value;
        }
        void set_atm_cen_h_126d(const atm_cen_h_126d& value)  {
            m_atm_cen_h_126d = value;
        }
        void set_atm_cen_h_189d(const atm_cen_h_189d& value)  {
            m_atm_cen_h_189d = value;
        }
        void set_atm_cen_h_252d(const atm_cen_h_252d& value)  {
            m_atm_cen_h_252d = value;
        }
        void set_atm_cen_h_378d(const atm_cen_h_378d& value)  {
            m_atm_cen_h_378d = value;
        }
        void set_atm_cen_h_504d(const atm_cen_h_504d& value)  {
            m_atm_cen_h_504d = value;
        }
        void set_s_div_5d(const s_div_5d& value)  {
            m_s_div_5d = value;
        }
        void set_s_div_10d(const s_div_10d& value)  {
            m_s_div_10d = value;
        }
        void set_s_div_21d(const s_div_21d& value)  {
            m_s_div_21d = value;
        }
        void set_s_div_42d(const s_div_42d& value)  {
            m_s_div_42d = value;
        }
        void set_s_div_63d(const s_div_63d& value)  {
            m_s_div_63d = value;
        }
        void set_s_div_84d(const s_div_84d& value)  {
            m_s_div_84d = value;
        }
        void set_s_div_105d(const s_div_105d& value)  {
            m_s_div_105d = value;
        }
        void set_s_div_126d(const s_div_126d& value)  {
            m_s_div_126d = value;
        }
        void set_s_div_189d(const s_div_189d& value)  {
            m_s_div_189d = value;
        }
        void set_s_div_252d(const s_div_252d& value)  {
            m_s_div_252d = value;
        }
        void set_s_div_378d(const s_div_378d& value)  {
            m_s_div_378d = value;
        }
        void set_s_div_504d(const s_div_504d& value)  {
            m_s_div_504d = value;
        }
        void set_fwd_uprc_5d(const fwd_uprc_5d& value)  {
            m_fwd_uprc_5d = value;
        }
        void set_fwd_uprc_10d(const fwd_uprc_10d& value)  {
            m_fwd_uprc_10d = value;
        }
        void set_fwd_uprc_21d(const fwd_uprc_21d& value)  {
            m_fwd_uprc_21d = value;
        }
        void set_fwd_uprc_42d(const fwd_uprc_42d& value)  {
            m_fwd_uprc_42d = value;
        }
        void set_fwd_uprc_63d(const fwd_uprc_63d& value)  {
            m_fwd_uprc_63d = value;
        }
        void set_fwd_uprc_84d(const fwd_uprc_84d& value)  {
            m_fwd_uprc_84d = value;
        }
        void set_fwd_uprc_105d(const fwd_uprc_105d& value)  {
            m_fwd_uprc_105d = value;
        }
        void set_fwd_uprc_126d(const fwd_uprc_126d& value)  {
            m_fwd_uprc_126d = value;
        }
        void set_fwd_uprc_189d(const fwd_uprc_189d& value)  {
            m_fwd_uprc_189d = value;
        }
        void set_fwd_uprc_252d(const fwd_uprc_252d& value)  {
            m_fwd_uprc_252d = value;
        }
        void set_fwd_uprc_378d(const fwd_uprc_378d& value)  {
            m_fwd_uprc_378d = value;
        }
        void set_fwd_uprc_504d(const fwd_uprc_504d& value)  {
            m_fwd_uprc_504d = value;
        }
        void set_v_width_5d(const v_width_5d& value)  {
            m_v_width_5d = value;
        }
        void set_v_width_10d(const v_width_10d& value)  {
            m_v_width_10d = value;
        }
        void set_v_width_21d(const v_width_21d& value)  {
            m_v_width_21d = value;
        }
        void set_v_width_42d(const v_width_42d& value)  {
            m_v_width_42d = value;
        }
        void set_v_width_63d(const v_width_63d& value)  {
            m_v_width_63d = value;
        }
        void set_v_width_84d(const v_width_84d& value)  {
            m_v_width_84d = value;
        }
        void set_v_width_105d(const v_width_105d& value)  {
            m_v_width_105d = value;
        }
        void set_v_width_126d(const v_width_126d& value)  {
            m_v_width_126d = value;
        }
        void set_v_width_189d(const v_width_189d& value)  {
            m_v_width_189d = value;
        }
        void set_v_width_252d(const v_width_252d& value)  {
            m_v_width_252d = value;
        }
        void set_v_width_378d(const v_width_378d& value)  {
            m_v_width_378d = value;
        }
        void set_v_width_504d(const v_width_504d& value)  {
            m_v_width_504d = value;
        }
        void set_v_slope_5d(const v_slope_5d& value)  {
            m_v_slope_5d = value;
        }
        void set_v_slope_10d(const v_slope_10d& value)  {
            m_v_slope_10d = value;
        }
        void set_v_slope_21d(const v_slope_21d& value)  {
            m_v_slope_21d = value;
        }
        void set_v_slope_42d(const v_slope_42d& value)  {
            m_v_slope_42d = value;
        }
        void set_v_slope_63d(const v_slope_63d& value)  {
            m_v_slope_63d = value;
        }
        void set_v_slope_84d(const v_slope_84d& value)  {
            m_v_slope_84d = value;
        }
        void set_v_slope_105d(const v_slope_105d& value)  {
            m_v_slope_105d = value;
        }
        void set_v_slope_126d(const v_slope_126d& value)  {
            m_v_slope_126d = value;
        }
        void set_v_slope_189d(const v_slope_189d& value)  {
            m_v_slope_189d = value;
        }
        void set_v_slope_252d(const v_slope_252d& value)  {
            m_v_slope_252d = value;
        }
        void set_v_slope_378d(const v_slope_378d& value)  {
            m_v_slope_378d = value;
        }
        void set_v_slope_504d(const v_slope_504d& value)  {
            m_v_slope_504d = value;
        }
        void set_e_cnt_5d(const e_cnt_5d& value)  {
            m_e_cnt_5d = value;
        }
        void set_e_cnt_10d(const e_cnt_10d& value)  {
            m_e_cnt_10d = value;
        }
        void set_e_cnt_21d(const e_cnt_21d& value)  {
            m_e_cnt_21d = value;
        }
        void set_e_cnt_42d(const e_cnt_42d& value)  {
            m_e_cnt_42d = value;
        }
        void set_e_cnt_63d(const e_cnt_63d& value)  {
            m_e_cnt_63d = value;
        }
        void set_e_cnt_84d(const e_cnt_84d& value)  {
            m_e_cnt_84d = value;
        }
        void set_e_cnt_105d(const e_cnt_105d& value)  {
            m_e_cnt_105d = value;
        }
        void set_e_cnt_126d(const e_cnt_126d& value)  {
            m_e_cnt_126d = value;
        }
        void set_e_cnt_189d(const e_cnt_189d& value)  {
            m_e_cnt_189d = value;
        }
        void set_e_cnt_252d(const e_cnt_252d& value)  {
            m_e_cnt_252d = value;
        }
        void set_e_cnt_378d(const e_cnt_378d& value)  {
            m_e_cnt_378d = value;
        }
        void set_e_cnt_504d(const e_cnt_504d& value)  {
            m_e_cnt_504d = value;
        }
        void set_status(const status& value)  {
            m_status = value;
        }
        void set_time(const time& value)  {
            m_time = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveSurfaceFixedTerm::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const syn_spot & value) {
            set_syn_spot(value);
        }
        void set(const h_emove & value) {
            set_h_emove(value);
        }
        void set(const h_emove_num & value) {
            set_h_emove_num(value);
        }
        void set(const h_emove_avg & value) {
            set_h_emove_avg(value);
        }
        void set(const h_emove_std & value) {
            set_h_emove_std(value);
        }
        void set(const h_emove_min & value) {
            set_h_emove_min(value);
        }
        void set(const h_emove_max & value) {
            set_h_emove_max(value);
        }
        void set(const i_emove & value) {
            set_i_emove(value);
        }
        void set(const i_efit_code & value) {
            set_i_efit_code(value);
        }
        void set(const i_efit_error & value) {
            set_i_efit_error(value);
        }
        void set(const expiry_count & value) {
            set_expiry_count(value);
        }
        void set(const i_emove_avg & value) {
            set_i_emove_avg(value);
        }
        void set(const i_emove_std & value) {
            set_i_emove_std(value);
        }
        void set(const i_emove_min & value) {
            set_i_emove_min(value);
        }
        void set(const i_emove_max & value) {
            set_i_emove_max(value);
        }
        void set(const i_emove_cnt & value) {
            set_i_emove_cnt(value);
        }
        void set(const e_move_exp_adj1 & value) {
            set_e_move_exp_adj1(value);
        }
        void set(const e_move_yrs_adj1 & value) {
            set_e_move_yrs_adj1(value);
        }
        void set(const e_move_years1 & value) {
            set_e_move_years1(value);
        }
        void set(const e_move_ekey1 & value) {
            set_e_move_ekey1(value);
        }
        void set(const e_move_exp_adj2 & value) {
            set_e_move_exp_adj2(value);
        }
        void set(const e_move_yrs_adj2 & value) {
            set_e_move_yrs_adj2(value);
        }
        void set(const e_move_years2 & value) {
            set_e_move_years2(value);
        }
        void set(const e_move_ekey2 & value) {
            set_e_move_ekey2(value);
        }
        void set(const atm_cen_i_st & value) {
            set_atm_cen_i_st(value);
        }
        void set(const atm_cen_i_lt & value) {
            set_atm_cen_i_lt(value);
        }
        void set(const atm_cen_i_decay & value) {
            set_atm_cen_i_decay(value);
        }
        void set(const atm_cen_i_5d & value) {
            set_atm_cen_i_5d(value);
        }
        void set(const atm_cen_i_10d & value) {
            set_atm_cen_i_10d(value);
        }
        void set(const atm_cen_i_21d & value) {
            set_atm_cen_i_21d(value);
        }
        void set(const atm_cen_i_42d & value) {
            set_atm_cen_i_42d(value);
        }
        void set(const atm_cen_i_63d & value) {
            set_atm_cen_i_63d(value);
        }
        void set(const atm_cen_i_84d & value) {
            set_atm_cen_i_84d(value);
        }
        void set(const atm_cen_i_105d & value) {
            set_atm_cen_i_105d(value);
        }
        void set(const atm_cen_i_126d & value) {
            set_atm_cen_i_126d(value);
        }
        void set(const atm_cen_i_189d & value) {
            set_atm_cen_i_189d(value);
        }
        void set(const atm_cen_i_252d & value) {
            set_atm_cen_i_252d(value);
        }
        void set(const atm_cen_i_378d & value) {
            set_atm_cen_i_378d(value);
        }
        void set(const atm_cen_i_504d & value) {
            set_atm_cen_i_504d(value);
        }
        void set(const atm_cen_h_st & value) {
            set_atm_cen_h_st(value);
        }
        void set(const atm_cen_h_lt & value) {
            set_atm_cen_h_lt(value);
        }
        void set(const atm_cen_h_decay & value) {
            set_atm_cen_h_decay(value);
        }
        void set(const atm_cen_h_5d & value) {
            set_atm_cen_h_5d(value);
        }
        void set(const atm_cen_h_10d & value) {
            set_atm_cen_h_10d(value);
        }
        void set(const atm_cen_h_21d & value) {
            set_atm_cen_h_21d(value);
        }
        void set(const atm_cen_h_42d & value) {
            set_atm_cen_h_42d(value);
        }
        void set(const atm_cen_h_63d & value) {
            set_atm_cen_h_63d(value);
        }
        void set(const atm_cen_h_84d & value) {
            set_atm_cen_h_84d(value);
        }
        void set(const atm_cen_h_105d & value) {
            set_atm_cen_h_105d(value);
        }
        void set(const atm_cen_h_126d & value) {
            set_atm_cen_h_126d(value);
        }
        void set(const atm_cen_h_189d & value) {
            set_atm_cen_h_189d(value);
        }
        void set(const atm_cen_h_252d & value) {
            set_atm_cen_h_252d(value);
        }
        void set(const atm_cen_h_378d & value) {
            set_atm_cen_h_378d(value);
        }
        void set(const atm_cen_h_504d & value) {
            set_atm_cen_h_504d(value);
        }
        void set(const s_div_5d & value) {
            set_s_div_5d(value);
        }
        void set(const s_div_10d & value) {
            set_s_div_10d(value);
        }
        void set(const s_div_21d & value) {
            set_s_div_21d(value);
        }
        void set(const s_div_42d & value) {
            set_s_div_42d(value);
        }
        void set(const s_div_63d & value) {
            set_s_div_63d(value);
        }
        void set(const s_div_84d & value) {
            set_s_div_84d(value);
        }
        void set(const s_div_105d & value) {
            set_s_div_105d(value);
        }
        void set(const s_div_126d & value) {
            set_s_div_126d(value);
        }
        void set(const s_div_189d & value) {
            set_s_div_189d(value);
        }
        void set(const s_div_252d & value) {
            set_s_div_252d(value);
        }
        void set(const s_div_378d & value) {
            set_s_div_378d(value);
        }
        void set(const s_div_504d & value) {
            set_s_div_504d(value);
        }
        void set(const fwd_uprc_5d & value) {
            set_fwd_uprc_5d(value);
        }
        void set(const fwd_uprc_10d & value) {
            set_fwd_uprc_10d(value);
        }
        void set(const fwd_uprc_21d & value) {
            set_fwd_uprc_21d(value);
        }
        void set(const fwd_uprc_42d & value) {
            set_fwd_uprc_42d(value);
        }
        void set(const fwd_uprc_63d & value) {
            set_fwd_uprc_63d(value);
        }
        void set(const fwd_uprc_84d & value) {
            set_fwd_uprc_84d(value);
        }
        void set(const fwd_uprc_105d & value) {
            set_fwd_uprc_105d(value);
        }
        void set(const fwd_uprc_126d & value) {
            set_fwd_uprc_126d(value);
        }
        void set(const fwd_uprc_189d & value) {
            set_fwd_uprc_189d(value);
        }
        void set(const fwd_uprc_252d & value) {
            set_fwd_uprc_252d(value);
        }
        void set(const fwd_uprc_378d & value) {
            set_fwd_uprc_378d(value);
        }
        void set(const fwd_uprc_504d & value) {
            set_fwd_uprc_504d(value);
        }
        void set(const v_width_5d & value) {
            set_v_width_5d(value);
        }
        void set(const v_width_10d & value) {
            set_v_width_10d(value);
        }
        void set(const v_width_21d & value) {
            set_v_width_21d(value);
        }
        void set(const v_width_42d & value) {
            set_v_width_42d(value);
        }
        void set(const v_width_63d & value) {
            set_v_width_63d(value);
        }
        void set(const v_width_84d & value) {
            set_v_width_84d(value);
        }
        void set(const v_width_105d & value) {
            set_v_width_105d(value);
        }
        void set(const v_width_126d & value) {
            set_v_width_126d(value);
        }
        void set(const v_width_189d & value) {
            set_v_width_189d(value);
        }
        void set(const v_width_252d & value) {
            set_v_width_252d(value);
        }
        void set(const v_width_378d & value) {
            set_v_width_378d(value);
        }
        void set(const v_width_504d & value) {
            set_v_width_504d(value);
        }
        void set(const v_slope_5d & value) {
            set_v_slope_5d(value);
        }
        void set(const v_slope_10d & value) {
            set_v_slope_10d(value);
        }
        void set(const v_slope_21d & value) {
            set_v_slope_21d(value);
        }
        void set(const v_slope_42d & value) {
            set_v_slope_42d(value);
        }
        void set(const v_slope_63d & value) {
            set_v_slope_63d(value);
        }
        void set(const v_slope_84d & value) {
            set_v_slope_84d(value);
        }
        void set(const v_slope_105d & value) {
            set_v_slope_105d(value);
        }
        void set(const v_slope_126d & value) {
            set_v_slope_126d(value);
        }
        void set(const v_slope_189d & value) {
            set_v_slope_189d(value);
        }
        void set(const v_slope_252d & value) {
            set_v_slope_252d(value);
        }
        void set(const v_slope_378d & value) {
            set_v_slope_378d(value);
        }
        void set(const v_slope_504d & value) {
            set_v_slope_504d(value);
        }
        void set(const e_cnt_5d & value) {
            set_e_cnt_5d(value);
        }
        void set(const e_cnt_10d & value) {
            set_e_cnt_10d(value);
        }
        void set(const e_cnt_21d & value) {
            set_e_cnt_21d(value);
        }
        void set(const e_cnt_42d & value) {
            set_e_cnt_42d(value);
        }
        void set(const e_cnt_63d & value) {
            set_e_cnt_63d(value);
        }
        void set(const e_cnt_84d & value) {
            set_e_cnt_84d(value);
        }
        void set(const e_cnt_105d & value) {
            set_e_cnt_105d(value);
        }
        void set(const e_cnt_126d & value) {
            set_e_cnt_126d(value);
        }
        void set(const e_cnt_189d & value) {
            set_e_cnt_189d(value);
        }
        void set(const e_cnt_252d & value) {
            set_e_cnt_252d(value);
        }
        void set(const e_cnt_378d & value) {
            set_e_cnt_378d(value);
        }
        void set(const e_cnt_504d & value) {
            set_e_cnt_504d(value);
        }
        void set(const status & value) {
            set_status(value);
        }
        void set(const time & value) {
            set_time(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const LiveSurfaceFixedTerm & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_syn_spot);
            set(value.m_h_emove);
            set(value.m_h_emove_num);
            set(value.m_h_emove_avg);
            set(value.m_h_emove_std);
            set(value.m_h_emove_min);
            set(value.m_h_emove_max);
            set(value.m_i_emove);
            set(value.m_i_efit_code);
            set(value.m_i_efit_error);
            set(value.m_expiry_count);
            set(value.m_i_emove_avg);
            set(value.m_i_emove_std);
            set(value.m_i_emove_min);
            set(value.m_i_emove_max);
            set(value.m_i_emove_cnt);
            set(value.m_e_move_exp_adj1);
            set(value.m_e_move_yrs_adj1);
            set(value.m_e_move_years1);
            set(value.m_e_move_ekey1);
            set(value.m_e_move_exp_adj2);
            set(value.m_e_move_yrs_adj2);
            set(value.m_e_move_years2);
            set(value.m_e_move_ekey2);
            set(value.m_atm_cen_i_st);
            set(value.m_atm_cen_i_lt);
            set(value.m_atm_cen_i_decay);
            set(value.m_atm_cen_i_5d);
            set(value.m_atm_cen_i_10d);
            set(value.m_atm_cen_i_21d);
            set(value.m_atm_cen_i_42d);
            set(value.m_atm_cen_i_63d);
            set(value.m_atm_cen_i_84d);
            set(value.m_atm_cen_i_105d);
            set(value.m_atm_cen_i_126d);
            set(value.m_atm_cen_i_189d);
            set(value.m_atm_cen_i_252d);
            set(value.m_atm_cen_i_378d);
            set(value.m_atm_cen_i_504d);
            set(value.m_atm_cen_h_st);
            set(value.m_atm_cen_h_lt);
            set(value.m_atm_cen_h_decay);
            set(value.m_atm_cen_h_5d);
            set(value.m_atm_cen_h_10d);
            set(value.m_atm_cen_h_21d);
            set(value.m_atm_cen_h_42d);
            set(value.m_atm_cen_h_63d);
            set(value.m_atm_cen_h_84d);
            set(value.m_atm_cen_h_105d);
            set(value.m_atm_cen_h_126d);
            set(value.m_atm_cen_h_189d);
            set(value.m_atm_cen_h_252d);
            set(value.m_atm_cen_h_378d);
            set(value.m_atm_cen_h_504d);
            set(value.m_s_div_5d);
            set(value.m_s_div_10d);
            set(value.m_s_div_21d);
            set(value.m_s_div_42d);
            set(value.m_s_div_63d);
            set(value.m_s_div_84d);
            set(value.m_s_div_105d);
            set(value.m_s_div_126d);
            set(value.m_s_div_189d);
            set(value.m_s_div_252d);
            set(value.m_s_div_378d);
            set(value.m_s_div_504d);
            set(value.m_fwd_uprc_5d);
            set(value.m_fwd_uprc_10d);
            set(value.m_fwd_uprc_21d);
            set(value.m_fwd_uprc_42d);
            set(value.m_fwd_uprc_63d);
            set(value.m_fwd_uprc_84d);
            set(value.m_fwd_uprc_105d);
            set(value.m_fwd_uprc_126d);
            set(value.m_fwd_uprc_189d);
            set(value.m_fwd_uprc_252d);
            set(value.m_fwd_uprc_378d);
            set(value.m_fwd_uprc_504d);
            set(value.m_v_width_5d);
            set(value.m_v_width_10d);
            set(value.m_v_width_21d);
            set(value.m_v_width_42d);
            set(value.m_v_width_63d);
            set(value.m_v_width_84d);
            set(value.m_v_width_105d);
            set(value.m_v_width_126d);
            set(value.m_v_width_189d);
            set(value.m_v_width_252d);
            set(value.m_v_width_378d);
            set(value.m_v_width_504d);
            set(value.m_v_slope_5d);
            set(value.m_v_slope_10d);
            set(value.m_v_slope_21d);
            set(value.m_v_slope_42d);
            set(value.m_v_slope_63d);
            set(value.m_v_slope_84d);
            set(value.m_v_slope_105d);
            set(value.m_v_slope_126d);
            set(value.m_v_slope_189d);
            set(value.m_v_slope_252d);
            set(value.m_v_slope_378d);
            set(value.m_v_slope_504d);
            set(value.m_e_cnt_5d);
            set(value.m_e_cnt_10d);
            set(value.m_e_cnt_21d);
            set(value.m_e_cnt_42d);
            set(value.m_e_cnt_63d);
            set(value.m_e_cnt_84d);
            set(value.m_e_cnt_105d);
            set(value.m_e_cnt_126d);
            set(value.m_e_cnt_189d);
            set(value.m_e_cnt_252d);
            set(value.m_e_cnt_378d);
            set(value.m_e_cnt_504d);
            set(value.m_status);
            set(value.m_time);
            set(value.m_timestamp);
        }

        LiveSurfaceFixedTerm() {
            m__meta.set_message_type("LiveSurfaceFixedTerm");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1045, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1045, length);
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
             *this = LiveSurfaceFixedTerm{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeSynSpot() const {
            return !(m_syn_spot == 0.0);
        }
        bool IncludeHEmove() const {
            return !(m_h_emove == 0.0);
        }
        bool IncludeHEmoveNum() const {
            return !(m_h_emove_num == 0);
        }
        bool IncludeHEmoveAvg() const {
            return !(m_h_emove_avg == 0.0);
        }
        bool IncludeHEmoveStd() const {
            return !(m_h_emove_std == 0.0);
        }
        bool IncludeHEmoveMin() const {
            return !(m_h_emove_min == 0.0);
        }
        bool IncludeHEmoveMax() const {
            return !(m_h_emove_max == 0.0);
        }
        bool IncludeIEmove() const {
            return !(m_i_emove == 0.0);
        }
        bool IncludeIEfitError() const {
            return !(m_i_efit_error == 0.0);
        }
        bool IncludeExpiryCount() const {
            return !(m_expiry_count == 0);
        }
        bool IncludeIEmoveAvg() const {
            return !(m_i_emove_avg == 0.0);
        }
        bool IncludeIEmoveStd() const {
            return !(m_i_emove_std == 0.0);
        }
        bool IncludeIEmoveMin() const {
            return !(m_i_emove_min == 0.0);
        }
        bool IncludeIEmoveMax() const {
            return !(m_i_emove_max == 0.0);
        }
        bool IncludeIEmoveCnt() const {
            return !(m_i_emove_cnt == 0);
        }
        bool IncludeEMoveExpAdj1() const {
            return !(m_e_move_exp_adj1 == 0);
        }
        bool IncludeEMoveYrsAdj1() const {
            return !(m_e_move_yrs_adj1 == 0.0);
        }
        bool IncludeEMoveYears1() const {
            return !(m_e_move_years1 == 0.0);
        }
        bool IncludeEMoveEkey1() const {
            return (m_e_move_ekey1.ByteSizeLong() > 0);
        }
        bool IncludeEMoveExpAdj2() const {
            return !(m_e_move_exp_adj2 == 0);
        }
        bool IncludeEMoveYrsAdj2() const {
            return !(m_e_move_yrs_adj2 == 0.0);
        }
        bool IncludeEMoveYears2() const {
            return !(m_e_move_years2 == 0.0);
        }
        bool IncludeEMoveEkey2() const {
            return (m_e_move_ekey2.ByteSizeLong() > 0);
        }
        bool IncludeAtmCenISt() const {
            return !(m_atm_cen_i_st == 0.0);
        }
        bool IncludeAtmCenILt() const {
            return !(m_atm_cen_i_lt == 0.0);
        }
        bool IncludeAtmCenIDecay() const {
            return !(m_atm_cen_i_decay == 0.0);
        }
        bool IncludeAtmCenI5d() const {
            return !(m_atm_cen_i_5d == 0.0);
        }
        bool IncludeAtmCenI10d() const {
            return !(m_atm_cen_i_10d == 0.0);
        }
        bool IncludeAtmCenI21d() const {
            return !(m_atm_cen_i_21d == 0.0);
        }
        bool IncludeAtmCenI42d() const {
            return !(m_atm_cen_i_42d == 0.0);
        }
        bool IncludeAtmCenI63d() const {
            return !(m_atm_cen_i_63d == 0.0);
        }
        bool IncludeAtmCenI84d() const {
            return !(m_atm_cen_i_84d == 0.0);
        }
        bool IncludeAtmCenI105d() const {
            return !(m_atm_cen_i_105d == 0.0);
        }
        bool IncludeAtmCenI126d() const {
            return !(m_atm_cen_i_126d == 0.0);
        }
        bool IncludeAtmCenI189d() const {
            return !(m_atm_cen_i_189d == 0.0);
        }
        bool IncludeAtmCenI252d() const {
            return !(m_atm_cen_i_252d == 0.0);
        }
        bool IncludeAtmCenI378d() const {
            return !(m_atm_cen_i_378d == 0.0);
        }
        bool IncludeAtmCenI504d() const {
            return !(m_atm_cen_i_504d == 0.0);
        }
        bool IncludeAtmCenHSt() const {
            return !(m_atm_cen_h_st == 0.0);
        }
        bool IncludeAtmCenHLt() const {
            return !(m_atm_cen_h_lt == 0.0);
        }
        bool IncludeAtmCenHDecay() const {
            return !(m_atm_cen_h_decay == 0.0);
        }
        bool IncludeAtmCenH5d() const {
            return !(m_atm_cen_h_5d == 0.0);
        }
        bool IncludeAtmCenH10d() const {
            return !(m_atm_cen_h_10d == 0.0);
        }
        bool IncludeAtmCenH21d() const {
            return !(m_atm_cen_h_21d == 0.0);
        }
        bool IncludeAtmCenH42d() const {
            return !(m_atm_cen_h_42d == 0.0);
        }
        bool IncludeAtmCenH63d() const {
            return !(m_atm_cen_h_63d == 0.0);
        }
        bool IncludeAtmCenH84d() const {
            return !(m_atm_cen_h_84d == 0.0);
        }
        bool IncludeAtmCenH105d() const {
            return !(m_atm_cen_h_105d == 0.0);
        }
        bool IncludeAtmCenH126d() const {
            return !(m_atm_cen_h_126d == 0.0);
        }
        bool IncludeAtmCenH189d() const {
            return !(m_atm_cen_h_189d == 0.0);
        }
        bool IncludeAtmCenH252d() const {
            return !(m_atm_cen_h_252d == 0.0);
        }
        bool IncludeAtmCenH378d() const {
            return !(m_atm_cen_h_378d == 0.0);
        }
        bool IncludeAtmCenH504d() const {
            return !(m_atm_cen_h_504d == 0.0);
        }
        bool IncludeSDiv5d() const {
            return !(m_s_div_5d == 0.0);
        }
        bool IncludeSDiv10d() const {
            return !(m_s_div_10d == 0.0);
        }
        bool IncludeSDiv21d() const {
            return !(m_s_div_21d == 0.0);
        }
        bool IncludeSDiv42d() const {
            return !(m_s_div_42d == 0.0);
        }
        bool IncludeSDiv63d() const {
            return !(m_s_div_63d == 0.0);
        }
        bool IncludeSDiv84d() const {
            return !(m_s_div_84d == 0.0);
        }
        bool IncludeSDiv105d() const {
            return !(m_s_div_105d == 0.0);
        }
        bool IncludeSDiv126d() const {
            return !(m_s_div_126d == 0.0);
        }
        bool IncludeSDiv189d() const {
            return !(m_s_div_189d == 0.0);
        }
        bool IncludeSDiv252d() const {
            return !(m_s_div_252d == 0.0);
        }
        bool IncludeSDiv378d() const {
            return !(m_s_div_378d == 0.0);
        }
        bool IncludeSDiv504d() const {
            return !(m_s_div_504d == 0.0);
        }
        bool IncludeFwdUprc5d() const {
            return !(m_fwd_uprc_5d == 0.0);
        }
        bool IncludeFwdUprc10d() const {
            return !(m_fwd_uprc_10d == 0.0);
        }
        bool IncludeFwdUprc21d() const {
            return !(m_fwd_uprc_21d == 0.0);
        }
        bool IncludeFwdUprc42d() const {
            return !(m_fwd_uprc_42d == 0.0);
        }
        bool IncludeFwdUprc63d() const {
            return !(m_fwd_uprc_63d == 0.0);
        }
        bool IncludeFwdUprc84d() const {
            return !(m_fwd_uprc_84d == 0.0);
        }
        bool IncludeFwdUprc105d() const {
            return !(m_fwd_uprc_105d == 0.0);
        }
        bool IncludeFwdUprc126d() const {
            return !(m_fwd_uprc_126d == 0.0);
        }
        bool IncludeFwdUprc189d() const {
            return !(m_fwd_uprc_189d == 0.0);
        }
        bool IncludeFwdUprc252d() const {
            return !(m_fwd_uprc_252d == 0.0);
        }
        bool IncludeFwdUprc378d() const {
            return !(m_fwd_uprc_378d == 0.0);
        }
        bool IncludeFwdUprc504d() const {
            return !(m_fwd_uprc_504d == 0.0);
        }
        bool IncludeVWidth5d() const {
            return !(m_v_width_5d == 0.0);
        }
        bool IncludeVWidth10d() const {
            return !(m_v_width_10d == 0.0);
        }
        bool IncludeVWidth21d() const {
            return !(m_v_width_21d == 0.0);
        }
        bool IncludeVWidth42d() const {
            return !(m_v_width_42d == 0.0);
        }
        bool IncludeVWidth63d() const {
            return !(m_v_width_63d == 0.0);
        }
        bool IncludeVWidth84d() const {
            return !(m_v_width_84d == 0.0);
        }
        bool IncludeVWidth105d() const {
            return !(m_v_width_105d == 0.0);
        }
        bool IncludeVWidth126d() const {
            return !(m_v_width_126d == 0.0);
        }
        bool IncludeVWidth189d() const {
            return !(m_v_width_189d == 0.0);
        }
        bool IncludeVWidth252d() const {
            return !(m_v_width_252d == 0.0);
        }
        bool IncludeVWidth378d() const {
            return !(m_v_width_378d == 0.0);
        }
        bool IncludeVWidth504d() const {
            return !(m_v_width_504d == 0.0);
        }
        bool IncludeVSlope5d() const {
            return !(m_v_slope_5d == 0.0);
        }
        bool IncludeVSlope10d() const {
            return !(m_v_slope_10d == 0.0);
        }
        bool IncludeVSlope21d() const {
            return !(m_v_slope_21d == 0.0);
        }
        bool IncludeVSlope42d() const {
            return !(m_v_slope_42d == 0.0);
        }
        bool IncludeVSlope63d() const {
            return !(m_v_slope_63d == 0.0);
        }
        bool IncludeVSlope84d() const {
            return !(m_v_slope_84d == 0.0);
        }
        bool IncludeVSlope105d() const {
            return !(m_v_slope_105d == 0.0);
        }
        bool IncludeVSlope126d() const {
            return !(m_v_slope_126d == 0.0);
        }
        bool IncludeVSlope189d() const {
            return !(m_v_slope_189d == 0.0);
        }
        bool IncludeVSlope252d() const {
            return !(m_v_slope_252d == 0.0);
        }
        bool IncludeVSlope378d() const {
            return !(m_v_slope_378d == 0.0);
        }
        bool IncludeVSlope504d() const {
            return !(m_v_slope_504d == 0.0);
        }
        bool IncludeECnt5d() const {
            return !(m_e_cnt_5d == 0);
        }
        bool IncludeECnt10d() const {
            return !(m_e_cnt_10d == 0);
        }
        bool IncludeECnt21d() const {
            return !(m_e_cnt_21d == 0);
        }
        bool IncludeECnt42d() const {
            return !(m_e_cnt_42d == 0);
        }
        bool IncludeECnt63d() const {
            return !(m_e_cnt_63d == 0);
        }
        bool IncludeECnt84d() const {
            return !(m_e_cnt_84d == 0);
        }
        bool IncludeECnt105d() const {
            return !(m_e_cnt_105d == 0);
        }
        bool IncludeECnt126d() const {
            return !(m_e_cnt_126d == 0);
        }
        bool IncludeECnt189d() const {
            return !(m_e_cnt_189d == 0);
        }
        bool IncludeECnt252d() const {
            return !(m_e_cnt_252d == 0);
        }
        bool IncludeECnt378d() const {
            return !(m_e_cnt_378d == 0);
        }
        bool IncludeECnt504d() const {
            return !(m_e_cnt_504d == 0);
        }
        bool IncludeTime() const {
            return (m_time.count() != 0);
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
            if ( IncludeSynSpot()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(50,m_syn_spot);
            }
            if ( IncludeHEmove()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(100,m_h_emove);
            }
            if ( IncludeHEmoveNum()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(103,m_h_emove_num);
            }
            if ( IncludeHEmoveAvg()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_h_emove_avg);
            }
            if ( IncludeHEmoveStd()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_h_emove_std);
            }
            if ( IncludeHEmoveMin()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_h_emove_min);
            }
            if ( IncludeHEmoveMax()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_h_emove_max);
            }
            if ( IncludeIEmove()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_i_emove);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::EFitCode>(m_i_efit_code)));
            if ( IncludeIEfitError()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_i_efit_error);
            }
            if ( IncludeExpiryCount()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(127,m_expiry_count);
            }
            if ( IncludeIEmoveAvg()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_i_emove_avg);
            }
            if ( IncludeIEmoveStd()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_i_emove_std);
            }
            if ( IncludeIEmoveMin()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_i_emove_min);
            }
            if ( IncludeIEmoveMax()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_i_emove_max);
            }
            if ( IncludeIEmoveCnt()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(142,m_i_emove_cnt);
            }
            if ( IncludeEMoveExpAdj1()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(145,m_e_move_exp_adj1);
            }
            if ( IncludeEMoveYrsAdj1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(148,m_e_move_yrs_adj1);
            }
            if ( IncludeEMoveYears1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(151,m_e_move_years1);
            }
            if ( IncludeEMoveEkey1()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_e_move_ekey1.setCodecExpiryKey(expiryKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(154, expiryKeyLayout);
            }
            if ( IncludeEMoveExpAdj2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(157,m_e_move_exp_adj2);
            }
            if ( IncludeEMoveYrsAdj2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(160,m_e_move_yrs_adj2);
            }
            if ( IncludeEMoveYears2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_e_move_years2);
            }
            if ( IncludeEMoveEkey2()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_e_move_ekey2.setCodecExpiryKey(expiryKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(166, expiryKeyLayout);
            }
            if ( IncludeAtmCenISt()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(169,m_atm_cen_i_st);
            }
            if ( IncludeAtmCenILt()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(172,m_atm_cen_i_lt);
            }
            if ( IncludeAtmCenIDecay()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(175,m_atm_cen_i_decay);
            }
            if ( IncludeAtmCenI5d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_atm_cen_i_5d);
            }
            if ( IncludeAtmCenI10d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(181,m_atm_cen_i_10d);
            }
            if ( IncludeAtmCenI21d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(184,m_atm_cen_i_21d);
            }
            if ( IncludeAtmCenI42d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(187,m_atm_cen_i_42d);
            }
            if ( IncludeAtmCenI63d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(190,m_atm_cen_i_63d);
            }
            if ( IncludeAtmCenI84d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(193,m_atm_cen_i_84d);
            }
            if ( IncludeAtmCenI105d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(196,m_atm_cen_i_105d);
            }
            if ( IncludeAtmCenI126d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(199,m_atm_cen_i_126d);
            }
            if ( IncludeAtmCenI189d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(202,m_atm_cen_i_189d);
            }
            if ( IncludeAtmCenI252d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(205,m_atm_cen_i_252d);
            }
            if ( IncludeAtmCenI378d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(208,m_atm_cen_i_378d);
            }
            if ( IncludeAtmCenI504d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(211,m_atm_cen_i_504d);
            }
            if ( IncludeAtmCenHSt()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(214,m_atm_cen_h_st);
            }
            if ( IncludeAtmCenHLt()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(217,m_atm_cen_h_lt);
            }
            if ( IncludeAtmCenHDecay()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(220,m_atm_cen_h_decay);
            }
            if ( IncludeAtmCenH5d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(223,m_atm_cen_h_5d);
            }
            if ( IncludeAtmCenH10d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(226,m_atm_cen_h_10d);
            }
            if ( IncludeAtmCenH21d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(229,m_atm_cen_h_21d);
            }
            if ( IncludeAtmCenH42d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(232,m_atm_cen_h_42d);
            }
            if ( IncludeAtmCenH63d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(235,m_atm_cen_h_63d);
            }
            if ( IncludeAtmCenH84d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(238,m_atm_cen_h_84d);
            }
            if ( IncludeAtmCenH105d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(241,m_atm_cen_h_105d);
            }
            if ( IncludeAtmCenH126d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(244,m_atm_cen_h_126d);
            }
            if ( IncludeAtmCenH189d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(247,m_atm_cen_h_189d);
            }
            if ( IncludeAtmCenH252d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(250,m_atm_cen_h_252d);
            }
            if ( IncludeAtmCenH378d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(253,m_atm_cen_h_378d);
            }
            if ( IncludeAtmCenH504d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(256,m_atm_cen_h_504d);
            }
            if ( IncludeSDiv5d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(259,m_s_div_5d);
            }
            if ( IncludeSDiv10d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(262,m_s_div_10d);
            }
            if ( IncludeSDiv21d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(265,m_s_div_21d);
            }
            if ( IncludeSDiv42d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(268,m_s_div_42d);
            }
            if ( IncludeSDiv63d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(271,m_s_div_63d);
            }
            if ( IncludeSDiv84d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(274,m_s_div_84d);
            }
            if ( IncludeSDiv105d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(277,m_s_div_105d);
            }
            if ( IncludeSDiv126d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(280,m_s_div_126d);
            }
            if ( IncludeSDiv189d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(283,m_s_div_189d);
            }
            if ( IncludeSDiv252d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(286,m_s_div_252d);
            }
            if ( IncludeSDiv378d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(289,m_s_div_378d);
            }
            if ( IncludeSDiv504d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(292,m_s_div_504d);
            }
            if ( IncludeFwdUprc5d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(295,m_fwd_uprc_5d);
            }
            if ( IncludeFwdUprc10d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(298,m_fwd_uprc_10d);
            }
            if ( IncludeFwdUprc21d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(301,m_fwd_uprc_21d);
            }
            if ( IncludeFwdUprc42d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(304,m_fwd_uprc_42d);
            }
            if ( IncludeFwdUprc63d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(307,m_fwd_uprc_63d);
            }
            if ( IncludeFwdUprc84d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(310,m_fwd_uprc_84d);
            }
            if ( IncludeFwdUprc105d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(313,m_fwd_uprc_105d);
            }
            if ( IncludeFwdUprc126d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(316,m_fwd_uprc_126d);
            }
            if ( IncludeFwdUprc189d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(319,m_fwd_uprc_189d);
            }
            if ( IncludeFwdUprc252d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(322,m_fwd_uprc_252d);
            }
            if ( IncludeFwdUprc378d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(325,m_fwd_uprc_378d);
            }
            if ( IncludeFwdUprc504d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(328,m_fwd_uprc_504d);
            }
            if ( IncludeVWidth5d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(331,m_v_width_5d);
            }
            if ( IncludeVWidth10d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(334,m_v_width_10d);
            }
            if ( IncludeVWidth21d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(337,m_v_width_21d);
            }
            if ( IncludeVWidth42d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(340,m_v_width_42d);
            }
            if ( IncludeVWidth63d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(343,m_v_width_63d);
            }
            if ( IncludeVWidth84d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(346,m_v_width_84d);
            }
            if ( IncludeVWidth105d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(349,m_v_width_105d);
            }
            if ( IncludeVWidth126d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(352,m_v_width_126d);
            }
            if ( IncludeVWidth189d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(355,m_v_width_189d);
            }
            if ( IncludeVWidth252d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(358,m_v_width_252d);
            }
            if ( IncludeVWidth378d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(361,m_v_width_378d);
            }
            if ( IncludeVWidth504d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(364,m_v_width_504d);
            }
            if ( IncludeVSlope5d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(367,m_v_slope_5d);
            }
            if ( IncludeVSlope10d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(370,m_v_slope_10d);
            }
            if ( IncludeVSlope21d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(373,m_v_slope_21d);
            }
            if ( IncludeVSlope42d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(376,m_v_slope_42d);
            }
            if ( IncludeVSlope63d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(379,m_v_slope_63d);
            }
            if ( IncludeVSlope84d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(382,m_v_slope_84d);
            }
            if ( IncludeVSlope105d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(385,m_v_slope_105d);
            }
            if ( IncludeVSlope126d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(388,m_v_slope_126d);
            }
            if ( IncludeVSlope189d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(391,m_v_slope_189d);
            }
            if ( IncludeVSlope252d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(394,m_v_slope_252d);
            }
            if ( IncludeVSlope378d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(397,m_v_slope_378d);
            }
            if ( IncludeVSlope504d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(400,m_v_slope_504d);
            }
            if ( IncludeECnt5d()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(403,m_e_cnt_5d);
            }
            if ( IncludeECnt10d()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(406,m_e_cnt_10d);
            }
            if ( IncludeECnt21d()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(409,m_e_cnt_21d);
            }
            if ( IncludeECnt42d()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(412,m_e_cnt_42d);
            }
            if ( IncludeECnt63d()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(415,m_e_cnt_63d);
            }
            if ( IncludeECnt84d()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(418,m_e_cnt_84d);
            }
            if ( IncludeECnt105d()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(421,m_e_cnt_105d);
            }
            if ( IncludeECnt126d()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(424,m_e_cnt_126d);
            }
            if ( IncludeECnt189d()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(427,m_e_cnt_189d);
            }
            if ( IncludeECnt252d()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(430,m_e_cnt_252d);
            }
            if ( IncludeECnt378d()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(433,m_e_cnt_378d);
            }
            if ( IncludeECnt504d()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(436,m_e_cnt_504d);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(439,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CurveStatus>(m_status)));
            if ( IncludeTime()) {
                totalSize += SRProtobufCPP::FieldCodec::TimeSpanFieldSize(442, m_time);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(445, m_timestamp);
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
            if ( IncludeSynSpot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,50,m_syn_spot);
            }
            if ( IncludeHEmove()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,100,m_h_emove);
            }
            if ( IncludeHEmoveNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,103,m_h_emove_num);
            }
            if ( IncludeHEmoveAvg()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_h_emove_avg);
            }
            if ( IncludeHEmoveStd()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_h_emove_std);
            }
            if ( IncludeHEmoveMin()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_h_emove_min);
            }
            if ( IncludeHEmoveMax()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_h_emove_max);
            }
            if ( IncludeIEmove()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_i_emove);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::EFitCode>(m_i_efit_code)));
            if ( IncludeIEfitError()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_i_efit_error);
            }
            if ( IncludeExpiryCount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,127,m_expiry_count);
            }
            if ( IncludeIEmoveAvg()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_i_emove_avg);
            }
            if ( IncludeIEmoveStd()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_i_emove_std);
            }
            if ( IncludeIEmoveMin()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_i_emove_min);
            }
            if ( IncludeIEmoveMax()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_i_emove_max);
            }
            if ( IncludeIEmoveCnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,142,m_i_emove_cnt);
            }
            if ( IncludeEMoveExpAdj1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,145,m_e_move_exp_adj1);
            }
            if ( IncludeEMoveYrsAdj1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,148,m_e_move_yrs_adj1);
            }
            if ( IncludeEMoveYears1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,151,m_e_move_years1);
            }
            if ( IncludeEMoveEkey1()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_e_move_ekey1.setCodecExpiryKey(expiryKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 154, expiryKeyLayout);
            }
            if ( IncludeEMoveExpAdj2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,157,m_e_move_exp_adj2);
            }
            if ( IncludeEMoveYrsAdj2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,160,m_e_move_yrs_adj2);
            }
            if ( IncludeEMoveYears2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_e_move_years2);
            }
            if ( IncludeEMoveEkey2()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_e_move_ekey2.setCodecExpiryKey(expiryKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 166, expiryKeyLayout);
            }
            if ( IncludeAtmCenISt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,169,m_atm_cen_i_st);
            }
            if ( IncludeAtmCenILt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,172,m_atm_cen_i_lt);
            }
            if ( IncludeAtmCenIDecay()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,175,m_atm_cen_i_decay);
            }
            if ( IncludeAtmCenI5d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_atm_cen_i_5d);
            }
            if ( IncludeAtmCenI10d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,181,m_atm_cen_i_10d);
            }
            if ( IncludeAtmCenI21d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,184,m_atm_cen_i_21d);
            }
            if ( IncludeAtmCenI42d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,187,m_atm_cen_i_42d);
            }
            if ( IncludeAtmCenI63d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,190,m_atm_cen_i_63d);
            }
            if ( IncludeAtmCenI84d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,193,m_atm_cen_i_84d);
            }
            if ( IncludeAtmCenI105d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,196,m_atm_cen_i_105d);
            }
            if ( IncludeAtmCenI126d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,199,m_atm_cen_i_126d);
            }
            if ( IncludeAtmCenI189d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,202,m_atm_cen_i_189d);
            }
            if ( IncludeAtmCenI252d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,205,m_atm_cen_i_252d);
            }
            if ( IncludeAtmCenI378d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,208,m_atm_cen_i_378d);
            }
            if ( IncludeAtmCenI504d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,211,m_atm_cen_i_504d);
            }
            if ( IncludeAtmCenHSt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,214,m_atm_cen_h_st);
            }
            if ( IncludeAtmCenHLt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,217,m_atm_cen_h_lt);
            }
            if ( IncludeAtmCenHDecay()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,220,m_atm_cen_h_decay);
            }
            if ( IncludeAtmCenH5d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,223,m_atm_cen_h_5d);
            }
            if ( IncludeAtmCenH10d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,226,m_atm_cen_h_10d);
            }
            if ( IncludeAtmCenH21d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,229,m_atm_cen_h_21d);
            }
            if ( IncludeAtmCenH42d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,232,m_atm_cen_h_42d);
            }
            if ( IncludeAtmCenH63d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,235,m_atm_cen_h_63d);
            }
            if ( IncludeAtmCenH84d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,238,m_atm_cen_h_84d);
            }
            if ( IncludeAtmCenH105d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,241,m_atm_cen_h_105d);
            }
            if ( IncludeAtmCenH126d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,244,m_atm_cen_h_126d);
            }
            if ( IncludeAtmCenH189d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,247,m_atm_cen_h_189d);
            }
            if ( IncludeAtmCenH252d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,250,m_atm_cen_h_252d);
            }
            if ( IncludeAtmCenH378d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,253,m_atm_cen_h_378d);
            }
            if ( IncludeAtmCenH504d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,256,m_atm_cen_h_504d);
            }
            if ( IncludeSDiv5d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,259,m_s_div_5d);
            }
            if ( IncludeSDiv10d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,262,m_s_div_10d);
            }
            if ( IncludeSDiv21d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,265,m_s_div_21d);
            }
            if ( IncludeSDiv42d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,268,m_s_div_42d);
            }
            if ( IncludeSDiv63d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,271,m_s_div_63d);
            }
            if ( IncludeSDiv84d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,274,m_s_div_84d);
            }
            if ( IncludeSDiv105d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,277,m_s_div_105d);
            }
            if ( IncludeSDiv126d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,280,m_s_div_126d);
            }
            if ( IncludeSDiv189d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,283,m_s_div_189d);
            }
            if ( IncludeSDiv252d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,286,m_s_div_252d);
            }
            if ( IncludeSDiv378d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,289,m_s_div_378d);
            }
            if ( IncludeSDiv504d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,292,m_s_div_504d);
            }
            if ( IncludeFwdUprc5d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,295,m_fwd_uprc_5d);
            }
            if ( IncludeFwdUprc10d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,298,m_fwd_uprc_10d);
            }
            if ( IncludeFwdUprc21d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,301,m_fwd_uprc_21d);
            }
            if ( IncludeFwdUprc42d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,304,m_fwd_uprc_42d);
            }
            if ( IncludeFwdUprc63d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,307,m_fwd_uprc_63d);
            }
            if ( IncludeFwdUprc84d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,310,m_fwd_uprc_84d);
            }
            if ( IncludeFwdUprc105d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,313,m_fwd_uprc_105d);
            }
            if ( IncludeFwdUprc126d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,316,m_fwd_uprc_126d);
            }
            if ( IncludeFwdUprc189d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,319,m_fwd_uprc_189d);
            }
            if ( IncludeFwdUprc252d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,322,m_fwd_uprc_252d);
            }
            if ( IncludeFwdUprc378d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,325,m_fwd_uprc_378d);
            }
            if ( IncludeFwdUprc504d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,328,m_fwd_uprc_504d);
            }
            if ( IncludeVWidth5d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,331,m_v_width_5d);
            }
            if ( IncludeVWidth10d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,334,m_v_width_10d);
            }
            if ( IncludeVWidth21d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,337,m_v_width_21d);
            }
            if ( IncludeVWidth42d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,340,m_v_width_42d);
            }
            if ( IncludeVWidth63d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,343,m_v_width_63d);
            }
            if ( IncludeVWidth84d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,346,m_v_width_84d);
            }
            if ( IncludeVWidth105d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,349,m_v_width_105d);
            }
            if ( IncludeVWidth126d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,352,m_v_width_126d);
            }
            if ( IncludeVWidth189d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,355,m_v_width_189d);
            }
            if ( IncludeVWidth252d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,358,m_v_width_252d);
            }
            if ( IncludeVWidth378d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,361,m_v_width_378d);
            }
            if ( IncludeVWidth504d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,364,m_v_width_504d);
            }
            if ( IncludeVSlope5d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,367,m_v_slope_5d);
            }
            if ( IncludeVSlope10d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,370,m_v_slope_10d);
            }
            if ( IncludeVSlope21d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,373,m_v_slope_21d);
            }
            if ( IncludeVSlope42d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,376,m_v_slope_42d);
            }
            if ( IncludeVSlope63d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,379,m_v_slope_63d);
            }
            if ( IncludeVSlope84d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,382,m_v_slope_84d);
            }
            if ( IncludeVSlope105d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,385,m_v_slope_105d);
            }
            if ( IncludeVSlope126d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,388,m_v_slope_126d);
            }
            if ( IncludeVSlope189d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,391,m_v_slope_189d);
            }
            if ( IncludeVSlope252d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,394,m_v_slope_252d);
            }
            if ( IncludeVSlope378d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,397,m_v_slope_378d);
            }
            if ( IncludeVSlope504d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,400,m_v_slope_504d);
            }
            if ( IncludeECnt5d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,403,m_e_cnt_5d);
            }
            if ( IncludeECnt10d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,406,m_e_cnt_10d);
            }
            if ( IncludeECnt21d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,409,m_e_cnt_21d);
            }
            if ( IncludeECnt42d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,412,m_e_cnt_42d);
            }
            if ( IncludeECnt63d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,415,m_e_cnt_63d);
            }
            if ( IncludeECnt84d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,418,m_e_cnt_84d);
            }
            if ( IncludeECnt105d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,421,m_e_cnt_105d);
            }
            if ( IncludeECnt126d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,424,m_e_cnt_126d);
            }
            if ( IncludeECnt189d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,427,m_e_cnt_189d);
            }
            if ( IncludeECnt252d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,430,m_e_cnt_252d);
            }
            if ( IncludeECnt378d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,433,m_e_cnt_378d);
            }
            if ( IncludeECnt504d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,436,m_e_cnt_504d);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,439,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CurveStatus>(m_status)));
            if ( IncludeTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeTimeSpan(dest, 442, m_time);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 445, m_timestamp);
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
                    case 50: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_syn_spot = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 100: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_h_emove = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_h_emove_num = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_h_emove_avg = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_h_emove_std = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_h_emove_min = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_h_emove_max = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_i_emove = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_i_efit_code = static_cast<spiderrock::protobuf::api::EFitCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_i_efit_error = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_expiry_count = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_i_emove_avg = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_i_emove_std = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_i_emove_min = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_i_emove_max = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_i_emove_cnt = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_e_move_exp_adj1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_e_move_yrs_adj1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_e_move_years1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_e_move_ekey1.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_e_move_exp_adj2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_e_move_yrs_adj2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_e_move_years2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_e_move_ekey2.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_i_st = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_i_lt = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_i_decay = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_i_5d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_i_10d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_i_21d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_i_42d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_i_63d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_i_84d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_i_105d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_i_126d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_i_189d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_i_252d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_i_378d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_i_504d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_h_st = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_h_lt = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_h_decay = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_h_5d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 226: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_h_10d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 229: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_h_21d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 232: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_h_42d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_h_63d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 238: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_h_84d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 241: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_h_105d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 244: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_h_126d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 247: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_h_189d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 250: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_h_252d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 253: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_h_378d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 256: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_h_504d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 259: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_div_5d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 262: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_div_10d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 265: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_div_21d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 268: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_div_42d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 271: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_div_63d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 274: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_div_84d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 277: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_div_105d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 280: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_div_126d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 283: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_div_189d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 286: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_div_252d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 289: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_div_378d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 292: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_div_504d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 295: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fwd_uprc_5d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 298: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fwd_uprc_10d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 301: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fwd_uprc_21d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 304: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fwd_uprc_42d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 307: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fwd_uprc_63d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 310: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fwd_uprc_84d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 313: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fwd_uprc_105d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 316: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fwd_uprc_126d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 319: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fwd_uprc_189d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 322: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fwd_uprc_252d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 325: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fwd_uprc_378d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 328: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fwd_uprc_504d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 331: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_v_width_5d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 334: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_v_width_10d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 337: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_v_width_21d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 340: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_v_width_42d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 343: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_v_width_63d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 346: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_v_width_84d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 349: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_v_width_105d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 352: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_v_width_126d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 355: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_v_width_189d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 358: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_v_width_252d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 361: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_v_width_378d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 364: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_v_width_504d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 367: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_v_slope_5d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 370: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_v_slope_10d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 373: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_v_slope_21d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 376: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_v_slope_42d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 379: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_v_slope_63d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 382: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_v_slope_84d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 385: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_v_slope_105d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 388: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_v_slope_126d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 391: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_v_slope_189d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 394: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_v_slope_252d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 397: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_v_slope_378d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 400: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_v_slope_504d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 403: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_e_cnt_5d = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 406: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_e_cnt_10d = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 409: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_e_cnt_21d = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 412: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_e_cnt_42d = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 415: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_e_cnt_63d = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 418: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_e_cnt_84d = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 421: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_e_cnt_105d = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 424: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_e_cnt_126d = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 427: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_e_cnt_189d = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 430: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_e_cnt_252d = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 433: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_e_cnt_378d = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 436: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_e_cnt_504d = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 439: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_status = static_cast<spiderrock::protobuf::api::CurveStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 442: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_time = SRProtobufCPP::FieldCodec::DecodeTimeSpan(pos,max);
                        }
                        break;
                    }
                    case 445: {
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

    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::_meta>() const { return LiveSurfaceFixedTerm::_meta{ m__meta}; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::pkey>() const { return LiveSurfaceFixedTerm::pkey{ m_pkey}; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::syn_spot>() const { return m_syn_spot; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::h_emove>() const { return m_h_emove; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::h_emove_num>() const { return m_h_emove_num; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::h_emove_avg>() const { return m_h_emove_avg; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::h_emove_std>() const { return m_h_emove_std; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::h_emove_min>() const { return m_h_emove_min; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::h_emove_max>() const { return m_h_emove_max; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::i_emove>() const { return m_i_emove; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::i_efit_code>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::EFitCode>( m_i_efit_code)); }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::i_efit_error>() const { return m_i_efit_error; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::expiry_count>() const { return m_expiry_count; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::i_emove_avg>() const { return m_i_emove_avg; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::i_emove_std>() const { return m_i_emove_std; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::i_emove_min>() const { return m_i_emove_min; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::i_emove_max>() const { return m_i_emove_max; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::i_emove_cnt>() const { return m_i_emove_cnt; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::e_move_exp_adj1>() const { return m_e_move_exp_adj1; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::e_move_yrs_adj1>() const { return m_e_move_yrs_adj1; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::e_move_years1>() const { return m_e_move_years1; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::e_move_ekey1>() const { return LiveSurfaceFixedTerm::e_move_ekey1{ m_e_move_ekey1}; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::e_move_exp_adj2>() const { return m_e_move_exp_adj2; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::e_move_yrs_adj2>() const { return m_e_move_yrs_adj2; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::e_move_years2>() const { return m_e_move_years2; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::e_move_ekey2>() const { return LiveSurfaceFixedTerm::e_move_ekey2{ m_e_move_ekey2}; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_i_st>() const { return m_atm_cen_i_st; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_i_lt>() const { return m_atm_cen_i_lt; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_i_decay>() const { return m_atm_cen_i_decay; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_i_5d>() const { return m_atm_cen_i_5d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_i_10d>() const { return m_atm_cen_i_10d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_i_21d>() const { return m_atm_cen_i_21d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_i_42d>() const { return m_atm_cen_i_42d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_i_63d>() const { return m_atm_cen_i_63d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_i_84d>() const { return m_atm_cen_i_84d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_i_105d>() const { return m_atm_cen_i_105d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_i_126d>() const { return m_atm_cen_i_126d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_i_189d>() const { return m_atm_cen_i_189d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_i_252d>() const { return m_atm_cen_i_252d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_i_378d>() const { return m_atm_cen_i_378d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_i_504d>() const { return m_atm_cen_i_504d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_h_st>() const { return m_atm_cen_h_st; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_h_lt>() const { return m_atm_cen_h_lt; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_h_decay>() const { return m_atm_cen_h_decay; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_h_5d>() const { return m_atm_cen_h_5d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_h_10d>() const { return m_atm_cen_h_10d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_h_21d>() const { return m_atm_cen_h_21d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_h_42d>() const { return m_atm_cen_h_42d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_h_63d>() const { return m_atm_cen_h_63d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_h_84d>() const { return m_atm_cen_h_84d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_h_105d>() const { return m_atm_cen_h_105d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_h_126d>() const { return m_atm_cen_h_126d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_h_189d>() const { return m_atm_cen_h_189d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_h_252d>() const { return m_atm_cen_h_252d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_h_378d>() const { return m_atm_cen_h_378d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::atm_cen_h_504d>() const { return m_atm_cen_h_504d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::s_div_5d>() const { return m_s_div_5d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::s_div_10d>() const { return m_s_div_10d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::s_div_21d>() const { return m_s_div_21d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::s_div_42d>() const { return m_s_div_42d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::s_div_63d>() const { return m_s_div_63d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::s_div_84d>() const { return m_s_div_84d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::s_div_105d>() const { return m_s_div_105d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::s_div_126d>() const { return m_s_div_126d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::s_div_189d>() const { return m_s_div_189d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::s_div_252d>() const { return m_s_div_252d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::s_div_378d>() const { return m_s_div_378d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::s_div_504d>() const { return m_s_div_504d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::fwd_uprc_5d>() const { return m_fwd_uprc_5d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::fwd_uprc_10d>() const { return m_fwd_uprc_10d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::fwd_uprc_21d>() const { return m_fwd_uprc_21d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::fwd_uprc_42d>() const { return m_fwd_uprc_42d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::fwd_uprc_63d>() const { return m_fwd_uprc_63d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::fwd_uprc_84d>() const { return m_fwd_uprc_84d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::fwd_uprc_105d>() const { return m_fwd_uprc_105d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::fwd_uprc_126d>() const { return m_fwd_uprc_126d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::fwd_uprc_189d>() const { return m_fwd_uprc_189d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::fwd_uprc_252d>() const { return m_fwd_uprc_252d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::fwd_uprc_378d>() const { return m_fwd_uprc_378d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::fwd_uprc_504d>() const { return m_fwd_uprc_504d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::v_width_5d>() const { return m_v_width_5d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::v_width_10d>() const { return m_v_width_10d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::v_width_21d>() const { return m_v_width_21d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::v_width_42d>() const { return m_v_width_42d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::v_width_63d>() const { return m_v_width_63d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::v_width_84d>() const { return m_v_width_84d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::v_width_105d>() const { return m_v_width_105d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::v_width_126d>() const { return m_v_width_126d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::v_width_189d>() const { return m_v_width_189d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::v_width_252d>() const { return m_v_width_252d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::v_width_378d>() const { return m_v_width_378d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::v_width_504d>() const { return m_v_width_504d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::v_slope_5d>() const { return m_v_slope_5d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::v_slope_10d>() const { return m_v_slope_10d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::v_slope_21d>() const { return m_v_slope_21d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::v_slope_42d>() const { return m_v_slope_42d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::v_slope_63d>() const { return m_v_slope_63d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::v_slope_84d>() const { return m_v_slope_84d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::v_slope_105d>() const { return m_v_slope_105d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::v_slope_126d>() const { return m_v_slope_126d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::v_slope_189d>() const { return m_v_slope_189d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::v_slope_252d>() const { return m_v_slope_252d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::v_slope_378d>() const { return m_v_slope_378d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::v_slope_504d>() const { return m_v_slope_504d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::e_cnt_5d>() const { return m_e_cnt_5d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::e_cnt_10d>() const { return m_e_cnt_10d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::e_cnt_21d>() const { return m_e_cnt_21d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::e_cnt_42d>() const { return m_e_cnt_42d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::e_cnt_63d>() const { return m_e_cnt_63d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::e_cnt_84d>() const { return m_e_cnt_84d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::e_cnt_105d>() const { return m_e_cnt_105d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::e_cnt_126d>() const { return m_e_cnt_126d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::e_cnt_189d>() const { return m_e_cnt_189d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::e_cnt_252d>() const { return m_e_cnt_252d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::e_cnt_378d>() const { return m_e_cnt_378d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::e_cnt_504d>() const { return m_e_cnt_504d; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CurveStatus>( m_status)); }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::time>() const { return m_time; }
    template<> inline const auto LiveSurfaceFixedTerm::get<LiveSurfaceFixedTerm::timestamp>() const { return m_timestamp; }
    template<> inline const auto LiveSurfaceFixedTerm_PKey::get<LiveSurfaceFixedTerm_PKey::ticker>() const { return LiveSurfaceFixedTerm_PKey::ticker{m_ticker}; }
    template<> inline const auto LiveSurfaceFixedTerm_PKey::get<LiveSurfaceFixedTerm_PKey::surface_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SurfaceCurveType>(m_surface_type));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const LiveSurfaceFixedTerm_PKey& m) {
        o << "\"ticker\":{" << m.get<LiveSurfaceFixedTerm_PKey::ticker>() << "}";
        o << ",\"surface_type\":" << (int64_t)m.get<LiveSurfaceFixedTerm_PKey::surface_type>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const LiveSurfaceFixedTerm& m) {
        o << "\"_meta\":{" << m.get<LiveSurfaceFixedTerm::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<LiveSurfaceFixedTerm::pkey>() << "}";
        o << ",\"syn_spot\":" << m.get<LiveSurfaceFixedTerm::syn_spot>();
        o << ",\"h_emove\":" << m.get<LiveSurfaceFixedTerm::h_emove>();
        o << ",\"h_emove_num\":" << m.get<LiveSurfaceFixedTerm::h_emove_num>();
        o << ",\"h_emove_avg\":" << m.get<LiveSurfaceFixedTerm::h_emove_avg>();
        o << ",\"h_emove_std\":" << m.get<LiveSurfaceFixedTerm::h_emove_std>();
        o << ",\"h_emove_min\":" << m.get<LiveSurfaceFixedTerm::h_emove_min>();
        o << ",\"h_emove_max\":" << m.get<LiveSurfaceFixedTerm::h_emove_max>();
        o << ",\"i_emove\":" << m.get<LiveSurfaceFixedTerm::i_emove>();
        o << ",\"i_efit_code\":" << (int64_t)m.get<LiveSurfaceFixedTerm::i_efit_code>();
        o << ",\"i_efit_error\":" << m.get<LiveSurfaceFixedTerm::i_efit_error>();
        o << ",\"expiry_count\":" << m.get<LiveSurfaceFixedTerm::expiry_count>();
        o << ",\"i_emove_avg\":" << m.get<LiveSurfaceFixedTerm::i_emove_avg>();
        o << ",\"i_emove_std\":" << m.get<LiveSurfaceFixedTerm::i_emove_std>();
        o << ",\"i_emove_min\":" << m.get<LiveSurfaceFixedTerm::i_emove_min>();
        o << ",\"i_emove_max\":" << m.get<LiveSurfaceFixedTerm::i_emove_max>();
        o << ",\"i_emove_cnt\":" << m.get<LiveSurfaceFixedTerm::i_emove_cnt>();
        o << ",\"e_move_exp_adj1\":" << m.get<LiveSurfaceFixedTerm::e_move_exp_adj1>();
        o << ",\"e_move_yrs_adj1\":" << m.get<LiveSurfaceFixedTerm::e_move_yrs_adj1>();
        o << ",\"e_move_years1\":" << m.get<LiveSurfaceFixedTerm::e_move_years1>();
        o << ",\"e_move_ekey1\":{" << m.get<LiveSurfaceFixedTerm::e_move_ekey1>() << "}";
        o << ",\"e_move_exp_adj2\":" << m.get<LiveSurfaceFixedTerm::e_move_exp_adj2>();
        o << ",\"e_move_yrs_adj2\":" << m.get<LiveSurfaceFixedTerm::e_move_yrs_adj2>();
        o << ",\"e_move_years2\":" << m.get<LiveSurfaceFixedTerm::e_move_years2>();
        o << ",\"e_move_ekey2\":{" << m.get<LiveSurfaceFixedTerm::e_move_ekey2>() << "}";
        o << ",\"atm_cen_i_st\":" << m.get<LiveSurfaceFixedTerm::atm_cen_i_st>();
        o << ",\"atm_cen_i_lt\":" << m.get<LiveSurfaceFixedTerm::atm_cen_i_lt>();
        o << ",\"atm_cen_i_decay\":" << m.get<LiveSurfaceFixedTerm::atm_cen_i_decay>();
        o << ",\"atm_cen_i_5d\":" << m.get<LiveSurfaceFixedTerm::atm_cen_i_5d>();
        o << ",\"atm_cen_i_10d\":" << m.get<LiveSurfaceFixedTerm::atm_cen_i_10d>();
        o << ",\"atm_cen_i_21d\":" << m.get<LiveSurfaceFixedTerm::atm_cen_i_21d>();
        o << ",\"atm_cen_i_42d\":" << m.get<LiveSurfaceFixedTerm::atm_cen_i_42d>();
        o << ",\"atm_cen_i_63d\":" << m.get<LiveSurfaceFixedTerm::atm_cen_i_63d>();
        o << ",\"atm_cen_i_84d\":" << m.get<LiveSurfaceFixedTerm::atm_cen_i_84d>();
        o << ",\"atm_cen_i_105d\":" << m.get<LiveSurfaceFixedTerm::atm_cen_i_105d>();
        o << ",\"atm_cen_i_126d\":" << m.get<LiveSurfaceFixedTerm::atm_cen_i_126d>();
        o << ",\"atm_cen_i_189d\":" << m.get<LiveSurfaceFixedTerm::atm_cen_i_189d>();
        o << ",\"atm_cen_i_252d\":" << m.get<LiveSurfaceFixedTerm::atm_cen_i_252d>();
        o << ",\"atm_cen_i_378d\":" << m.get<LiveSurfaceFixedTerm::atm_cen_i_378d>();
        o << ",\"atm_cen_i_504d\":" << m.get<LiveSurfaceFixedTerm::atm_cen_i_504d>();
        o << ",\"atm_cen_h_st\":" << m.get<LiveSurfaceFixedTerm::atm_cen_h_st>();
        o << ",\"atm_cen_h_lt\":" << m.get<LiveSurfaceFixedTerm::atm_cen_h_lt>();
        o << ",\"atm_cen_h_decay\":" << m.get<LiveSurfaceFixedTerm::atm_cen_h_decay>();
        o << ",\"atm_cen_h_5d\":" << m.get<LiveSurfaceFixedTerm::atm_cen_h_5d>();
        o << ",\"atm_cen_h_10d\":" << m.get<LiveSurfaceFixedTerm::atm_cen_h_10d>();
        o << ",\"atm_cen_h_21d\":" << m.get<LiveSurfaceFixedTerm::atm_cen_h_21d>();
        o << ",\"atm_cen_h_42d\":" << m.get<LiveSurfaceFixedTerm::atm_cen_h_42d>();
        o << ",\"atm_cen_h_63d\":" << m.get<LiveSurfaceFixedTerm::atm_cen_h_63d>();
        o << ",\"atm_cen_h_84d\":" << m.get<LiveSurfaceFixedTerm::atm_cen_h_84d>();
        o << ",\"atm_cen_h_105d\":" << m.get<LiveSurfaceFixedTerm::atm_cen_h_105d>();
        o << ",\"atm_cen_h_126d\":" << m.get<LiveSurfaceFixedTerm::atm_cen_h_126d>();
        o << ",\"atm_cen_h_189d\":" << m.get<LiveSurfaceFixedTerm::atm_cen_h_189d>();
        o << ",\"atm_cen_h_252d\":" << m.get<LiveSurfaceFixedTerm::atm_cen_h_252d>();
        o << ",\"atm_cen_h_378d\":" << m.get<LiveSurfaceFixedTerm::atm_cen_h_378d>();
        o << ",\"atm_cen_h_504d\":" << m.get<LiveSurfaceFixedTerm::atm_cen_h_504d>();
        o << ",\"s_div_5d\":" << m.get<LiveSurfaceFixedTerm::s_div_5d>();
        o << ",\"s_div_10d\":" << m.get<LiveSurfaceFixedTerm::s_div_10d>();
        o << ",\"s_div_21d\":" << m.get<LiveSurfaceFixedTerm::s_div_21d>();
        o << ",\"s_div_42d\":" << m.get<LiveSurfaceFixedTerm::s_div_42d>();
        o << ",\"s_div_63d\":" << m.get<LiveSurfaceFixedTerm::s_div_63d>();
        o << ",\"s_div_84d\":" << m.get<LiveSurfaceFixedTerm::s_div_84d>();
        o << ",\"s_div_105d\":" << m.get<LiveSurfaceFixedTerm::s_div_105d>();
        o << ",\"s_div_126d\":" << m.get<LiveSurfaceFixedTerm::s_div_126d>();
        o << ",\"s_div_189d\":" << m.get<LiveSurfaceFixedTerm::s_div_189d>();
        o << ",\"s_div_252d\":" << m.get<LiveSurfaceFixedTerm::s_div_252d>();
        o << ",\"s_div_378d\":" << m.get<LiveSurfaceFixedTerm::s_div_378d>();
        o << ",\"s_div_504d\":" << m.get<LiveSurfaceFixedTerm::s_div_504d>();
        o << ",\"fwd_uprc_5d\":" << m.get<LiveSurfaceFixedTerm::fwd_uprc_5d>();
        o << ",\"fwd_uprc_10d\":" << m.get<LiveSurfaceFixedTerm::fwd_uprc_10d>();
        o << ",\"fwd_uprc_21d\":" << m.get<LiveSurfaceFixedTerm::fwd_uprc_21d>();
        o << ",\"fwd_uprc_42d\":" << m.get<LiveSurfaceFixedTerm::fwd_uprc_42d>();
        o << ",\"fwd_uprc_63d\":" << m.get<LiveSurfaceFixedTerm::fwd_uprc_63d>();
        o << ",\"fwd_uprc_84d\":" << m.get<LiveSurfaceFixedTerm::fwd_uprc_84d>();
        o << ",\"fwd_uprc_105d\":" << m.get<LiveSurfaceFixedTerm::fwd_uprc_105d>();
        o << ",\"fwd_uprc_126d\":" << m.get<LiveSurfaceFixedTerm::fwd_uprc_126d>();
        o << ",\"fwd_uprc_189d\":" << m.get<LiveSurfaceFixedTerm::fwd_uprc_189d>();
        o << ",\"fwd_uprc_252d\":" << m.get<LiveSurfaceFixedTerm::fwd_uprc_252d>();
        o << ",\"fwd_uprc_378d\":" << m.get<LiveSurfaceFixedTerm::fwd_uprc_378d>();
        o << ",\"fwd_uprc_504d\":" << m.get<LiveSurfaceFixedTerm::fwd_uprc_504d>();
        o << ",\"v_width_5d\":" << m.get<LiveSurfaceFixedTerm::v_width_5d>();
        o << ",\"v_width_10d\":" << m.get<LiveSurfaceFixedTerm::v_width_10d>();
        o << ",\"v_width_21d\":" << m.get<LiveSurfaceFixedTerm::v_width_21d>();
        o << ",\"v_width_42d\":" << m.get<LiveSurfaceFixedTerm::v_width_42d>();
        o << ",\"v_width_63d\":" << m.get<LiveSurfaceFixedTerm::v_width_63d>();
        o << ",\"v_width_84d\":" << m.get<LiveSurfaceFixedTerm::v_width_84d>();
        o << ",\"v_width_105d\":" << m.get<LiveSurfaceFixedTerm::v_width_105d>();
        o << ",\"v_width_126d\":" << m.get<LiveSurfaceFixedTerm::v_width_126d>();
        o << ",\"v_width_189d\":" << m.get<LiveSurfaceFixedTerm::v_width_189d>();
        o << ",\"v_width_252d\":" << m.get<LiveSurfaceFixedTerm::v_width_252d>();
        o << ",\"v_width_378d\":" << m.get<LiveSurfaceFixedTerm::v_width_378d>();
        o << ",\"v_width_504d\":" << m.get<LiveSurfaceFixedTerm::v_width_504d>();
        o << ",\"v_slope_5d\":" << m.get<LiveSurfaceFixedTerm::v_slope_5d>();
        o << ",\"v_slope_10d\":" << m.get<LiveSurfaceFixedTerm::v_slope_10d>();
        o << ",\"v_slope_21d\":" << m.get<LiveSurfaceFixedTerm::v_slope_21d>();
        o << ",\"v_slope_42d\":" << m.get<LiveSurfaceFixedTerm::v_slope_42d>();
        o << ",\"v_slope_63d\":" << m.get<LiveSurfaceFixedTerm::v_slope_63d>();
        o << ",\"v_slope_84d\":" << m.get<LiveSurfaceFixedTerm::v_slope_84d>();
        o << ",\"v_slope_105d\":" << m.get<LiveSurfaceFixedTerm::v_slope_105d>();
        o << ",\"v_slope_126d\":" << m.get<LiveSurfaceFixedTerm::v_slope_126d>();
        o << ",\"v_slope_189d\":" << m.get<LiveSurfaceFixedTerm::v_slope_189d>();
        o << ",\"v_slope_252d\":" << m.get<LiveSurfaceFixedTerm::v_slope_252d>();
        o << ",\"v_slope_378d\":" << m.get<LiveSurfaceFixedTerm::v_slope_378d>();
        o << ",\"v_slope_504d\":" << m.get<LiveSurfaceFixedTerm::v_slope_504d>();
        o << ",\"e_cnt_5d\":" << m.get<LiveSurfaceFixedTerm::e_cnt_5d>();
        o << ",\"e_cnt_10d\":" << m.get<LiveSurfaceFixedTerm::e_cnt_10d>();
        o << ",\"e_cnt_21d\":" << m.get<LiveSurfaceFixedTerm::e_cnt_21d>();
        o << ",\"e_cnt_42d\":" << m.get<LiveSurfaceFixedTerm::e_cnt_42d>();
        o << ",\"e_cnt_63d\":" << m.get<LiveSurfaceFixedTerm::e_cnt_63d>();
        o << ",\"e_cnt_84d\":" << m.get<LiveSurfaceFixedTerm::e_cnt_84d>();
        o << ",\"e_cnt_105d\":" << m.get<LiveSurfaceFixedTerm::e_cnt_105d>();
        o << ",\"e_cnt_126d\":" << m.get<LiveSurfaceFixedTerm::e_cnt_126d>();
        o << ",\"e_cnt_189d\":" << m.get<LiveSurfaceFixedTerm::e_cnt_189d>();
        o << ",\"e_cnt_252d\":" << m.get<LiveSurfaceFixedTerm::e_cnt_252d>();
        o << ",\"e_cnt_378d\":" << m.get<LiveSurfaceFixedTerm::e_cnt_378d>();
        o << ",\"e_cnt_504d\":" << m.get<LiveSurfaceFixedTerm::e_cnt_504d>();
        o << ",\"status\":" << (int64_t)m.get<LiveSurfaceFixedTerm::status>();
        o << ",\"time\":\"" << m.get<LiveSurfaceFixedTerm::time>().count() << "\"";
        {
            std::time_t tt = m.get<LiveSurfaceFixedTerm::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}