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

    #ifndef _version__RiskCubeVersion__GUARD__
    #define _version__RiskCubeVersion__GUARD__
    DECL_STRONG_TYPE(version__RiskCubeVersion, spiderrock::protobuf::api::RiskCubeVersion);
    #endif//_version__RiskCubeVersion__GUARD__

    #ifndef _clearing_firm__GUARD__
    #define _clearing_firm__GUARD__
    DECL_STRONG_TYPE(clearing_firm, string);
    #endif//_clearing_firm__GUARD__

    #ifndef _clearing_accnt__GUARD__
    #define _clearing_accnt__GUARD__
    DECL_STRONG_TYPE(clearing_accnt, string);
    #endif//_clearing_accnt__GUARD__

    #ifndef _risk_server_code__GUARD__
    #define _risk_server_code__GUARD__
    DECL_STRONG_TYPE(risk_server_code, string);
    #endif//_risk_server_code__GUARD__

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

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _risk_class__GUARD__
    #define _risk_class__GUARD__
    DECL_STRONG_TYPE(risk_class, string);
    #endif//_risk_class__GUARD__

    #ifndef _symbol_type__GUARD__
    #define _symbol_type__GUARD__
    DECL_STRONG_TYPE(symbol_type, spiderrock::protobuf::api::SymbolType);
    #endif//_symbol_type__GUARD__

    #ifndef _beta__GUARD__
    #define _beta__GUARD__
    DECL_STRONG_TYPE(beta, float);
    #endif//_beta__GUARD__

    #ifndef _beta_source__GUARD__
    #define _beta_source__GUARD__
    DECL_STRONG_TYPE(beta_source, spiderrock::protobuf::api::BetaSource);
    #endif//_beta_source__GUARD__

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

    #ifndef _e_days__GUARD__
    #define _e_days__GUARD__
    DECL_STRONG_TYPE(e_days, int32);
    #endif//_e_days__GUARD__

    #ifndef _d_days__GUARD__
    #define _d_days__GUARD__
    DECL_STRONG_TYPE(d_days, int32);
    #endif//_d_days__GUARD__

    #ifndef _x_delta__GUARD__
    #define _x_delta__GUARD__
    DECL_STRONG_TYPE(x_delta, float);
    #endif//_x_delta__GUARD__

    #ifndef _exp_code__GUARD__
    #define _exp_code__GUARD__
    DECL_STRONG_TYPE(exp_code, spiderrock::protobuf::api::ExpCode);
    #endif//_exp_code__GUARD__

    #ifndef _skew_code__GUARD__
    #define _skew_code__GUARD__
    DECL_STRONG_TYPE(skew_code, spiderrock::protobuf::api::SkewCode);
    #endif//_skew_code__GUARD__

    #ifndef _e_days_code__GUARD__
    #define _e_days_code__GUARD__
    DECL_STRONG_TYPE(e_days_code, spiderrock::protobuf::api::EDaysCode);
    #endif//_e_days_code__GUARD__

    #ifndef _i_vol_range__GUARD__
    #define _i_vol_range__GUARD__
    DECL_STRONG_TYPE(i_vol_range, spiderrock::protobuf::api::iVolRange);
    #endif//_i_vol_range__GUARD__

    #ifndef _skew_dd__GUARD__
    #define _skew_dd__GUARD__
    DECL_STRONG_TYPE(skew_dd, float);
    #endif//_skew_dd__GUARD__

    #ifndef _skew_dn__GUARD__
    #define _skew_dn__GUARD__
    DECL_STRONG_TYPE(skew_dn, float);
    #endif//_skew_dn__GUARD__

    #ifndef _skew_at__GUARD__
    #define _skew_at__GUARD__
    DECL_STRONG_TYPE(skew_at, float);
    #endif//_skew_at__GUARD__

    #ifndef _skew_up__GUARD__
    #define _skew_up__GUARD__
    DECL_STRONG_TYPE(skew_up, float);
    #endif//_skew_up__GUARD__

    #ifndef _skew_du__GUARD__
    #define _skew_du__GUARD__
    DECL_STRONG_TYPE(skew_du, float);
    #endif//_skew_du__GUARD__

    #ifndef _sh_opn_pos__GUARD__
    #define _sh_opn_pos__GUARD__
    DECL_STRONG_TYPE(sh_opn_pos, int32);
    #endif//_sh_opn_pos__GUARD__

    #ifndef _fc_opn_pos__GUARD__
    #define _fc_opn_pos__GUARD__
    DECL_STRONG_TYPE(fc_opn_pos, int32);
    #endif//_fc_opn_pos__GUARD__

    #ifndef _cn_opn_pos__GUARD__
    #define _cn_opn_pos__GUARD__
    DECL_STRONG_TYPE(cn_opn_pos, int32);
    #endif//_cn_opn_pos__GUARD__

    #ifndef _cn_atm_equiv__GUARD__
    #define _cn_atm_equiv__GUARD__
    DECL_STRONG_TYPE(cn_atm_equiv, float);
    #endif//_cn_atm_equiv__GUARD__

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

    #ifndef _fc_bot__GUARD__
    #define _fc_bot__GUARD__
    DECL_STRONG_TYPE(fc_bot, int32);
    #endif//_fc_bot__GUARD__

    #ifndef _fc_sld__GUARD__
    #define _fc_sld__GUARD__
    DECL_STRONG_TYPE(fc_sld, int32);
    #endif//_fc_sld__GUARD__

    #ifndef _cn_bot__GUARD__
    #define _cn_bot__GUARD__
    DECL_STRONG_TYPE(cn_bot, int32);
    #endif//_cn_bot__GUARD__

    #ifndef _cn_sld__GUARD__
    #define _cn_sld__GUARD__
    DECL_STRONG_TYPE(cn_sld, int32);
    #endif//_cn_sld__GUARD__

    #ifndef _cn_opened__GUARD__
    #define _cn_opened__GUARD__
    DECL_STRONG_TYPE(cn_opened, int32);
    #endif//_cn_opened__GUARD__

    #ifndef _cn_closed__GUARD__
    #define _cn_closed__GUARD__
    DECL_STRONG_TYPE(cn_closed, int32);
    #endif//_cn_closed__GUARD__

    #ifndef _opn_dir__GUARD__
    #define _opn_dir__GUARD__
    DECL_STRONG_TYPE(opn_dir, string);
    #endif//_opn_dir__GUARD__

    #ifndef _pos_dir__GUARD__
    #define _pos_dir__GUARD__
    DECL_STRONG_TYPE(pos_dir, string);
    #endif//_pos_dir__GUARD__

    #ifndef _unit_opn_pos__GUARD__
    #define _unit_opn_pos__GUARD__
    DECL_STRONG_TYPE(unit_opn_pos, int32);
    #endif//_unit_opn_pos__GUARD__

    #ifndef _unit_cur_pos__GUARD__
    #define _unit_cur_pos__GUARD__
    DECL_STRONG_TYPE(unit_cur_pos, int32);
    #endif//_unit_cur_pos__GUARD__

    #ifndef _unit_qty_bot__GUARD__
    #define _unit_qty_bot__GUARD__
    DECL_STRONG_TYPE(unit_qty_bot, int32);
    #endif//_unit_qty_bot__GUARD__

    #ifndef _unit_qty_sld__GUARD__
    #define _unit_qty_sld__GUARD__
    DECL_STRONG_TYPE(unit_qty_sld, int32);
    #endif//_unit_qty_sld__GUARD__

    #ifndef _day_pnl__GUARD__
    #define _day_pnl__GUARD__
    DECL_STRONG_TYPE(day_pnl, float);
    #endif//_day_pnl__GUARD__

    #ifndef _day_dn_pnl__GUARD__
    #define _day_dn_pnl__GUARD__
    DECL_STRONG_TYPE(day_dn_pnl, float);
    #endif//_day_dn_pnl__GUARD__

    #ifndef _day_trd_delta__GUARD__
    #define _day_trd_delta__GUARD__
    DECL_STRONG_TYPE(day_trd_delta, float);
    #endif//_day_trd_delta__GUARD__

    #ifndef _day_trd_ddelta__GUARD__
    #define _day_trd_ddelta__GUARD__
    DECL_STRONG_TYPE(day_trd_ddelta, float);
    #endif//_day_trd_ddelta__GUARD__

    #ifndef _day_trd_gamma__GUARD__
    #define _day_trd_gamma__GUARD__
    DECL_STRONG_TYPE(day_trd_gamma, float);
    #endif//_day_trd_gamma__GUARD__

    #ifndef _day_trd_dgamma__GUARD__
    #define _day_trd_dgamma__GUARD__
    DECL_STRONG_TYPE(day_trd_dgamma, float);
    #endif//_day_trd_dgamma__GUARD__

    #ifndef _day_trd_vega__GUARD__
    #define _day_trd_vega__GUARD__
    DECL_STRONG_TYPE(day_trd_vega, float);
    #endif//_day_trd_vega__GUARD__

    #ifndef _day_trd_wvega__GUARD__
    #define _day_trd_wvega__GUARD__
    DECL_STRONG_TYPE(day_trd_wvega, float);
    #endif//_day_trd_wvega__GUARD__

    #ifndef _day_trd_tvega__GUARD__
    #define _day_trd_tvega__GUARD__
    DECL_STRONG_TYPE(day_trd_tvega, float);
    #endif//_day_trd_tvega__GUARD__

    #ifndef _day_trd_wt_vega__GUARD__
    #define _day_trd_wt_vega__GUARD__
    DECL_STRONG_TYPE(day_trd_wt_vega, float);
    #endif//_day_trd_wt_vega__GUARD__

    #ifndef _day_trd_theta__GUARD__
    #define _day_trd_theta__GUARD__
    DECL_STRONG_TYPE(day_trd_theta, float);
    #endif//_day_trd_theta__GUARD__

    #ifndef _day_edge_opened__GUARD__
    #define _day_edge_opened__GUARD__
    DECL_STRONG_TYPE(day_edge_opened, float);
    #endif//_day_edge_opened__GUARD__

    #ifndef _day_edge_closed__GUARD__
    #define _day_edge_closed__GUARD__
    DECL_STRONG_TYPE(day_edge_closed, float);
    #endif//_day_edge_closed__GUARD__

    #ifndef _day_mny_bot__GUARD__
    #define _day_mny_bot__GUARD__
    DECL_STRONG_TYPE(day_mny_bot, double);
    #endif//_day_mny_bot__GUARD__

    #ifndef _day_mny_sld__GUARD__
    #define _day_mny_sld__GUARD__
    DECL_STRONG_TYPE(day_mny_sld, double);
    #endif//_day_mny_sld__GUARD__

    #ifndef _opn_pnl_vol_mark__GUARD__
    #define _opn_pnl_vol_mark__GUARD__
    DECL_STRONG_TYPE(opn_pnl_vol_mark, float);
    #endif//_opn_pnl_vol_mark__GUARD__

    #ifndef _opn_pnl_mid_mark__GUARD__
    #define _opn_pnl_mid_mark__GUARD__
    DECL_STRONG_TYPE(opn_pnl_mid_mark, float);
    #endif//_opn_pnl_mid_mark__GUARD__

    #ifndef _opn_pnl_clr_mark__GUARD__
    #define _opn_pnl_clr_mark__GUARD__
    DECL_STRONG_TYPE(opn_pnl_clr_mark, float);
    #endif//_opn_pnl_clr_mark__GUARD__

    #ifndef _opn_mark_brk_mny__GUARD__
    #define _opn_mark_brk_mny__GUARD__
    DECL_STRONG_TYPE(opn_mark_brk_mny, float);
    #endif//_opn_mark_brk_mny__GUARD__

    #ifndef _opn_theo_edge__GUARD__
    #define _opn_theo_edge__GUARD__
    DECL_STRONG_TYPE(opn_theo_edge, float);
    #endif//_opn_theo_edge__GUARD__

    #ifndef _pos_theo_edge__GUARD__
    #define _pos_theo_edge__GUARD__
    DECL_STRONG_TYPE(pos_theo_edge, float);
    #endif//_pos_theo_edge__GUARD__

    #ifndef _t_vol_move__GUARD__
    #define _t_vol_move__GUARD__
    DECL_STRONG_TYPE(t_vol_move, float);
    #endif//_t_vol_move__GUARD__

    #ifndef _t_edge_move__GUARD__
    #define _t_edge_move__GUARD__
    DECL_STRONG_TYPE(t_edge_move, float);
    #endif//_t_edge_move__GUARD__

    #ifndef _t_edge__GUARD__
    #define _t_edge__GUARD__
    DECL_STRONG_TYPE(t_edge, float);
    #endif//_t_edge__GUARD__

    #ifndef _opn_pnl_de__GUARD__
    #define _opn_pnl_de__GUARD__
    DECL_STRONG_TYPE(opn_pnl_de, float);
    #endif//_opn_pnl_de__GUARD__

    #ifndef _opn_pnl_ga__GUARD__
    #define _opn_pnl_ga__GUARD__
    DECL_STRONG_TYPE(opn_pnl_ga, float);
    #endif//_opn_pnl_ga__GUARD__

    #ifndef _opn_pnl_th__GUARD__
    #define _opn_pnl_th__GUARD__
    DECL_STRONG_TYPE(opn_pnl_th, float);
    #endif//_opn_pnl_th__GUARD__

    #ifndef _opn_pnl_ve__GUARD__
    #define _opn_pnl_ve__GUARD__
    DECL_STRONG_TYPE(opn_pnl_ve, float);
    #endif//_opn_pnl_ve__GUARD__

    #ifndef _opn_pnl_vo__GUARD__
    #define _opn_pnl_vo__GUARD__
    DECL_STRONG_TYPE(opn_pnl_vo, float);
    #endif//_opn_pnl_vo__GUARD__

    #ifndef _opn_pnl_va__GUARD__
    #define _opn_pnl_va__GUARD__
    DECL_STRONG_TYPE(opn_pnl_va, float);
    #endif//_opn_pnl_va__GUARD__

    #ifndef _opn_pnl_sl__GUARD__
    #define _opn_pnl_sl__GUARD__
    DECL_STRONG_TYPE(opn_pnl_sl, float);
    #endif//_opn_pnl_sl__GUARD__

    #ifndef _opn_pnl_rate__GUARD__
    #define _opn_pnl_rate__GUARD__
    DECL_STRONG_TYPE(opn_pnl_rate, float);
    #endif//_opn_pnl_rate__GUARD__

    #ifndef _opn_pnl_sdiv__GUARD__
    #define _opn_pnl_sdiv__GUARD__
    DECL_STRONG_TYPE(opn_pnl_sdiv, float);
    #endif//_opn_pnl_sdiv__GUARD__

    #ifndef _opn_pnl_ddiv__GUARD__
    #define _opn_pnl_ddiv__GUARD__
    DECL_STRONG_TYPE(opn_pnl_ddiv, float);
    #endif//_opn_pnl_ddiv__GUARD__

    #ifndef _opn_pnl_err__GUARD__
    #define _opn_pnl_err__GUARD__
    DECL_STRONG_TYPE(opn_pnl_err, float);
    #endif//_opn_pnl_err__GUARD__

    #ifndef _opn_edge_change__GUARD__
    #define _opn_edge_change__GUARD__
    DECL_STRONG_TYPE(opn_edge_change, float);
    #endif//_opn_edge_change__GUARD__

    #ifndef _pos_delta__GUARD__
    #define _pos_delta__GUARD__
    DECL_STRONG_TYPE(pos_delta, float);
    #endif//_pos_delta__GUARD__

    #ifndef _pos_ddelta__GUARD__
    #define _pos_ddelta__GUARD__
    DECL_STRONG_TYPE(pos_ddelta, float);
    #endif//_pos_ddelta__GUARD__

    #ifndef _pos_dbeta__GUARD__
    #define _pos_dbeta__GUARD__
    DECL_STRONG_TYPE(pos_dbeta, float);
    #endif//_pos_dbeta__GUARD__

    #ifndef _pos_gamma__GUARD__
    #define _pos_gamma__GUARD__
    DECL_STRONG_TYPE(pos_gamma, float);
    #endif//_pos_gamma__GUARD__

    #ifndef _pos_dgamma__GUARD__
    #define _pos_dgamma__GUARD__
    DECL_STRONG_TYPE(pos_dgamma, float);
    #endif//_pos_dgamma__GUARD__

    #ifndef _pos_vega__GUARD__
    #define _pos_vega__GUARD__
    DECL_STRONG_TYPE(pos_vega, float);
    #endif//_pos_vega__GUARD__

    #ifndef _pos_wvega__GUARD__
    #define _pos_wvega__GUARD__
    DECL_STRONG_TYPE(pos_wvega, float);
    #endif//_pos_wvega__GUARD__

    #ifndef _pos_tvega__GUARD__
    #define _pos_tvega__GUARD__
    DECL_STRONG_TYPE(pos_tvega, float);
    #endif//_pos_tvega__GUARD__

    #ifndef _pos_wt_vega__GUARD__
    #define _pos_wt_vega__GUARD__
    DECL_STRONG_TYPE(pos_wt_vega, float);
    #endif//_pos_wt_vega__GUARD__

    #ifndef _pos_volga__GUARD__
    #define _pos_volga__GUARD__
    DECL_STRONG_TYPE(pos_volga, float);
    #endif//_pos_volga__GUARD__

    #ifndef _pos_vanna__GUARD__
    #define _pos_vanna__GUARD__
    DECL_STRONG_TYPE(pos_vanna, float);
    #endif//_pos_vanna__GUARD__

    #ifndef _pos_theta__GUARD__
    #define _pos_theta__GUARD__
    DECL_STRONG_TYPE(pos_theta, float);
    #endif//_pos_theta__GUARD__

    #ifndef _pos_rho__GUARD__
    #define _pos_rho__GUARD__
    DECL_STRONG_TYPE(pos_rho, float);
    #endif//_pos_rho__GUARD__

    #ifndef _pos_phi__GUARD__
    #define _pos_phi__GUARD__
    DECL_STRONG_TYPE(pos_phi, float);
    #endif//_pos_phi__GUARD__

    #ifndef _pos_notional__GUARD__
    #define _pos_notional__GUARD__
    DECL_STRONG_TYPE(pos_notional, float);
    #endif//_pos_notional__GUARD__

    #ifndef _pos_mkt_value__GUARD__
    #define _pos_mkt_value__GUARD__
    DECL_STRONG_TYPE(pos_mkt_value, float);
    #endif//_pos_mkt_value__GUARD__

    #ifndef _pos_prem_opar__GUARD__
    #define _pos_prem_opar__GUARD__
    DECL_STRONG_TYPE(pos_prem_opar, float);
    #endif//_pos_prem_opar__GUARD__

    #ifndef _atm_vol__GUARD__
    #define _atm_vol__GUARD__
    DECL_STRONG_TYPE(atm_vol, float);
    #endif//_atm_vol__GUARD__

    #ifndef _sym_vol__GUARD__
    #define _sym_vol__GUARD__
    DECL_STRONG_TYPE(sym_vol, float);
    #endif//_sym_vol__GUARD__

    #ifndef _sr_slope__GUARD__
    #define _sr_slope__GUARD__
    DECL_STRONG_TYPE(sr_slope, float);
    #endif//_sr_slope__GUARD__

    #ifndef _prc_svol__GUARD__
    #define _prc_svol__GUARD__
    DECL_STRONG_TYPE(prc_svol, float);
    #endif//_prc_svol__GUARD__

    #ifndef _prc_topx__GUARD__
    #define _prc_topx__GUARD__
    DECL_STRONG_TYPE(prc_topx, float);
    #endif//_prc_topx__GUARD__

    #ifndef _prc_yopx__GUARD__
    #define _prc_yopx__GUARD__
    DECL_STRONG_TYPE(prc_yopx, float);
    #endif//_prc_yopx__GUARD__

    #ifndef _prc_uprc__GUARD__
    #define _prc_uprc__GUARD__
    DECL_STRONG_TYPE(prc_uprc, float);
    #endif//_prc_uprc__GUARD__

    #ifndef _prc_years__GUARD__
    #define _prc_years__GUARD__
    DECL_STRONG_TYPE(prc_years, float);
    #endif//_prc_years__GUARD__

    #ifndef _prc_rate__GUARD__
    #define _prc_rate__GUARD__
    DECL_STRONG_TYPE(prc_rate, float);
    #endif//_prc_rate__GUARD__

    #ifndef _prc_sdiv__GUARD__
    #define _prc_sdiv__GUARD__
    DECL_STRONG_TYPE(prc_sdiv, float);
    #endif//_prc_sdiv__GUARD__

    #ifndef _prc_ddiv__GUARD__
    #define _prc_ddiv__GUARD__
    DECL_STRONG_TYPE(prc_ddiv, float);
    #endif//_prc_ddiv__GUARD__

    #ifndef _u_prc_ratio__float__GUARD__
    #define _u_prc_ratio__float__GUARD__
    DECL_STRONG_TYPE(u_prc_ratio__float, float);
    #endif//_u_prc_ratio__float__GUARD__

    #ifndef _u_prc_move__GUARD__
    #define _u_prc_move__GUARD__
    DECL_STRONG_TYPE(u_prc_move, float);
    #endif//_u_prc_move__GUARD__

    #ifndef _i_vol_move__GUARD__
    #define _i_vol_move__GUARD__
    DECL_STRONG_TYPE(i_vol_move, float);
    #endif//_i_vol_move__GUARD__

    #ifndef _ex_div_amt__GUARD__
    #define _ex_div_amt__GUARD__
    DECL_STRONG_TYPE(ex_div_amt, float);
    #endif//_ex_div_amt__GUARD__

    #ifndef _borrow_rate__GUARD__
    #define _borrow_rate__GUARD__
    DECL_STRONG_TYPE(borrow_rate, float);
    #endif//_borrow_rate__GUARD__

    #ifndef _model_type__int32__GUARD__
    #define _model_type__int32__GUARD__
    DECL_STRONG_TYPE(model_type__int32, int32);
    #endif//_model_type__int32__GUARD__

    #ifndef _underliers_per_cn__GUARD__
    #define _underliers_per_cn__GUARD__
    DECL_STRONG_TYPE(underliers_per_cn, int32);
    #endif//_underliers_per_cn__GUARD__

    #ifndef _underlier_type__UnderlierType__GUARD__
    #define _underlier_type__UnderlierType__GUARD__
    DECL_STRONG_TYPE(underlier_type__UnderlierType, spiderrock::protobuf::api::UnderlierType);
    #endif//_underlier_type__UnderlierType__GUARD__

    #ifndef _point_value__float__GUARD__
    #define _point_value__float__GUARD__
    DECL_STRONG_TYPE(point_value__float, float);
    #endif//_point_value__float__GUARD__

    #ifndef _point_currency__GUARD__
    #define _point_currency__GUARD__
    DECL_STRONG_TYPE(point_currency, spiderrock::protobuf::api::Currency);
    #endif//_point_currency__GUARD__

    #ifndef _tick_value__GUARD__
    #define _tick_value__GUARD__
    DECL_STRONG_TYPE(tick_value, float);
    #endif//_tick_value__GUARD__

    #ifndef _multihedge__GUARD__
    #define _multihedge__GUARD__
    DECL_STRONG_TYPE(multihedge, spiderrock::protobuf::api::Multihedge);
    #endif//_multihedge__GUARD__

    #ifndef _multihedge_source__GUARD__
    #define _multihedge_source__GUARD__
    DECL_STRONG_TYPE(multihedge_source, TickerKey);
    #endif//_multihedge_source__GUARD__

    #ifndef _multihedge_pvratio__GUARD__
    #define _multihedge_pvratio__GUARD__
    DECL_STRONG_TYPE(multihedge_pvratio, float);
    #endif//_multihedge_pvratio__GUARD__

    #ifndef _span_prc_inc_up__GUARD__
    #define _span_prc_inc_up__GUARD__
    DECL_STRONG_TYPE(span_prc_inc_up, float);
    #endif//_span_prc_inc_up__GUARD__

    #ifndef _span_prc_inc_dn__GUARD__
    #define _span_prc_inc_dn__GUARD__
    DECL_STRONG_TYPE(span_prc_inc_dn, float);
    #endif//_span_prc_inc_dn__GUARD__

    #ifndef _span_vol_inc__GUARD__
    #define _span_vol_inc__GUARD__
    DECL_STRONG_TYPE(span_vol_inc, float);
    #endif//_span_vol_inc__GUARD__

    #ifndef _prc_span_type__SpanType__GUARD__
    #define _prc_span_type__SpanType__GUARD__
    DECL_STRONG_TYPE(prc_span_type__SpanType, spiderrock::protobuf::api::SpanType);
    #endif//_prc_span_type__SpanType__GUARD__

    #ifndef _vol_span_type__SpanType__GUARD__
    #define _vol_span_type__SpanType__GUARD__
    DECL_STRONG_TYPE(vol_span_type__SpanType, spiderrock::protobuf::api::SpanType);
    #endif//_vol_span_type__SpanType__GUARD__

    #ifndef _span_pricing_model__GUARD__
    #define _span_pricing_model__GUARD__
    DECL_STRONG_TYPE(span_pricing_model, spiderrock::protobuf::api::SpanPricingModel);
    #endif//_span_pricing_model__GUARD__

    #ifndef _margin_type__GUARD__
    #define _margin_type__GUARD__
    DECL_STRONG_TYPE(margin_type, spiderrock::protobuf::api::MarginType);
    #endif//_margin_type__GUARD__

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

    #ifndef _sec_type__SecType__GUARD__
    #define _sec_type__SecType__GUARD__
    DECL_STRONG_TYPE(sec_type__SecType, spiderrock::protobuf::api::SecType);
    #endif//_sec_type__SecType__GUARD__

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

    
    class RiskCubeDetailV5_PKey {
        public:
        //using statements for all types used in this class
        using accnt = spiderrock::protobuf::api::accnt;
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SecType;
        using trade_date = spiderrock::protobuf::api::trade_date;
        using risk_session = spiderrock::protobuf::api::risk_session;
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        accnt m_accnt{};
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        trade_date m_trade_date{};
        risk_session m_risk_session{};
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
        void set_sec_key(const sec_key& value)  {
            m_sec_key = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to RiskCubeDetailV5_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to RiskCubeDetailV5_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const sec_key & value) { set_sec_key(value); }
        void set(const sec_type & value) { set_sec_type(value); }
        void set(const trade_date & value) { set_trade_date(value); }
        void set(const risk_session & value) { set_risk_session(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        RiskCubeDetailV5_PKey() {}

        virtual ~RiskCubeDetailV5_PKey() {
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
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key;
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(11,optionKeyLayout_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SecType>(m_sec_type)));
            if ( IncludeTradeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(13, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(14,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskSession>(m_risk_session)));
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(15,m_client_firm);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SecType>(m_sec_type)));
            if ( IncludeTradeDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,13, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,14,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskSession>(m_risk_session)));
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,15,static_cast<string>(m_client_firm));
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
                    case 12: {m_sec_type = static_cast<spiderrock::protobuf::api::SecType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 13: {
                        auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                        m_trade_date.set_year(dateKey.year());
                        m_trade_date.set_month(dateKey.month());
                        m_trade_date.set_day(dateKey.day());
                        break;
                    }
                    case 14: {m_risk_session = static_cast<spiderrock::protobuf::api::RiskSession>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 15: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class RiskCubeDetailV5 {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::RiskCubeDetailV5_PKey;
        using version = spiderrock::protobuf::api::version__RiskCubeVersion;
        using clearing_firm = spiderrock::protobuf::api::clearing_firm;
        using clearing_accnt = spiderrock::protobuf::api::clearing_accnt;
        using risk_server_code = spiderrock::protobuf::api::risk_server_code;
        using view_group1 = spiderrock::protobuf::api::view_group1;
        using view_group2 = spiderrock::protobuf::api::view_group2;
        using view_group3 = spiderrock::protobuf::api::view_group3;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using risk_class = spiderrock::protobuf::api::risk_class;
        using symbol_type = spiderrock::protobuf::api::symbol_type;
        using beta = spiderrock::protobuf::api::beta;
        using beta_source = spiderrock::protobuf::api::beta_source;
        using sector = spiderrock::protobuf::api::sector;
        using ind_num = spiderrock::protobuf::api::ind_num;
        using sub_num = spiderrock::protobuf::api::sub_num;
        using grp_num = spiderrock::protobuf::api::grp_num;
        using nbr_num = spiderrock::protobuf::api::nbr_num;
        using e_days = spiderrock::protobuf::api::e_days;
        using d_days = spiderrock::protobuf::api::d_days;
        using x_delta = spiderrock::protobuf::api::x_delta;
        using exp_code = spiderrock::protobuf::api::exp_code;
        using skew_code = spiderrock::protobuf::api::skew_code;
        using e_days_code = spiderrock::protobuf::api::e_days_code;
        using i_vol_range = spiderrock::protobuf::api::i_vol_range;
        using skew_dd = spiderrock::protobuf::api::skew_dd;
        using skew_dn = spiderrock::protobuf::api::skew_dn;
        using skew_at = spiderrock::protobuf::api::skew_at;
        using skew_up = spiderrock::protobuf::api::skew_up;
        using skew_du = spiderrock::protobuf::api::skew_du;
        using sh_opn_pos = spiderrock::protobuf::api::sh_opn_pos;
        using fc_opn_pos = spiderrock::protobuf::api::fc_opn_pos;
        using cn_opn_pos = spiderrock::protobuf::api::cn_opn_pos;
        using cn_atm_equiv = spiderrock::protobuf::api::cn_atm_equiv;
        using sh_bot = spiderrock::protobuf::api::sh_bot;
        using sh_sld = spiderrock::protobuf::api::sh_sld;
        using sh_sld_shrt = spiderrock::protobuf::api::sh_sld_shrt;
        using fc_bot = spiderrock::protobuf::api::fc_bot;
        using fc_sld = spiderrock::protobuf::api::fc_sld;
        using cn_bot = spiderrock::protobuf::api::cn_bot;
        using cn_sld = spiderrock::protobuf::api::cn_sld;
        using cn_opened = spiderrock::protobuf::api::cn_opened;
        using cn_closed = spiderrock::protobuf::api::cn_closed;
        using opn_dir = spiderrock::protobuf::api::opn_dir;
        using pos_dir = spiderrock::protobuf::api::pos_dir;
        using unit_opn_pos = spiderrock::protobuf::api::unit_opn_pos;
        using unit_cur_pos = spiderrock::protobuf::api::unit_cur_pos;
        using unit_qty_bot = spiderrock::protobuf::api::unit_qty_bot;
        using unit_qty_sld = spiderrock::protobuf::api::unit_qty_sld;
        using day_pnl = spiderrock::protobuf::api::day_pnl;
        using day_dn_pnl = spiderrock::protobuf::api::day_dn_pnl;
        using day_trd_delta = spiderrock::protobuf::api::day_trd_delta;
        using day_trd_ddelta = spiderrock::protobuf::api::day_trd_ddelta;
        using day_trd_gamma = spiderrock::protobuf::api::day_trd_gamma;
        using day_trd_dgamma = spiderrock::protobuf::api::day_trd_dgamma;
        using day_trd_vega = spiderrock::protobuf::api::day_trd_vega;
        using day_trd_wvega = spiderrock::protobuf::api::day_trd_wvega;
        using day_trd_tvega = spiderrock::protobuf::api::day_trd_tvega;
        using day_trd_wt_vega = spiderrock::protobuf::api::day_trd_wt_vega;
        using day_trd_theta = spiderrock::protobuf::api::day_trd_theta;
        using day_edge_opened = spiderrock::protobuf::api::day_edge_opened;
        using day_edge_closed = spiderrock::protobuf::api::day_edge_closed;
        using day_mny_bot = spiderrock::protobuf::api::day_mny_bot;
        using day_mny_sld = spiderrock::protobuf::api::day_mny_sld;
        using opn_pnl_vol_mark = spiderrock::protobuf::api::opn_pnl_vol_mark;
        using opn_pnl_mid_mark = spiderrock::protobuf::api::opn_pnl_mid_mark;
        using opn_pnl_clr_mark = spiderrock::protobuf::api::opn_pnl_clr_mark;
        using opn_mark_brk_mny = spiderrock::protobuf::api::opn_mark_brk_mny;
        using opn_theo_edge = spiderrock::protobuf::api::opn_theo_edge;
        using pos_theo_edge = spiderrock::protobuf::api::pos_theo_edge;
        using t_vol_move = spiderrock::protobuf::api::t_vol_move;
        using t_edge_move = spiderrock::protobuf::api::t_edge_move;
        using t_edge = spiderrock::protobuf::api::t_edge;
        using opn_pnl_de = spiderrock::protobuf::api::opn_pnl_de;
        using opn_pnl_ga = spiderrock::protobuf::api::opn_pnl_ga;
        using opn_pnl_th = spiderrock::protobuf::api::opn_pnl_th;
        using opn_pnl_ve = spiderrock::protobuf::api::opn_pnl_ve;
        using opn_pnl_vo = spiderrock::protobuf::api::opn_pnl_vo;
        using opn_pnl_va = spiderrock::protobuf::api::opn_pnl_va;
        using opn_pnl_sl = spiderrock::protobuf::api::opn_pnl_sl;
        using opn_pnl_rate = spiderrock::protobuf::api::opn_pnl_rate;
        using opn_pnl_sdiv = spiderrock::protobuf::api::opn_pnl_sdiv;
        using opn_pnl_ddiv = spiderrock::protobuf::api::opn_pnl_ddiv;
        using opn_pnl_err = spiderrock::protobuf::api::opn_pnl_err;
        using opn_edge_change = spiderrock::protobuf::api::opn_edge_change;
        using pos_delta = spiderrock::protobuf::api::pos_delta;
        using pos_ddelta = spiderrock::protobuf::api::pos_ddelta;
        using pos_dbeta = spiderrock::protobuf::api::pos_dbeta;
        using pos_gamma = spiderrock::protobuf::api::pos_gamma;
        using pos_dgamma = spiderrock::protobuf::api::pos_dgamma;
        using pos_vega = spiderrock::protobuf::api::pos_vega;
        using pos_wvega = spiderrock::protobuf::api::pos_wvega;
        using pos_tvega = spiderrock::protobuf::api::pos_tvega;
        using pos_wt_vega = spiderrock::protobuf::api::pos_wt_vega;
        using pos_volga = spiderrock::protobuf::api::pos_volga;
        using pos_vanna = spiderrock::protobuf::api::pos_vanna;
        using pos_theta = spiderrock::protobuf::api::pos_theta;
        using pos_rho = spiderrock::protobuf::api::pos_rho;
        using pos_phi = spiderrock::protobuf::api::pos_phi;
        using pos_notional = spiderrock::protobuf::api::pos_notional;
        using pos_mkt_value = spiderrock::protobuf::api::pos_mkt_value;
        using pos_prem_opar = spiderrock::protobuf::api::pos_prem_opar;
        using atm_vol = spiderrock::protobuf::api::atm_vol;
        using sym_vol = spiderrock::protobuf::api::sym_vol;
        using sr_slope = spiderrock::protobuf::api::sr_slope;
        using prc_svol = spiderrock::protobuf::api::prc_svol;
        using prc_topx = spiderrock::protobuf::api::prc_topx;
        using prc_yopx = spiderrock::protobuf::api::prc_yopx;
        using prc_uprc = spiderrock::protobuf::api::prc_uprc;
        using prc_years = spiderrock::protobuf::api::prc_years;
        using prc_rate = spiderrock::protobuf::api::prc_rate;
        using prc_sdiv = spiderrock::protobuf::api::prc_sdiv;
        using prc_ddiv = spiderrock::protobuf::api::prc_ddiv;
        using u_prc_ratio = spiderrock::protobuf::api::u_prc_ratio__float;
        using u_prc_move = spiderrock::protobuf::api::u_prc_move;
        using i_vol_move = spiderrock::protobuf::api::i_vol_move;
        using ex_div_amt = spiderrock::protobuf::api::ex_div_amt;
        using borrow_rate = spiderrock::protobuf::api::borrow_rate;
        using model_type = spiderrock::protobuf::api::model_type__int32;
        using underliers_per_cn = spiderrock::protobuf::api::underliers_per_cn;
        using underlier_type = spiderrock::protobuf::api::underlier_type__UnderlierType;
        using point_value = spiderrock::protobuf::api::point_value__float;
        using point_currency = spiderrock::protobuf::api::point_currency;
        using tick_value = spiderrock::protobuf::api::tick_value;
        using multihedge = spiderrock::protobuf::api::multihedge;
        using multihedge_source = spiderrock::protobuf::api::multihedge_source;
        using multihedge_pvratio = spiderrock::protobuf::api::multihedge_pvratio;
        using span_prc_inc_up = spiderrock::protobuf::api::span_prc_inc_up;
        using span_prc_inc_dn = spiderrock::protobuf::api::span_prc_inc_dn;
        using span_vol_inc = spiderrock::protobuf::api::span_vol_inc;
        using prc_span_type = spiderrock::protobuf::api::prc_span_type__SpanType;
        using vol_span_type = spiderrock::protobuf::api::vol_span_type__SpanType;
        using span_pricing_model = spiderrock::protobuf::api::span_pricing_model;
        using margin_type = spiderrock::protobuf::api::margin_type;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        version m_version{};
        clearing_firm m_clearing_firm{};
        clearing_accnt m_clearing_accnt{};
        risk_server_code m_risk_server_code{};
        view_group1 m_view_group1{};
        view_group2 m_view_group2{};
        view_group3 m_view_group3{};
        ticker m_ticker{};
        risk_class m_risk_class{};
        symbol_type m_symbol_type{};
        beta m_beta{};
        beta_source m_beta_source{};
        sector m_sector{};
        ind_num m_ind_num{};
        sub_num m_sub_num{};
        grp_num m_grp_num{};
        nbr_num m_nbr_num{};
        e_days m_e_days{};
        d_days m_d_days{};
        x_delta m_x_delta{};
        exp_code m_exp_code{};
        skew_code m_skew_code{};
        e_days_code m_e_days_code{};
        i_vol_range m_i_vol_range{};
        skew_dd m_skew_dd{};
        skew_dn m_skew_dn{};
        skew_at m_skew_at{};
        skew_up m_skew_up{};
        skew_du m_skew_du{};
        sh_opn_pos m_sh_opn_pos{};
        fc_opn_pos m_fc_opn_pos{};
        cn_opn_pos m_cn_opn_pos{};
        cn_atm_equiv m_cn_atm_equiv{};
        sh_bot m_sh_bot{};
        sh_sld m_sh_sld{};
        sh_sld_shrt m_sh_sld_shrt{};
        fc_bot m_fc_bot{};
        fc_sld m_fc_sld{};
        cn_bot m_cn_bot{};
        cn_sld m_cn_sld{};
        cn_opened m_cn_opened{};
        cn_closed m_cn_closed{};
        opn_dir m_opn_dir{};
        pos_dir m_pos_dir{};
        unit_opn_pos m_unit_opn_pos{};
        unit_cur_pos m_unit_cur_pos{};
        unit_qty_bot m_unit_qty_bot{};
        unit_qty_sld m_unit_qty_sld{};
        day_pnl m_day_pnl{};
        day_dn_pnl m_day_dn_pnl{};
        day_trd_delta m_day_trd_delta{};
        day_trd_ddelta m_day_trd_ddelta{};
        day_trd_gamma m_day_trd_gamma{};
        day_trd_dgamma m_day_trd_dgamma{};
        day_trd_vega m_day_trd_vega{};
        day_trd_wvega m_day_trd_wvega{};
        day_trd_tvega m_day_trd_tvega{};
        day_trd_wt_vega m_day_trd_wt_vega{};
        day_trd_theta m_day_trd_theta{};
        day_edge_opened m_day_edge_opened{};
        day_edge_closed m_day_edge_closed{};
        day_mny_bot m_day_mny_bot{};
        day_mny_sld m_day_mny_sld{};
        opn_pnl_vol_mark m_opn_pnl_vol_mark{};
        opn_pnl_mid_mark m_opn_pnl_mid_mark{};
        opn_pnl_clr_mark m_opn_pnl_clr_mark{};
        opn_mark_brk_mny m_opn_mark_brk_mny{};
        opn_theo_edge m_opn_theo_edge{};
        pos_theo_edge m_pos_theo_edge{};
        t_vol_move m_t_vol_move{};
        t_edge_move m_t_edge_move{};
        t_edge m_t_edge{};
        opn_pnl_de m_opn_pnl_de{};
        opn_pnl_ga m_opn_pnl_ga{};
        opn_pnl_th m_opn_pnl_th{};
        opn_pnl_ve m_opn_pnl_ve{};
        opn_pnl_vo m_opn_pnl_vo{};
        opn_pnl_va m_opn_pnl_va{};
        opn_pnl_sl m_opn_pnl_sl{};
        opn_pnl_rate m_opn_pnl_rate{};
        opn_pnl_sdiv m_opn_pnl_sdiv{};
        opn_pnl_ddiv m_opn_pnl_ddiv{};
        opn_pnl_err m_opn_pnl_err{};
        opn_edge_change m_opn_edge_change{};
        pos_delta m_pos_delta{};
        pos_ddelta m_pos_ddelta{};
        pos_dbeta m_pos_dbeta{};
        pos_gamma m_pos_gamma{};
        pos_dgamma m_pos_dgamma{};
        pos_vega m_pos_vega{};
        pos_wvega m_pos_wvega{};
        pos_tvega m_pos_tvega{};
        pos_wt_vega m_pos_wt_vega{};
        pos_volga m_pos_volga{};
        pos_vanna m_pos_vanna{};
        pos_theta m_pos_theta{};
        pos_rho m_pos_rho{};
        pos_phi m_pos_phi{};
        pos_notional m_pos_notional{};
        pos_mkt_value m_pos_mkt_value{};
        pos_prem_opar m_pos_prem_opar{};
        atm_vol m_atm_vol{};
        sym_vol m_sym_vol{};
        sr_slope m_sr_slope{};
        prc_svol m_prc_svol{};
        prc_topx m_prc_topx{};
        prc_yopx m_prc_yopx{};
        prc_uprc m_prc_uprc{};
        prc_years m_prc_years{};
        prc_rate m_prc_rate{};
        prc_sdiv m_prc_sdiv{};
        prc_ddiv m_prc_ddiv{};
        u_prc_ratio m_u_prc_ratio{};
        u_prc_move m_u_prc_move{};
        i_vol_move m_i_vol_move{};
        ex_div_amt m_ex_div_amt{};
        borrow_rate m_borrow_rate{};
        model_type m_model_type{};
        underliers_per_cn m_underliers_per_cn{};
        underlier_type m_underlier_type{};
        point_value m_point_value{};
        point_currency m_point_currency{};
        tick_value m_tick_value{};
        multihedge m_multihedge{};
        multihedge_source m_multihedge_source{};
        multihedge_pvratio m_multihedge_pvratio{};
        span_prc_inc_up m_span_prc_inc_up{};
        span_prc_inc_dn m_span_prc_inc_dn{};
        span_vol_inc m_span_vol_inc{};
        prc_span_type m_prc_span_type{};
        vol_span_type m_vol_span_type{};
        span_pricing_model m_span_pricing_model{};
        margin_type m_margin_type{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        version get_version() const {
            return m_version;
        }		
        clearing_firm get_clearing_firm() const {
            return m_clearing_firm;
        }		
        clearing_accnt get_clearing_accnt() const {
            return m_clearing_accnt;
        }		
        risk_server_code get_risk_server_code() const {
            return m_risk_server_code;
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
        ticker get_ticker() const {
            return m_ticker;
        }		
        risk_class get_risk_class() const {
            return m_risk_class;
        }		
        symbol_type get_symbol_type() const {
            return m_symbol_type;
        }		
        beta get_beta() const {
            return m_beta;
        }		
        beta_source get_beta_source() const {
            return m_beta_source;
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
        e_days get_e_days() const {
            return m_e_days;
        }		
        d_days get_d_days() const {
            return m_d_days;
        }		
        x_delta get_x_delta() const {
            return m_x_delta;
        }		
        exp_code get_exp_code() const {
            return m_exp_code;
        }		
        skew_code get_skew_code() const {
            return m_skew_code;
        }		
        e_days_code get_e_days_code() const {
            return m_e_days_code;
        }		
        i_vol_range get_i_vol_range() const {
            return m_i_vol_range;
        }		
        skew_dd get_skew_dd() const {
            return m_skew_dd;
        }		
        skew_dn get_skew_dn() const {
            return m_skew_dn;
        }		
        skew_at get_skew_at() const {
            return m_skew_at;
        }		
        skew_up get_skew_up() const {
            return m_skew_up;
        }		
        skew_du get_skew_du() const {
            return m_skew_du;
        }		
        sh_opn_pos get_sh_opn_pos() const {
            return m_sh_opn_pos;
        }		
        fc_opn_pos get_fc_opn_pos() const {
            return m_fc_opn_pos;
        }		
        cn_opn_pos get_cn_opn_pos() const {
            return m_cn_opn_pos;
        }		
        cn_atm_equiv get_cn_atm_equiv() const {
            return m_cn_atm_equiv;
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
        fc_bot get_fc_bot() const {
            return m_fc_bot;
        }		
        fc_sld get_fc_sld() const {
            return m_fc_sld;
        }		
        cn_bot get_cn_bot() const {
            return m_cn_bot;
        }		
        cn_sld get_cn_sld() const {
            return m_cn_sld;
        }		
        cn_opened get_cn_opened() const {
            return m_cn_opened;
        }		
        cn_closed get_cn_closed() const {
            return m_cn_closed;
        }		
        opn_dir get_opn_dir() const {
            return m_opn_dir;
        }		
        pos_dir get_pos_dir() const {
            return m_pos_dir;
        }		
        unit_opn_pos get_unit_opn_pos() const {
            return m_unit_opn_pos;
        }		
        unit_cur_pos get_unit_cur_pos() const {
            return m_unit_cur_pos;
        }		
        unit_qty_bot get_unit_qty_bot() const {
            return m_unit_qty_bot;
        }		
        unit_qty_sld get_unit_qty_sld() const {
            return m_unit_qty_sld;
        }		
        day_pnl get_day_pnl() const {
            return m_day_pnl;
        }		
        day_dn_pnl get_day_dn_pnl() const {
            return m_day_dn_pnl;
        }		
        day_trd_delta get_day_trd_delta() const {
            return m_day_trd_delta;
        }		
        day_trd_ddelta get_day_trd_ddelta() const {
            return m_day_trd_ddelta;
        }		
        day_trd_gamma get_day_trd_gamma() const {
            return m_day_trd_gamma;
        }		
        day_trd_dgamma get_day_trd_dgamma() const {
            return m_day_trd_dgamma;
        }		
        day_trd_vega get_day_trd_vega() const {
            return m_day_trd_vega;
        }		
        day_trd_wvega get_day_trd_wvega() const {
            return m_day_trd_wvega;
        }		
        day_trd_tvega get_day_trd_tvega() const {
            return m_day_trd_tvega;
        }		
        day_trd_wt_vega get_day_trd_wt_vega() const {
            return m_day_trd_wt_vega;
        }		
        day_trd_theta get_day_trd_theta() const {
            return m_day_trd_theta;
        }		
        day_edge_opened get_day_edge_opened() const {
            return m_day_edge_opened;
        }		
        day_edge_closed get_day_edge_closed() const {
            return m_day_edge_closed;
        }		
        day_mny_bot get_day_mny_bot() const {
            return m_day_mny_bot;
        }		
        day_mny_sld get_day_mny_sld() const {
            return m_day_mny_sld;
        }		
        opn_pnl_vol_mark get_opn_pnl_vol_mark() const {
            return m_opn_pnl_vol_mark;
        }		
        opn_pnl_mid_mark get_opn_pnl_mid_mark() const {
            return m_opn_pnl_mid_mark;
        }		
        opn_pnl_clr_mark get_opn_pnl_clr_mark() const {
            return m_opn_pnl_clr_mark;
        }		
        opn_mark_brk_mny get_opn_mark_brk_mny() const {
            return m_opn_mark_brk_mny;
        }		
        opn_theo_edge get_opn_theo_edge() const {
            return m_opn_theo_edge;
        }		
        pos_theo_edge get_pos_theo_edge() const {
            return m_pos_theo_edge;
        }		
        t_vol_move get_t_vol_move() const {
            return m_t_vol_move;
        }		
        t_edge_move get_t_edge_move() const {
            return m_t_edge_move;
        }		
        t_edge get_t_edge() const {
            return m_t_edge;
        }		
        opn_pnl_de get_opn_pnl_de() const {
            return m_opn_pnl_de;
        }		
        opn_pnl_ga get_opn_pnl_ga() const {
            return m_opn_pnl_ga;
        }		
        opn_pnl_th get_opn_pnl_th() const {
            return m_opn_pnl_th;
        }		
        opn_pnl_ve get_opn_pnl_ve() const {
            return m_opn_pnl_ve;
        }		
        opn_pnl_vo get_opn_pnl_vo() const {
            return m_opn_pnl_vo;
        }		
        opn_pnl_va get_opn_pnl_va() const {
            return m_opn_pnl_va;
        }		
        opn_pnl_sl get_opn_pnl_sl() const {
            return m_opn_pnl_sl;
        }		
        opn_pnl_rate get_opn_pnl_rate() const {
            return m_opn_pnl_rate;
        }		
        opn_pnl_sdiv get_opn_pnl_sdiv() const {
            return m_opn_pnl_sdiv;
        }		
        opn_pnl_ddiv get_opn_pnl_ddiv() const {
            return m_opn_pnl_ddiv;
        }		
        opn_pnl_err get_opn_pnl_err() const {
            return m_opn_pnl_err;
        }		
        opn_edge_change get_opn_edge_change() const {
            return m_opn_edge_change;
        }		
        pos_delta get_pos_delta() const {
            return m_pos_delta;
        }		
        pos_ddelta get_pos_ddelta() const {
            return m_pos_ddelta;
        }		
        pos_dbeta get_pos_dbeta() const {
            return m_pos_dbeta;
        }		
        pos_gamma get_pos_gamma() const {
            return m_pos_gamma;
        }		
        pos_dgamma get_pos_dgamma() const {
            return m_pos_dgamma;
        }		
        pos_vega get_pos_vega() const {
            return m_pos_vega;
        }		
        pos_wvega get_pos_wvega() const {
            return m_pos_wvega;
        }		
        pos_tvega get_pos_tvega() const {
            return m_pos_tvega;
        }		
        pos_wt_vega get_pos_wt_vega() const {
            return m_pos_wt_vega;
        }		
        pos_volga get_pos_volga() const {
            return m_pos_volga;
        }		
        pos_vanna get_pos_vanna() const {
            return m_pos_vanna;
        }		
        pos_theta get_pos_theta() const {
            return m_pos_theta;
        }		
        pos_rho get_pos_rho() const {
            return m_pos_rho;
        }		
        pos_phi get_pos_phi() const {
            return m_pos_phi;
        }		
        pos_notional get_pos_notional() const {
            return m_pos_notional;
        }		
        pos_mkt_value get_pos_mkt_value() const {
            return m_pos_mkt_value;
        }		
        pos_prem_opar get_pos_prem_opar() const {
            return m_pos_prem_opar;
        }		
        atm_vol get_atm_vol() const {
            return m_atm_vol;
        }		
        sym_vol get_sym_vol() const {
            return m_sym_vol;
        }		
        sr_slope get_sr_slope() const {
            return m_sr_slope;
        }		
        prc_svol get_prc_svol() const {
            return m_prc_svol;
        }		
        prc_topx get_prc_topx() const {
            return m_prc_topx;
        }		
        prc_yopx get_prc_yopx() const {
            return m_prc_yopx;
        }		
        prc_uprc get_prc_uprc() const {
            return m_prc_uprc;
        }		
        prc_years get_prc_years() const {
            return m_prc_years;
        }		
        prc_rate get_prc_rate() const {
            return m_prc_rate;
        }		
        prc_sdiv get_prc_sdiv() const {
            return m_prc_sdiv;
        }		
        prc_ddiv get_prc_ddiv() const {
            return m_prc_ddiv;
        }		
        u_prc_ratio get_u_prc_ratio() const {
            return m_u_prc_ratio;
        }		
        u_prc_move get_u_prc_move() const {
            return m_u_prc_move;
        }		
        i_vol_move get_i_vol_move() const {
            return m_i_vol_move;
        }		
        ex_div_amt get_ex_div_amt() const {
            return m_ex_div_amt;
        }		
        borrow_rate get_borrow_rate() const {
            return m_borrow_rate;
        }		
        model_type get_model_type() const {
            return m_model_type;
        }		
        underliers_per_cn get_underliers_per_cn() const {
            return m_underliers_per_cn;
        }		
        underlier_type get_underlier_type() const {
            return m_underlier_type;
        }		
        point_value get_point_value() const {
            return m_point_value;
        }		
        point_currency get_point_currency() const {
            return m_point_currency;
        }		
        tick_value get_tick_value() const {
            return m_tick_value;
        }		
        multihedge get_multihedge() const {
            return m_multihedge;
        }		
        multihedge_source get_multihedge_source() const {
            return m_multihedge_source;
        }		
        multihedge_pvratio get_multihedge_pvratio() const {
            return m_multihedge_pvratio;
        }		
        span_prc_inc_up get_span_prc_inc_up() const {
            return m_span_prc_inc_up;
        }		
        span_prc_inc_dn get_span_prc_inc_dn() const {
            return m_span_prc_inc_dn;
        }		
        span_vol_inc get_span_vol_inc() const {
            return m_span_vol_inc;
        }		
        prc_span_type get_prc_span_type() const {
            return m_prc_span_type;
        }		
        vol_span_type get_vol_span_type() const {
            return m_vol_span_type;
        }		
        span_pricing_model get_span_pricing_model() const {
            return m_span_pricing_model;
        }		
        margin_type get_margin_type() const {
            return m_margin_type;
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
        void set_version(const version& value)  {
            m_version = value;
        }
        void set_clearing_firm(const clearing_firm& value)  {
            m_clearing_firm = value;
        }
        void set_clearing_accnt(const clearing_accnt& value)  {
            m_clearing_accnt = value;
        }
        void set_risk_server_code(const risk_server_code& value)  {
            m_risk_server_code = value;
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
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_risk_class(const risk_class& value)  {
            m_risk_class = value;
        }
        void set_symbol_type(const symbol_type& value)  {
            m_symbol_type = value;
        }
        void set_beta(const beta& value)  {
            m_beta = value;
        }
        void set_beta_source(const beta_source& value)  {
            m_beta_source = value;
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
        void set_e_days(const e_days& value)  {
            m_e_days = value;
        }
        void set_d_days(const d_days& value)  {
            m_d_days = value;
        }
        void set_x_delta(const x_delta& value)  {
            m_x_delta = value;
        }
        void set_exp_code(const exp_code& value)  {
            m_exp_code = value;
        }
        void set_skew_code(const skew_code& value)  {
            m_skew_code = value;
        }
        void set_e_days_code(const e_days_code& value)  {
            m_e_days_code = value;
        }
        void set_i_vol_range(const i_vol_range& value)  {
            m_i_vol_range = value;
        }
        void set_skew_dd(const skew_dd& value)  {
            m_skew_dd = value;
        }
        void set_skew_dn(const skew_dn& value)  {
            m_skew_dn = value;
        }
        void set_skew_at(const skew_at& value)  {
            m_skew_at = value;
        }
        void set_skew_up(const skew_up& value)  {
            m_skew_up = value;
        }
        void set_skew_du(const skew_du& value)  {
            m_skew_du = value;
        }
        void set_sh_opn_pos(const sh_opn_pos& value)  {
            m_sh_opn_pos = value;
        }
        void set_fc_opn_pos(const fc_opn_pos& value)  {
            m_fc_opn_pos = value;
        }
        void set_cn_opn_pos(const cn_opn_pos& value)  {
            m_cn_opn_pos = value;
        }
        void set_cn_atm_equiv(const cn_atm_equiv& value)  {
            m_cn_atm_equiv = value;
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
        void set_fc_bot(const fc_bot& value)  {
            m_fc_bot = value;
        }
        void set_fc_sld(const fc_sld& value)  {
            m_fc_sld = value;
        }
        void set_cn_bot(const cn_bot& value)  {
            m_cn_bot = value;
        }
        void set_cn_sld(const cn_sld& value)  {
            m_cn_sld = value;
        }
        void set_cn_opened(const cn_opened& value)  {
            m_cn_opened = value;
        }
        void set_cn_closed(const cn_closed& value)  {
            m_cn_closed = value;
        }
        void set_opn_dir(const opn_dir& value)  {
            m_opn_dir = value;
        }
        void set_pos_dir(const pos_dir& value)  {
            m_pos_dir = value;
        }
        void set_unit_opn_pos(const unit_opn_pos& value)  {
            m_unit_opn_pos = value;
        }
        void set_unit_cur_pos(const unit_cur_pos& value)  {
            m_unit_cur_pos = value;
        }
        void set_unit_qty_bot(const unit_qty_bot& value)  {
            m_unit_qty_bot = value;
        }
        void set_unit_qty_sld(const unit_qty_sld& value)  {
            m_unit_qty_sld = value;
        }
        void set_day_pnl(const day_pnl& value)  {
            m_day_pnl = value;
        }
        void set_day_dn_pnl(const day_dn_pnl& value)  {
            m_day_dn_pnl = value;
        }
        void set_day_trd_delta(const day_trd_delta& value)  {
            m_day_trd_delta = value;
        }
        void set_day_trd_ddelta(const day_trd_ddelta& value)  {
            m_day_trd_ddelta = value;
        }
        void set_day_trd_gamma(const day_trd_gamma& value)  {
            m_day_trd_gamma = value;
        }
        void set_day_trd_dgamma(const day_trd_dgamma& value)  {
            m_day_trd_dgamma = value;
        }
        void set_day_trd_vega(const day_trd_vega& value)  {
            m_day_trd_vega = value;
        }
        void set_day_trd_wvega(const day_trd_wvega& value)  {
            m_day_trd_wvega = value;
        }
        void set_day_trd_tvega(const day_trd_tvega& value)  {
            m_day_trd_tvega = value;
        }
        void set_day_trd_wt_vega(const day_trd_wt_vega& value)  {
            m_day_trd_wt_vega = value;
        }
        void set_day_trd_theta(const day_trd_theta& value)  {
            m_day_trd_theta = value;
        }
        void set_day_edge_opened(const day_edge_opened& value)  {
            m_day_edge_opened = value;
        }
        void set_day_edge_closed(const day_edge_closed& value)  {
            m_day_edge_closed = value;
        }
        void set_day_mny_bot(const day_mny_bot& value)  {
            m_day_mny_bot = value;
        }
        void set_day_mny_sld(const day_mny_sld& value)  {
            m_day_mny_sld = value;
        }
        void set_opn_pnl_vol_mark(const opn_pnl_vol_mark& value)  {
            m_opn_pnl_vol_mark = value;
        }
        void set_opn_pnl_mid_mark(const opn_pnl_mid_mark& value)  {
            m_opn_pnl_mid_mark = value;
        }
        void set_opn_pnl_clr_mark(const opn_pnl_clr_mark& value)  {
            m_opn_pnl_clr_mark = value;
        }
        void set_opn_mark_brk_mny(const opn_mark_brk_mny& value)  {
            m_opn_mark_brk_mny = value;
        }
        void set_opn_theo_edge(const opn_theo_edge& value)  {
            m_opn_theo_edge = value;
        }
        void set_pos_theo_edge(const pos_theo_edge& value)  {
            m_pos_theo_edge = value;
        }
        void set_t_vol_move(const t_vol_move& value)  {
            m_t_vol_move = value;
        }
        void set_t_edge_move(const t_edge_move& value)  {
            m_t_edge_move = value;
        }
        void set_t_edge(const t_edge& value)  {
            m_t_edge = value;
        }
        void set_opn_pnl_de(const opn_pnl_de& value)  {
            m_opn_pnl_de = value;
        }
        void set_opn_pnl_ga(const opn_pnl_ga& value)  {
            m_opn_pnl_ga = value;
        }
        void set_opn_pnl_th(const opn_pnl_th& value)  {
            m_opn_pnl_th = value;
        }
        void set_opn_pnl_ve(const opn_pnl_ve& value)  {
            m_opn_pnl_ve = value;
        }
        void set_opn_pnl_vo(const opn_pnl_vo& value)  {
            m_opn_pnl_vo = value;
        }
        void set_opn_pnl_va(const opn_pnl_va& value)  {
            m_opn_pnl_va = value;
        }
        void set_opn_pnl_sl(const opn_pnl_sl& value)  {
            m_opn_pnl_sl = value;
        }
        void set_opn_pnl_rate(const opn_pnl_rate& value)  {
            m_opn_pnl_rate = value;
        }
        void set_opn_pnl_sdiv(const opn_pnl_sdiv& value)  {
            m_opn_pnl_sdiv = value;
        }
        void set_opn_pnl_ddiv(const opn_pnl_ddiv& value)  {
            m_opn_pnl_ddiv = value;
        }
        void set_opn_pnl_err(const opn_pnl_err& value)  {
            m_opn_pnl_err = value;
        }
        void set_opn_edge_change(const opn_edge_change& value)  {
            m_opn_edge_change = value;
        }
        void set_pos_delta(const pos_delta& value)  {
            m_pos_delta = value;
        }
        void set_pos_ddelta(const pos_ddelta& value)  {
            m_pos_ddelta = value;
        }
        void set_pos_dbeta(const pos_dbeta& value)  {
            m_pos_dbeta = value;
        }
        void set_pos_gamma(const pos_gamma& value)  {
            m_pos_gamma = value;
        }
        void set_pos_dgamma(const pos_dgamma& value)  {
            m_pos_dgamma = value;
        }
        void set_pos_vega(const pos_vega& value)  {
            m_pos_vega = value;
        }
        void set_pos_wvega(const pos_wvega& value)  {
            m_pos_wvega = value;
        }
        void set_pos_tvega(const pos_tvega& value)  {
            m_pos_tvega = value;
        }
        void set_pos_wt_vega(const pos_wt_vega& value)  {
            m_pos_wt_vega = value;
        }
        void set_pos_volga(const pos_volga& value)  {
            m_pos_volga = value;
        }
        void set_pos_vanna(const pos_vanna& value)  {
            m_pos_vanna = value;
        }
        void set_pos_theta(const pos_theta& value)  {
            m_pos_theta = value;
        }
        void set_pos_rho(const pos_rho& value)  {
            m_pos_rho = value;
        }
        void set_pos_phi(const pos_phi& value)  {
            m_pos_phi = value;
        }
        void set_pos_notional(const pos_notional& value)  {
            m_pos_notional = value;
        }
        void set_pos_mkt_value(const pos_mkt_value& value)  {
            m_pos_mkt_value = value;
        }
        void set_pos_prem_opar(const pos_prem_opar& value)  {
            m_pos_prem_opar = value;
        }
        void set_atm_vol(const atm_vol& value)  {
            m_atm_vol = value;
        }
        void set_sym_vol(const sym_vol& value)  {
            m_sym_vol = value;
        }
        void set_sr_slope(const sr_slope& value)  {
            m_sr_slope = value;
        }
        void set_prc_svol(const prc_svol& value)  {
            m_prc_svol = value;
        }
        void set_prc_topx(const prc_topx& value)  {
            m_prc_topx = value;
        }
        void set_prc_yopx(const prc_yopx& value)  {
            m_prc_yopx = value;
        }
        void set_prc_uprc(const prc_uprc& value)  {
            m_prc_uprc = value;
        }
        void set_prc_years(const prc_years& value)  {
            m_prc_years = value;
        }
        void set_prc_rate(const prc_rate& value)  {
            m_prc_rate = value;
        }
        void set_prc_sdiv(const prc_sdiv& value)  {
            m_prc_sdiv = value;
        }
        void set_prc_ddiv(const prc_ddiv& value)  {
            m_prc_ddiv = value;
        }
        void set_u_prc_ratio(const u_prc_ratio& value)  {
            m_u_prc_ratio = value;
        }
        void set_u_prc_move(const u_prc_move& value)  {
            m_u_prc_move = value;
        }
        void set_i_vol_move(const i_vol_move& value)  {
            m_i_vol_move = value;
        }
        void set_ex_div_amt(const ex_div_amt& value)  {
            m_ex_div_amt = value;
        }
        void set_borrow_rate(const borrow_rate& value)  {
            m_borrow_rate = value;
        }
        void set_model_type(const model_type& value)  {
            m_model_type = value;
        }
        void set_underliers_per_cn(const underliers_per_cn& value)  {
            m_underliers_per_cn = value;
        }
        void set_underlier_type(const underlier_type& value)  {
            m_underlier_type = value;
        }
        void set_point_value(const point_value& value)  {
            m_point_value = value;
        }
        void set_point_currency(const point_currency& value)  {
            m_point_currency = value;
        }
        void set_tick_value(const tick_value& value)  {
            m_tick_value = value;
        }
        void set_multihedge(const multihedge& value)  {
            m_multihedge = value;
        }
        void set_multihedge_source(const multihedge_source& value)  {
            m_multihedge_source = value;
        }
        void set_multihedge_pvratio(const multihedge_pvratio& value)  {
            m_multihedge_pvratio = value;
        }
        void set_span_prc_inc_up(const span_prc_inc_up& value)  {
            m_span_prc_inc_up = value;
        }
        void set_span_prc_inc_dn(const span_prc_inc_dn& value)  {
            m_span_prc_inc_dn = value;
        }
        void set_span_vol_inc(const span_vol_inc& value)  {
            m_span_vol_inc = value;
        }
        void set_prc_span_type(const prc_span_type& value)  {
            m_prc_span_type = value;
        }
        void set_vol_span_type(const vol_span_type& value)  {
            m_vol_span_type = value;
        }
        void set_span_pricing_model(const span_pricing_model& value)  {
            m_span_pricing_model = value;
        }
        void set_margin_type(const margin_type& value)  {
            m_margin_type = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to RiskCubeDetailV5::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const version & value) {
            set_version(value);
        }
        void set(const clearing_firm & value) {
            set_clearing_firm(value);
        }
        void set(const clearing_accnt & value) {
            set_clearing_accnt(value);
        }
        void set(const risk_server_code & value) {
            set_risk_server_code(value);
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
        void set(const ticker & value) {
            set_ticker(value);
        }
        void set(const risk_class & value) {
            set_risk_class(value);
        }
        void set(const symbol_type & value) {
            set_symbol_type(value);
        }
        void set(const beta & value) {
            set_beta(value);
        }
        void set(const beta_source & value) {
            set_beta_source(value);
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
        void set(const e_days & value) {
            set_e_days(value);
        }
        void set(const d_days & value) {
            set_d_days(value);
        }
        void set(const x_delta & value) {
            set_x_delta(value);
        }
        void set(const exp_code & value) {
            set_exp_code(value);
        }
        void set(const skew_code & value) {
            set_skew_code(value);
        }
        void set(const e_days_code & value) {
            set_e_days_code(value);
        }
        void set(const i_vol_range & value) {
            set_i_vol_range(value);
        }
        void set(const skew_dd & value) {
            set_skew_dd(value);
        }
        void set(const skew_dn & value) {
            set_skew_dn(value);
        }
        void set(const skew_at & value) {
            set_skew_at(value);
        }
        void set(const skew_up & value) {
            set_skew_up(value);
        }
        void set(const skew_du & value) {
            set_skew_du(value);
        }
        void set(const sh_opn_pos & value) {
            set_sh_opn_pos(value);
        }
        void set(const fc_opn_pos & value) {
            set_fc_opn_pos(value);
        }
        void set(const cn_opn_pos & value) {
            set_cn_opn_pos(value);
        }
        void set(const cn_atm_equiv & value) {
            set_cn_atm_equiv(value);
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
        void set(const fc_bot & value) {
            set_fc_bot(value);
        }
        void set(const fc_sld & value) {
            set_fc_sld(value);
        }
        void set(const cn_bot & value) {
            set_cn_bot(value);
        }
        void set(const cn_sld & value) {
            set_cn_sld(value);
        }
        void set(const cn_opened & value) {
            set_cn_opened(value);
        }
        void set(const cn_closed & value) {
            set_cn_closed(value);
        }
        void set(const opn_dir & value) {
            set_opn_dir(value);
        }
        void set(const pos_dir & value) {
            set_pos_dir(value);
        }
        void set(const unit_opn_pos & value) {
            set_unit_opn_pos(value);
        }
        void set(const unit_cur_pos & value) {
            set_unit_cur_pos(value);
        }
        void set(const unit_qty_bot & value) {
            set_unit_qty_bot(value);
        }
        void set(const unit_qty_sld & value) {
            set_unit_qty_sld(value);
        }
        void set(const day_pnl & value) {
            set_day_pnl(value);
        }
        void set(const day_dn_pnl & value) {
            set_day_dn_pnl(value);
        }
        void set(const day_trd_delta & value) {
            set_day_trd_delta(value);
        }
        void set(const day_trd_ddelta & value) {
            set_day_trd_ddelta(value);
        }
        void set(const day_trd_gamma & value) {
            set_day_trd_gamma(value);
        }
        void set(const day_trd_dgamma & value) {
            set_day_trd_dgamma(value);
        }
        void set(const day_trd_vega & value) {
            set_day_trd_vega(value);
        }
        void set(const day_trd_wvega & value) {
            set_day_trd_wvega(value);
        }
        void set(const day_trd_tvega & value) {
            set_day_trd_tvega(value);
        }
        void set(const day_trd_wt_vega & value) {
            set_day_trd_wt_vega(value);
        }
        void set(const day_trd_theta & value) {
            set_day_trd_theta(value);
        }
        void set(const day_edge_opened & value) {
            set_day_edge_opened(value);
        }
        void set(const day_edge_closed & value) {
            set_day_edge_closed(value);
        }
        void set(const day_mny_bot & value) {
            set_day_mny_bot(value);
        }
        void set(const day_mny_sld & value) {
            set_day_mny_sld(value);
        }
        void set(const opn_pnl_vol_mark & value) {
            set_opn_pnl_vol_mark(value);
        }
        void set(const opn_pnl_mid_mark & value) {
            set_opn_pnl_mid_mark(value);
        }
        void set(const opn_pnl_clr_mark & value) {
            set_opn_pnl_clr_mark(value);
        }
        void set(const opn_mark_brk_mny & value) {
            set_opn_mark_brk_mny(value);
        }
        void set(const opn_theo_edge & value) {
            set_opn_theo_edge(value);
        }
        void set(const pos_theo_edge & value) {
            set_pos_theo_edge(value);
        }
        void set(const t_vol_move & value) {
            set_t_vol_move(value);
        }
        void set(const t_edge_move & value) {
            set_t_edge_move(value);
        }
        void set(const t_edge & value) {
            set_t_edge(value);
        }
        void set(const opn_pnl_de & value) {
            set_opn_pnl_de(value);
        }
        void set(const opn_pnl_ga & value) {
            set_opn_pnl_ga(value);
        }
        void set(const opn_pnl_th & value) {
            set_opn_pnl_th(value);
        }
        void set(const opn_pnl_ve & value) {
            set_opn_pnl_ve(value);
        }
        void set(const opn_pnl_vo & value) {
            set_opn_pnl_vo(value);
        }
        void set(const opn_pnl_va & value) {
            set_opn_pnl_va(value);
        }
        void set(const opn_pnl_sl & value) {
            set_opn_pnl_sl(value);
        }
        void set(const opn_pnl_rate & value) {
            set_opn_pnl_rate(value);
        }
        void set(const opn_pnl_sdiv & value) {
            set_opn_pnl_sdiv(value);
        }
        void set(const opn_pnl_ddiv & value) {
            set_opn_pnl_ddiv(value);
        }
        void set(const opn_pnl_err & value) {
            set_opn_pnl_err(value);
        }
        void set(const opn_edge_change & value) {
            set_opn_edge_change(value);
        }
        void set(const pos_delta & value) {
            set_pos_delta(value);
        }
        void set(const pos_ddelta & value) {
            set_pos_ddelta(value);
        }
        void set(const pos_dbeta & value) {
            set_pos_dbeta(value);
        }
        void set(const pos_gamma & value) {
            set_pos_gamma(value);
        }
        void set(const pos_dgamma & value) {
            set_pos_dgamma(value);
        }
        void set(const pos_vega & value) {
            set_pos_vega(value);
        }
        void set(const pos_wvega & value) {
            set_pos_wvega(value);
        }
        void set(const pos_tvega & value) {
            set_pos_tvega(value);
        }
        void set(const pos_wt_vega & value) {
            set_pos_wt_vega(value);
        }
        void set(const pos_volga & value) {
            set_pos_volga(value);
        }
        void set(const pos_vanna & value) {
            set_pos_vanna(value);
        }
        void set(const pos_theta & value) {
            set_pos_theta(value);
        }
        void set(const pos_rho & value) {
            set_pos_rho(value);
        }
        void set(const pos_phi & value) {
            set_pos_phi(value);
        }
        void set(const pos_notional & value) {
            set_pos_notional(value);
        }
        void set(const pos_mkt_value & value) {
            set_pos_mkt_value(value);
        }
        void set(const pos_prem_opar & value) {
            set_pos_prem_opar(value);
        }
        void set(const atm_vol & value) {
            set_atm_vol(value);
        }
        void set(const sym_vol & value) {
            set_sym_vol(value);
        }
        void set(const sr_slope & value) {
            set_sr_slope(value);
        }
        void set(const prc_svol & value) {
            set_prc_svol(value);
        }
        void set(const prc_topx & value) {
            set_prc_topx(value);
        }
        void set(const prc_yopx & value) {
            set_prc_yopx(value);
        }
        void set(const prc_uprc & value) {
            set_prc_uprc(value);
        }
        void set(const prc_years & value) {
            set_prc_years(value);
        }
        void set(const prc_rate & value) {
            set_prc_rate(value);
        }
        void set(const prc_sdiv & value) {
            set_prc_sdiv(value);
        }
        void set(const prc_ddiv & value) {
            set_prc_ddiv(value);
        }
        void set(const u_prc_ratio & value) {
            set_u_prc_ratio(value);
        }
        void set(const u_prc_move & value) {
            set_u_prc_move(value);
        }
        void set(const i_vol_move & value) {
            set_i_vol_move(value);
        }
        void set(const ex_div_amt & value) {
            set_ex_div_amt(value);
        }
        void set(const borrow_rate & value) {
            set_borrow_rate(value);
        }
        void set(const model_type & value) {
            set_model_type(value);
        }
        void set(const underliers_per_cn & value) {
            set_underliers_per_cn(value);
        }
        void set(const underlier_type & value) {
            set_underlier_type(value);
        }
        void set(const point_value & value) {
            set_point_value(value);
        }
        void set(const point_currency & value) {
            set_point_currency(value);
        }
        void set(const tick_value & value) {
            set_tick_value(value);
        }
        void set(const multihedge & value) {
            set_multihedge(value);
        }
        void set(const multihedge_source & value) {
            set_multihedge_source(value);
        }
        void set(const multihedge_pvratio & value) {
            set_multihedge_pvratio(value);
        }
        void set(const span_prc_inc_up & value) {
            set_span_prc_inc_up(value);
        }
        void set(const span_prc_inc_dn & value) {
            set_span_prc_inc_dn(value);
        }
        void set(const span_vol_inc & value) {
            set_span_vol_inc(value);
        }
        void set(const prc_span_type & value) {
            set_prc_span_type(value);
        }
        void set(const vol_span_type & value) {
            set_vol_span_type(value);
        }
        void set(const span_pricing_model & value) {
            set_span_pricing_model(value);
        }
        void set(const margin_type & value) {
            set_margin_type(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const RiskCubeDetailV5 & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_version);
            set(value.m_clearing_firm);
            set(value.m_clearing_accnt);
            set(value.m_risk_server_code);
            set(value.m_view_group1);
            set(value.m_view_group2);
            set(value.m_view_group3);
            set(value.m_ticker);
            set(value.m_risk_class);
            set(value.m_symbol_type);
            set(value.m_beta);
            set(value.m_beta_source);
            set(value.m_sector);
            set(value.m_ind_num);
            set(value.m_sub_num);
            set(value.m_grp_num);
            set(value.m_nbr_num);
            set(value.m_e_days);
            set(value.m_d_days);
            set(value.m_x_delta);
            set(value.m_exp_code);
            set(value.m_skew_code);
            set(value.m_e_days_code);
            set(value.m_i_vol_range);
            set(value.m_skew_dd);
            set(value.m_skew_dn);
            set(value.m_skew_at);
            set(value.m_skew_up);
            set(value.m_skew_du);
            set(value.m_sh_opn_pos);
            set(value.m_fc_opn_pos);
            set(value.m_cn_opn_pos);
            set(value.m_cn_atm_equiv);
            set(value.m_sh_bot);
            set(value.m_sh_sld);
            set(value.m_sh_sld_shrt);
            set(value.m_fc_bot);
            set(value.m_fc_sld);
            set(value.m_cn_bot);
            set(value.m_cn_sld);
            set(value.m_cn_opened);
            set(value.m_cn_closed);
            set(value.m_opn_dir);
            set(value.m_pos_dir);
            set(value.m_unit_opn_pos);
            set(value.m_unit_cur_pos);
            set(value.m_unit_qty_bot);
            set(value.m_unit_qty_sld);
            set(value.m_day_pnl);
            set(value.m_day_dn_pnl);
            set(value.m_day_trd_delta);
            set(value.m_day_trd_ddelta);
            set(value.m_day_trd_gamma);
            set(value.m_day_trd_dgamma);
            set(value.m_day_trd_vega);
            set(value.m_day_trd_wvega);
            set(value.m_day_trd_tvega);
            set(value.m_day_trd_wt_vega);
            set(value.m_day_trd_theta);
            set(value.m_day_edge_opened);
            set(value.m_day_edge_closed);
            set(value.m_day_mny_bot);
            set(value.m_day_mny_sld);
            set(value.m_opn_pnl_vol_mark);
            set(value.m_opn_pnl_mid_mark);
            set(value.m_opn_pnl_clr_mark);
            set(value.m_opn_mark_brk_mny);
            set(value.m_opn_theo_edge);
            set(value.m_pos_theo_edge);
            set(value.m_t_vol_move);
            set(value.m_t_edge_move);
            set(value.m_t_edge);
            set(value.m_opn_pnl_de);
            set(value.m_opn_pnl_ga);
            set(value.m_opn_pnl_th);
            set(value.m_opn_pnl_ve);
            set(value.m_opn_pnl_vo);
            set(value.m_opn_pnl_va);
            set(value.m_opn_pnl_sl);
            set(value.m_opn_pnl_rate);
            set(value.m_opn_pnl_sdiv);
            set(value.m_opn_pnl_ddiv);
            set(value.m_opn_pnl_err);
            set(value.m_opn_edge_change);
            set(value.m_pos_delta);
            set(value.m_pos_ddelta);
            set(value.m_pos_dbeta);
            set(value.m_pos_gamma);
            set(value.m_pos_dgamma);
            set(value.m_pos_vega);
            set(value.m_pos_wvega);
            set(value.m_pos_tvega);
            set(value.m_pos_wt_vega);
            set(value.m_pos_volga);
            set(value.m_pos_vanna);
            set(value.m_pos_theta);
            set(value.m_pos_rho);
            set(value.m_pos_phi);
            set(value.m_pos_notional);
            set(value.m_pos_mkt_value);
            set(value.m_pos_prem_opar);
            set(value.m_atm_vol);
            set(value.m_sym_vol);
            set(value.m_sr_slope);
            set(value.m_prc_svol);
            set(value.m_prc_topx);
            set(value.m_prc_yopx);
            set(value.m_prc_uprc);
            set(value.m_prc_years);
            set(value.m_prc_rate);
            set(value.m_prc_sdiv);
            set(value.m_prc_ddiv);
            set(value.m_u_prc_ratio);
            set(value.m_u_prc_move);
            set(value.m_i_vol_move);
            set(value.m_ex_div_amt);
            set(value.m_borrow_rate);
            set(value.m_model_type);
            set(value.m_underliers_per_cn);
            set(value.m_underlier_type);
            set(value.m_point_value);
            set(value.m_point_currency);
            set(value.m_tick_value);
            set(value.m_multihedge);
            set(value.m_multihedge_source);
            set(value.m_multihedge_pvratio);
            set(value.m_span_prc_inc_up);
            set(value.m_span_prc_inc_dn);
            set(value.m_span_vol_inc);
            set(value.m_prc_span_type);
            set(value.m_vol_span_type);
            set(value.m_span_pricing_model);
            set(value.m_margin_type);
            set(value.m_timestamp);
        }

        RiskCubeDetailV5() {
            m__meta.set_message_type("RiskCubeDetailV5");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4825, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4825, length);
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
             *this = RiskCubeDetailV5{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeClearingFirm() const {
            return !(m_clearing_firm.empty());
        }
        bool IncludeClearingAccnt() const {
            return !(m_clearing_accnt.empty());
        }
        bool IncludeRiskServerCode() const {
            return !(m_risk_server_code.empty());
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
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeRiskClass() const {
            return !(m_risk_class.empty());
        }
        bool IncludeBeta() const {
            return !(m_beta == 0.0);
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
        bool IncludeEDays() const {
            return !(m_e_days == 0);
        }
        bool IncludeDDays() const {
            return !(m_d_days == 0);
        }
        bool IncludeXDelta() const {
            return !(m_x_delta == 0.0);
        }
        bool IncludeSkewDd() const {
            return !(m_skew_dd == 0.0);
        }
        bool IncludeSkewDn() const {
            return !(m_skew_dn == 0.0);
        }
        bool IncludeSkewAt() const {
            return !(m_skew_at == 0.0);
        }
        bool IncludeSkewUp() const {
            return !(m_skew_up == 0.0);
        }
        bool IncludeSkewDu() const {
            return !(m_skew_du == 0.0);
        }
        bool IncludeShOpnPos() const {
            return !(m_sh_opn_pos == 0);
        }
        bool IncludeFcOpnPos() const {
            return !(m_fc_opn_pos == 0);
        }
        bool IncludeCnOpnPos() const {
            return !(m_cn_opn_pos == 0);
        }
        bool IncludeCnAtmEquiv() const {
            return !(m_cn_atm_equiv == 0.0);
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
        bool IncludeFcBot() const {
            return !(m_fc_bot == 0);
        }
        bool IncludeFcSld() const {
            return !(m_fc_sld == 0);
        }
        bool IncludeCnBot() const {
            return !(m_cn_bot == 0);
        }
        bool IncludeCnSld() const {
            return !(m_cn_sld == 0);
        }
        bool IncludeCnOpened() const {
            return !(m_cn_opened == 0);
        }
        bool IncludeCnClosed() const {
            return !(m_cn_closed == 0);
        }
        bool IncludeOpnDir() const {
            return !(m_opn_dir.empty());
        }
        bool IncludePosDir() const {
            return !(m_pos_dir.empty());
        }
        bool IncludeUnitOpnPos() const {
            return !(m_unit_opn_pos == 0);
        }
        bool IncludeUnitCurPos() const {
            return !(m_unit_cur_pos == 0);
        }
        bool IncludeUnitQtyBot() const {
            return !(m_unit_qty_bot == 0);
        }
        bool IncludeUnitQtySld() const {
            return !(m_unit_qty_sld == 0);
        }
        bool IncludeDayPnl() const {
            return !(m_day_pnl == 0.0);
        }
        bool IncludeDayDnPnl() const {
            return !(m_day_dn_pnl == 0.0);
        }
        bool IncludeDayTrdDelta() const {
            return !(m_day_trd_delta == 0.0);
        }
        bool IncludeDayTrdDdelta() const {
            return !(m_day_trd_ddelta == 0.0);
        }
        bool IncludeDayTrdGamma() const {
            return !(m_day_trd_gamma == 0.0);
        }
        bool IncludeDayTrdDgamma() const {
            return !(m_day_trd_dgamma == 0.0);
        }
        bool IncludeDayTrdVega() const {
            return !(m_day_trd_vega == 0.0);
        }
        bool IncludeDayTrdWvega() const {
            return !(m_day_trd_wvega == 0.0);
        }
        bool IncludeDayTrdTvega() const {
            return !(m_day_trd_tvega == 0.0);
        }
        bool IncludeDayTrdWtVega() const {
            return !(m_day_trd_wt_vega == 0.0);
        }
        bool IncludeDayTrdTheta() const {
            return !(m_day_trd_theta == 0.0);
        }
        bool IncludeDayEdgeOpened() const {
            return !(m_day_edge_opened == 0.0);
        }
        bool IncludeDayEdgeClosed() const {
            return !(m_day_edge_closed == 0.0);
        }
        bool IncludeDayMnyBot() const {
            return !(m_day_mny_bot == 0.0);
        }
        bool IncludeDayMnySld() const {
            return !(m_day_mny_sld == 0.0);
        }
        bool IncludeOpnPnlVolMark() const {
            return !(m_opn_pnl_vol_mark == 0.0);
        }
        bool IncludeOpnPnlMidMark() const {
            return !(m_opn_pnl_mid_mark == 0.0);
        }
        bool IncludeOpnPnlClrMark() const {
            return !(m_opn_pnl_clr_mark == 0.0);
        }
        bool IncludeOpnMarkBrkMny() const {
            return !(m_opn_mark_brk_mny == 0.0);
        }
        bool IncludeOpnTheoEdge() const {
            return !(m_opn_theo_edge == 0.0);
        }
        bool IncludePosTheoEdge() const {
            return !(m_pos_theo_edge == 0.0);
        }
        bool IncludeTVolMove() const {
            return !(m_t_vol_move == 0.0);
        }
        bool IncludeTEdgeMove() const {
            return !(m_t_edge_move == 0.0);
        }
        bool IncludeTEdge() const {
            return !(m_t_edge == 0.0);
        }
        bool IncludeOpnPnlDe() const {
            return !(m_opn_pnl_de == 0.0);
        }
        bool IncludeOpnPnlGa() const {
            return !(m_opn_pnl_ga == 0.0);
        }
        bool IncludeOpnPnlTh() const {
            return !(m_opn_pnl_th == 0.0);
        }
        bool IncludeOpnPnlVe() const {
            return !(m_opn_pnl_ve == 0.0);
        }
        bool IncludeOpnPnlVo() const {
            return !(m_opn_pnl_vo == 0.0);
        }
        bool IncludeOpnPnlVa() const {
            return !(m_opn_pnl_va == 0.0);
        }
        bool IncludeOpnPnlSl() const {
            return !(m_opn_pnl_sl == 0.0);
        }
        bool IncludeOpnPnlRate() const {
            return !(m_opn_pnl_rate == 0.0);
        }
        bool IncludeOpnPnlSdiv() const {
            return !(m_opn_pnl_sdiv == 0.0);
        }
        bool IncludeOpnPnlDdiv() const {
            return !(m_opn_pnl_ddiv == 0.0);
        }
        bool IncludeOpnPnlErr() const {
            return !(m_opn_pnl_err == 0.0);
        }
        bool IncludeOpnEdgeChange() const {
            return !(m_opn_edge_change == 0.0);
        }
        bool IncludePosDelta() const {
            return !(m_pos_delta == 0.0);
        }
        bool IncludePosDdelta() const {
            return !(m_pos_ddelta == 0.0);
        }
        bool IncludePosDbeta() const {
            return !(m_pos_dbeta == 0.0);
        }
        bool IncludePosGamma() const {
            return !(m_pos_gamma == 0.0);
        }
        bool IncludePosDgamma() const {
            return !(m_pos_dgamma == 0.0);
        }
        bool IncludePosVega() const {
            return !(m_pos_vega == 0.0);
        }
        bool IncludePosWvega() const {
            return !(m_pos_wvega == 0.0);
        }
        bool IncludePosTvega() const {
            return !(m_pos_tvega == 0.0);
        }
        bool IncludePosWtVega() const {
            return !(m_pos_wt_vega == 0.0);
        }
        bool IncludePosVolga() const {
            return !(m_pos_volga == 0.0);
        }
        bool IncludePosVanna() const {
            return !(m_pos_vanna == 0.0);
        }
        bool IncludePosTheta() const {
            return !(m_pos_theta == 0.0);
        }
        bool IncludePosRho() const {
            return !(m_pos_rho == 0.0);
        }
        bool IncludePosPhi() const {
            return !(m_pos_phi == 0.0);
        }
        bool IncludePosNotional() const {
            return !(m_pos_notional == 0.0);
        }
        bool IncludePosMktValue() const {
            return !(m_pos_mkt_value == 0.0);
        }
        bool IncludePosPremOpar() const {
            return !(m_pos_prem_opar == 0.0);
        }
        bool IncludeAtmVol() const {
            return !(m_atm_vol == 0.0);
        }
        bool IncludeSymVol() const {
            return !(m_sym_vol == 0.0);
        }
        bool IncludeSrSlope() const {
            return !(m_sr_slope == 0.0);
        }
        bool IncludePrcSvol() const {
            return !(m_prc_svol == 0.0);
        }
        bool IncludePrcTopx() const {
            return !(m_prc_topx == 0.0);
        }
        bool IncludePrcYopx() const {
            return !(m_prc_yopx == 0.0);
        }
        bool IncludePrcUprc() const {
            return !(m_prc_uprc == 0.0);
        }
        bool IncludePrcYears() const {
            return !(m_prc_years == 0.0);
        }
        bool IncludePrcRate() const {
            return !(m_prc_rate == 0.0);
        }
        bool IncludePrcSdiv() const {
            return !(m_prc_sdiv == 0.0);
        }
        bool IncludePrcDdiv() const {
            return !(m_prc_ddiv == 0.0);
        }
        bool IncludeUPrcRatio() const {
            return !(m_u_prc_ratio == 0.0);
        }
        bool IncludeUPrcMove() const {
            return !(m_u_prc_move == 0.0);
        }
        bool IncludeIVolMove() const {
            return !(m_i_vol_move == 0.0);
        }
        bool IncludeExDivAmt() const {
            return !(m_ex_div_amt == 0.0);
        }
        bool IncludeBorrowRate() const {
            return !(m_borrow_rate == 0.0);
        }
        bool IncludeModelType() const {
            return !(m_model_type == 0);
        }
        bool IncludeUnderliersPerCn() const {
            return !(m_underliers_per_cn == 0);
        }
        bool IncludePointValue() const {
            return !(m_point_value == 0.0);
        }
        bool IncludeTickValue() const {
            return !(m_tick_value == 0.0);
        }
        bool IncludeMultihedgeSource() const {
            return (m_multihedge_source.ByteSizeLong() > 0);
        }
        bool IncludeMultihedgePvratio() const {
            return !(m_multihedge_pvratio == 0.0);
        }
        bool IncludeSpanPrcIncUp() const {
            return !(m_span_prc_inc_up == 0.0);
        }
        bool IncludeSpanPrcIncDn() const {
            return !(m_span_prc_inc_dn == 0.0);
        }
        bool IncludeSpanVolInc() const {
            return !(m_span_vol_inc == 0.0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskCubeVersion>(m_version)));
            if ( IncludeClearingFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_clearing_firm);
            }
            if ( IncludeClearingAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(109,m_clearing_accnt);
            }
            if ( IncludeRiskServerCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(112,m_risk_server_code);
            }
            if ( IncludeViewGroup1()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(115,m_view_group1);
            }
            if ( IncludeViewGroup2()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(118,m_view_group2);
            }
            if ( IncludeViewGroup3()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(121,m_view_group3);
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(124, tickerKeyLayout_ticker);
            }
            if ( IncludeRiskClass()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(127,m_risk_class);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>(m_symbol_type)));
            if ( IncludeBeta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_beta);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BetaSource>(m_beta_source)));
            if ( IncludeSector()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(139,m_sector);
            }
            if ( IncludeIndNum()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(142,m_ind_num);
            }
            if ( IncludeSubNum()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(145,m_sub_num);
            }
            if ( IncludeGrpNum()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(148,m_grp_num);
            }
            if ( IncludeNbrNum()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(151,m_nbr_num);
            }
            if ( IncludeEDays()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(154,m_e_days);
            }
            if ( IncludeDDays()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(157,m_d_days);
            }
            if ( IncludeXDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(160,m_x_delta);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(163,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExpCode>(m_exp_code)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(166,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SkewCode>(m_skew_code)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(169,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::EDaysCode>(m_e_days_code)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(172,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::iVolRange>(m_i_vol_range)));
            if ( IncludeSkewDd()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(175,m_skew_dd);
            }
            if ( IncludeSkewDn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_skew_dn);
            }
            if ( IncludeSkewAt()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(181,m_skew_at);
            }
            if ( IncludeSkewUp()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(184,m_skew_up);
            }
            if ( IncludeSkewDu()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(187,m_skew_du);
            }
            if ( IncludeShOpnPos()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(190,m_sh_opn_pos);
            }
            if ( IncludeFcOpnPos()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(193,m_fc_opn_pos);
            }
            if ( IncludeCnOpnPos()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(196,m_cn_opn_pos);
            }
            if ( IncludeCnAtmEquiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(199,m_cn_atm_equiv);
            }
            if ( IncludeShBot()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(202,m_sh_bot);
            }
            if ( IncludeShSld()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(205,m_sh_sld);
            }
            if ( IncludeShSldShrt()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(208,m_sh_sld_shrt);
            }
            if ( IncludeFcBot()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(211,m_fc_bot);
            }
            if ( IncludeFcSld()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(214,m_fc_sld);
            }
            if ( IncludeCnBot()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(217,m_cn_bot);
            }
            if ( IncludeCnSld()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(220,m_cn_sld);
            }
            if ( IncludeCnOpened()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(223,m_cn_opened);
            }
            if ( IncludeCnClosed()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(226,m_cn_closed);
            }
            if ( IncludeOpnDir()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(229,m_opn_dir);
            }
            if ( IncludePosDir()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(232,m_pos_dir);
            }
            if ( IncludeUnitOpnPos()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(235,m_unit_opn_pos);
            }
            if ( IncludeUnitCurPos()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(238,m_unit_cur_pos);
            }
            if ( IncludeUnitQtyBot()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(241,m_unit_qty_bot);
            }
            if ( IncludeUnitQtySld()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(244,m_unit_qty_sld);
            }
            if ( IncludeDayPnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(247,m_day_pnl);
            }
            if ( IncludeDayDnPnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(250,m_day_dn_pnl);
            }
            if ( IncludeDayTrdDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(253,m_day_trd_delta);
            }
            if ( IncludeDayTrdDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(256,m_day_trd_ddelta);
            }
            if ( IncludeDayTrdGamma()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(259,m_day_trd_gamma);
            }
            if ( IncludeDayTrdDgamma()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(262,m_day_trd_dgamma);
            }
            if ( IncludeDayTrdVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(265,m_day_trd_vega);
            }
            if ( IncludeDayTrdWvega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(268,m_day_trd_wvega);
            }
            if ( IncludeDayTrdTvega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(271,m_day_trd_tvega);
            }
            if ( IncludeDayTrdWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(274,m_day_trd_wt_vega);
            }
            if ( IncludeDayTrdTheta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(277,m_day_trd_theta);
            }
            if ( IncludeDayEdgeOpened()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(280,m_day_edge_opened);
            }
            if ( IncludeDayEdgeClosed()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(283,m_day_edge_closed);
            }
            if ( IncludeDayMnyBot()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(286,m_day_mny_bot);
            }
            if ( IncludeDayMnySld()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(289,m_day_mny_sld);
            }
            if ( IncludeOpnPnlVolMark()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(292,m_opn_pnl_vol_mark);
            }
            if ( IncludeOpnPnlMidMark()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(295,m_opn_pnl_mid_mark);
            }
            if ( IncludeOpnPnlClrMark()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(298,m_opn_pnl_clr_mark);
            }
            if ( IncludeOpnMarkBrkMny()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(301,m_opn_mark_brk_mny);
            }
            if ( IncludeOpnTheoEdge()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(304,m_opn_theo_edge);
            }
            if ( IncludePosTheoEdge()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(307,m_pos_theo_edge);
            }
            if ( IncludeTVolMove()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(310,m_t_vol_move);
            }
            if ( IncludeTEdgeMove()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(313,m_t_edge_move);
            }
            if ( IncludeTEdge()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(316,m_t_edge);
            }
            if ( IncludeOpnPnlDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(319,m_opn_pnl_de);
            }
            if ( IncludeOpnPnlGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(322,m_opn_pnl_ga);
            }
            if ( IncludeOpnPnlTh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(325,m_opn_pnl_th);
            }
            if ( IncludeOpnPnlVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(328,m_opn_pnl_ve);
            }
            if ( IncludeOpnPnlVo()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(331,m_opn_pnl_vo);
            }
            if ( IncludeOpnPnlVa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(334,m_opn_pnl_va);
            }
            if ( IncludeOpnPnlSl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(337,m_opn_pnl_sl);
            }
            if ( IncludeOpnPnlRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(340,m_opn_pnl_rate);
            }
            if ( IncludeOpnPnlSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(343,m_opn_pnl_sdiv);
            }
            if ( IncludeOpnPnlDdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(346,m_opn_pnl_ddiv);
            }
            if ( IncludeOpnPnlErr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(349,m_opn_pnl_err);
            }
            if ( IncludeOpnEdgeChange()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(352,m_opn_edge_change);
            }
            if ( IncludePosDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(355,m_pos_delta);
            }
            if ( IncludePosDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(358,m_pos_ddelta);
            }
            if ( IncludePosDbeta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(361,m_pos_dbeta);
            }
            if ( IncludePosGamma()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(364,m_pos_gamma);
            }
            if ( IncludePosDgamma()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(367,m_pos_dgamma);
            }
            if ( IncludePosVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(370,m_pos_vega);
            }
            if ( IncludePosWvega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(373,m_pos_wvega);
            }
            if ( IncludePosTvega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(376,m_pos_tvega);
            }
            if ( IncludePosWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(379,m_pos_wt_vega);
            }
            if ( IncludePosVolga()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(382,m_pos_volga);
            }
            if ( IncludePosVanna()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(385,m_pos_vanna);
            }
            if ( IncludePosTheta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(388,m_pos_theta);
            }
            if ( IncludePosRho()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(391,m_pos_rho);
            }
            if ( IncludePosPhi()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(394,m_pos_phi);
            }
            if ( IncludePosNotional()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(397,m_pos_notional);
            }
            if ( IncludePosMktValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(400,m_pos_mkt_value);
            }
            if ( IncludePosPremOpar()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(403,m_pos_prem_opar);
            }
            if ( IncludeAtmVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(406,m_atm_vol);
            }
            if ( IncludeSymVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(409,m_sym_vol);
            }
            if ( IncludeSrSlope()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(412,m_sr_slope);
            }
            if ( IncludePrcSvol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(415,m_prc_svol);
            }
            if ( IncludePrcTopx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(418,m_prc_topx);
            }
            if ( IncludePrcYopx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(421,m_prc_yopx);
            }
            if ( IncludePrcUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(424,m_prc_uprc);
            }
            if ( IncludePrcYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(427,m_prc_years);
            }
            if ( IncludePrcRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(430,m_prc_rate);
            }
            if ( IncludePrcSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(433,m_prc_sdiv);
            }
            if ( IncludePrcDdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(436,m_prc_ddiv);
            }
            if ( IncludeUPrcRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(439,m_u_prc_ratio);
            }
            if ( IncludeUPrcMove()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(442,m_u_prc_move);
            }
            if ( IncludeIVolMove()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(445,m_i_vol_move);
            }
            if ( IncludeExDivAmt()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(448,m_ex_div_amt);
            }
            if ( IncludeBorrowRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(451,m_borrow_rate);
            }
            if ( IncludeModelType()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(454,m_model_type);
            }
            if ( IncludeUnderliersPerCn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(457,m_underliers_per_cn);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(460,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>(m_underlier_type)));
            if ( IncludePointValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(463,m_point_value);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(466,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            if ( IncludeTickValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(469,m_tick_value);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(472,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Multihedge>(m_multihedge)));
            if ( IncludeMultihedgeSource()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_multihedge_source{};
                m_multihedge_source.setCodecTickerKey(tickerKeyLayout_multihedge_source);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(475, tickerKeyLayout_multihedge_source);
            }
            if ( IncludeMultihedgePvratio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(478,m_multihedge_pvratio);
            }
            if ( IncludeSpanPrcIncUp()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(481,m_span_prc_inc_up);
            }
            if ( IncludeSpanPrcIncDn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(484,m_span_prc_inc_dn);
            }
            if ( IncludeSpanVolInc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(487,m_span_vol_inc);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(490,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpanType>(m_prc_span_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(493,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpanType>(m_vol_span_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(496,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpanPricingModel>(m_span_pricing_model)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(499,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarginType>(m_margin_type)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(502, m_timestamp);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskCubeVersion>(m_version)));
            if ( IncludeClearingFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_clearing_firm));
            }
            if ( IncludeClearingAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,109,static_cast<string>(m_clearing_accnt));
            }
            if ( IncludeRiskServerCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,112,static_cast<string>(m_risk_server_code));
            }
            if ( IncludeViewGroup1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,115,static_cast<string>(m_view_group1));
            }
            if ( IncludeViewGroup2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,118,static_cast<string>(m_view_group2));
            }
            if ( IncludeViewGroup3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,121,static_cast<string>(m_view_group3));
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 124, tickerKeyLayout_ticker);
            }
            if ( IncludeRiskClass()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,127,static_cast<string>(m_risk_class));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>(m_symbol_type)));
            if ( IncludeBeta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_beta);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BetaSource>(m_beta_source)));
            if ( IncludeSector()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,139,static_cast<string>(m_sector));
            }
            if ( IncludeIndNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,142,m_ind_num);
            }
            if ( IncludeSubNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,145,m_sub_num);
            }
            if ( IncludeGrpNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,148,m_grp_num);
            }
            if ( IncludeNbrNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,151,m_nbr_num);
            }
            if ( IncludeEDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,154,m_e_days);
            }
            if ( IncludeDDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,157,m_d_days);
            }
            if ( IncludeXDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,160,m_x_delta);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,163,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExpCode>(m_exp_code)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,166,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SkewCode>(m_skew_code)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,169,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::EDaysCode>(m_e_days_code)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,172,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::iVolRange>(m_i_vol_range)));
            if ( IncludeSkewDd()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,175,m_skew_dd);
            }
            if ( IncludeSkewDn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_skew_dn);
            }
            if ( IncludeSkewAt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,181,m_skew_at);
            }
            if ( IncludeSkewUp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,184,m_skew_up);
            }
            if ( IncludeSkewDu()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,187,m_skew_du);
            }
            if ( IncludeShOpnPos()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,190,m_sh_opn_pos);
            }
            if ( IncludeFcOpnPos()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,193,m_fc_opn_pos);
            }
            if ( IncludeCnOpnPos()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,196,m_cn_opn_pos);
            }
            if ( IncludeCnAtmEquiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,199,m_cn_atm_equiv);
            }
            if ( IncludeShBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,202,m_sh_bot);
            }
            if ( IncludeShSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,205,m_sh_sld);
            }
            if ( IncludeShSldShrt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,208,m_sh_sld_shrt);
            }
            if ( IncludeFcBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,211,m_fc_bot);
            }
            if ( IncludeFcSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,214,m_fc_sld);
            }
            if ( IncludeCnBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,217,m_cn_bot);
            }
            if ( IncludeCnSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,220,m_cn_sld);
            }
            if ( IncludeCnOpened()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,223,m_cn_opened);
            }
            if ( IncludeCnClosed()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,226,m_cn_closed);
            }
            if ( IncludeOpnDir()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,229,static_cast<string>(m_opn_dir));
            }
            if ( IncludePosDir()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,232,static_cast<string>(m_pos_dir));
            }
            if ( IncludeUnitOpnPos()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,235,m_unit_opn_pos);
            }
            if ( IncludeUnitCurPos()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,238,m_unit_cur_pos);
            }
            if ( IncludeUnitQtyBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,241,m_unit_qty_bot);
            }
            if ( IncludeUnitQtySld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,244,m_unit_qty_sld);
            }
            if ( IncludeDayPnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,247,m_day_pnl);
            }
            if ( IncludeDayDnPnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,250,m_day_dn_pnl);
            }
            if ( IncludeDayTrdDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,253,m_day_trd_delta);
            }
            if ( IncludeDayTrdDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,256,m_day_trd_ddelta);
            }
            if ( IncludeDayTrdGamma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,259,m_day_trd_gamma);
            }
            if ( IncludeDayTrdDgamma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,262,m_day_trd_dgamma);
            }
            if ( IncludeDayTrdVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,265,m_day_trd_vega);
            }
            if ( IncludeDayTrdWvega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,268,m_day_trd_wvega);
            }
            if ( IncludeDayTrdTvega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,271,m_day_trd_tvega);
            }
            if ( IncludeDayTrdWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,274,m_day_trd_wt_vega);
            }
            if ( IncludeDayTrdTheta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,277,m_day_trd_theta);
            }
            if ( IncludeDayEdgeOpened()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,280,m_day_edge_opened);
            }
            if ( IncludeDayEdgeClosed()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,283,m_day_edge_closed);
            }
            if ( IncludeDayMnyBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,286,m_day_mny_bot);
            }
            if ( IncludeDayMnySld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,289,m_day_mny_sld);
            }
            if ( IncludeOpnPnlVolMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,292,m_opn_pnl_vol_mark);
            }
            if ( IncludeOpnPnlMidMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,295,m_opn_pnl_mid_mark);
            }
            if ( IncludeOpnPnlClrMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,298,m_opn_pnl_clr_mark);
            }
            if ( IncludeOpnMarkBrkMny()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,301,m_opn_mark_brk_mny);
            }
            if ( IncludeOpnTheoEdge()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,304,m_opn_theo_edge);
            }
            if ( IncludePosTheoEdge()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,307,m_pos_theo_edge);
            }
            if ( IncludeTVolMove()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,310,m_t_vol_move);
            }
            if ( IncludeTEdgeMove()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,313,m_t_edge_move);
            }
            if ( IncludeTEdge()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,316,m_t_edge);
            }
            if ( IncludeOpnPnlDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,319,m_opn_pnl_de);
            }
            if ( IncludeOpnPnlGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,322,m_opn_pnl_ga);
            }
            if ( IncludeOpnPnlTh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,325,m_opn_pnl_th);
            }
            if ( IncludeOpnPnlVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,328,m_opn_pnl_ve);
            }
            if ( IncludeOpnPnlVo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,331,m_opn_pnl_vo);
            }
            if ( IncludeOpnPnlVa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,334,m_opn_pnl_va);
            }
            if ( IncludeOpnPnlSl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,337,m_opn_pnl_sl);
            }
            if ( IncludeOpnPnlRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,340,m_opn_pnl_rate);
            }
            if ( IncludeOpnPnlSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,343,m_opn_pnl_sdiv);
            }
            if ( IncludeOpnPnlDdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,346,m_opn_pnl_ddiv);
            }
            if ( IncludeOpnPnlErr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,349,m_opn_pnl_err);
            }
            if ( IncludeOpnEdgeChange()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,352,m_opn_edge_change);
            }
            if ( IncludePosDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,355,m_pos_delta);
            }
            if ( IncludePosDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,358,m_pos_ddelta);
            }
            if ( IncludePosDbeta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,361,m_pos_dbeta);
            }
            if ( IncludePosGamma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,364,m_pos_gamma);
            }
            if ( IncludePosDgamma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,367,m_pos_dgamma);
            }
            if ( IncludePosVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,370,m_pos_vega);
            }
            if ( IncludePosWvega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,373,m_pos_wvega);
            }
            if ( IncludePosTvega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,376,m_pos_tvega);
            }
            if ( IncludePosWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,379,m_pos_wt_vega);
            }
            if ( IncludePosVolga()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,382,m_pos_volga);
            }
            if ( IncludePosVanna()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,385,m_pos_vanna);
            }
            if ( IncludePosTheta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,388,m_pos_theta);
            }
            if ( IncludePosRho()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,391,m_pos_rho);
            }
            if ( IncludePosPhi()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,394,m_pos_phi);
            }
            if ( IncludePosNotional()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,397,m_pos_notional);
            }
            if ( IncludePosMktValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,400,m_pos_mkt_value);
            }
            if ( IncludePosPremOpar()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,403,m_pos_prem_opar);
            }
            if ( IncludeAtmVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,406,m_atm_vol);
            }
            if ( IncludeSymVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,409,m_sym_vol);
            }
            if ( IncludeSrSlope()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,412,m_sr_slope);
            }
            if ( IncludePrcSvol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,415,m_prc_svol);
            }
            if ( IncludePrcTopx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,418,m_prc_topx);
            }
            if ( IncludePrcYopx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,421,m_prc_yopx);
            }
            if ( IncludePrcUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,424,m_prc_uprc);
            }
            if ( IncludePrcYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,427,m_prc_years);
            }
            if ( IncludePrcRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,430,m_prc_rate);
            }
            if ( IncludePrcSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,433,m_prc_sdiv);
            }
            if ( IncludePrcDdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,436,m_prc_ddiv);
            }
            if ( IncludeUPrcRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,439,m_u_prc_ratio);
            }
            if ( IncludeUPrcMove()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,442,m_u_prc_move);
            }
            if ( IncludeIVolMove()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,445,m_i_vol_move);
            }
            if ( IncludeExDivAmt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,448,m_ex_div_amt);
            }
            if ( IncludeBorrowRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,451,m_borrow_rate);
            }
            if ( IncludeModelType()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,454,m_model_type);
            }
            if ( IncludeUnderliersPerCn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,457,m_underliers_per_cn);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,460,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>(m_underlier_type)));
            if ( IncludePointValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,463,m_point_value);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,466,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            if ( IncludeTickValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,469,m_tick_value);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,472,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Multihedge>(m_multihedge)));
            if ( IncludeMultihedgeSource()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_multihedge_source{};
                m_multihedge_source.setCodecTickerKey(tickerKeyLayout_multihedge_source);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 475, tickerKeyLayout_multihedge_source);
            }
            if ( IncludeMultihedgePvratio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,478,m_multihedge_pvratio);
            }
            if ( IncludeSpanPrcIncUp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,481,m_span_prc_inc_up);
            }
            if ( IncludeSpanPrcIncDn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,484,m_span_prc_inc_dn);
            }
            if ( IncludeSpanVolInc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,487,m_span_vol_inc);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,490,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpanType>(m_prc_span_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,493,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpanType>(m_vol_span_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,496,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpanPricingModel>(m_span_pricing_model)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,499,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarginType>(m_margin_type)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 502, m_timestamp);
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
                            m_version = static_cast<spiderrock::protobuf::api::RiskCubeVersion>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_clearing_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_clearing_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_risk_server_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_view_group1 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_view_group2 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_view_group3 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_risk_class = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 130: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_symbol_type = static_cast<spiderrock::protobuf::api::SymbolType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_beta_source = static_cast<spiderrock::protobuf::api::BetaSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_sector = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ind_num = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sub_num = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_grp_num = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_nbr_num = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_e_days = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_d_days = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_x_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 163: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_exp_code = static_cast<spiderrock::protobuf::api::ExpCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 166: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_skew_code = static_cast<spiderrock::protobuf::api::SkewCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 169: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_e_days_code = static_cast<spiderrock::protobuf::api::EDaysCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 172: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_i_vol_range = static_cast<spiderrock::protobuf::api::iVolRange>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_dd = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_dn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_at = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_up = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_du = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_opn_pos = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fc_opn_pos = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cn_opn_pos = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cn_atm_equiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_bot = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_sld = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_sld_shrt = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fc_bot = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fc_sld = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cn_bot = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cn_sld = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cn_opened = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 226: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cn_closed = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 229: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_opn_dir = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 232: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_pos_dir = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_unit_opn_pos = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 238: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_unit_cur_pos = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 241: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_unit_qty_bot = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 244: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_unit_qty_sld = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 247: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 250: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_dn_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 253: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_trd_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 256: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_trd_ddelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 259: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_trd_gamma = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 262: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_trd_dgamma = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 265: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_trd_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 268: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_trd_wvega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 271: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_trd_tvega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 274: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_trd_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 277: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_trd_theta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 280: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_edge_opened = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 283: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_edge_closed = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 286: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_day_mny_bot = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 289: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_day_mny_sld = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 292: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_vol_mark = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 295: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_mid_mark = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 298: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_clr_mark = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 301: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_mark_brk_mny = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 304: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_theo_edge = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 307: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_theo_edge = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 310: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_vol_move = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 313: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_edge_move = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 316: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_edge = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 319: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 322: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 325: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_th = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 328: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 331: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_vo = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 334: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_va = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 337: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_sl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 340: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 343: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 346: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_ddiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 349: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_err = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 352: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_edge_change = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 355: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 358: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_ddelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 361: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_dbeta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 364: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_gamma = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 367: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_dgamma = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 370: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 373: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_wvega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 376: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_tvega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 379: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 382: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_volga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 385: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_vanna = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 388: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_theta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 391: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_rho = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 394: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_phi = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 397: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_notional = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 400: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_mkt_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 403: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_prem_opar = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 406: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 409: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sym_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 412: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sr_slope = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 415: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prc_svol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 418: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prc_topx = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 421: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prc_yopx = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 424: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prc_uprc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 427: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prc_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 430: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prc_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 433: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prc_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 436: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prc_ddiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 439: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_prc_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 442: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_prc_move = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 445: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_i_vol_move = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 448: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ex_div_amt = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 451: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_borrow_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 454: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_model_type = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 457: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_underliers_per_cn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 460: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_underlier_type = static_cast<spiderrock::protobuf::api::UnderlierType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 463: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_point_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 466: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_point_currency = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 469: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_tick_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 472: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_multihedge = static_cast<spiderrock::protobuf::api::Multihedge>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 475: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_multihedge_source.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 478: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_multihedge_pvratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 481: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span_prc_inc_up = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 484: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span_prc_inc_dn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 487: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span_vol_inc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 490: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_prc_span_type = static_cast<spiderrock::protobuf::api::SpanType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 493: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_vol_span_type = static_cast<spiderrock::protobuf::api::SpanType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 496: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_span_pricing_model = static_cast<spiderrock::protobuf::api::SpanPricingModel>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 499: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_margin_type = static_cast<spiderrock::protobuf::api::MarginType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 502: {
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

    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::_meta>() const { return RiskCubeDetailV5::_meta{ m__meta}; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::pkey>() const { return RiskCubeDetailV5::pkey{ m_pkey}; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::version>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskCubeVersion>( m_version)); }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::clearing_firm>() const { return m_clearing_firm; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::clearing_accnt>() const { return m_clearing_accnt; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::risk_server_code>() const { return m_risk_server_code; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::view_group1>() const { return m_view_group1; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::view_group2>() const { return m_view_group2; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::view_group3>() const { return m_view_group3; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::ticker>() const { return RiskCubeDetailV5::ticker{ m_ticker}; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::risk_class>() const { return m_risk_class; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::symbol_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>( m_symbol_type)); }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::beta>() const { return m_beta; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::beta_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BetaSource>( m_beta_source)); }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::sector>() const { return m_sector; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::ind_num>() const { return m_ind_num; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::sub_num>() const { return m_sub_num; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::grp_num>() const { return m_grp_num; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::nbr_num>() const { return m_nbr_num; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::e_days>() const { return m_e_days; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::d_days>() const { return m_d_days; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::x_delta>() const { return m_x_delta; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::exp_code>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExpCode>( m_exp_code)); }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::skew_code>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SkewCode>( m_skew_code)); }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::e_days_code>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::EDaysCode>( m_e_days_code)); }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::i_vol_range>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::iVolRange>( m_i_vol_range)); }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::skew_dd>() const { return m_skew_dd; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::skew_dn>() const { return m_skew_dn; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::skew_at>() const { return m_skew_at; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::skew_up>() const { return m_skew_up; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::skew_du>() const { return m_skew_du; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::sh_opn_pos>() const { return m_sh_opn_pos; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::fc_opn_pos>() const { return m_fc_opn_pos; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::cn_opn_pos>() const { return m_cn_opn_pos; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::cn_atm_equiv>() const { return m_cn_atm_equiv; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::sh_bot>() const { return m_sh_bot; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::sh_sld>() const { return m_sh_sld; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::sh_sld_shrt>() const { return m_sh_sld_shrt; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::fc_bot>() const { return m_fc_bot; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::fc_sld>() const { return m_fc_sld; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::cn_bot>() const { return m_cn_bot; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::cn_sld>() const { return m_cn_sld; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::cn_opened>() const { return m_cn_opened; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::cn_closed>() const { return m_cn_closed; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::opn_dir>() const { return m_opn_dir; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::pos_dir>() const { return m_pos_dir; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::unit_opn_pos>() const { return m_unit_opn_pos; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::unit_cur_pos>() const { return m_unit_cur_pos; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::unit_qty_bot>() const { return m_unit_qty_bot; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::unit_qty_sld>() const { return m_unit_qty_sld; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::day_pnl>() const { return m_day_pnl; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::day_dn_pnl>() const { return m_day_dn_pnl; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::day_trd_delta>() const { return m_day_trd_delta; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::day_trd_ddelta>() const { return m_day_trd_ddelta; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::day_trd_gamma>() const { return m_day_trd_gamma; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::day_trd_dgamma>() const { return m_day_trd_dgamma; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::day_trd_vega>() const { return m_day_trd_vega; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::day_trd_wvega>() const { return m_day_trd_wvega; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::day_trd_tvega>() const { return m_day_trd_tvega; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::day_trd_wt_vega>() const { return m_day_trd_wt_vega; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::day_trd_theta>() const { return m_day_trd_theta; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::day_edge_opened>() const { return m_day_edge_opened; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::day_edge_closed>() const { return m_day_edge_closed; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::day_mny_bot>() const { return m_day_mny_bot; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::day_mny_sld>() const { return m_day_mny_sld; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::opn_pnl_vol_mark>() const { return m_opn_pnl_vol_mark; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::opn_pnl_mid_mark>() const { return m_opn_pnl_mid_mark; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::opn_pnl_clr_mark>() const { return m_opn_pnl_clr_mark; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::opn_mark_brk_mny>() const { return m_opn_mark_brk_mny; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::opn_theo_edge>() const { return m_opn_theo_edge; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::pos_theo_edge>() const { return m_pos_theo_edge; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::t_vol_move>() const { return m_t_vol_move; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::t_edge_move>() const { return m_t_edge_move; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::t_edge>() const { return m_t_edge; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::opn_pnl_de>() const { return m_opn_pnl_de; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::opn_pnl_ga>() const { return m_opn_pnl_ga; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::opn_pnl_th>() const { return m_opn_pnl_th; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::opn_pnl_ve>() const { return m_opn_pnl_ve; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::opn_pnl_vo>() const { return m_opn_pnl_vo; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::opn_pnl_va>() const { return m_opn_pnl_va; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::opn_pnl_sl>() const { return m_opn_pnl_sl; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::opn_pnl_rate>() const { return m_opn_pnl_rate; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::opn_pnl_sdiv>() const { return m_opn_pnl_sdiv; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::opn_pnl_ddiv>() const { return m_opn_pnl_ddiv; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::opn_pnl_err>() const { return m_opn_pnl_err; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::opn_edge_change>() const { return m_opn_edge_change; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::pos_delta>() const { return m_pos_delta; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::pos_ddelta>() const { return m_pos_ddelta; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::pos_dbeta>() const { return m_pos_dbeta; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::pos_gamma>() const { return m_pos_gamma; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::pos_dgamma>() const { return m_pos_dgamma; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::pos_vega>() const { return m_pos_vega; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::pos_wvega>() const { return m_pos_wvega; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::pos_tvega>() const { return m_pos_tvega; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::pos_wt_vega>() const { return m_pos_wt_vega; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::pos_volga>() const { return m_pos_volga; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::pos_vanna>() const { return m_pos_vanna; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::pos_theta>() const { return m_pos_theta; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::pos_rho>() const { return m_pos_rho; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::pos_phi>() const { return m_pos_phi; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::pos_notional>() const { return m_pos_notional; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::pos_mkt_value>() const { return m_pos_mkt_value; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::pos_prem_opar>() const { return m_pos_prem_opar; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::atm_vol>() const { return m_atm_vol; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::sym_vol>() const { return m_sym_vol; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::sr_slope>() const { return m_sr_slope; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::prc_svol>() const { return m_prc_svol; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::prc_topx>() const { return m_prc_topx; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::prc_yopx>() const { return m_prc_yopx; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::prc_uprc>() const { return m_prc_uprc; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::prc_years>() const { return m_prc_years; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::prc_rate>() const { return m_prc_rate; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::prc_sdiv>() const { return m_prc_sdiv; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::prc_ddiv>() const { return m_prc_ddiv; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::u_prc_ratio>() const { return m_u_prc_ratio; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::u_prc_move>() const { return m_u_prc_move; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::i_vol_move>() const { return m_i_vol_move; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::ex_div_amt>() const { return m_ex_div_amt; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::borrow_rate>() const { return m_borrow_rate; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::model_type>() const { return m_model_type; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::underliers_per_cn>() const { return m_underliers_per_cn; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::underlier_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>( m_underlier_type)); }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::point_value>() const { return m_point_value; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::point_currency>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>( m_point_currency)); }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::tick_value>() const { return m_tick_value; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::multihedge>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Multihedge>( m_multihedge)); }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::multihedge_source>() const { return RiskCubeDetailV5::multihedge_source{ m_multihedge_source}; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::multihedge_pvratio>() const { return m_multihedge_pvratio; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::span_prc_inc_up>() const { return m_span_prc_inc_up; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::span_prc_inc_dn>() const { return m_span_prc_inc_dn; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::span_vol_inc>() const { return m_span_vol_inc; }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::prc_span_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpanType>( m_prc_span_type)); }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::vol_span_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpanType>( m_vol_span_type)); }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::span_pricing_model>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpanPricingModel>( m_span_pricing_model)); }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::margin_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarginType>( m_margin_type)); }
    template<> inline const auto RiskCubeDetailV5::get<RiskCubeDetailV5::timestamp>() const { return m_timestamp; }
    template<> inline const auto RiskCubeDetailV5_PKey::get<RiskCubeDetailV5_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto RiskCubeDetailV5_PKey::get<RiskCubeDetailV5_PKey::sec_key>() const { return RiskCubeDetailV5_PKey::sec_key{m_sec_key}; }
    template<> inline const auto RiskCubeDetailV5_PKey::get<RiskCubeDetailV5_PKey::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SecType>(m_sec_type));}
    template<> inline const auto RiskCubeDetailV5_PKey::get<RiskCubeDetailV5_PKey::trade_date>() const { return RiskCubeDetailV5_PKey::trade_date{m_trade_date}; }
    template<> inline const auto RiskCubeDetailV5_PKey::get<RiskCubeDetailV5_PKey::risk_session>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskSession>(m_risk_session));}
    template<> inline const auto RiskCubeDetailV5_PKey::get<RiskCubeDetailV5_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const RiskCubeDetailV5_PKey& m) {
        o << "\"accnt\":\"" << m.get<RiskCubeDetailV5_PKey::accnt>() << "\"";
        o << ",\"sec_key\":{" << m.get<RiskCubeDetailV5_PKey::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<RiskCubeDetailV5_PKey::sec_type>();
        o << ",\"trade_date\":{" << m.get<RiskCubeDetailV5_PKey::trade_date>() << "}";
        o << ",\"risk_session\":" << (int64_t)m.get<RiskCubeDetailV5_PKey::risk_session>();
        o << ",\"client_firm\":\"" << m.get<RiskCubeDetailV5_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const RiskCubeDetailV5& m) {
        o << "\"_meta\":{" << m.get<RiskCubeDetailV5::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<RiskCubeDetailV5::pkey>() << "}";
        o << ",\"version\":" << (int64_t)m.get<RiskCubeDetailV5::version>();
        o << ",\"clearing_firm\":\"" << m.get<RiskCubeDetailV5::clearing_firm>() << "\"";
        o << ",\"clearing_accnt\":\"" << m.get<RiskCubeDetailV5::clearing_accnt>() << "\"";
        o << ",\"risk_server_code\":\"" << m.get<RiskCubeDetailV5::risk_server_code>() << "\"";
        o << ",\"view_group1\":\"" << m.get<RiskCubeDetailV5::view_group1>() << "\"";
        o << ",\"view_group2\":\"" << m.get<RiskCubeDetailV5::view_group2>() << "\"";
        o << ",\"view_group3\":\"" << m.get<RiskCubeDetailV5::view_group3>() << "\"";
        o << ",\"ticker\":{" << m.get<RiskCubeDetailV5::ticker>() << "}";
        o << ",\"risk_class\":\"" << m.get<RiskCubeDetailV5::risk_class>() << "\"";
        o << ",\"symbol_type\":" << (int64_t)m.get<RiskCubeDetailV5::symbol_type>();
        o << ",\"beta\":" << m.get<RiskCubeDetailV5::beta>();
        o << ",\"beta_source\":" << (int64_t)m.get<RiskCubeDetailV5::beta_source>();
        o << ",\"sector\":\"" << m.get<RiskCubeDetailV5::sector>() << "\"";
        o << ",\"ind_num\":" << m.get<RiskCubeDetailV5::ind_num>();
        o << ",\"sub_num\":" << m.get<RiskCubeDetailV5::sub_num>();
        o << ",\"grp_num\":" << m.get<RiskCubeDetailV5::grp_num>();
        o << ",\"nbr_num\":" << m.get<RiskCubeDetailV5::nbr_num>();
        o << ",\"e_days\":" << m.get<RiskCubeDetailV5::e_days>();
        o << ",\"d_days\":" << m.get<RiskCubeDetailV5::d_days>();
        o << ",\"x_delta\":" << m.get<RiskCubeDetailV5::x_delta>();
        o << ",\"exp_code\":" << (int64_t)m.get<RiskCubeDetailV5::exp_code>();
        o << ",\"skew_code\":" << (int64_t)m.get<RiskCubeDetailV5::skew_code>();
        o << ",\"e_days_code\":" << (int64_t)m.get<RiskCubeDetailV5::e_days_code>();
        o << ",\"i_vol_range\":" << (int64_t)m.get<RiskCubeDetailV5::i_vol_range>();
        o << ",\"skew_dd\":" << m.get<RiskCubeDetailV5::skew_dd>();
        o << ",\"skew_dn\":" << m.get<RiskCubeDetailV5::skew_dn>();
        o << ",\"skew_at\":" << m.get<RiskCubeDetailV5::skew_at>();
        o << ",\"skew_up\":" << m.get<RiskCubeDetailV5::skew_up>();
        o << ",\"skew_du\":" << m.get<RiskCubeDetailV5::skew_du>();
        o << ",\"sh_opn_pos\":" << m.get<RiskCubeDetailV5::sh_opn_pos>();
        o << ",\"fc_opn_pos\":" << m.get<RiskCubeDetailV5::fc_opn_pos>();
        o << ",\"cn_opn_pos\":" << m.get<RiskCubeDetailV5::cn_opn_pos>();
        o << ",\"cn_atm_equiv\":" << m.get<RiskCubeDetailV5::cn_atm_equiv>();
        o << ",\"sh_bot\":" << m.get<RiskCubeDetailV5::sh_bot>();
        o << ",\"sh_sld\":" << m.get<RiskCubeDetailV5::sh_sld>();
        o << ",\"sh_sld_shrt\":" << m.get<RiskCubeDetailV5::sh_sld_shrt>();
        o << ",\"fc_bot\":" << m.get<RiskCubeDetailV5::fc_bot>();
        o << ",\"fc_sld\":" << m.get<RiskCubeDetailV5::fc_sld>();
        o << ",\"cn_bot\":" << m.get<RiskCubeDetailV5::cn_bot>();
        o << ",\"cn_sld\":" << m.get<RiskCubeDetailV5::cn_sld>();
        o << ",\"cn_opened\":" << m.get<RiskCubeDetailV5::cn_opened>();
        o << ",\"cn_closed\":" << m.get<RiskCubeDetailV5::cn_closed>();
        o << ",\"opn_dir\":\"" << m.get<RiskCubeDetailV5::opn_dir>() << "\"";
        o << ",\"pos_dir\":\"" << m.get<RiskCubeDetailV5::pos_dir>() << "\"";
        o << ",\"unit_opn_pos\":" << m.get<RiskCubeDetailV5::unit_opn_pos>();
        o << ",\"unit_cur_pos\":" << m.get<RiskCubeDetailV5::unit_cur_pos>();
        o << ",\"unit_qty_bot\":" << m.get<RiskCubeDetailV5::unit_qty_bot>();
        o << ",\"unit_qty_sld\":" << m.get<RiskCubeDetailV5::unit_qty_sld>();
        o << ",\"day_pnl\":" << m.get<RiskCubeDetailV5::day_pnl>();
        o << ",\"day_dn_pnl\":" << m.get<RiskCubeDetailV5::day_dn_pnl>();
        o << ",\"day_trd_delta\":" << m.get<RiskCubeDetailV5::day_trd_delta>();
        o << ",\"day_trd_ddelta\":" << m.get<RiskCubeDetailV5::day_trd_ddelta>();
        o << ",\"day_trd_gamma\":" << m.get<RiskCubeDetailV5::day_trd_gamma>();
        o << ",\"day_trd_dgamma\":" << m.get<RiskCubeDetailV5::day_trd_dgamma>();
        o << ",\"day_trd_vega\":" << m.get<RiskCubeDetailV5::day_trd_vega>();
        o << ",\"day_trd_wvega\":" << m.get<RiskCubeDetailV5::day_trd_wvega>();
        o << ",\"day_trd_tvega\":" << m.get<RiskCubeDetailV5::day_trd_tvega>();
        o << ",\"day_trd_wt_vega\":" << m.get<RiskCubeDetailV5::day_trd_wt_vega>();
        o << ",\"day_trd_theta\":" << m.get<RiskCubeDetailV5::day_trd_theta>();
        o << ",\"day_edge_opened\":" << m.get<RiskCubeDetailV5::day_edge_opened>();
        o << ",\"day_edge_closed\":" << m.get<RiskCubeDetailV5::day_edge_closed>();
        o << ",\"day_mny_bot\":" << m.get<RiskCubeDetailV5::day_mny_bot>();
        o << ",\"day_mny_sld\":" << m.get<RiskCubeDetailV5::day_mny_sld>();
        o << ",\"opn_pnl_vol_mark\":" << m.get<RiskCubeDetailV5::opn_pnl_vol_mark>();
        o << ",\"opn_pnl_mid_mark\":" << m.get<RiskCubeDetailV5::opn_pnl_mid_mark>();
        o << ",\"opn_pnl_clr_mark\":" << m.get<RiskCubeDetailV5::opn_pnl_clr_mark>();
        o << ",\"opn_mark_brk_mny\":" << m.get<RiskCubeDetailV5::opn_mark_brk_mny>();
        o << ",\"opn_theo_edge\":" << m.get<RiskCubeDetailV5::opn_theo_edge>();
        o << ",\"pos_theo_edge\":" << m.get<RiskCubeDetailV5::pos_theo_edge>();
        o << ",\"t_vol_move\":" << m.get<RiskCubeDetailV5::t_vol_move>();
        o << ",\"t_edge_move\":" << m.get<RiskCubeDetailV5::t_edge_move>();
        o << ",\"t_edge\":" << m.get<RiskCubeDetailV5::t_edge>();
        o << ",\"opn_pnl_de\":" << m.get<RiskCubeDetailV5::opn_pnl_de>();
        o << ",\"opn_pnl_ga\":" << m.get<RiskCubeDetailV5::opn_pnl_ga>();
        o << ",\"opn_pnl_th\":" << m.get<RiskCubeDetailV5::opn_pnl_th>();
        o << ",\"opn_pnl_ve\":" << m.get<RiskCubeDetailV5::opn_pnl_ve>();
        o << ",\"opn_pnl_vo\":" << m.get<RiskCubeDetailV5::opn_pnl_vo>();
        o << ",\"opn_pnl_va\":" << m.get<RiskCubeDetailV5::opn_pnl_va>();
        o << ",\"opn_pnl_sl\":" << m.get<RiskCubeDetailV5::opn_pnl_sl>();
        o << ",\"opn_pnl_rate\":" << m.get<RiskCubeDetailV5::opn_pnl_rate>();
        o << ",\"opn_pnl_sdiv\":" << m.get<RiskCubeDetailV5::opn_pnl_sdiv>();
        o << ",\"opn_pnl_ddiv\":" << m.get<RiskCubeDetailV5::opn_pnl_ddiv>();
        o << ",\"opn_pnl_err\":" << m.get<RiskCubeDetailV5::opn_pnl_err>();
        o << ",\"opn_edge_change\":" << m.get<RiskCubeDetailV5::opn_edge_change>();
        o << ",\"pos_delta\":" << m.get<RiskCubeDetailV5::pos_delta>();
        o << ",\"pos_ddelta\":" << m.get<RiskCubeDetailV5::pos_ddelta>();
        o << ",\"pos_dbeta\":" << m.get<RiskCubeDetailV5::pos_dbeta>();
        o << ",\"pos_gamma\":" << m.get<RiskCubeDetailV5::pos_gamma>();
        o << ",\"pos_dgamma\":" << m.get<RiskCubeDetailV5::pos_dgamma>();
        o << ",\"pos_vega\":" << m.get<RiskCubeDetailV5::pos_vega>();
        o << ",\"pos_wvega\":" << m.get<RiskCubeDetailV5::pos_wvega>();
        o << ",\"pos_tvega\":" << m.get<RiskCubeDetailV5::pos_tvega>();
        o << ",\"pos_wt_vega\":" << m.get<RiskCubeDetailV5::pos_wt_vega>();
        o << ",\"pos_volga\":" << m.get<RiskCubeDetailV5::pos_volga>();
        o << ",\"pos_vanna\":" << m.get<RiskCubeDetailV5::pos_vanna>();
        o << ",\"pos_theta\":" << m.get<RiskCubeDetailV5::pos_theta>();
        o << ",\"pos_rho\":" << m.get<RiskCubeDetailV5::pos_rho>();
        o << ",\"pos_phi\":" << m.get<RiskCubeDetailV5::pos_phi>();
        o << ",\"pos_notional\":" << m.get<RiskCubeDetailV5::pos_notional>();
        o << ",\"pos_mkt_value\":" << m.get<RiskCubeDetailV5::pos_mkt_value>();
        o << ",\"pos_prem_opar\":" << m.get<RiskCubeDetailV5::pos_prem_opar>();
        o << ",\"atm_vol\":" << m.get<RiskCubeDetailV5::atm_vol>();
        o << ",\"sym_vol\":" << m.get<RiskCubeDetailV5::sym_vol>();
        o << ",\"sr_slope\":" << m.get<RiskCubeDetailV5::sr_slope>();
        o << ",\"prc_svol\":" << m.get<RiskCubeDetailV5::prc_svol>();
        o << ",\"prc_topx\":" << m.get<RiskCubeDetailV5::prc_topx>();
        o << ",\"prc_yopx\":" << m.get<RiskCubeDetailV5::prc_yopx>();
        o << ",\"prc_uprc\":" << m.get<RiskCubeDetailV5::prc_uprc>();
        o << ",\"prc_years\":" << m.get<RiskCubeDetailV5::prc_years>();
        o << ",\"prc_rate\":" << m.get<RiskCubeDetailV5::prc_rate>();
        o << ",\"prc_sdiv\":" << m.get<RiskCubeDetailV5::prc_sdiv>();
        o << ",\"prc_ddiv\":" << m.get<RiskCubeDetailV5::prc_ddiv>();
        o << ",\"u_prc_ratio\":" << m.get<RiskCubeDetailV5::u_prc_ratio>();
        o << ",\"u_prc_move\":" << m.get<RiskCubeDetailV5::u_prc_move>();
        o << ",\"i_vol_move\":" << m.get<RiskCubeDetailV5::i_vol_move>();
        o << ",\"ex_div_amt\":" << m.get<RiskCubeDetailV5::ex_div_amt>();
        o << ",\"borrow_rate\":" << m.get<RiskCubeDetailV5::borrow_rate>();
        o << ",\"model_type\":" << m.get<RiskCubeDetailV5::model_type>();
        o << ",\"underliers_per_cn\":" << m.get<RiskCubeDetailV5::underliers_per_cn>();
        o << ",\"underlier_type\":" << (int64_t)m.get<RiskCubeDetailV5::underlier_type>();
        o << ",\"point_value\":" << m.get<RiskCubeDetailV5::point_value>();
        o << ",\"point_currency\":" << (int64_t)m.get<RiskCubeDetailV5::point_currency>();
        o << ",\"tick_value\":" << m.get<RiskCubeDetailV5::tick_value>();
        o << ",\"multihedge\":" << (int64_t)m.get<RiskCubeDetailV5::multihedge>();
        o << ",\"multihedge_source\":{" << m.get<RiskCubeDetailV5::multihedge_source>() << "}";
        o << ",\"multihedge_pvratio\":" << m.get<RiskCubeDetailV5::multihedge_pvratio>();
        o << ",\"span_prc_inc_up\":" << m.get<RiskCubeDetailV5::span_prc_inc_up>();
        o << ",\"span_prc_inc_dn\":" << m.get<RiskCubeDetailV5::span_prc_inc_dn>();
        o << ",\"span_vol_inc\":" << m.get<RiskCubeDetailV5::span_vol_inc>();
        o << ",\"prc_span_type\":" << (int64_t)m.get<RiskCubeDetailV5::prc_span_type>();
        o << ",\"vol_span_type\":" << (int64_t)m.get<RiskCubeDetailV5::vol_span_type>();
        o << ",\"span_pricing_model\":" << (int64_t)m.get<RiskCubeDetailV5::span_pricing_model>();
        o << ",\"margin_type\":" << (int64_t)m.get<RiskCubeDetailV5::margin_type>();
        {
            std::time_t tt = m.get<RiskCubeDetailV5::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}