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

    #ifndef _ln_stk_mkt_value__GUARD__
    #define _ln_stk_mkt_value__GUARD__
    DECL_STRONG_TYPE(ln_stk_mkt_value, double);
    #endif//_ln_stk_mkt_value__GUARD__

    #ifndef _sh_stk_mkt_value__GUARD__
    #define _sh_stk_mkt_value__GUARD__
    DECL_STRONG_TYPE(sh_stk_mkt_value, double);
    #endif//_sh_stk_mkt_value__GUARD__

    #ifndef _fut_mkt_value__GUARD__
    #define _fut_mkt_value__GUARD__
    DECL_STRONG_TYPE(fut_mkt_value, double);
    #endif//_fut_mkt_value__GUARD__

    #ifndef _stk_opt_mkt_value__GUARD__
    #define _stk_opt_mkt_value__GUARD__
    DECL_STRONG_TYPE(stk_opt_mkt_value, double);
    #endif//_stk_opt_mkt_value__GUARD__

    #ifndef _fut_opt_mkt_value__GUARD__
    #define _fut_opt_mkt_value__GUARD__
    DECL_STRONG_TYPE(fut_opt_mkt_value, double);
    #endif//_fut_opt_mkt_value__GUARD__

    #ifndef _vega_long__GUARD__
    #define _vega_long__GUARD__
    DECL_STRONG_TYPE(vega_long, float);
    #endif//_vega_long__GUARD__

    #ifndef _vega_short__GUARD__
    #define _vega_short__GUARD__
    DECL_STRONG_TYPE(vega_short, float);
    #endif//_vega_short__GUARD__

    #ifndef _w_vega_long__GUARD__
    #define _w_vega_long__GUARD__
    DECL_STRONG_TYPE(w_vega_long, float);
    #endif//_w_vega_long__GUARD__

    #ifndef _w_vega_short__GUARD__
    #define _w_vega_short__GUARD__
    DECL_STRONG_TYPE(w_vega_short, float);
    #endif//_w_vega_short__GUARD__

    #ifndef _wt_vega_long__GUARD__
    #define _wt_vega_long__GUARD__
    DECL_STRONG_TYPE(wt_vega_long, float);
    #endif//_wt_vega_long__GUARD__

    #ifndef _wt_vega_short__GUARD__
    #define _wt_vega_short__GUARD__
    DECL_STRONG_TYPE(wt_vega_short, float);
    #endif//_wt_vega_short__GUARD__

    #ifndef _theta_long__GUARD__
    #define _theta_long__GUARD__
    DECL_STRONG_TYPE(theta_long, float);
    #endif//_theta_long__GUARD__

    #ifndef _theta_short__GUARD__
    #define _theta_short__GUARD__
    DECL_STRONG_TYPE(theta_short, float);
    #endif//_theta_short__GUARD__

    #ifndef _rho_long__GUARD__
    #define _rho_long__GUARD__
    DECL_STRONG_TYPE(rho_long, float);
    #endif//_rho_long__GUARD__

    #ifndef _rho_short__GUARD__
    #define _rho_short__GUARD__
    DECL_STRONG_TYPE(rho_short, float);
    #endif//_rho_short__GUARD__

    #ifndef _ivol_ln__GUARD__
    #define _ivol_ln__GUARD__
    DECL_STRONG_TYPE(ivol_ln, float);
    #endif//_ivol_ln__GUARD__

    #ifndef _ivol_sh__GUARD__
    #define _ivol_sh__GUARD__
    DECL_STRONG_TYPE(ivol_sh, float);
    #endif//_ivol_sh__GUARD__

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

    #ifndef _ddelta__GUARD__
    #define _ddelta__GUARD__
    DECL_STRONG_TYPE(ddelta, float);
    #endif//_ddelta__GUARD__

    #ifndef _num_symbols__GUARD__
    #define _num_symbols__GUARD__
    DECL_STRONG_TYPE(num_symbols, int32);
    #endif//_num_symbols__GUARD__

    #ifndef _abs_cur_sh__GUARD__
    #define _abs_cur_sh__GUARD__
    DECL_STRONG_TYPE(abs_cur_sh, int32);
    #endif//_abs_cur_sh__GUARD__

    #ifndef _abs_cur_fc__GUARD__
    #define _abs_cur_fc__GUARD__
    DECL_STRONG_TYPE(abs_cur_fc, int32);
    #endif//_abs_cur_fc__GUARD__

    #ifndef _abs_cur_cn__GUARD__
    #define _abs_cur_cn__GUARD__
    DECL_STRONG_TYPE(abs_cur_cn, int32);
    #endif//_abs_cur_cn__GUARD__

    #ifndef _prem_ov_par__GUARD__
    #define _prem_ov_par__GUARD__
    DECL_STRONG_TYPE(prem_ov_par, float);
    #endif//_prem_ov_par__GUARD__

    #ifndef _opt_ex_as_pnl__GUARD__
    #define _opt_ex_as_pnl__GUARD__
    DECL_STRONG_TYPE(opt_ex_as_pnl, double);
    #endif//_opt_ex_as_pnl__GUARD__

    #ifndef _dividend_pnl__GUARD__
    #define _dividend_pnl__GUARD__
    DECL_STRONG_TYPE(dividend_pnl, double);
    #endif//_dividend_pnl__GUARD__

    #ifndef _corp_act_cash_pn_l__GUARD__
    #define _corp_act_cash_pn_l__GUARD__
    DECL_STRONG_TYPE(corp_act_cash_pn_l, double);
    #endif//_corp_act_cash_pn_l__GUARD__

    #ifndef _stk_opn_pnl_mid__GUARD__
    #define _stk_opn_pnl_mid__GUARD__
    DECL_STRONG_TYPE(stk_opn_pnl_mid, double);
    #endif//_stk_opn_pnl_mid__GUARD__

    #ifndef _stk_opn_pnl_clr__GUARD__
    #define _stk_opn_pnl_clr__GUARD__
    DECL_STRONG_TYPE(stk_opn_pnl_clr, double);
    #endif//_stk_opn_pnl_clr__GUARD__

    #ifndef _fut_opn_pnl_mid__GUARD__
    #define _fut_opn_pnl_mid__GUARD__
    DECL_STRONG_TYPE(fut_opn_pnl_mid, double);
    #endif//_fut_opn_pnl_mid__GUARD__

    #ifndef _fut_opn_pnl_clr__GUARD__
    #define _fut_opn_pnl_clr__GUARD__
    DECL_STRONG_TYPE(fut_opn_pnl_clr, double);
    #endif//_fut_opn_pnl_clr__GUARD__

    #ifndef _stk_opt_opn_pnl_vol__GUARD__
    #define _stk_opt_opn_pnl_vol__GUARD__
    DECL_STRONG_TYPE(stk_opt_opn_pnl_vol, double);
    #endif//_stk_opt_opn_pnl_vol__GUARD__

    #ifndef _stk_opt_opn_pnl_mid__GUARD__
    #define _stk_opt_opn_pnl_mid__GUARD__
    DECL_STRONG_TYPE(stk_opt_opn_pnl_mid, double);
    #endif//_stk_opt_opn_pnl_mid__GUARD__

    #ifndef _stk_opt_opn_pnl_clr__GUARD__
    #define _stk_opt_opn_pnl_clr__GUARD__
    DECL_STRONG_TYPE(stk_opt_opn_pnl_clr, double);
    #endif//_stk_opt_opn_pnl_clr__GUARD__

    #ifndef _fut_opt_opn_pnl_vol__GUARD__
    #define _fut_opt_opn_pnl_vol__GUARD__
    DECL_STRONG_TYPE(fut_opt_opn_pnl_vol, double);
    #endif//_fut_opt_opn_pnl_vol__GUARD__

    #ifndef _fut_opt_opn_pnl_mid__GUARD__
    #define _fut_opt_opn_pnl_mid__GUARD__
    DECL_STRONG_TYPE(fut_opt_opn_pnl_mid, double);
    #endif//_fut_opt_opn_pnl_mid__GUARD__

    #ifndef _fut_opt_opn_pnl_clr__GUARD__
    #define _fut_opt_opn_pnl_clr__GUARD__
    DECL_STRONG_TYPE(fut_opt_opn_pnl_clr, double);
    #endif//_fut_opt_opn_pnl_clr__GUARD__

    #ifndef _stk_day_pnl__GUARD__
    #define _stk_day_pnl__GUARD__
    DECL_STRONG_TYPE(stk_day_pnl, double);
    #endif//_stk_day_pnl__GUARD__

    #ifndef _fut_day_pnl__GUARD__
    #define _fut_day_pnl__GUARD__
    DECL_STRONG_TYPE(fut_day_pnl, double);
    #endif//_fut_day_pnl__GUARD__

    #ifndef _stk_opt_day_pnl__GUARD__
    #define _stk_opt_day_pnl__GUARD__
    DECL_STRONG_TYPE(stk_opt_day_pnl, double);
    #endif//_stk_opt_day_pnl__GUARD__

    #ifndef _fut_opt_day_pnl__GUARD__
    #define _fut_opt_day_pnl__GUARD__
    DECL_STRONG_TYPE(fut_opt_day_pnl, double);
    #endif//_fut_opt_day_pnl__GUARD__

    #ifndef _stkt_day_sh__GUARD__
    #define _stkt_day_sh__GUARD__
    DECL_STRONG_TYPE(stkt_day_sh, int32);
    #endif//_stkt_day_sh__GUARD__

    #ifndef _stk_day_mny__GUARD__
    #define _stk_day_mny__GUARD__
    DECL_STRONG_TYPE(stk_day_mny, double);
    #endif//_stk_day_mny__GUARD__

    #ifndef _fut_day_cn__GUARD__
    #define _fut_day_cn__GUARD__
    DECL_STRONG_TYPE(fut_day_cn, int32);
    #endif//_fut_day_cn__GUARD__

    #ifndef _fut_day_mny__GUARD__
    #define _fut_day_mny__GUARD__
    DECL_STRONG_TYPE(fut_day_mny, double);
    #endif//_fut_day_mny__GUARD__

    #ifndef _stk_opt_day_cn__GUARD__
    #define _stk_opt_day_cn__GUARD__
    DECL_STRONG_TYPE(stk_opt_day_cn, int32);
    #endif//_stk_opt_day_cn__GUARD__

    #ifndef _stk_opt_day_mny__GUARD__
    #define _stk_opt_day_mny__GUARD__
    DECL_STRONG_TYPE(stk_opt_day_mny, double);
    #endif//_stk_opt_day_mny__GUARD__

    #ifndef _fut_opt_day_cn__GUARD__
    #define _fut_opt_day_cn__GUARD__
    DECL_STRONG_TYPE(fut_opt_day_cn, int32);
    #endif//_fut_opt_day_cn__GUARD__

    #ifndef _fut_opt_day_mny__GUARD__
    #define _fut_opt_day_mny__GUARD__
    DECL_STRONG_TYPE(fut_opt_day_mny, double);
    #endif//_fut_opt_day_mny__GUARD__

    #ifndef _day_ddelta__GUARD__
    #define _day_ddelta__GUARD__
    DECL_STRONG_TYPE(day_ddelta, float);
    #endif//_day_ddelta__GUARD__

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

    #ifndef _pnl_ddiv__GUARD__
    #define _pnl_ddiv__GUARD__
    DECL_STRONG_TYPE(pnl_ddiv, float);
    #endif//_pnl_ddiv__GUARD__

    #ifndef _pnl_sdiv__GUARD__
    #define _pnl_sdiv__GUARD__
    DECL_STRONG_TYPE(pnl_sdiv, float);
    #endif//_pnl_sdiv__GUARD__

    #ifndef _pnl_rate__GUARD__
    #define _pnl_rate__GUARD__
    DECL_STRONG_TYPE(pnl_rate, float);
    #endif//_pnl_rate__GUARD__

    #ifndef _pnl_err__GUARD__
    #define _pnl_err__GUARD__
    DECL_STRONG_TYPE(pnl_err, float);
    #endif//_pnl_err__GUARD__

    #ifndef _pnl_te__GUARD__
    #define _pnl_te__GUARD__
    DECL_STRONG_TYPE(pnl_te, float);
    #endif//_pnl_te__GUARD__

    #ifndef _pnl_ln__GUARD__
    #define _pnl_ln__GUARD__
    DECL_STRONG_TYPE(pnl_ln, float);
    #endif//_pnl_ln__GUARD__

    #ifndef _pnl_sh__GUARD__
    #define _pnl_sh__GUARD__
    DECL_STRONG_TYPE(pnl_sh, float);
    #endif//_pnl_sh__GUARD__

    #ifndef _t_edge__GUARD__
    #define _t_edge__GUARD__
    DECL_STRONG_TYPE(t_edge, float);
    #endif//_t_edge__GUARD__

    #ifndef _t_edge_mult__GUARD__
    #define _t_edge_mult__GUARD__
    DECL_STRONG_TYPE(t_edge_mult, float);
    #endif//_t_edge_mult__GUARD__

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

    #ifndef _hc_cnt__GUARD__
    #define _hc_cnt__GUARD__
    DECL_STRONG_TYPE(hc_cnt, float);
    #endif//_hc_cnt__GUARD__

    #ifndef _haircut25__GUARD__
    #define _haircut25__GUARD__
    DECL_STRONG_TYPE(haircut25, float);
    #endif//_haircut25__GUARD__

    #ifndef _haircut37__GUARD__
    #define _haircut37__GUARD__
    DECL_STRONG_TYPE(haircut37, float);
    #endif//_haircut37__GUARD__

    #ifndef _opt_cn_minimum__GUARD__
    #define _opt_cn_minimum__GUARD__
    DECL_STRONG_TYPE(opt_cn_minimum, float);
    #endif//_opt_cn_minimum__GUARD__

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

    #ifndef _worst3_risk__GUARD__
    #define _worst3_risk__GUARD__
    DECL_STRONG_TYPE(worst3_risk, float);
    #endif//_worst3_risk__GUARD__

    #ifndef _worst_sym1__GUARD__
    #define _worst_sym1__GUARD__
    DECL_STRONG_TYPE(worst_sym1, TickerKey);
    #endif//_worst_sym1__GUARD__

    #ifndef _worst_sym2__GUARD__
    #define _worst_sym2__GUARD__
    DECL_STRONG_TYPE(worst_sym2, TickerKey);
    #endif//_worst_sym2__GUARD__

    #ifndef _worst_sym3__GUARD__
    #define _worst_sym3__GUARD__
    DECL_STRONG_TYPE(worst_sym3, TickerKey);
    #endif//_worst_sym3__GUARD__

    #ifndef _stk_liq_risk__GUARD__
    #define _stk_liq_risk__GUARD__
    DECL_STRONG_TYPE(stk_liq_risk, float);
    #endif//_stk_liq_risk__GUARD__

    #ifndef _fut_liq_risk__GUARD__
    #define _fut_liq_risk__GUARD__
    DECL_STRONG_TYPE(fut_liq_risk, float);
    #endif//_fut_liq_risk__GUARD__

    #ifndef _opt_liq_risk__GUARD__
    #define _opt_liq_risk__GUARD__
    DECL_STRONG_TYPE(opt_liq_risk, float);
    #endif//_opt_liq_risk__GUARD__

    #ifndef _sr_risk_margin__GUARD__
    #define _sr_risk_margin__GUARD__
    DECL_STRONG_TYPE(sr_risk_margin, float);
    #endif//_sr_risk_margin__GUARD__

    #ifndef _last_activity__GUARD__
    #define _last_activity__GUARD__
    DECL_STRONG_TYPE(last_activity, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_last_activity__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _currency__GUARD__
    #define _currency__GUARD__
    DECL_STRONG_TYPE(currency, spiderrock::protobuf::api::Currency);
    #endif//_currency__GUARD__

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

    
    class AccountRiskRecordV5_PKey {
        public:
        //using statements for all types used in this class
        using accnt = spiderrock::protobuf::api::accnt;
        using currency = spiderrock::protobuf::api::currency;
        using trade_date = spiderrock::protobuf::api::trade_date;
        using risk_session = spiderrock::protobuf::api::risk_session;
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        accnt m_accnt{};
        currency m_currency{};
        trade_date m_trade_date{};
        risk_session m_risk_session{};
        client_firm m_client_firm{};

        public:
        accnt get_accnt() const {
            return m_accnt;
        }
        currency get_currency() const {
            return m_currency;
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
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_currency(const currency& value)  {
            m_currency = value;
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AccountRiskRecordV5_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to AccountRiskRecordV5_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const currency & value) { set_currency(value); }
        void set(const trade_date & value) { set_trade_date(value); }
        void set(const risk_session & value) { set_risk_session(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        AccountRiskRecordV5_PKey() {}

        virtual ~AccountRiskRecordV5_PKey() {
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
        bool IncludeTradeDate() const {
            return (m_trade_date.ByteSizeLong() > 0);
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_accnt);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_currency)));
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
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_accnt));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_currency)));
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
                    case 10: {m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 11: {m_currency = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
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
    

    class AccountRiskRecordV5 {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::AccountRiskRecordV5_PKey;
        using ln_ddelta = spiderrock::protobuf::api::ln_ddelta;
        using sh_ddelta = spiderrock::protobuf::api::sh_ddelta;
        using ln_stk_mkt_value = spiderrock::protobuf::api::ln_stk_mkt_value;
        using sh_stk_mkt_value = spiderrock::protobuf::api::sh_stk_mkt_value;
        using fut_mkt_value = spiderrock::protobuf::api::fut_mkt_value;
        using stk_opt_mkt_value = spiderrock::protobuf::api::stk_opt_mkt_value;
        using fut_opt_mkt_value = spiderrock::protobuf::api::fut_opt_mkt_value;
        using vega_long = spiderrock::protobuf::api::vega_long;
        using vega_short = spiderrock::protobuf::api::vega_short;
        using w_vega_long = spiderrock::protobuf::api::w_vega_long;
        using w_vega_short = spiderrock::protobuf::api::w_vega_short;
        using wt_vega_long = spiderrock::protobuf::api::wt_vega_long;
        using wt_vega_short = spiderrock::protobuf::api::wt_vega_short;
        using theta_long = spiderrock::protobuf::api::theta_long;
        using theta_short = spiderrock::protobuf::api::theta_short;
        using rho_long = spiderrock::protobuf::api::rho_long;
        using rho_short = spiderrock::protobuf::api::rho_short;
        using ivol_ln = spiderrock::protobuf::api::ivol_ln;
        using ivol_sh = spiderrock::protobuf::api::ivol_sh;
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
        using ddelta = spiderrock::protobuf::api::ddelta;
        using num_symbols = spiderrock::protobuf::api::num_symbols;
        using abs_cur_sh = spiderrock::protobuf::api::abs_cur_sh;
        using abs_cur_fc = spiderrock::protobuf::api::abs_cur_fc;
        using abs_cur_cn = spiderrock::protobuf::api::abs_cur_cn;
        using prem_ov_par = spiderrock::protobuf::api::prem_ov_par;
        using opt_ex_as_pnl = spiderrock::protobuf::api::opt_ex_as_pnl;
        using dividend_pnl = spiderrock::protobuf::api::dividend_pnl;
        using corp_act_cash_pn_l = spiderrock::protobuf::api::corp_act_cash_pn_l;
        using stk_opn_pnl_mid = spiderrock::protobuf::api::stk_opn_pnl_mid;
        using stk_opn_pnl_clr = spiderrock::protobuf::api::stk_opn_pnl_clr;
        using fut_opn_pnl_mid = spiderrock::protobuf::api::fut_opn_pnl_mid;
        using fut_opn_pnl_clr = spiderrock::protobuf::api::fut_opn_pnl_clr;
        using stk_opt_opn_pnl_vol = spiderrock::protobuf::api::stk_opt_opn_pnl_vol;
        using stk_opt_opn_pnl_mid = spiderrock::protobuf::api::stk_opt_opn_pnl_mid;
        using stk_opt_opn_pnl_clr = spiderrock::protobuf::api::stk_opt_opn_pnl_clr;
        using fut_opt_opn_pnl_vol = spiderrock::protobuf::api::fut_opt_opn_pnl_vol;
        using fut_opt_opn_pnl_mid = spiderrock::protobuf::api::fut_opt_opn_pnl_mid;
        using fut_opt_opn_pnl_clr = spiderrock::protobuf::api::fut_opt_opn_pnl_clr;
        using stk_day_pnl = spiderrock::protobuf::api::stk_day_pnl;
        using fut_day_pnl = spiderrock::protobuf::api::fut_day_pnl;
        using stk_opt_day_pnl = spiderrock::protobuf::api::stk_opt_day_pnl;
        using fut_opt_day_pnl = spiderrock::protobuf::api::fut_opt_day_pnl;
        using stkt_day_sh = spiderrock::protobuf::api::stkt_day_sh;
        using stk_day_mny = spiderrock::protobuf::api::stk_day_mny;
        using fut_day_cn = spiderrock::protobuf::api::fut_day_cn;
        using fut_day_mny = spiderrock::protobuf::api::fut_day_mny;
        using stk_opt_day_cn = spiderrock::protobuf::api::stk_opt_day_cn;
        using stk_opt_day_mny = spiderrock::protobuf::api::stk_opt_day_mny;
        using fut_opt_day_cn = spiderrock::protobuf::api::fut_opt_day_cn;
        using fut_opt_day_mny = spiderrock::protobuf::api::fut_opt_day_mny;
        using day_ddelta = spiderrock::protobuf::api::day_ddelta;
        using op_day_vega = spiderrock::protobuf::api::op_day_vega;
        using op_day_wvega = spiderrock::protobuf::api::op_day_wvega;
        using op_day_tvega = spiderrock::protobuf::api::op_day_tvega;
        using op_day_wt_vega = spiderrock::protobuf::api::op_day_wt_vega;
        using op_day_theta = spiderrock::protobuf::api::op_day_theta;
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
        using pnl_ddiv = spiderrock::protobuf::api::pnl_ddiv;
        using pnl_sdiv = spiderrock::protobuf::api::pnl_sdiv;
        using pnl_rate = spiderrock::protobuf::api::pnl_rate;
        using pnl_err = spiderrock::protobuf::api::pnl_err;
        using pnl_te = spiderrock::protobuf::api::pnl_te;
        using pnl_ln = spiderrock::protobuf::api::pnl_ln;
        using pnl_sh = spiderrock::protobuf::api::pnl_sh;
        using t_edge = spiderrock::protobuf::api::t_edge;
        using t_edge_mult = spiderrock::protobuf::api::t_edge_mult;
        using pos_tedge_pnl = spiderrock::protobuf::api::pos_tedge_pnl;
        using neg_tedge_pnl = spiderrock::protobuf::api::neg_tedge_pnl;
        using bad_tedge_pnl = spiderrock::protobuf::api::bad_tedge_pnl;
        using va_rsu90 = spiderrock::protobuf::api::va_rsu90;
        using va_rsd90 = spiderrock::protobuf::api::va_rsd90;
        using va_rsu50 = spiderrock::protobuf::api::va_rsu50;
        using va_rsd50 = spiderrock::protobuf::api::va_rsd50;
        using va_rsu15 = spiderrock::protobuf::api::va_rsu15;
        using va_rsd15 = spiderrock::protobuf::api::va_rsd15;
        using va_rsu10 = spiderrock::protobuf::api::va_rsu10;
        using va_rsd10 = spiderrock::protobuf::api::va_rsd10;
        using va_rsu05 = spiderrock::protobuf::api::va_rsu05;
        using va_rsd05 = spiderrock::protobuf::api::va_rsd05;
        using va_rsu1e = spiderrock::protobuf::api::va_rsu1e;
        using va_rsd1e = spiderrock::protobuf::api::va_rsd1e;
        using va_rsu2e = spiderrock::protobuf::api::va_rsu2e;
        using va_rsd2e = spiderrock::protobuf::api::va_rsd2e;
        using va_rearn = spiderrock::protobuf::api::va_rearn;
        using va_rcash = spiderrock::protobuf::api::va_rcash;
        using hc_cnt = spiderrock::protobuf::api::hc_cnt;
        using haircut25 = spiderrock::protobuf::api::haircut25;
        using haircut37 = spiderrock::protobuf::api::haircut37;
        using opt_cn_minimum = spiderrock::protobuf::api::opt_cn_minimum;
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
        using worst3_risk = spiderrock::protobuf::api::worst3_risk;
        using worst_sym1 = spiderrock::protobuf::api::worst_sym1;
        using worst_sym2 = spiderrock::protobuf::api::worst_sym2;
        using worst_sym3 = spiderrock::protobuf::api::worst_sym3;
        using stk_liq_risk = spiderrock::protobuf::api::stk_liq_risk;
        using fut_liq_risk = spiderrock::protobuf::api::fut_liq_risk;
        using opt_liq_risk = spiderrock::protobuf::api::opt_liq_risk;
        using sr_risk_margin = spiderrock::protobuf::api::sr_risk_margin;
        using last_activity = spiderrock::protobuf::api::last_activity;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ln_ddelta m_ln_ddelta{};
        sh_ddelta m_sh_ddelta{};
        ln_stk_mkt_value m_ln_stk_mkt_value{};
        sh_stk_mkt_value m_sh_stk_mkt_value{};
        fut_mkt_value m_fut_mkt_value{};
        stk_opt_mkt_value m_stk_opt_mkt_value{};
        fut_opt_mkt_value m_fut_opt_mkt_value{};
        vega_long m_vega_long{};
        vega_short m_vega_short{};
        w_vega_long m_w_vega_long{};
        w_vega_short m_w_vega_short{};
        wt_vega_long m_wt_vega_long{};
        wt_vega_short m_wt_vega_short{};
        theta_long m_theta_long{};
        theta_short m_theta_short{};
        rho_long m_rho_long{};
        rho_short m_rho_short{};
        ivol_ln m_ivol_ln{};
        ivol_sh m_ivol_sh{};
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
        ddelta m_ddelta{};
        num_symbols m_num_symbols{};
        abs_cur_sh m_abs_cur_sh{};
        abs_cur_fc m_abs_cur_fc{};
        abs_cur_cn m_abs_cur_cn{};
        prem_ov_par m_prem_ov_par{};
        opt_ex_as_pnl m_opt_ex_as_pnl{};
        dividend_pnl m_dividend_pnl{};
        corp_act_cash_pn_l m_corp_act_cash_pn_l{};
        stk_opn_pnl_mid m_stk_opn_pnl_mid{};
        stk_opn_pnl_clr m_stk_opn_pnl_clr{};
        fut_opn_pnl_mid m_fut_opn_pnl_mid{};
        fut_opn_pnl_clr m_fut_opn_pnl_clr{};
        stk_opt_opn_pnl_vol m_stk_opt_opn_pnl_vol{};
        stk_opt_opn_pnl_mid m_stk_opt_opn_pnl_mid{};
        stk_opt_opn_pnl_clr m_stk_opt_opn_pnl_clr{};
        fut_opt_opn_pnl_vol m_fut_opt_opn_pnl_vol{};
        fut_opt_opn_pnl_mid m_fut_opt_opn_pnl_mid{};
        fut_opt_opn_pnl_clr m_fut_opt_opn_pnl_clr{};
        stk_day_pnl m_stk_day_pnl{};
        fut_day_pnl m_fut_day_pnl{};
        stk_opt_day_pnl m_stk_opt_day_pnl{};
        fut_opt_day_pnl m_fut_opt_day_pnl{};
        stkt_day_sh m_stkt_day_sh{};
        stk_day_mny m_stk_day_mny{};
        fut_day_cn m_fut_day_cn{};
        fut_day_mny m_fut_day_mny{};
        stk_opt_day_cn m_stk_opt_day_cn{};
        stk_opt_day_mny m_stk_opt_day_mny{};
        fut_opt_day_cn m_fut_opt_day_cn{};
        fut_opt_day_mny m_fut_opt_day_mny{};
        day_ddelta m_day_ddelta{};
        op_day_vega m_op_day_vega{};
        op_day_wvega m_op_day_wvega{};
        op_day_tvega m_op_day_tvega{};
        op_day_wt_vega m_op_day_wt_vega{};
        op_day_theta m_op_day_theta{};
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
        pnl_ddiv m_pnl_ddiv{};
        pnl_sdiv m_pnl_sdiv{};
        pnl_rate m_pnl_rate{};
        pnl_err m_pnl_err{};
        pnl_te m_pnl_te{};
        pnl_ln m_pnl_ln{};
        pnl_sh m_pnl_sh{};
        t_edge m_t_edge{};
        t_edge_mult m_t_edge_mult{};
        pos_tedge_pnl m_pos_tedge_pnl{};
        neg_tedge_pnl m_neg_tedge_pnl{};
        bad_tedge_pnl m_bad_tedge_pnl{};
        va_rsu90 m_va_rsu90{};
        va_rsd90 m_va_rsd90{};
        va_rsu50 m_va_rsu50{};
        va_rsd50 m_va_rsd50{};
        va_rsu15 m_va_rsu15{};
        va_rsd15 m_va_rsd15{};
        va_rsu10 m_va_rsu10{};
        va_rsd10 m_va_rsd10{};
        va_rsu05 m_va_rsu05{};
        va_rsd05 m_va_rsd05{};
        va_rsu1e m_va_rsu1e{};
        va_rsd1e m_va_rsd1e{};
        va_rsu2e m_va_rsu2e{};
        va_rsd2e m_va_rsd2e{};
        va_rearn m_va_rearn{};
        va_rcash m_va_rcash{};
        hc_cnt m_hc_cnt{};
        haircut25 m_haircut25{};
        haircut37 m_haircut37{};
        opt_cn_minimum m_opt_cn_minimum{};
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
        worst3_risk m_worst3_risk{};
        worst_sym1 m_worst_sym1{};
        worst_sym2 m_worst_sym2{};
        worst_sym3 m_worst_sym3{};
        stk_liq_risk m_stk_liq_risk{};
        fut_liq_risk m_fut_liq_risk{};
        opt_liq_risk m_opt_liq_risk{};
        sr_risk_margin m_sr_risk_margin{};
        last_activity m_last_activity{};
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
        ln_stk_mkt_value get_ln_stk_mkt_value() const {
            return m_ln_stk_mkt_value;
        }		
        sh_stk_mkt_value get_sh_stk_mkt_value() const {
            return m_sh_stk_mkt_value;
        }		
        fut_mkt_value get_fut_mkt_value() const {
            return m_fut_mkt_value;
        }		
        stk_opt_mkt_value get_stk_opt_mkt_value() const {
            return m_stk_opt_mkt_value;
        }		
        fut_opt_mkt_value get_fut_opt_mkt_value() const {
            return m_fut_opt_mkt_value;
        }		
        vega_long get_vega_long() const {
            return m_vega_long;
        }		
        vega_short get_vega_short() const {
            return m_vega_short;
        }		
        w_vega_long get_w_vega_long() const {
            return m_w_vega_long;
        }		
        w_vega_short get_w_vega_short() const {
            return m_w_vega_short;
        }		
        wt_vega_long get_wt_vega_long() const {
            return m_wt_vega_long;
        }		
        wt_vega_short get_wt_vega_short() const {
            return m_wt_vega_short;
        }		
        theta_long get_theta_long() const {
            return m_theta_long;
        }		
        theta_short get_theta_short() const {
            return m_theta_short;
        }		
        rho_long get_rho_long() const {
            return m_rho_long;
        }		
        rho_short get_rho_short() const {
            return m_rho_short;
        }		
        ivol_ln get_ivol_ln() const {
            return m_ivol_ln;
        }		
        ivol_sh get_ivol_sh() const {
            return m_ivol_sh;
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
        ddelta get_ddelta() const {
            return m_ddelta;
        }		
        num_symbols get_num_symbols() const {
            return m_num_symbols;
        }		
        abs_cur_sh get_abs_cur_sh() const {
            return m_abs_cur_sh;
        }		
        abs_cur_fc get_abs_cur_fc() const {
            return m_abs_cur_fc;
        }		
        abs_cur_cn get_abs_cur_cn() const {
            return m_abs_cur_cn;
        }		
        prem_ov_par get_prem_ov_par() const {
            return m_prem_ov_par;
        }		
        opt_ex_as_pnl get_opt_ex_as_pnl() const {
            return m_opt_ex_as_pnl;
        }		
        dividend_pnl get_dividend_pnl() const {
            return m_dividend_pnl;
        }		
        corp_act_cash_pn_l get_corp_act_cash_pn_l() const {
            return m_corp_act_cash_pn_l;
        }		
        stk_opn_pnl_mid get_stk_opn_pnl_mid() const {
            return m_stk_opn_pnl_mid;
        }		
        stk_opn_pnl_clr get_stk_opn_pnl_clr() const {
            return m_stk_opn_pnl_clr;
        }		
        fut_opn_pnl_mid get_fut_opn_pnl_mid() const {
            return m_fut_opn_pnl_mid;
        }		
        fut_opn_pnl_clr get_fut_opn_pnl_clr() const {
            return m_fut_opn_pnl_clr;
        }		
        stk_opt_opn_pnl_vol get_stk_opt_opn_pnl_vol() const {
            return m_stk_opt_opn_pnl_vol;
        }		
        stk_opt_opn_pnl_mid get_stk_opt_opn_pnl_mid() const {
            return m_stk_opt_opn_pnl_mid;
        }		
        stk_opt_opn_pnl_clr get_stk_opt_opn_pnl_clr() const {
            return m_stk_opt_opn_pnl_clr;
        }		
        fut_opt_opn_pnl_vol get_fut_opt_opn_pnl_vol() const {
            return m_fut_opt_opn_pnl_vol;
        }		
        fut_opt_opn_pnl_mid get_fut_opt_opn_pnl_mid() const {
            return m_fut_opt_opn_pnl_mid;
        }		
        fut_opt_opn_pnl_clr get_fut_opt_opn_pnl_clr() const {
            return m_fut_opt_opn_pnl_clr;
        }		
        stk_day_pnl get_stk_day_pnl() const {
            return m_stk_day_pnl;
        }		
        fut_day_pnl get_fut_day_pnl() const {
            return m_fut_day_pnl;
        }		
        stk_opt_day_pnl get_stk_opt_day_pnl() const {
            return m_stk_opt_day_pnl;
        }		
        fut_opt_day_pnl get_fut_opt_day_pnl() const {
            return m_fut_opt_day_pnl;
        }		
        stkt_day_sh get_stkt_day_sh() const {
            return m_stkt_day_sh;
        }		
        stk_day_mny get_stk_day_mny() const {
            return m_stk_day_mny;
        }		
        fut_day_cn get_fut_day_cn() const {
            return m_fut_day_cn;
        }		
        fut_day_mny get_fut_day_mny() const {
            return m_fut_day_mny;
        }		
        stk_opt_day_cn get_stk_opt_day_cn() const {
            return m_stk_opt_day_cn;
        }		
        stk_opt_day_mny get_stk_opt_day_mny() const {
            return m_stk_opt_day_mny;
        }		
        fut_opt_day_cn get_fut_opt_day_cn() const {
            return m_fut_opt_day_cn;
        }		
        fut_opt_day_mny get_fut_opt_day_mny() const {
            return m_fut_opt_day_mny;
        }		
        day_ddelta get_day_ddelta() const {
            return m_day_ddelta;
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
        pnl_ddiv get_pnl_ddiv() const {
            return m_pnl_ddiv;
        }		
        pnl_sdiv get_pnl_sdiv() const {
            return m_pnl_sdiv;
        }		
        pnl_rate get_pnl_rate() const {
            return m_pnl_rate;
        }		
        pnl_err get_pnl_err() const {
            return m_pnl_err;
        }		
        pnl_te get_pnl_te() const {
            return m_pnl_te;
        }		
        pnl_ln get_pnl_ln() const {
            return m_pnl_ln;
        }		
        pnl_sh get_pnl_sh() const {
            return m_pnl_sh;
        }		
        t_edge get_t_edge() const {
            return m_t_edge;
        }		
        t_edge_mult get_t_edge_mult() const {
            return m_t_edge_mult;
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
        hc_cnt get_hc_cnt() const {
            return m_hc_cnt;
        }		
        haircut25 get_haircut25() const {
            return m_haircut25;
        }		
        haircut37 get_haircut37() const {
            return m_haircut37;
        }		
        opt_cn_minimum get_opt_cn_minimum() const {
            return m_opt_cn_minimum;
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
        worst3_risk get_worst3_risk() const {
            return m_worst3_risk;
        }		
        worst_sym1 get_worst_sym1() const {
            return m_worst_sym1;
        }		
        worst_sym2 get_worst_sym2() const {
            return m_worst_sym2;
        }		
        worst_sym3 get_worst_sym3() const {
            return m_worst_sym3;
        }		
        stk_liq_risk get_stk_liq_risk() const {
            return m_stk_liq_risk;
        }		
        fut_liq_risk get_fut_liq_risk() const {
            return m_fut_liq_risk;
        }		
        opt_liq_risk get_opt_liq_risk() const {
            return m_opt_liq_risk;
        }		
        sr_risk_margin get_sr_risk_margin() const {
            return m_sr_risk_margin;
        }		
        last_activity get_last_activity() const {
            return m_last_activity;
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
        void set_ln_stk_mkt_value(const ln_stk_mkt_value& value)  {
            m_ln_stk_mkt_value = value;
        }
        void set_sh_stk_mkt_value(const sh_stk_mkt_value& value)  {
            m_sh_stk_mkt_value = value;
        }
        void set_fut_mkt_value(const fut_mkt_value& value)  {
            m_fut_mkt_value = value;
        }
        void set_stk_opt_mkt_value(const stk_opt_mkt_value& value)  {
            m_stk_opt_mkt_value = value;
        }
        void set_fut_opt_mkt_value(const fut_opt_mkt_value& value)  {
            m_fut_opt_mkt_value = value;
        }
        void set_vega_long(const vega_long& value)  {
            m_vega_long = value;
        }
        void set_vega_short(const vega_short& value)  {
            m_vega_short = value;
        }
        void set_w_vega_long(const w_vega_long& value)  {
            m_w_vega_long = value;
        }
        void set_w_vega_short(const w_vega_short& value)  {
            m_w_vega_short = value;
        }
        void set_wt_vega_long(const wt_vega_long& value)  {
            m_wt_vega_long = value;
        }
        void set_wt_vega_short(const wt_vega_short& value)  {
            m_wt_vega_short = value;
        }
        void set_theta_long(const theta_long& value)  {
            m_theta_long = value;
        }
        void set_theta_short(const theta_short& value)  {
            m_theta_short = value;
        }
        void set_rho_long(const rho_long& value)  {
            m_rho_long = value;
        }
        void set_rho_short(const rho_short& value)  {
            m_rho_short = value;
        }
        void set_ivol_ln(const ivol_ln& value)  {
            m_ivol_ln = value;
        }
        void set_ivol_sh(const ivol_sh& value)  {
            m_ivol_sh = value;
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
        void set_ddelta(const ddelta& value)  {
            m_ddelta = value;
        }
        void set_num_symbols(const num_symbols& value)  {
            m_num_symbols = value;
        }
        void set_abs_cur_sh(const abs_cur_sh& value)  {
            m_abs_cur_sh = value;
        }
        void set_abs_cur_fc(const abs_cur_fc& value)  {
            m_abs_cur_fc = value;
        }
        void set_abs_cur_cn(const abs_cur_cn& value)  {
            m_abs_cur_cn = value;
        }
        void set_prem_ov_par(const prem_ov_par& value)  {
            m_prem_ov_par = value;
        }
        void set_opt_ex_as_pnl(const opt_ex_as_pnl& value)  {
            m_opt_ex_as_pnl = value;
        }
        void set_dividend_pnl(const dividend_pnl& value)  {
            m_dividend_pnl = value;
        }
        void set_corp_act_cash_pn_l(const corp_act_cash_pn_l& value)  {
            m_corp_act_cash_pn_l = value;
        }
        void set_stk_opn_pnl_mid(const stk_opn_pnl_mid& value)  {
            m_stk_opn_pnl_mid = value;
        }
        void set_stk_opn_pnl_clr(const stk_opn_pnl_clr& value)  {
            m_stk_opn_pnl_clr = value;
        }
        void set_fut_opn_pnl_mid(const fut_opn_pnl_mid& value)  {
            m_fut_opn_pnl_mid = value;
        }
        void set_fut_opn_pnl_clr(const fut_opn_pnl_clr& value)  {
            m_fut_opn_pnl_clr = value;
        }
        void set_stk_opt_opn_pnl_vol(const stk_opt_opn_pnl_vol& value)  {
            m_stk_opt_opn_pnl_vol = value;
        }
        void set_stk_opt_opn_pnl_mid(const stk_opt_opn_pnl_mid& value)  {
            m_stk_opt_opn_pnl_mid = value;
        }
        void set_stk_opt_opn_pnl_clr(const stk_opt_opn_pnl_clr& value)  {
            m_stk_opt_opn_pnl_clr = value;
        }
        void set_fut_opt_opn_pnl_vol(const fut_opt_opn_pnl_vol& value)  {
            m_fut_opt_opn_pnl_vol = value;
        }
        void set_fut_opt_opn_pnl_mid(const fut_opt_opn_pnl_mid& value)  {
            m_fut_opt_opn_pnl_mid = value;
        }
        void set_fut_opt_opn_pnl_clr(const fut_opt_opn_pnl_clr& value)  {
            m_fut_opt_opn_pnl_clr = value;
        }
        void set_stk_day_pnl(const stk_day_pnl& value)  {
            m_stk_day_pnl = value;
        }
        void set_fut_day_pnl(const fut_day_pnl& value)  {
            m_fut_day_pnl = value;
        }
        void set_stk_opt_day_pnl(const stk_opt_day_pnl& value)  {
            m_stk_opt_day_pnl = value;
        }
        void set_fut_opt_day_pnl(const fut_opt_day_pnl& value)  {
            m_fut_opt_day_pnl = value;
        }
        void set_stkt_day_sh(const stkt_day_sh& value)  {
            m_stkt_day_sh = value;
        }
        void set_stk_day_mny(const stk_day_mny& value)  {
            m_stk_day_mny = value;
        }
        void set_fut_day_cn(const fut_day_cn& value)  {
            m_fut_day_cn = value;
        }
        void set_fut_day_mny(const fut_day_mny& value)  {
            m_fut_day_mny = value;
        }
        void set_stk_opt_day_cn(const stk_opt_day_cn& value)  {
            m_stk_opt_day_cn = value;
        }
        void set_stk_opt_day_mny(const stk_opt_day_mny& value)  {
            m_stk_opt_day_mny = value;
        }
        void set_fut_opt_day_cn(const fut_opt_day_cn& value)  {
            m_fut_opt_day_cn = value;
        }
        void set_fut_opt_day_mny(const fut_opt_day_mny& value)  {
            m_fut_opt_day_mny = value;
        }
        void set_day_ddelta(const day_ddelta& value)  {
            m_day_ddelta = value;
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
        void set_pnl_ddiv(const pnl_ddiv& value)  {
            m_pnl_ddiv = value;
        }
        void set_pnl_sdiv(const pnl_sdiv& value)  {
            m_pnl_sdiv = value;
        }
        void set_pnl_rate(const pnl_rate& value)  {
            m_pnl_rate = value;
        }
        void set_pnl_err(const pnl_err& value)  {
            m_pnl_err = value;
        }
        void set_pnl_te(const pnl_te& value)  {
            m_pnl_te = value;
        }
        void set_pnl_ln(const pnl_ln& value)  {
            m_pnl_ln = value;
        }
        void set_pnl_sh(const pnl_sh& value)  {
            m_pnl_sh = value;
        }
        void set_t_edge(const t_edge& value)  {
            m_t_edge = value;
        }
        void set_t_edge_mult(const t_edge_mult& value)  {
            m_t_edge_mult = value;
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
        void set_hc_cnt(const hc_cnt& value)  {
            m_hc_cnt = value;
        }
        void set_haircut25(const haircut25& value)  {
            m_haircut25 = value;
        }
        void set_haircut37(const haircut37& value)  {
            m_haircut37 = value;
        }
        void set_opt_cn_minimum(const opt_cn_minimum& value)  {
            m_opt_cn_minimum = value;
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
        void set_worst3_risk(const worst3_risk& value)  {
            m_worst3_risk = value;
        }
        void set_worst_sym1(const worst_sym1& value)  {
            m_worst_sym1 = value;
        }
        void set_worst_sym2(const worst_sym2& value)  {
            m_worst_sym2 = value;
        }
        void set_worst_sym3(const worst_sym3& value)  {
            m_worst_sym3 = value;
        }
        void set_stk_liq_risk(const stk_liq_risk& value)  {
            m_stk_liq_risk = value;
        }
        void set_fut_liq_risk(const fut_liq_risk& value)  {
            m_fut_liq_risk = value;
        }
        void set_opt_liq_risk(const opt_liq_risk& value)  {
            m_opt_liq_risk = value;
        }
        void set_sr_risk_margin(const sr_risk_margin& value)  {
            m_sr_risk_margin = value;
        }
        void set_last_activity(const last_activity& value)  {
            m_last_activity = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AccountRiskRecordV5::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const ln_stk_mkt_value & value) {
            set_ln_stk_mkt_value(value);
        }
        void set(const sh_stk_mkt_value & value) {
            set_sh_stk_mkt_value(value);
        }
        void set(const fut_mkt_value & value) {
            set_fut_mkt_value(value);
        }
        void set(const stk_opt_mkt_value & value) {
            set_stk_opt_mkt_value(value);
        }
        void set(const fut_opt_mkt_value & value) {
            set_fut_opt_mkt_value(value);
        }
        void set(const vega_long & value) {
            set_vega_long(value);
        }
        void set(const vega_short & value) {
            set_vega_short(value);
        }
        void set(const w_vega_long & value) {
            set_w_vega_long(value);
        }
        void set(const w_vega_short & value) {
            set_w_vega_short(value);
        }
        void set(const wt_vega_long & value) {
            set_wt_vega_long(value);
        }
        void set(const wt_vega_short & value) {
            set_wt_vega_short(value);
        }
        void set(const theta_long & value) {
            set_theta_long(value);
        }
        void set(const theta_short & value) {
            set_theta_short(value);
        }
        void set(const rho_long & value) {
            set_rho_long(value);
        }
        void set(const rho_short & value) {
            set_rho_short(value);
        }
        void set(const ivol_ln & value) {
            set_ivol_ln(value);
        }
        void set(const ivol_sh & value) {
            set_ivol_sh(value);
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
        void set(const ddelta & value) {
            set_ddelta(value);
        }
        void set(const num_symbols & value) {
            set_num_symbols(value);
        }
        void set(const abs_cur_sh & value) {
            set_abs_cur_sh(value);
        }
        void set(const abs_cur_fc & value) {
            set_abs_cur_fc(value);
        }
        void set(const abs_cur_cn & value) {
            set_abs_cur_cn(value);
        }
        void set(const prem_ov_par & value) {
            set_prem_ov_par(value);
        }
        void set(const opt_ex_as_pnl & value) {
            set_opt_ex_as_pnl(value);
        }
        void set(const dividend_pnl & value) {
            set_dividend_pnl(value);
        }
        void set(const corp_act_cash_pn_l & value) {
            set_corp_act_cash_pn_l(value);
        }
        void set(const stk_opn_pnl_mid & value) {
            set_stk_opn_pnl_mid(value);
        }
        void set(const stk_opn_pnl_clr & value) {
            set_stk_opn_pnl_clr(value);
        }
        void set(const fut_opn_pnl_mid & value) {
            set_fut_opn_pnl_mid(value);
        }
        void set(const fut_opn_pnl_clr & value) {
            set_fut_opn_pnl_clr(value);
        }
        void set(const stk_opt_opn_pnl_vol & value) {
            set_stk_opt_opn_pnl_vol(value);
        }
        void set(const stk_opt_opn_pnl_mid & value) {
            set_stk_opt_opn_pnl_mid(value);
        }
        void set(const stk_opt_opn_pnl_clr & value) {
            set_stk_opt_opn_pnl_clr(value);
        }
        void set(const fut_opt_opn_pnl_vol & value) {
            set_fut_opt_opn_pnl_vol(value);
        }
        void set(const fut_opt_opn_pnl_mid & value) {
            set_fut_opt_opn_pnl_mid(value);
        }
        void set(const fut_opt_opn_pnl_clr & value) {
            set_fut_opt_opn_pnl_clr(value);
        }
        void set(const stk_day_pnl & value) {
            set_stk_day_pnl(value);
        }
        void set(const fut_day_pnl & value) {
            set_fut_day_pnl(value);
        }
        void set(const stk_opt_day_pnl & value) {
            set_stk_opt_day_pnl(value);
        }
        void set(const fut_opt_day_pnl & value) {
            set_fut_opt_day_pnl(value);
        }
        void set(const stkt_day_sh & value) {
            set_stkt_day_sh(value);
        }
        void set(const stk_day_mny & value) {
            set_stk_day_mny(value);
        }
        void set(const fut_day_cn & value) {
            set_fut_day_cn(value);
        }
        void set(const fut_day_mny & value) {
            set_fut_day_mny(value);
        }
        void set(const stk_opt_day_cn & value) {
            set_stk_opt_day_cn(value);
        }
        void set(const stk_opt_day_mny & value) {
            set_stk_opt_day_mny(value);
        }
        void set(const fut_opt_day_cn & value) {
            set_fut_opt_day_cn(value);
        }
        void set(const fut_opt_day_mny & value) {
            set_fut_opt_day_mny(value);
        }
        void set(const day_ddelta & value) {
            set_day_ddelta(value);
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
        void set(const pnl_ddiv & value) {
            set_pnl_ddiv(value);
        }
        void set(const pnl_sdiv & value) {
            set_pnl_sdiv(value);
        }
        void set(const pnl_rate & value) {
            set_pnl_rate(value);
        }
        void set(const pnl_err & value) {
            set_pnl_err(value);
        }
        void set(const pnl_te & value) {
            set_pnl_te(value);
        }
        void set(const pnl_ln & value) {
            set_pnl_ln(value);
        }
        void set(const pnl_sh & value) {
            set_pnl_sh(value);
        }
        void set(const t_edge & value) {
            set_t_edge(value);
        }
        void set(const t_edge_mult & value) {
            set_t_edge_mult(value);
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
        void set(const hc_cnt & value) {
            set_hc_cnt(value);
        }
        void set(const haircut25 & value) {
            set_haircut25(value);
        }
        void set(const haircut37 & value) {
            set_haircut37(value);
        }
        void set(const opt_cn_minimum & value) {
            set_opt_cn_minimum(value);
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
        void set(const worst3_risk & value) {
            set_worst3_risk(value);
        }
        void set(const worst_sym1 & value) {
            set_worst_sym1(value);
        }
        void set(const worst_sym2 & value) {
            set_worst_sym2(value);
        }
        void set(const worst_sym3 & value) {
            set_worst_sym3(value);
        }
        void set(const stk_liq_risk & value) {
            set_stk_liq_risk(value);
        }
        void set(const fut_liq_risk & value) {
            set_fut_liq_risk(value);
        }
        void set(const opt_liq_risk & value) {
            set_opt_liq_risk(value);
        }
        void set(const sr_risk_margin & value) {
            set_sr_risk_margin(value);
        }
        void set(const last_activity & value) {
            set_last_activity(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const AccountRiskRecordV5 & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ln_ddelta);
            set(value.m_sh_ddelta);
            set(value.m_ln_stk_mkt_value);
            set(value.m_sh_stk_mkt_value);
            set(value.m_fut_mkt_value);
            set(value.m_stk_opt_mkt_value);
            set(value.m_fut_opt_mkt_value);
            set(value.m_vega_long);
            set(value.m_vega_short);
            set(value.m_w_vega_long);
            set(value.m_w_vega_short);
            set(value.m_wt_vega_long);
            set(value.m_wt_vega_short);
            set(value.m_theta_long);
            set(value.m_theta_short);
            set(value.m_rho_long);
            set(value.m_rho_short);
            set(value.m_ivol_ln);
            set(value.m_ivol_sh);
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
            set(value.m_ddelta);
            set(value.m_num_symbols);
            set(value.m_abs_cur_sh);
            set(value.m_abs_cur_fc);
            set(value.m_abs_cur_cn);
            set(value.m_prem_ov_par);
            set(value.m_opt_ex_as_pnl);
            set(value.m_dividend_pnl);
            set(value.m_corp_act_cash_pn_l);
            set(value.m_stk_opn_pnl_mid);
            set(value.m_stk_opn_pnl_clr);
            set(value.m_fut_opn_pnl_mid);
            set(value.m_fut_opn_pnl_clr);
            set(value.m_stk_opt_opn_pnl_vol);
            set(value.m_stk_opt_opn_pnl_mid);
            set(value.m_stk_opt_opn_pnl_clr);
            set(value.m_fut_opt_opn_pnl_vol);
            set(value.m_fut_opt_opn_pnl_mid);
            set(value.m_fut_opt_opn_pnl_clr);
            set(value.m_stk_day_pnl);
            set(value.m_fut_day_pnl);
            set(value.m_stk_opt_day_pnl);
            set(value.m_fut_opt_day_pnl);
            set(value.m_stkt_day_sh);
            set(value.m_stk_day_mny);
            set(value.m_fut_day_cn);
            set(value.m_fut_day_mny);
            set(value.m_stk_opt_day_cn);
            set(value.m_stk_opt_day_mny);
            set(value.m_fut_opt_day_cn);
            set(value.m_fut_opt_day_mny);
            set(value.m_day_ddelta);
            set(value.m_op_day_vega);
            set(value.m_op_day_wvega);
            set(value.m_op_day_tvega);
            set(value.m_op_day_wt_vega);
            set(value.m_op_day_theta);
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
            set(value.m_pnl_ddiv);
            set(value.m_pnl_sdiv);
            set(value.m_pnl_rate);
            set(value.m_pnl_err);
            set(value.m_pnl_te);
            set(value.m_pnl_ln);
            set(value.m_pnl_sh);
            set(value.m_t_edge);
            set(value.m_t_edge_mult);
            set(value.m_pos_tedge_pnl);
            set(value.m_neg_tedge_pnl);
            set(value.m_bad_tedge_pnl);
            set(value.m_va_rsu90);
            set(value.m_va_rsd90);
            set(value.m_va_rsu50);
            set(value.m_va_rsd50);
            set(value.m_va_rsu15);
            set(value.m_va_rsd15);
            set(value.m_va_rsu10);
            set(value.m_va_rsd10);
            set(value.m_va_rsu05);
            set(value.m_va_rsd05);
            set(value.m_va_rsu1e);
            set(value.m_va_rsd1e);
            set(value.m_va_rsu2e);
            set(value.m_va_rsd2e);
            set(value.m_va_rearn);
            set(value.m_va_rcash);
            set(value.m_hc_cnt);
            set(value.m_haircut25);
            set(value.m_haircut37);
            set(value.m_opt_cn_minimum);
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
            set(value.m_worst3_risk);
            set(value.m_worst_sym1);
            set(value.m_worst_sym2);
            set(value.m_worst_sym3);
            set(value.m_stk_liq_risk);
            set(value.m_fut_liq_risk);
            set(value.m_opt_liq_risk);
            set(value.m_sr_risk_margin);
            set(value.m_last_activity);
            set(value.m_timestamp);
        }

        AccountRiskRecordV5() {
            m__meta.set_message_type("AccountRiskRecordV5");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4745, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4745, length);
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
             *this = AccountRiskRecordV5{};
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
        bool IncludeLnStkMktValue() const {
            return !(m_ln_stk_mkt_value == 0.0);
        }
        bool IncludeShStkMktValue() const {
            return !(m_sh_stk_mkt_value == 0.0);
        }
        bool IncludeFutMktValue() const {
            return !(m_fut_mkt_value == 0.0);
        }
        bool IncludeStkOptMktValue() const {
            return !(m_stk_opt_mkt_value == 0.0);
        }
        bool IncludeFutOptMktValue() const {
            return !(m_fut_opt_mkt_value == 0.0);
        }
        bool IncludeVegaLong() const {
            return !(m_vega_long == 0.0);
        }
        bool IncludeVegaShort() const {
            return !(m_vega_short == 0.0);
        }
        bool IncludeWVegaLong() const {
            return !(m_w_vega_long == 0.0);
        }
        bool IncludeWVegaShort() const {
            return !(m_w_vega_short == 0.0);
        }
        bool IncludeWtVegaLong() const {
            return !(m_wt_vega_long == 0.0);
        }
        bool IncludeWtVegaShort() const {
            return !(m_wt_vega_short == 0.0);
        }
        bool IncludeThetaLong() const {
            return !(m_theta_long == 0.0);
        }
        bool IncludeThetaShort() const {
            return !(m_theta_short == 0.0);
        }
        bool IncludeRhoLong() const {
            return !(m_rho_long == 0.0);
        }
        bool IncludeRhoShort() const {
            return !(m_rho_short == 0.0);
        }
        bool IncludeIvolLn() const {
            return !(m_ivol_ln == 0.0);
        }
        bool IncludeIvolSh() const {
            return !(m_ivol_sh == 0.0);
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
        bool IncludeDdelta() const {
            return !(m_ddelta == 0.0);
        }
        bool IncludeNumSymbols() const {
            return !(m_num_symbols == 0);
        }
        bool IncludeAbsCurSh() const {
            return !(m_abs_cur_sh == 0);
        }
        bool IncludeAbsCurFc() const {
            return !(m_abs_cur_fc == 0);
        }
        bool IncludeAbsCurCn() const {
            return !(m_abs_cur_cn == 0);
        }
        bool IncludePremOvPar() const {
            return !(m_prem_ov_par == 0.0);
        }
        bool IncludeOptExAsPnl() const {
            return !(m_opt_ex_as_pnl == 0.0);
        }
        bool IncludeDividendPnl() const {
            return !(m_dividend_pnl == 0.0);
        }
        bool IncludeCorpActCashPnL() const {
            return !(m_corp_act_cash_pn_l == 0.0);
        }
        bool IncludeStkOpnPnlMid() const {
            return !(m_stk_opn_pnl_mid == 0.0);
        }
        bool IncludeStkOpnPnlClr() const {
            return !(m_stk_opn_pnl_clr == 0.0);
        }
        bool IncludeFutOpnPnlMid() const {
            return !(m_fut_opn_pnl_mid == 0.0);
        }
        bool IncludeFutOpnPnlClr() const {
            return !(m_fut_opn_pnl_clr == 0.0);
        }
        bool IncludeStkOptOpnPnlVol() const {
            return !(m_stk_opt_opn_pnl_vol == 0.0);
        }
        bool IncludeStkOptOpnPnlMid() const {
            return !(m_stk_opt_opn_pnl_mid == 0.0);
        }
        bool IncludeStkOptOpnPnlClr() const {
            return !(m_stk_opt_opn_pnl_clr == 0.0);
        }
        bool IncludeFutOptOpnPnlVol() const {
            return !(m_fut_opt_opn_pnl_vol == 0.0);
        }
        bool IncludeFutOptOpnPnlMid() const {
            return !(m_fut_opt_opn_pnl_mid == 0.0);
        }
        bool IncludeFutOptOpnPnlClr() const {
            return !(m_fut_opt_opn_pnl_clr == 0.0);
        }
        bool IncludeStkDayPnl() const {
            return !(m_stk_day_pnl == 0.0);
        }
        bool IncludeFutDayPnl() const {
            return !(m_fut_day_pnl == 0.0);
        }
        bool IncludeStkOptDayPnl() const {
            return !(m_stk_opt_day_pnl == 0.0);
        }
        bool IncludeFutOptDayPnl() const {
            return !(m_fut_opt_day_pnl == 0.0);
        }
        bool IncludeStktDaySh() const {
            return !(m_stkt_day_sh == 0);
        }
        bool IncludeStkDayMny() const {
            return !(m_stk_day_mny == 0.0);
        }
        bool IncludeFutDayCn() const {
            return !(m_fut_day_cn == 0);
        }
        bool IncludeFutDayMny() const {
            return !(m_fut_day_mny == 0.0);
        }
        bool IncludeStkOptDayCn() const {
            return !(m_stk_opt_day_cn == 0);
        }
        bool IncludeStkOptDayMny() const {
            return !(m_stk_opt_day_mny == 0.0);
        }
        bool IncludeFutOptDayCn() const {
            return !(m_fut_opt_day_cn == 0);
        }
        bool IncludeFutOptDayMny() const {
            return !(m_fut_opt_day_mny == 0.0);
        }
        bool IncludeDayDdelta() const {
            return !(m_day_ddelta == 0.0);
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
        bool IncludePnlDdiv() const {
            return !(m_pnl_ddiv == 0.0);
        }
        bool IncludePnlSdiv() const {
            return !(m_pnl_sdiv == 0.0);
        }
        bool IncludePnlRate() const {
            return !(m_pnl_rate == 0.0);
        }
        bool IncludePnlErr() const {
            return !(m_pnl_err == 0.0);
        }
        bool IncludePnlTe() const {
            return !(m_pnl_te == 0.0);
        }
        bool IncludePnlLn() const {
            return !(m_pnl_ln == 0.0);
        }
        bool IncludePnlSh() const {
            return !(m_pnl_sh == 0.0);
        }
        bool IncludeTEdge() const {
            return !(m_t_edge == 0.0);
        }
        bool IncludeTEdgeMult() const {
            return !(m_t_edge_mult == 0.0);
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
        bool IncludeHcCnt() const {
            return !(m_hc_cnt == 0.0);
        }
        bool IncludeHaircut25() const {
            return !(m_haircut25 == 0.0);
        }
        bool IncludeHaircut37() const {
            return !(m_haircut37 == 0.0);
        }
        bool IncludeOptCnMinimum() const {
            return !(m_opt_cn_minimum == 0.0);
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
        bool IncludeWorst3Risk() const {
            return !(m_worst3_risk == 0.0);
        }
        bool IncludeWorstSym1() const {
            return (m_worst_sym1.ByteSizeLong() > 0);
        }
        bool IncludeWorstSym2() const {
            return (m_worst_sym2.ByteSizeLong() > 0);
        }
        bool IncludeWorstSym3() const {
            return (m_worst_sym3.ByteSizeLong() > 0);
        }
        bool IncludeStkLiqRisk() const {
            return !(m_stk_liq_risk == 0.0);
        }
        bool IncludeFutLiqRisk() const {
            return !(m_fut_liq_risk == 0.0);
        }
        bool IncludeOptLiqRisk() const {
            return !(m_opt_liq_risk == 0.0);
        }
        bool IncludeSrRiskMargin() const {
            return !(m_sr_risk_margin == 0.0);
        }
        bool IncludeLastActivity() const {
            return (m_last_activity.time_since_epoch().count() != 0);
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
            if ( IncludeLnStkMktValue()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(112,m_ln_stk_mkt_value);
            }
            if ( IncludeShStkMktValue()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(115,m_sh_stk_mkt_value);
            }
            if ( IncludeFutMktValue()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(118,m_fut_mkt_value);
            }
            if ( IncludeStkOptMktValue()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(121,m_stk_opt_mkt_value);
            }
            if ( IncludeFutOptMktValue()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(124,m_fut_opt_mkt_value);
            }
            if ( IncludeVegaLong()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_vega_long);
            }
            if ( IncludeVegaShort()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_vega_short);
            }
            if ( IncludeWVegaLong()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_w_vega_long);
            }
            if ( IncludeWVegaShort()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_w_vega_short);
            }
            if ( IncludeWtVegaLong()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_wt_vega_long);
            }
            if ( IncludeWtVegaShort()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_wt_vega_short);
            }
            if ( IncludeThetaLong()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(145,m_theta_long);
            }
            if ( IncludeThetaShort()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(148,m_theta_short);
            }
            if ( IncludeRhoLong()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(151,m_rho_long);
            }
            if ( IncludeRhoShort()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(154,m_rho_short);
            }
            if ( IncludeIvolLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_ivol_ln);
            }
            if ( IncludeIvolSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(160,m_ivol_sh);
            }
            if ( IncludeWtVeDd()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_wt_ve_dd);
            }
            if ( IncludeWtVeDn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_wt_ve_dn);
            }
            if ( IncludeWtVeAt()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(169,m_wt_ve_at);
            }
            if ( IncludeWtVeUp()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(172,m_wt_ve_up);
            }
            if ( IncludeWtVeDu()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(175,m_wt_ve_du);
            }
            if ( IncludeWtVeM1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_wt_ve_m1);
            }
            if ( IncludeWtVeM2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(181,m_wt_ve_m2);
            }
            if ( IncludeWtVeM3()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(184,m_wt_ve_m3);
            }
            if ( IncludeWtVeM4()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(187,m_wt_ve_m4);
            }
            if ( IncludeWtVeM5()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(190,m_wt_ve_m5);
            }
            if ( IncludeDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(193,m_ddelta);
            }
            if ( IncludeNumSymbols()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(196,m_num_symbols);
            }
            if ( IncludeAbsCurSh()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(199,m_abs_cur_sh);
            }
            if ( IncludeAbsCurFc()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(202,m_abs_cur_fc);
            }
            if ( IncludeAbsCurCn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(205,m_abs_cur_cn);
            }
            if ( IncludePremOvPar()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(208,m_prem_ov_par);
            }
            if ( IncludeOptExAsPnl()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(211,m_opt_ex_as_pnl);
            }
            if ( IncludeDividendPnl()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(214,m_dividend_pnl);
            }
            if ( IncludeCorpActCashPnL()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(217,m_corp_act_cash_pn_l);
            }
            if ( IncludeStkOpnPnlMid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(220,m_stk_opn_pnl_mid);
            }
            if ( IncludeStkOpnPnlClr()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(223,m_stk_opn_pnl_clr);
            }
            if ( IncludeFutOpnPnlMid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(226,m_fut_opn_pnl_mid);
            }
            if ( IncludeFutOpnPnlClr()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(229,m_fut_opn_pnl_clr);
            }
            if ( IncludeStkOptOpnPnlVol()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(232,m_stk_opt_opn_pnl_vol);
            }
            if ( IncludeStkOptOpnPnlMid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(235,m_stk_opt_opn_pnl_mid);
            }
            if ( IncludeStkOptOpnPnlClr()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(238,m_stk_opt_opn_pnl_clr);
            }
            if ( IncludeFutOptOpnPnlVol()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(241,m_fut_opt_opn_pnl_vol);
            }
            if ( IncludeFutOptOpnPnlMid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(244,m_fut_opt_opn_pnl_mid);
            }
            if ( IncludeFutOptOpnPnlClr()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(247,m_fut_opt_opn_pnl_clr);
            }
            if ( IncludeStkDayPnl()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(250,m_stk_day_pnl);
            }
            if ( IncludeFutDayPnl()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(253,m_fut_day_pnl);
            }
            if ( IncludeStkOptDayPnl()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(256,m_stk_opt_day_pnl);
            }
            if ( IncludeFutOptDayPnl()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(259,m_fut_opt_day_pnl);
            }
            if ( IncludeStktDaySh()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(262,m_stkt_day_sh);
            }
            if ( IncludeStkDayMny()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(265,m_stk_day_mny);
            }
            if ( IncludeFutDayCn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(268,m_fut_day_cn);
            }
            if ( IncludeFutDayMny()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(271,m_fut_day_mny);
            }
            if ( IncludeStkOptDayCn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(274,m_stk_opt_day_cn);
            }
            if ( IncludeStkOptDayMny()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(277,m_stk_opt_day_mny);
            }
            if ( IncludeFutOptDayCn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(280,m_fut_opt_day_cn);
            }
            if ( IncludeFutOptDayMny()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(283,m_fut_opt_day_mny);
            }
            if ( IncludeDayDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(286,m_day_ddelta);
            }
            if ( IncludeOpDayVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(289,m_op_day_vega);
            }
            if ( IncludeOpDayWvega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(292,m_op_day_wvega);
            }
            if ( IncludeOpDayTvega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(295,m_op_day_tvega);
            }
            if ( IncludeOpDayWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(298,m_op_day_wt_vega);
            }
            if ( IncludeOpDayTheta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(301,m_op_day_theta);
            }
            if ( IncludeOpEdgeOpened()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(304,m_op_edge_opened);
            }
            if ( IncludeOpEdgeClosed()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(307,m_op_edge_closed);
            }
            if ( IncludePnlDn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(310,m_pnl_dn);
            }
            if ( IncludePnlDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(313,m_pnl_de);
            }
            if ( IncludePnlSl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(316,m_pnl_sl);
            }
            if ( IncludePnlGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(319,m_pnl_ga);
            }
            if ( IncludePnlTh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(322,m_pnl_th);
            }
            if ( IncludePnlVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(325,m_pnl_ve);
            }
            if ( IncludePnlVo()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(328,m_pnl_vo);
            }
            if ( IncludePnlVa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(331,m_pnl_va);
            }
            if ( IncludePnlDdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(334,m_pnl_ddiv);
            }
            if ( IncludePnlSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(337,m_pnl_sdiv);
            }
            if ( IncludePnlRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(340,m_pnl_rate);
            }
            if ( IncludePnlErr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(343,m_pnl_err);
            }
            if ( IncludePnlTe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(346,m_pnl_te);
            }
            if ( IncludePnlLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(349,m_pnl_ln);
            }
            if ( IncludePnlSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(352,m_pnl_sh);
            }
            if ( IncludeTEdge()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(355,m_t_edge);
            }
            if ( IncludeTEdgeMult()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(358,m_t_edge_mult);
            }
            if ( IncludePosTedgePnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(361,m_pos_tedge_pnl);
            }
            if ( IncludeNegTedgePnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(364,m_neg_tedge_pnl);
            }
            if ( IncludeBadTedgePnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(367,m_bad_tedge_pnl);
            }
            if ( IncludeVaRsu90()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(370,m_va_rsu90);
            }
            if ( IncludeVaRsd90()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(373,m_va_rsd90);
            }
            if ( IncludeVaRsu50()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(376,m_va_rsu50);
            }
            if ( IncludeVaRsd50()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(379,m_va_rsd50);
            }
            if ( IncludeVaRsu15()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(382,m_va_rsu15);
            }
            if ( IncludeVaRsd15()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(385,m_va_rsd15);
            }
            if ( IncludeVaRsu10()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(388,m_va_rsu10);
            }
            if ( IncludeVaRsd10()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(391,m_va_rsd10);
            }
            if ( IncludeVaRsu05()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(394,m_va_rsu05);
            }
            if ( IncludeVaRsd05()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(397,m_va_rsd05);
            }
            if ( IncludeVaRsu1e()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(400,m_va_rsu1e);
            }
            if ( IncludeVaRsd1e()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(403,m_va_rsd1e);
            }
            if ( IncludeVaRsu2e()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(406,m_va_rsu2e);
            }
            if ( IncludeVaRsd2e()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(409,m_va_rsd2e);
            }
            if ( IncludeVaRearn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(412,m_va_rearn);
            }
            if ( IncludeVaRcash()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(415,m_va_rcash);
            }
            if ( IncludeHcCnt()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(418,m_hc_cnt);
            }
            if ( IncludeHaircut25()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(421,m_haircut25);
            }
            if ( IncludeHaircut37()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(424,m_haircut37);
            }
            if ( IncludeOptCnMinimum()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(427,m_opt_cn_minimum);
            }
            if ( IncludeSpan01()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(430,m_span01);
            }
            if ( IncludeSpan02()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(433,m_span02);
            }
            if ( IncludeSpan03()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(436,m_span03);
            }
            if ( IncludeSpan04()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(439,m_span04);
            }
            if ( IncludeSpan05()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(442,m_span05);
            }
            if ( IncludeSpan06()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(445,m_span06);
            }
            if ( IncludeSpan07()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(448,m_span07);
            }
            if ( IncludeSpan08()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(451,m_span08);
            }
            if ( IncludeSpan09()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(454,m_span09);
            }
            if ( IncludeSpan10()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(457,m_span10);
            }
            if ( IncludeSpan11()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(460,m_span11);
            }
            if ( IncludeSpan12()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(463,m_span12);
            }
            if ( IncludeSpan13()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(466,m_span13);
            }
            if ( IncludeSpan14()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(469,m_span14);
            }
            if ( IncludeSpan15()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(472,m_span15);
            }
            if ( IncludeSpan16()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(475,m_span16);
            }
            if ( IncludeWorst3Risk()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(478,m_worst3_risk);
            }
            if ( IncludeWorstSym1()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_worst_sym1{};
                m_worst_sym1.setCodecTickerKey(tickerKeyLayout_worst_sym1);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(481, tickerKeyLayout_worst_sym1);
            }
            if ( IncludeWorstSym2()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_worst_sym2{};
                m_worst_sym2.setCodecTickerKey(tickerKeyLayout_worst_sym2);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(484, tickerKeyLayout_worst_sym2);
            }
            if ( IncludeWorstSym3()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_worst_sym3{};
                m_worst_sym3.setCodecTickerKey(tickerKeyLayout_worst_sym3);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(487, tickerKeyLayout_worst_sym3);
            }
            if ( IncludeStkLiqRisk()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(490,m_stk_liq_risk);
            }
            if ( IncludeFutLiqRisk()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(493,m_fut_liq_risk);
            }
            if ( IncludeOptLiqRisk()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(496,m_opt_liq_risk);
            }
            if ( IncludeSrRiskMargin()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(499,m_sr_risk_margin);
            }
            if ( IncludeLastActivity()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(502, m_last_activity);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(505, m_timestamp);
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
            if ( IncludeLnStkMktValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,112,m_ln_stk_mkt_value);
            }
            if ( IncludeShStkMktValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,115,m_sh_stk_mkt_value);
            }
            if ( IncludeFutMktValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,118,m_fut_mkt_value);
            }
            if ( IncludeStkOptMktValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,121,m_stk_opt_mkt_value);
            }
            if ( IncludeFutOptMktValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,124,m_fut_opt_mkt_value);
            }
            if ( IncludeVegaLong()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_vega_long);
            }
            if ( IncludeVegaShort()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_vega_short);
            }
            if ( IncludeWVegaLong()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_w_vega_long);
            }
            if ( IncludeWVegaShort()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_w_vega_short);
            }
            if ( IncludeWtVegaLong()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_wt_vega_long);
            }
            if ( IncludeWtVegaShort()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_wt_vega_short);
            }
            if ( IncludeThetaLong()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,145,m_theta_long);
            }
            if ( IncludeThetaShort()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,148,m_theta_short);
            }
            if ( IncludeRhoLong()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,151,m_rho_long);
            }
            if ( IncludeRhoShort()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,154,m_rho_short);
            }
            if ( IncludeIvolLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_ivol_ln);
            }
            if ( IncludeIvolSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,160,m_ivol_sh);
            }
            if ( IncludeWtVeDd()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_wt_ve_dd);
            }
            if ( IncludeWtVeDn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_wt_ve_dn);
            }
            if ( IncludeWtVeAt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,169,m_wt_ve_at);
            }
            if ( IncludeWtVeUp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,172,m_wt_ve_up);
            }
            if ( IncludeWtVeDu()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,175,m_wt_ve_du);
            }
            if ( IncludeWtVeM1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_wt_ve_m1);
            }
            if ( IncludeWtVeM2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,181,m_wt_ve_m2);
            }
            if ( IncludeWtVeM3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,184,m_wt_ve_m3);
            }
            if ( IncludeWtVeM4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,187,m_wt_ve_m4);
            }
            if ( IncludeWtVeM5()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,190,m_wt_ve_m5);
            }
            if ( IncludeDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,193,m_ddelta);
            }
            if ( IncludeNumSymbols()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,196,m_num_symbols);
            }
            if ( IncludeAbsCurSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,199,m_abs_cur_sh);
            }
            if ( IncludeAbsCurFc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,202,m_abs_cur_fc);
            }
            if ( IncludeAbsCurCn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,205,m_abs_cur_cn);
            }
            if ( IncludePremOvPar()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,208,m_prem_ov_par);
            }
            if ( IncludeOptExAsPnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,211,m_opt_ex_as_pnl);
            }
            if ( IncludeDividendPnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,214,m_dividend_pnl);
            }
            if ( IncludeCorpActCashPnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,217,m_corp_act_cash_pn_l);
            }
            if ( IncludeStkOpnPnlMid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,220,m_stk_opn_pnl_mid);
            }
            if ( IncludeStkOpnPnlClr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,223,m_stk_opn_pnl_clr);
            }
            if ( IncludeFutOpnPnlMid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,226,m_fut_opn_pnl_mid);
            }
            if ( IncludeFutOpnPnlClr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,229,m_fut_opn_pnl_clr);
            }
            if ( IncludeStkOptOpnPnlVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,232,m_stk_opt_opn_pnl_vol);
            }
            if ( IncludeStkOptOpnPnlMid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,235,m_stk_opt_opn_pnl_mid);
            }
            if ( IncludeStkOptOpnPnlClr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,238,m_stk_opt_opn_pnl_clr);
            }
            if ( IncludeFutOptOpnPnlVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,241,m_fut_opt_opn_pnl_vol);
            }
            if ( IncludeFutOptOpnPnlMid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,244,m_fut_opt_opn_pnl_mid);
            }
            if ( IncludeFutOptOpnPnlClr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,247,m_fut_opt_opn_pnl_clr);
            }
            if ( IncludeStkDayPnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,250,m_stk_day_pnl);
            }
            if ( IncludeFutDayPnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,253,m_fut_day_pnl);
            }
            if ( IncludeStkOptDayPnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,256,m_stk_opt_day_pnl);
            }
            if ( IncludeFutOptDayPnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,259,m_fut_opt_day_pnl);
            }
            if ( IncludeStktDaySh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,262,m_stkt_day_sh);
            }
            if ( IncludeStkDayMny()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,265,m_stk_day_mny);
            }
            if ( IncludeFutDayCn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,268,m_fut_day_cn);
            }
            if ( IncludeFutDayMny()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,271,m_fut_day_mny);
            }
            if ( IncludeStkOptDayCn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,274,m_stk_opt_day_cn);
            }
            if ( IncludeStkOptDayMny()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,277,m_stk_opt_day_mny);
            }
            if ( IncludeFutOptDayCn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,280,m_fut_opt_day_cn);
            }
            if ( IncludeFutOptDayMny()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,283,m_fut_opt_day_mny);
            }
            if ( IncludeDayDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,286,m_day_ddelta);
            }
            if ( IncludeOpDayVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,289,m_op_day_vega);
            }
            if ( IncludeOpDayWvega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,292,m_op_day_wvega);
            }
            if ( IncludeOpDayTvega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,295,m_op_day_tvega);
            }
            if ( IncludeOpDayWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,298,m_op_day_wt_vega);
            }
            if ( IncludeOpDayTheta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,301,m_op_day_theta);
            }
            if ( IncludeOpEdgeOpened()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,304,m_op_edge_opened);
            }
            if ( IncludeOpEdgeClosed()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,307,m_op_edge_closed);
            }
            if ( IncludePnlDn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,310,m_pnl_dn);
            }
            if ( IncludePnlDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,313,m_pnl_de);
            }
            if ( IncludePnlSl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,316,m_pnl_sl);
            }
            if ( IncludePnlGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,319,m_pnl_ga);
            }
            if ( IncludePnlTh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,322,m_pnl_th);
            }
            if ( IncludePnlVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,325,m_pnl_ve);
            }
            if ( IncludePnlVo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,328,m_pnl_vo);
            }
            if ( IncludePnlVa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,331,m_pnl_va);
            }
            if ( IncludePnlDdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,334,m_pnl_ddiv);
            }
            if ( IncludePnlSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,337,m_pnl_sdiv);
            }
            if ( IncludePnlRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,340,m_pnl_rate);
            }
            if ( IncludePnlErr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,343,m_pnl_err);
            }
            if ( IncludePnlTe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,346,m_pnl_te);
            }
            if ( IncludePnlLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,349,m_pnl_ln);
            }
            if ( IncludePnlSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,352,m_pnl_sh);
            }
            if ( IncludeTEdge()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,355,m_t_edge);
            }
            if ( IncludeTEdgeMult()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,358,m_t_edge_mult);
            }
            if ( IncludePosTedgePnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,361,m_pos_tedge_pnl);
            }
            if ( IncludeNegTedgePnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,364,m_neg_tedge_pnl);
            }
            if ( IncludeBadTedgePnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,367,m_bad_tedge_pnl);
            }
            if ( IncludeVaRsu90()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,370,m_va_rsu90);
            }
            if ( IncludeVaRsd90()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,373,m_va_rsd90);
            }
            if ( IncludeVaRsu50()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,376,m_va_rsu50);
            }
            if ( IncludeVaRsd50()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,379,m_va_rsd50);
            }
            if ( IncludeVaRsu15()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,382,m_va_rsu15);
            }
            if ( IncludeVaRsd15()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,385,m_va_rsd15);
            }
            if ( IncludeVaRsu10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,388,m_va_rsu10);
            }
            if ( IncludeVaRsd10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,391,m_va_rsd10);
            }
            if ( IncludeVaRsu05()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,394,m_va_rsu05);
            }
            if ( IncludeVaRsd05()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,397,m_va_rsd05);
            }
            if ( IncludeVaRsu1e()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,400,m_va_rsu1e);
            }
            if ( IncludeVaRsd1e()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,403,m_va_rsd1e);
            }
            if ( IncludeVaRsu2e()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,406,m_va_rsu2e);
            }
            if ( IncludeVaRsd2e()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,409,m_va_rsd2e);
            }
            if ( IncludeVaRearn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,412,m_va_rearn);
            }
            if ( IncludeVaRcash()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,415,m_va_rcash);
            }
            if ( IncludeHcCnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,418,m_hc_cnt);
            }
            if ( IncludeHaircut25()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,421,m_haircut25);
            }
            if ( IncludeHaircut37()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,424,m_haircut37);
            }
            if ( IncludeOptCnMinimum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,427,m_opt_cn_minimum);
            }
            if ( IncludeSpan01()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,430,m_span01);
            }
            if ( IncludeSpan02()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,433,m_span02);
            }
            if ( IncludeSpan03()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,436,m_span03);
            }
            if ( IncludeSpan04()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,439,m_span04);
            }
            if ( IncludeSpan05()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,442,m_span05);
            }
            if ( IncludeSpan06()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,445,m_span06);
            }
            if ( IncludeSpan07()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,448,m_span07);
            }
            if ( IncludeSpan08()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,451,m_span08);
            }
            if ( IncludeSpan09()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,454,m_span09);
            }
            if ( IncludeSpan10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,457,m_span10);
            }
            if ( IncludeSpan11()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,460,m_span11);
            }
            if ( IncludeSpan12()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,463,m_span12);
            }
            if ( IncludeSpan13()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,466,m_span13);
            }
            if ( IncludeSpan14()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,469,m_span14);
            }
            if ( IncludeSpan15()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,472,m_span15);
            }
            if ( IncludeSpan16()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,475,m_span16);
            }
            if ( IncludeWorst3Risk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,478,m_worst3_risk);
            }
            if ( IncludeWorstSym1()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_worst_sym1{};
                m_worst_sym1.setCodecTickerKey(tickerKeyLayout_worst_sym1);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 481, tickerKeyLayout_worst_sym1);
            }
            if ( IncludeWorstSym2()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_worst_sym2{};
                m_worst_sym2.setCodecTickerKey(tickerKeyLayout_worst_sym2);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 484, tickerKeyLayout_worst_sym2);
            }
            if ( IncludeWorstSym3()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_worst_sym3{};
                m_worst_sym3.setCodecTickerKey(tickerKeyLayout_worst_sym3);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 487, tickerKeyLayout_worst_sym3);
            }
            if ( IncludeStkLiqRisk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,490,m_stk_liq_risk);
            }
            if ( IncludeFutLiqRisk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,493,m_fut_liq_risk);
            }
            if ( IncludeOptLiqRisk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,496,m_opt_liq_risk);
            }
            if ( IncludeSrRiskMargin()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,499,m_sr_risk_margin);
            }
            if ( IncludeLastActivity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 502, m_last_activity);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 505, m_timestamp);
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
                            m_ln_stk_mkt_value = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_sh_stk_mkt_value = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fut_mkt_value = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_stk_opt_mkt_value = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fut_opt_mkt_value = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vega_long = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vega_short = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_w_vega_long = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_w_vega_short = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_vega_long = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_vega_short = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_theta_long = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_theta_short = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rho_long = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rho_short = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ivol_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ivol_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_dd = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_dn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_at = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_up = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_du = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_m1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_m2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_m3 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_m4 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_m5 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ddelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_symbols = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_abs_cur_sh = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_abs_cur_fc = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_abs_cur_cn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prem_ov_par = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_opt_ex_as_pnl = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_dividend_pnl = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_corp_act_cash_pn_l = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_stk_opn_pnl_mid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_stk_opn_pnl_clr = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 226: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fut_opn_pnl_mid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 229: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fut_opn_pnl_clr = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 232: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_stk_opt_opn_pnl_vol = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_stk_opt_opn_pnl_mid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 238: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_stk_opt_opn_pnl_clr = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 241: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fut_opt_opn_pnl_vol = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 244: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fut_opt_opn_pnl_mid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 247: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fut_opt_opn_pnl_clr = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 250: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_stk_day_pnl = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 253: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fut_day_pnl = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 256: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_stk_opt_day_pnl = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 259: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fut_opt_day_pnl = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 262: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_stkt_day_sh = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 265: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_stk_day_mny = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 268: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fut_day_cn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 271: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fut_day_mny = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 274: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_stk_opt_day_cn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 277: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_stk_opt_day_mny = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 280: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fut_opt_day_cn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 283: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fut_opt_day_mny = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 286: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_ddelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 289: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_day_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 292: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_day_wvega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 295: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_day_tvega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 298: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_day_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 301: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_day_theta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 304: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_edge_opened = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 307: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_edge_closed = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 310: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_dn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 313: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 316: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_sl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 319: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 322: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_th = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 325: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 328: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_vo = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 331: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_va = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 334: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_ddiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 337: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 340: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 343: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_err = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 346: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_te = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 349: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 352: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 355: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_edge = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 358: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_edge_mult = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 361: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_tedge_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 364: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_neg_tedge_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 367: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bad_tedge_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 370: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsu90 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 373: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsd90 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 376: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsu50 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 379: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsd50 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 382: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsu15 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 385: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsd15 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 388: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsu10 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 391: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsd10 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 394: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsu05 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 397: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsd05 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 400: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsu1e = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 403: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsd1e = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 406: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsu2e = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 409: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsd2e = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 412: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rearn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 415: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rcash = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 418: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_hc_cnt = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 421: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_haircut25 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 424: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_haircut37 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 427: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opt_cn_minimum = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 430: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span01 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 433: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span02 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 436: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span03 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 439: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span04 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 442: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span05 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 445: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span06 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 448: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span07 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 451: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span08 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 454: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span09 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 457: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span10 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 460: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span11 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 463: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span12 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 466: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span13 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 469: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span14 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 472: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span15 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 475: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span16 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 478: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_worst3_risk = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 481: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_worst_sym1.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 484: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_worst_sym2.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 487: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_worst_sym3.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 490: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_stk_liq_risk = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 493: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fut_liq_risk = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 496: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opt_liq_risk = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 499: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sr_risk_margin = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 502: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_last_activity = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 505: {
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

    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::_meta>() const { return AccountRiskRecordV5::_meta{ m__meta}; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::pkey>() const { return AccountRiskRecordV5::pkey{ m_pkey}; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::ln_ddelta>() const { return m_ln_ddelta; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::sh_ddelta>() const { return m_sh_ddelta; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::ln_stk_mkt_value>() const { return m_ln_stk_mkt_value; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::sh_stk_mkt_value>() const { return m_sh_stk_mkt_value; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::fut_mkt_value>() const { return m_fut_mkt_value; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::stk_opt_mkt_value>() const { return m_stk_opt_mkt_value; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::fut_opt_mkt_value>() const { return m_fut_opt_mkt_value; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::vega_long>() const { return m_vega_long; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::vega_short>() const { return m_vega_short; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::w_vega_long>() const { return m_w_vega_long; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::w_vega_short>() const { return m_w_vega_short; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::wt_vega_long>() const { return m_wt_vega_long; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::wt_vega_short>() const { return m_wt_vega_short; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::theta_long>() const { return m_theta_long; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::theta_short>() const { return m_theta_short; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::rho_long>() const { return m_rho_long; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::rho_short>() const { return m_rho_short; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::ivol_ln>() const { return m_ivol_ln; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::ivol_sh>() const { return m_ivol_sh; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::wt_ve_dd>() const { return m_wt_ve_dd; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::wt_ve_dn>() const { return m_wt_ve_dn; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::wt_ve_at>() const { return m_wt_ve_at; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::wt_ve_up>() const { return m_wt_ve_up; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::wt_ve_du>() const { return m_wt_ve_du; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::wt_ve_m1>() const { return m_wt_ve_m1; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::wt_ve_m2>() const { return m_wt_ve_m2; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::wt_ve_m3>() const { return m_wt_ve_m3; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::wt_ve_m4>() const { return m_wt_ve_m4; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::wt_ve_m5>() const { return m_wt_ve_m5; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::ddelta>() const { return m_ddelta; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::num_symbols>() const { return m_num_symbols; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::abs_cur_sh>() const { return m_abs_cur_sh; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::abs_cur_fc>() const { return m_abs_cur_fc; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::abs_cur_cn>() const { return m_abs_cur_cn; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::prem_ov_par>() const { return m_prem_ov_par; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::opt_ex_as_pnl>() const { return m_opt_ex_as_pnl; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::dividend_pnl>() const { return m_dividend_pnl; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::corp_act_cash_pn_l>() const { return m_corp_act_cash_pn_l; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::stk_opn_pnl_mid>() const { return m_stk_opn_pnl_mid; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::stk_opn_pnl_clr>() const { return m_stk_opn_pnl_clr; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::fut_opn_pnl_mid>() const { return m_fut_opn_pnl_mid; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::fut_opn_pnl_clr>() const { return m_fut_opn_pnl_clr; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::stk_opt_opn_pnl_vol>() const { return m_stk_opt_opn_pnl_vol; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::stk_opt_opn_pnl_mid>() const { return m_stk_opt_opn_pnl_mid; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::stk_opt_opn_pnl_clr>() const { return m_stk_opt_opn_pnl_clr; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::fut_opt_opn_pnl_vol>() const { return m_fut_opt_opn_pnl_vol; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::fut_opt_opn_pnl_mid>() const { return m_fut_opt_opn_pnl_mid; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::fut_opt_opn_pnl_clr>() const { return m_fut_opt_opn_pnl_clr; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::stk_day_pnl>() const { return m_stk_day_pnl; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::fut_day_pnl>() const { return m_fut_day_pnl; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::stk_opt_day_pnl>() const { return m_stk_opt_day_pnl; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::fut_opt_day_pnl>() const { return m_fut_opt_day_pnl; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::stkt_day_sh>() const { return m_stkt_day_sh; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::stk_day_mny>() const { return m_stk_day_mny; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::fut_day_cn>() const { return m_fut_day_cn; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::fut_day_mny>() const { return m_fut_day_mny; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::stk_opt_day_cn>() const { return m_stk_opt_day_cn; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::stk_opt_day_mny>() const { return m_stk_opt_day_mny; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::fut_opt_day_cn>() const { return m_fut_opt_day_cn; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::fut_opt_day_mny>() const { return m_fut_opt_day_mny; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::day_ddelta>() const { return m_day_ddelta; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::op_day_vega>() const { return m_op_day_vega; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::op_day_wvega>() const { return m_op_day_wvega; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::op_day_tvega>() const { return m_op_day_tvega; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::op_day_wt_vega>() const { return m_op_day_wt_vega; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::op_day_theta>() const { return m_op_day_theta; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::op_edge_opened>() const { return m_op_edge_opened; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::op_edge_closed>() const { return m_op_edge_closed; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::pnl_dn>() const { return m_pnl_dn; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::pnl_de>() const { return m_pnl_de; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::pnl_sl>() const { return m_pnl_sl; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::pnl_ga>() const { return m_pnl_ga; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::pnl_th>() const { return m_pnl_th; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::pnl_ve>() const { return m_pnl_ve; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::pnl_vo>() const { return m_pnl_vo; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::pnl_va>() const { return m_pnl_va; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::pnl_ddiv>() const { return m_pnl_ddiv; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::pnl_sdiv>() const { return m_pnl_sdiv; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::pnl_rate>() const { return m_pnl_rate; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::pnl_err>() const { return m_pnl_err; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::pnl_te>() const { return m_pnl_te; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::pnl_ln>() const { return m_pnl_ln; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::pnl_sh>() const { return m_pnl_sh; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::t_edge>() const { return m_t_edge; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::t_edge_mult>() const { return m_t_edge_mult; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::pos_tedge_pnl>() const { return m_pos_tedge_pnl; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::neg_tedge_pnl>() const { return m_neg_tedge_pnl; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::bad_tedge_pnl>() const { return m_bad_tedge_pnl; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::va_rsu90>() const { return m_va_rsu90; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::va_rsd90>() const { return m_va_rsd90; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::va_rsu50>() const { return m_va_rsu50; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::va_rsd50>() const { return m_va_rsd50; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::va_rsu15>() const { return m_va_rsu15; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::va_rsd15>() const { return m_va_rsd15; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::va_rsu10>() const { return m_va_rsu10; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::va_rsd10>() const { return m_va_rsd10; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::va_rsu05>() const { return m_va_rsu05; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::va_rsd05>() const { return m_va_rsd05; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::va_rsu1e>() const { return m_va_rsu1e; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::va_rsd1e>() const { return m_va_rsd1e; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::va_rsu2e>() const { return m_va_rsu2e; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::va_rsd2e>() const { return m_va_rsd2e; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::va_rearn>() const { return m_va_rearn; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::va_rcash>() const { return m_va_rcash; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::hc_cnt>() const { return m_hc_cnt; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::haircut25>() const { return m_haircut25; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::haircut37>() const { return m_haircut37; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::opt_cn_minimum>() const { return m_opt_cn_minimum; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::span01>() const { return m_span01; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::span02>() const { return m_span02; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::span03>() const { return m_span03; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::span04>() const { return m_span04; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::span05>() const { return m_span05; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::span06>() const { return m_span06; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::span07>() const { return m_span07; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::span08>() const { return m_span08; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::span09>() const { return m_span09; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::span10>() const { return m_span10; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::span11>() const { return m_span11; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::span12>() const { return m_span12; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::span13>() const { return m_span13; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::span14>() const { return m_span14; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::span15>() const { return m_span15; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::span16>() const { return m_span16; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::worst3_risk>() const { return m_worst3_risk; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::worst_sym1>() const { return AccountRiskRecordV5::worst_sym1{ m_worst_sym1}; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::worst_sym2>() const { return AccountRiskRecordV5::worst_sym2{ m_worst_sym2}; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::worst_sym3>() const { return AccountRiskRecordV5::worst_sym3{ m_worst_sym3}; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::stk_liq_risk>() const { return m_stk_liq_risk; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::fut_liq_risk>() const { return m_fut_liq_risk; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::opt_liq_risk>() const { return m_opt_liq_risk; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::sr_risk_margin>() const { return m_sr_risk_margin; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::last_activity>() const { return m_last_activity; }
    template<> inline const auto AccountRiskRecordV5::get<AccountRiskRecordV5::timestamp>() const { return m_timestamp; }
    template<> inline const auto AccountRiskRecordV5_PKey::get<AccountRiskRecordV5_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto AccountRiskRecordV5_PKey::get<AccountRiskRecordV5_PKey::currency>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_currency));}
    template<> inline const auto AccountRiskRecordV5_PKey::get<AccountRiskRecordV5_PKey::trade_date>() const { return AccountRiskRecordV5_PKey::trade_date{m_trade_date}; }
    template<> inline const auto AccountRiskRecordV5_PKey::get<AccountRiskRecordV5_PKey::risk_session>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskSession>(m_risk_session));}
    template<> inline const auto AccountRiskRecordV5_PKey::get<AccountRiskRecordV5_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const AccountRiskRecordV5_PKey& m) {
        o << "\"accnt\":\"" << m.get<AccountRiskRecordV5_PKey::accnt>() << "\"";
        o << ",\"currency\":" << (int64_t)m.get<AccountRiskRecordV5_PKey::currency>();
        o << ",\"trade_date\":{" << m.get<AccountRiskRecordV5_PKey::trade_date>() << "}";
        o << ",\"risk_session\":" << (int64_t)m.get<AccountRiskRecordV5_PKey::risk_session>();
        o << ",\"client_firm\":\"" << m.get<AccountRiskRecordV5_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const AccountRiskRecordV5& m) {
        o << "\"_meta\":{" << m.get<AccountRiskRecordV5::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<AccountRiskRecordV5::pkey>() << "}";
        o << ",\"ln_ddelta\":" << m.get<AccountRiskRecordV5::ln_ddelta>();
        o << ",\"sh_ddelta\":" << m.get<AccountRiskRecordV5::sh_ddelta>();
        o << ",\"ln_stk_mkt_value\":" << m.get<AccountRiskRecordV5::ln_stk_mkt_value>();
        o << ",\"sh_stk_mkt_value\":" << m.get<AccountRiskRecordV5::sh_stk_mkt_value>();
        o << ",\"fut_mkt_value\":" << m.get<AccountRiskRecordV5::fut_mkt_value>();
        o << ",\"stk_opt_mkt_value\":" << m.get<AccountRiskRecordV5::stk_opt_mkt_value>();
        o << ",\"fut_opt_mkt_value\":" << m.get<AccountRiskRecordV5::fut_opt_mkt_value>();
        o << ",\"vega_long\":" << m.get<AccountRiskRecordV5::vega_long>();
        o << ",\"vega_short\":" << m.get<AccountRiskRecordV5::vega_short>();
        o << ",\"w_vega_long\":" << m.get<AccountRiskRecordV5::w_vega_long>();
        o << ",\"w_vega_short\":" << m.get<AccountRiskRecordV5::w_vega_short>();
        o << ",\"wt_vega_long\":" << m.get<AccountRiskRecordV5::wt_vega_long>();
        o << ",\"wt_vega_short\":" << m.get<AccountRiskRecordV5::wt_vega_short>();
        o << ",\"theta_long\":" << m.get<AccountRiskRecordV5::theta_long>();
        o << ",\"theta_short\":" << m.get<AccountRiskRecordV5::theta_short>();
        o << ",\"rho_long\":" << m.get<AccountRiskRecordV5::rho_long>();
        o << ",\"rho_short\":" << m.get<AccountRiskRecordV5::rho_short>();
        o << ",\"ivol_ln\":" << m.get<AccountRiskRecordV5::ivol_ln>();
        o << ",\"ivol_sh\":" << m.get<AccountRiskRecordV5::ivol_sh>();
        o << ",\"wt_ve_dd\":" << m.get<AccountRiskRecordV5::wt_ve_dd>();
        o << ",\"wt_ve_dn\":" << m.get<AccountRiskRecordV5::wt_ve_dn>();
        o << ",\"wt_ve_at\":" << m.get<AccountRiskRecordV5::wt_ve_at>();
        o << ",\"wt_ve_up\":" << m.get<AccountRiskRecordV5::wt_ve_up>();
        o << ",\"wt_ve_du\":" << m.get<AccountRiskRecordV5::wt_ve_du>();
        o << ",\"wt_ve_m1\":" << m.get<AccountRiskRecordV5::wt_ve_m1>();
        o << ",\"wt_ve_m2\":" << m.get<AccountRiskRecordV5::wt_ve_m2>();
        o << ",\"wt_ve_m3\":" << m.get<AccountRiskRecordV5::wt_ve_m3>();
        o << ",\"wt_ve_m4\":" << m.get<AccountRiskRecordV5::wt_ve_m4>();
        o << ",\"wt_ve_m5\":" << m.get<AccountRiskRecordV5::wt_ve_m5>();
        o << ",\"ddelta\":" << m.get<AccountRiskRecordV5::ddelta>();
        o << ",\"num_symbols\":" << m.get<AccountRiskRecordV5::num_symbols>();
        o << ",\"abs_cur_sh\":" << m.get<AccountRiskRecordV5::abs_cur_sh>();
        o << ",\"abs_cur_fc\":" << m.get<AccountRiskRecordV5::abs_cur_fc>();
        o << ",\"abs_cur_cn\":" << m.get<AccountRiskRecordV5::abs_cur_cn>();
        o << ",\"prem_ov_par\":" << m.get<AccountRiskRecordV5::prem_ov_par>();
        o << ",\"opt_ex_as_pnl\":" << m.get<AccountRiskRecordV5::opt_ex_as_pnl>();
        o << ",\"dividend_pnl\":" << m.get<AccountRiskRecordV5::dividend_pnl>();
        o << ",\"corp_act_cash_pn_l\":" << m.get<AccountRiskRecordV5::corp_act_cash_pn_l>();
        o << ",\"stk_opn_pnl_mid\":" << m.get<AccountRiskRecordV5::stk_opn_pnl_mid>();
        o << ",\"stk_opn_pnl_clr\":" << m.get<AccountRiskRecordV5::stk_opn_pnl_clr>();
        o << ",\"fut_opn_pnl_mid\":" << m.get<AccountRiskRecordV5::fut_opn_pnl_mid>();
        o << ",\"fut_opn_pnl_clr\":" << m.get<AccountRiskRecordV5::fut_opn_pnl_clr>();
        o << ",\"stk_opt_opn_pnl_vol\":" << m.get<AccountRiskRecordV5::stk_opt_opn_pnl_vol>();
        o << ",\"stk_opt_opn_pnl_mid\":" << m.get<AccountRiskRecordV5::stk_opt_opn_pnl_mid>();
        o << ",\"stk_opt_opn_pnl_clr\":" << m.get<AccountRiskRecordV5::stk_opt_opn_pnl_clr>();
        o << ",\"fut_opt_opn_pnl_vol\":" << m.get<AccountRiskRecordV5::fut_opt_opn_pnl_vol>();
        o << ",\"fut_opt_opn_pnl_mid\":" << m.get<AccountRiskRecordV5::fut_opt_opn_pnl_mid>();
        o << ",\"fut_opt_opn_pnl_clr\":" << m.get<AccountRiskRecordV5::fut_opt_opn_pnl_clr>();
        o << ",\"stk_day_pnl\":" << m.get<AccountRiskRecordV5::stk_day_pnl>();
        o << ",\"fut_day_pnl\":" << m.get<AccountRiskRecordV5::fut_day_pnl>();
        o << ",\"stk_opt_day_pnl\":" << m.get<AccountRiskRecordV5::stk_opt_day_pnl>();
        o << ",\"fut_opt_day_pnl\":" << m.get<AccountRiskRecordV5::fut_opt_day_pnl>();
        o << ",\"stkt_day_sh\":" << m.get<AccountRiskRecordV5::stkt_day_sh>();
        o << ",\"stk_day_mny\":" << m.get<AccountRiskRecordV5::stk_day_mny>();
        o << ",\"fut_day_cn\":" << m.get<AccountRiskRecordV5::fut_day_cn>();
        o << ",\"fut_day_mny\":" << m.get<AccountRiskRecordV5::fut_day_mny>();
        o << ",\"stk_opt_day_cn\":" << m.get<AccountRiskRecordV5::stk_opt_day_cn>();
        o << ",\"stk_opt_day_mny\":" << m.get<AccountRiskRecordV5::stk_opt_day_mny>();
        o << ",\"fut_opt_day_cn\":" << m.get<AccountRiskRecordV5::fut_opt_day_cn>();
        o << ",\"fut_opt_day_mny\":" << m.get<AccountRiskRecordV5::fut_opt_day_mny>();
        o << ",\"day_ddelta\":" << m.get<AccountRiskRecordV5::day_ddelta>();
        o << ",\"op_day_vega\":" << m.get<AccountRiskRecordV5::op_day_vega>();
        o << ",\"op_day_wvega\":" << m.get<AccountRiskRecordV5::op_day_wvega>();
        o << ",\"op_day_tvega\":" << m.get<AccountRiskRecordV5::op_day_tvega>();
        o << ",\"op_day_wt_vega\":" << m.get<AccountRiskRecordV5::op_day_wt_vega>();
        o << ",\"op_day_theta\":" << m.get<AccountRiskRecordV5::op_day_theta>();
        o << ",\"op_edge_opened\":" << m.get<AccountRiskRecordV5::op_edge_opened>();
        o << ",\"op_edge_closed\":" << m.get<AccountRiskRecordV5::op_edge_closed>();
        o << ",\"pnl_dn\":" << m.get<AccountRiskRecordV5::pnl_dn>();
        o << ",\"pnl_de\":" << m.get<AccountRiskRecordV5::pnl_de>();
        o << ",\"pnl_sl\":" << m.get<AccountRiskRecordV5::pnl_sl>();
        o << ",\"pnl_ga\":" << m.get<AccountRiskRecordV5::pnl_ga>();
        o << ",\"pnl_th\":" << m.get<AccountRiskRecordV5::pnl_th>();
        o << ",\"pnl_ve\":" << m.get<AccountRiskRecordV5::pnl_ve>();
        o << ",\"pnl_vo\":" << m.get<AccountRiskRecordV5::pnl_vo>();
        o << ",\"pnl_va\":" << m.get<AccountRiskRecordV5::pnl_va>();
        o << ",\"pnl_ddiv\":" << m.get<AccountRiskRecordV5::pnl_ddiv>();
        o << ",\"pnl_sdiv\":" << m.get<AccountRiskRecordV5::pnl_sdiv>();
        o << ",\"pnl_rate\":" << m.get<AccountRiskRecordV5::pnl_rate>();
        o << ",\"pnl_err\":" << m.get<AccountRiskRecordV5::pnl_err>();
        o << ",\"pnl_te\":" << m.get<AccountRiskRecordV5::pnl_te>();
        o << ",\"pnl_ln\":" << m.get<AccountRiskRecordV5::pnl_ln>();
        o << ",\"pnl_sh\":" << m.get<AccountRiskRecordV5::pnl_sh>();
        o << ",\"t_edge\":" << m.get<AccountRiskRecordV5::t_edge>();
        o << ",\"t_edge_mult\":" << m.get<AccountRiskRecordV5::t_edge_mult>();
        o << ",\"pos_tedge_pnl\":" << m.get<AccountRiskRecordV5::pos_tedge_pnl>();
        o << ",\"neg_tedge_pnl\":" << m.get<AccountRiskRecordV5::neg_tedge_pnl>();
        o << ",\"bad_tedge_pnl\":" << m.get<AccountRiskRecordV5::bad_tedge_pnl>();
        o << ",\"va_rsu90\":" << m.get<AccountRiskRecordV5::va_rsu90>();
        o << ",\"va_rsd90\":" << m.get<AccountRiskRecordV5::va_rsd90>();
        o << ",\"va_rsu50\":" << m.get<AccountRiskRecordV5::va_rsu50>();
        o << ",\"va_rsd50\":" << m.get<AccountRiskRecordV5::va_rsd50>();
        o << ",\"va_rsu15\":" << m.get<AccountRiskRecordV5::va_rsu15>();
        o << ",\"va_rsd15\":" << m.get<AccountRiskRecordV5::va_rsd15>();
        o << ",\"va_rsu10\":" << m.get<AccountRiskRecordV5::va_rsu10>();
        o << ",\"va_rsd10\":" << m.get<AccountRiskRecordV5::va_rsd10>();
        o << ",\"va_rsu05\":" << m.get<AccountRiskRecordV5::va_rsu05>();
        o << ",\"va_rsd05\":" << m.get<AccountRiskRecordV5::va_rsd05>();
        o << ",\"va_rsu1e\":" << m.get<AccountRiskRecordV5::va_rsu1e>();
        o << ",\"va_rsd1e\":" << m.get<AccountRiskRecordV5::va_rsd1e>();
        o << ",\"va_rsu2e\":" << m.get<AccountRiskRecordV5::va_rsu2e>();
        o << ",\"va_rsd2e\":" << m.get<AccountRiskRecordV5::va_rsd2e>();
        o << ",\"va_rearn\":" << m.get<AccountRiskRecordV5::va_rearn>();
        o << ",\"va_rcash\":" << m.get<AccountRiskRecordV5::va_rcash>();
        o << ",\"hc_cnt\":" << m.get<AccountRiskRecordV5::hc_cnt>();
        o << ",\"haircut25\":" << m.get<AccountRiskRecordV5::haircut25>();
        o << ",\"haircut37\":" << m.get<AccountRiskRecordV5::haircut37>();
        o << ",\"opt_cn_minimum\":" << m.get<AccountRiskRecordV5::opt_cn_minimum>();
        o << ",\"span01\":" << m.get<AccountRiskRecordV5::span01>();
        o << ",\"span02\":" << m.get<AccountRiskRecordV5::span02>();
        o << ",\"span03\":" << m.get<AccountRiskRecordV5::span03>();
        o << ",\"span04\":" << m.get<AccountRiskRecordV5::span04>();
        o << ",\"span05\":" << m.get<AccountRiskRecordV5::span05>();
        o << ",\"span06\":" << m.get<AccountRiskRecordV5::span06>();
        o << ",\"span07\":" << m.get<AccountRiskRecordV5::span07>();
        o << ",\"span08\":" << m.get<AccountRiskRecordV5::span08>();
        o << ",\"span09\":" << m.get<AccountRiskRecordV5::span09>();
        o << ",\"span10\":" << m.get<AccountRiskRecordV5::span10>();
        o << ",\"span11\":" << m.get<AccountRiskRecordV5::span11>();
        o << ",\"span12\":" << m.get<AccountRiskRecordV5::span12>();
        o << ",\"span13\":" << m.get<AccountRiskRecordV5::span13>();
        o << ",\"span14\":" << m.get<AccountRiskRecordV5::span14>();
        o << ",\"span15\":" << m.get<AccountRiskRecordV5::span15>();
        o << ",\"span16\":" << m.get<AccountRiskRecordV5::span16>();
        o << ",\"worst3_risk\":" << m.get<AccountRiskRecordV5::worst3_risk>();
        o << ",\"worst_sym1\":{" << m.get<AccountRiskRecordV5::worst_sym1>() << "}";
        o << ",\"worst_sym2\":{" << m.get<AccountRiskRecordV5::worst_sym2>() << "}";
        o << ",\"worst_sym3\":{" << m.get<AccountRiskRecordV5::worst_sym3>() << "}";
        o << ",\"stk_liq_risk\":" << m.get<AccountRiskRecordV5::stk_liq_risk>();
        o << ",\"fut_liq_risk\":" << m.get<AccountRiskRecordV5::fut_liq_risk>();
        o << ",\"opt_liq_risk\":" << m.get<AccountRiskRecordV5::opt_liq_risk>();
        o << ",\"sr_risk_margin\":" << m.get<AccountRiskRecordV5::sr_risk_margin>();
        {
            std::time_t tt = m.get<AccountRiskRecordV5::last_activity>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"last_activity\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<AccountRiskRecordV5::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}