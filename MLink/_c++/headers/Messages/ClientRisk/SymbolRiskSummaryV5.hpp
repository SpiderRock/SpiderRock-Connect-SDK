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

    #ifndef _sector__GUARD__
    #define _sector__GUARD__
    DECL_STRONG_TYPE(sector, string);
    #endif//_sector__GUARD__

    #ifndef _industry__int32__GUARD__
    #define _industry__int32__GUARD__
    DECL_STRONG_TYPE(industry__int32, int32);
    #endif//_industry__int32__GUARD__

    #ifndef _beta__GUARD__
    #define _beta__GUARD__
    DECL_STRONG_TYPE(beta, float);
    #endif//_beta__GUARD__

    #ifndef _beta_source__GUARD__
    #define _beta_source__GUARD__
    DECL_STRONG_TYPE(beta_source, spiderrock::protobuf::api::BetaSource);
    #endif//_beta_source__GUARD__

    #ifndef _u_prc__double__GUARD__
    #define _u_prc__double__GUARD__
    DECL_STRONG_TYPE(u_prc__double, double);
    #endif//_u_prc__double__GUARD__

    #ifndef _u_mark__double__GUARD__
    #define _u_mark__double__GUARD__
    DECL_STRONG_TYPE(u_mark__double, double);
    #endif//_u_mark__double__GUARD__

    #ifndef _u_opn_mark__GUARD__
    #define _u_opn_mark__GUARD__
    DECL_STRONG_TYPE(u_opn_mark, double);
    #endif//_u_opn_mark__GUARD__

    #ifndef _ln_ddelta__GUARD__
    #define _ln_ddelta__GUARD__
    DECL_STRONG_TYPE(ln_ddelta, double);
    #endif//_ln_ddelta__GUARD__

    #ifndef _sh_ddelta__GUARD__
    #define _sh_ddelta__GUARD__
    DECL_STRONG_TYPE(sh_ddelta, double);
    #endif//_sh_ddelta__GUARD__

    #ifndef _ln_stk_mkt_value_mid__GUARD__
    #define _ln_stk_mkt_value_mid__GUARD__
    DECL_STRONG_TYPE(ln_stk_mkt_value_mid, double);
    #endif//_ln_stk_mkt_value_mid__GUARD__

    #ifndef _sh_stk_mkt_value_mid__GUARD__
    #define _sh_stk_mkt_value_mid__GUARD__
    DECL_STRONG_TYPE(sh_stk_mkt_value_mid, double);
    #endif//_sh_stk_mkt_value_mid__GUARD__

    #ifndef _opt_mkt_value_mid__GUARD__
    #define _opt_mkt_value_mid__GUARD__
    DECL_STRONG_TYPE(opt_mkt_value_mid, double);
    #endif//_opt_mkt_value_mid__GUARD__

    #ifndef _opt_mkt_value_vol__GUARD__
    #define _opt_mkt_value_vol__GUARD__
    DECL_STRONG_TYPE(opt_mkt_value_vol, double);
    #endif//_opt_mkt_value_vol__GUARD__

    #ifndef _sh_opn_pos_clr__GUARD__
    #define _sh_opn_pos_clr__GUARD__
    DECL_STRONG_TYPE(sh_opn_pos_clr, int32);
    #endif//_sh_opn_pos_clr__GUARD__

    #ifndef _sh_opn_pos_prv__GUARD__
    #define _sh_opn_pos_prv__GUARD__
    DECL_STRONG_TYPE(sh_opn_pos_prv, int32);
    #endif//_sh_opn_pos_prv__GUARD__

    #ifndef _sh_opn_pos__GUARD__
    #define _sh_opn_pos__GUARD__
    DECL_STRONG_TYPE(sh_opn_pos, int32);
    #endif//_sh_opn_pos__GUARD__

    #ifndef _sh_bot__GUARD__
    #define _sh_bot__GUARD__
    DECL_STRONG_TYPE(sh_bot, int32);
    #endif//_sh_bot__GUARD__

    #ifndef _sh_sld__GUARD__
    #define _sh_sld__GUARD__
    DECL_STRONG_TYPE(sh_sld, int32);
    #endif//_sh_sld__GUARD__

    #ifndef _sh_sld_shrt__GUARD__
    #define _sh_sld_shrt__GUARD__
    DECL_STRONG_TYPE(sh_sld_shrt, int32);
    #endif//_sh_sld_shrt__GUARD__

    #ifndef _sh_mny_bot__GUARD__
    #define _sh_mny_bot__GUARD__
    DECL_STRONG_TYPE(sh_mny_bot, double);
    #endif//_sh_mny_bot__GUARD__

    #ifndef _sh_mny_sld__GUARD__
    #define _sh_mny_sld__GUARD__
    DECL_STRONG_TYPE(sh_mny_sld, double);
    #endif//_sh_mny_sld__GUARD__

    #ifndef _sh_bot_hdg__GUARD__
    #define _sh_bot_hdg__GUARD__
    DECL_STRONG_TYPE(sh_bot_hdg, int32);
    #endif//_sh_bot_hdg__GUARD__

    #ifndef _sh_sld_hdg__GUARD__
    #define _sh_sld_hdg__GUARD__
    DECL_STRONG_TYPE(sh_sld_hdg, int32);
    #endif//_sh_sld_hdg__GUARD__

    #ifndef _sh_bot_trh__GUARD__
    #define _sh_bot_trh__GUARD__
    DECL_STRONG_TYPE(sh_bot_trh, int32);
    #endif//_sh_bot_trh__GUARD__

    #ifndef _sh_sld_trh__GUARD__
    #define _sh_sld_trh__GUARD__
    DECL_STRONG_TYPE(sh_sld_trh, int32);
    #endif//_sh_sld_trh__GUARD__

    #ifndef _sh_bot_opn__GUARD__
    #define _sh_bot_opn__GUARD__
    DECL_STRONG_TYPE(sh_bot_opn, int32);
    #endif//_sh_bot_opn__GUARD__

    #ifndef _sh_sld_opn__GUARD__
    #define _sh_sld_opn__GUARD__
    DECL_STRONG_TYPE(sh_sld_opn, int32);
    #endif//_sh_sld_opn__GUARD__

    #ifndef _sh_bot_trd__GUARD__
    #define _sh_bot_trd__GUARD__
    DECL_STRONG_TYPE(sh_bot_trd, int32);
    #endif//_sh_bot_trd__GUARD__

    #ifndef _sh_sld_trd__GUARD__
    #define _sh_sld_trd__GUARD__
    DECL_STRONG_TYPE(sh_sld_trd, int32);
    #endif//_sh_sld_trd__GUARD__

    #ifndef _max_stk_dttm__GUARD__
    #define _max_stk_dttm__GUARD__
    DECL_STRONG_TYPE(max_stk_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_max_stk_dttm__GUARD__

    #ifndef _st_pnl_mid__double__GUARD__
    #define _st_pnl_mid__double__GUARD__
    DECL_STRONG_TYPE(st_pnl_mid__double, double);
    #endif//_st_pnl_mid__double__GUARD__

    #ifndef _st_pnl_clr__double__GUARD__
    #define _st_pnl_clr__double__GUARD__
    DECL_STRONG_TYPE(st_pnl_clr__double, double);
    #endif//_st_pnl_clr__double__GUARD__

    #ifndef _st_pnl_day__GUARD__
    #define _st_pnl_day__GUARD__
    DECL_STRONG_TYPE(st_pnl_day, double);
    #endif//_st_pnl_day__GUARD__

    #ifndef _st_div_pnl__GUARD__
    #define _st_div_pnl__GUARD__
    DECL_STRONG_TYPE(st_div_pnl, double);
    #endif//_st_div_pnl__GUARD__

    #ifndef _st_borrow_pnl__GUARD__
    #define _st_borrow_pnl__GUARD__
    DECL_STRONG_TYPE(st_borrow_pnl, double);
    #endif//_st_borrow_pnl__GUARD__

    #ifndef _op_cn_abs_cur_pos__GUARD__
    #define _op_cn_abs_cur_pos__GUARD__
    DECL_STRONG_TYPE(op_cn_abs_cur_pos, int32);
    #endif//_op_cn_abs_cur_pos__GUARD__

    #ifndef _op_cn_abs_opn_clr__GUARD__
    #define _op_cn_abs_opn_clr__GUARD__
    DECL_STRONG_TYPE(op_cn_abs_opn_clr, int32);
    #endif//_op_cn_abs_opn_clr__GUARD__

    #ifndef _op_cn_abs_opn_prv__GUARD__
    #define _op_cn_abs_opn_prv__GUARD__
    DECL_STRONG_TYPE(op_cn_abs_opn_prv, int32);
    #endif//_op_cn_abs_opn_prv__GUARD__

    #ifndef _op_cn_abs_opn_pos__GUARD__
    #define _op_cn_abs_opn_pos__GUARD__
    DECL_STRONG_TYPE(op_cn_abs_opn_pos, int32);
    #endif//_op_cn_abs_opn_pos__GUARD__

    #ifndef _op_cn_abs_opn_brk__GUARD__
    #define _op_cn_abs_opn_brk__GUARD__
    DECL_STRONG_TYPE(op_cn_abs_opn_brk, int32);
    #endif//_op_cn_abs_opn_brk__GUARD__

    #ifndef _op_sh_short__GUARD__
    #define _op_sh_short__GUARD__
    DECL_STRONG_TYPE(op_sh_short, int32);
    #endif//_op_sh_short__GUARD__

    #ifndef _op_cn_pos_call__GUARD__
    #define _op_cn_pos_call__GUARD__
    DECL_STRONG_TYPE(op_cn_pos_call, int32);
    #endif//_op_cn_pos_call__GUARD__

    #ifndef _op_cn_pos_put__GUARD__
    #define _op_cn_pos_put__GUARD__
    DECL_STRONG_TYPE(op_cn_pos_put, int32);
    #endif//_op_cn_pos_put__GUARD__

    #ifndef _op_cn_abs_pair__GUARD__
    #define _op_cn_abs_pair__GUARD__
    DECL_STRONG_TYPE(op_cn_abs_pair, int32);
    #endif//_op_cn_abs_pair__GUARD__

    #ifndef _abs_atm_equiv_cn__GUARD__
    #define _abs_atm_equiv_cn__GUARD__
    DECL_STRONG_TYPE(abs_atm_equiv_cn, float);
    #endif//_abs_atm_equiv_cn__GUARD__

    #ifndef _op_cn_bot__GUARD__
    #define _op_cn_bot__GUARD__
    DECL_STRONG_TYPE(op_cn_bot, int32);
    #endif//_op_cn_bot__GUARD__

    #ifndef _op_cn_sld__GUARD__
    #define _op_cn_sld__GUARD__
    DECL_STRONG_TYPE(op_cn_sld, int32);
    #endif//_op_cn_sld__GUARD__

    #ifndef _op_mny_bot__GUARD__
    #define _op_mny_bot__GUARD__
    DECL_STRONG_TYPE(op_mny_bot, double);
    #endif//_op_mny_bot__GUARD__

    #ifndef _op_mny_sld__GUARD__
    #define _op_mny_sld__GUARD__
    DECL_STRONG_TYPE(op_mny_sld, double);
    #endif//_op_mny_sld__GUARD__

    #ifndef _op_prem_bot__GUARD__
    #define _op_prem_bot__GUARD__
    DECL_STRONG_TYPE(op_prem_bot, float);
    #endif//_op_prem_bot__GUARD__

    #ifndef _op_prem_sld__GUARD__
    #define _op_prem_sld__GUARD__
    DECL_STRONG_TYPE(op_prem_sld, float);
    #endif//_op_prem_sld__GUARD__

    #ifndef _max_opt_dttm__GUARD__
    #define _max_opt_dttm__GUARD__
    DECL_STRONG_TYPE(max_opt_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_max_opt_dttm__GUARD__

    #ifndef _op_pnl_vol__double__GUARD__
    #define _op_pnl_vol__double__GUARD__
    DECL_STRONG_TYPE(op_pnl_vol__double, double);
    #endif//_op_pnl_vol__double__GUARD__

    #ifndef _op_pnl_mid__double__GUARD__
    #define _op_pnl_mid__double__GUARD__
    DECL_STRONG_TYPE(op_pnl_mid__double, double);
    #endif//_op_pnl_mid__double__GUARD__

    #ifndef _op_pnl_clr__double__GUARD__
    #define _op_pnl_clr__double__GUARD__
    DECL_STRONG_TYPE(op_pnl_clr__double, double);
    #endif//_op_pnl_clr__double__GUARD__

    #ifndef _op_pnl_brk__double__GUARD__
    #define _op_pnl_brk__double__GUARD__
    DECL_STRONG_TYPE(op_pnl_brk__double, double);
    #endif//_op_pnl_brk__double__GUARD__

    #ifndef _op_pnl_day__double__GUARD__
    #define _op_pnl_day__double__GUARD__
    DECL_STRONG_TYPE(op_pnl_day__double, double);
    #endif//_op_pnl_day__double__GUARD__

    #ifndef _op_dn_pnl_day__double__GUARD__
    #define _op_dn_pnl_day__double__GUARD__
    DECL_STRONG_TYPE(op_dn_pnl_day__double, double);
    #endif//_op_dn_pnl_day__double__GUARD__

    #ifndef _op_day_vega__GUARD__
    #define _op_day_vega__GUARD__
    DECL_STRONG_TYPE(op_day_vega, float);
    #endif//_op_day_vega__GUARD__

    #ifndef _op_day_wvega__GUARD__
    #define _op_day_wvega__GUARD__
    DECL_STRONG_TYPE(op_day_wvega, float);
    #endif//_op_day_wvega__GUARD__

    #ifndef _op_day_tvega__GUARD__
    #define _op_day_tvega__GUARD__
    DECL_STRONG_TYPE(op_day_tvega, float);
    #endif//_op_day_tvega__GUARD__

    #ifndef _op_day_wt_vega__GUARD__
    #define _op_day_wt_vega__GUARD__
    DECL_STRONG_TYPE(op_day_wt_vega, float);
    #endif//_op_day_wt_vega__GUARD__

    #ifndef _op_day_theta__GUARD__
    #define _op_day_theta__GUARD__
    DECL_STRONG_TYPE(op_day_theta, float);
    #endif//_op_day_theta__GUARD__

    #ifndef _op_day_delta__GUARD__
    #define _op_day_delta__GUARD__
    DECL_STRONG_TYPE(op_day_delta, float);
    #endif//_op_day_delta__GUARD__

    #ifndef _op_trd_delta__GUARD__
    #define _op_trd_delta__GUARD__
    DECL_STRONG_TYPE(op_trd_delta, float);
    #endif//_op_trd_delta__GUARD__

    #ifndef _pair_pnl__GUARD__
    #define _pair_pnl__GUARD__
    DECL_STRONG_TYPE(pair_pnl, float);
    #endif//_pair_pnl__GUARD__

    #ifndef _cont_hedge_pnl__GUARD__
    #define _cont_hedge_pnl__GUARD__
    DECL_STRONG_TYPE(cont_hedge_pnl, float);
    #endif//_cont_hedge_pnl__GUARD__

    #ifndef _cont_hedge_pnl1__GUARD__
    #define _cont_hedge_pnl1__GUARD__
    DECL_STRONG_TYPE(cont_hedge_pnl1, float);
    #endif//_cont_hedge_pnl1__GUARD__

    #ifndef _op_edge_opened__GUARD__
    #define _op_edge_opened__GUARD__
    DECL_STRONG_TYPE(op_edge_opened, float);
    #endif//_op_edge_opened__GUARD__

    #ifndef _op_edge_closed__GUARD__
    #define _op_edge_closed__GUARD__
    DECL_STRONG_TYPE(op_edge_closed, float);
    #endif//_op_edge_closed__GUARD__

    #ifndef _pnl_dn__GUARD__
    #define _pnl_dn__GUARD__
    DECL_STRONG_TYPE(pnl_dn, float);
    #endif//_pnl_dn__GUARD__

    #ifndef _pnl_de__GUARD__
    #define _pnl_de__GUARD__
    DECL_STRONG_TYPE(pnl_de, float);
    #endif//_pnl_de__GUARD__

    #ifndef _pnl_sl__GUARD__
    #define _pnl_sl__GUARD__
    DECL_STRONG_TYPE(pnl_sl, float);
    #endif//_pnl_sl__GUARD__

    #ifndef _pnl_ga__GUARD__
    #define _pnl_ga__GUARD__
    DECL_STRONG_TYPE(pnl_ga, float);
    #endif//_pnl_ga__GUARD__

    #ifndef _pnl_th__GUARD__
    #define _pnl_th__GUARD__
    DECL_STRONG_TYPE(pnl_th, float);
    #endif//_pnl_th__GUARD__

    #ifndef _pnl_ve__GUARD__
    #define _pnl_ve__GUARD__
    DECL_STRONG_TYPE(pnl_ve, float);
    #endif//_pnl_ve__GUARD__

    #ifndef _pnl_vo__GUARD__
    #define _pnl_vo__GUARD__
    DECL_STRONG_TYPE(pnl_vo, float);
    #endif//_pnl_vo__GUARD__

    #ifndef _pnl_va__GUARD__
    #define _pnl_va__GUARD__
    DECL_STRONG_TYPE(pnl_va, float);
    #endif//_pnl_va__GUARD__

    #ifndef _pnl_err__GUARD__
    #define _pnl_err__GUARD__
    DECL_STRONG_TYPE(pnl_err, float);
    #endif//_pnl_err__GUARD__

    #ifndef _pnl_rate__GUARD__
    #define _pnl_rate__GUARD__
    DECL_STRONG_TYPE(pnl_rate, float);
    #endif//_pnl_rate__GUARD__

    #ifndef _pnl_sdiv__GUARD__
    #define _pnl_sdiv__GUARD__
    DECL_STRONG_TYPE(pnl_sdiv, float);
    #endif//_pnl_sdiv__GUARD__

    #ifndef _pnl_ddiv__GUARD__
    #define _pnl_ddiv__GUARD__
    DECL_STRONG_TYPE(pnl_ddiv, float);
    #endif//_pnl_ddiv__GUARD__

    #ifndef _pnl_te__GUARD__
    #define _pnl_te__GUARD__
    DECL_STRONG_TYPE(pnl_te, float);
    #endif//_pnl_te__GUARD__

    #ifndef _pct_iv_change__GUARD__
    #define _pct_iv_change__GUARD__
    DECL_STRONG_TYPE(pct_iv_change, float);
    #endif//_pct_iv_change__GUARD__

    #ifndef _pct_iv_vega__GUARD__
    #define _pct_iv_vega__GUARD__
    DECL_STRONG_TYPE(pct_iv_vega, float);
    #endif//_pct_iv_vega__GUARD__

    #ifndef _pct_tv_change__GUARD__
    #define _pct_tv_change__GUARD__
    DECL_STRONG_TYPE(pct_tv_change, float);
    #endif//_pct_tv_change__GUARD__

    #ifndef _pct_tv_vega__GUARD__
    #define _pct_tv_vega__GUARD__
    DECL_STRONG_TYPE(pct_tv_vega, float);
    #endif//_pct_tv_vega__GUARD__

    #ifndef _stk_width_mny__GUARD__
    #define _stk_width_mny__GUARD__
    DECL_STRONG_TYPE(stk_width_mny, float);
    #endif//_stk_width_mny__GUARD__

    #ifndef _opt_width_mny__GUARD__
    #define _opt_width_mny__GUARD__
    DECL_STRONG_TYPE(opt_width_mny, float);
    #endif//_opt_width_mny__GUARD__

    #ifndef _day_ddelta__GUARD__
    #define _day_ddelta__GUARD__
    DECL_STRONG_TYPE(day_ddelta, float);
    #endif//_day_ddelta__GUARD__

    #ifndef _delta__float__GUARD__
    #define _delta__float__GUARD__
    DECL_STRONG_TYPE(delta__float, float);
    #endif//_delta__float__GUARD__

    #ifndef _ddelta__GUARD__
    #define _ddelta__GUARD__
    DECL_STRONG_TYPE(ddelta, float);
    #endif//_ddelta__GUARD__

    #ifndef _de_decay__GUARD__
    #define _de_decay__GUARD__
    DECL_STRONG_TYPE(de_decay, float);
    #endif//_de_decay__GUARD__

    #ifndef _dd_decay__GUARD__
    #define _dd_decay__GUARD__
    DECL_STRONG_TYPE(dd_decay, float);
    #endif//_dd_decay__GUARD__

    #ifndef _gamma__GUARD__
    #define _gamma__GUARD__
    DECL_STRONG_TYPE(gamma, float);
    #endif//_gamma__GUARD__

    #ifndef _d_gamma__GUARD__
    #define _d_gamma__GUARD__
    DECL_STRONG_TYPE(d_gamma, float);
    #endif//_d_gamma__GUARD__

    #ifndef _theta__GUARD__
    #define _theta__GUARD__
    DECL_STRONG_TYPE(theta, float);
    #endif//_theta__GUARD__

    #ifndef _rho__GUARD__
    #define _rho__GUARD__
    DECL_STRONG_TYPE(rho, float);
    #endif//_rho__GUARD__

    #ifndef _vega__GUARD__
    #define _vega__GUARD__
    DECL_STRONG_TYPE(vega, float);
    #endif//_vega__GUARD__

    #ifndef _t_vega__GUARD__
    #define _t_vega__GUARD__
    DECL_STRONG_TYPE(t_vega, float);
    #endif//_t_vega__GUARD__

    #ifndef _w_vega__GUARD__
    #define _w_vega__GUARD__
    DECL_STRONG_TYPE(w_vega, float);
    #endif//_w_vega__GUARD__

    #ifndef _wt_vega__GUARD__
    #define _wt_vega__GUARD__
    DECL_STRONG_TYPE(wt_vega, float);
    #endif//_wt_vega__GUARD__

    #ifndef _ivol_ve__GUARD__
    #define _ivol_ve__GUARD__
    DECL_STRONG_TYPE(ivol_ve, float);
    #endif//_ivol_ve__GUARD__

    #ifndef _volga__GUARD__
    #define _volga__GUARD__
    DECL_STRONG_TYPE(volga, float);
    #endif//_volga__GUARD__

    #ifndef _vanna__GUARD__
    #define _vanna__GUARD__
    DECL_STRONG_TYPE(vanna, float);
    #endif//_vanna__GUARD__

    #ifndef _slope__GUARD__
    #define _slope__GUARD__
    DECL_STRONG_TYPE(slope, float);
    #endif//_slope__GUARD__

    #ifndef _avega__GUARD__
    #define _avega__GUARD__
    DECL_STRONG_TYPE(avega, float);
    #endif//_avega__GUARD__

    #ifndef _atheta__GUARD__
    #define _atheta__GUARD__
    DECL_STRONG_TYPE(atheta, float);
    #endif//_atheta__GUARD__

    #ifndef _hedge_gamma__GUARD__
    #define _hedge_gamma__GUARD__
    DECL_STRONG_TYPE(hedge_gamma, float);
    #endif//_hedge_gamma__GUARD__

    #ifndef _hedge_dgamma__GUARD__
    #define _hedge_dgamma__GUARD__
    DECL_STRONG_TYPE(hedge_dgamma, float);
    #endif//_hedge_dgamma__GUARD__

    #ifndef _prem_ov_par__GUARD__
    #define _prem_ov_par__GUARD__
    DECL_STRONG_TYPE(prem_ov_par, float);
    #endif//_prem_ov_par__GUARD__

    #ifndef _simp_prem_ov_par__GUARD__
    #define _simp_prem_ov_par__GUARD__
    DECL_STRONG_TYPE(simp_prem_ov_par, float);
    #endif//_simp_prem_ov_par__GUARD__

    #ifndef _wt_ve_dd__GUARD__
    #define _wt_ve_dd__GUARD__
    DECL_STRONG_TYPE(wt_ve_dd, float);
    #endif//_wt_ve_dd__GUARD__

    #ifndef _wt_ve_dn__GUARD__
    #define _wt_ve_dn__GUARD__
    DECL_STRONG_TYPE(wt_ve_dn, float);
    #endif//_wt_ve_dn__GUARD__

    #ifndef _wt_ve_at__GUARD__
    #define _wt_ve_at__GUARD__
    DECL_STRONG_TYPE(wt_ve_at, float);
    #endif//_wt_ve_at__GUARD__

    #ifndef _wt_ve_up__GUARD__
    #define _wt_ve_up__GUARD__
    DECL_STRONG_TYPE(wt_ve_up, float);
    #endif//_wt_ve_up__GUARD__

    #ifndef _wt_ve_du__GUARD__
    #define _wt_ve_du__GUARD__
    DECL_STRONG_TYPE(wt_ve_du, float);
    #endif//_wt_ve_du__GUARD__

    #ifndef _wt_ve_m1__GUARD__
    #define _wt_ve_m1__GUARD__
    DECL_STRONG_TYPE(wt_ve_m1, float);
    #endif//_wt_ve_m1__GUARD__

    #ifndef _wt_ve_m2__GUARD__
    #define _wt_ve_m2__GUARD__
    DECL_STRONG_TYPE(wt_ve_m2, float);
    #endif//_wt_ve_m2__GUARD__

    #ifndef _wt_ve_m3__GUARD__
    #define _wt_ve_m3__GUARD__
    DECL_STRONG_TYPE(wt_ve_m3, float);
    #endif//_wt_ve_m3__GUARD__

    #ifndef _wt_ve_m4__GUARD__
    #define _wt_ve_m4__GUARD__
    DECL_STRONG_TYPE(wt_ve_m4, float);
    #endif//_wt_ve_m4__GUARD__

    #ifndef _wt_ve_m5__GUARD__
    #define _wt_ve_m5__GUARD__
    DECL_STRONG_TYPE(wt_ve_m5, float);
    #endif//_wt_ve_m5__GUARD__

    #ifndef _pin_xx__GUARD__
    #define _pin_xx__GUARD__
    DECL_STRONG_TYPE(pin_xx, float);
    #endif//_pin_xx__GUARD__

    #ifndef _opn_de_below__GUARD__
    #define _opn_de_below__GUARD__
    DECL_STRONG_TYPE(opn_de_below, float);
    #endif//_opn_de_below__GUARD__

    #ifndef _opn_de_above__GUARD__
    #define _opn_de_above__GUARD__
    DECL_STRONG_TYPE(opn_de_above, float);
    #endif//_opn_de_above__GUARD__

    #ifndef _opn_dde_below__GUARD__
    #define _opn_dde_below__GUARD__
    DECL_STRONG_TYPE(opn_dde_below, float);
    #endif//_opn_dde_below__GUARD__

    #ifndef _opn_dde_above__GUARD__
    #define _opn_dde_above__GUARD__
    DECL_STRONG_TYPE(opn_dde_above, float);
    #endif//_opn_dde_above__GUARD__

    #ifndef _pos_de_below__GUARD__
    #define _pos_de_below__GUARD__
    DECL_STRONG_TYPE(pos_de_below, float);
    #endif//_pos_de_below__GUARD__

    #ifndef _pos_de_above__GUARD__
    #define _pos_de_above__GUARD__
    DECL_STRONG_TYPE(pos_de_above, float);
    #endif//_pos_de_above__GUARD__

    #ifndef _pos_dde_below__GUARD__
    #define _pos_dde_below__GUARD__
    DECL_STRONG_TYPE(pos_dde_below, float);
    #endif//_pos_dde_below__GUARD__

    #ifndef _pos_dde_above__GUARD__
    #define _pos_dde_above__GUARD__
    DECL_STRONG_TYPE(pos_dde_above, float);
    #endif//_pos_dde_above__GUARD__

    #ifndef _pos_hedge_delta_ex__GUARD__
    #define _pos_hedge_delta_ex__GUARD__
    DECL_STRONG_TYPE(pos_hedge_delta_ex, float);
    #endif//_pos_hedge_delta_ex__GUARD__

    #ifndef _pos_hedge_ddelta_ex__GUARD__
    #define _pos_hedge_ddelta_ex__GUARD__
    DECL_STRONG_TYPE(pos_hedge_ddelta_ex, float);
    #endif//_pos_hedge_ddelta_ex__GUARD__

    #ifndef _mmh_delta__GUARD__
    #define _mmh_delta__GUARD__
    DECL_STRONG_TYPE(mmh_delta, float);
    #endif//_mmh_delta__GUARD__

    #ifndef _mmh_contracts__GUARD__
    #define _mmh_contracts__GUARD__
    DECL_STRONG_TYPE(mmh_contracts, int32);
    #endif//_mmh_contracts__GUARD__

    #ifndef _mmh_sources__GUARD__
    #define _mmh_sources__GUARD__
    DECL_STRONG_TYPE(mmh_sources, string);
    #endif//_mmh_sources__GUARD__

    #ifndef _t_edge__GUARD__
    #define _t_edge__GUARD__
    DECL_STRONG_TYPE(t_edge, float);
    #endif//_t_edge__GUARD__

    #ifndef _t_edge_mult__GUARD__
    #define _t_edge_mult__GUARD__
    DECL_STRONG_TYPE(t_edge_mult, float);
    #endif//_t_edge_mult__GUARD__

    #ifndef _t_edge_pr__GUARD__
    #define _t_edge_pr__GUARD__
    DECL_STRONG_TYPE(t_edge_pr, float);
    #endif//_t_edge_pr__GUARD__

    #ifndef _t_edge_mult_pr__GUARD__
    #define _t_edge_mult_pr__GUARD__
    DECL_STRONG_TYPE(t_edge_mult_pr, float);
    #endif//_t_edge_mult_pr__GUARD__

    #ifndef _num_tvol_errors__GUARD__
    #define _num_tvol_errors__GUARD__
    DECL_STRONG_TYPE(num_tvol_errors, int32);
    #endif//_num_tvol_errors__GUARD__

    #ifndef _pos_tedge_wv__GUARD__
    #define _pos_tedge_wv__GUARD__
    DECL_STRONG_TYPE(pos_tedge_wv, float);
    #endif//_pos_tedge_wv__GUARD__

    #ifndef _neg_tedge_wv__GUARD__
    #define _neg_tedge_wv__GUARD__
    DECL_STRONG_TYPE(neg_tedge_wv, float);
    #endif//_neg_tedge_wv__GUARD__

    #ifndef _bad_tedge_wv__GUARD__
    #define _bad_tedge_wv__GUARD__
    DECL_STRONG_TYPE(bad_tedge_wv, float);
    #endif//_bad_tedge_wv__GUARD__

    #ifndef _pos_tedge_pnl__GUARD__
    #define _pos_tedge_pnl__GUARD__
    DECL_STRONG_TYPE(pos_tedge_pnl, float);
    #endif//_pos_tedge_pnl__GUARD__

    #ifndef _neg_tedge_pnl__GUARD__
    #define _neg_tedge_pnl__GUARD__
    DECL_STRONG_TYPE(neg_tedge_pnl, float);
    #endif//_neg_tedge_pnl__GUARD__

    #ifndef _bad_tedge_pnl__GUARD__
    #define _bad_tedge_pnl__GUARD__
    DECL_STRONG_TYPE(bad_tedge_pnl, float);
    #endif//_bad_tedge_pnl__GUARD__

    #ifndef _t_edge2__GUARD__
    #define _t_edge2__GUARD__
    DECL_STRONG_TYPE(t_edge2, float);
    #endif//_t_edge2__GUARD__

    #ifndef _t_edge_mult2__GUARD__
    #define _t_edge_mult2__GUARD__
    DECL_STRONG_TYPE(t_edge_mult2, float);
    #endif//_t_edge_mult2__GUARD__

    #ifndef _t_edge_pr2__GUARD__
    #define _t_edge_pr2__GUARD__
    DECL_STRONG_TYPE(t_edge_pr2, float);
    #endif//_t_edge_pr2__GUARD__

    #ifndef _t_edge_mult_pr2__GUARD__
    #define _t_edge_mult_pr2__GUARD__
    DECL_STRONG_TYPE(t_edge_mult_pr2, float);
    #endif//_t_edge_mult_pr2__GUARD__

    #ifndef _num_tvol_errors2__GUARD__
    #define _num_tvol_errors2__GUARD__
    DECL_STRONG_TYPE(num_tvol_errors2, int32);
    #endif//_num_tvol_errors2__GUARD__

    #ifndef _pos_tedge_wv2__GUARD__
    #define _pos_tedge_wv2__GUARD__
    DECL_STRONG_TYPE(pos_tedge_wv2, float);
    #endif//_pos_tedge_wv2__GUARD__

    #ifndef _neg_tedge_wv2__GUARD__
    #define _neg_tedge_wv2__GUARD__
    DECL_STRONG_TYPE(neg_tedge_wv2, float);
    #endif//_neg_tedge_wv2__GUARD__

    #ifndef _bad_tedge_wv2__GUARD__
    #define _bad_tedge_wv2__GUARD__
    DECL_STRONG_TYPE(bad_tedge_wv2, float);
    #endif//_bad_tedge_wv2__GUARD__

    #ifndef _pos_tedge_pnl2__GUARD__
    #define _pos_tedge_pnl2__GUARD__
    DECL_STRONG_TYPE(pos_tedge_pnl2, float);
    #endif//_pos_tedge_pnl2__GUARD__

    #ifndef _neg_tedge_pnl2__GUARD__
    #define _neg_tedge_pnl2__GUARD__
    DECL_STRONG_TYPE(neg_tedge_pnl2, float);
    #endif//_neg_tedge_pnl2__GUARD__

    #ifndef _bad_tedge_pnl2__GUARD__
    #define _bad_tedge_pnl2__GUARD__
    DECL_STRONG_TYPE(bad_tedge_pnl2, float);
    #endif//_bad_tedge_pnl2__GUARD__

    #ifndef _va_rsu90__GUARD__
    #define _va_rsu90__GUARD__
    DECL_STRONG_TYPE(va_rsu90, float);
    #endif//_va_rsu90__GUARD__

    #ifndef _va_rsd90__GUARD__
    #define _va_rsd90__GUARD__
    DECL_STRONG_TYPE(va_rsd90, float);
    #endif//_va_rsd90__GUARD__

    #ifndef _va_rsu50__GUARD__
    #define _va_rsu50__GUARD__
    DECL_STRONG_TYPE(va_rsu50, float);
    #endif//_va_rsu50__GUARD__

    #ifndef _va_rsd50__GUARD__
    #define _va_rsd50__GUARD__
    DECL_STRONG_TYPE(va_rsd50, float);
    #endif//_va_rsd50__GUARD__

    #ifndef _va_rsu15__GUARD__
    #define _va_rsu15__GUARD__
    DECL_STRONG_TYPE(va_rsu15, float);
    #endif//_va_rsu15__GUARD__

    #ifndef _va_rsd15__GUARD__
    #define _va_rsd15__GUARD__
    DECL_STRONG_TYPE(va_rsd15, float);
    #endif//_va_rsd15__GUARD__

    #ifndef _va_rsu10__GUARD__
    #define _va_rsu10__GUARD__
    DECL_STRONG_TYPE(va_rsu10, float);
    #endif//_va_rsu10__GUARD__

    #ifndef _va_rsd10__GUARD__
    #define _va_rsd10__GUARD__
    DECL_STRONG_TYPE(va_rsd10, float);
    #endif//_va_rsd10__GUARD__

    #ifndef _va_rsu06__GUARD__
    #define _va_rsu06__GUARD__
    DECL_STRONG_TYPE(va_rsu06, float);
    #endif//_va_rsu06__GUARD__

    #ifndef _va_rsd08__GUARD__
    #define _va_rsd08__GUARD__
    DECL_STRONG_TYPE(va_rsd08, float);
    #endif//_va_rsd08__GUARD__

    #ifndef _va_rsu05__GUARD__
    #define _va_rsu05__GUARD__
    DECL_STRONG_TYPE(va_rsu05, float);
    #endif//_va_rsu05__GUARD__

    #ifndef _va_rsd05__GUARD__
    #define _va_rsd05__GUARD__
    DECL_STRONG_TYPE(va_rsd05, float);
    #endif//_va_rsd05__GUARD__

    #ifndef _va_rsu1e__GUARD__
    #define _va_rsu1e__GUARD__
    DECL_STRONG_TYPE(va_rsu1e, float);
    #endif//_va_rsu1e__GUARD__

    #ifndef _va_rsd1e__GUARD__
    #define _va_rsd1e__GUARD__
    DECL_STRONG_TYPE(va_rsd1e, float);
    #endif//_va_rsd1e__GUARD__

    #ifndef _va_rsu2e__GUARD__
    #define _va_rsu2e__GUARD__
    DECL_STRONG_TYPE(va_rsu2e, float);
    #endif//_va_rsu2e__GUARD__

    #ifndef _va_rsd2e__GUARD__
    #define _va_rsd2e__GUARD__
    DECL_STRONG_TYPE(va_rsd2e, float);
    #endif//_va_rsd2e__GUARD__

    #ifndef _va_rearn__GUARD__
    #define _va_rearn__GUARD__
    DECL_STRONG_TYPE(va_rearn, float);
    #endif//_va_rearn__GUARD__

    #ifndef _va_rcash__GUARD__
    #define _va_rcash__GUARD__
    DECL_STRONG_TYPE(va_rcash, float);
    #endif//_va_rcash__GUARD__

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

    #ifndef _stk_liq_risk__GUARD__
    #define _stk_liq_risk__GUARD__
    DECL_STRONG_TYPE(stk_liq_risk, float);
    #endif//_stk_liq_risk__GUARD__

    #ifndef _opt_liq_risk__GUARD__
    #define _opt_liq_risk__GUARD__
    DECL_STRONG_TYPE(opt_liq_risk, float);
    #endif//_opt_liq_risk__GUARD__

    #ifndef _sh_bot_c0__GUARD__
    #define _sh_bot_c0__GUARD__
    DECL_STRONG_TYPE(sh_bot_c0, int32);
    #endif//_sh_bot_c0__GUARD__

    #ifndef _sh_sld_c0__GUARD__
    #define _sh_sld_c0__GUARD__
    DECL_STRONG_TYPE(sh_sld_c0, int32);
    #endif//_sh_sld_c0__GUARD__

    #ifndef _sh_mny_c0__GUARD__
    #define _sh_mny_c0__GUARD__
    DECL_STRONG_TYPE(sh_mny_c0, float);
    #endif//_sh_mny_c0__GUARD__

    #ifndef _sh_bot_c1__GUARD__
    #define _sh_bot_c1__GUARD__
    DECL_STRONG_TYPE(sh_bot_c1, int32);
    #endif//_sh_bot_c1__GUARD__

    #ifndef _sh_sld_c1__GUARD__
    #define _sh_sld_c1__GUARD__
    DECL_STRONG_TYPE(sh_sld_c1, int32);
    #endif//_sh_sld_c1__GUARD__

    #ifndef _sh_mny_c1__GUARD__
    #define _sh_mny_c1__GUARD__
    DECL_STRONG_TYPE(sh_mny_c1, float);
    #endif//_sh_mny_c1__GUARD__

    #ifndef _op_hc_min25__GUARD__
    #define _op_hc_min25__GUARD__
    DECL_STRONG_TYPE(op_hc_min25, float);
    #endif//_op_hc_min25__GUARD__

    #ifndef _op_hc_min37__GUARD__
    #define _op_hc_min37__GUARD__
    DECL_STRONG_TYPE(op_hc_min37, float);
    #endif//_op_hc_min37__GUARD__

    #ifndef _haircut25__GUARD__
    #define _haircut25__GUARD__
    DECL_STRONG_TYPE(haircut25, float);
    #endif//_haircut25__GUARD__

    #ifndef _haircut37__GUARD__
    #define _haircut37__GUARD__
    DECL_STRONG_TYPE(haircut37, float);
    #endif//_haircut37__GUARD__

    #ifndef _num_stk_errors__GUARD__
    #define _num_stk_errors__GUARD__
    DECL_STRONG_TYPE(num_stk_errors, int32);
    #endif//_num_stk_errors__GUARD__

    #ifndef _num_opt_errors__GUARD__
    #define _num_opt_errors__GUARD__
    DECL_STRONG_TYPE(num_opt_errors, int32);
    #endif//_num_opt_errors__GUARD__

    #ifndef _update_source__GUARD__
    #define _update_source__GUARD__
    DECL_STRONG_TYPE(update_source, spiderrock::protobuf::api::R5Source);
    #endif//_update_source__GUARD__

    #ifndef _stk_mark_flag__GUARD__
    #define _stk_mark_flag__GUARD__
    DECL_STRONG_TYPE(stk_mark_flag, spiderrock::protobuf::api::MktErrFlag);
    #endif//_stk_mark_flag__GUARD__

    #ifndef _opt_mark_flag__GUARD__
    #define _opt_mark_flag__GUARD__
    DECL_STRONG_TYPE(opt_mark_flag, spiderrock::protobuf::api::MktErrFlag);
    #endif//_opt_mark_flag__GUARD__

    #ifndef _risk_alert1__GUARD__
    #define _risk_alert1__GUARD__
    DECL_STRONG_TYPE(risk_alert1, spiderrock::protobuf::api::AlertCode);
    #endif//_risk_alert1__GUARD__

    #ifndef _risk_alert2__GUARD__
    #define _risk_alert2__GUARD__
    DECL_STRONG_TYPE(risk_alert2, spiderrock::protobuf::api::AlertCode);
    #endif//_risk_alert2__GUARD__

    #ifndef _risk_alert3__GUARD__
    #define _risk_alert3__GUARD__
    DECL_STRONG_TYPE(risk_alert3, spiderrock::protobuf::api::AlertCode);
    #endif//_risk_alert3__GUARD__

    #ifndef _risk_alert4__GUARD__
    #define _risk_alert4__GUARD__
    DECL_STRONG_TYPE(risk_alert4, spiderrock::protobuf::api::AlertCode);
    #endif//_risk_alert4__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _trade_date__GUARD__
    #define _trade_date__GUARD__
    DECL_STRONG_TYPE(trade_date, DateKey);
    #endif//_trade_date__GUARD__

    #ifndef _risk_session__GUARD__
    #define _risk_session__GUARD__
    DECL_STRONG_TYPE(risk_session, spiderrock::protobuf::api::RiskSession);
    #endif//_risk_session__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    
    class SymbolRiskSummaryV5_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using accnt = spiderrock::protobuf::api::accnt;
        using trade_date = spiderrock::protobuf::api::trade_date;
        using risk_session = spiderrock::protobuf::api::risk_session;
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        ticker m_ticker{};
        accnt m_accnt{};
        trade_date m_trade_date{};
        risk_session m_risk_session{};
        client_firm m_client_firm{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
        accnt get_accnt() const {
            return m_accnt;
        }
		trade_date get_trade_date() const {
            return m_trade_date;
        }
        risk_session get_risk_session() const {
            return m_risk_session;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_trade_date(const trade_date& value)  {
            m_trade_date = value;
        }
        void set_risk_session(const risk_session& value)  {
            m_risk_session = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SymbolRiskSummaryV5_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SymbolRiskSummaryV5_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const accnt & value) { set_accnt(value); }
        void set(const trade_date & value) { set_trade_date(value); }
        void set(const risk_session & value) { set_risk_session(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        SymbolRiskSummaryV5_PKey() {}

        virtual ~SymbolRiskSummaryV5_PKey() {
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
        bool IncludeAccnt() const {
            return !(m_accnt.empty());
        }
        bool IncludeTradeDate() const {
            return (m_trade_date.ByteSizeLong() > 0);
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout_ticker);
            }
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_accnt);
            }
            if ( IncludeTradeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(12, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskSession>(m_risk_session)));
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(14,m_client_firm);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout_ticker);
            }
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_accnt));
            }
            if ( IncludeTradeDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,12, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskSession>(m_risk_session)));
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,14,static_cast<string>(m_client_firm));
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
                    case 10: {
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_ticker.setFromCodec(tickerKey);
                        break;
                    }
                    case 11: {m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 12: {
                        auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                        m_trade_date.set_year(dateKey.year());
                        m_trade_date.set_month(dateKey.month());
                        m_trade_date.set_day(dateKey.day());
                        break;
                    }
                    case 13: {m_risk_session = static_cast<spiderrock::protobuf::api::RiskSession>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 14: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SymbolRiskSummaryV5 {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SymbolRiskSummaryV5_PKey;
        using sector = spiderrock::protobuf::api::sector;
        using industry = spiderrock::protobuf::api::industry__int32;
        using beta = spiderrock::protobuf::api::beta;
        using beta_source = spiderrock::protobuf::api::beta_source;
        using u_prc = spiderrock::protobuf::api::u_prc__double;
        using u_mark = spiderrock::protobuf::api::u_mark__double;
        using u_opn_mark = spiderrock::protobuf::api::u_opn_mark;
        using ln_ddelta = spiderrock::protobuf::api::ln_ddelta;
        using sh_ddelta = spiderrock::protobuf::api::sh_ddelta;
        using ln_stk_mkt_value_mid = spiderrock::protobuf::api::ln_stk_mkt_value_mid;
        using sh_stk_mkt_value_mid = spiderrock::protobuf::api::sh_stk_mkt_value_mid;
        using opt_mkt_value_mid = spiderrock::protobuf::api::opt_mkt_value_mid;
        using opt_mkt_value_vol = spiderrock::protobuf::api::opt_mkt_value_vol;
        using sh_opn_pos_clr = spiderrock::protobuf::api::sh_opn_pos_clr;
        using sh_opn_pos_prv = spiderrock::protobuf::api::sh_opn_pos_prv;
        using sh_opn_pos = spiderrock::protobuf::api::sh_opn_pos;
        using sh_bot = spiderrock::protobuf::api::sh_bot;
        using sh_sld = spiderrock::protobuf::api::sh_sld;
        using sh_sld_shrt = spiderrock::protobuf::api::sh_sld_shrt;
        using sh_mny_bot = spiderrock::protobuf::api::sh_mny_bot;
        using sh_mny_sld = spiderrock::protobuf::api::sh_mny_sld;
        using sh_bot_hdg = spiderrock::protobuf::api::sh_bot_hdg;
        using sh_sld_hdg = spiderrock::protobuf::api::sh_sld_hdg;
        using sh_bot_trh = spiderrock::protobuf::api::sh_bot_trh;
        using sh_sld_trh = spiderrock::protobuf::api::sh_sld_trh;
        using sh_bot_opn = spiderrock::protobuf::api::sh_bot_opn;
        using sh_sld_opn = spiderrock::protobuf::api::sh_sld_opn;
        using sh_bot_trd = spiderrock::protobuf::api::sh_bot_trd;
        using sh_sld_trd = spiderrock::protobuf::api::sh_sld_trd;
        using max_stk_dttm = spiderrock::protobuf::api::max_stk_dttm;
        using st_pnl_mid = spiderrock::protobuf::api::st_pnl_mid__double;
        using st_pnl_clr = spiderrock::protobuf::api::st_pnl_clr__double;
        using st_pnl_day = spiderrock::protobuf::api::st_pnl_day;
        using st_div_pnl = spiderrock::protobuf::api::st_div_pnl;
        using st_borrow_pnl = spiderrock::protobuf::api::st_borrow_pnl;
        using op_cn_abs_cur_pos = spiderrock::protobuf::api::op_cn_abs_cur_pos;
        using op_cn_abs_opn_clr = spiderrock::protobuf::api::op_cn_abs_opn_clr;
        using op_cn_abs_opn_prv = spiderrock::protobuf::api::op_cn_abs_opn_prv;
        using op_cn_abs_opn_pos = spiderrock::protobuf::api::op_cn_abs_opn_pos;
        using op_cn_abs_opn_brk = spiderrock::protobuf::api::op_cn_abs_opn_brk;
        using op_sh_short = spiderrock::protobuf::api::op_sh_short;
        using op_cn_pos_call = spiderrock::protobuf::api::op_cn_pos_call;
        using op_cn_pos_put = spiderrock::protobuf::api::op_cn_pos_put;
        using op_cn_abs_pair = spiderrock::protobuf::api::op_cn_abs_pair;
        using abs_atm_equiv_cn = spiderrock::protobuf::api::abs_atm_equiv_cn;
        using op_cn_bot = spiderrock::protobuf::api::op_cn_bot;
        using op_cn_sld = spiderrock::protobuf::api::op_cn_sld;
        using op_mny_bot = spiderrock::protobuf::api::op_mny_bot;
        using op_mny_sld = spiderrock::protobuf::api::op_mny_sld;
        using op_prem_bot = spiderrock::protobuf::api::op_prem_bot;
        using op_prem_sld = spiderrock::protobuf::api::op_prem_sld;
        using max_opt_dttm = spiderrock::protobuf::api::max_opt_dttm;
        using op_pnl_vol = spiderrock::protobuf::api::op_pnl_vol__double;
        using op_pnl_mid = spiderrock::protobuf::api::op_pnl_mid__double;
        using op_pnl_clr = spiderrock::protobuf::api::op_pnl_clr__double;
        using op_pnl_brk = spiderrock::protobuf::api::op_pnl_brk__double;
        using op_pnl_day = spiderrock::protobuf::api::op_pnl_day__double;
        using op_dn_pnl_day = spiderrock::protobuf::api::op_dn_pnl_day__double;
        using op_day_vega = spiderrock::protobuf::api::op_day_vega;
        using op_day_wvega = spiderrock::protobuf::api::op_day_wvega;
        using op_day_tvega = spiderrock::protobuf::api::op_day_tvega;
        using op_day_wt_vega = spiderrock::protobuf::api::op_day_wt_vega;
        using op_day_theta = spiderrock::protobuf::api::op_day_theta;
        using op_day_delta = spiderrock::protobuf::api::op_day_delta;
        using op_trd_delta = spiderrock::protobuf::api::op_trd_delta;
        using pair_pnl = spiderrock::protobuf::api::pair_pnl;
        using cont_hedge_pnl = spiderrock::protobuf::api::cont_hedge_pnl;
        using cont_hedge_pnl1 = spiderrock::protobuf::api::cont_hedge_pnl1;
        using op_edge_opened = spiderrock::protobuf::api::op_edge_opened;
        using op_edge_closed = spiderrock::protobuf::api::op_edge_closed;
        using pnl_dn = spiderrock::protobuf::api::pnl_dn;
        using pnl_de = spiderrock::protobuf::api::pnl_de;
        using pnl_sl = spiderrock::protobuf::api::pnl_sl;
        using pnl_ga = spiderrock::protobuf::api::pnl_ga;
        using pnl_th = spiderrock::protobuf::api::pnl_th;
        using pnl_ve = spiderrock::protobuf::api::pnl_ve;
        using pnl_vo = spiderrock::protobuf::api::pnl_vo;
        using pnl_va = spiderrock::protobuf::api::pnl_va;
        using pnl_err = spiderrock::protobuf::api::pnl_err;
        using pnl_rate = spiderrock::protobuf::api::pnl_rate;
        using pnl_sdiv = spiderrock::protobuf::api::pnl_sdiv;
        using pnl_ddiv = spiderrock::protobuf::api::pnl_ddiv;
        using pnl_te = spiderrock::protobuf::api::pnl_te;
        using pct_iv_change = spiderrock::protobuf::api::pct_iv_change;
        using pct_iv_vega = spiderrock::protobuf::api::pct_iv_vega;
        using pct_tv_change = spiderrock::protobuf::api::pct_tv_change;
        using pct_tv_vega = spiderrock::protobuf::api::pct_tv_vega;
        using stk_width_mny = spiderrock::protobuf::api::stk_width_mny;
        using opt_width_mny = spiderrock::protobuf::api::opt_width_mny;
        using day_ddelta = spiderrock::protobuf::api::day_ddelta;
        using delta = spiderrock::protobuf::api::delta__float;
        using ddelta = spiderrock::protobuf::api::ddelta;
        using de_decay = spiderrock::protobuf::api::de_decay;
        using dd_decay = spiderrock::protobuf::api::dd_decay;
        using gamma = spiderrock::protobuf::api::gamma;
        using d_gamma = spiderrock::protobuf::api::d_gamma;
        using theta = spiderrock::protobuf::api::theta;
        using rho = spiderrock::protobuf::api::rho;
        using vega = spiderrock::protobuf::api::vega;
        using t_vega = spiderrock::protobuf::api::t_vega;
        using w_vega = spiderrock::protobuf::api::w_vega;
        using wt_vega = spiderrock::protobuf::api::wt_vega;
        using ivol_ve = spiderrock::protobuf::api::ivol_ve;
        using volga = spiderrock::protobuf::api::volga;
        using vanna = spiderrock::protobuf::api::vanna;
        using slope = spiderrock::protobuf::api::slope;
        using avega = spiderrock::protobuf::api::avega;
        using atheta = spiderrock::protobuf::api::atheta;
        using hedge_gamma = spiderrock::protobuf::api::hedge_gamma;
        using hedge_dgamma = spiderrock::protobuf::api::hedge_dgamma;
        using prem_ov_par = spiderrock::protobuf::api::prem_ov_par;
        using simp_prem_ov_par = spiderrock::protobuf::api::simp_prem_ov_par;
        using wt_ve_dd = spiderrock::protobuf::api::wt_ve_dd;
        using wt_ve_dn = spiderrock::protobuf::api::wt_ve_dn;
        using wt_ve_at = spiderrock::protobuf::api::wt_ve_at;
        using wt_ve_up = spiderrock::protobuf::api::wt_ve_up;
        using wt_ve_du = spiderrock::protobuf::api::wt_ve_du;
        using wt_ve_m1 = spiderrock::protobuf::api::wt_ve_m1;
        using wt_ve_m2 = spiderrock::protobuf::api::wt_ve_m2;
        using wt_ve_m3 = spiderrock::protobuf::api::wt_ve_m3;
        using wt_ve_m4 = spiderrock::protobuf::api::wt_ve_m4;
        using wt_ve_m5 = spiderrock::protobuf::api::wt_ve_m5;
        using pin_xx = spiderrock::protobuf::api::pin_xx;
        using opn_de_below = spiderrock::protobuf::api::opn_de_below;
        using opn_de_above = spiderrock::protobuf::api::opn_de_above;
        using opn_dde_below = spiderrock::protobuf::api::opn_dde_below;
        using opn_dde_above = spiderrock::protobuf::api::opn_dde_above;
        using pos_de_below = spiderrock::protobuf::api::pos_de_below;
        using pos_de_above = spiderrock::protobuf::api::pos_de_above;
        using pos_dde_below = spiderrock::protobuf::api::pos_dde_below;
        using pos_dde_above = spiderrock::protobuf::api::pos_dde_above;
        using pos_hedge_delta_ex = spiderrock::protobuf::api::pos_hedge_delta_ex;
        using pos_hedge_ddelta_ex = spiderrock::protobuf::api::pos_hedge_ddelta_ex;
        using mmh_delta = spiderrock::protobuf::api::mmh_delta;
        using mmh_contracts = spiderrock::protobuf::api::mmh_contracts;
        using mmh_sources = spiderrock::protobuf::api::mmh_sources;
        using t_edge = spiderrock::protobuf::api::t_edge;
        using t_edge_mult = spiderrock::protobuf::api::t_edge_mult;
        using t_edge_pr = spiderrock::protobuf::api::t_edge_pr;
        using t_edge_mult_pr = spiderrock::protobuf::api::t_edge_mult_pr;
        using num_tvol_errors = spiderrock::protobuf::api::num_tvol_errors;
        using pos_tedge_wv = spiderrock::protobuf::api::pos_tedge_wv;
        using neg_tedge_wv = spiderrock::protobuf::api::neg_tedge_wv;
        using bad_tedge_wv = spiderrock::protobuf::api::bad_tedge_wv;
        using pos_tedge_pnl = spiderrock::protobuf::api::pos_tedge_pnl;
        using neg_tedge_pnl = spiderrock::protobuf::api::neg_tedge_pnl;
        using bad_tedge_pnl = spiderrock::protobuf::api::bad_tedge_pnl;
        using t_edge2 = spiderrock::protobuf::api::t_edge2;
        using t_edge_mult2 = spiderrock::protobuf::api::t_edge_mult2;
        using t_edge_pr2 = spiderrock::protobuf::api::t_edge_pr2;
        using t_edge_mult_pr2 = spiderrock::protobuf::api::t_edge_mult_pr2;
        using num_tvol_errors2 = spiderrock::protobuf::api::num_tvol_errors2;
        using pos_tedge_wv2 = spiderrock::protobuf::api::pos_tedge_wv2;
        using neg_tedge_wv2 = spiderrock::protobuf::api::neg_tedge_wv2;
        using bad_tedge_wv2 = spiderrock::protobuf::api::bad_tedge_wv2;
        using pos_tedge_pnl2 = spiderrock::protobuf::api::pos_tedge_pnl2;
        using neg_tedge_pnl2 = spiderrock::protobuf::api::neg_tedge_pnl2;
        using bad_tedge_pnl2 = spiderrock::protobuf::api::bad_tedge_pnl2;
        using va_rsu90 = spiderrock::protobuf::api::va_rsu90;
        using va_rsd90 = spiderrock::protobuf::api::va_rsd90;
        using va_rsu50 = spiderrock::protobuf::api::va_rsu50;
        using va_rsd50 = spiderrock::protobuf::api::va_rsd50;
        using va_rsu15 = spiderrock::protobuf::api::va_rsu15;
        using va_rsd15 = spiderrock::protobuf::api::va_rsd15;
        using va_rsu10 = spiderrock::protobuf::api::va_rsu10;
        using va_rsd10 = spiderrock::protobuf::api::va_rsd10;
        using va_rsu06 = spiderrock::protobuf::api::va_rsu06;
        using va_rsd08 = spiderrock::protobuf::api::va_rsd08;
        using va_rsu05 = spiderrock::protobuf::api::va_rsu05;
        using va_rsd05 = spiderrock::protobuf::api::va_rsd05;
        using va_rsu1e = spiderrock::protobuf::api::va_rsu1e;
        using va_rsd1e = spiderrock::protobuf::api::va_rsd1e;
        using va_rsu2e = spiderrock::protobuf::api::va_rsu2e;
        using va_rsd2e = spiderrock::protobuf::api::va_rsd2e;
        using va_rearn = spiderrock::protobuf::api::va_rearn;
        using va_rcash = spiderrock::protobuf::api::va_rcash;
        using margin_udn_vdn = spiderrock::protobuf::api::margin_udn_vdn;
        using margin_udn_vup = spiderrock::protobuf::api::margin_udn_vup;
        using margin_uup_vdn = spiderrock::protobuf::api::margin_uup_vdn;
        using margin_uup_vup = spiderrock::protobuf::api::margin_uup_vup;
        using stk_liq_risk = spiderrock::protobuf::api::stk_liq_risk;
        using opt_liq_risk = spiderrock::protobuf::api::opt_liq_risk;
        using sh_bot_c0 = spiderrock::protobuf::api::sh_bot_c0;
        using sh_sld_c0 = spiderrock::protobuf::api::sh_sld_c0;
        using sh_mny_c0 = spiderrock::protobuf::api::sh_mny_c0;
        using sh_bot_c1 = spiderrock::protobuf::api::sh_bot_c1;
        using sh_sld_c1 = spiderrock::protobuf::api::sh_sld_c1;
        using sh_mny_c1 = spiderrock::protobuf::api::sh_mny_c1;
        using op_hc_min25 = spiderrock::protobuf::api::op_hc_min25;
        using op_hc_min37 = spiderrock::protobuf::api::op_hc_min37;
        using haircut25 = spiderrock::protobuf::api::haircut25;
        using haircut37 = spiderrock::protobuf::api::haircut37;
        using num_stk_errors = spiderrock::protobuf::api::num_stk_errors;
        using num_opt_errors = spiderrock::protobuf::api::num_opt_errors;
        using update_source = spiderrock::protobuf::api::update_source;
        using stk_mark_flag = spiderrock::protobuf::api::stk_mark_flag;
        using opt_mark_flag = spiderrock::protobuf::api::opt_mark_flag;
        using risk_alert1 = spiderrock::protobuf::api::risk_alert1;
        using risk_alert2 = spiderrock::protobuf::api::risk_alert2;
        using risk_alert3 = spiderrock::protobuf::api::risk_alert3;
        using risk_alert4 = spiderrock::protobuf::api::risk_alert4;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        sector m_sector{};
        industry m_industry{};
        beta m_beta{};
        beta_source m_beta_source{};
        u_prc m_u_prc{};
        u_mark m_u_mark{};
        u_opn_mark m_u_opn_mark{};
        ln_ddelta m_ln_ddelta{};
        sh_ddelta m_sh_ddelta{};
        ln_stk_mkt_value_mid m_ln_stk_mkt_value_mid{};
        sh_stk_mkt_value_mid m_sh_stk_mkt_value_mid{};
        opt_mkt_value_mid m_opt_mkt_value_mid{};
        opt_mkt_value_vol m_opt_mkt_value_vol{};
        sh_opn_pos_clr m_sh_opn_pos_clr{};
        sh_opn_pos_prv m_sh_opn_pos_prv{};
        sh_opn_pos m_sh_opn_pos{};
        sh_bot m_sh_bot{};
        sh_sld m_sh_sld{};
        sh_sld_shrt m_sh_sld_shrt{};
        sh_mny_bot m_sh_mny_bot{};
        sh_mny_sld m_sh_mny_sld{};
        sh_bot_hdg m_sh_bot_hdg{};
        sh_sld_hdg m_sh_sld_hdg{};
        sh_bot_trh m_sh_bot_trh{};
        sh_sld_trh m_sh_sld_trh{};
        sh_bot_opn m_sh_bot_opn{};
        sh_sld_opn m_sh_sld_opn{};
        sh_bot_trd m_sh_bot_trd{};
        sh_sld_trd m_sh_sld_trd{};
        max_stk_dttm m_max_stk_dttm{};
        st_pnl_mid m_st_pnl_mid{};
        st_pnl_clr m_st_pnl_clr{};
        st_pnl_day m_st_pnl_day{};
        st_div_pnl m_st_div_pnl{};
        st_borrow_pnl m_st_borrow_pnl{};
        op_cn_abs_cur_pos m_op_cn_abs_cur_pos{};
        op_cn_abs_opn_clr m_op_cn_abs_opn_clr{};
        op_cn_abs_opn_prv m_op_cn_abs_opn_prv{};
        op_cn_abs_opn_pos m_op_cn_abs_opn_pos{};
        op_cn_abs_opn_brk m_op_cn_abs_opn_brk{};
        op_sh_short m_op_sh_short{};
        op_cn_pos_call m_op_cn_pos_call{};
        op_cn_pos_put m_op_cn_pos_put{};
        op_cn_abs_pair m_op_cn_abs_pair{};
        abs_atm_equiv_cn m_abs_atm_equiv_cn{};
        op_cn_bot m_op_cn_bot{};
        op_cn_sld m_op_cn_sld{};
        op_mny_bot m_op_mny_bot{};
        op_mny_sld m_op_mny_sld{};
        op_prem_bot m_op_prem_bot{};
        op_prem_sld m_op_prem_sld{};
        max_opt_dttm m_max_opt_dttm{};
        op_pnl_vol m_op_pnl_vol{};
        op_pnl_mid m_op_pnl_mid{};
        op_pnl_clr m_op_pnl_clr{};
        op_pnl_brk m_op_pnl_brk{};
        op_pnl_day m_op_pnl_day{};
        op_dn_pnl_day m_op_dn_pnl_day{};
        op_day_vega m_op_day_vega{};
        op_day_wvega m_op_day_wvega{};
        op_day_tvega m_op_day_tvega{};
        op_day_wt_vega m_op_day_wt_vega{};
        op_day_theta m_op_day_theta{};
        op_day_delta m_op_day_delta{};
        op_trd_delta m_op_trd_delta{};
        pair_pnl m_pair_pnl{};
        cont_hedge_pnl m_cont_hedge_pnl{};
        cont_hedge_pnl1 m_cont_hedge_pnl1{};
        op_edge_opened m_op_edge_opened{};
        op_edge_closed m_op_edge_closed{};
        pnl_dn m_pnl_dn{};
        pnl_de m_pnl_de{};
        pnl_sl m_pnl_sl{};
        pnl_ga m_pnl_ga{};
        pnl_th m_pnl_th{};
        pnl_ve m_pnl_ve{};
        pnl_vo m_pnl_vo{};
        pnl_va m_pnl_va{};
        pnl_err m_pnl_err{};
        pnl_rate m_pnl_rate{};
        pnl_sdiv m_pnl_sdiv{};
        pnl_ddiv m_pnl_ddiv{};
        pnl_te m_pnl_te{};
        pct_iv_change m_pct_iv_change{};
        pct_iv_vega m_pct_iv_vega{};
        pct_tv_change m_pct_tv_change{};
        pct_tv_vega m_pct_tv_vega{};
        stk_width_mny m_stk_width_mny{};
        opt_width_mny m_opt_width_mny{};
        day_ddelta m_day_ddelta{};
        delta m_delta{};
        ddelta m_ddelta{};
        de_decay m_de_decay{};
        dd_decay m_dd_decay{};
        gamma m_gamma{};
        d_gamma m_d_gamma{};
        theta m_theta{};
        rho m_rho{};
        vega m_vega{};
        t_vega m_t_vega{};
        w_vega m_w_vega{};
        wt_vega m_wt_vega{};
        ivol_ve m_ivol_ve{};
        volga m_volga{};
        vanna m_vanna{};
        slope m_slope{};
        avega m_avega{};
        atheta m_atheta{};
        hedge_gamma m_hedge_gamma{};
        hedge_dgamma m_hedge_dgamma{};
        prem_ov_par m_prem_ov_par{};
        simp_prem_ov_par m_simp_prem_ov_par{};
        wt_ve_dd m_wt_ve_dd{};
        wt_ve_dn m_wt_ve_dn{};
        wt_ve_at m_wt_ve_at{};
        wt_ve_up m_wt_ve_up{};
        wt_ve_du m_wt_ve_du{};
        wt_ve_m1 m_wt_ve_m1{};
        wt_ve_m2 m_wt_ve_m2{};
        wt_ve_m3 m_wt_ve_m3{};
        wt_ve_m4 m_wt_ve_m4{};
        wt_ve_m5 m_wt_ve_m5{};
        pin_xx m_pin_xx{};
        opn_de_below m_opn_de_below{};
        opn_de_above m_opn_de_above{};
        opn_dde_below m_opn_dde_below{};
        opn_dde_above m_opn_dde_above{};
        pos_de_below m_pos_de_below{};
        pos_de_above m_pos_de_above{};
        pos_dde_below m_pos_dde_below{};
        pos_dde_above m_pos_dde_above{};
        pos_hedge_delta_ex m_pos_hedge_delta_ex{};
        pos_hedge_ddelta_ex m_pos_hedge_ddelta_ex{};
        mmh_delta m_mmh_delta{};
        mmh_contracts m_mmh_contracts{};
        mmh_sources m_mmh_sources{};
        t_edge m_t_edge{};
        t_edge_mult m_t_edge_mult{};
        t_edge_pr m_t_edge_pr{};
        t_edge_mult_pr m_t_edge_mult_pr{};
        num_tvol_errors m_num_tvol_errors{};
        pos_tedge_wv m_pos_tedge_wv{};
        neg_tedge_wv m_neg_tedge_wv{};
        bad_tedge_wv m_bad_tedge_wv{};
        pos_tedge_pnl m_pos_tedge_pnl{};
        neg_tedge_pnl m_neg_tedge_pnl{};
        bad_tedge_pnl m_bad_tedge_pnl{};
        t_edge2 m_t_edge2{};
        t_edge_mult2 m_t_edge_mult2{};
        t_edge_pr2 m_t_edge_pr2{};
        t_edge_mult_pr2 m_t_edge_mult_pr2{};
        num_tvol_errors2 m_num_tvol_errors2{};
        pos_tedge_wv2 m_pos_tedge_wv2{};
        neg_tedge_wv2 m_neg_tedge_wv2{};
        bad_tedge_wv2 m_bad_tedge_wv2{};
        pos_tedge_pnl2 m_pos_tedge_pnl2{};
        neg_tedge_pnl2 m_neg_tedge_pnl2{};
        bad_tedge_pnl2 m_bad_tedge_pnl2{};
        va_rsu90 m_va_rsu90{};
        va_rsd90 m_va_rsd90{};
        va_rsu50 m_va_rsu50{};
        va_rsd50 m_va_rsd50{};
        va_rsu15 m_va_rsu15{};
        va_rsd15 m_va_rsd15{};
        va_rsu10 m_va_rsu10{};
        va_rsd10 m_va_rsd10{};
        va_rsu06 m_va_rsu06{};
        va_rsd08 m_va_rsd08{};
        va_rsu05 m_va_rsu05{};
        va_rsd05 m_va_rsd05{};
        va_rsu1e m_va_rsu1e{};
        va_rsd1e m_va_rsd1e{};
        va_rsu2e m_va_rsu2e{};
        va_rsd2e m_va_rsd2e{};
        va_rearn m_va_rearn{};
        va_rcash m_va_rcash{};
        margin_udn_vdn m_margin_udn_vdn{};
        margin_udn_vup m_margin_udn_vup{};
        margin_uup_vdn m_margin_uup_vdn{};
        margin_uup_vup m_margin_uup_vup{};
        stk_liq_risk m_stk_liq_risk{};
        opt_liq_risk m_opt_liq_risk{};
        sh_bot_c0 m_sh_bot_c0{};
        sh_sld_c0 m_sh_sld_c0{};
        sh_mny_c0 m_sh_mny_c0{};
        sh_bot_c1 m_sh_bot_c1{};
        sh_sld_c1 m_sh_sld_c1{};
        sh_mny_c1 m_sh_mny_c1{};
        op_hc_min25 m_op_hc_min25{};
        op_hc_min37 m_op_hc_min37{};
        haircut25 m_haircut25{};
        haircut37 m_haircut37{};
        num_stk_errors m_num_stk_errors{};
        num_opt_errors m_num_opt_errors{};
        update_source m_update_source{};
        stk_mark_flag m_stk_mark_flag{};
        opt_mark_flag m_opt_mark_flag{};
        risk_alert1 m_risk_alert1{};
        risk_alert2 m_risk_alert2{};
        risk_alert3 m_risk_alert3{};
        risk_alert4 m_risk_alert4{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        sector get_sector() const {
            return m_sector;
        }		
        industry get_industry() const {
            return m_industry;
        }		
        beta get_beta() const {
            return m_beta;
        }		
        beta_source get_beta_source() const {
            return m_beta_source;
        }		
        u_prc get_u_prc() const {
            return m_u_prc;
        }		
        u_mark get_u_mark() const {
            return m_u_mark;
        }		
        u_opn_mark get_u_opn_mark() const {
            return m_u_opn_mark;
        }		
        ln_ddelta get_ln_ddelta() const {
            return m_ln_ddelta;
        }		
        sh_ddelta get_sh_ddelta() const {
            return m_sh_ddelta;
        }		
        ln_stk_mkt_value_mid get_ln_stk_mkt_value_mid() const {
            return m_ln_stk_mkt_value_mid;
        }		
        sh_stk_mkt_value_mid get_sh_stk_mkt_value_mid() const {
            return m_sh_stk_mkt_value_mid;
        }		
        opt_mkt_value_mid get_opt_mkt_value_mid() const {
            return m_opt_mkt_value_mid;
        }		
        opt_mkt_value_vol get_opt_mkt_value_vol() const {
            return m_opt_mkt_value_vol;
        }		
        sh_opn_pos_clr get_sh_opn_pos_clr() const {
            return m_sh_opn_pos_clr;
        }		
        sh_opn_pos_prv get_sh_opn_pos_prv() const {
            return m_sh_opn_pos_prv;
        }		
        sh_opn_pos get_sh_opn_pos() const {
            return m_sh_opn_pos;
        }		
        sh_bot get_sh_bot() const {
            return m_sh_bot;
        }		
        sh_sld get_sh_sld() const {
            return m_sh_sld;
        }		
        sh_sld_shrt get_sh_sld_shrt() const {
            return m_sh_sld_shrt;
        }		
        sh_mny_bot get_sh_mny_bot() const {
            return m_sh_mny_bot;
        }		
        sh_mny_sld get_sh_mny_sld() const {
            return m_sh_mny_sld;
        }		
        sh_bot_hdg get_sh_bot_hdg() const {
            return m_sh_bot_hdg;
        }		
        sh_sld_hdg get_sh_sld_hdg() const {
            return m_sh_sld_hdg;
        }		
        sh_bot_trh get_sh_bot_trh() const {
            return m_sh_bot_trh;
        }		
        sh_sld_trh get_sh_sld_trh() const {
            return m_sh_sld_trh;
        }		
        sh_bot_opn get_sh_bot_opn() const {
            return m_sh_bot_opn;
        }		
        sh_sld_opn get_sh_sld_opn() const {
            return m_sh_sld_opn;
        }		
        sh_bot_trd get_sh_bot_trd() const {
            return m_sh_bot_trd;
        }		
        sh_sld_trd get_sh_sld_trd() const {
            return m_sh_sld_trd;
        }		
        max_stk_dttm get_max_stk_dttm() const {
            return m_max_stk_dttm;
        }		
        st_pnl_mid get_st_pnl_mid() const {
            return m_st_pnl_mid;
        }		
        st_pnl_clr get_st_pnl_clr() const {
            return m_st_pnl_clr;
        }		
        st_pnl_day get_st_pnl_day() const {
            return m_st_pnl_day;
        }		
        st_div_pnl get_st_div_pnl() const {
            return m_st_div_pnl;
        }		
        st_borrow_pnl get_st_borrow_pnl() const {
            return m_st_borrow_pnl;
        }		
        op_cn_abs_cur_pos get_op_cn_abs_cur_pos() const {
            return m_op_cn_abs_cur_pos;
        }		
        op_cn_abs_opn_clr get_op_cn_abs_opn_clr() const {
            return m_op_cn_abs_opn_clr;
        }		
        op_cn_abs_opn_prv get_op_cn_abs_opn_prv() const {
            return m_op_cn_abs_opn_prv;
        }		
        op_cn_abs_opn_pos get_op_cn_abs_opn_pos() const {
            return m_op_cn_abs_opn_pos;
        }		
        op_cn_abs_opn_brk get_op_cn_abs_opn_brk() const {
            return m_op_cn_abs_opn_brk;
        }		
        op_sh_short get_op_sh_short() const {
            return m_op_sh_short;
        }		
        op_cn_pos_call get_op_cn_pos_call() const {
            return m_op_cn_pos_call;
        }		
        op_cn_pos_put get_op_cn_pos_put() const {
            return m_op_cn_pos_put;
        }		
        op_cn_abs_pair get_op_cn_abs_pair() const {
            return m_op_cn_abs_pair;
        }		
        abs_atm_equiv_cn get_abs_atm_equiv_cn() const {
            return m_abs_atm_equiv_cn;
        }		
        op_cn_bot get_op_cn_bot() const {
            return m_op_cn_bot;
        }		
        op_cn_sld get_op_cn_sld() const {
            return m_op_cn_sld;
        }		
        op_mny_bot get_op_mny_bot() const {
            return m_op_mny_bot;
        }		
        op_mny_sld get_op_mny_sld() const {
            return m_op_mny_sld;
        }		
        op_prem_bot get_op_prem_bot() const {
            return m_op_prem_bot;
        }		
        op_prem_sld get_op_prem_sld() const {
            return m_op_prem_sld;
        }		
        max_opt_dttm get_max_opt_dttm() const {
            return m_max_opt_dttm;
        }		
        op_pnl_vol get_op_pnl_vol() const {
            return m_op_pnl_vol;
        }		
        op_pnl_mid get_op_pnl_mid() const {
            return m_op_pnl_mid;
        }		
        op_pnl_clr get_op_pnl_clr() const {
            return m_op_pnl_clr;
        }		
        op_pnl_brk get_op_pnl_brk() const {
            return m_op_pnl_brk;
        }		
        op_pnl_day get_op_pnl_day() const {
            return m_op_pnl_day;
        }		
        op_dn_pnl_day get_op_dn_pnl_day() const {
            return m_op_dn_pnl_day;
        }		
        op_day_vega get_op_day_vega() const {
            return m_op_day_vega;
        }		
        op_day_wvega get_op_day_wvega() const {
            return m_op_day_wvega;
        }		
        op_day_tvega get_op_day_tvega() const {
            return m_op_day_tvega;
        }		
        op_day_wt_vega get_op_day_wt_vega() const {
            return m_op_day_wt_vega;
        }		
        op_day_theta get_op_day_theta() const {
            return m_op_day_theta;
        }		
        op_day_delta get_op_day_delta() const {
            return m_op_day_delta;
        }		
        op_trd_delta get_op_trd_delta() const {
            return m_op_trd_delta;
        }		
        pair_pnl get_pair_pnl() const {
            return m_pair_pnl;
        }		
        cont_hedge_pnl get_cont_hedge_pnl() const {
            return m_cont_hedge_pnl;
        }		
        cont_hedge_pnl1 get_cont_hedge_pnl1() const {
            return m_cont_hedge_pnl1;
        }		
        op_edge_opened get_op_edge_opened() const {
            return m_op_edge_opened;
        }		
        op_edge_closed get_op_edge_closed() const {
            return m_op_edge_closed;
        }		
        pnl_dn get_pnl_dn() const {
            return m_pnl_dn;
        }		
        pnl_de get_pnl_de() const {
            return m_pnl_de;
        }		
        pnl_sl get_pnl_sl() const {
            return m_pnl_sl;
        }		
        pnl_ga get_pnl_ga() const {
            return m_pnl_ga;
        }		
        pnl_th get_pnl_th() const {
            return m_pnl_th;
        }		
        pnl_ve get_pnl_ve() const {
            return m_pnl_ve;
        }		
        pnl_vo get_pnl_vo() const {
            return m_pnl_vo;
        }		
        pnl_va get_pnl_va() const {
            return m_pnl_va;
        }		
        pnl_err get_pnl_err() const {
            return m_pnl_err;
        }		
        pnl_rate get_pnl_rate() const {
            return m_pnl_rate;
        }		
        pnl_sdiv get_pnl_sdiv() const {
            return m_pnl_sdiv;
        }		
        pnl_ddiv get_pnl_ddiv() const {
            return m_pnl_ddiv;
        }		
        pnl_te get_pnl_te() const {
            return m_pnl_te;
        }		
        pct_iv_change get_pct_iv_change() const {
            return m_pct_iv_change;
        }		
        pct_iv_vega get_pct_iv_vega() const {
            return m_pct_iv_vega;
        }		
        pct_tv_change get_pct_tv_change() const {
            return m_pct_tv_change;
        }		
        pct_tv_vega get_pct_tv_vega() const {
            return m_pct_tv_vega;
        }		
        stk_width_mny get_stk_width_mny() const {
            return m_stk_width_mny;
        }		
        opt_width_mny get_opt_width_mny() const {
            return m_opt_width_mny;
        }		
        day_ddelta get_day_ddelta() const {
            return m_day_ddelta;
        }		
        delta get_delta() const {
            return m_delta;
        }		
        ddelta get_ddelta() const {
            return m_ddelta;
        }		
        de_decay get_de_decay() const {
            return m_de_decay;
        }		
        dd_decay get_dd_decay() const {
            return m_dd_decay;
        }		
        gamma get_gamma() const {
            return m_gamma;
        }		
        d_gamma get_d_gamma() const {
            return m_d_gamma;
        }		
        theta get_theta() const {
            return m_theta;
        }		
        rho get_rho() const {
            return m_rho;
        }		
        vega get_vega() const {
            return m_vega;
        }		
        t_vega get_t_vega() const {
            return m_t_vega;
        }		
        w_vega get_w_vega() const {
            return m_w_vega;
        }		
        wt_vega get_wt_vega() const {
            return m_wt_vega;
        }		
        ivol_ve get_ivol_ve() const {
            return m_ivol_ve;
        }		
        volga get_volga() const {
            return m_volga;
        }		
        vanna get_vanna() const {
            return m_vanna;
        }		
        slope get_slope() const {
            return m_slope;
        }		
        avega get_avega() const {
            return m_avega;
        }		
        atheta get_atheta() const {
            return m_atheta;
        }		
        hedge_gamma get_hedge_gamma() const {
            return m_hedge_gamma;
        }		
        hedge_dgamma get_hedge_dgamma() const {
            return m_hedge_dgamma;
        }		
        prem_ov_par get_prem_ov_par() const {
            return m_prem_ov_par;
        }		
        simp_prem_ov_par get_simp_prem_ov_par() const {
            return m_simp_prem_ov_par;
        }		
        wt_ve_dd get_wt_ve_dd() const {
            return m_wt_ve_dd;
        }		
        wt_ve_dn get_wt_ve_dn() const {
            return m_wt_ve_dn;
        }		
        wt_ve_at get_wt_ve_at() const {
            return m_wt_ve_at;
        }		
        wt_ve_up get_wt_ve_up() const {
            return m_wt_ve_up;
        }		
        wt_ve_du get_wt_ve_du() const {
            return m_wt_ve_du;
        }		
        wt_ve_m1 get_wt_ve_m1() const {
            return m_wt_ve_m1;
        }		
        wt_ve_m2 get_wt_ve_m2() const {
            return m_wt_ve_m2;
        }		
        wt_ve_m3 get_wt_ve_m3() const {
            return m_wt_ve_m3;
        }		
        wt_ve_m4 get_wt_ve_m4() const {
            return m_wt_ve_m4;
        }		
        wt_ve_m5 get_wt_ve_m5() const {
            return m_wt_ve_m5;
        }		
        pin_xx get_pin_xx() const {
            return m_pin_xx;
        }		
        opn_de_below get_opn_de_below() const {
            return m_opn_de_below;
        }		
        opn_de_above get_opn_de_above() const {
            return m_opn_de_above;
        }		
        opn_dde_below get_opn_dde_below() const {
            return m_opn_dde_below;
        }		
        opn_dde_above get_opn_dde_above() const {
            return m_opn_dde_above;
        }		
        pos_de_below get_pos_de_below() const {
            return m_pos_de_below;
        }		
        pos_de_above get_pos_de_above() const {
            return m_pos_de_above;
        }		
        pos_dde_below get_pos_dde_below() const {
            return m_pos_dde_below;
        }		
        pos_dde_above get_pos_dde_above() const {
            return m_pos_dde_above;
        }		
        pos_hedge_delta_ex get_pos_hedge_delta_ex() const {
            return m_pos_hedge_delta_ex;
        }		
        pos_hedge_ddelta_ex get_pos_hedge_ddelta_ex() const {
            return m_pos_hedge_ddelta_ex;
        }		
        mmh_delta get_mmh_delta() const {
            return m_mmh_delta;
        }		
        mmh_contracts get_mmh_contracts() const {
            return m_mmh_contracts;
        }		
        mmh_sources get_mmh_sources() const {
            return m_mmh_sources;
        }		
        t_edge get_t_edge() const {
            return m_t_edge;
        }		
        t_edge_mult get_t_edge_mult() const {
            return m_t_edge_mult;
        }		
        t_edge_pr get_t_edge_pr() const {
            return m_t_edge_pr;
        }		
        t_edge_mult_pr get_t_edge_mult_pr() const {
            return m_t_edge_mult_pr;
        }		
        num_tvol_errors get_num_tvol_errors() const {
            return m_num_tvol_errors;
        }		
        pos_tedge_wv get_pos_tedge_wv() const {
            return m_pos_tedge_wv;
        }		
        neg_tedge_wv get_neg_tedge_wv() const {
            return m_neg_tedge_wv;
        }		
        bad_tedge_wv get_bad_tedge_wv() const {
            return m_bad_tedge_wv;
        }		
        pos_tedge_pnl get_pos_tedge_pnl() const {
            return m_pos_tedge_pnl;
        }		
        neg_tedge_pnl get_neg_tedge_pnl() const {
            return m_neg_tedge_pnl;
        }		
        bad_tedge_pnl get_bad_tedge_pnl() const {
            return m_bad_tedge_pnl;
        }		
        t_edge2 get_t_edge2() const {
            return m_t_edge2;
        }		
        t_edge_mult2 get_t_edge_mult2() const {
            return m_t_edge_mult2;
        }		
        t_edge_pr2 get_t_edge_pr2() const {
            return m_t_edge_pr2;
        }		
        t_edge_mult_pr2 get_t_edge_mult_pr2() const {
            return m_t_edge_mult_pr2;
        }		
        num_tvol_errors2 get_num_tvol_errors2() const {
            return m_num_tvol_errors2;
        }		
        pos_tedge_wv2 get_pos_tedge_wv2() const {
            return m_pos_tedge_wv2;
        }		
        neg_tedge_wv2 get_neg_tedge_wv2() const {
            return m_neg_tedge_wv2;
        }		
        bad_tedge_wv2 get_bad_tedge_wv2() const {
            return m_bad_tedge_wv2;
        }		
        pos_tedge_pnl2 get_pos_tedge_pnl2() const {
            return m_pos_tedge_pnl2;
        }		
        neg_tedge_pnl2 get_neg_tedge_pnl2() const {
            return m_neg_tedge_pnl2;
        }		
        bad_tedge_pnl2 get_bad_tedge_pnl2() const {
            return m_bad_tedge_pnl2;
        }		
        va_rsu90 get_va_rsu90() const {
            return m_va_rsu90;
        }		
        va_rsd90 get_va_rsd90() const {
            return m_va_rsd90;
        }		
        va_rsu50 get_va_rsu50() const {
            return m_va_rsu50;
        }		
        va_rsd50 get_va_rsd50() const {
            return m_va_rsd50;
        }		
        va_rsu15 get_va_rsu15() const {
            return m_va_rsu15;
        }		
        va_rsd15 get_va_rsd15() const {
            return m_va_rsd15;
        }		
        va_rsu10 get_va_rsu10() const {
            return m_va_rsu10;
        }		
        va_rsd10 get_va_rsd10() const {
            return m_va_rsd10;
        }		
        va_rsu06 get_va_rsu06() const {
            return m_va_rsu06;
        }		
        va_rsd08 get_va_rsd08() const {
            return m_va_rsd08;
        }		
        va_rsu05 get_va_rsu05() const {
            return m_va_rsu05;
        }		
        va_rsd05 get_va_rsd05() const {
            return m_va_rsd05;
        }		
        va_rsu1e get_va_rsu1e() const {
            return m_va_rsu1e;
        }		
        va_rsd1e get_va_rsd1e() const {
            return m_va_rsd1e;
        }		
        va_rsu2e get_va_rsu2e() const {
            return m_va_rsu2e;
        }		
        va_rsd2e get_va_rsd2e() const {
            return m_va_rsd2e;
        }		
        va_rearn get_va_rearn() const {
            return m_va_rearn;
        }		
        va_rcash get_va_rcash() const {
            return m_va_rcash;
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
        stk_liq_risk get_stk_liq_risk() const {
            return m_stk_liq_risk;
        }		
        opt_liq_risk get_opt_liq_risk() const {
            return m_opt_liq_risk;
        }		
        sh_bot_c0 get_sh_bot_c0() const {
            return m_sh_bot_c0;
        }		
        sh_sld_c0 get_sh_sld_c0() const {
            return m_sh_sld_c0;
        }		
        sh_mny_c0 get_sh_mny_c0() const {
            return m_sh_mny_c0;
        }		
        sh_bot_c1 get_sh_bot_c1() const {
            return m_sh_bot_c1;
        }		
        sh_sld_c1 get_sh_sld_c1() const {
            return m_sh_sld_c1;
        }		
        sh_mny_c1 get_sh_mny_c1() const {
            return m_sh_mny_c1;
        }		
        op_hc_min25 get_op_hc_min25() const {
            return m_op_hc_min25;
        }		
        op_hc_min37 get_op_hc_min37() const {
            return m_op_hc_min37;
        }		
        haircut25 get_haircut25() const {
            return m_haircut25;
        }		
        haircut37 get_haircut37() const {
            return m_haircut37;
        }		
        num_stk_errors get_num_stk_errors() const {
            return m_num_stk_errors;
        }		
        num_opt_errors get_num_opt_errors() const {
            return m_num_opt_errors;
        }		
        update_source get_update_source() const {
            return m_update_source;
        }		
        stk_mark_flag get_stk_mark_flag() const {
            return m_stk_mark_flag;
        }		
        opt_mark_flag get_opt_mark_flag() const {
            return m_opt_mark_flag;
        }		
        risk_alert1 get_risk_alert1() const {
            return m_risk_alert1;
        }		
        risk_alert2 get_risk_alert2() const {
            return m_risk_alert2;
        }		
        risk_alert3 get_risk_alert3() const {
            return m_risk_alert3;
        }		
        risk_alert4 get_risk_alert4() const {
            return m_risk_alert4;
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
        void set_sector(const sector& value)  {
            m_sector = value;
        }
        void set_industry(const industry& value)  {
            m_industry = value;
        }
        void set_beta(const beta& value)  {
            m_beta = value;
        }
        void set_beta_source(const beta_source& value)  {
            m_beta_source = value;
        }
        void set_u_prc(const u_prc& value)  {
            m_u_prc = value;
        }
        void set_u_mark(const u_mark& value)  {
            m_u_mark = value;
        }
        void set_u_opn_mark(const u_opn_mark& value)  {
            m_u_opn_mark = value;
        }
        void set_ln_ddelta(const ln_ddelta& value)  {
            m_ln_ddelta = value;
        }
        void set_sh_ddelta(const sh_ddelta& value)  {
            m_sh_ddelta = value;
        }
        void set_ln_stk_mkt_value_mid(const ln_stk_mkt_value_mid& value)  {
            m_ln_stk_mkt_value_mid = value;
        }
        void set_sh_stk_mkt_value_mid(const sh_stk_mkt_value_mid& value)  {
            m_sh_stk_mkt_value_mid = value;
        }
        void set_opt_mkt_value_mid(const opt_mkt_value_mid& value)  {
            m_opt_mkt_value_mid = value;
        }
        void set_opt_mkt_value_vol(const opt_mkt_value_vol& value)  {
            m_opt_mkt_value_vol = value;
        }
        void set_sh_opn_pos_clr(const sh_opn_pos_clr& value)  {
            m_sh_opn_pos_clr = value;
        }
        void set_sh_opn_pos_prv(const sh_opn_pos_prv& value)  {
            m_sh_opn_pos_prv = value;
        }
        void set_sh_opn_pos(const sh_opn_pos& value)  {
            m_sh_opn_pos = value;
        }
        void set_sh_bot(const sh_bot& value)  {
            m_sh_bot = value;
        }
        void set_sh_sld(const sh_sld& value)  {
            m_sh_sld = value;
        }
        void set_sh_sld_shrt(const sh_sld_shrt& value)  {
            m_sh_sld_shrt = value;
        }
        void set_sh_mny_bot(const sh_mny_bot& value)  {
            m_sh_mny_bot = value;
        }
        void set_sh_mny_sld(const sh_mny_sld& value)  {
            m_sh_mny_sld = value;
        }
        void set_sh_bot_hdg(const sh_bot_hdg& value)  {
            m_sh_bot_hdg = value;
        }
        void set_sh_sld_hdg(const sh_sld_hdg& value)  {
            m_sh_sld_hdg = value;
        }
        void set_sh_bot_trh(const sh_bot_trh& value)  {
            m_sh_bot_trh = value;
        }
        void set_sh_sld_trh(const sh_sld_trh& value)  {
            m_sh_sld_trh = value;
        }
        void set_sh_bot_opn(const sh_bot_opn& value)  {
            m_sh_bot_opn = value;
        }
        void set_sh_sld_opn(const sh_sld_opn& value)  {
            m_sh_sld_opn = value;
        }
        void set_sh_bot_trd(const sh_bot_trd& value)  {
            m_sh_bot_trd = value;
        }
        void set_sh_sld_trd(const sh_sld_trd& value)  {
            m_sh_sld_trd = value;
        }
        void set_max_stk_dttm(const max_stk_dttm& value)  {
            m_max_stk_dttm = value;
        }
        void set_st_pnl_mid(const st_pnl_mid& value)  {
            m_st_pnl_mid = value;
        }
        void set_st_pnl_clr(const st_pnl_clr& value)  {
            m_st_pnl_clr = value;
        }
        void set_st_pnl_day(const st_pnl_day& value)  {
            m_st_pnl_day = value;
        }
        void set_st_div_pnl(const st_div_pnl& value)  {
            m_st_div_pnl = value;
        }
        void set_st_borrow_pnl(const st_borrow_pnl& value)  {
            m_st_borrow_pnl = value;
        }
        void set_op_cn_abs_cur_pos(const op_cn_abs_cur_pos& value)  {
            m_op_cn_abs_cur_pos = value;
        }
        void set_op_cn_abs_opn_clr(const op_cn_abs_opn_clr& value)  {
            m_op_cn_abs_opn_clr = value;
        }
        void set_op_cn_abs_opn_prv(const op_cn_abs_opn_prv& value)  {
            m_op_cn_abs_opn_prv = value;
        }
        void set_op_cn_abs_opn_pos(const op_cn_abs_opn_pos& value)  {
            m_op_cn_abs_opn_pos = value;
        }
        void set_op_cn_abs_opn_brk(const op_cn_abs_opn_brk& value)  {
            m_op_cn_abs_opn_brk = value;
        }
        void set_op_sh_short(const op_sh_short& value)  {
            m_op_sh_short = value;
        }
        void set_op_cn_pos_call(const op_cn_pos_call& value)  {
            m_op_cn_pos_call = value;
        }
        void set_op_cn_pos_put(const op_cn_pos_put& value)  {
            m_op_cn_pos_put = value;
        }
        void set_op_cn_abs_pair(const op_cn_abs_pair& value)  {
            m_op_cn_abs_pair = value;
        }
        void set_abs_atm_equiv_cn(const abs_atm_equiv_cn& value)  {
            m_abs_atm_equiv_cn = value;
        }
        void set_op_cn_bot(const op_cn_bot& value)  {
            m_op_cn_bot = value;
        }
        void set_op_cn_sld(const op_cn_sld& value)  {
            m_op_cn_sld = value;
        }
        void set_op_mny_bot(const op_mny_bot& value)  {
            m_op_mny_bot = value;
        }
        void set_op_mny_sld(const op_mny_sld& value)  {
            m_op_mny_sld = value;
        }
        void set_op_prem_bot(const op_prem_bot& value)  {
            m_op_prem_bot = value;
        }
        void set_op_prem_sld(const op_prem_sld& value)  {
            m_op_prem_sld = value;
        }
        void set_max_opt_dttm(const max_opt_dttm& value)  {
            m_max_opt_dttm = value;
        }
        void set_op_pnl_vol(const op_pnl_vol& value)  {
            m_op_pnl_vol = value;
        }
        void set_op_pnl_mid(const op_pnl_mid& value)  {
            m_op_pnl_mid = value;
        }
        void set_op_pnl_clr(const op_pnl_clr& value)  {
            m_op_pnl_clr = value;
        }
        void set_op_pnl_brk(const op_pnl_brk& value)  {
            m_op_pnl_brk = value;
        }
        void set_op_pnl_day(const op_pnl_day& value)  {
            m_op_pnl_day = value;
        }
        void set_op_dn_pnl_day(const op_dn_pnl_day& value)  {
            m_op_dn_pnl_day = value;
        }
        void set_op_day_vega(const op_day_vega& value)  {
            m_op_day_vega = value;
        }
        void set_op_day_wvega(const op_day_wvega& value)  {
            m_op_day_wvega = value;
        }
        void set_op_day_tvega(const op_day_tvega& value)  {
            m_op_day_tvega = value;
        }
        void set_op_day_wt_vega(const op_day_wt_vega& value)  {
            m_op_day_wt_vega = value;
        }
        void set_op_day_theta(const op_day_theta& value)  {
            m_op_day_theta = value;
        }
        void set_op_day_delta(const op_day_delta& value)  {
            m_op_day_delta = value;
        }
        void set_op_trd_delta(const op_trd_delta& value)  {
            m_op_trd_delta = value;
        }
        void set_pair_pnl(const pair_pnl& value)  {
            m_pair_pnl = value;
        }
        void set_cont_hedge_pnl(const cont_hedge_pnl& value)  {
            m_cont_hedge_pnl = value;
        }
        void set_cont_hedge_pnl1(const cont_hedge_pnl1& value)  {
            m_cont_hedge_pnl1 = value;
        }
        void set_op_edge_opened(const op_edge_opened& value)  {
            m_op_edge_opened = value;
        }
        void set_op_edge_closed(const op_edge_closed& value)  {
            m_op_edge_closed = value;
        }
        void set_pnl_dn(const pnl_dn& value)  {
            m_pnl_dn = value;
        }
        void set_pnl_de(const pnl_de& value)  {
            m_pnl_de = value;
        }
        void set_pnl_sl(const pnl_sl& value)  {
            m_pnl_sl = value;
        }
        void set_pnl_ga(const pnl_ga& value)  {
            m_pnl_ga = value;
        }
        void set_pnl_th(const pnl_th& value)  {
            m_pnl_th = value;
        }
        void set_pnl_ve(const pnl_ve& value)  {
            m_pnl_ve = value;
        }
        void set_pnl_vo(const pnl_vo& value)  {
            m_pnl_vo = value;
        }
        void set_pnl_va(const pnl_va& value)  {
            m_pnl_va = value;
        }
        void set_pnl_err(const pnl_err& value)  {
            m_pnl_err = value;
        }
        void set_pnl_rate(const pnl_rate& value)  {
            m_pnl_rate = value;
        }
        void set_pnl_sdiv(const pnl_sdiv& value)  {
            m_pnl_sdiv = value;
        }
        void set_pnl_ddiv(const pnl_ddiv& value)  {
            m_pnl_ddiv = value;
        }
        void set_pnl_te(const pnl_te& value)  {
            m_pnl_te = value;
        }
        void set_pct_iv_change(const pct_iv_change& value)  {
            m_pct_iv_change = value;
        }
        void set_pct_iv_vega(const pct_iv_vega& value)  {
            m_pct_iv_vega = value;
        }
        void set_pct_tv_change(const pct_tv_change& value)  {
            m_pct_tv_change = value;
        }
        void set_pct_tv_vega(const pct_tv_vega& value)  {
            m_pct_tv_vega = value;
        }
        void set_stk_width_mny(const stk_width_mny& value)  {
            m_stk_width_mny = value;
        }
        void set_opt_width_mny(const opt_width_mny& value)  {
            m_opt_width_mny = value;
        }
        void set_day_ddelta(const day_ddelta& value)  {
            m_day_ddelta = value;
        }
        void set_delta(const delta& value)  {
            m_delta = value;
        }
        void set_ddelta(const ddelta& value)  {
            m_ddelta = value;
        }
        void set_de_decay(const de_decay& value)  {
            m_de_decay = value;
        }
        void set_dd_decay(const dd_decay& value)  {
            m_dd_decay = value;
        }
        void set_gamma(const gamma& value)  {
            m_gamma = value;
        }
        void set_d_gamma(const d_gamma& value)  {
            m_d_gamma = value;
        }
        void set_theta(const theta& value)  {
            m_theta = value;
        }
        void set_rho(const rho& value)  {
            m_rho = value;
        }
        void set_vega(const vega& value)  {
            m_vega = value;
        }
        void set_t_vega(const t_vega& value)  {
            m_t_vega = value;
        }
        void set_w_vega(const w_vega& value)  {
            m_w_vega = value;
        }
        void set_wt_vega(const wt_vega& value)  {
            m_wt_vega = value;
        }
        void set_ivol_ve(const ivol_ve& value)  {
            m_ivol_ve = value;
        }
        void set_volga(const volga& value)  {
            m_volga = value;
        }
        void set_vanna(const vanna& value)  {
            m_vanna = value;
        }
        void set_slope(const slope& value)  {
            m_slope = value;
        }
        void set_avega(const avega& value)  {
            m_avega = value;
        }
        void set_atheta(const atheta& value)  {
            m_atheta = value;
        }
        void set_hedge_gamma(const hedge_gamma& value)  {
            m_hedge_gamma = value;
        }
        void set_hedge_dgamma(const hedge_dgamma& value)  {
            m_hedge_dgamma = value;
        }
        void set_prem_ov_par(const prem_ov_par& value)  {
            m_prem_ov_par = value;
        }
        void set_simp_prem_ov_par(const simp_prem_ov_par& value)  {
            m_simp_prem_ov_par = value;
        }
        void set_wt_ve_dd(const wt_ve_dd& value)  {
            m_wt_ve_dd = value;
        }
        void set_wt_ve_dn(const wt_ve_dn& value)  {
            m_wt_ve_dn = value;
        }
        void set_wt_ve_at(const wt_ve_at& value)  {
            m_wt_ve_at = value;
        }
        void set_wt_ve_up(const wt_ve_up& value)  {
            m_wt_ve_up = value;
        }
        void set_wt_ve_du(const wt_ve_du& value)  {
            m_wt_ve_du = value;
        }
        void set_wt_ve_m1(const wt_ve_m1& value)  {
            m_wt_ve_m1 = value;
        }
        void set_wt_ve_m2(const wt_ve_m2& value)  {
            m_wt_ve_m2 = value;
        }
        void set_wt_ve_m3(const wt_ve_m3& value)  {
            m_wt_ve_m3 = value;
        }
        void set_wt_ve_m4(const wt_ve_m4& value)  {
            m_wt_ve_m4 = value;
        }
        void set_wt_ve_m5(const wt_ve_m5& value)  {
            m_wt_ve_m5 = value;
        }
        void set_pin_xx(const pin_xx& value)  {
            m_pin_xx = value;
        }
        void set_opn_de_below(const opn_de_below& value)  {
            m_opn_de_below = value;
        }
        void set_opn_de_above(const opn_de_above& value)  {
            m_opn_de_above = value;
        }
        void set_opn_dde_below(const opn_dde_below& value)  {
            m_opn_dde_below = value;
        }
        void set_opn_dde_above(const opn_dde_above& value)  {
            m_opn_dde_above = value;
        }
        void set_pos_de_below(const pos_de_below& value)  {
            m_pos_de_below = value;
        }
        void set_pos_de_above(const pos_de_above& value)  {
            m_pos_de_above = value;
        }
        void set_pos_dde_below(const pos_dde_below& value)  {
            m_pos_dde_below = value;
        }
        void set_pos_dde_above(const pos_dde_above& value)  {
            m_pos_dde_above = value;
        }
        void set_pos_hedge_delta_ex(const pos_hedge_delta_ex& value)  {
            m_pos_hedge_delta_ex = value;
        }
        void set_pos_hedge_ddelta_ex(const pos_hedge_ddelta_ex& value)  {
            m_pos_hedge_ddelta_ex = value;
        }
        void set_mmh_delta(const mmh_delta& value)  {
            m_mmh_delta = value;
        }
        void set_mmh_contracts(const mmh_contracts& value)  {
            m_mmh_contracts = value;
        }
        void set_mmh_sources(const mmh_sources& value)  {
            m_mmh_sources = value;
        }
        void set_t_edge(const t_edge& value)  {
            m_t_edge = value;
        }
        void set_t_edge_mult(const t_edge_mult& value)  {
            m_t_edge_mult = value;
        }
        void set_t_edge_pr(const t_edge_pr& value)  {
            m_t_edge_pr = value;
        }
        void set_t_edge_mult_pr(const t_edge_mult_pr& value)  {
            m_t_edge_mult_pr = value;
        }
        void set_num_tvol_errors(const num_tvol_errors& value)  {
            m_num_tvol_errors = value;
        }
        void set_pos_tedge_wv(const pos_tedge_wv& value)  {
            m_pos_tedge_wv = value;
        }
        void set_neg_tedge_wv(const neg_tedge_wv& value)  {
            m_neg_tedge_wv = value;
        }
        void set_bad_tedge_wv(const bad_tedge_wv& value)  {
            m_bad_tedge_wv = value;
        }
        void set_pos_tedge_pnl(const pos_tedge_pnl& value)  {
            m_pos_tedge_pnl = value;
        }
        void set_neg_tedge_pnl(const neg_tedge_pnl& value)  {
            m_neg_tedge_pnl = value;
        }
        void set_bad_tedge_pnl(const bad_tedge_pnl& value)  {
            m_bad_tedge_pnl = value;
        }
        void set_t_edge2(const t_edge2& value)  {
            m_t_edge2 = value;
        }
        void set_t_edge_mult2(const t_edge_mult2& value)  {
            m_t_edge_mult2 = value;
        }
        void set_t_edge_pr2(const t_edge_pr2& value)  {
            m_t_edge_pr2 = value;
        }
        void set_t_edge_mult_pr2(const t_edge_mult_pr2& value)  {
            m_t_edge_mult_pr2 = value;
        }
        void set_num_tvol_errors2(const num_tvol_errors2& value)  {
            m_num_tvol_errors2 = value;
        }
        void set_pos_tedge_wv2(const pos_tedge_wv2& value)  {
            m_pos_tedge_wv2 = value;
        }
        void set_neg_tedge_wv2(const neg_tedge_wv2& value)  {
            m_neg_tedge_wv2 = value;
        }
        void set_bad_tedge_wv2(const bad_tedge_wv2& value)  {
            m_bad_tedge_wv2 = value;
        }
        void set_pos_tedge_pnl2(const pos_tedge_pnl2& value)  {
            m_pos_tedge_pnl2 = value;
        }
        void set_neg_tedge_pnl2(const neg_tedge_pnl2& value)  {
            m_neg_tedge_pnl2 = value;
        }
        void set_bad_tedge_pnl2(const bad_tedge_pnl2& value)  {
            m_bad_tedge_pnl2 = value;
        }
        void set_va_rsu90(const va_rsu90& value)  {
            m_va_rsu90 = value;
        }
        void set_va_rsd90(const va_rsd90& value)  {
            m_va_rsd90 = value;
        }
        void set_va_rsu50(const va_rsu50& value)  {
            m_va_rsu50 = value;
        }
        void set_va_rsd50(const va_rsd50& value)  {
            m_va_rsd50 = value;
        }
        void set_va_rsu15(const va_rsu15& value)  {
            m_va_rsu15 = value;
        }
        void set_va_rsd15(const va_rsd15& value)  {
            m_va_rsd15 = value;
        }
        void set_va_rsu10(const va_rsu10& value)  {
            m_va_rsu10 = value;
        }
        void set_va_rsd10(const va_rsd10& value)  {
            m_va_rsd10 = value;
        }
        void set_va_rsu06(const va_rsu06& value)  {
            m_va_rsu06 = value;
        }
        void set_va_rsd08(const va_rsd08& value)  {
            m_va_rsd08 = value;
        }
        void set_va_rsu05(const va_rsu05& value)  {
            m_va_rsu05 = value;
        }
        void set_va_rsd05(const va_rsd05& value)  {
            m_va_rsd05 = value;
        }
        void set_va_rsu1e(const va_rsu1e& value)  {
            m_va_rsu1e = value;
        }
        void set_va_rsd1e(const va_rsd1e& value)  {
            m_va_rsd1e = value;
        }
        void set_va_rsu2e(const va_rsu2e& value)  {
            m_va_rsu2e = value;
        }
        void set_va_rsd2e(const va_rsd2e& value)  {
            m_va_rsd2e = value;
        }
        void set_va_rearn(const va_rearn& value)  {
            m_va_rearn = value;
        }
        void set_va_rcash(const va_rcash& value)  {
            m_va_rcash = value;
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
        void set_stk_liq_risk(const stk_liq_risk& value)  {
            m_stk_liq_risk = value;
        }
        void set_opt_liq_risk(const opt_liq_risk& value)  {
            m_opt_liq_risk = value;
        }
        void set_sh_bot_c0(const sh_bot_c0& value)  {
            m_sh_bot_c0 = value;
        }
        void set_sh_sld_c0(const sh_sld_c0& value)  {
            m_sh_sld_c0 = value;
        }
        void set_sh_mny_c0(const sh_mny_c0& value)  {
            m_sh_mny_c0 = value;
        }
        void set_sh_bot_c1(const sh_bot_c1& value)  {
            m_sh_bot_c1 = value;
        }
        void set_sh_sld_c1(const sh_sld_c1& value)  {
            m_sh_sld_c1 = value;
        }
        void set_sh_mny_c1(const sh_mny_c1& value)  {
            m_sh_mny_c1 = value;
        }
        void set_op_hc_min25(const op_hc_min25& value)  {
            m_op_hc_min25 = value;
        }
        void set_op_hc_min37(const op_hc_min37& value)  {
            m_op_hc_min37 = value;
        }
        void set_haircut25(const haircut25& value)  {
            m_haircut25 = value;
        }
        void set_haircut37(const haircut37& value)  {
            m_haircut37 = value;
        }
        void set_num_stk_errors(const num_stk_errors& value)  {
            m_num_stk_errors = value;
        }
        void set_num_opt_errors(const num_opt_errors& value)  {
            m_num_opt_errors = value;
        }
        void set_update_source(const update_source& value)  {
            m_update_source = value;
        }
        void set_stk_mark_flag(const stk_mark_flag& value)  {
            m_stk_mark_flag = value;
        }
        void set_opt_mark_flag(const opt_mark_flag& value)  {
            m_opt_mark_flag = value;
        }
        void set_risk_alert1(const risk_alert1& value)  {
            m_risk_alert1 = value;
        }
        void set_risk_alert2(const risk_alert2& value)  {
            m_risk_alert2 = value;
        }
        void set_risk_alert3(const risk_alert3& value)  {
            m_risk_alert3 = value;
        }
        void set_risk_alert4(const risk_alert4& value)  {
            m_risk_alert4 = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SymbolRiskSummaryV5::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const sector & value) {
            set_sector(value);
        }
        void set(const industry & value) {
            set_industry(value);
        }
        void set(const beta & value) {
            set_beta(value);
        }
        void set(const beta_source & value) {
            set_beta_source(value);
        }
        void set(const u_prc & value) {
            set_u_prc(value);
        }
        void set(const u_mark & value) {
            set_u_mark(value);
        }
        void set(const u_opn_mark & value) {
            set_u_opn_mark(value);
        }
        void set(const ln_ddelta & value) {
            set_ln_ddelta(value);
        }
        void set(const sh_ddelta & value) {
            set_sh_ddelta(value);
        }
        void set(const ln_stk_mkt_value_mid & value) {
            set_ln_stk_mkt_value_mid(value);
        }
        void set(const sh_stk_mkt_value_mid & value) {
            set_sh_stk_mkt_value_mid(value);
        }
        void set(const opt_mkt_value_mid & value) {
            set_opt_mkt_value_mid(value);
        }
        void set(const opt_mkt_value_vol & value) {
            set_opt_mkt_value_vol(value);
        }
        void set(const sh_opn_pos_clr & value) {
            set_sh_opn_pos_clr(value);
        }
        void set(const sh_opn_pos_prv & value) {
            set_sh_opn_pos_prv(value);
        }
        void set(const sh_opn_pos & value) {
            set_sh_opn_pos(value);
        }
        void set(const sh_bot & value) {
            set_sh_bot(value);
        }
        void set(const sh_sld & value) {
            set_sh_sld(value);
        }
        void set(const sh_sld_shrt & value) {
            set_sh_sld_shrt(value);
        }
        void set(const sh_mny_bot & value) {
            set_sh_mny_bot(value);
        }
        void set(const sh_mny_sld & value) {
            set_sh_mny_sld(value);
        }
        void set(const sh_bot_hdg & value) {
            set_sh_bot_hdg(value);
        }
        void set(const sh_sld_hdg & value) {
            set_sh_sld_hdg(value);
        }
        void set(const sh_bot_trh & value) {
            set_sh_bot_trh(value);
        }
        void set(const sh_sld_trh & value) {
            set_sh_sld_trh(value);
        }
        void set(const sh_bot_opn & value) {
            set_sh_bot_opn(value);
        }
        void set(const sh_sld_opn & value) {
            set_sh_sld_opn(value);
        }
        void set(const sh_bot_trd & value) {
            set_sh_bot_trd(value);
        }
        void set(const sh_sld_trd & value) {
            set_sh_sld_trd(value);
        }
        void set(const max_stk_dttm & value) {
            set_max_stk_dttm(value);
        }
        void set(const st_pnl_mid & value) {
            set_st_pnl_mid(value);
        }
        void set(const st_pnl_clr & value) {
            set_st_pnl_clr(value);
        }
        void set(const st_pnl_day & value) {
            set_st_pnl_day(value);
        }
        void set(const st_div_pnl & value) {
            set_st_div_pnl(value);
        }
        void set(const st_borrow_pnl & value) {
            set_st_borrow_pnl(value);
        }
        void set(const op_cn_abs_cur_pos & value) {
            set_op_cn_abs_cur_pos(value);
        }
        void set(const op_cn_abs_opn_clr & value) {
            set_op_cn_abs_opn_clr(value);
        }
        void set(const op_cn_abs_opn_prv & value) {
            set_op_cn_abs_opn_prv(value);
        }
        void set(const op_cn_abs_opn_pos & value) {
            set_op_cn_abs_opn_pos(value);
        }
        void set(const op_cn_abs_opn_brk & value) {
            set_op_cn_abs_opn_brk(value);
        }
        void set(const op_sh_short & value) {
            set_op_sh_short(value);
        }
        void set(const op_cn_pos_call & value) {
            set_op_cn_pos_call(value);
        }
        void set(const op_cn_pos_put & value) {
            set_op_cn_pos_put(value);
        }
        void set(const op_cn_abs_pair & value) {
            set_op_cn_abs_pair(value);
        }
        void set(const abs_atm_equiv_cn & value) {
            set_abs_atm_equiv_cn(value);
        }
        void set(const op_cn_bot & value) {
            set_op_cn_bot(value);
        }
        void set(const op_cn_sld & value) {
            set_op_cn_sld(value);
        }
        void set(const op_mny_bot & value) {
            set_op_mny_bot(value);
        }
        void set(const op_mny_sld & value) {
            set_op_mny_sld(value);
        }
        void set(const op_prem_bot & value) {
            set_op_prem_bot(value);
        }
        void set(const op_prem_sld & value) {
            set_op_prem_sld(value);
        }
        void set(const max_opt_dttm & value) {
            set_max_opt_dttm(value);
        }
        void set(const op_pnl_vol & value) {
            set_op_pnl_vol(value);
        }
        void set(const op_pnl_mid & value) {
            set_op_pnl_mid(value);
        }
        void set(const op_pnl_clr & value) {
            set_op_pnl_clr(value);
        }
        void set(const op_pnl_brk & value) {
            set_op_pnl_brk(value);
        }
        void set(const op_pnl_day & value) {
            set_op_pnl_day(value);
        }
        void set(const op_dn_pnl_day & value) {
            set_op_dn_pnl_day(value);
        }
        void set(const op_day_vega & value) {
            set_op_day_vega(value);
        }
        void set(const op_day_wvega & value) {
            set_op_day_wvega(value);
        }
        void set(const op_day_tvega & value) {
            set_op_day_tvega(value);
        }
        void set(const op_day_wt_vega & value) {
            set_op_day_wt_vega(value);
        }
        void set(const op_day_theta & value) {
            set_op_day_theta(value);
        }
        void set(const op_day_delta & value) {
            set_op_day_delta(value);
        }
        void set(const op_trd_delta & value) {
            set_op_trd_delta(value);
        }
        void set(const pair_pnl & value) {
            set_pair_pnl(value);
        }
        void set(const cont_hedge_pnl & value) {
            set_cont_hedge_pnl(value);
        }
        void set(const cont_hedge_pnl1 & value) {
            set_cont_hedge_pnl1(value);
        }
        void set(const op_edge_opened & value) {
            set_op_edge_opened(value);
        }
        void set(const op_edge_closed & value) {
            set_op_edge_closed(value);
        }
        void set(const pnl_dn & value) {
            set_pnl_dn(value);
        }
        void set(const pnl_de & value) {
            set_pnl_de(value);
        }
        void set(const pnl_sl & value) {
            set_pnl_sl(value);
        }
        void set(const pnl_ga & value) {
            set_pnl_ga(value);
        }
        void set(const pnl_th & value) {
            set_pnl_th(value);
        }
        void set(const pnl_ve & value) {
            set_pnl_ve(value);
        }
        void set(const pnl_vo & value) {
            set_pnl_vo(value);
        }
        void set(const pnl_va & value) {
            set_pnl_va(value);
        }
        void set(const pnl_err & value) {
            set_pnl_err(value);
        }
        void set(const pnl_rate & value) {
            set_pnl_rate(value);
        }
        void set(const pnl_sdiv & value) {
            set_pnl_sdiv(value);
        }
        void set(const pnl_ddiv & value) {
            set_pnl_ddiv(value);
        }
        void set(const pnl_te & value) {
            set_pnl_te(value);
        }
        void set(const pct_iv_change & value) {
            set_pct_iv_change(value);
        }
        void set(const pct_iv_vega & value) {
            set_pct_iv_vega(value);
        }
        void set(const pct_tv_change & value) {
            set_pct_tv_change(value);
        }
        void set(const pct_tv_vega & value) {
            set_pct_tv_vega(value);
        }
        void set(const stk_width_mny & value) {
            set_stk_width_mny(value);
        }
        void set(const opt_width_mny & value) {
            set_opt_width_mny(value);
        }
        void set(const day_ddelta & value) {
            set_day_ddelta(value);
        }
        void set(const delta & value) {
            set_delta(value);
        }
        void set(const ddelta & value) {
            set_ddelta(value);
        }
        void set(const de_decay & value) {
            set_de_decay(value);
        }
        void set(const dd_decay & value) {
            set_dd_decay(value);
        }
        void set(const gamma & value) {
            set_gamma(value);
        }
        void set(const d_gamma & value) {
            set_d_gamma(value);
        }
        void set(const theta & value) {
            set_theta(value);
        }
        void set(const rho & value) {
            set_rho(value);
        }
        void set(const vega & value) {
            set_vega(value);
        }
        void set(const t_vega & value) {
            set_t_vega(value);
        }
        void set(const w_vega & value) {
            set_w_vega(value);
        }
        void set(const wt_vega & value) {
            set_wt_vega(value);
        }
        void set(const ivol_ve & value) {
            set_ivol_ve(value);
        }
        void set(const volga & value) {
            set_volga(value);
        }
        void set(const vanna & value) {
            set_vanna(value);
        }
        void set(const slope & value) {
            set_slope(value);
        }
        void set(const avega & value) {
            set_avega(value);
        }
        void set(const atheta & value) {
            set_atheta(value);
        }
        void set(const hedge_gamma & value) {
            set_hedge_gamma(value);
        }
        void set(const hedge_dgamma & value) {
            set_hedge_dgamma(value);
        }
        void set(const prem_ov_par & value) {
            set_prem_ov_par(value);
        }
        void set(const simp_prem_ov_par & value) {
            set_simp_prem_ov_par(value);
        }
        void set(const wt_ve_dd & value) {
            set_wt_ve_dd(value);
        }
        void set(const wt_ve_dn & value) {
            set_wt_ve_dn(value);
        }
        void set(const wt_ve_at & value) {
            set_wt_ve_at(value);
        }
        void set(const wt_ve_up & value) {
            set_wt_ve_up(value);
        }
        void set(const wt_ve_du & value) {
            set_wt_ve_du(value);
        }
        void set(const wt_ve_m1 & value) {
            set_wt_ve_m1(value);
        }
        void set(const wt_ve_m2 & value) {
            set_wt_ve_m2(value);
        }
        void set(const wt_ve_m3 & value) {
            set_wt_ve_m3(value);
        }
        void set(const wt_ve_m4 & value) {
            set_wt_ve_m4(value);
        }
        void set(const wt_ve_m5 & value) {
            set_wt_ve_m5(value);
        }
        void set(const pin_xx & value) {
            set_pin_xx(value);
        }
        void set(const opn_de_below & value) {
            set_opn_de_below(value);
        }
        void set(const opn_de_above & value) {
            set_opn_de_above(value);
        }
        void set(const opn_dde_below & value) {
            set_opn_dde_below(value);
        }
        void set(const opn_dde_above & value) {
            set_opn_dde_above(value);
        }
        void set(const pos_de_below & value) {
            set_pos_de_below(value);
        }
        void set(const pos_de_above & value) {
            set_pos_de_above(value);
        }
        void set(const pos_dde_below & value) {
            set_pos_dde_below(value);
        }
        void set(const pos_dde_above & value) {
            set_pos_dde_above(value);
        }
        void set(const pos_hedge_delta_ex & value) {
            set_pos_hedge_delta_ex(value);
        }
        void set(const pos_hedge_ddelta_ex & value) {
            set_pos_hedge_ddelta_ex(value);
        }
        void set(const mmh_delta & value) {
            set_mmh_delta(value);
        }
        void set(const mmh_contracts & value) {
            set_mmh_contracts(value);
        }
        void set(const mmh_sources & value) {
            set_mmh_sources(value);
        }
        void set(const t_edge & value) {
            set_t_edge(value);
        }
        void set(const t_edge_mult & value) {
            set_t_edge_mult(value);
        }
        void set(const t_edge_pr & value) {
            set_t_edge_pr(value);
        }
        void set(const t_edge_mult_pr & value) {
            set_t_edge_mult_pr(value);
        }
        void set(const num_tvol_errors & value) {
            set_num_tvol_errors(value);
        }
        void set(const pos_tedge_wv & value) {
            set_pos_tedge_wv(value);
        }
        void set(const neg_tedge_wv & value) {
            set_neg_tedge_wv(value);
        }
        void set(const bad_tedge_wv & value) {
            set_bad_tedge_wv(value);
        }
        void set(const pos_tedge_pnl & value) {
            set_pos_tedge_pnl(value);
        }
        void set(const neg_tedge_pnl & value) {
            set_neg_tedge_pnl(value);
        }
        void set(const bad_tedge_pnl & value) {
            set_bad_tedge_pnl(value);
        }
        void set(const t_edge2 & value) {
            set_t_edge2(value);
        }
        void set(const t_edge_mult2 & value) {
            set_t_edge_mult2(value);
        }
        void set(const t_edge_pr2 & value) {
            set_t_edge_pr2(value);
        }
        void set(const t_edge_mult_pr2 & value) {
            set_t_edge_mult_pr2(value);
        }
        void set(const num_tvol_errors2 & value) {
            set_num_tvol_errors2(value);
        }
        void set(const pos_tedge_wv2 & value) {
            set_pos_tedge_wv2(value);
        }
        void set(const neg_tedge_wv2 & value) {
            set_neg_tedge_wv2(value);
        }
        void set(const bad_tedge_wv2 & value) {
            set_bad_tedge_wv2(value);
        }
        void set(const pos_tedge_pnl2 & value) {
            set_pos_tedge_pnl2(value);
        }
        void set(const neg_tedge_pnl2 & value) {
            set_neg_tedge_pnl2(value);
        }
        void set(const bad_tedge_pnl2 & value) {
            set_bad_tedge_pnl2(value);
        }
        void set(const va_rsu90 & value) {
            set_va_rsu90(value);
        }
        void set(const va_rsd90 & value) {
            set_va_rsd90(value);
        }
        void set(const va_rsu50 & value) {
            set_va_rsu50(value);
        }
        void set(const va_rsd50 & value) {
            set_va_rsd50(value);
        }
        void set(const va_rsu15 & value) {
            set_va_rsu15(value);
        }
        void set(const va_rsd15 & value) {
            set_va_rsd15(value);
        }
        void set(const va_rsu10 & value) {
            set_va_rsu10(value);
        }
        void set(const va_rsd10 & value) {
            set_va_rsd10(value);
        }
        void set(const va_rsu06 & value) {
            set_va_rsu06(value);
        }
        void set(const va_rsd08 & value) {
            set_va_rsd08(value);
        }
        void set(const va_rsu05 & value) {
            set_va_rsu05(value);
        }
        void set(const va_rsd05 & value) {
            set_va_rsd05(value);
        }
        void set(const va_rsu1e & value) {
            set_va_rsu1e(value);
        }
        void set(const va_rsd1e & value) {
            set_va_rsd1e(value);
        }
        void set(const va_rsu2e & value) {
            set_va_rsu2e(value);
        }
        void set(const va_rsd2e & value) {
            set_va_rsd2e(value);
        }
        void set(const va_rearn & value) {
            set_va_rearn(value);
        }
        void set(const va_rcash & value) {
            set_va_rcash(value);
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
        void set(const stk_liq_risk & value) {
            set_stk_liq_risk(value);
        }
        void set(const opt_liq_risk & value) {
            set_opt_liq_risk(value);
        }
        void set(const sh_bot_c0 & value) {
            set_sh_bot_c0(value);
        }
        void set(const sh_sld_c0 & value) {
            set_sh_sld_c0(value);
        }
        void set(const sh_mny_c0 & value) {
            set_sh_mny_c0(value);
        }
        void set(const sh_bot_c1 & value) {
            set_sh_bot_c1(value);
        }
        void set(const sh_sld_c1 & value) {
            set_sh_sld_c1(value);
        }
        void set(const sh_mny_c1 & value) {
            set_sh_mny_c1(value);
        }
        void set(const op_hc_min25 & value) {
            set_op_hc_min25(value);
        }
        void set(const op_hc_min37 & value) {
            set_op_hc_min37(value);
        }
        void set(const haircut25 & value) {
            set_haircut25(value);
        }
        void set(const haircut37 & value) {
            set_haircut37(value);
        }
        void set(const num_stk_errors & value) {
            set_num_stk_errors(value);
        }
        void set(const num_opt_errors & value) {
            set_num_opt_errors(value);
        }
        void set(const update_source & value) {
            set_update_source(value);
        }
        void set(const stk_mark_flag & value) {
            set_stk_mark_flag(value);
        }
        void set(const opt_mark_flag & value) {
            set_opt_mark_flag(value);
        }
        void set(const risk_alert1 & value) {
            set_risk_alert1(value);
        }
        void set(const risk_alert2 & value) {
            set_risk_alert2(value);
        }
        void set(const risk_alert3 & value) {
            set_risk_alert3(value);
        }
        void set(const risk_alert4 & value) {
            set_risk_alert4(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const SymbolRiskSummaryV5 & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_sector);
            set(value.m_industry);
            set(value.m_beta);
            set(value.m_beta_source);
            set(value.m_u_prc);
            set(value.m_u_mark);
            set(value.m_u_opn_mark);
            set(value.m_ln_ddelta);
            set(value.m_sh_ddelta);
            set(value.m_ln_stk_mkt_value_mid);
            set(value.m_sh_stk_mkt_value_mid);
            set(value.m_opt_mkt_value_mid);
            set(value.m_opt_mkt_value_vol);
            set(value.m_sh_opn_pos_clr);
            set(value.m_sh_opn_pos_prv);
            set(value.m_sh_opn_pos);
            set(value.m_sh_bot);
            set(value.m_sh_sld);
            set(value.m_sh_sld_shrt);
            set(value.m_sh_mny_bot);
            set(value.m_sh_mny_sld);
            set(value.m_sh_bot_hdg);
            set(value.m_sh_sld_hdg);
            set(value.m_sh_bot_trh);
            set(value.m_sh_sld_trh);
            set(value.m_sh_bot_opn);
            set(value.m_sh_sld_opn);
            set(value.m_sh_bot_trd);
            set(value.m_sh_sld_trd);
            set(value.m_max_stk_dttm);
            set(value.m_st_pnl_mid);
            set(value.m_st_pnl_clr);
            set(value.m_st_pnl_day);
            set(value.m_st_div_pnl);
            set(value.m_st_borrow_pnl);
            set(value.m_op_cn_abs_cur_pos);
            set(value.m_op_cn_abs_opn_clr);
            set(value.m_op_cn_abs_opn_prv);
            set(value.m_op_cn_abs_opn_pos);
            set(value.m_op_cn_abs_opn_brk);
            set(value.m_op_sh_short);
            set(value.m_op_cn_pos_call);
            set(value.m_op_cn_pos_put);
            set(value.m_op_cn_abs_pair);
            set(value.m_abs_atm_equiv_cn);
            set(value.m_op_cn_bot);
            set(value.m_op_cn_sld);
            set(value.m_op_mny_bot);
            set(value.m_op_mny_sld);
            set(value.m_op_prem_bot);
            set(value.m_op_prem_sld);
            set(value.m_max_opt_dttm);
            set(value.m_op_pnl_vol);
            set(value.m_op_pnl_mid);
            set(value.m_op_pnl_clr);
            set(value.m_op_pnl_brk);
            set(value.m_op_pnl_day);
            set(value.m_op_dn_pnl_day);
            set(value.m_op_day_vega);
            set(value.m_op_day_wvega);
            set(value.m_op_day_tvega);
            set(value.m_op_day_wt_vega);
            set(value.m_op_day_theta);
            set(value.m_op_day_delta);
            set(value.m_op_trd_delta);
            set(value.m_pair_pnl);
            set(value.m_cont_hedge_pnl);
            set(value.m_cont_hedge_pnl1);
            set(value.m_op_edge_opened);
            set(value.m_op_edge_closed);
            set(value.m_pnl_dn);
            set(value.m_pnl_de);
            set(value.m_pnl_sl);
            set(value.m_pnl_ga);
            set(value.m_pnl_th);
            set(value.m_pnl_ve);
            set(value.m_pnl_vo);
            set(value.m_pnl_va);
            set(value.m_pnl_err);
            set(value.m_pnl_rate);
            set(value.m_pnl_sdiv);
            set(value.m_pnl_ddiv);
            set(value.m_pnl_te);
            set(value.m_pct_iv_change);
            set(value.m_pct_iv_vega);
            set(value.m_pct_tv_change);
            set(value.m_pct_tv_vega);
            set(value.m_stk_width_mny);
            set(value.m_opt_width_mny);
            set(value.m_day_ddelta);
            set(value.m_delta);
            set(value.m_ddelta);
            set(value.m_de_decay);
            set(value.m_dd_decay);
            set(value.m_gamma);
            set(value.m_d_gamma);
            set(value.m_theta);
            set(value.m_rho);
            set(value.m_vega);
            set(value.m_t_vega);
            set(value.m_w_vega);
            set(value.m_wt_vega);
            set(value.m_ivol_ve);
            set(value.m_volga);
            set(value.m_vanna);
            set(value.m_slope);
            set(value.m_avega);
            set(value.m_atheta);
            set(value.m_hedge_gamma);
            set(value.m_hedge_dgamma);
            set(value.m_prem_ov_par);
            set(value.m_simp_prem_ov_par);
            set(value.m_wt_ve_dd);
            set(value.m_wt_ve_dn);
            set(value.m_wt_ve_at);
            set(value.m_wt_ve_up);
            set(value.m_wt_ve_du);
            set(value.m_wt_ve_m1);
            set(value.m_wt_ve_m2);
            set(value.m_wt_ve_m3);
            set(value.m_wt_ve_m4);
            set(value.m_wt_ve_m5);
            set(value.m_pin_xx);
            set(value.m_opn_de_below);
            set(value.m_opn_de_above);
            set(value.m_opn_dde_below);
            set(value.m_opn_dde_above);
            set(value.m_pos_de_below);
            set(value.m_pos_de_above);
            set(value.m_pos_dde_below);
            set(value.m_pos_dde_above);
            set(value.m_pos_hedge_delta_ex);
            set(value.m_pos_hedge_ddelta_ex);
            set(value.m_mmh_delta);
            set(value.m_mmh_contracts);
            set(value.m_mmh_sources);
            set(value.m_t_edge);
            set(value.m_t_edge_mult);
            set(value.m_t_edge_pr);
            set(value.m_t_edge_mult_pr);
            set(value.m_num_tvol_errors);
            set(value.m_pos_tedge_wv);
            set(value.m_neg_tedge_wv);
            set(value.m_bad_tedge_wv);
            set(value.m_pos_tedge_pnl);
            set(value.m_neg_tedge_pnl);
            set(value.m_bad_tedge_pnl);
            set(value.m_t_edge2);
            set(value.m_t_edge_mult2);
            set(value.m_t_edge_pr2);
            set(value.m_t_edge_mult_pr2);
            set(value.m_num_tvol_errors2);
            set(value.m_pos_tedge_wv2);
            set(value.m_neg_tedge_wv2);
            set(value.m_bad_tedge_wv2);
            set(value.m_pos_tedge_pnl2);
            set(value.m_neg_tedge_pnl2);
            set(value.m_bad_tedge_pnl2);
            set(value.m_va_rsu90);
            set(value.m_va_rsd90);
            set(value.m_va_rsu50);
            set(value.m_va_rsd50);
            set(value.m_va_rsu15);
            set(value.m_va_rsd15);
            set(value.m_va_rsu10);
            set(value.m_va_rsd10);
            set(value.m_va_rsu06);
            set(value.m_va_rsd08);
            set(value.m_va_rsu05);
            set(value.m_va_rsd05);
            set(value.m_va_rsu1e);
            set(value.m_va_rsd1e);
            set(value.m_va_rsu2e);
            set(value.m_va_rsd2e);
            set(value.m_va_rearn);
            set(value.m_va_rcash);
            set(value.m_margin_udn_vdn);
            set(value.m_margin_udn_vup);
            set(value.m_margin_uup_vdn);
            set(value.m_margin_uup_vup);
            set(value.m_stk_liq_risk);
            set(value.m_opt_liq_risk);
            set(value.m_sh_bot_c0);
            set(value.m_sh_sld_c0);
            set(value.m_sh_mny_c0);
            set(value.m_sh_bot_c1);
            set(value.m_sh_sld_c1);
            set(value.m_sh_mny_c1);
            set(value.m_op_hc_min25);
            set(value.m_op_hc_min37);
            set(value.m_haircut25);
            set(value.m_haircut37);
            set(value.m_num_stk_errors);
            set(value.m_num_opt_errors);
            set(value.m_update_source);
            set(value.m_stk_mark_flag);
            set(value.m_opt_mark_flag);
            set(value.m_risk_alert1);
            set(value.m_risk_alert2);
            set(value.m_risk_alert3);
            set(value.m_risk_alert4);
            set(value.m_timestamp);
        }

        SymbolRiskSummaryV5() {
            m__meta.set_message_type("SymbolRiskSummaryV5");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4865, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4865, length);
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
             *this = SymbolRiskSummaryV5{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeSector() const {
            return !(m_sector.empty());
        }
        bool IncludeIndustry() const {
            return !(m_industry == 0);
        }
        bool IncludeBeta() const {
            return !(m_beta == 0.0);
        }
        bool IncludeUPrc() const {
            return !(m_u_prc == 0.0);
        }
        bool IncludeUMark() const {
            return !(m_u_mark == 0.0);
        }
        bool IncludeUOpnMark() const {
            return !(m_u_opn_mark == 0.0);
        }
        bool IncludeLnDdelta() const {
            return !(m_ln_ddelta == 0.0);
        }
        bool IncludeShDdelta() const {
            return !(m_sh_ddelta == 0.0);
        }
        bool IncludeLnStkMktValueMid() const {
            return !(m_ln_stk_mkt_value_mid == 0.0);
        }
        bool IncludeShStkMktValueMid() const {
            return !(m_sh_stk_mkt_value_mid == 0.0);
        }
        bool IncludeOptMktValueMid() const {
            return !(m_opt_mkt_value_mid == 0.0);
        }
        bool IncludeOptMktValueVol() const {
            return !(m_opt_mkt_value_vol == 0.0);
        }
        bool IncludeShOpnPosClr() const {
            return !(m_sh_opn_pos_clr == 0);
        }
        bool IncludeShOpnPosPrv() const {
            return !(m_sh_opn_pos_prv == 0);
        }
        bool IncludeShOpnPos() const {
            return !(m_sh_opn_pos == 0);
        }
        bool IncludeShBot() const {
            return !(m_sh_bot == 0);
        }
        bool IncludeShSld() const {
            return !(m_sh_sld == 0);
        }
        bool IncludeShSldShrt() const {
            return !(m_sh_sld_shrt == 0);
        }
        bool IncludeShMnyBot() const {
            return !(m_sh_mny_bot == 0.0);
        }
        bool IncludeShMnySld() const {
            return !(m_sh_mny_sld == 0.0);
        }
        bool IncludeShBotHdg() const {
            return !(m_sh_bot_hdg == 0);
        }
        bool IncludeShSldHdg() const {
            return !(m_sh_sld_hdg == 0);
        }
        bool IncludeShBotTrh() const {
            return !(m_sh_bot_trh == 0);
        }
        bool IncludeShSldTrh() const {
            return !(m_sh_sld_trh == 0);
        }
        bool IncludeShBotOpn() const {
            return !(m_sh_bot_opn == 0);
        }
        bool IncludeShSldOpn() const {
            return !(m_sh_sld_opn == 0);
        }
        bool IncludeShBotTrd() const {
            return !(m_sh_bot_trd == 0);
        }
        bool IncludeShSldTrd() const {
            return !(m_sh_sld_trd == 0);
        }
        bool IncludeMaxStkDttm() const {
            return (m_max_stk_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeStPnlMid() const {
            return !(m_st_pnl_mid == 0.0);
        }
        bool IncludeStPnlClr() const {
            return !(m_st_pnl_clr == 0.0);
        }
        bool IncludeStPnlDay() const {
            return !(m_st_pnl_day == 0.0);
        }
        bool IncludeStDivPnl() const {
            return !(m_st_div_pnl == 0.0);
        }
        bool IncludeStBorrowPnl() const {
            return !(m_st_borrow_pnl == 0.0);
        }
        bool IncludeOpCnAbsCurPos() const {
            return !(m_op_cn_abs_cur_pos == 0);
        }
        bool IncludeOpCnAbsOpnClr() const {
            return !(m_op_cn_abs_opn_clr == 0);
        }
        bool IncludeOpCnAbsOpnPrv() const {
            return !(m_op_cn_abs_opn_prv == 0);
        }
        bool IncludeOpCnAbsOpnPos() const {
            return !(m_op_cn_abs_opn_pos == 0);
        }
        bool IncludeOpCnAbsOpnBrk() const {
            return !(m_op_cn_abs_opn_brk == 0);
        }
        bool IncludeOpShShort() const {
            return !(m_op_sh_short == 0);
        }
        bool IncludeOpCnPosCall() const {
            return !(m_op_cn_pos_call == 0);
        }
        bool IncludeOpCnPosPut() const {
            return !(m_op_cn_pos_put == 0);
        }
        bool IncludeOpCnAbsPair() const {
            return !(m_op_cn_abs_pair == 0);
        }
        bool IncludeAbsAtmEquivCn() const {
            return !(m_abs_atm_equiv_cn == 0.0);
        }
        bool IncludeOpCnBot() const {
            return !(m_op_cn_bot == 0);
        }
        bool IncludeOpCnSld() const {
            return !(m_op_cn_sld == 0);
        }
        bool IncludeOpMnyBot() const {
            return !(m_op_mny_bot == 0.0);
        }
        bool IncludeOpMnySld() const {
            return !(m_op_mny_sld == 0.0);
        }
        bool IncludeOpPremBot() const {
            return !(m_op_prem_bot == 0.0);
        }
        bool IncludeOpPremSld() const {
            return !(m_op_prem_sld == 0.0);
        }
        bool IncludeMaxOptDttm() const {
            return (m_max_opt_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeOpPnlVol() const {
            return !(m_op_pnl_vol == 0.0);
        }
        bool IncludeOpPnlMid() const {
            return !(m_op_pnl_mid == 0.0);
        }
        bool IncludeOpPnlClr() const {
            return !(m_op_pnl_clr == 0.0);
        }
        bool IncludeOpPnlBrk() const {
            return !(m_op_pnl_brk == 0.0);
        }
        bool IncludeOpPnlDay() const {
            return !(m_op_pnl_day == 0.0);
        }
        bool IncludeOpDnPnlDay() const {
            return !(m_op_dn_pnl_day == 0.0);
        }
        bool IncludeOpDayVega() const {
            return !(m_op_day_vega == 0.0);
        }
        bool IncludeOpDayWvega() const {
            return !(m_op_day_wvega == 0.0);
        }
        bool IncludeOpDayTvega() const {
            return !(m_op_day_tvega == 0.0);
        }
        bool IncludeOpDayWtVega() const {
            return !(m_op_day_wt_vega == 0.0);
        }
        bool IncludeOpDayTheta() const {
            return !(m_op_day_theta == 0.0);
        }
        bool IncludeOpDayDelta() const {
            return !(m_op_day_delta == 0.0);
        }
        bool IncludeOpTrdDelta() const {
            return !(m_op_trd_delta == 0.0);
        }
        bool IncludePairPnl() const {
            return !(m_pair_pnl == 0.0);
        }
        bool IncludeContHedgePnl() const {
            return !(m_cont_hedge_pnl == 0.0);
        }
        bool IncludeContHedgePnl1() const {
            return !(m_cont_hedge_pnl1 == 0.0);
        }
        bool IncludeOpEdgeOpened() const {
            return !(m_op_edge_opened == 0.0);
        }
        bool IncludeOpEdgeClosed() const {
            return !(m_op_edge_closed == 0.0);
        }
        bool IncludePnlDn() const {
            return !(m_pnl_dn == 0.0);
        }
        bool IncludePnlDe() const {
            return !(m_pnl_de == 0.0);
        }
        bool IncludePnlSl() const {
            return !(m_pnl_sl == 0.0);
        }
        bool IncludePnlGa() const {
            return !(m_pnl_ga == 0.0);
        }
        bool IncludePnlTh() const {
            return !(m_pnl_th == 0.0);
        }
        bool IncludePnlVe() const {
            return !(m_pnl_ve == 0.0);
        }
        bool IncludePnlVo() const {
            return !(m_pnl_vo == 0.0);
        }
        bool IncludePnlVa() const {
            return !(m_pnl_va == 0.0);
        }
        bool IncludePnlErr() const {
            return !(m_pnl_err == 0.0);
        }
        bool IncludePnlRate() const {
            return !(m_pnl_rate == 0.0);
        }
        bool IncludePnlSdiv() const {
            return !(m_pnl_sdiv == 0.0);
        }
        bool IncludePnlDdiv() const {
            return !(m_pnl_ddiv == 0.0);
        }
        bool IncludePnlTe() const {
            return !(m_pnl_te == 0.0);
        }
        bool IncludePctIvChange() const {
            return !(m_pct_iv_change == 0.0);
        }
        bool IncludePctIvVega() const {
            return !(m_pct_iv_vega == 0.0);
        }
        bool IncludePctTvChange() const {
            return !(m_pct_tv_change == 0.0);
        }
        bool IncludePctTvVega() const {
            return !(m_pct_tv_vega == 0.0);
        }
        bool IncludeStkWidthMny() const {
            return !(m_stk_width_mny == 0.0);
        }
        bool IncludeOptWidthMny() const {
            return !(m_opt_width_mny == 0.0);
        }
        bool IncludeDayDdelta() const {
            return !(m_day_ddelta == 0.0);
        }
        bool IncludeDelta() const {
            return !(m_delta == 0.0);
        }
        bool IncludeDdelta() const {
            return !(m_ddelta == 0.0);
        }
        bool IncludeDeDecay() const {
            return !(m_de_decay == 0.0);
        }
        bool IncludeDdDecay() const {
            return !(m_dd_decay == 0.0);
        }
        bool IncludeGamma() const {
            return !(m_gamma == 0.0);
        }
        bool IncludeDGamma() const {
            return !(m_d_gamma == 0.0);
        }
        bool IncludeTheta() const {
            return !(m_theta == 0.0);
        }
        bool IncludeRho() const {
            return !(m_rho == 0.0);
        }
        bool IncludeVega() const {
            return !(m_vega == 0.0);
        }
        bool IncludeTVega() const {
            return !(m_t_vega == 0.0);
        }
        bool IncludeWVega() const {
            return !(m_w_vega == 0.0);
        }
        bool IncludeWtVega() const {
            return !(m_wt_vega == 0.0);
        }
        bool IncludeIvolVe() const {
            return !(m_ivol_ve == 0.0);
        }
        bool IncludeVolga() const {
            return !(m_volga == 0.0);
        }
        bool IncludeVanna() const {
            return !(m_vanna == 0.0);
        }
        bool IncludeSlope() const {
            return !(m_slope == 0.0);
        }
        bool IncludeAvega() const {
            return !(m_avega == 0.0);
        }
        bool IncludeAtheta() const {
            return !(m_atheta == 0.0);
        }
        bool IncludeHedgeGamma() const {
            return !(m_hedge_gamma == 0.0);
        }
        bool IncludeHedgeDgamma() const {
            return !(m_hedge_dgamma == 0.0);
        }
        bool IncludePremOvPar() const {
            return !(m_prem_ov_par == 0.0);
        }
        bool IncludeSimpPremOvPar() const {
            return !(m_simp_prem_ov_par == 0.0);
        }
        bool IncludeWtVeDd() const {
            return !(m_wt_ve_dd == 0.0);
        }
        bool IncludeWtVeDn() const {
            return !(m_wt_ve_dn == 0.0);
        }
        bool IncludeWtVeAt() const {
            return !(m_wt_ve_at == 0.0);
        }
        bool IncludeWtVeUp() const {
            return !(m_wt_ve_up == 0.0);
        }
        bool IncludeWtVeDu() const {
            return !(m_wt_ve_du == 0.0);
        }
        bool IncludeWtVeM1() const {
            return !(m_wt_ve_m1 == 0.0);
        }
        bool IncludeWtVeM2() const {
            return !(m_wt_ve_m2 == 0.0);
        }
        bool IncludeWtVeM3() const {
            return !(m_wt_ve_m3 == 0.0);
        }
        bool IncludeWtVeM4() const {
            return !(m_wt_ve_m4 == 0.0);
        }
        bool IncludeWtVeM5() const {
            return !(m_wt_ve_m5 == 0.0);
        }
        bool IncludePinXx() const {
            return !(m_pin_xx == 0.0);
        }
        bool IncludeOpnDeBelow() const {
            return !(m_opn_de_below == 0.0);
        }
        bool IncludeOpnDeAbove() const {
            return !(m_opn_de_above == 0.0);
        }
        bool IncludeOpnDdeBelow() const {
            return !(m_opn_dde_below == 0.0);
        }
        bool IncludeOpnDdeAbove() const {
            return !(m_opn_dde_above == 0.0);
        }
        bool IncludePosDeBelow() const {
            return !(m_pos_de_below == 0.0);
        }
        bool IncludePosDeAbove() const {
            return !(m_pos_de_above == 0.0);
        }
        bool IncludePosDdeBelow() const {
            return !(m_pos_dde_below == 0.0);
        }
        bool IncludePosDdeAbove() const {
            return !(m_pos_dde_above == 0.0);
        }
        bool IncludePosHedgeDeltaEx() const {
            return !(m_pos_hedge_delta_ex == 0.0);
        }
        bool IncludePosHedgeDdeltaEx() const {
            return !(m_pos_hedge_ddelta_ex == 0.0);
        }
        bool IncludeMmhDelta() const {
            return !(m_mmh_delta == 0.0);
        }
        bool IncludeMmhContracts() const {
            return !(m_mmh_contracts == 0);
        }
        bool IncludeMmhSources() const {
            return !(m_mmh_sources.empty());
        }
        bool IncludeTEdge() const {
            return !(m_t_edge == 0.0);
        }
        bool IncludeTEdgeMult() const {
            return !(m_t_edge_mult == 0.0);
        }
        bool IncludeTEdgePr() const {
            return !(m_t_edge_pr == 0.0);
        }
        bool IncludeTEdgeMultPr() const {
            return !(m_t_edge_mult_pr == 0.0);
        }
        bool IncludeNumTvolErrors() const {
            return !(m_num_tvol_errors == 0);
        }
        bool IncludePosTedgeWv() const {
            return !(m_pos_tedge_wv == 0.0);
        }
        bool IncludeNegTedgeWv() const {
            return !(m_neg_tedge_wv == 0.0);
        }
        bool IncludeBadTedgeWv() const {
            return !(m_bad_tedge_wv == 0.0);
        }
        bool IncludePosTedgePnl() const {
            return !(m_pos_tedge_pnl == 0.0);
        }
        bool IncludeNegTedgePnl() const {
            return !(m_neg_tedge_pnl == 0.0);
        }
        bool IncludeBadTedgePnl() const {
            return !(m_bad_tedge_pnl == 0.0);
        }
        bool IncludeTEdge2() const {
            return !(m_t_edge2 == 0.0);
        }
        bool IncludeTEdgeMult2() const {
            return !(m_t_edge_mult2 == 0.0);
        }
        bool IncludeTEdgePr2() const {
            return !(m_t_edge_pr2 == 0.0);
        }
        bool IncludeTEdgeMultPr2() const {
            return !(m_t_edge_mult_pr2 == 0.0);
        }
        bool IncludeNumTvolErrors2() const {
            return !(m_num_tvol_errors2 == 0);
        }
        bool IncludePosTedgeWv2() const {
            return !(m_pos_tedge_wv2 == 0.0);
        }
        bool IncludeNegTedgeWv2() const {
            return !(m_neg_tedge_wv2 == 0.0);
        }
        bool IncludeBadTedgeWv2() const {
            return !(m_bad_tedge_wv2 == 0.0);
        }
        bool IncludePosTedgePnl2() const {
            return !(m_pos_tedge_pnl2 == 0.0);
        }
        bool IncludeNegTedgePnl2() const {
            return !(m_neg_tedge_pnl2 == 0.0);
        }
        bool IncludeBadTedgePnl2() const {
            return !(m_bad_tedge_pnl2 == 0.0);
        }
        bool IncludeVaRsu90() const {
            return !(m_va_rsu90 == 0.0);
        }
        bool IncludeVaRsd90() const {
            return !(m_va_rsd90 == 0.0);
        }
        bool IncludeVaRsu50() const {
            return !(m_va_rsu50 == 0.0);
        }
        bool IncludeVaRsd50() const {
            return !(m_va_rsd50 == 0.0);
        }
        bool IncludeVaRsu15() const {
            return !(m_va_rsu15 == 0.0);
        }
        bool IncludeVaRsd15() const {
            return !(m_va_rsd15 == 0.0);
        }
        bool IncludeVaRsu10() const {
            return !(m_va_rsu10 == 0.0);
        }
        bool IncludeVaRsd10() const {
            return !(m_va_rsd10 == 0.0);
        }
        bool IncludeVaRsu06() const {
            return !(m_va_rsu06 == 0.0);
        }
        bool IncludeVaRsd08() const {
            return !(m_va_rsd08 == 0.0);
        }
        bool IncludeVaRsu05() const {
            return !(m_va_rsu05 == 0.0);
        }
        bool IncludeVaRsd05() const {
            return !(m_va_rsd05 == 0.0);
        }
        bool IncludeVaRsu1e() const {
            return !(m_va_rsu1e == 0.0);
        }
        bool IncludeVaRsd1e() const {
            return !(m_va_rsd1e == 0.0);
        }
        bool IncludeVaRsu2e() const {
            return !(m_va_rsu2e == 0.0);
        }
        bool IncludeVaRsd2e() const {
            return !(m_va_rsd2e == 0.0);
        }
        bool IncludeVaRearn() const {
            return !(m_va_rearn == 0.0);
        }
        bool IncludeVaRcash() const {
            return !(m_va_rcash == 0.0);
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
        bool IncludeStkLiqRisk() const {
            return !(m_stk_liq_risk == 0.0);
        }
        bool IncludeOptLiqRisk() const {
            return !(m_opt_liq_risk == 0.0);
        }
        bool IncludeShBotC0() const {
            return !(m_sh_bot_c0 == 0);
        }
        bool IncludeShSldC0() const {
            return !(m_sh_sld_c0 == 0);
        }
        bool IncludeShMnyC0() const {
            return !(m_sh_mny_c0 == 0.0);
        }
        bool IncludeShBotC1() const {
            return !(m_sh_bot_c1 == 0);
        }
        bool IncludeShSldC1() const {
            return !(m_sh_sld_c1 == 0);
        }
        bool IncludeShMnyC1() const {
            return !(m_sh_mny_c1 == 0.0);
        }
        bool IncludeOpHcMin25() const {
            return !(m_op_hc_min25 == 0.0);
        }
        bool IncludeOpHcMin37() const {
            return !(m_op_hc_min37 == 0.0);
        }
        bool IncludeHaircut25() const {
            return !(m_haircut25 == 0.0);
        }
        bool IncludeHaircut37() const {
            return !(m_haircut37 == 0.0);
        }
        bool IncludeNumStkErrors() const {
            return !(m_num_stk_errors == 0);
        }
        bool IncludeNumOptErrors() const {
            return !(m_num_opt_errors == 0);
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
            if ( IncludeSector()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_sector);
            }
            if ( IncludeIndustry()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(109,m_industry);
            }
            if ( IncludeBeta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_beta);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BetaSource>(m_beta_source)));
            if ( IncludeUPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(118,m_u_prc);
            }
            if ( IncludeUMark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(121,m_u_mark);
            }
            if ( IncludeUOpnMark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(124,m_u_opn_mark);
            }
            if ( IncludeLnDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(127,m_ln_ddelta);
            }
            if ( IncludeShDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(130,m_sh_ddelta);
            }
            if ( IncludeLnStkMktValueMid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(133,m_ln_stk_mkt_value_mid);
            }
            if ( IncludeShStkMktValueMid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(136,m_sh_stk_mkt_value_mid);
            }
            if ( IncludeOptMktValueMid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(139,m_opt_mkt_value_mid);
            }
            if ( IncludeOptMktValueVol()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(142,m_opt_mkt_value_vol);
            }
            if ( IncludeShOpnPosClr()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(145,m_sh_opn_pos_clr);
            }
            if ( IncludeShOpnPosPrv()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(148,m_sh_opn_pos_prv);
            }
            if ( IncludeShOpnPos()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(151,m_sh_opn_pos);
            }
            if ( IncludeShBot()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(154,m_sh_bot);
            }
            if ( IncludeShSld()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(157,m_sh_sld);
            }
            if ( IncludeShSldShrt()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(160,m_sh_sld_shrt);
            }
            if ( IncludeShMnyBot()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(163,m_sh_mny_bot);
            }
            if ( IncludeShMnySld()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(166,m_sh_mny_sld);
            }
            if ( IncludeShBotHdg()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(169,m_sh_bot_hdg);
            }
            if ( IncludeShSldHdg()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(172,m_sh_sld_hdg);
            }
            if ( IncludeShBotTrh()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(175,m_sh_bot_trh);
            }
            if ( IncludeShSldTrh()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(178,m_sh_sld_trh);
            }
            if ( IncludeShBotOpn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(181,m_sh_bot_opn);
            }
            if ( IncludeShSldOpn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(184,m_sh_sld_opn);
            }
            if ( IncludeShBotTrd()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(187,m_sh_bot_trd);
            }
            if ( IncludeShSldTrd()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(190,m_sh_sld_trd);
            }
            if ( IncludeMaxStkDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(193, m_max_stk_dttm);
            }
            if ( IncludeStPnlMid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(196,m_st_pnl_mid);
            }
            if ( IncludeStPnlClr()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(199,m_st_pnl_clr);
            }
            if ( IncludeStPnlDay()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(202,m_st_pnl_day);
            }
            if ( IncludeStDivPnl()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(205,m_st_div_pnl);
            }
            if ( IncludeStBorrowPnl()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(208,m_st_borrow_pnl);
            }
            if ( IncludeOpCnAbsCurPos()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(211,m_op_cn_abs_cur_pos);
            }
            if ( IncludeOpCnAbsOpnClr()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(214,m_op_cn_abs_opn_clr);
            }
            if ( IncludeOpCnAbsOpnPrv()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(217,m_op_cn_abs_opn_prv);
            }
            if ( IncludeOpCnAbsOpnPos()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(220,m_op_cn_abs_opn_pos);
            }
            if ( IncludeOpCnAbsOpnBrk()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(223,m_op_cn_abs_opn_brk);
            }
            if ( IncludeOpShShort()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(226,m_op_sh_short);
            }
            if ( IncludeOpCnPosCall()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(229,m_op_cn_pos_call);
            }
            if ( IncludeOpCnPosPut()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(232,m_op_cn_pos_put);
            }
            if ( IncludeOpCnAbsPair()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(235,m_op_cn_abs_pair);
            }
            if ( IncludeAbsAtmEquivCn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(238,m_abs_atm_equiv_cn);
            }
            if ( IncludeOpCnBot()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(241,m_op_cn_bot);
            }
            if ( IncludeOpCnSld()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(244,m_op_cn_sld);
            }
            if ( IncludeOpMnyBot()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(247,m_op_mny_bot);
            }
            if ( IncludeOpMnySld()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(250,m_op_mny_sld);
            }
            if ( IncludeOpPremBot()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(253,m_op_prem_bot);
            }
            if ( IncludeOpPremSld()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(256,m_op_prem_sld);
            }
            if ( IncludeMaxOptDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(259, m_max_opt_dttm);
            }
            if ( IncludeOpPnlVol()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(262,m_op_pnl_vol);
            }
            if ( IncludeOpPnlMid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(265,m_op_pnl_mid);
            }
            if ( IncludeOpPnlClr()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(268,m_op_pnl_clr);
            }
            if ( IncludeOpPnlBrk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(271,m_op_pnl_brk);
            }
            if ( IncludeOpPnlDay()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(274,m_op_pnl_day);
            }
            if ( IncludeOpDnPnlDay()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(277,m_op_dn_pnl_day);
            }
            if ( IncludeOpDayVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(280,m_op_day_vega);
            }
            if ( IncludeOpDayWvega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(283,m_op_day_wvega);
            }
            if ( IncludeOpDayTvega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(286,m_op_day_tvega);
            }
            if ( IncludeOpDayWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(289,m_op_day_wt_vega);
            }
            if ( IncludeOpDayTheta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(292,m_op_day_theta);
            }
            if ( IncludeOpDayDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(295,m_op_day_delta);
            }
            if ( IncludeOpTrdDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(298,m_op_trd_delta);
            }
            if ( IncludePairPnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(301,m_pair_pnl);
            }
            if ( IncludeContHedgePnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(304,m_cont_hedge_pnl);
            }
            if ( IncludeContHedgePnl1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(307,m_cont_hedge_pnl1);
            }
            if ( IncludeOpEdgeOpened()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(310,m_op_edge_opened);
            }
            if ( IncludeOpEdgeClosed()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(313,m_op_edge_closed);
            }
            if ( IncludePnlDn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(316,m_pnl_dn);
            }
            if ( IncludePnlDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(319,m_pnl_de);
            }
            if ( IncludePnlSl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(322,m_pnl_sl);
            }
            if ( IncludePnlGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(325,m_pnl_ga);
            }
            if ( IncludePnlTh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(328,m_pnl_th);
            }
            if ( IncludePnlVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(331,m_pnl_ve);
            }
            if ( IncludePnlVo()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(334,m_pnl_vo);
            }
            if ( IncludePnlVa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(337,m_pnl_va);
            }
            if ( IncludePnlErr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(340,m_pnl_err);
            }
            if ( IncludePnlRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(343,m_pnl_rate);
            }
            if ( IncludePnlSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(346,m_pnl_sdiv);
            }
            if ( IncludePnlDdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(349,m_pnl_ddiv);
            }
            if ( IncludePnlTe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(352,m_pnl_te);
            }
            if ( IncludePctIvChange()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(355,m_pct_iv_change);
            }
            if ( IncludePctIvVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(358,m_pct_iv_vega);
            }
            if ( IncludePctTvChange()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(361,m_pct_tv_change);
            }
            if ( IncludePctTvVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(364,m_pct_tv_vega);
            }
            if ( IncludeStkWidthMny()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(367,m_stk_width_mny);
            }
            if ( IncludeOptWidthMny()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(370,m_opt_width_mny);
            }
            if ( IncludeDayDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(373,m_day_ddelta);
            }
            if ( IncludeDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(376,m_delta);
            }
            if ( IncludeDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(379,m_ddelta);
            }
            if ( IncludeDeDecay()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(382,m_de_decay);
            }
            if ( IncludeDdDecay()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(385,m_dd_decay);
            }
            if ( IncludeGamma()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(388,m_gamma);
            }
            if ( IncludeDGamma()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(391,m_d_gamma);
            }
            if ( IncludeTheta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(394,m_theta);
            }
            if ( IncludeRho()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(397,m_rho);
            }
            if ( IncludeVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(400,m_vega);
            }
            if ( IncludeTVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(403,m_t_vega);
            }
            if ( IncludeWVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(406,m_w_vega);
            }
            if ( IncludeWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(409,m_wt_vega);
            }
            if ( IncludeIvolVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(412,m_ivol_ve);
            }
            if ( IncludeVolga()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(415,m_volga);
            }
            if ( IncludeVanna()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(418,m_vanna);
            }
            if ( IncludeSlope()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(421,m_slope);
            }
            if ( IncludeAvega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(424,m_avega);
            }
            if ( IncludeAtheta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(427,m_atheta);
            }
            if ( IncludeHedgeGamma()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(430,m_hedge_gamma);
            }
            if ( IncludeHedgeDgamma()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(433,m_hedge_dgamma);
            }
            if ( IncludePremOvPar()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(436,m_prem_ov_par);
            }
            if ( IncludeSimpPremOvPar()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(439,m_simp_prem_ov_par);
            }
            if ( IncludeWtVeDd()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(442,m_wt_ve_dd);
            }
            if ( IncludeWtVeDn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(445,m_wt_ve_dn);
            }
            if ( IncludeWtVeAt()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(448,m_wt_ve_at);
            }
            if ( IncludeWtVeUp()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(451,m_wt_ve_up);
            }
            if ( IncludeWtVeDu()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(454,m_wt_ve_du);
            }
            if ( IncludeWtVeM1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(457,m_wt_ve_m1);
            }
            if ( IncludeWtVeM2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(460,m_wt_ve_m2);
            }
            if ( IncludeWtVeM3()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(463,m_wt_ve_m3);
            }
            if ( IncludeWtVeM4()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(466,m_wt_ve_m4);
            }
            if ( IncludeWtVeM5()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(469,m_wt_ve_m5);
            }
            if ( IncludePinXx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(472,m_pin_xx);
            }
            if ( IncludeOpnDeBelow()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(475,m_opn_de_below);
            }
            if ( IncludeOpnDeAbove()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(478,m_opn_de_above);
            }
            if ( IncludeOpnDdeBelow()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(481,m_opn_dde_below);
            }
            if ( IncludeOpnDdeAbove()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(484,m_opn_dde_above);
            }
            if ( IncludePosDeBelow()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(487,m_pos_de_below);
            }
            if ( IncludePosDeAbove()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(490,m_pos_de_above);
            }
            if ( IncludePosDdeBelow()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(493,m_pos_dde_below);
            }
            if ( IncludePosDdeAbove()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(496,m_pos_dde_above);
            }
            if ( IncludePosHedgeDeltaEx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(499,m_pos_hedge_delta_ex);
            }
            if ( IncludePosHedgeDdeltaEx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(502,m_pos_hedge_ddelta_ex);
            }
            if ( IncludeMmhDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(505,m_mmh_delta);
            }
            if ( IncludeMmhContracts()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(508,m_mmh_contracts);
            }
            if ( IncludeMmhSources()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(511,m_mmh_sources);
            }
            if ( IncludeTEdge()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(514,m_t_edge);
            }
            if ( IncludeTEdgeMult()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(517,m_t_edge_mult);
            }
            if ( IncludeTEdgePr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(520,m_t_edge_pr);
            }
            if ( IncludeTEdgeMultPr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(523,m_t_edge_mult_pr);
            }
            if ( IncludeNumTvolErrors()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(526,m_num_tvol_errors);
            }
            if ( IncludePosTedgeWv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(529,m_pos_tedge_wv);
            }
            if ( IncludeNegTedgeWv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(532,m_neg_tedge_wv);
            }
            if ( IncludeBadTedgeWv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(535,m_bad_tedge_wv);
            }
            if ( IncludePosTedgePnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(538,m_pos_tedge_pnl);
            }
            if ( IncludeNegTedgePnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(541,m_neg_tedge_pnl);
            }
            if ( IncludeBadTedgePnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(544,m_bad_tedge_pnl);
            }
            if ( IncludeTEdge2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(547,m_t_edge2);
            }
            if ( IncludeTEdgeMult2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(550,m_t_edge_mult2);
            }
            if ( IncludeTEdgePr2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(553,m_t_edge_pr2);
            }
            if ( IncludeTEdgeMultPr2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(556,m_t_edge_mult_pr2);
            }
            if ( IncludeNumTvolErrors2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(559,m_num_tvol_errors2);
            }
            if ( IncludePosTedgeWv2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(562,m_pos_tedge_wv2);
            }
            if ( IncludeNegTedgeWv2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(565,m_neg_tedge_wv2);
            }
            if ( IncludeBadTedgeWv2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(568,m_bad_tedge_wv2);
            }
            if ( IncludePosTedgePnl2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(571,m_pos_tedge_pnl2);
            }
            if ( IncludeNegTedgePnl2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(574,m_neg_tedge_pnl2);
            }
            if ( IncludeBadTedgePnl2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(577,m_bad_tedge_pnl2);
            }
            if ( IncludeVaRsu90()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(580,m_va_rsu90);
            }
            if ( IncludeVaRsd90()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(583,m_va_rsd90);
            }
            if ( IncludeVaRsu50()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(586,m_va_rsu50);
            }
            if ( IncludeVaRsd50()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(589,m_va_rsd50);
            }
            if ( IncludeVaRsu15()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(592,m_va_rsu15);
            }
            if ( IncludeVaRsd15()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(595,m_va_rsd15);
            }
            if ( IncludeVaRsu10()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(598,m_va_rsu10);
            }
            if ( IncludeVaRsd10()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(601,m_va_rsd10);
            }
            if ( IncludeVaRsu06()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(604,m_va_rsu06);
            }
            if ( IncludeVaRsd08()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(607,m_va_rsd08);
            }
            if ( IncludeVaRsu05()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(610,m_va_rsu05);
            }
            if ( IncludeVaRsd05()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(613,m_va_rsd05);
            }
            if ( IncludeVaRsu1e()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(616,m_va_rsu1e);
            }
            if ( IncludeVaRsd1e()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(619,m_va_rsd1e);
            }
            if ( IncludeVaRsu2e()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(622,m_va_rsu2e);
            }
            if ( IncludeVaRsd2e()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(625,m_va_rsd2e);
            }
            if ( IncludeVaRearn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(628,m_va_rearn);
            }
            if ( IncludeVaRcash()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(631,m_va_rcash);
            }
            if ( IncludeMarginUdnVdn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(698,m_margin_udn_vdn);
            }
            if ( IncludeMarginUdnVup()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(699,m_margin_udn_vup);
            }
            if ( IncludeMarginUupVdn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(700,m_margin_uup_vdn);
            }
            if ( IncludeMarginUupVup()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(701,m_margin_uup_vup);
            }
            if ( IncludeStkLiqRisk()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(634,m_stk_liq_risk);
            }
            if ( IncludeOptLiqRisk()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(637,m_opt_liq_risk);
            }
            if ( IncludeShBotC0()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(640,m_sh_bot_c0);
            }
            if ( IncludeShSldC0()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(643,m_sh_sld_c0);
            }
            if ( IncludeShMnyC0()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(646,m_sh_mny_c0);
            }
            if ( IncludeShBotC1()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(649,m_sh_bot_c1);
            }
            if ( IncludeShSldC1()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(652,m_sh_sld_c1);
            }
            if ( IncludeShMnyC1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(655,m_sh_mny_c1);
            }
            if ( IncludeOpHcMin25()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(658,m_op_hc_min25);
            }
            if ( IncludeOpHcMin37()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(661,m_op_hc_min37);
            }
            if ( IncludeHaircut25()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(664,m_haircut25);
            }
            if ( IncludeHaircut37()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(667,m_haircut37);
            }
            if ( IncludeNumStkErrors()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(670,m_num_stk_errors);
            }
            if ( IncludeNumOptErrors()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(673,m_num_opt_errors);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(676,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::R5Source>(m_update_source)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(679,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktErrFlag>(m_stk_mark_flag)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(682,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktErrFlag>(m_opt_mark_flag)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(685,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlertCode>(m_risk_alert1)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(688,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlertCode>(m_risk_alert2)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(691,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlertCode>(m_risk_alert3)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(694,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlertCode>(m_risk_alert4)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(697, m_timestamp);
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
            if ( IncludeSector()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_sector));
            }
            if ( IncludeIndustry()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,109,m_industry);
            }
            if ( IncludeBeta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_beta);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BetaSource>(m_beta_source)));
            if ( IncludeUPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,118,m_u_prc);
            }
            if ( IncludeUMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,121,m_u_mark);
            }
            if ( IncludeUOpnMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,124,m_u_opn_mark);
            }
            if ( IncludeLnDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,127,m_ln_ddelta);
            }
            if ( IncludeShDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,130,m_sh_ddelta);
            }
            if ( IncludeLnStkMktValueMid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,133,m_ln_stk_mkt_value_mid);
            }
            if ( IncludeShStkMktValueMid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,136,m_sh_stk_mkt_value_mid);
            }
            if ( IncludeOptMktValueMid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,139,m_opt_mkt_value_mid);
            }
            if ( IncludeOptMktValueVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,142,m_opt_mkt_value_vol);
            }
            if ( IncludeShOpnPosClr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,145,m_sh_opn_pos_clr);
            }
            if ( IncludeShOpnPosPrv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,148,m_sh_opn_pos_prv);
            }
            if ( IncludeShOpnPos()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,151,m_sh_opn_pos);
            }
            if ( IncludeShBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,154,m_sh_bot);
            }
            if ( IncludeShSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,157,m_sh_sld);
            }
            if ( IncludeShSldShrt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,160,m_sh_sld_shrt);
            }
            if ( IncludeShMnyBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,163,m_sh_mny_bot);
            }
            if ( IncludeShMnySld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,166,m_sh_mny_sld);
            }
            if ( IncludeShBotHdg()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,169,m_sh_bot_hdg);
            }
            if ( IncludeShSldHdg()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,172,m_sh_sld_hdg);
            }
            if ( IncludeShBotTrh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,175,m_sh_bot_trh);
            }
            if ( IncludeShSldTrh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,178,m_sh_sld_trh);
            }
            if ( IncludeShBotOpn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,181,m_sh_bot_opn);
            }
            if ( IncludeShSldOpn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,184,m_sh_sld_opn);
            }
            if ( IncludeShBotTrd()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,187,m_sh_bot_trd);
            }
            if ( IncludeShSldTrd()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,190,m_sh_sld_trd);
            }
            if ( IncludeMaxStkDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 193, m_max_stk_dttm);
            }
            if ( IncludeStPnlMid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,196,m_st_pnl_mid);
            }
            if ( IncludeStPnlClr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,199,m_st_pnl_clr);
            }
            if ( IncludeStPnlDay()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,202,m_st_pnl_day);
            }
            if ( IncludeStDivPnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,205,m_st_div_pnl);
            }
            if ( IncludeStBorrowPnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,208,m_st_borrow_pnl);
            }
            if ( IncludeOpCnAbsCurPos()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,211,m_op_cn_abs_cur_pos);
            }
            if ( IncludeOpCnAbsOpnClr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,214,m_op_cn_abs_opn_clr);
            }
            if ( IncludeOpCnAbsOpnPrv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,217,m_op_cn_abs_opn_prv);
            }
            if ( IncludeOpCnAbsOpnPos()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,220,m_op_cn_abs_opn_pos);
            }
            if ( IncludeOpCnAbsOpnBrk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,223,m_op_cn_abs_opn_brk);
            }
            if ( IncludeOpShShort()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,226,m_op_sh_short);
            }
            if ( IncludeOpCnPosCall()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,229,m_op_cn_pos_call);
            }
            if ( IncludeOpCnPosPut()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,232,m_op_cn_pos_put);
            }
            if ( IncludeOpCnAbsPair()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,235,m_op_cn_abs_pair);
            }
            if ( IncludeAbsAtmEquivCn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,238,m_abs_atm_equiv_cn);
            }
            if ( IncludeOpCnBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,241,m_op_cn_bot);
            }
            if ( IncludeOpCnSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,244,m_op_cn_sld);
            }
            if ( IncludeOpMnyBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,247,m_op_mny_bot);
            }
            if ( IncludeOpMnySld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,250,m_op_mny_sld);
            }
            if ( IncludeOpPremBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,253,m_op_prem_bot);
            }
            if ( IncludeOpPremSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,256,m_op_prem_sld);
            }
            if ( IncludeMaxOptDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 259, m_max_opt_dttm);
            }
            if ( IncludeOpPnlVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,262,m_op_pnl_vol);
            }
            if ( IncludeOpPnlMid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,265,m_op_pnl_mid);
            }
            if ( IncludeOpPnlClr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,268,m_op_pnl_clr);
            }
            if ( IncludeOpPnlBrk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,271,m_op_pnl_brk);
            }
            if ( IncludeOpPnlDay()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,274,m_op_pnl_day);
            }
            if ( IncludeOpDnPnlDay()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,277,m_op_dn_pnl_day);
            }
            if ( IncludeOpDayVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,280,m_op_day_vega);
            }
            if ( IncludeOpDayWvega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,283,m_op_day_wvega);
            }
            if ( IncludeOpDayTvega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,286,m_op_day_tvega);
            }
            if ( IncludeOpDayWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,289,m_op_day_wt_vega);
            }
            if ( IncludeOpDayTheta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,292,m_op_day_theta);
            }
            if ( IncludeOpDayDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,295,m_op_day_delta);
            }
            if ( IncludeOpTrdDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,298,m_op_trd_delta);
            }
            if ( IncludePairPnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,301,m_pair_pnl);
            }
            if ( IncludeContHedgePnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,304,m_cont_hedge_pnl);
            }
            if ( IncludeContHedgePnl1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,307,m_cont_hedge_pnl1);
            }
            if ( IncludeOpEdgeOpened()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,310,m_op_edge_opened);
            }
            if ( IncludeOpEdgeClosed()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,313,m_op_edge_closed);
            }
            if ( IncludePnlDn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,316,m_pnl_dn);
            }
            if ( IncludePnlDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,319,m_pnl_de);
            }
            if ( IncludePnlSl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,322,m_pnl_sl);
            }
            if ( IncludePnlGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,325,m_pnl_ga);
            }
            if ( IncludePnlTh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,328,m_pnl_th);
            }
            if ( IncludePnlVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,331,m_pnl_ve);
            }
            if ( IncludePnlVo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,334,m_pnl_vo);
            }
            if ( IncludePnlVa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,337,m_pnl_va);
            }
            if ( IncludePnlErr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,340,m_pnl_err);
            }
            if ( IncludePnlRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,343,m_pnl_rate);
            }
            if ( IncludePnlSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,346,m_pnl_sdiv);
            }
            if ( IncludePnlDdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,349,m_pnl_ddiv);
            }
            if ( IncludePnlTe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,352,m_pnl_te);
            }
            if ( IncludePctIvChange()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,355,m_pct_iv_change);
            }
            if ( IncludePctIvVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,358,m_pct_iv_vega);
            }
            if ( IncludePctTvChange()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,361,m_pct_tv_change);
            }
            if ( IncludePctTvVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,364,m_pct_tv_vega);
            }
            if ( IncludeStkWidthMny()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,367,m_stk_width_mny);
            }
            if ( IncludeOptWidthMny()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,370,m_opt_width_mny);
            }
            if ( IncludeDayDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,373,m_day_ddelta);
            }
            if ( IncludeDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,376,m_delta);
            }
            if ( IncludeDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,379,m_ddelta);
            }
            if ( IncludeDeDecay()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,382,m_de_decay);
            }
            if ( IncludeDdDecay()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,385,m_dd_decay);
            }
            if ( IncludeGamma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,388,m_gamma);
            }
            if ( IncludeDGamma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,391,m_d_gamma);
            }
            if ( IncludeTheta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,394,m_theta);
            }
            if ( IncludeRho()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,397,m_rho);
            }
            if ( IncludeVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,400,m_vega);
            }
            if ( IncludeTVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,403,m_t_vega);
            }
            if ( IncludeWVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,406,m_w_vega);
            }
            if ( IncludeWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,409,m_wt_vega);
            }
            if ( IncludeIvolVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,412,m_ivol_ve);
            }
            if ( IncludeVolga()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,415,m_volga);
            }
            if ( IncludeVanna()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,418,m_vanna);
            }
            if ( IncludeSlope()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,421,m_slope);
            }
            if ( IncludeAvega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,424,m_avega);
            }
            if ( IncludeAtheta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,427,m_atheta);
            }
            if ( IncludeHedgeGamma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,430,m_hedge_gamma);
            }
            if ( IncludeHedgeDgamma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,433,m_hedge_dgamma);
            }
            if ( IncludePremOvPar()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,436,m_prem_ov_par);
            }
            if ( IncludeSimpPremOvPar()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,439,m_simp_prem_ov_par);
            }
            if ( IncludeWtVeDd()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,442,m_wt_ve_dd);
            }
            if ( IncludeWtVeDn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,445,m_wt_ve_dn);
            }
            if ( IncludeWtVeAt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,448,m_wt_ve_at);
            }
            if ( IncludeWtVeUp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,451,m_wt_ve_up);
            }
            if ( IncludeWtVeDu()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,454,m_wt_ve_du);
            }
            if ( IncludeWtVeM1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,457,m_wt_ve_m1);
            }
            if ( IncludeWtVeM2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,460,m_wt_ve_m2);
            }
            if ( IncludeWtVeM3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,463,m_wt_ve_m3);
            }
            if ( IncludeWtVeM4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,466,m_wt_ve_m4);
            }
            if ( IncludeWtVeM5()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,469,m_wt_ve_m5);
            }
            if ( IncludePinXx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,472,m_pin_xx);
            }
            if ( IncludeOpnDeBelow()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,475,m_opn_de_below);
            }
            if ( IncludeOpnDeAbove()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,478,m_opn_de_above);
            }
            if ( IncludeOpnDdeBelow()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,481,m_opn_dde_below);
            }
            if ( IncludeOpnDdeAbove()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,484,m_opn_dde_above);
            }
            if ( IncludePosDeBelow()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,487,m_pos_de_below);
            }
            if ( IncludePosDeAbove()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,490,m_pos_de_above);
            }
            if ( IncludePosDdeBelow()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,493,m_pos_dde_below);
            }
            if ( IncludePosDdeAbove()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,496,m_pos_dde_above);
            }
            if ( IncludePosHedgeDeltaEx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,499,m_pos_hedge_delta_ex);
            }
            if ( IncludePosHedgeDdeltaEx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,502,m_pos_hedge_ddelta_ex);
            }
            if ( IncludeMmhDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,505,m_mmh_delta);
            }
            if ( IncludeMmhContracts()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,508,m_mmh_contracts);
            }
            if ( IncludeMmhSources()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,511,static_cast<string>(m_mmh_sources));
            }
            if ( IncludeTEdge()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,514,m_t_edge);
            }
            if ( IncludeTEdgeMult()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,517,m_t_edge_mult);
            }
            if ( IncludeTEdgePr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,520,m_t_edge_pr);
            }
            if ( IncludeTEdgeMultPr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,523,m_t_edge_mult_pr);
            }
            if ( IncludeNumTvolErrors()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,526,m_num_tvol_errors);
            }
            if ( IncludePosTedgeWv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,529,m_pos_tedge_wv);
            }
            if ( IncludeNegTedgeWv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,532,m_neg_tedge_wv);
            }
            if ( IncludeBadTedgeWv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,535,m_bad_tedge_wv);
            }
            if ( IncludePosTedgePnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,538,m_pos_tedge_pnl);
            }
            if ( IncludeNegTedgePnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,541,m_neg_tedge_pnl);
            }
            if ( IncludeBadTedgePnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,544,m_bad_tedge_pnl);
            }
            if ( IncludeTEdge2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,547,m_t_edge2);
            }
            if ( IncludeTEdgeMult2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,550,m_t_edge_mult2);
            }
            if ( IncludeTEdgePr2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,553,m_t_edge_pr2);
            }
            if ( IncludeTEdgeMultPr2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,556,m_t_edge_mult_pr2);
            }
            if ( IncludeNumTvolErrors2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,559,m_num_tvol_errors2);
            }
            if ( IncludePosTedgeWv2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,562,m_pos_tedge_wv2);
            }
            if ( IncludeNegTedgeWv2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,565,m_neg_tedge_wv2);
            }
            if ( IncludeBadTedgeWv2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,568,m_bad_tedge_wv2);
            }
            if ( IncludePosTedgePnl2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,571,m_pos_tedge_pnl2);
            }
            if ( IncludeNegTedgePnl2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,574,m_neg_tedge_pnl2);
            }
            if ( IncludeBadTedgePnl2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,577,m_bad_tedge_pnl2);
            }
            if ( IncludeVaRsu90()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,580,m_va_rsu90);
            }
            if ( IncludeVaRsd90()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,583,m_va_rsd90);
            }
            if ( IncludeVaRsu50()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,586,m_va_rsu50);
            }
            if ( IncludeVaRsd50()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,589,m_va_rsd50);
            }
            if ( IncludeVaRsu15()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,592,m_va_rsu15);
            }
            if ( IncludeVaRsd15()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,595,m_va_rsd15);
            }
            if ( IncludeVaRsu10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,598,m_va_rsu10);
            }
            if ( IncludeVaRsd10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,601,m_va_rsd10);
            }
            if ( IncludeVaRsu06()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,604,m_va_rsu06);
            }
            if ( IncludeVaRsd08()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,607,m_va_rsd08);
            }
            if ( IncludeVaRsu05()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,610,m_va_rsu05);
            }
            if ( IncludeVaRsd05()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,613,m_va_rsd05);
            }
            if ( IncludeVaRsu1e()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,616,m_va_rsu1e);
            }
            if ( IncludeVaRsd1e()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,619,m_va_rsd1e);
            }
            if ( IncludeVaRsu2e()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,622,m_va_rsu2e);
            }
            if ( IncludeVaRsd2e()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,625,m_va_rsd2e);
            }
            if ( IncludeVaRearn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,628,m_va_rearn);
            }
            if ( IncludeVaRcash()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,631,m_va_rcash);
            }
            if ( IncludeMarginUdnVdn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,698,m_margin_udn_vdn);
            }
            if ( IncludeMarginUdnVup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,699,m_margin_udn_vup);
            }
            if ( IncludeMarginUupVdn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,700,m_margin_uup_vdn);
            }
            if ( IncludeMarginUupVup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,701,m_margin_uup_vup);
            }
            if ( IncludeStkLiqRisk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,634,m_stk_liq_risk);
            }
            if ( IncludeOptLiqRisk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,637,m_opt_liq_risk);
            }
            if ( IncludeShBotC0()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,640,m_sh_bot_c0);
            }
            if ( IncludeShSldC0()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,643,m_sh_sld_c0);
            }
            if ( IncludeShMnyC0()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,646,m_sh_mny_c0);
            }
            if ( IncludeShBotC1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,649,m_sh_bot_c1);
            }
            if ( IncludeShSldC1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,652,m_sh_sld_c1);
            }
            if ( IncludeShMnyC1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,655,m_sh_mny_c1);
            }
            if ( IncludeOpHcMin25()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,658,m_op_hc_min25);
            }
            if ( IncludeOpHcMin37()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,661,m_op_hc_min37);
            }
            if ( IncludeHaircut25()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,664,m_haircut25);
            }
            if ( IncludeHaircut37()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,667,m_haircut37);
            }
            if ( IncludeNumStkErrors()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,670,m_num_stk_errors);
            }
            if ( IncludeNumOptErrors()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,673,m_num_opt_errors);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,676,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::R5Source>(m_update_source)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,679,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktErrFlag>(m_stk_mark_flag)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,682,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktErrFlag>(m_opt_mark_flag)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,685,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlertCode>(m_risk_alert1)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,688,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlertCode>(m_risk_alert2)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,691,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlertCode>(m_risk_alert3)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,694,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlertCode>(m_risk_alert4)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 697, m_timestamp);
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
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_sector = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_industry = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_beta_source = static_cast<spiderrock::protobuf::api::BetaSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_mark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_opn_mark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ln_ddelta = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_sh_ddelta = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ln_stk_mkt_value_mid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_sh_stk_mkt_value_mid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_opt_mkt_value_mid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_opt_mkt_value_vol = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_opn_pos_clr = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_opn_pos_prv = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_opn_pos = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_bot = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_sld = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_sld_shrt = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_sh_mny_bot = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_sh_mny_sld = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_bot_hdg = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_sld_hdg = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_bot_trh = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_sld_trh = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_bot_opn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_sld_opn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_bot_trd = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_sld_trd = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_max_stk_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_st_pnl_mid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_st_pnl_clr = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_st_pnl_day = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_st_div_pnl = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_st_borrow_pnl = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_op_cn_abs_cur_pos = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_op_cn_abs_opn_clr = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_op_cn_abs_opn_prv = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_op_cn_abs_opn_pos = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_op_cn_abs_opn_brk = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 226: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_op_sh_short = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 229: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_op_cn_pos_call = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 232: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_op_cn_pos_put = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_op_cn_abs_pair = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 238: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_abs_atm_equiv_cn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 241: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_op_cn_bot = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 244: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_op_cn_sld = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 247: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_op_mny_bot = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 250: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_op_mny_sld = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 253: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_prem_bot = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 256: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_prem_sld = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 259: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_max_opt_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 262: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_op_pnl_vol = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 265: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_op_pnl_mid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 268: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_op_pnl_clr = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 271: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_op_pnl_brk = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 274: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_op_pnl_day = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 277: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_op_dn_pnl_day = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 280: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_day_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 283: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_day_wvega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 286: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_day_tvega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 289: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_day_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 292: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_day_theta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 295: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_day_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 298: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_trd_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 301: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pair_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 304: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cont_hedge_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 307: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cont_hedge_pnl1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 310: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_edge_opened = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 313: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_edge_closed = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 316: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_dn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 319: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 322: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_sl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 325: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 328: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_th = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 331: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 334: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_vo = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 337: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_va = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 340: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_err = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 343: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 346: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 349: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_ddiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 352: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_te = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 355: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pct_iv_change = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 358: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pct_iv_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 361: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pct_tv_change = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 364: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pct_tv_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 367: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_stk_width_mny = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 370: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opt_width_mny = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 373: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_ddelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 376: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 379: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ddelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 382: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_de_decay = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 385: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_dd_decay = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 388: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_gamma = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 391: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_d_gamma = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 394: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_theta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 397: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rho = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 400: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 403: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 406: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_w_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 409: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 412: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ivol_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 415: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_volga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 418: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vanna = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 421: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_slope = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 424: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_avega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 427: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atheta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 430: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_hedge_gamma = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 433: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_hedge_dgamma = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 436: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prem_ov_par = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 439: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_simp_prem_ov_par = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 442: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_dd = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 445: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_dn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 448: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_at = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 451: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_up = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 454: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_du = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 457: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_m1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 460: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_m2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 463: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_m3 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 466: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_m4 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 469: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_m5 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 472: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pin_xx = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 475: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_de_below = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 478: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_de_above = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 481: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_dde_below = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 484: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_dde_above = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 487: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_de_below = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 490: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_de_above = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 493: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_dde_below = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 496: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_dde_above = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 499: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_hedge_delta_ex = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 502: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_hedge_ddelta_ex = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 505: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mmh_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 508: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_mmh_contracts = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 511: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_mmh_sources = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 514: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_edge = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 517: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_edge_mult = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 520: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_edge_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 523: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_edge_mult_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 526: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_tvol_errors = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 529: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_tedge_wv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 532: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_neg_tedge_wv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 535: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bad_tedge_wv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 538: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_tedge_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 541: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_neg_tedge_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 544: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bad_tedge_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 547: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_edge2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 550: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_edge_mult2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 553: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_edge_pr2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 556: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_edge_mult_pr2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 559: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_tvol_errors2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 562: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_tedge_wv2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 565: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_neg_tedge_wv2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 568: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bad_tedge_wv2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 571: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_tedge_pnl2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 574: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_neg_tedge_pnl2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 577: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bad_tedge_pnl2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 580: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsu90 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 583: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsd90 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 586: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsu50 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 589: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsd50 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 592: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsu15 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 595: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsd15 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 598: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsu10 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 601: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsd10 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 604: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsu06 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 607: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsd08 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 610: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsu05 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 613: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsd05 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 616: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsu1e = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 619: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsd1e = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 622: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsu2e = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 625: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsd2e = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 628: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rearn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 631: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rcash = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 698: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_udn_vdn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 699: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_udn_vup = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 700: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_uup_vdn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 701: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_uup_vup = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 634: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_stk_liq_risk = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 637: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opt_liq_risk = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 640: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_bot_c0 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 643: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_sld_c0 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 646: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sh_mny_c0 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 649: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_bot_c1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 652: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_sld_c1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 655: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sh_mny_c1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 658: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_hc_min25 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 661: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_hc_min37 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 664: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_haircut25 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 667: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_haircut37 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 670: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_stk_errors = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 673: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_opt_errors = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 676: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_update_source = static_cast<spiderrock::protobuf::api::R5Source>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 679: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_stk_mark_flag = static_cast<spiderrock::protobuf::api::MktErrFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 682: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_opt_mark_flag = static_cast<spiderrock::protobuf::api::MktErrFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 685: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_risk_alert1 = static_cast<spiderrock::protobuf::api::AlertCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 688: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_risk_alert2 = static_cast<spiderrock::protobuf::api::AlertCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 691: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_risk_alert3 = static_cast<spiderrock::protobuf::api::AlertCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 694: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_risk_alert4 = static_cast<spiderrock::protobuf::api::AlertCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 697: {
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

    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::_meta>() const { return SymbolRiskSummaryV5::_meta{ m__meta}; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pkey>() const { return SymbolRiskSummaryV5::pkey{ m_pkey}; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::sector>() const { return m_sector; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::industry>() const { return m_industry; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::beta>() const { return m_beta; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::beta_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BetaSource>( m_beta_source)); }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::u_prc>() const { return m_u_prc; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::u_mark>() const { return m_u_mark; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::u_opn_mark>() const { return m_u_opn_mark; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::ln_ddelta>() const { return m_ln_ddelta; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::sh_ddelta>() const { return m_sh_ddelta; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::ln_stk_mkt_value_mid>() const { return m_ln_stk_mkt_value_mid; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::sh_stk_mkt_value_mid>() const { return m_sh_stk_mkt_value_mid; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::opt_mkt_value_mid>() const { return m_opt_mkt_value_mid; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::opt_mkt_value_vol>() const { return m_opt_mkt_value_vol; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::sh_opn_pos_clr>() const { return m_sh_opn_pos_clr; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::sh_opn_pos_prv>() const { return m_sh_opn_pos_prv; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::sh_opn_pos>() const { return m_sh_opn_pos; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::sh_bot>() const { return m_sh_bot; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::sh_sld>() const { return m_sh_sld; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::sh_sld_shrt>() const { return m_sh_sld_shrt; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::sh_mny_bot>() const { return m_sh_mny_bot; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::sh_mny_sld>() const { return m_sh_mny_sld; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::sh_bot_hdg>() const { return m_sh_bot_hdg; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::sh_sld_hdg>() const { return m_sh_sld_hdg; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::sh_bot_trh>() const { return m_sh_bot_trh; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::sh_sld_trh>() const { return m_sh_sld_trh; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::sh_bot_opn>() const { return m_sh_bot_opn; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::sh_sld_opn>() const { return m_sh_sld_opn; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::sh_bot_trd>() const { return m_sh_bot_trd; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::sh_sld_trd>() const { return m_sh_sld_trd; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::max_stk_dttm>() const { return m_max_stk_dttm; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::st_pnl_mid>() const { return m_st_pnl_mid; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::st_pnl_clr>() const { return m_st_pnl_clr; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::st_pnl_day>() const { return m_st_pnl_day; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::st_div_pnl>() const { return m_st_div_pnl; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::st_borrow_pnl>() const { return m_st_borrow_pnl; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_cn_abs_cur_pos>() const { return m_op_cn_abs_cur_pos; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_cn_abs_opn_clr>() const { return m_op_cn_abs_opn_clr; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_cn_abs_opn_prv>() const { return m_op_cn_abs_opn_prv; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_cn_abs_opn_pos>() const { return m_op_cn_abs_opn_pos; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_cn_abs_opn_brk>() const { return m_op_cn_abs_opn_brk; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_sh_short>() const { return m_op_sh_short; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_cn_pos_call>() const { return m_op_cn_pos_call; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_cn_pos_put>() const { return m_op_cn_pos_put; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_cn_abs_pair>() const { return m_op_cn_abs_pair; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::abs_atm_equiv_cn>() const { return m_abs_atm_equiv_cn; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_cn_bot>() const { return m_op_cn_bot; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_cn_sld>() const { return m_op_cn_sld; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_mny_bot>() const { return m_op_mny_bot; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_mny_sld>() const { return m_op_mny_sld; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_prem_bot>() const { return m_op_prem_bot; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_prem_sld>() const { return m_op_prem_sld; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::max_opt_dttm>() const { return m_max_opt_dttm; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_pnl_vol>() const { return m_op_pnl_vol; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_pnl_mid>() const { return m_op_pnl_mid; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_pnl_clr>() const { return m_op_pnl_clr; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_pnl_brk>() const { return m_op_pnl_brk; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_pnl_day>() const { return m_op_pnl_day; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_dn_pnl_day>() const { return m_op_dn_pnl_day; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_day_vega>() const { return m_op_day_vega; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_day_wvega>() const { return m_op_day_wvega; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_day_tvega>() const { return m_op_day_tvega; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_day_wt_vega>() const { return m_op_day_wt_vega; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_day_theta>() const { return m_op_day_theta; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_day_delta>() const { return m_op_day_delta; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_trd_delta>() const { return m_op_trd_delta; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pair_pnl>() const { return m_pair_pnl; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::cont_hedge_pnl>() const { return m_cont_hedge_pnl; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::cont_hedge_pnl1>() const { return m_cont_hedge_pnl1; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_edge_opened>() const { return m_op_edge_opened; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_edge_closed>() const { return m_op_edge_closed; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pnl_dn>() const { return m_pnl_dn; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pnl_de>() const { return m_pnl_de; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pnl_sl>() const { return m_pnl_sl; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pnl_ga>() const { return m_pnl_ga; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pnl_th>() const { return m_pnl_th; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pnl_ve>() const { return m_pnl_ve; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pnl_vo>() const { return m_pnl_vo; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pnl_va>() const { return m_pnl_va; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pnl_err>() const { return m_pnl_err; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pnl_rate>() const { return m_pnl_rate; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pnl_sdiv>() const { return m_pnl_sdiv; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pnl_ddiv>() const { return m_pnl_ddiv; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pnl_te>() const { return m_pnl_te; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pct_iv_change>() const { return m_pct_iv_change; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pct_iv_vega>() const { return m_pct_iv_vega; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pct_tv_change>() const { return m_pct_tv_change; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pct_tv_vega>() const { return m_pct_tv_vega; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::stk_width_mny>() const { return m_stk_width_mny; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::opt_width_mny>() const { return m_opt_width_mny; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::day_ddelta>() const { return m_day_ddelta; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::delta>() const { return m_delta; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::ddelta>() const { return m_ddelta; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::de_decay>() const { return m_de_decay; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::dd_decay>() const { return m_dd_decay; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::gamma>() const { return m_gamma; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::d_gamma>() const { return m_d_gamma; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::theta>() const { return m_theta; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::rho>() const { return m_rho; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::vega>() const { return m_vega; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::t_vega>() const { return m_t_vega; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::w_vega>() const { return m_w_vega; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::wt_vega>() const { return m_wt_vega; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::ivol_ve>() const { return m_ivol_ve; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::volga>() const { return m_volga; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::vanna>() const { return m_vanna; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::slope>() const { return m_slope; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::avega>() const { return m_avega; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::atheta>() const { return m_atheta; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::hedge_gamma>() const { return m_hedge_gamma; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::hedge_dgamma>() const { return m_hedge_dgamma; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::prem_ov_par>() const { return m_prem_ov_par; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::simp_prem_ov_par>() const { return m_simp_prem_ov_par; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::wt_ve_dd>() const { return m_wt_ve_dd; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::wt_ve_dn>() const { return m_wt_ve_dn; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::wt_ve_at>() const { return m_wt_ve_at; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::wt_ve_up>() const { return m_wt_ve_up; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::wt_ve_du>() const { return m_wt_ve_du; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::wt_ve_m1>() const { return m_wt_ve_m1; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::wt_ve_m2>() const { return m_wt_ve_m2; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::wt_ve_m3>() const { return m_wt_ve_m3; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::wt_ve_m4>() const { return m_wt_ve_m4; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::wt_ve_m5>() const { return m_wt_ve_m5; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pin_xx>() const { return m_pin_xx; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::opn_de_below>() const { return m_opn_de_below; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::opn_de_above>() const { return m_opn_de_above; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::opn_dde_below>() const { return m_opn_dde_below; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::opn_dde_above>() const { return m_opn_dde_above; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pos_de_below>() const { return m_pos_de_below; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pos_de_above>() const { return m_pos_de_above; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pos_dde_below>() const { return m_pos_dde_below; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pos_dde_above>() const { return m_pos_dde_above; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pos_hedge_delta_ex>() const { return m_pos_hedge_delta_ex; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pos_hedge_ddelta_ex>() const { return m_pos_hedge_ddelta_ex; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::mmh_delta>() const { return m_mmh_delta; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::mmh_contracts>() const { return m_mmh_contracts; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::mmh_sources>() const { return m_mmh_sources; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::t_edge>() const { return m_t_edge; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::t_edge_mult>() const { return m_t_edge_mult; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::t_edge_pr>() const { return m_t_edge_pr; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::t_edge_mult_pr>() const { return m_t_edge_mult_pr; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::num_tvol_errors>() const { return m_num_tvol_errors; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pos_tedge_wv>() const { return m_pos_tedge_wv; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::neg_tedge_wv>() const { return m_neg_tedge_wv; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::bad_tedge_wv>() const { return m_bad_tedge_wv; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pos_tedge_pnl>() const { return m_pos_tedge_pnl; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::neg_tedge_pnl>() const { return m_neg_tedge_pnl; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::bad_tedge_pnl>() const { return m_bad_tedge_pnl; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::t_edge2>() const { return m_t_edge2; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::t_edge_mult2>() const { return m_t_edge_mult2; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::t_edge_pr2>() const { return m_t_edge_pr2; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::t_edge_mult_pr2>() const { return m_t_edge_mult_pr2; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::num_tvol_errors2>() const { return m_num_tvol_errors2; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pos_tedge_wv2>() const { return m_pos_tedge_wv2; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::neg_tedge_wv2>() const { return m_neg_tedge_wv2; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::bad_tedge_wv2>() const { return m_bad_tedge_wv2; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::pos_tedge_pnl2>() const { return m_pos_tedge_pnl2; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::neg_tedge_pnl2>() const { return m_neg_tedge_pnl2; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::bad_tedge_pnl2>() const { return m_bad_tedge_pnl2; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::va_rsu90>() const { return m_va_rsu90; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::va_rsd90>() const { return m_va_rsd90; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::va_rsu50>() const { return m_va_rsu50; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::va_rsd50>() const { return m_va_rsd50; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::va_rsu15>() const { return m_va_rsu15; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::va_rsd15>() const { return m_va_rsd15; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::va_rsu10>() const { return m_va_rsu10; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::va_rsd10>() const { return m_va_rsd10; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::va_rsu06>() const { return m_va_rsu06; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::va_rsd08>() const { return m_va_rsd08; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::va_rsu05>() const { return m_va_rsu05; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::va_rsd05>() const { return m_va_rsd05; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::va_rsu1e>() const { return m_va_rsu1e; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::va_rsd1e>() const { return m_va_rsd1e; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::va_rsu2e>() const { return m_va_rsu2e; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::va_rsd2e>() const { return m_va_rsd2e; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::va_rearn>() const { return m_va_rearn; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::va_rcash>() const { return m_va_rcash; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::margin_udn_vdn>() const { return m_margin_udn_vdn; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::margin_udn_vup>() const { return m_margin_udn_vup; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::margin_uup_vdn>() const { return m_margin_uup_vdn; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::margin_uup_vup>() const { return m_margin_uup_vup; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::stk_liq_risk>() const { return m_stk_liq_risk; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::opt_liq_risk>() const { return m_opt_liq_risk; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::sh_bot_c0>() const { return m_sh_bot_c0; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::sh_sld_c0>() const { return m_sh_sld_c0; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::sh_mny_c0>() const { return m_sh_mny_c0; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::sh_bot_c1>() const { return m_sh_bot_c1; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::sh_sld_c1>() const { return m_sh_sld_c1; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::sh_mny_c1>() const { return m_sh_mny_c1; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_hc_min25>() const { return m_op_hc_min25; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::op_hc_min37>() const { return m_op_hc_min37; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::haircut25>() const { return m_haircut25; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::haircut37>() const { return m_haircut37; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::num_stk_errors>() const { return m_num_stk_errors; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::num_opt_errors>() const { return m_num_opt_errors; }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::update_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::R5Source>( m_update_source)); }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::stk_mark_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktErrFlag>( m_stk_mark_flag)); }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::opt_mark_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktErrFlag>( m_opt_mark_flag)); }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::risk_alert1>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlertCode>( m_risk_alert1)); }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::risk_alert2>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlertCode>( m_risk_alert2)); }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::risk_alert3>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlertCode>( m_risk_alert3)); }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::risk_alert4>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlertCode>( m_risk_alert4)); }
    template<> inline const auto SymbolRiskSummaryV5::get<SymbolRiskSummaryV5::timestamp>() const { return m_timestamp; }
    template<> inline const auto SymbolRiskSummaryV5_PKey::get<SymbolRiskSummaryV5_PKey::ticker>() const { return SymbolRiskSummaryV5_PKey::ticker{m_ticker}; }
    template<> inline const auto SymbolRiskSummaryV5_PKey::get<SymbolRiskSummaryV5_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto SymbolRiskSummaryV5_PKey::get<SymbolRiskSummaryV5_PKey::trade_date>() const { return SymbolRiskSummaryV5_PKey::trade_date{m_trade_date}; }
    template<> inline const auto SymbolRiskSummaryV5_PKey::get<SymbolRiskSummaryV5_PKey::risk_session>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskSession>(m_risk_session));}
    template<> inline const auto SymbolRiskSummaryV5_PKey::get<SymbolRiskSummaryV5_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SymbolRiskSummaryV5_PKey& m) {
        o << "\"ticker\":{" << m.get<SymbolRiskSummaryV5_PKey::ticker>() << "}";
        o << ",\"accnt\":\"" << m.get<SymbolRiskSummaryV5_PKey::accnt>() << "\"";
        o << ",\"trade_date\":{" << m.get<SymbolRiskSummaryV5_PKey::trade_date>() << "}";
        o << ",\"risk_session\":" << (int64_t)m.get<SymbolRiskSummaryV5_PKey::risk_session>();
        o << ",\"client_firm\":\"" << m.get<SymbolRiskSummaryV5_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SymbolRiskSummaryV5& m) {
        o << "\"_meta\":{" << m.get<SymbolRiskSummaryV5::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SymbolRiskSummaryV5::pkey>() << "}";
        o << ",\"sector\":\"" << m.get<SymbolRiskSummaryV5::sector>() << "\"";
        o << ",\"industry\":" << m.get<SymbolRiskSummaryV5::industry>();
        o << ",\"beta\":" << m.get<SymbolRiskSummaryV5::beta>();
        o << ",\"beta_source\":" << (int64_t)m.get<SymbolRiskSummaryV5::beta_source>();
        o << ",\"u_prc\":" << m.get<SymbolRiskSummaryV5::u_prc>();
        o << ",\"u_mark\":" << m.get<SymbolRiskSummaryV5::u_mark>();
        o << ",\"u_opn_mark\":" << m.get<SymbolRiskSummaryV5::u_opn_mark>();
        o << ",\"ln_ddelta\":" << m.get<SymbolRiskSummaryV5::ln_ddelta>();
        o << ",\"sh_ddelta\":" << m.get<SymbolRiskSummaryV5::sh_ddelta>();
        o << ",\"ln_stk_mkt_value_mid\":" << m.get<SymbolRiskSummaryV5::ln_stk_mkt_value_mid>();
        o << ",\"sh_stk_mkt_value_mid\":" << m.get<SymbolRiskSummaryV5::sh_stk_mkt_value_mid>();
        o << ",\"opt_mkt_value_mid\":" << m.get<SymbolRiskSummaryV5::opt_mkt_value_mid>();
        o << ",\"opt_mkt_value_vol\":" << m.get<SymbolRiskSummaryV5::opt_mkt_value_vol>();
        o << ",\"sh_opn_pos_clr\":" << m.get<SymbolRiskSummaryV5::sh_opn_pos_clr>();
        o << ",\"sh_opn_pos_prv\":" << m.get<SymbolRiskSummaryV5::sh_opn_pos_prv>();
        o << ",\"sh_opn_pos\":" << m.get<SymbolRiskSummaryV5::sh_opn_pos>();
        o << ",\"sh_bot\":" << m.get<SymbolRiskSummaryV5::sh_bot>();
        o << ",\"sh_sld\":" << m.get<SymbolRiskSummaryV5::sh_sld>();
        o << ",\"sh_sld_shrt\":" << m.get<SymbolRiskSummaryV5::sh_sld_shrt>();
        o << ",\"sh_mny_bot\":" << m.get<SymbolRiskSummaryV5::sh_mny_bot>();
        o << ",\"sh_mny_sld\":" << m.get<SymbolRiskSummaryV5::sh_mny_sld>();
        o << ",\"sh_bot_hdg\":" << m.get<SymbolRiskSummaryV5::sh_bot_hdg>();
        o << ",\"sh_sld_hdg\":" << m.get<SymbolRiskSummaryV5::sh_sld_hdg>();
        o << ",\"sh_bot_trh\":" << m.get<SymbolRiskSummaryV5::sh_bot_trh>();
        o << ",\"sh_sld_trh\":" << m.get<SymbolRiskSummaryV5::sh_sld_trh>();
        o << ",\"sh_bot_opn\":" << m.get<SymbolRiskSummaryV5::sh_bot_opn>();
        o << ",\"sh_sld_opn\":" << m.get<SymbolRiskSummaryV5::sh_sld_opn>();
        o << ",\"sh_bot_trd\":" << m.get<SymbolRiskSummaryV5::sh_bot_trd>();
        o << ",\"sh_sld_trd\":" << m.get<SymbolRiskSummaryV5::sh_sld_trd>();
        {
            std::time_t tt = m.get<SymbolRiskSummaryV5::max_stk_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"max_stk_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"st_pnl_mid\":" << m.get<SymbolRiskSummaryV5::st_pnl_mid>();
        o << ",\"st_pnl_clr\":" << m.get<SymbolRiskSummaryV5::st_pnl_clr>();
        o << ",\"st_pnl_day\":" << m.get<SymbolRiskSummaryV5::st_pnl_day>();
        o << ",\"st_div_pnl\":" << m.get<SymbolRiskSummaryV5::st_div_pnl>();
        o << ",\"st_borrow_pnl\":" << m.get<SymbolRiskSummaryV5::st_borrow_pnl>();
        o << ",\"op_cn_abs_cur_pos\":" << m.get<SymbolRiskSummaryV5::op_cn_abs_cur_pos>();
        o << ",\"op_cn_abs_opn_clr\":" << m.get<SymbolRiskSummaryV5::op_cn_abs_opn_clr>();
        o << ",\"op_cn_abs_opn_prv\":" << m.get<SymbolRiskSummaryV5::op_cn_abs_opn_prv>();
        o << ",\"op_cn_abs_opn_pos\":" << m.get<SymbolRiskSummaryV5::op_cn_abs_opn_pos>();
        o << ",\"op_cn_abs_opn_brk\":" << m.get<SymbolRiskSummaryV5::op_cn_abs_opn_brk>();
        o << ",\"op_sh_short\":" << m.get<SymbolRiskSummaryV5::op_sh_short>();
        o << ",\"op_cn_pos_call\":" << m.get<SymbolRiskSummaryV5::op_cn_pos_call>();
        o << ",\"op_cn_pos_put\":" << m.get<SymbolRiskSummaryV5::op_cn_pos_put>();
        o << ",\"op_cn_abs_pair\":" << m.get<SymbolRiskSummaryV5::op_cn_abs_pair>();
        o << ",\"abs_atm_equiv_cn\":" << m.get<SymbolRiskSummaryV5::abs_atm_equiv_cn>();
        o << ",\"op_cn_bot\":" << m.get<SymbolRiskSummaryV5::op_cn_bot>();
        o << ",\"op_cn_sld\":" << m.get<SymbolRiskSummaryV5::op_cn_sld>();
        o << ",\"op_mny_bot\":" << m.get<SymbolRiskSummaryV5::op_mny_bot>();
        o << ",\"op_mny_sld\":" << m.get<SymbolRiskSummaryV5::op_mny_sld>();
        o << ",\"op_prem_bot\":" << m.get<SymbolRiskSummaryV5::op_prem_bot>();
        o << ",\"op_prem_sld\":" << m.get<SymbolRiskSummaryV5::op_prem_sld>();
        {
            std::time_t tt = m.get<SymbolRiskSummaryV5::max_opt_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"max_opt_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"op_pnl_vol\":" << m.get<SymbolRiskSummaryV5::op_pnl_vol>();
        o << ",\"op_pnl_mid\":" << m.get<SymbolRiskSummaryV5::op_pnl_mid>();
        o << ",\"op_pnl_clr\":" << m.get<SymbolRiskSummaryV5::op_pnl_clr>();
        o << ",\"op_pnl_brk\":" << m.get<SymbolRiskSummaryV5::op_pnl_brk>();
        o << ",\"op_pnl_day\":" << m.get<SymbolRiskSummaryV5::op_pnl_day>();
        o << ",\"op_dn_pnl_day\":" << m.get<SymbolRiskSummaryV5::op_dn_pnl_day>();
        o << ",\"op_day_vega\":" << m.get<SymbolRiskSummaryV5::op_day_vega>();
        o << ",\"op_day_wvega\":" << m.get<SymbolRiskSummaryV5::op_day_wvega>();
        o << ",\"op_day_tvega\":" << m.get<SymbolRiskSummaryV5::op_day_tvega>();
        o << ",\"op_day_wt_vega\":" << m.get<SymbolRiskSummaryV5::op_day_wt_vega>();
        o << ",\"op_day_theta\":" << m.get<SymbolRiskSummaryV5::op_day_theta>();
        o << ",\"op_day_delta\":" << m.get<SymbolRiskSummaryV5::op_day_delta>();
        o << ",\"op_trd_delta\":" << m.get<SymbolRiskSummaryV5::op_trd_delta>();
        o << ",\"pair_pnl\":" << m.get<SymbolRiskSummaryV5::pair_pnl>();
        o << ",\"cont_hedge_pnl\":" << m.get<SymbolRiskSummaryV5::cont_hedge_pnl>();
        o << ",\"cont_hedge_pnl1\":" << m.get<SymbolRiskSummaryV5::cont_hedge_pnl1>();
        o << ",\"op_edge_opened\":" << m.get<SymbolRiskSummaryV5::op_edge_opened>();
        o << ",\"op_edge_closed\":" << m.get<SymbolRiskSummaryV5::op_edge_closed>();
        o << ",\"pnl_dn\":" << m.get<SymbolRiskSummaryV5::pnl_dn>();
        o << ",\"pnl_de\":" << m.get<SymbolRiskSummaryV5::pnl_de>();
        o << ",\"pnl_sl\":" << m.get<SymbolRiskSummaryV5::pnl_sl>();
        o << ",\"pnl_ga\":" << m.get<SymbolRiskSummaryV5::pnl_ga>();
        o << ",\"pnl_th\":" << m.get<SymbolRiskSummaryV5::pnl_th>();
        o << ",\"pnl_ve\":" << m.get<SymbolRiskSummaryV5::pnl_ve>();
        o << ",\"pnl_vo\":" << m.get<SymbolRiskSummaryV5::pnl_vo>();
        o << ",\"pnl_va\":" << m.get<SymbolRiskSummaryV5::pnl_va>();
        o << ",\"pnl_err\":" << m.get<SymbolRiskSummaryV5::pnl_err>();
        o << ",\"pnl_rate\":" << m.get<SymbolRiskSummaryV5::pnl_rate>();
        o << ",\"pnl_sdiv\":" << m.get<SymbolRiskSummaryV5::pnl_sdiv>();
        o << ",\"pnl_ddiv\":" << m.get<SymbolRiskSummaryV5::pnl_ddiv>();
        o << ",\"pnl_te\":" << m.get<SymbolRiskSummaryV5::pnl_te>();
        o << ",\"pct_iv_change\":" << m.get<SymbolRiskSummaryV5::pct_iv_change>();
        o << ",\"pct_iv_vega\":" << m.get<SymbolRiskSummaryV5::pct_iv_vega>();
        o << ",\"pct_tv_change\":" << m.get<SymbolRiskSummaryV5::pct_tv_change>();
        o << ",\"pct_tv_vega\":" << m.get<SymbolRiskSummaryV5::pct_tv_vega>();
        o << ",\"stk_width_mny\":" << m.get<SymbolRiskSummaryV5::stk_width_mny>();
        o << ",\"opt_width_mny\":" << m.get<SymbolRiskSummaryV5::opt_width_mny>();
        o << ",\"day_ddelta\":" << m.get<SymbolRiskSummaryV5::day_ddelta>();
        o << ",\"delta\":" << m.get<SymbolRiskSummaryV5::delta>();
        o << ",\"ddelta\":" << m.get<SymbolRiskSummaryV5::ddelta>();
        o << ",\"de_decay\":" << m.get<SymbolRiskSummaryV5::de_decay>();
        o << ",\"dd_decay\":" << m.get<SymbolRiskSummaryV5::dd_decay>();
        o << ",\"gamma\":" << m.get<SymbolRiskSummaryV5::gamma>();
        o << ",\"d_gamma\":" << m.get<SymbolRiskSummaryV5::d_gamma>();
        o << ",\"theta\":" << m.get<SymbolRiskSummaryV5::theta>();
        o << ",\"rho\":" << m.get<SymbolRiskSummaryV5::rho>();
        o << ",\"vega\":" << m.get<SymbolRiskSummaryV5::vega>();
        o << ",\"t_vega\":" << m.get<SymbolRiskSummaryV5::t_vega>();
        o << ",\"w_vega\":" << m.get<SymbolRiskSummaryV5::w_vega>();
        o << ",\"wt_vega\":" << m.get<SymbolRiskSummaryV5::wt_vega>();
        o << ",\"ivol_ve\":" << m.get<SymbolRiskSummaryV5::ivol_ve>();
        o << ",\"volga\":" << m.get<SymbolRiskSummaryV5::volga>();
        o << ",\"vanna\":" << m.get<SymbolRiskSummaryV5::vanna>();
        o << ",\"slope\":" << m.get<SymbolRiskSummaryV5::slope>();
        o << ",\"avega\":" << m.get<SymbolRiskSummaryV5::avega>();
        o << ",\"atheta\":" << m.get<SymbolRiskSummaryV5::atheta>();
        o << ",\"hedge_gamma\":" << m.get<SymbolRiskSummaryV5::hedge_gamma>();
        o << ",\"hedge_dgamma\":" << m.get<SymbolRiskSummaryV5::hedge_dgamma>();
        o << ",\"prem_ov_par\":" << m.get<SymbolRiskSummaryV5::prem_ov_par>();
        o << ",\"simp_prem_ov_par\":" << m.get<SymbolRiskSummaryV5::simp_prem_ov_par>();
        o << ",\"wt_ve_dd\":" << m.get<SymbolRiskSummaryV5::wt_ve_dd>();
        o << ",\"wt_ve_dn\":" << m.get<SymbolRiskSummaryV5::wt_ve_dn>();
        o << ",\"wt_ve_at\":" << m.get<SymbolRiskSummaryV5::wt_ve_at>();
        o << ",\"wt_ve_up\":" << m.get<SymbolRiskSummaryV5::wt_ve_up>();
        o << ",\"wt_ve_du\":" << m.get<SymbolRiskSummaryV5::wt_ve_du>();
        o << ",\"wt_ve_m1\":" << m.get<SymbolRiskSummaryV5::wt_ve_m1>();
        o << ",\"wt_ve_m2\":" << m.get<SymbolRiskSummaryV5::wt_ve_m2>();
        o << ",\"wt_ve_m3\":" << m.get<SymbolRiskSummaryV5::wt_ve_m3>();
        o << ",\"wt_ve_m4\":" << m.get<SymbolRiskSummaryV5::wt_ve_m4>();
        o << ",\"wt_ve_m5\":" << m.get<SymbolRiskSummaryV5::wt_ve_m5>();
        o << ",\"pin_xx\":" << m.get<SymbolRiskSummaryV5::pin_xx>();
        o << ",\"opn_de_below\":" << m.get<SymbolRiskSummaryV5::opn_de_below>();
        o << ",\"opn_de_above\":" << m.get<SymbolRiskSummaryV5::opn_de_above>();
        o << ",\"opn_dde_below\":" << m.get<SymbolRiskSummaryV5::opn_dde_below>();
        o << ",\"opn_dde_above\":" << m.get<SymbolRiskSummaryV5::opn_dde_above>();
        o << ",\"pos_de_below\":" << m.get<SymbolRiskSummaryV5::pos_de_below>();
        o << ",\"pos_de_above\":" << m.get<SymbolRiskSummaryV5::pos_de_above>();
        o << ",\"pos_dde_below\":" << m.get<SymbolRiskSummaryV5::pos_dde_below>();
        o << ",\"pos_dde_above\":" << m.get<SymbolRiskSummaryV5::pos_dde_above>();
        o << ",\"pos_hedge_delta_ex\":" << m.get<SymbolRiskSummaryV5::pos_hedge_delta_ex>();
        o << ",\"pos_hedge_ddelta_ex\":" << m.get<SymbolRiskSummaryV5::pos_hedge_ddelta_ex>();
        o << ",\"mmh_delta\":" << m.get<SymbolRiskSummaryV5::mmh_delta>();
        o << ",\"mmh_contracts\":" << m.get<SymbolRiskSummaryV5::mmh_contracts>();
        o << ",\"mmh_sources\":\"" << m.get<SymbolRiskSummaryV5::mmh_sources>() << "\"";
        o << ",\"t_edge\":" << m.get<SymbolRiskSummaryV5::t_edge>();
        o << ",\"t_edge_mult\":" << m.get<SymbolRiskSummaryV5::t_edge_mult>();
        o << ",\"t_edge_pr\":" << m.get<SymbolRiskSummaryV5::t_edge_pr>();
        o << ",\"t_edge_mult_pr\":" << m.get<SymbolRiskSummaryV5::t_edge_mult_pr>();
        o << ",\"num_tvol_errors\":" << m.get<SymbolRiskSummaryV5::num_tvol_errors>();
        o << ",\"pos_tedge_wv\":" << m.get<SymbolRiskSummaryV5::pos_tedge_wv>();
        o << ",\"neg_tedge_wv\":" << m.get<SymbolRiskSummaryV5::neg_tedge_wv>();
        o << ",\"bad_tedge_wv\":" << m.get<SymbolRiskSummaryV5::bad_tedge_wv>();
        o << ",\"pos_tedge_pnl\":" << m.get<SymbolRiskSummaryV5::pos_tedge_pnl>();
        o << ",\"neg_tedge_pnl\":" << m.get<SymbolRiskSummaryV5::neg_tedge_pnl>();
        o << ",\"bad_tedge_pnl\":" << m.get<SymbolRiskSummaryV5::bad_tedge_pnl>();
        o << ",\"t_edge2\":" << m.get<SymbolRiskSummaryV5::t_edge2>();
        o << ",\"t_edge_mult2\":" << m.get<SymbolRiskSummaryV5::t_edge_mult2>();
        o << ",\"t_edge_pr2\":" << m.get<SymbolRiskSummaryV5::t_edge_pr2>();
        o << ",\"t_edge_mult_pr2\":" << m.get<SymbolRiskSummaryV5::t_edge_mult_pr2>();
        o << ",\"num_tvol_errors2\":" << m.get<SymbolRiskSummaryV5::num_tvol_errors2>();
        o << ",\"pos_tedge_wv2\":" << m.get<SymbolRiskSummaryV5::pos_tedge_wv2>();
        o << ",\"neg_tedge_wv2\":" << m.get<SymbolRiskSummaryV5::neg_tedge_wv2>();
        o << ",\"bad_tedge_wv2\":" << m.get<SymbolRiskSummaryV5::bad_tedge_wv2>();
        o << ",\"pos_tedge_pnl2\":" << m.get<SymbolRiskSummaryV5::pos_tedge_pnl2>();
        o << ",\"neg_tedge_pnl2\":" << m.get<SymbolRiskSummaryV5::neg_tedge_pnl2>();
        o << ",\"bad_tedge_pnl2\":" << m.get<SymbolRiskSummaryV5::bad_tedge_pnl2>();
        o << ",\"va_rsu90\":" << m.get<SymbolRiskSummaryV5::va_rsu90>();
        o << ",\"va_rsd90\":" << m.get<SymbolRiskSummaryV5::va_rsd90>();
        o << ",\"va_rsu50\":" << m.get<SymbolRiskSummaryV5::va_rsu50>();
        o << ",\"va_rsd50\":" << m.get<SymbolRiskSummaryV5::va_rsd50>();
        o << ",\"va_rsu15\":" << m.get<SymbolRiskSummaryV5::va_rsu15>();
        o << ",\"va_rsd15\":" << m.get<SymbolRiskSummaryV5::va_rsd15>();
        o << ",\"va_rsu10\":" << m.get<SymbolRiskSummaryV5::va_rsu10>();
        o << ",\"va_rsd10\":" << m.get<SymbolRiskSummaryV5::va_rsd10>();
        o << ",\"va_rsu06\":" << m.get<SymbolRiskSummaryV5::va_rsu06>();
        o << ",\"va_rsd08\":" << m.get<SymbolRiskSummaryV5::va_rsd08>();
        o << ",\"va_rsu05\":" << m.get<SymbolRiskSummaryV5::va_rsu05>();
        o << ",\"va_rsd05\":" << m.get<SymbolRiskSummaryV5::va_rsd05>();
        o << ",\"va_rsu1e\":" << m.get<SymbolRiskSummaryV5::va_rsu1e>();
        o << ",\"va_rsd1e\":" << m.get<SymbolRiskSummaryV5::va_rsd1e>();
        o << ",\"va_rsu2e\":" << m.get<SymbolRiskSummaryV5::va_rsu2e>();
        o << ",\"va_rsd2e\":" << m.get<SymbolRiskSummaryV5::va_rsd2e>();
        o << ",\"va_rearn\":" << m.get<SymbolRiskSummaryV5::va_rearn>();
        o << ",\"va_rcash\":" << m.get<SymbolRiskSummaryV5::va_rcash>();
        o << ",\"margin_udn_vdn\":" << m.get<SymbolRiskSummaryV5::margin_udn_vdn>();
        o << ",\"margin_udn_vup\":" << m.get<SymbolRiskSummaryV5::margin_udn_vup>();
        o << ",\"margin_uup_vdn\":" << m.get<SymbolRiskSummaryV5::margin_uup_vdn>();
        o << ",\"margin_uup_vup\":" << m.get<SymbolRiskSummaryV5::margin_uup_vup>();
        o << ",\"stk_liq_risk\":" << m.get<SymbolRiskSummaryV5::stk_liq_risk>();
        o << ",\"opt_liq_risk\":" << m.get<SymbolRiskSummaryV5::opt_liq_risk>();
        o << ",\"sh_bot_c0\":" << m.get<SymbolRiskSummaryV5::sh_bot_c0>();
        o << ",\"sh_sld_c0\":" << m.get<SymbolRiskSummaryV5::sh_sld_c0>();
        o << ",\"sh_mny_c0\":" << m.get<SymbolRiskSummaryV5::sh_mny_c0>();
        o << ",\"sh_bot_c1\":" << m.get<SymbolRiskSummaryV5::sh_bot_c1>();
        o << ",\"sh_sld_c1\":" << m.get<SymbolRiskSummaryV5::sh_sld_c1>();
        o << ",\"sh_mny_c1\":" << m.get<SymbolRiskSummaryV5::sh_mny_c1>();
        o << ",\"op_hc_min25\":" << m.get<SymbolRiskSummaryV5::op_hc_min25>();
        o << ",\"op_hc_min37\":" << m.get<SymbolRiskSummaryV5::op_hc_min37>();
        o << ",\"haircut25\":" << m.get<SymbolRiskSummaryV5::haircut25>();
        o << ",\"haircut37\":" << m.get<SymbolRiskSummaryV5::haircut37>();
        o << ",\"num_stk_errors\":" << m.get<SymbolRiskSummaryV5::num_stk_errors>();
        o << ",\"num_opt_errors\":" << m.get<SymbolRiskSummaryV5::num_opt_errors>();
        o << ",\"update_source\":" << (int64_t)m.get<SymbolRiskSummaryV5::update_source>();
        o << ",\"stk_mark_flag\":" << (int64_t)m.get<SymbolRiskSummaryV5::stk_mark_flag>();
        o << ",\"opt_mark_flag\":" << (int64_t)m.get<SymbolRiskSummaryV5::opt_mark_flag>();
        o << ",\"risk_alert1\":" << (int64_t)m.get<SymbolRiskSummaryV5::risk_alert1>();
        o << ",\"risk_alert2\":" << (int64_t)m.get<SymbolRiskSummaryV5::risk_alert2>();
        o << ",\"risk_alert3\":" << (int64_t)m.get<SymbolRiskSummaryV5::risk_alert3>();
        o << ",\"risk_alert4\":" << (int64_t)m.get<SymbolRiskSummaryV5::risk_alert4>();
        {
            std::time_t tt = m.get<SymbolRiskSummaryV5::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}