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

    #ifndef _ln_ddelta__GUARD__
    #define _ln_ddelta__GUARD__
    DECL_STRONG_TYPE(ln_ddelta, double);
    #endif//_ln_ddelta__GUARD__

    #ifndef _sh_ddelta__GUARD__
    #define _sh_ddelta__GUARD__
    DECL_STRONG_TYPE(sh_ddelta, double);
    #endif//_sh_ddelta__GUARD__

    #ifndef _fut_mkt_value_mid__GUARD__
    #define _fut_mkt_value_mid__GUARD__
    DECL_STRONG_TYPE(fut_mkt_value_mid, double);
    #endif//_fut_mkt_value_mid__GUARD__

    #ifndef _opt_mkt_value_mid__GUARD__
    #define _opt_mkt_value_mid__GUARD__
    DECL_STRONG_TYPE(opt_mkt_value_mid, double);
    #endif//_opt_mkt_value_mid__GUARD__

    #ifndef _opt_mkt_value_vol__GUARD__
    #define _opt_mkt_value_vol__GUARD__
    DECL_STRONG_TYPE(opt_mkt_value_vol, double);
    #endif//_opt_mkt_value_vol__GUARD__

    #ifndef _fc_abs_cur_pos__GUARD__
    #define _fc_abs_cur_pos__GUARD__
    DECL_STRONG_TYPE(fc_abs_cur_pos, int32);
    #endif//_fc_abs_cur_pos__GUARD__

    #ifndef _fc_abs_opn_clr__GUARD__
    #define _fc_abs_opn_clr__GUARD__
    DECL_STRONG_TYPE(fc_abs_opn_clr, int32);
    #endif//_fc_abs_opn_clr__GUARD__

    #ifndef _fc_abs_opn_prv__GUARD__
    #define _fc_abs_opn_prv__GUARD__
    DECL_STRONG_TYPE(fc_abs_opn_prv, int32);
    #endif//_fc_abs_opn_prv__GUARD__

    #ifndef _fc_abs_opn_pos__GUARD__
    #define _fc_abs_opn_pos__GUARD__
    DECL_STRONG_TYPE(fc_abs_opn_pos, int32);
    #endif//_fc_abs_opn_pos__GUARD__

    #ifndef _fc_abs_opn_brk__GUARD__
    #define _fc_abs_opn_brk__GUARD__
    DECL_STRONG_TYPE(fc_abs_opn_brk, int32);
    #endif//_fc_abs_opn_brk__GUARD__

    #ifndef _fc_net_cur_pos__GUARD__
    #define _fc_net_cur_pos__GUARD__
    DECL_STRONG_TYPE(fc_net_cur_pos, int32);
    #endif//_fc_net_cur_pos__GUARD__

    #ifndef _fc_bot__GUARD__
    #define _fc_bot__GUARD__
    DECL_STRONG_TYPE(fc_bot, int32);
    #endif//_fc_bot__GUARD__

    #ifndef _fc_sld__GUARD__
    #define _fc_sld__GUARD__
    DECL_STRONG_TYPE(fc_sld, int32);
    #endif//_fc_sld__GUARD__

    #ifndef _fc_bot_hdg__GUARD__
    #define _fc_bot_hdg__GUARD__
    DECL_STRONG_TYPE(fc_bot_hdg, int32);
    #endif//_fc_bot_hdg__GUARD__

    #ifndef _fc_sld_hdg__GUARD__
    #define _fc_sld_hdg__GUARD__
    DECL_STRONG_TYPE(fc_sld_hdg, int32);
    #endif//_fc_sld_hdg__GUARD__

    #ifndef _fc_bot_trh__GUARD__
    #define _fc_bot_trh__GUARD__
    DECL_STRONG_TYPE(fc_bot_trh, int32);
    #endif//_fc_bot_trh__GUARD__

    #ifndef _fc_sld_trh__GUARD__
    #define _fc_sld_trh__GUARD__
    DECL_STRONG_TYPE(fc_sld_trh, int32);
    #endif//_fc_sld_trh__GUARD__

    #ifndef _fc_bot_opn__GUARD__
    #define _fc_bot_opn__GUARD__
    DECL_STRONG_TYPE(fc_bot_opn, int32);
    #endif//_fc_bot_opn__GUARD__

    #ifndef _fc_sld_opn__GUARD__
    #define _fc_sld_opn__GUARD__
    DECL_STRONG_TYPE(fc_sld_opn, int32);
    #endif//_fc_sld_opn__GUARD__

    #ifndef _fc_bot_trd__GUARD__
    #define _fc_bot_trd__GUARD__
    DECL_STRONG_TYPE(fc_bot_trd, int32);
    #endif//_fc_bot_trd__GUARD__

    #ifndef _fc_sld_trd__GUARD__
    #define _fc_sld_trd__GUARD__
    DECL_STRONG_TYPE(fc_sld_trd, int32);
    #endif//_fc_sld_trd__GUARD__

    #ifndef _fc_mny_bot__GUARD__
    #define _fc_mny_bot__GUARD__
    DECL_STRONG_TYPE(fc_mny_bot, double);
    #endif//_fc_mny_bot__GUARD__

    #ifndef _fc_mny_sld__GUARD__
    #define _fc_mny_sld__GUARD__
    DECL_STRONG_TYPE(fc_mny_sld, double);
    #endif//_fc_mny_sld__GUARD__

    #ifndef _max_fut_dttm__GUARD__
    #define _max_fut_dttm__GUARD__
    DECL_STRONG_TYPE(max_fut_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_max_fut_dttm__GUARD__

    #ifndef _fc_pnl_mid__GUARD__
    #define _fc_pnl_mid__GUARD__
    DECL_STRONG_TYPE(fc_pnl_mid, float);
    #endif//_fc_pnl_mid__GUARD__

    #ifndef _fc_pnl_clr__GUARD__
    #define _fc_pnl_clr__GUARD__
    DECL_STRONG_TYPE(fc_pnl_clr, float);
    #endif//_fc_pnl_clr__GUARD__

    #ifndef _fc_pnl_day__GUARD__
    #define _fc_pnl_day__GUARD__
    DECL_STRONG_TYPE(fc_pnl_day, float);
    #endif//_fc_pnl_day__GUARD__

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

    #ifndef _op_cn_abs_atm_equiv__GUARD__
    #define _op_cn_abs_atm_equiv__GUARD__
    DECL_STRONG_TYPE(op_cn_abs_atm_equiv, float);
    #endif//_op_cn_abs_atm_equiv__GUARD__

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

    #ifndef _op_pnl_brk__float__GUARD__
    #define _op_pnl_brk__float__GUARD__
    DECL_STRONG_TYPE(op_pnl_brk__float, float);
    #endif//_op_pnl_brk__float__GUARD__

    #ifndef _op_pnl_day__float__GUARD__
    #define _op_pnl_day__float__GUARD__
    DECL_STRONG_TYPE(op_pnl_day__float, float);
    #endif//_op_pnl_day__float__GUARD__

    #ifndef _op_dn_pnl_day__float__GUARD__
    #define _op_dn_pnl_day__float__GUARD__
    DECL_STRONG_TYPE(op_dn_pnl_day__float, float);
    #endif//_op_dn_pnl_day__float__GUARD__

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

    #ifndef _fut_width_mny__GUARD__
    #define _fut_width_mny__GUARD__
    DECL_STRONG_TYPE(fut_width_mny, float);
    #endif//_fut_width_mny__GUARD__

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

    #ifndef _opn_delta__GUARD__
    #define _opn_delta__GUARD__
    DECL_STRONG_TYPE(opn_delta, float);
    #endif//_opn_delta__GUARD__

    #ifndef _opn_ddelta__GUARD__
    #define _opn_ddelta__GUARD__
    DECL_STRONG_TYPE(opn_ddelta, float);
    #endif//_opn_ddelta__GUARD__

    #ifndef _pos_delta__GUARD__
    #define _pos_delta__GUARD__
    DECL_STRONG_TYPE(pos_delta, float);
    #endif//_pos_delta__GUARD__

    #ifndef _pos_ddelta__GUARD__
    #define _pos_ddelta__GUARD__
    DECL_STRONG_TYPE(pos_ddelta, float);
    #endif//_pos_ddelta__GUARD__

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

    #ifndef _pair_pnl__GUARD__
    #define _pair_pnl__GUARD__
    DECL_STRONG_TYPE(pair_pnl, float);
    #endif//_pair_pnl__GUARD__

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

    #ifndef _span01__GUARD__
    #define _span01__GUARD__
    DECL_STRONG_TYPE(span01, float);
    #endif//_span01__GUARD__

    #ifndef _span02__GUARD__
    #define _span02__GUARD__
    DECL_STRONG_TYPE(span02, float);
    #endif//_span02__GUARD__

    #ifndef _span03__GUARD__
    #define _span03__GUARD__
    DECL_STRONG_TYPE(span03, float);
    #endif//_span03__GUARD__

    #ifndef _span04__GUARD__
    #define _span04__GUARD__
    DECL_STRONG_TYPE(span04, float);
    #endif//_span04__GUARD__

    #ifndef _span05__GUARD__
    #define _span05__GUARD__
    DECL_STRONG_TYPE(span05, float);
    #endif//_span05__GUARD__

    #ifndef _span06__GUARD__
    #define _span06__GUARD__
    DECL_STRONG_TYPE(span06, float);
    #endif//_span06__GUARD__

    #ifndef _span07__GUARD__
    #define _span07__GUARD__
    DECL_STRONG_TYPE(span07, float);
    #endif//_span07__GUARD__

    #ifndef _span08__GUARD__
    #define _span08__GUARD__
    DECL_STRONG_TYPE(span08, float);
    #endif//_span08__GUARD__

    #ifndef _span09__GUARD__
    #define _span09__GUARD__
    DECL_STRONG_TYPE(span09, float);
    #endif//_span09__GUARD__

    #ifndef _span10__GUARD__
    #define _span10__GUARD__
    DECL_STRONG_TYPE(span10, float);
    #endif//_span10__GUARD__

    #ifndef _span11__GUARD__
    #define _span11__GUARD__
    DECL_STRONG_TYPE(span11, float);
    #endif//_span11__GUARD__

    #ifndef _span12__GUARD__
    #define _span12__GUARD__
    DECL_STRONG_TYPE(span12, float);
    #endif//_span12__GUARD__

    #ifndef _span13__GUARD__
    #define _span13__GUARD__
    DECL_STRONG_TYPE(span13, float);
    #endif//_span13__GUARD__

    #ifndef _span14__GUARD__
    #define _span14__GUARD__
    DECL_STRONG_TYPE(span14, float);
    #endif//_span14__GUARD__

    #ifndef _span15__GUARD__
    #define _span15__GUARD__
    DECL_STRONG_TYPE(span15, float);
    #endif//_span15__GUARD__

    #ifndef _span16__GUARD__
    #define _span16__GUARD__
    DECL_STRONG_TYPE(span16, float);
    #endif//_span16__GUARD__

    #ifndef _fut_liq_risk__GUARD__
    #define _fut_liq_risk__GUARD__
    DECL_STRONG_TYPE(fut_liq_risk, float);
    #endif//_fut_liq_risk__GUARD__

    #ifndef _opt_liq_risk__GUARD__
    #define _opt_liq_risk__GUARD__
    DECL_STRONG_TYPE(opt_liq_risk, float);
    #endif//_opt_liq_risk__GUARD__

    #ifndef _fc_bot_c0__GUARD__
    #define _fc_bot_c0__GUARD__
    DECL_STRONG_TYPE(fc_bot_c0, int32);
    #endif//_fc_bot_c0__GUARD__

    #ifndef _fc_sld_c0__GUARD__
    #define _fc_sld_c0__GUARD__
    DECL_STRONG_TYPE(fc_sld_c0, int32);
    #endif//_fc_sld_c0__GUARD__

    #ifndef _fc_mny_c0__GUARD__
    #define _fc_mny_c0__GUARD__
    DECL_STRONG_TYPE(fc_mny_c0, float);
    #endif//_fc_mny_c0__GUARD__

    #ifndef _fc_bot_c1__GUARD__
    #define _fc_bot_c1__GUARD__
    DECL_STRONG_TYPE(fc_bot_c1, int32);
    #endif//_fc_bot_c1__GUARD__

    #ifndef _fc_sld_c1__GUARD__
    #define _fc_sld_c1__GUARD__
    DECL_STRONG_TYPE(fc_sld_c1, int32);
    #endif//_fc_sld_c1__GUARD__

    #ifndef _fc_mny_c1__GUARD__
    #define _fc_mny_c1__GUARD__
    DECL_STRONG_TYPE(fc_mny_c1, float);
    #endif//_fc_mny_c1__GUARD__

    #ifndef _fut_margin__GUARD__
    #define _fut_margin__GUARD__
    DECL_STRONG_TYPE(fut_margin, float);
    #endif//_fut_margin__GUARD__

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

    #ifndef _num_fut_errors__GUARD__
    #define _num_fut_errors__GUARD__
    DECL_STRONG_TYPE(num_fut_errors, int32);
    #endif//_num_fut_errors__GUARD__

    #ifndef _num_opt_errors__GUARD__
    #define _num_opt_errors__GUARD__
    DECL_STRONG_TYPE(num_opt_errors, int32);
    #endif//_num_opt_errors__GUARD__

    #ifndef _fut_mark_flag__GUARD__
    #define _fut_mark_flag__GUARD__
    DECL_STRONG_TYPE(fut_mark_flag, spiderrock::protobuf::api::MktErrFlag);
    #endif//_fut_mark_flag__GUARD__

    #ifndef _opt_mark_flag__GUARD__
    #define _opt_mark_flag__GUARD__
    DECL_STRONG_TYPE(opt_mark_flag, spiderrock::protobuf::api::MktErrFlag);
    #endif//_opt_mark_flag__GUARD__

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

    
    class ProductRiskSummaryV5_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ProductRiskSummaryV5_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to ProductRiskSummaryV5_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const accnt & value) { set_accnt(value); }
        void set(const trade_date & value) { set_trade_date(value); }
        void set(const risk_session & value) { set_risk_session(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        ProductRiskSummaryV5_PKey() {}

        virtual ~ProductRiskSummaryV5_PKey() {
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
    

    class ProductRiskSummaryV5 {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::ProductRiskSummaryV5_PKey;
        using ln_ddelta = spiderrock::protobuf::api::ln_ddelta;
        using sh_ddelta = spiderrock::protobuf::api::sh_ddelta;
        using fut_mkt_value_mid = spiderrock::protobuf::api::fut_mkt_value_mid;
        using opt_mkt_value_mid = spiderrock::protobuf::api::opt_mkt_value_mid;
        using opt_mkt_value_vol = spiderrock::protobuf::api::opt_mkt_value_vol;
        using fc_abs_cur_pos = spiderrock::protobuf::api::fc_abs_cur_pos;
        using fc_abs_opn_clr = spiderrock::protobuf::api::fc_abs_opn_clr;
        using fc_abs_opn_prv = spiderrock::protobuf::api::fc_abs_opn_prv;
        using fc_abs_opn_pos = spiderrock::protobuf::api::fc_abs_opn_pos;
        using fc_abs_opn_brk = spiderrock::protobuf::api::fc_abs_opn_brk;
        using fc_net_cur_pos = spiderrock::protobuf::api::fc_net_cur_pos;
        using fc_bot = spiderrock::protobuf::api::fc_bot;
        using fc_sld = spiderrock::protobuf::api::fc_sld;
        using fc_bot_hdg = spiderrock::protobuf::api::fc_bot_hdg;
        using fc_sld_hdg = spiderrock::protobuf::api::fc_sld_hdg;
        using fc_bot_trh = spiderrock::protobuf::api::fc_bot_trh;
        using fc_sld_trh = spiderrock::protobuf::api::fc_sld_trh;
        using fc_bot_opn = spiderrock::protobuf::api::fc_bot_opn;
        using fc_sld_opn = spiderrock::protobuf::api::fc_sld_opn;
        using fc_bot_trd = spiderrock::protobuf::api::fc_bot_trd;
        using fc_sld_trd = spiderrock::protobuf::api::fc_sld_trd;
        using fc_mny_bot = spiderrock::protobuf::api::fc_mny_bot;
        using fc_mny_sld = spiderrock::protobuf::api::fc_mny_sld;
        using max_fut_dttm = spiderrock::protobuf::api::max_fut_dttm;
        using fc_pnl_mid = spiderrock::protobuf::api::fc_pnl_mid;
        using fc_pnl_clr = spiderrock::protobuf::api::fc_pnl_clr;
        using fc_pnl_day = spiderrock::protobuf::api::fc_pnl_day;
        using op_cn_abs_cur_pos = spiderrock::protobuf::api::op_cn_abs_cur_pos;
        using op_cn_abs_opn_clr = spiderrock::protobuf::api::op_cn_abs_opn_clr;
        using op_cn_abs_opn_prv = spiderrock::protobuf::api::op_cn_abs_opn_prv;
        using op_cn_abs_opn_pos = spiderrock::protobuf::api::op_cn_abs_opn_pos;
        using op_cn_abs_opn_brk = spiderrock::protobuf::api::op_cn_abs_opn_brk;
        using op_cn_pos_call = spiderrock::protobuf::api::op_cn_pos_call;
        using op_cn_pos_put = spiderrock::protobuf::api::op_cn_pos_put;
        using op_cn_abs_pair = spiderrock::protobuf::api::op_cn_abs_pair;
        using op_cn_abs_atm_equiv = spiderrock::protobuf::api::op_cn_abs_atm_equiv;
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
        using op_pnl_brk = spiderrock::protobuf::api::op_pnl_brk__float;
        using op_pnl_day = spiderrock::protobuf::api::op_pnl_day__float;
        using op_dn_pnl_day = spiderrock::protobuf::api::op_dn_pnl_day__float;
        using op_day_vega = spiderrock::protobuf::api::op_day_vega;
        using op_day_wvega = spiderrock::protobuf::api::op_day_wvega;
        using op_day_tvega = spiderrock::protobuf::api::op_day_tvega;
        using op_day_wt_vega = spiderrock::protobuf::api::op_day_wt_vega;
        using op_day_theta = spiderrock::protobuf::api::op_day_theta;
        using op_day_delta = spiderrock::protobuf::api::op_day_delta;
        using op_trd_delta = spiderrock::protobuf::api::op_trd_delta;
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
        using fut_width_mny = spiderrock::protobuf::api::fut_width_mny;
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
        using opn_delta = spiderrock::protobuf::api::opn_delta;
        using opn_ddelta = spiderrock::protobuf::api::opn_ddelta;
        using pos_delta = spiderrock::protobuf::api::pos_delta;
        using pos_ddelta = spiderrock::protobuf::api::pos_ddelta;
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
        using t_edge = spiderrock::protobuf::api::t_edge;
        using t_edge_mult = spiderrock::protobuf::api::t_edge_mult;
        using t_edge_pr = spiderrock::protobuf::api::t_edge_pr;
        using t_edge_mult_pr = spiderrock::protobuf::api::t_edge_mult_pr;
        using num_tvol_errors = spiderrock::protobuf::api::num_tvol_errors;
        using pair_pnl = spiderrock::protobuf::api::pair_pnl;
        using pos_tedge_wv = spiderrock::protobuf::api::pos_tedge_wv;
        using neg_tedge_wv = spiderrock::protobuf::api::neg_tedge_wv;
        using bad_tedge_wv = spiderrock::protobuf::api::bad_tedge_wv;
        using pos_tedge_pnl = spiderrock::protobuf::api::pos_tedge_pnl;
        using neg_tedge_pnl = spiderrock::protobuf::api::neg_tedge_pnl;
        using bad_tedge_pnl = spiderrock::protobuf::api::bad_tedge_pnl;
        using span01 = spiderrock::protobuf::api::span01;
        using span02 = spiderrock::protobuf::api::span02;
        using span03 = spiderrock::protobuf::api::span03;
        using span04 = spiderrock::protobuf::api::span04;
        using span05 = spiderrock::protobuf::api::span05;
        using span06 = spiderrock::protobuf::api::span06;
        using span07 = spiderrock::protobuf::api::span07;
        using span08 = spiderrock::protobuf::api::span08;
        using span09 = spiderrock::protobuf::api::span09;
        using span10 = spiderrock::protobuf::api::span10;
        using span11 = spiderrock::protobuf::api::span11;
        using span12 = spiderrock::protobuf::api::span12;
        using span13 = spiderrock::protobuf::api::span13;
        using span14 = spiderrock::protobuf::api::span14;
        using span15 = spiderrock::protobuf::api::span15;
        using span16 = spiderrock::protobuf::api::span16;
        using fut_liq_risk = spiderrock::protobuf::api::fut_liq_risk;
        using opt_liq_risk = spiderrock::protobuf::api::opt_liq_risk;
        using fc_bot_c0 = spiderrock::protobuf::api::fc_bot_c0;
        using fc_sld_c0 = spiderrock::protobuf::api::fc_sld_c0;
        using fc_mny_c0 = spiderrock::protobuf::api::fc_mny_c0;
        using fc_bot_c1 = spiderrock::protobuf::api::fc_bot_c1;
        using fc_sld_c1 = spiderrock::protobuf::api::fc_sld_c1;
        using fc_mny_c1 = spiderrock::protobuf::api::fc_mny_c1;
        using fut_margin = spiderrock::protobuf::api::fut_margin;
        using margin_udn_vdn = spiderrock::protobuf::api::margin_udn_vdn;
        using margin_udn_vup = spiderrock::protobuf::api::margin_udn_vup;
        using margin_uup_vdn = spiderrock::protobuf::api::margin_uup_vdn;
        using margin_uup_vup = spiderrock::protobuf::api::margin_uup_vup;
        using num_fut_errors = spiderrock::protobuf::api::num_fut_errors;
        using num_opt_errors = spiderrock::protobuf::api::num_opt_errors;
        using fut_mark_flag = spiderrock::protobuf::api::fut_mark_flag;
        using opt_mark_flag = spiderrock::protobuf::api::opt_mark_flag;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ln_ddelta m_ln_ddelta{};
        sh_ddelta m_sh_ddelta{};
        fut_mkt_value_mid m_fut_mkt_value_mid{};
        opt_mkt_value_mid m_opt_mkt_value_mid{};
        opt_mkt_value_vol m_opt_mkt_value_vol{};
        fc_abs_cur_pos m_fc_abs_cur_pos{};
        fc_abs_opn_clr m_fc_abs_opn_clr{};
        fc_abs_opn_prv m_fc_abs_opn_prv{};
        fc_abs_opn_pos m_fc_abs_opn_pos{};
        fc_abs_opn_brk m_fc_abs_opn_brk{};
        fc_net_cur_pos m_fc_net_cur_pos{};
        fc_bot m_fc_bot{};
        fc_sld m_fc_sld{};
        fc_bot_hdg m_fc_bot_hdg{};
        fc_sld_hdg m_fc_sld_hdg{};
        fc_bot_trh m_fc_bot_trh{};
        fc_sld_trh m_fc_sld_trh{};
        fc_bot_opn m_fc_bot_opn{};
        fc_sld_opn m_fc_sld_opn{};
        fc_bot_trd m_fc_bot_trd{};
        fc_sld_trd m_fc_sld_trd{};
        fc_mny_bot m_fc_mny_bot{};
        fc_mny_sld m_fc_mny_sld{};
        max_fut_dttm m_max_fut_dttm{};
        fc_pnl_mid m_fc_pnl_mid{};
        fc_pnl_clr m_fc_pnl_clr{};
        fc_pnl_day m_fc_pnl_day{};
        op_cn_abs_cur_pos m_op_cn_abs_cur_pos{};
        op_cn_abs_opn_clr m_op_cn_abs_opn_clr{};
        op_cn_abs_opn_prv m_op_cn_abs_opn_prv{};
        op_cn_abs_opn_pos m_op_cn_abs_opn_pos{};
        op_cn_abs_opn_brk m_op_cn_abs_opn_brk{};
        op_cn_pos_call m_op_cn_pos_call{};
        op_cn_pos_put m_op_cn_pos_put{};
        op_cn_abs_pair m_op_cn_abs_pair{};
        op_cn_abs_atm_equiv m_op_cn_abs_atm_equiv{};
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
        fut_width_mny m_fut_width_mny{};
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
        opn_delta m_opn_delta{};
        opn_ddelta m_opn_ddelta{};
        pos_delta m_pos_delta{};
        pos_ddelta m_pos_ddelta{};
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
        t_edge m_t_edge{};
        t_edge_mult m_t_edge_mult{};
        t_edge_pr m_t_edge_pr{};
        t_edge_mult_pr m_t_edge_mult_pr{};
        num_tvol_errors m_num_tvol_errors{};
        pair_pnl m_pair_pnl{};
        pos_tedge_wv m_pos_tedge_wv{};
        neg_tedge_wv m_neg_tedge_wv{};
        bad_tedge_wv m_bad_tedge_wv{};
        pos_tedge_pnl m_pos_tedge_pnl{};
        neg_tedge_pnl m_neg_tedge_pnl{};
        bad_tedge_pnl m_bad_tedge_pnl{};
        span01 m_span01{};
        span02 m_span02{};
        span03 m_span03{};
        span04 m_span04{};
        span05 m_span05{};
        span06 m_span06{};
        span07 m_span07{};
        span08 m_span08{};
        span09 m_span09{};
        span10 m_span10{};
        span11 m_span11{};
        span12 m_span12{};
        span13 m_span13{};
        span14 m_span14{};
        span15 m_span15{};
        span16 m_span16{};
        fut_liq_risk m_fut_liq_risk{};
        opt_liq_risk m_opt_liq_risk{};
        fc_bot_c0 m_fc_bot_c0{};
        fc_sld_c0 m_fc_sld_c0{};
        fc_mny_c0 m_fc_mny_c0{};
        fc_bot_c1 m_fc_bot_c1{};
        fc_sld_c1 m_fc_sld_c1{};
        fc_mny_c1 m_fc_mny_c1{};
        fut_margin m_fut_margin{};
        margin_udn_vdn m_margin_udn_vdn{};
        margin_udn_vup m_margin_udn_vup{};
        margin_uup_vdn m_margin_uup_vdn{};
        margin_uup_vup m_margin_uup_vup{};
        num_fut_errors m_num_fut_errors{};
        num_opt_errors m_num_opt_errors{};
        fut_mark_flag m_fut_mark_flag{};
        opt_mark_flag m_opt_mark_flag{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        ln_ddelta get_ln_ddelta() const {
            return m_ln_ddelta;
        }		
        sh_ddelta get_sh_ddelta() const {
            return m_sh_ddelta;
        }		
        fut_mkt_value_mid get_fut_mkt_value_mid() const {
            return m_fut_mkt_value_mid;
        }		
        opt_mkt_value_mid get_opt_mkt_value_mid() const {
            return m_opt_mkt_value_mid;
        }		
        opt_mkt_value_vol get_opt_mkt_value_vol() const {
            return m_opt_mkt_value_vol;
        }		
        fc_abs_cur_pos get_fc_abs_cur_pos() const {
            return m_fc_abs_cur_pos;
        }		
        fc_abs_opn_clr get_fc_abs_opn_clr() const {
            return m_fc_abs_opn_clr;
        }		
        fc_abs_opn_prv get_fc_abs_opn_prv() const {
            return m_fc_abs_opn_prv;
        }		
        fc_abs_opn_pos get_fc_abs_opn_pos() const {
            return m_fc_abs_opn_pos;
        }		
        fc_abs_opn_brk get_fc_abs_opn_brk() const {
            return m_fc_abs_opn_brk;
        }		
        fc_net_cur_pos get_fc_net_cur_pos() const {
            return m_fc_net_cur_pos;
        }		
        fc_bot get_fc_bot() const {
            return m_fc_bot;
        }		
        fc_sld get_fc_sld() const {
            return m_fc_sld;
        }		
        fc_bot_hdg get_fc_bot_hdg() const {
            return m_fc_bot_hdg;
        }		
        fc_sld_hdg get_fc_sld_hdg() const {
            return m_fc_sld_hdg;
        }		
        fc_bot_trh get_fc_bot_trh() const {
            return m_fc_bot_trh;
        }		
        fc_sld_trh get_fc_sld_trh() const {
            return m_fc_sld_trh;
        }		
        fc_bot_opn get_fc_bot_opn() const {
            return m_fc_bot_opn;
        }		
        fc_sld_opn get_fc_sld_opn() const {
            return m_fc_sld_opn;
        }		
        fc_bot_trd get_fc_bot_trd() const {
            return m_fc_bot_trd;
        }		
        fc_sld_trd get_fc_sld_trd() const {
            return m_fc_sld_trd;
        }		
        fc_mny_bot get_fc_mny_bot() const {
            return m_fc_mny_bot;
        }		
        fc_mny_sld get_fc_mny_sld() const {
            return m_fc_mny_sld;
        }		
        max_fut_dttm get_max_fut_dttm() const {
            return m_max_fut_dttm;
        }		
        fc_pnl_mid get_fc_pnl_mid() const {
            return m_fc_pnl_mid;
        }		
        fc_pnl_clr get_fc_pnl_clr() const {
            return m_fc_pnl_clr;
        }		
        fc_pnl_day get_fc_pnl_day() const {
            return m_fc_pnl_day;
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
        op_cn_pos_call get_op_cn_pos_call() const {
            return m_op_cn_pos_call;
        }		
        op_cn_pos_put get_op_cn_pos_put() const {
            return m_op_cn_pos_put;
        }		
        op_cn_abs_pair get_op_cn_abs_pair() const {
            return m_op_cn_abs_pair;
        }		
        op_cn_abs_atm_equiv get_op_cn_abs_atm_equiv() const {
            return m_op_cn_abs_atm_equiv;
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
        fut_width_mny get_fut_width_mny() const {
            return m_fut_width_mny;
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
        opn_delta get_opn_delta() const {
            return m_opn_delta;
        }		
        opn_ddelta get_opn_ddelta() const {
            return m_opn_ddelta;
        }		
        pos_delta get_pos_delta() const {
            return m_pos_delta;
        }		
        pos_ddelta get_pos_ddelta() const {
            return m_pos_ddelta;
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
        pair_pnl get_pair_pnl() const {
            return m_pair_pnl;
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
        span01 get_span01() const {
            return m_span01;
        }		
        span02 get_span02() const {
            return m_span02;
        }		
        span03 get_span03() const {
            return m_span03;
        }		
        span04 get_span04() const {
            return m_span04;
        }		
        span05 get_span05() const {
            return m_span05;
        }		
        span06 get_span06() const {
            return m_span06;
        }		
        span07 get_span07() const {
            return m_span07;
        }		
        span08 get_span08() const {
            return m_span08;
        }		
        span09 get_span09() const {
            return m_span09;
        }		
        span10 get_span10() const {
            return m_span10;
        }		
        span11 get_span11() const {
            return m_span11;
        }		
        span12 get_span12() const {
            return m_span12;
        }		
        span13 get_span13() const {
            return m_span13;
        }		
        span14 get_span14() const {
            return m_span14;
        }		
        span15 get_span15() const {
            return m_span15;
        }		
        span16 get_span16() const {
            return m_span16;
        }		
        fut_liq_risk get_fut_liq_risk() const {
            return m_fut_liq_risk;
        }		
        opt_liq_risk get_opt_liq_risk() const {
            return m_opt_liq_risk;
        }		
        fc_bot_c0 get_fc_bot_c0() const {
            return m_fc_bot_c0;
        }		
        fc_sld_c0 get_fc_sld_c0() const {
            return m_fc_sld_c0;
        }		
        fc_mny_c0 get_fc_mny_c0() const {
            return m_fc_mny_c0;
        }		
        fc_bot_c1 get_fc_bot_c1() const {
            return m_fc_bot_c1;
        }		
        fc_sld_c1 get_fc_sld_c1() const {
            return m_fc_sld_c1;
        }		
        fc_mny_c1 get_fc_mny_c1() const {
            return m_fc_mny_c1;
        }		
        fut_margin get_fut_margin() const {
            return m_fut_margin;
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
        num_fut_errors get_num_fut_errors() const {
            return m_num_fut_errors;
        }		
        num_opt_errors get_num_opt_errors() const {
            return m_num_opt_errors;
        }		
        fut_mark_flag get_fut_mark_flag() const {
            return m_fut_mark_flag;
        }		
        opt_mark_flag get_opt_mark_flag() const {
            return m_opt_mark_flag;
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
        void set_ln_ddelta(const ln_ddelta& value)  {
            m_ln_ddelta = value;
        }
        void set_sh_ddelta(const sh_ddelta& value)  {
            m_sh_ddelta = value;
        }
        void set_fut_mkt_value_mid(const fut_mkt_value_mid& value)  {
            m_fut_mkt_value_mid = value;
        }
        void set_opt_mkt_value_mid(const opt_mkt_value_mid& value)  {
            m_opt_mkt_value_mid = value;
        }
        void set_opt_mkt_value_vol(const opt_mkt_value_vol& value)  {
            m_opt_mkt_value_vol = value;
        }
        void set_fc_abs_cur_pos(const fc_abs_cur_pos& value)  {
            m_fc_abs_cur_pos = value;
        }
        void set_fc_abs_opn_clr(const fc_abs_opn_clr& value)  {
            m_fc_abs_opn_clr = value;
        }
        void set_fc_abs_opn_prv(const fc_abs_opn_prv& value)  {
            m_fc_abs_opn_prv = value;
        }
        void set_fc_abs_opn_pos(const fc_abs_opn_pos& value)  {
            m_fc_abs_opn_pos = value;
        }
        void set_fc_abs_opn_brk(const fc_abs_opn_brk& value)  {
            m_fc_abs_opn_brk = value;
        }
        void set_fc_net_cur_pos(const fc_net_cur_pos& value)  {
            m_fc_net_cur_pos = value;
        }
        void set_fc_bot(const fc_bot& value)  {
            m_fc_bot = value;
        }
        void set_fc_sld(const fc_sld& value)  {
            m_fc_sld = value;
        }
        void set_fc_bot_hdg(const fc_bot_hdg& value)  {
            m_fc_bot_hdg = value;
        }
        void set_fc_sld_hdg(const fc_sld_hdg& value)  {
            m_fc_sld_hdg = value;
        }
        void set_fc_bot_trh(const fc_bot_trh& value)  {
            m_fc_bot_trh = value;
        }
        void set_fc_sld_trh(const fc_sld_trh& value)  {
            m_fc_sld_trh = value;
        }
        void set_fc_bot_opn(const fc_bot_opn& value)  {
            m_fc_bot_opn = value;
        }
        void set_fc_sld_opn(const fc_sld_opn& value)  {
            m_fc_sld_opn = value;
        }
        void set_fc_bot_trd(const fc_bot_trd& value)  {
            m_fc_bot_trd = value;
        }
        void set_fc_sld_trd(const fc_sld_trd& value)  {
            m_fc_sld_trd = value;
        }
        void set_fc_mny_bot(const fc_mny_bot& value)  {
            m_fc_mny_bot = value;
        }
        void set_fc_mny_sld(const fc_mny_sld& value)  {
            m_fc_mny_sld = value;
        }
        void set_max_fut_dttm(const max_fut_dttm& value)  {
            m_max_fut_dttm = value;
        }
        void set_fc_pnl_mid(const fc_pnl_mid& value)  {
            m_fc_pnl_mid = value;
        }
        void set_fc_pnl_clr(const fc_pnl_clr& value)  {
            m_fc_pnl_clr = value;
        }
        void set_fc_pnl_day(const fc_pnl_day& value)  {
            m_fc_pnl_day = value;
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
        void set_op_cn_pos_call(const op_cn_pos_call& value)  {
            m_op_cn_pos_call = value;
        }
        void set_op_cn_pos_put(const op_cn_pos_put& value)  {
            m_op_cn_pos_put = value;
        }
        void set_op_cn_abs_pair(const op_cn_abs_pair& value)  {
            m_op_cn_abs_pair = value;
        }
        void set_op_cn_abs_atm_equiv(const op_cn_abs_atm_equiv& value)  {
            m_op_cn_abs_atm_equiv = value;
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
        void set_fut_width_mny(const fut_width_mny& value)  {
            m_fut_width_mny = value;
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
        void set_opn_delta(const opn_delta& value)  {
            m_opn_delta = value;
        }
        void set_opn_ddelta(const opn_ddelta& value)  {
            m_opn_ddelta = value;
        }
        void set_pos_delta(const pos_delta& value)  {
            m_pos_delta = value;
        }
        void set_pos_ddelta(const pos_ddelta& value)  {
            m_pos_ddelta = value;
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
        void set_pair_pnl(const pair_pnl& value)  {
            m_pair_pnl = value;
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
        void set_span01(const span01& value)  {
            m_span01 = value;
        }
        void set_span02(const span02& value)  {
            m_span02 = value;
        }
        void set_span03(const span03& value)  {
            m_span03 = value;
        }
        void set_span04(const span04& value)  {
            m_span04 = value;
        }
        void set_span05(const span05& value)  {
            m_span05 = value;
        }
        void set_span06(const span06& value)  {
            m_span06 = value;
        }
        void set_span07(const span07& value)  {
            m_span07 = value;
        }
        void set_span08(const span08& value)  {
            m_span08 = value;
        }
        void set_span09(const span09& value)  {
            m_span09 = value;
        }
        void set_span10(const span10& value)  {
            m_span10 = value;
        }
        void set_span11(const span11& value)  {
            m_span11 = value;
        }
        void set_span12(const span12& value)  {
            m_span12 = value;
        }
        void set_span13(const span13& value)  {
            m_span13 = value;
        }
        void set_span14(const span14& value)  {
            m_span14 = value;
        }
        void set_span15(const span15& value)  {
            m_span15 = value;
        }
        void set_span16(const span16& value)  {
            m_span16 = value;
        }
        void set_fut_liq_risk(const fut_liq_risk& value)  {
            m_fut_liq_risk = value;
        }
        void set_opt_liq_risk(const opt_liq_risk& value)  {
            m_opt_liq_risk = value;
        }
        void set_fc_bot_c0(const fc_bot_c0& value)  {
            m_fc_bot_c0 = value;
        }
        void set_fc_sld_c0(const fc_sld_c0& value)  {
            m_fc_sld_c0 = value;
        }
        void set_fc_mny_c0(const fc_mny_c0& value)  {
            m_fc_mny_c0 = value;
        }
        void set_fc_bot_c1(const fc_bot_c1& value)  {
            m_fc_bot_c1 = value;
        }
        void set_fc_sld_c1(const fc_sld_c1& value)  {
            m_fc_sld_c1 = value;
        }
        void set_fc_mny_c1(const fc_mny_c1& value)  {
            m_fc_mny_c1 = value;
        }
        void set_fut_margin(const fut_margin& value)  {
            m_fut_margin = value;
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
        void set_num_fut_errors(const num_fut_errors& value)  {
            m_num_fut_errors = value;
        }
        void set_num_opt_errors(const num_opt_errors& value)  {
            m_num_opt_errors = value;
        }
        void set_fut_mark_flag(const fut_mark_flag& value)  {
            m_fut_mark_flag = value;
        }
        void set_opt_mark_flag(const opt_mark_flag& value)  {
            m_opt_mark_flag = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ProductRiskSummaryV5::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const ln_ddelta & value) {
            set_ln_ddelta(value);
        }
        void set(const sh_ddelta & value) {
            set_sh_ddelta(value);
        }
        void set(const fut_mkt_value_mid & value) {
            set_fut_mkt_value_mid(value);
        }
        void set(const opt_mkt_value_mid & value) {
            set_opt_mkt_value_mid(value);
        }
        void set(const opt_mkt_value_vol & value) {
            set_opt_mkt_value_vol(value);
        }
        void set(const fc_abs_cur_pos & value) {
            set_fc_abs_cur_pos(value);
        }
        void set(const fc_abs_opn_clr & value) {
            set_fc_abs_opn_clr(value);
        }
        void set(const fc_abs_opn_prv & value) {
            set_fc_abs_opn_prv(value);
        }
        void set(const fc_abs_opn_pos & value) {
            set_fc_abs_opn_pos(value);
        }
        void set(const fc_abs_opn_brk & value) {
            set_fc_abs_opn_brk(value);
        }
        void set(const fc_net_cur_pos & value) {
            set_fc_net_cur_pos(value);
        }
        void set(const fc_bot & value) {
            set_fc_bot(value);
        }
        void set(const fc_sld & value) {
            set_fc_sld(value);
        }
        void set(const fc_bot_hdg & value) {
            set_fc_bot_hdg(value);
        }
        void set(const fc_sld_hdg & value) {
            set_fc_sld_hdg(value);
        }
        void set(const fc_bot_trh & value) {
            set_fc_bot_trh(value);
        }
        void set(const fc_sld_trh & value) {
            set_fc_sld_trh(value);
        }
        void set(const fc_bot_opn & value) {
            set_fc_bot_opn(value);
        }
        void set(const fc_sld_opn & value) {
            set_fc_sld_opn(value);
        }
        void set(const fc_bot_trd & value) {
            set_fc_bot_trd(value);
        }
        void set(const fc_sld_trd & value) {
            set_fc_sld_trd(value);
        }
        void set(const fc_mny_bot & value) {
            set_fc_mny_bot(value);
        }
        void set(const fc_mny_sld & value) {
            set_fc_mny_sld(value);
        }
        void set(const max_fut_dttm & value) {
            set_max_fut_dttm(value);
        }
        void set(const fc_pnl_mid & value) {
            set_fc_pnl_mid(value);
        }
        void set(const fc_pnl_clr & value) {
            set_fc_pnl_clr(value);
        }
        void set(const fc_pnl_day & value) {
            set_fc_pnl_day(value);
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
        void set(const op_cn_pos_call & value) {
            set_op_cn_pos_call(value);
        }
        void set(const op_cn_pos_put & value) {
            set_op_cn_pos_put(value);
        }
        void set(const op_cn_abs_pair & value) {
            set_op_cn_abs_pair(value);
        }
        void set(const op_cn_abs_atm_equiv & value) {
            set_op_cn_abs_atm_equiv(value);
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
        void set(const fut_width_mny & value) {
            set_fut_width_mny(value);
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
        void set(const opn_delta & value) {
            set_opn_delta(value);
        }
        void set(const opn_ddelta & value) {
            set_opn_ddelta(value);
        }
        void set(const pos_delta & value) {
            set_pos_delta(value);
        }
        void set(const pos_ddelta & value) {
            set_pos_ddelta(value);
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
        void set(const pair_pnl & value) {
            set_pair_pnl(value);
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
        void set(const span01 & value) {
            set_span01(value);
        }
        void set(const span02 & value) {
            set_span02(value);
        }
        void set(const span03 & value) {
            set_span03(value);
        }
        void set(const span04 & value) {
            set_span04(value);
        }
        void set(const span05 & value) {
            set_span05(value);
        }
        void set(const span06 & value) {
            set_span06(value);
        }
        void set(const span07 & value) {
            set_span07(value);
        }
        void set(const span08 & value) {
            set_span08(value);
        }
        void set(const span09 & value) {
            set_span09(value);
        }
        void set(const span10 & value) {
            set_span10(value);
        }
        void set(const span11 & value) {
            set_span11(value);
        }
        void set(const span12 & value) {
            set_span12(value);
        }
        void set(const span13 & value) {
            set_span13(value);
        }
        void set(const span14 & value) {
            set_span14(value);
        }
        void set(const span15 & value) {
            set_span15(value);
        }
        void set(const span16 & value) {
            set_span16(value);
        }
        void set(const fut_liq_risk & value) {
            set_fut_liq_risk(value);
        }
        void set(const opt_liq_risk & value) {
            set_opt_liq_risk(value);
        }
        void set(const fc_bot_c0 & value) {
            set_fc_bot_c0(value);
        }
        void set(const fc_sld_c0 & value) {
            set_fc_sld_c0(value);
        }
        void set(const fc_mny_c0 & value) {
            set_fc_mny_c0(value);
        }
        void set(const fc_bot_c1 & value) {
            set_fc_bot_c1(value);
        }
        void set(const fc_sld_c1 & value) {
            set_fc_sld_c1(value);
        }
        void set(const fc_mny_c1 & value) {
            set_fc_mny_c1(value);
        }
        void set(const fut_margin & value) {
            set_fut_margin(value);
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
        void set(const num_fut_errors & value) {
            set_num_fut_errors(value);
        }
        void set(const num_opt_errors & value) {
            set_num_opt_errors(value);
        }
        void set(const fut_mark_flag & value) {
            set_fut_mark_flag(value);
        }
        void set(const opt_mark_flag & value) {
            set_opt_mark_flag(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const ProductRiskSummaryV5 & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ln_ddelta);
            set(value.m_sh_ddelta);
            set(value.m_fut_mkt_value_mid);
            set(value.m_opt_mkt_value_mid);
            set(value.m_opt_mkt_value_vol);
            set(value.m_fc_abs_cur_pos);
            set(value.m_fc_abs_opn_clr);
            set(value.m_fc_abs_opn_prv);
            set(value.m_fc_abs_opn_pos);
            set(value.m_fc_abs_opn_brk);
            set(value.m_fc_net_cur_pos);
            set(value.m_fc_bot);
            set(value.m_fc_sld);
            set(value.m_fc_bot_hdg);
            set(value.m_fc_sld_hdg);
            set(value.m_fc_bot_trh);
            set(value.m_fc_sld_trh);
            set(value.m_fc_bot_opn);
            set(value.m_fc_sld_opn);
            set(value.m_fc_bot_trd);
            set(value.m_fc_sld_trd);
            set(value.m_fc_mny_bot);
            set(value.m_fc_mny_sld);
            set(value.m_max_fut_dttm);
            set(value.m_fc_pnl_mid);
            set(value.m_fc_pnl_clr);
            set(value.m_fc_pnl_day);
            set(value.m_op_cn_abs_cur_pos);
            set(value.m_op_cn_abs_opn_clr);
            set(value.m_op_cn_abs_opn_prv);
            set(value.m_op_cn_abs_opn_pos);
            set(value.m_op_cn_abs_opn_brk);
            set(value.m_op_cn_pos_call);
            set(value.m_op_cn_pos_put);
            set(value.m_op_cn_abs_pair);
            set(value.m_op_cn_abs_atm_equiv);
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
            set(value.m_fut_width_mny);
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
            set(value.m_opn_delta);
            set(value.m_opn_ddelta);
            set(value.m_pos_delta);
            set(value.m_pos_ddelta);
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
            set(value.m_t_edge);
            set(value.m_t_edge_mult);
            set(value.m_t_edge_pr);
            set(value.m_t_edge_mult_pr);
            set(value.m_num_tvol_errors);
            set(value.m_pair_pnl);
            set(value.m_pos_tedge_wv);
            set(value.m_neg_tedge_wv);
            set(value.m_bad_tedge_wv);
            set(value.m_pos_tedge_pnl);
            set(value.m_neg_tedge_pnl);
            set(value.m_bad_tedge_pnl);
            set(value.m_span01);
            set(value.m_span02);
            set(value.m_span03);
            set(value.m_span04);
            set(value.m_span05);
            set(value.m_span06);
            set(value.m_span07);
            set(value.m_span08);
            set(value.m_span09);
            set(value.m_span10);
            set(value.m_span11);
            set(value.m_span12);
            set(value.m_span13);
            set(value.m_span14);
            set(value.m_span15);
            set(value.m_span16);
            set(value.m_fut_liq_risk);
            set(value.m_opt_liq_risk);
            set(value.m_fc_bot_c0);
            set(value.m_fc_sld_c0);
            set(value.m_fc_mny_c0);
            set(value.m_fc_bot_c1);
            set(value.m_fc_sld_c1);
            set(value.m_fc_mny_c1);
            set(value.m_fut_margin);
            set(value.m_margin_udn_vdn);
            set(value.m_margin_udn_vup);
            set(value.m_margin_uup_vdn);
            set(value.m_margin_uup_vup);
            set(value.m_num_fut_errors);
            set(value.m_num_opt_errors);
            set(value.m_fut_mark_flag);
            set(value.m_opt_mark_flag);
            set(value.m_timestamp);
        }

        ProductRiskSummaryV5() {
            m__meta.set_message_type("ProductRiskSummaryV5");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4815, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4815, length);
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
             *this = ProductRiskSummaryV5{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeLnDdelta() const {
            return !(m_ln_ddelta == 0.0);
        }
        bool IncludeShDdelta() const {
            return !(m_sh_ddelta == 0.0);
        }
        bool IncludeFutMktValueMid() const {
            return !(m_fut_mkt_value_mid == 0.0);
        }
        bool IncludeOptMktValueMid() const {
            return !(m_opt_mkt_value_mid == 0.0);
        }
        bool IncludeOptMktValueVol() const {
            return !(m_opt_mkt_value_vol == 0.0);
        }
        bool IncludeFcAbsCurPos() const {
            return !(m_fc_abs_cur_pos == 0);
        }
        bool IncludeFcAbsOpnClr() const {
            return !(m_fc_abs_opn_clr == 0);
        }
        bool IncludeFcAbsOpnPrv() const {
            return !(m_fc_abs_opn_prv == 0);
        }
        bool IncludeFcAbsOpnPos() const {
            return !(m_fc_abs_opn_pos == 0);
        }
        bool IncludeFcAbsOpnBrk() const {
            return !(m_fc_abs_opn_brk == 0);
        }
        bool IncludeFcNetCurPos() const {
            return !(m_fc_net_cur_pos == 0);
        }
        bool IncludeFcBot() const {
            return !(m_fc_bot == 0);
        }
        bool IncludeFcSld() const {
            return !(m_fc_sld == 0);
        }
        bool IncludeFcBotHdg() const {
            return !(m_fc_bot_hdg == 0);
        }
        bool IncludeFcSldHdg() const {
            return !(m_fc_sld_hdg == 0);
        }
        bool IncludeFcBotTrh() const {
            return !(m_fc_bot_trh == 0);
        }
        bool IncludeFcSldTrh() const {
            return !(m_fc_sld_trh == 0);
        }
        bool IncludeFcBotOpn() const {
            return !(m_fc_bot_opn == 0);
        }
        bool IncludeFcSldOpn() const {
            return !(m_fc_sld_opn == 0);
        }
        bool IncludeFcBotTrd() const {
            return !(m_fc_bot_trd == 0);
        }
        bool IncludeFcSldTrd() const {
            return !(m_fc_sld_trd == 0);
        }
        bool IncludeFcMnyBot() const {
            return !(m_fc_mny_bot == 0.0);
        }
        bool IncludeFcMnySld() const {
            return !(m_fc_mny_sld == 0.0);
        }
        bool IncludeMaxFutDttm() const {
            return (m_max_fut_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeFcPnlMid() const {
            return !(m_fc_pnl_mid == 0.0);
        }
        bool IncludeFcPnlClr() const {
            return !(m_fc_pnl_clr == 0.0);
        }
        bool IncludeFcPnlDay() const {
            return !(m_fc_pnl_day == 0.0);
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
        bool IncludeOpCnPosCall() const {
            return !(m_op_cn_pos_call == 0);
        }
        bool IncludeOpCnPosPut() const {
            return !(m_op_cn_pos_put == 0);
        }
        bool IncludeOpCnAbsPair() const {
            return !(m_op_cn_abs_pair == 0);
        }
        bool IncludeOpCnAbsAtmEquiv() const {
            return !(m_op_cn_abs_atm_equiv == 0.0);
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
        bool IncludeFutWidthMny() const {
            return !(m_fut_width_mny == 0.0);
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
        bool IncludeOpnDelta() const {
            return !(m_opn_delta == 0.0);
        }
        bool IncludeOpnDdelta() const {
            return !(m_opn_ddelta == 0.0);
        }
        bool IncludePosDelta() const {
            return !(m_pos_delta == 0.0);
        }
        bool IncludePosDdelta() const {
            return !(m_pos_ddelta == 0.0);
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
        bool IncludePairPnl() const {
            return !(m_pair_pnl == 0.0);
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
        bool IncludeSpan01() const {
            return !(m_span01 == 0.0);
        }
        bool IncludeSpan02() const {
            return !(m_span02 == 0.0);
        }
        bool IncludeSpan03() const {
            return !(m_span03 == 0.0);
        }
        bool IncludeSpan04() const {
            return !(m_span04 == 0.0);
        }
        bool IncludeSpan05() const {
            return !(m_span05 == 0.0);
        }
        bool IncludeSpan06() const {
            return !(m_span06 == 0.0);
        }
        bool IncludeSpan07() const {
            return !(m_span07 == 0.0);
        }
        bool IncludeSpan08() const {
            return !(m_span08 == 0.0);
        }
        bool IncludeSpan09() const {
            return !(m_span09 == 0.0);
        }
        bool IncludeSpan10() const {
            return !(m_span10 == 0.0);
        }
        bool IncludeSpan11() const {
            return !(m_span11 == 0.0);
        }
        bool IncludeSpan12() const {
            return !(m_span12 == 0.0);
        }
        bool IncludeSpan13() const {
            return !(m_span13 == 0.0);
        }
        bool IncludeSpan14() const {
            return !(m_span14 == 0.0);
        }
        bool IncludeSpan15() const {
            return !(m_span15 == 0.0);
        }
        bool IncludeSpan16() const {
            return !(m_span16 == 0.0);
        }
        bool IncludeFutLiqRisk() const {
            return !(m_fut_liq_risk == 0.0);
        }
        bool IncludeOptLiqRisk() const {
            return !(m_opt_liq_risk == 0.0);
        }
        bool IncludeFcBotC0() const {
            return !(m_fc_bot_c0 == 0);
        }
        bool IncludeFcSldC0() const {
            return !(m_fc_sld_c0 == 0);
        }
        bool IncludeFcMnyC0() const {
            return !(m_fc_mny_c0 == 0.0);
        }
        bool IncludeFcBotC1() const {
            return !(m_fc_bot_c1 == 0);
        }
        bool IncludeFcSldC1() const {
            return !(m_fc_sld_c1 == 0);
        }
        bool IncludeFcMnyC1() const {
            return !(m_fc_mny_c1 == 0.0);
        }
        bool IncludeFutMargin() const {
            return !(m_fut_margin == 0.0);
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
        bool IncludeNumFutErrors() const {
            return !(m_num_fut_errors == 0);
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
            if ( IncludeLnDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(106,m_ln_ddelta);
            }
            if ( IncludeShDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(109,m_sh_ddelta);
            }
            if ( IncludeFutMktValueMid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(112,m_fut_mkt_value_mid);
            }
            if ( IncludeOptMktValueMid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(115,m_opt_mkt_value_mid);
            }
            if ( IncludeOptMktValueVol()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(118,m_opt_mkt_value_vol);
            }
            if ( IncludeFcAbsCurPos()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(121,m_fc_abs_cur_pos);
            }
            if ( IncludeFcAbsOpnClr()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(124,m_fc_abs_opn_clr);
            }
            if ( IncludeFcAbsOpnPrv()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(127,m_fc_abs_opn_prv);
            }
            if ( IncludeFcAbsOpnPos()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(130,m_fc_abs_opn_pos);
            }
            if ( IncludeFcAbsOpnBrk()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(133,m_fc_abs_opn_brk);
            }
            if ( IncludeFcNetCurPos()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(136,m_fc_net_cur_pos);
            }
            if ( IncludeFcBot()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(139,m_fc_bot);
            }
            if ( IncludeFcSld()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(142,m_fc_sld);
            }
            if ( IncludeFcBotHdg()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(145,m_fc_bot_hdg);
            }
            if ( IncludeFcSldHdg()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(148,m_fc_sld_hdg);
            }
            if ( IncludeFcBotTrh()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(151,m_fc_bot_trh);
            }
            if ( IncludeFcSldTrh()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(154,m_fc_sld_trh);
            }
            if ( IncludeFcBotOpn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(157,m_fc_bot_opn);
            }
            if ( IncludeFcSldOpn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(160,m_fc_sld_opn);
            }
            if ( IncludeFcBotTrd()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(163,m_fc_bot_trd);
            }
            if ( IncludeFcSldTrd()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(166,m_fc_sld_trd);
            }
            if ( IncludeFcMnyBot()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(169,m_fc_mny_bot);
            }
            if ( IncludeFcMnySld()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(172,m_fc_mny_sld);
            }
            if ( IncludeMaxFutDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(175, m_max_fut_dttm);
            }
            if ( IncludeFcPnlMid()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_fc_pnl_mid);
            }
            if ( IncludeFcPnlClr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(181,m_fc_pnl_clr);
            }
            if ( IncludeFcPnlDay()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(184,m_fc_pnl_day);
            }
            if ( IncludeOpCnAbsCurPos()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(187,m_op_cn_abs_cur_pos);
            }
            if ( IncludeOpCnAbsOpnClr()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(190,m_op_cn_abs_opn_clr);
            }
            if ( IncludeOpCnAbsOpnPrv()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(193,m_op_cn_abs_opn_prv);
            }
            if ( IncludeOpCnAbsOpnPos()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(196,m_op_cn_abs_opn_pos);
            }
            if ( IncludeOpCnAbsOpnBrk()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(199,m_op_cn_abs_opn_brk);
            }
            if ( IncludeOpCnPosCall()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(202,m_op_cn_pos_call);
            }
            if ( IncludeOpCnPosPut()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(205,m_op_cn_pos_put);
            }
            if ( IncludeOpCnAbsPair()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(208,m_op_cn_abs_pair);
            }
            if ( IncludeOpCnAbsAtmEquiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(211,m_op_cn_abs_atm_equiv);
            }
            if ( IncludeOpCnBot()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(214,m_op_cn_bot);
            }
            if ( IncludeOpCnSld()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(217,m_op_cn_sld);
            }
            if ( IncludeOpMnyBot()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(220,m_op_mny_bot);
            }
            if ( IncludeOpMnySld()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(223,m_op_mny_sld);
            }
            if ( IncludeOpPremBot()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(226,m_op_prem_bot);
            }
            if ( IncludeOpPremSld()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(229,m_op_prem_sld);
            }
            if ( IncludeMaxOptDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(232, m_max_opt_dttm);
            }
            if ( IncludeOpPnlVol()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(235,m_op_pnl_vol);
            }
            if ( IncludeOpPnlMid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(238,m_op_pnl_mid);
            }
            if ( IncludeOpPnlClr()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(241,m_op_pnl_clr);
            }
            if ( IncludeOpPnlBrk()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(244,m_op_pnl_brk);
            }
            if ( IncludeOpPnlDay()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(247,m_op_pnl_day);
            }
            if ( IncludeOpDnPnlDay()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(250,m_op_dn_pnl_day);
            }
            if ( IncludeOpDayVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(253,m_op_day_vega);
            }
            if ( IncludeOpDayWvega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(256,m_op_day_wvega);
            }
            if ( IncludeOpDayTvega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(259,m_op_day_tvega);
            }
            if ( IncludeOpDayWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(262,m_op_day_wt_vega);
            }
            if ( IncludeOpDayTheta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(265,m_op_day_theta);
            }
            if ( IncludeOpDayDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(268,m_op_day_delta);
            }
            if ( IncludeOpTrdDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(271,m_op_trd_delta);
            }
            if ( IncludeContHedgePnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(274,m_cont_hedge_pnl);
            }
            if ( IncludeContHedgePnl1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(277,m_cont_hedge_pnl1);
            }
            if ( IncludeOpEdgeOpened()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(280,m_op_edge_opened);
            }
            if ( IncludeOpEdgeClosed()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(283,m_op_edge_closed);
            }
            if ( IncludePnlDn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(286,m_pnl_dn);
            }
            if ( IncludePnlDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(289,m_pnl_de);
            }
            if ( IncludePnlSl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(292,m_pnl_sl);
            }
            if ( IncludePnlGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(295,m_pnl_ga);
            }
            if ( IncludePnlTh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(298,m_pnl_th);
            }
            if ( IncludePnlVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(301,m_pnl_ve);
            }
            if ( IncludePnlVo()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(304,m_pnl_vo);
            }
            if ( IncludePnlVa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(307,m_pnl_va);
            }
            if ( IncludePnlErr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(310,m_pnl_err);
            }
            if ( IncludePnlRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(313,m_pnl_rate);
            }
            if ( IncludePnlSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(316,m_pnl_sdiv);
            }
            if ( IncludePnlDdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(319,m_pnl_ddiv);
            }
            if ( IncludePnlTe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(322,m_pnl_te);
            }
            if ( IncludePctIvChange()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(325,m_pct_iv_change);
            }
            if ( IncludePctIvVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(328,m_pct_iv_vega);
            }
            if ( IncludePctTvChange()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(331,m_pct_tv_change);
            }
            if ( IncludePctTvVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(334,m_pct_tv_vega);
            }
            if ( IncludeFutWidthMny()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(337,m_fut_width_mny);
            }
            if ( IncludeOptWidthMny()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(340,m_opt_width_mny);
            }
            if ( IncludeDayDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(343,m_day_ddelta);
            }
            if ( IncludeDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(346,m_delta);
            }
            if ( IncludeDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(349,m_ddelta);
            }
            if ( IncludeDeDecay()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(352,m_de_decay);
            }
            if ( IncludeDdDecay()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(355,m_dd_decay);
            }
            if ( IncludeGamma()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(358,m_gamma);
            }
            if ( IncludeDGamma()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(361,m_d_gamma);
            }
            if ( IncludeTheta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(364,m_theta);
            }
            if ( IncludeRho()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(367,m_rho);
            }
            if ( IncludeVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(370,m_vega);
            }
            if ( IncludeTVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(373,m_t_vega);
            }
            if ( IncludeWVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(376,m_w_vega);
            }
            if ( IncludeWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(379,m_wt_vega);
            }
            if ( IncludeIvolVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(382,m_ivol_ve);
            }
            if ( IncludeVolga()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(385,m_volga);
            }
            if ( IncludeVanna()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(388,m_vanna);
            }
            if ( IncludeSlope()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(391,m_slope);
            }
            if ( IncludeAvega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(394,m_avega);
            }
            if ( IncludeAtheta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(397,m_atheta);
            }
            if ( IncludeHedgeGamma()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(400,m_hedge_gamma);
            }
            if ( IncludeHedgeDgamma()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(403,m_hedge_dgamma);
            }
            if ( IncludePremOvPar()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(406,m_prem_ov_par);
            }
            if ( IncludeWtVeDd()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(409,m_wt_ve_dd);
            }
            if ( IncludeWtVeDn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(412,m_wt_ve_dn);
            }
            if ( IncludeWtVeAt()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(415,m_wt_ve_at);
            }
            if ( IncludeWtVeUp()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(418,m_wt_ve_up);
            }
            if ( IncludeWtVeDu()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(421,m_wt_ve_du);
            }
            if ( IncludeWtVeM1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(424,m_wt_ve_m1);
            }
            if ( IncludeWtVeM2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(427,m_wt_ve_m2);
            }
            if ( IncludeWtVeM3()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(430,m_wt_ve_m3);
            }
            if ( IncludeWtVeM4()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(433,m_wt_ve_m4);
            }
            if ( IncludeWtVeM5()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(436,m_wt_ve_m5);
            }
            if ( IncludeOpnDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(439,m_opn_delta);
            }
            if ( IncludeOpnDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(442,m_opn_ddelta);
            }
            if ( IncludePosDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(445,m_pos_delta);
            }
            if ( IncludePosDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(448,m_pos_ddelta);
            }
            if ( IncludePinXx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(581,m_pin_xx);
            }
            if ( IncludeOpnDeBelow()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(582,m_opn_de_below);
            }
            if ( IncludeOpnDeAbove()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(583,m_opn_de_above);
            }
            if ( IncludeOpnDdeBelow()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(584,m_opn_dde_below);
            }
            if ( IncludeOpnDdeAbove()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(585,m_opn_dde_above);
            }
            if ( IncludePosDeBelow()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(586,m_pos_de_below);
            }
            if ( IncludePosDeAbove()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(587,m_pos_de_above);
            }
            if ( IncludePosDdeBelow()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(588,m_pos_dde_below);
            }
            if ( IncludePosDdeAbove()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(589,m_pos_dde_above);
            }
            if ( IncludePosHedgeDeltaEx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(451,m_pos_hedge_delta_ex);
            }
            if ( IncludePosHedgeDdeltaEx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(454,m_pos_hedge_ddelta_ex);
            }
            if ( IncludeTEdge()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(457,m_t_edge);
            }
            if ( IncludeTEdgeMult()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(460,m_t_edge_mult);
            }
            if ( IncludeTEdgePr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(463,m_t_edge_pr);
            }
            if ( IncludeTEdgeMultPr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(466,m_t_edge_mult_pr);
            }
            if ( IncludeNumTvolErrors()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(469,m_num_tvol_errors);
            }
            if ( IncludePairPnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(472,m_pair_pnl);
            }
            if ( IncludePosTedgeWv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(475,m_pos_tedge_wv);
            }
            if ( IncludeNegTedgeWv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(478,m_neg_tedge_wv);
            }
            if ( IncludeBadTedgeWv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(481,m_bad_tedge_wv);
            }
            if ( IncludePosTedgePnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(484,m_pos_tedge_pnl);
            }
            if ( IncludeNegTedgePnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(487,m_neg_tedge_pnl);
            }
            if ( IncludeBadTedgePnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(490,m_bad_tedge_pnl);
            }
            if ( IncludeSpan01()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(493,m_span01);
            }
            if ( IncludeSpan02()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(496,m_span02);
            }
            if ( IncludeSpan03()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(499,m_span03);
            }
            if ( IncludeSpan04()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(502,m_span04);
            }
            if ( IncludeSpan05()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(505,m_span05);
            }
            if ( IncludeSpan06()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(508,m_span06);
            }
            if ( IncludeSpan07()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(511,m_span07);
            }
            if ( IncludeSpan08()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(514,m_span08);
            }
            if ( IncludeSpan09()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(517,m_span09);
            }
            if ( IncludeSpan10()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(520,m_span10);
            }
            if ( IncludeSpan11()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(523,m_span11);
            }
            if ( IncludeSpan12()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(526,m_span12);
            }
            if ( IncludeSpan13()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(529,m_span13);
            }
            if ( IncludeSpan14()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(532,m_span14);
            }
            if ( IncludeSpan15()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(535,m_span15);
            }
            if ( IncludeSpan16()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(538,m_span16);
            }
            if ( IncludeFutLiqRisk()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(541,m_fut_liq_risk);
            }
            if ( IncludeOptLiqRisk()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(544,m_opt_liq_risk);
            }
            if ( IncludeFcBotC0()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(547,m_fc_bot_c0);
            }
            if ( IncludeFcSldC0()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(550,m_fc_sld_c0);
            }
            if ( IncludeFcMnyC0()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(553,m_fc_mny_c0);
            }
            if ( IncludeFcBotC1()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(556,m_fc_bot_c1);
            }
            if ( IncludeFcSldC1()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(559,m_fc_sld_c1);
            }
            if ( IncludeFcMnyC1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(562,m_fc_mny_c1);
            }
            if ( IncludeFutMargin()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(565,m_fut_margin);
            }
            if ( IncludeMarginUdnVdn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(590,m_margin_udn_vdn);
            }
            if ( IncludeMarginUdnVup()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(591,m_margin_udn_vup);
            }
            if ( IncludeMarginUupVdn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(592,m_margin_uup_vdn);
            }
            if ( IncludeMarginUupVup()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(593,m_margin_uup_vup);
            }
            if ( IncludeNumFutErrors()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(568,m_num_fut_errors);
            }
            if ( IncludeNumOptErrors()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(571,m_num_opt_errors);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(574,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktErrFlag>(m_fut_mark_flag)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(577,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktErrFlag>(m_opt_mark_flag)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(580, m_timestamp);
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
            if ( IncludeLnDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,106,m_ln_ddelta);
            }
            if ( IncludeShDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,109,m_sh_ddelta);
            }
            if ( IncludeFutMktValueMid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,112,m_fut_mkt_value_mid);
            }
            if ( IncludeOptMktValueMid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,115,m_opt_mkt_value_mid);
            }
            if ( IncludeOptMktValueVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,118,m_opt_mkt_value_vol);
            }
            if ( IncludeFcAbsCurPos()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,121,m_fc_abs_cur_pos);
            }
            if ( IncludeFcAbsOpnClr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,124,m_fc_abs_opn_clr);
            }
            if ( IncludeFcAbsOpnPrv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,127,m_fc_abs_opn_prv);
            }
            if ( IncludeFcAbsOpnPos()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,130,m_fc_abs_opn_pos);
            }
            if ( IncludeFcAbsOpnBrk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,133,m_fc_abs_opn_brk);
            }
            if ( IncludeFcNetCurPos()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,136,m_fc_net_cur_pos);
            }
            if ( IncludeFcBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,139,m_fc_bot);
            }
            if ( IncludeFcSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,142,m_fc_sld);
            }
            if ( IncludeFcBotHdg()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,145,m_fc_bot_hdg);
            }
            if ( IncludeFcSldHdg()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,148,m_fc_sld_hdg);
            }
            if ( IncludeFcBotTrh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,151,m_fc_bot_trh);
            }
            if ( IncludeFcSldTrh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,154,m_fc_sld_trh);
            }
            if ( IncludeFcBotOpn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,157,m_fc_bot_opn);
            }
            if ( IncludeFcSldOpn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,160,m_fc_sld_opn);
            }
            if ( IncludeFcBotTrd()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,163,m_fc_bot_trd);
            }
            if ( IncludeFcSldTrd()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,166,m_fc_sld_trd);
            }
            if ( IncludeFcMnyBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,169,m_fc_mny_bot);
            }
            if ( IncludeFcMnySld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,172,m_fc_mny_sld);
            }
            if ( IncludeMaxFutDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 175, m_max_fut_dttm);
            }
            if ( IncludeFcPnlMid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_fc_pnl_mid);
            }
            if ( IncludeFcPnlClr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,181,m_fc_pnl_clr);
            }
            if ( IncludeFcPnlDay()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,184,m_fc_pnl_day);
            }
            if ( IncludeOpCnAbsCurPos()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,187,m_op_cn_abs_cur_pos);
            }
            if ( IncludeOpCnAbsOpnClr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,190,m_op_cn_abs_opn_clr);
            }
            if ( IncludeOpCnAbsOpnPrv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,193,m_op_cn_abs_opn_prv);
            }
            if ( IncludeOpCnAbsOpnPos()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,196,m_op_cn_abs_opn_pos);
            }
            if ( IncludeOpCnAbsOpnBrk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,199,m_op_cn_abs_opn_brk);
            }
            if ( IncludeOpCnPosCall()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,202,m_op_cn_pos_call);
            }
            if ( IncludeOpCnPosPut()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,205,m_op_cn_pos_put);
            }
            if ( IncludeOpCnAbsPair()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,208,m_op_cn_abs_pair);
            }
            if ( IncludeOpCnAbsAtmEquiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,211,m_op_cn_abs_atm_equiv);
            }
            if ( IncludeOpCnBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,214,m_op_cn_bot);
            }
            if ( IncludeOpCnSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,217,m_op_cn_sld);
            }
            if ( IncludeOpMnyBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,220,m_op_mny_bot);
            }
            if ( IncludeOpMnySld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,223,m_op_mny_sld);
            }
            if ( IncludeOpPremBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,226,m_op_prem_bot);
            }
            if ( IncludeOpPremSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,229,m_op_prem_sld);
            }
            if ( IncludeMaxOptDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 232, m_max_opt_dttm);
            }
            if ( IncludeOpPnlVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,235,m_op_pnl_vol);
            }
            if ( IncludeOpPnlMid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,238,m_op_pnl_mid);
            }
            if ( IncludeOpPnlClr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,241,m_op_pnl_clr);
            }
            if ( IncludeOpPnlBrk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,244,m_op_pnl_brk);
            }
            if ( IncludeOpPnlDay()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,247,m_op_pnl_day);
            }
            if ( IncludeOpDnPnlDay()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,250,m_op_dn_pnl_day);
            }
            if ( IncludeOpDayVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,253,m_op_day_vega);
            }
            if ( IncludeOpDayWvega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,256,m_op_day_wvega);
            }
            if ( IncludeOpDayTvega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,259,m_op_day_tvega);
            }
            if ( IncludeOpDayWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,262,m_op_day_wt_vega);
            }
            if ( IncludeOpDayTheta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,265,m_op_day_theta);
            }
            if ( IncludeOpDayDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,268,m_op_day_delta);
            }
            if ( IncludeOpTrdDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,271,m_op_trd_delta);
            }
            if ( IncludeContHedgePnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,274,m_cont_hedge_pnl);
            }
            if ( IncludeContHedgePnl1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,277,m_cont_hedge_pnl1);
            }
            if ( IncludeOpEdgeOpened()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,280,m_op_edge_opened);
            }
            if ( IncludeOpEdgeClosed()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,283,m_op_edge_closed);
            }
            if ( IncludePnlDn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,286,m_pnl_dn);
            }
            if ( IncludePnlDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,289,m_pnl_de);
            }
            if ( IncludePnlSl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,292,m_pnl_sl);
            }
            if ( IncludePnlGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,295,m_pnl_ga);
            }
            if ( IncludePnlTh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,298,m_pnl_th);
            }
            if ( IncludePnlVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,301,m_pnl_ve);
            }
            if ( IncludePnlVo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,304,m_pnl_vo);
            }
            if ( IncludePnlVa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,307,m_pnl_va);
            }
            if ( IncludePnlErr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,310,m_pnl_err);
            }
            if ( IncludePnlRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,313,m_pnl_rate);
            }
            if ( IncludePnlSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,316,m_pnl_sdiv);
            }
            if ( IncludePnlDdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,319,m_pnl_ddiv);
            }
            if ( IncludePnlTe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,322,m_pnl_te);
            }
            if ( IncludePctIvChange()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,325,m_pct_iv_change);
            }
            if ( IncludePctIvVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,328,m_pct_iv_vega);
            }
            if ( IncludePctTvChange()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,331,m_pct_tv_change);
            }
            if ( IncludePctTvVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,334,m_pct_tv_vega);
            }
            if ( IncludeFutWidthMny()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,337,m_fut_width_mny);
            }
            if ( IncludeOptWidthMny()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,340,m_opt_width_mny);
            }
            if ( IncludeDayDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,343,m_day_ddelta);
            }
            if ( IncludeDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,346,m_delta);
            }
            if ( IncludeDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,349,m_ddelta);
            }
            if ( IncludeDeDecay()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,352,m_de_decay);
            }
            if ( IncludeDdDecay()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,355,m_dd_decay);
            }
            if ( IncludeGamma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,358,m_gamma);
            }
            if ( IncludeDGamma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,361,m_d_gamma);
            }
            if ( IncludeTheta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,364,m_theta);
            }
            if ( IncludeRho()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,367,m_rho);
            }
            if ( IncludeVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,370,m_vega);
            }
            if ( IncludeTVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,373,m_t_vega);
            }
            if ( IncludeWVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,376,m_w_vega);
            }
            if ( IncludeWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,379,m_wt_vega);
            }
            if ( IncludeIvolVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,382,m_ivol_ve);
            }
            if ( IncludeVolga()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,385,m_volga);
            }
            if ( IncludeVanna()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,388,m_vanna);
            }
            if ( IncludeSlope()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,391,m_slope);
            }
            if ( IncludeAvega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,394,m_avega);
            }
            if ( IncludeAtheta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,397,m_atheta);
            }
            if ( IncludeHedgeGamma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,400,m_hedge_gamma);
            }
            if ( IncludeHedgeDgamma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,403,m_hedge_dgamma);
            }
            if ( IncludePremOvPar()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,406,m_prem_ov_par);
            }
            if ( IncludeWtVeDd()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,409,m_wt_ve_dd);
            }
            if ( IncludeWtVeDn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,412,m_wt_ve_dn);
            }
            if ( IncludeWtVeAt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,415,m_wt_ve_at);
            }
            if ( IncludeWtVeUp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,418,m_wt_ve_up);
            }
            if ( IncludeWtVeDu()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,421,m_wt_ve_du);
            }
            if ( IncludeWtVeM1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,424,m_wt_ve_m1);
            }
            if ( IncludeWtVeM2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,427,m_wt_ve_m2);
            }
            if ( IncludeWtVeM3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,430,m_wt_ve_m3);
            }
            if ( IncludeWtVeM4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,433,m_wt_ve_m4);
            }
            if ( IncludeWtVeM5()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,436,m_wt_ve_m5);
            }
            if ( IncludeOpnDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,439,m_opn_delta);
            }
            if ( IncludeOpnDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,442,m_opn_ddelta);
            }
            if ( IncludePosDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,445,m_pos_delta);
            }
            if ( IncludePosDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,448,m_pos_ddelta);
            }
            if ( IncludePinXx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,581,m_pin_xx);
            }
            if ( IncludeOpnDeBelow()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,582,m_opn_de_below);
            }
            if ( IncludeOpnDeAbove()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,583,m_opn_de_above);
            }
            if ( IncludeOpnDdeBelow()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,584,m_opn_dde_below);
            }
            if ( IncludeOpnDdeAbove()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,585,m_opn_dde_above);
            }
            if ( IncludePosDeBelow()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,586,m_pos_de_below);
            }
            if ( IncludePosDeAbove()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,587,m_pos_de_above);
            }
            if ( IncludePosDdeBelow()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,588,m_pos_dde_below);
            }
            if ( IncludePosDdeAbove()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,589,m_pos_dde_above);
            }
            if ( IncludePosHedgeDeltaEx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,451,m_pos_hedge_delta_ex);
            }
            if ( IncludePosHedgeDdeltaEx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,454,m_pos_hedge_ddelta_ex);
            }
            if ( IncludeTEdge()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,457,m_t_edge);
            }
            if ( IncludeTEdgeMult()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,460,m_t_edge_mult);
            }
            if ( IncludeTEdgePr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,463,m_t_edge_pr);
            }
            if ( IncludeTEdgeMultPr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,466,m_t_edge_mult_pr);
            }
            if ( IncludeNumTvolErrors()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,469,m_num_tvol_errors);
            }
            if ( IncludePairPnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,472,m_pair_pnl);
            }
            if ( IncludePosTedgeWv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,475,m_pos_tedge_wv);
            }
            if ( IncludeNegTedgeWv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,478,m_neg_tedge_wv);
            }
            if ( IncludeBadTedgeWv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,481,m_bad_tedge_wv);
            }
            if ( IncludePosTedgePnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,484,m_pos_tedge_pnl);
            }
            if ( IncludeNegTedgePnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,487,m_neg_tedge_pnl);
            }
            if ( IncludeBadTedgePnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,490,m_bad_tedge_pnl);
            }
            if ( IncludeSpan01()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,493,m_span01);
            }
            if ( IncludeSpan02()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,496,m_span02);
            }
            if ( IncludeSpan03()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,499,m_span03);
            }
            if ( IncludeSpan04()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,502,m_span04);
            }
            if ( IncludeSpan05()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,505,m_span05);
            }
            if ( IncludeSpan06()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,508,m_span06);
            }
            if ( IncludeSpan07()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,511,m_span07);
            }
            if ( IncludeSpan08()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,514,m_span08);
            }
            if ( IncludeSpan09()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,517,m_span09);
            }
            if ( IncludeSpan10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,520,m_span10);
            }
            if ( IncludeSpan11()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,523,m_span11);
            }
            if ( IncludeSpan12()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,526,m_span12);
            }
            if ( IncludeSpan13()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,529,m_span13);
            }
            if ( IncludeSpan14()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,532,m_span14);
            }
            if ( IncludeSpan15()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,535,m_span15);
            }
            if ( IncludeSpan16()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,538,m_span16);
            }
            if ( IncludeFutLiqRisk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,541,m_fut_liq_risk);
            }
            if ( IncludeOptLiqRisk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,544,m_opt_liq_risk);
            }
            if ( IncludeFcBotC0()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,547,m_fc_bot_c0);
            }
            if ( IncludeFcSldC0()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,550,m_fc_sld_c0);
            }
            if ( IncludeFcMnyC0()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,553,m_fc_mny_c0);
            }
            if ( IncludeFcBotC1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,556,m_fc_bot_c1);
            }
            if ( IncludeFcSldC1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,559,m_fc_sld_c1);
            }
            if ( IncludeFcMnyC1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,562,m_fc_mny_c1);
            }
            if ( IncludeFutMargin()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,565,m_fut_margin);
            }
            if ( IncludeMarginUdnVdn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,590,m_margin_udn_vdn);
            }
            if ( IncludeMarginUdnVup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,591,m_margin_udn_vup);
            }
            if ( IncludeMarginUupVdn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,592,m_margin_uup_vdn);
            }
            if ( IncludeMarginUupVup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,593,m_margin_uup_vup);
            }
            if ( IncludeNumFutErrors()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,568,m_num_fut_errors);
            }
            if ( IncludeNumOptErrors()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,571,m_num_opt_errors);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,574,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktErrFlag>(m_fut_mark_flag)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,577,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktErrFlag>(m_opt_mark_flag)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 580, m_timestamp);
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
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ln_ddelta = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_sh_ddelta = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fut_mkt_value_mid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_opt_mkt_value_mid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_opt_mkt_value_vol = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fc_abs_cur_pos = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fc_abs_opn_clr = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fc_abs_opn_prv = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fc_abs_opn_pos = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fc_abs_opn_brk = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fc_net_cur_pos = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fc_bot = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fc_sld = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fc_bot_hdg = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fc_sld_hdg = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fc_bot_trh = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fc_sld_trh = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fc_bot_opn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fc_sld_opn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fc_bot_trd = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fc_sld_trd = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fc_mny_bot = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fc_mny_sld = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_max_fut_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fc_pnl_mid = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fc_pnl_clr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fc_pnl_day = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_op_cn_abs_cur_pos = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_op_cn_abs_opn_clr = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_op_cn_abs_opn_prv = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_op_cn_abs_opn_pos = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_op_cn_abs_opn_brk = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_op_cn_pos_call = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_op_cn_pos_put = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_op_cn_abs_pair = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_cn_abs_atm_equiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_op_cn_bot = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_op_cn_sld = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_op_mny_bot = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_op_mny_sld = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 226: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_prem_bot = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 229: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_prem_sld = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 232: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_max_opt_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_op_pnl_vol = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 238: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_op_pnl_mid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 241: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_op_pnl_clr = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 244: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_pnl_brk = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 247: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_pnl_day = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 250: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_dn_pnl_day = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 253: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_day_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 256: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_day_wvega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 259: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_day_tvega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 262: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_day_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 265: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_day_theta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 268: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_day_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 271: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_trd_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 274: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cont_hedge_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 277: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cont_hedge_pnl1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 280: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_edge_opened = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 283: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_edge_closed = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 286: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_dn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 289: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 292: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_sl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 295: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 298: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_th = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 301: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 304: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_vo = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 307: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_va = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 310: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_err = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 313: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 316: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 319: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_ddiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 322: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_te = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 325: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pct_iv_change = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 328: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pct_iv_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 331: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pct_tv_change = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 334: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pct_tv_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 337: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fut_width_mny = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 340: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opt_width_mny = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 343: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_ddelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 346: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 349: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ddelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 352: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_de_decay = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 355: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_dd_decay = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 358: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_gamma = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 361: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_d_gamma = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 364: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_theta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 367: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rho = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 370: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 373: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 376: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_w_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 379: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 382: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ivol_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 385: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_volga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 388: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vanna = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 391: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_slope = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 394: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_avega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 397: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atheta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 400: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_hedge_gamma = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 403: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_hedge_dgamma = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 406: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prem_ov_par = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 409: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_dd = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 412: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_dn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 415: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_at = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 418: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_up = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 421: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_du = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 424: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_m1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 427: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_m2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 430: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_m3 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 433: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_m4 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 436: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_m5 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 439: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 442: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_ddelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 445: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 448: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_ddelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 581: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pin_xx = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 582: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_de_below = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 583: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_de_above = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 584: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_dde_below = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 585: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_dde_above = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 586: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_de_below = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 587: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_de_above = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 588: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_dde_below = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 589: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_dde_above = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 451: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_hedge_delta_ex = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 454: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_hedge_ddelta_ex = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 457: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_edge = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 460: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_edge_mult = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 463: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_edge_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 466: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_edge_mult_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 469: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_tvol_errors = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 472: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pair_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 475: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_tedge_wv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 478: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_neg_tedge_wv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 481: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bad_tedge_wv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 484: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_tedge_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 487: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_neg_tedge_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 490: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bad_tedge_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 493: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span01 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 496: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span02 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 499: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span03 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 502: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span04 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 505: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span05 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 508: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span06 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 511: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span07 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 514: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span08 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 517: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span09 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 520: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span10 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 523: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span11 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 526: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span12 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 529: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span13 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 532: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span14 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 535: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span15 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 538: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span16 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 541: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fut_liq_risk = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 544: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opt_liq_risk = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 547: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fc_bot_c0 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 550: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fc_sld_c0 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 553: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fc_mny_c0 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 556: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fc_bot_c1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 559: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fc_sld_c1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 562: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fc_mny_c1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 565: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fut_margin = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 590: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_udn_vdn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 591: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_udn_vup = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 592: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_uup_vdn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 593: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_uup_vup = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 568: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_fut_errors = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 571: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_opt_errors = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 574: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_fut_mark_flag = static_cast<spiderrock::protobuf::api::MktErrFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 577: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_opt_mark_flag = static_cast<spiderrock::protobuf::api::MktErrFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 580: {
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

    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::_meta>() const { return ProductRiskSummaryV5::_meta{ m__meta}; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pkey>() const { return ProductRiskSummaryV5::pkey{ m_pkey}; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::ln_ddelta>() const { return m_ln_ddelta; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::sh_ddelta>() const { return m_sh_ddelta; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fut_mkt_value_mid>() const { return m_fut_mkt_value_mid; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::opt_mkt_value_mid>() const { return m_opt_mkt_value_mid; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::opt_mkt_value_vol>() const { return m_opt_mkt_value_vol; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fc_abs_cur_pos>() const { return m_fc_abs_cur_pos; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fc_abs_opn_clr>() const { return m_fc_abs_opn_clr; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fc_abs_opn_prv>() const { return m_fc_abs_opn_prv; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fc_abs_opn_pos>() const { return m_fc_abs_opn_pos; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fc_abs_opn_brk>() const { return m_fc_abs_opn_brk; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fc_net_cur_pos>() const { return m_fc_net_cur_pos; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fc_bot>() const { return m_fc_bot; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fc_sld>() const { return m_fc_sld; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fc_bot_hdg>() const { return m_fc_bot_hdg; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fc_sld_hdg>() const { return m_fc_sld_hdg; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fc_bot_trh>() const { return m_fc_bot_trh; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fc_sld_trh>() const { return m_fc_sld_trh; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fc_bot_opn>() const { return m_fc_bot_opn; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fc_sld_opn>() const { return m_fc_sld_opn; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fc_bot_trd>() const { return m_fc_bot_trd; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fc_sld_trd>() const { return m_fc_sld_trd; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fc_mny_bot>() const { return m_fc_mny_bot; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fc_mny_sld>() const { return m_fc_mny_sld; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::max_fut_dttm>() const { return m_max_fut_dttm; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fc_pnl_mid>() const { return m_fc_pnl_mid; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fc_pnl_clr>() const { return m_fc_pnl_clr; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fc_pnl_day>() const { return m_fc_pnl_day; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_cn_abs_cur_pos>() const { return m_op_cn_abs_cur_pos; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_cn_abs_opn_clr>() const { return m_op_cn_abs_opn_clr; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_cn_abs_opn_prv>() const { return m_op_cn_abs_opn_prv; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_cn_abs_opn_pos>() const { return m_op_cn_abs_opn_pos; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_cn_abs_opn_brk>() const { return m_op_cn_abs_opn_brk; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_cn_pos_call>() const { return m_op_cn_pos_call; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_cn_pos_put>() const { return m_op_cn_pos_put; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_cn_abs_pair>() const { return m_op_cn_abs_pair; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_cn_abs_atm_equiv>() const { return m_op_cn_abs_atm_equiv; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_cn_bot>() const { return m_op_cn_bot; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_cn_sld>() const { return m_op_cn_sld; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_mny_bot>() const { return m_op_mny_bot; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_mny_sld>() const { return m_op_mny_sld; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_prem_bot>() const { return m_op_prem_bot; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_prem_sld>() const { return m_op_prem_sld; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::max_opt_dttm>() const { return m_max_opt_dttm; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_pnl_vol>() const { return m_op_pnl_vol; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_pnl_mid>() const { return m_op_pnl_mid; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_pnl_clr>() const { return m_op_pnl_clr; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_pnl_brk>() const { return m_op_pnl_brk; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_pnl_day>() const { return m_op_pnl_day; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_dn_pnl_day>() const { return m_op_dn_pnl_day; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_day_vega>() const { return m_op_day_vega; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_day_wvega>() const { return m_op_day_wvega; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_day_tvega>() const { return m_op_day_tvega; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_day_wt_vega>() const { return m_op_day_wt_vega; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_day_theta>() const { return m_op_day_theta; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_day_delta>() const { return m_op_day_delta; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_trd_delta>() const { return m_op_trd_delta; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::cont_hedge_pnl>() const { return m_cont_hedge_pnl; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::cont_hedge_pnl1>() const { return m_cont_hedge_pnl1; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_edge_opened>() const { return m_op_edge_opened; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::op_edge_closed>() const { return m_op_edge_closed; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pnl_dn>() const { return m_pnl_dn; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pnl_de>() const { return m_pnl_de; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pnl_sl>() const { return m_pnl_sl; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pnl_ga>() const { return m_pnl_ga; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pnl_th>() const { return m_pnl_th; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pnl_ve>() const { return m_pnl_ve; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pnl_vo>() const { return m_pnl_vo; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pnl_va>() const { return m_pnl_va; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pnl_err>() const { return m_pnl_err; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pnl_rate>() const { return m_pnl_rate; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pnl_sdiv>() const { return m_pnl_sdiv; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pnl_ddiv>() const { return m_pnl_ddiv; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pnl_te>() const { return m_pnl_te; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pct_iv_change>() const { return m_pct_iv_change; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pct_iv_vega>() const { return m_pct_iv_vega; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pct_tv_change>() const { return m_pct_tv_change; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pct_tv_vega>() const { return m_pct_tv_vega; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fut_width_mny>() const { return m_fut_width_mny; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::opt_width_mny>() const { return m_opt_width_mny; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::day_ddelta>() const { return m_day_ddelta; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::delta>() const { return m_delta; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::ddelta>() const { return m_ddelta; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::de_decay>() const { return m_de_decay; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::dd_decay>() const { return m_dd_decay; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::gamma>() const { return m_gamma; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::d_gamma>() const { return m_d_gamma; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::theta>() const { return m_theta; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::rho>() const { return m_rho; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::vega>() const { return m_vega; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::t_vega>() const { return m_t_vega; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::w_vega>() const { return m_w_vega; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::wt_vega>() const { return m_wt_vega; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::ivol_ve>() const { return m_ivol_ve; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::volga>() const { return m_volga; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::vanna>() const { return m_vanna; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::slope>() const { return m_slope; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::avega>() const { return m_avega; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::atheta>() const { return m_atheta; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::hedge_gamma>() const { return m_hedge_gamma; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::hedge_dgamma>() const { return m_hedge_dgamma; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::prem_ov_par>() const { return m_prem_ov_par; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::wt_ve_dd>() const { return m_wt_ve_dd; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::wt_ve_dn>() const { return m_wt_ve_dn; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::wt_ve_at>() const { return m_wt_ve_at; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::wt_ve_up>() const { return m_wt_ve_up; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::wt_ve_du>() const { return m_wt_ve_du; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::wt_ve_m1>() const { return m_wt_ve_m1; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::wt_ve_m2>() const { return m_wt_ve_m2; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::wt_ve_m3>() const { return m_wt_ve_m3; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::wt_ve_m4>() const { return m_wt_ve_m4; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::wt_ve_m5>() const { return m_wt_ve_m5; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::opn_delta>() const { return m_opn_delta; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::opn_ddelta>() const { return m_opn_ddelta; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pos_delta>() const { return m_pos_delta; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pos_ddelta>() const { return m_pos_ddelta; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pin_xx>() const { return m_pin_xx; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::opn_de_below>() const { return m_opn_de_below; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::opn_de_above>() const { return m_opn_de_above; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::opn_dde_below>() const { return m_opn_dde_below; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::opn_dde_above>() const { return m_opn_dde_above; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pos_de_below>() const { return m_pos_de_below; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pos_de_above>() const { return m_pos_de_above; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pos_dde_below>() const { return m_pos_dde_below; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pos_dde_above>() const { return m_pos_dde_above; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pos_hedge_delta_ex>() const { return m_pos_hedge_delta_ex; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pos_hedge_ddelta_ex>() const { return m_pos_hedge_ddelta_ex; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::t_edge>() const { return m_t_edge; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::t_edge_mult>() const { return m_t_edge_mult; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::t_edge_pr>() const { return m_t_edge_pr; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::t_edge_mult_pr>() const { return m_t_edge_mult_pr; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::num_tvol_errors>() const { return m_num_tvol_errors; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pair_pnl>() const { return m_pair_pnl; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pos_tedge_wv>() const { return m_pos_tedge_wv; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::neg_tedge_wv>() const { return m_neg_tedge_wv; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::bad_tedge_wv>() const { return m_bad_tedge_wv; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::pos_tedge_pnl>() const { return m_pos_tedge_pnl; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::neg_tedge_pnl>() const { return m_neg_tedge_pnl; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::bad_tedge_pnl>() const { return m_bad_tedge_pnl; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::span01>() const { return m_span01; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::span02>() const { return m_span02; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::span03>() const { return m_span03; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::span04>() const { return m_span04; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::span05>() const { return m_span05; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::span06>() const { return m_span06; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::span07>() const { return m_span07; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::span08>() const { return m_span08; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::span09>() const { return m_span09; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::span10>() const { return m_span10; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::span11>() const { return m_span11; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::span12>() const { return m_span12; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::span13>() const { return m_span13; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::span14>() const { return m_span14; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::span15>() const { return m_span15; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::span16>() const { return m_span16; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fut_liq_risk>() const { return m_fut_liq_risk; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::opt_liq_risk>() const { return m_opt_liq_risk; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fc_bot_c0>() const { return m_fc_bot_c0; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fc_sld_c0>() const { return m_fc_sld_c0; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fc_mny_c0>() const { return m_fc_mny_c0; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fc_bot_c1>() const { return m_fc_bot_c1; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fc_sld_c1>() const { return m_fc_sld_c1; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fc_mny_c1>() const { return m_fc_mny_c1; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fut_margin>() const { return m_fut_margin; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::margin_udn_vdn>() const { return m_margin_udn_vdn; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::margin_udn_vup>() const { return m_margin_udn_vup; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::margin_uup_vdn>() const { return m_margin_uup_vdn; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::margin_uup_vup>() const { return m_margin_uup_vup; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::num_fut_errors>() const { return m_num_fut_errors; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::num_opt_errors>() const { return m_num_opt_errors; }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::fut_mark_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktErrFlag>( m_fut_mark_flag)); }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::opt_mark_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktErrFlag>( m_opt_mark_flag)); }
    template<> inline const auto ProductRiskSummaryV5::get<ProductRiskSummaryV5::timestamp>() const { return m_timestamp; }
    template<> inline const auto ProductRiskSummaryV5_PKey::get<ProductRiskSummaryV5_PKey::ticker>() const { return ProductRiskSummaryV5_PKey::ticker{m_ticker}; }
    template<> inline const auto ProductRiskSummaryV5_PKey::get<ProductRiskSummaryV5_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto ProductRiskSummaryV5_PKey::get<ProductRiskSummaryV5_PKey::trade_date>() const { return ProductRiskSummaryV5_PKey::trade_date{m_trade_date}; }
    template<> inline const auto ProductRiskSummaryV5_PKey::get<ProductRiskSummaryV5_PKey::risk_session>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskSession>(m_risk_session));}
    template<> inline const auto ProductRiskSummaryV5_PKey::get<ProductRiskSummaryV5_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const ProductRiskSummaryV5_PKey& m) {
        o << "\"ticker\":{" << m.get<ProductRiskSummaryV5_PKey::ticker>() << "}";
        o << ",\"accnt\":\"" << m.get<ProductRiskSummaryV5_PKey::accnt>() << "\"";
        o << ",\"trade_date\":{" << m.get<ProductRiskSummaryV5_PKey::trade_date>() << "}";
        o << ",\"risk_session\":" << (int64_t)m.get<ProductRiskSummaryV5_PKey::risk_session>();
        o << ",\"client_firm\":\"" << m.get<ProductRiskSummaryV5_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const ProductRiskSummaryV5& m) {
        o << "\"_meta\":{" << m.get<ProductRiskSummaryV5::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<ProductRiskSummaryV5::pkey>() << "}";
        o << ",\"ln_ddelta\":" << m.get<ProductRiskSummaryV5::ln_ddelta>();
        o << ",\"sh_ddelta\":" << m.get<ProductRiskSummaryV5::sh_ddelta>();
        o << ",\"fut_mkt_value_mid\":" << m.get<ProductRiskSummaryV5::fut_mkt_value_mid>();
        o << ",\"opt_mkt_value_mid\":" << m.get<ProductRiskSummaryV5::opt_mkt_value_mid>();
        o << ",\"opt_mkt_value_vol\":" << m.get<ProductRiskSummaryV5::opt_mkt_value_vol>();
        o << ",\"fc_abs_cur_pos\":" << m.get<ProductRiskSummaryV5::fc_abs_cur_pos>();
        o << ",\"fc_abs_opn_clr\":" << m.get<ProductRiskSummaryV5::fc_abs_opn_clr>();
        o << ",\"fc_abs_opn_prv\":" << m.get<ProductRiskSummaryV5::fc_abs_opn_prv>();
        o << ",\"fc_abs_opn_pos\":" << m.get<ProductRiskSummaryV5::fc_abs_opn_pos>();
        o << ",\"fc_abs_opn_brk\":" << m.get<ProductRiskSummaryV5::fc_abs_opn_brk>();
        o << ",\"fc_net_cur_pos\":" << m.get<ProductRiskSummaryV5::fc_net_cur_pos>();
        o << ",\"fc_bot\":" << m.get<ProductRiskSummaryV5::fc_bot>();
        o << ",\"fc_sld\":" << m.get<ProductRiskSummaryV5::fc_sld>();
        o << ",\"fc_bot_hdg\":" << m.get<ProductRiskSummaryV5::fc_bot_hdg>();
        o << ",\"fc_sld_hdg\":" << m.get<ProductRiskSummaryV5::fc_sld_hdg>();
        o << ",\"fc_bot_trh\":" << m.get<ProductRiskSummaryV5::fc_bot_trh>();
        o << ",\"fc_sld_trh\":" << m.get<ProductRiskSummaryV5::fc_sld_trh>();
        o << ",\"fc_bot_opn\":" << m.get<ProductRiskSummaryV5::fc_bot_opn>();
        o << ",\"fc_sld_opn\":" << m.get<ProductRiskSummaryV5::fc_sld_opn>();
        o << ",\"fc_bot_trd\":" << m.get<ProductRiskSummaryV5::fc_bot_trd>();
        o << ",\"fc_sld_trd\":" << m.get<ProductRiskSummaryV5::fc_sld_trd>();
        o << ",\"fc_mny_bot\":" << m.get<ProductRiskSummaryV5::fc_mny_bot>();
        o << ",\"fc_mny_sld\":" << m.get<ProductRiskSummaryV5::fc_mny_sld>();
        {
            std::time_t tt = m.get<ProductRiskSummaryV5::max_fut_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"max_fut_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"fc_pnl_mid\":" << m.get<ProductRiskSummaryV5::fc_pnl_mid>();
        o << ",\"fc_pnl_clr\":" << m.get<ProductRiskSummaryV5::fc_pnl_clr>();
        o << ",\"fc_pnl_day\":" << m.get<ProductRiskSummaryV5::fc_pnl_day>();
        o << ",\"op_cn_abs_cur_pos\":" << m.get<ProductRiskSummaryV5::op_cn_abs_cur_pos>();
        o << ",\"op_cn_abs_opn_clr\":" << m.get<ProductRiskSummaryV5::op_cn_abs_opn_clr>();
        o << ",\"op_cn_abs_opn_prv\":" << m.get<ProductRiskSummaryV5::op_cn_abs_opn_prv>();
        o << ",\"op_cn_abs_opn_pos\":" << m.get<ProductRiskSummaryV5::op_cn_abs_opn_pos>();
        o << ",\"op_cn_abs_opn_brk\":" << m.get<ProductRiskSummaryV5::op_cn_abs_opn_brk>();
        o << ",\"op_cn_pos_call\":" << m.get<ProductRiskSummaryV5::op_cn_pos_call>();
        o << ",\"op_cn_pos_put\":" << m.get<ProductRiskSummaryV5::op_cn_pos_put>();
        o << ",\"op_cn_abs_pair\":" << m.get<ProductRiskSummaryV5::op_cn_abs_pair>();
        o << ",\"op_cn_abs_atm_equiv\":" << m.get<ProductRiskSummaryV5::op_cn_abs_atm_equiv>();
        o << ",\"op_cn_bot\":" << m.get<ProductRiskSummaryV5::op_cn_bot>();
        o << ",\"op_cn_sld\":" << m.get<ProductRiskSummaryV5::op_cn_sld>();
        o << ",\"op_mny_bot\":" << m.get<ProductRiskSummaryV5::op_mny_bot>();
        o << ",\"op_mny_sld\":" << m.get<ProductRiskSummaryV5::op_mny_sld>();
        o << ",\"op_prem_bot\":" << m.get<ProductRiskSummaryV5::op_prem_bot>();
        o << ",\"op_prem_sld\":" << m.get<ProductRiskSummaryV5::op_prem_sld>();
        {
            std::time_t tt = m.get<ProductRiskSummaryV5::max_opt_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"max_opt_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"op_pnl_vol\":" << m.get<ProductRiskSummaryV5::op_pnl_vol>();
        o << ",\"op_pnl_mid\":" << m.get<ProductRiskSummaryV5::op_pnl_mid>();
        o << ",\"op_pnl_clr\":" << m.get<ProductRiskSummaryV5::op_pnl_clr>();
        o << ",\"op_pnl_brk\":" << m.get<ProductRiskSummaryV5::op_pnl_brk>();
        o << ",\"op_pnl_day\":" << m.get<ProductRiskSummaryV5::op_pnl_day>();
        o << ",\"op_dn_pnl_day\":" << m.get<ProductRiskSummaryV5::op_dn_pnl_day>();
        o << ",\"op_day_vega\":" << m.get<ProductRiskSummaryV5::op_day_vega>();
        o << ",\"op_day_wvega\":" << m.get<ProductRiskSummaryV5::op_day_wvega>();
        o << ",\"op_day_tvega\":" << m.get<ProductRiskSummaryV5::op_day_tvega>();
        o << ",\"op_day_wt_vega\":" << m.get<ProductRiskSummaryV5::op_day_wt_vega>();
        o << ",\"op_day_theta\":" << m.get<ProductRiskSummaryV5::op_day_theta>();
        o << ",\"op_day_delta\":" << m.get<ProductRiskSummaryV5::op_day_delta>();
        o << ",\"op_trd_delta\":" << m.get<ProductRiskSummaryV5::op_trd_delta>();
        o << ",\"cont_hedge_pnl\":" << m.get<ProductRiskSummaryV5::cont_hedge_pnl>();
        o << ",\"cont_hedge_pnl1\":" << m.get<ProductRiskSummaryV5::cont_hedge_pnl1>();
        o << ",\"op_edge_opened\":" << m.get<ProductRiskSummaryV5::op_edge_opened>();
        o << ",\"op_edge_closed\":" << m.get<ProductRiskSummaryV5::op_edge_closed>();
        o << ",\"pnl_dn\":" << m.get<ProductRiskSummaryV5::pnl_dn>();
        o << ",\"pnl_de\":" << m.get<ProductRiskSummaryV5::pnl_de>();
        o << ",\"pnl_sl\":" << m.get<ProductRiskSummaryV5::pnl_sl>();
        o << ",\"pnl_ga\":" << m.get<ProductRiskSummaryV5::pnl_ga>();
        o << ",\"pnl_th\":" << m.get<ProductRiskSummaryV5::pnl_th>();
        o << ",\"pnl_ve\":" << m.get<ProductRiskSummaryV5::pnl_ve>();
        o << ",\"pnl_vo\":" << m.get<ProductRiskSummaryV5::pnl_vo>();
        o << ",\"pnl_va\":" << m.get<ProductRiskSummaryV5::pnl_va>();
        o << ",\"pnl_err\":" << m.get<ProductRiskSummaryV5::pnl_err>();
        o << ",\"pnl_rate\":" << m.get<ProductRiskSummaryV5::pnl_rate>();
        o << ",\"pnl_sdiv\":" << m.get<ProductRiskSummaryV5::pnl_sdiv>();
        o << ",\"pnl_ddiv\":" << m.get<ProductRiskSummaryV5::pnl_ddiv>();
        o << ",\"pnl_te\":" << m.get<ProductRiskSummaryV5::pnl_te>();
        o << ",\"pct_iv_change\":" << m.get<ProductRiskSummaryV5::pct_iv_change>();
        o << ",\"pct_iv_vega\":" << m.get<ProductRiskSummaryV5::pct_iv_vega>();
        o << ",\"pct_tv_change\":" << m.get<ProductRiskSummaryV5::pct_tv_change>();
        o << ",\"pct_tv_vega\":" << m.get<ProductRiskSummaryV5::pct_tv_vega>();
        o << ",\"fut_width_mny\":" << m.get<ProductRiskSummaryV5::fut_width_mny>();
        o << ",\"opt_width_mny\":" << m.get<ProductRiskSummaryV5::opt_width_mny>();
        o << ",\"day_ddelta\":" << m.get<ProductRiskSummaryV5::day_ddelta>();
        o << ",\"delta\":" << m.get<ProductRiskSummaryV5::delta>();
        o << ",\"ddelta\":" << m.get<ProductRiskSummaryV5::ddelta>();
        o << ",\"de_decay\":" << m.get<ProductRiskSummaryV5::de_decay>();
        o << ",\"dd_decay\":" << m.get<ProductRiskSummaryV5::dd_decay>();
        o << ",\"gamma\":" << m.get<ProductRiskSummaryV5::gamma>();
        o << ",\"d_gamma\":" << m.get<ProductRiskSummaryV5::d_gamma>();
        o << ",\"theta\":" << m.get<ProductRiskSummaryV5::theta>();
        o << ",\"rho\":" << m.get<ProductRiskSummaryV5::rho>();
        o << ",\"vega\":" << m.get<ProductRiskSummaryV5::vega>();
        o << ",\"t_vega\":" << m.get<ProductRiskSummaryV5::t_vega>();
        o << ",\"w_vega\":" << m.get<ProductRiskSummaryV5::w_vega>();
        o << ",\"wt_vega\":" << m.get<ProductRiskSummaryV5::wt_vega>();
        o << ",\"ivol_ve\":" << m.get<ProductRiskSummaryV5::ivol_ve>();
        o << ",\"volga\":" << m.get<ProductRiskSummaryV5::volga>();
        o << ",\"vanna\":" << m.get<ProductRiskSummaryV5::vanna>();
        o << ",\"slope\":" << m.get<ProductRiskSummaryV5::slope>();
        o << ",\"avega\":" << m.get<ProductRiskSummaryV5::avega>();
        o << ",\"atheta\":" << m.get<ProductRiskSummaryV5::atheta>();
        o << ",\"hedge_gamma\":" << m.get<ProductRiskSummaryV5::hedge_gamma>();
        o << ",\"hedge_dgamma\":" << m.get<ProductRiskSummaryV5::hedge_dgamma>();
        o << ",\"prem_ov_par\":" << m.get<ProductRiskSummaryV5::prem_ov_par>();
        o << ",\"wt_ve_dd\":" << m.get<ProductRiskSummaryV5::wt_ve_dd>();
        o << ",\"wt_ve_dn\":" << m.get<ProductRiskSummaryV5::wt_ve_dn>();
        o << ",\"wt_ve_at\":" << m.get<ProductRiskSummaryV5::wt_ve_at>();
        o << ",\"wt_ve_up\":" << m.get<ProductRiskSummaryV5::wt_ve_up>();
        o << ",\"wt_ve_du\":" << m.get<ProductRiskSummaryV5::wt_ve_du>();
        o << ",\"wt_ve_m1\":" << m.get<ProductRiskSummaryV5::wt_ve_m1>();
        o << ",\"wt_ve_m2\":" << m.get<ProductRiskSummaryV5::wt_ve_m2>();
        o << ",\"wt_ve_m3\":" << m.get<ProductRiskSummaryV5::wt_ve_m3>();
        o << ",\"wt_ve_m4\":" << m.get<ProductRiskSummaryV5::wt_ve_m4>();
        o << ",\"wt_ve_m5\":" << m.get<ProductRiskSummaryV5::wt_ve_m5>();
        o << ",\"opn_delta\":" << m.get<ProductRiskSummaryV5::opn_delta>();
        o << ",\"opn_ddelta\":" << m.get<ProductRiskSummaryV5::opn_ddelta>();
        o << ",\"pos_delta\":" << m.get<ProductRiskSummaryV5::pos_delta>();
        o << ",\"pos_ddelta\":" << m.get<ProductRiskSummaryV5::pos_ddelta>();
        o << ",\"pin_xx\":" << m.get<ProductRiskSummaryV5::pin_xx>();
        o << ",\"opn_de_below\":" << m.get<ProductRiskSummaryV5::opn_de_below>();
        o << ",\"opn_de_above\":" << m.get<ProductRiskSummaryV5::opn_de_above>();
        o << ",\"opn_dde_below\":" << m.get<ProductRiskSummaryV5::opn_dde_below>();
        o << ",\"opn_dde_above\":" << m.get<ProductRiskSummaryV5::opn_dde_above>();
        o << ",\"pos_de_below\":" << m.get<ProductRiskSummaryV5::pos_de_below>();
        o << ",\"pos_de_above\":" << m.get<ProductRiskSummaryV5::pos_de_above>();
        o << ",\"pos_dde_below\":" << m.get<ProductRiskSummaryV5::pos_dde_below>();
        o << ",\"pos_dde_above\":" << m.get<ProductRiskSummaryV5::pos_dde_above>();
        o << ",\"pos_hedge_delta_ex\":" << m.get<ProductRiskSummaryV5::pos_hedge_delta_ex>();
        o << ",\"pos_hedge_ddelta_ex\":" << m.get<ProductRiskSummaryV5::pos_hedge_ddelta_ex>();
        o << ",\"t_edge\":" << m.get<ProductRiskSummaryV5::t_edge>();
        o << ",\"t_edge_mult\":" << m.get<ProductRiskSummaryV5::t_edge_mult>();
        o << ",\"t_edge_pr\":" << m.get<ProductRiskSummaryV5::t_edge_pr>();
        o << ",\"t_edge_mult_pr\":" << m.get<ProductRiskSummaryV5::t_edge_mult_pr>();
        o << ",\"num_tvol_errors\":" << m.get<ProductRiskSummaryV5::num_tvol_errors>();
        o << ",\"pair_pnl\":" << m.get<ProductRiskSummaryV5::pair_pnl>();
        o << ",\"pos_tedge_wv\":" << m.get<ProductRiskSummaryV5::pos_tedge_wv>();
        o << ",\"neg_tedge_wv\":" << m.get<ProductRiskSummaryV5::neg_tedge_wv>();
        o << ",\"bad_tedge_wv\":" << m.get<ProductRiskSummaryV5::bad_tedge_wv>();
        o << ",\"pos_tedge_pnl\":" << m.get<ProductRiskSummaryV5::pos_tedge_pnl>();
        o << ",\"neg_tedge_pnl\":" << m.get<ProductRiskSummaryV5::neg_tedge_pnl>();
        o << ",\"bad_tedge_pnl\":" << m.get<ProductRiskSummaryV5::bad_tedge_pnl>();
        o << ",\"span01\":" << m.get<ProductRiskSummaryV5::span01>();
        o << ",\"span02\":" << m.get<ProductRiskSummaryV5::span02>();
        o << ",\"span03\":" << m.get<ProductRiskSummaryV5::span03>();
        o << ",\"span04\":" << m.get<ProductRiskSummaryV5::span04>();
        o << ",\"span05\":" << m.get<ProductRiskSummaryV5::span05>();
        o << ",\"span06\":" << m.get<ProductRiskSummaryV5::span06>();
        o << ",\"span07\":" << m.get<ProductRiskSummaryV5::span07>();
        o << ",\"span08\":" << m.get<ProductRiskSummaryV5::span08>();
        o << ",\"span09\":" << m.get<ProductRiskSummaryV5::span09>();
        o << ",\"span10\":" << m.get<ProductRiskSummaryV5::span10>();
        o << ",\"span11\":" << m.get<ProductRiskSummaryV5::span11>();
        o << ",\"span12\":" << m.get<ProductRiskSummaryV5::span12>();
        o << ",\"span13\":" << m.get<ProductRiskSummaryV5::span13>();
        o << ",\"span14\":" << m.get<ProductRiskSummaryV5::span14>();
        o << ",\"span15\":" << m.get<ProductRiskSummaryV5::span15>();
        o << ",\"span16\":" << m.get<ProductRiskSummaryV5::span16>();
        o << ",\"fut_liq_risk\":" << m.get<ProductRiskSummaryV5::fut_liq_risk>();
        o << ",\"opt_liq_risk\":" << m.get<ProductRiskSummaryV5::opt_liq_risk>();
        o << ",\"fc_bot_c0\":" << m.get<ProductRiskSummaryV5::fc_bot_c0>();
        o << ",\"fc_sld_c0\":" << m.get<ProductRiskSummaryV5::fc_sld_c0>();
        o << ",\"fc_mny_c0\":" << m.get<ProductRiskSummaryV5::fc_mny_c0>();
        o << ",\"fc_bot_c1\":" << m.get<ProductRiskSummaryV5::fc_bot_c1>();
        o << ",\"fc_sld_c1\":" << m.get<ProductRiskSummaryV5::fc_sld_c1>();
        o << ",\"fc_mny_c1\":" << m.get<ProductRiskSummaryV5::fc_mny_c1>();
        o << ",\"fut_margin\":" << m.get<ProductRiskSummaryV5::fut_margin>();
        o << ",\"margin_udn_vdn\":" << m.get<ProductRiskSummaryV5::margin_udn_vdn>();
        o << ",\"margin_udn_vup\":" << m.get<ProductRiskSummaryV5::margin_udn_vup>();
        o << ",\"margin_uup_vdn\":" << m.get<ProductRiskSummaryV5::margin_uup_vdn>();
        o << ",\"margin_uup_vup\":" << m.get<ProductRiskSummaryV5::margin_uup_vup>();
        o << ",\"num_fut_errors\":" << m.get<ProductRiskSummaryV5::num_fut_errors>();
        o << ",\"num_opt_errors\":" << m.get<ProductRiskSummaryV5::num_opt_errors>();
        o << ",\"fut_mark_flag\":" << (int64_t)m.get<ProductRiskSummaryV5::fut_mark_flag>();
        o << ",\"opt_mark_flag\":" << (int64_t)m.get<ProductRiskSummaryV5::opt_mark_flag>();
        {
            std::time_t tt = m.get<ProductRiskSummaryV5::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}