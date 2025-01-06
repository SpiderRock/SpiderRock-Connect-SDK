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

    #ifndef _risk_server_code__GUARD__
    #define _risk_server_code__GUARD__
    DECL_STRONG_TYPE(risk_server_code, string);
    #endif//_risk_server_code__GUARD__

    #ifndef _agg_group__GUARD__
    #define _agg_group__GUARD__
    DECL_STRONG_TYPE(agg_group, string);
    #endif//_agg_group__GUARD__

    #ifndef _fkey__GUARD__
    #define _fkey__GUARD__
    DECL_STRONG_TYPE(fkey, ExpiryKey);
    #endif//_fkey__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _ex_type__ExerciseType__GUARD__
    #define _ex_type__ExerciseType__GUARD__
    DECL_STRONG_TYPE(ex_type__ExerciseType, spiderrock::protobuf::api::ExerciseType);
    #endif//_ex_type__ExerciseType__GUARD__

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

    #ifndef _option_type__GUARD__
    #define _option_type__GUARD__
    DECL_STRONG_TYPE(option_type, spiderrock::protobuf::api::OptionType);
    #endif//_option_type__GUARD__

    #ifndef _cash_on_ex__GUARD__
    #define _cash_on_ex__GUARD__
    DECL_STRONG_TYPE(cash_on_ex, float);
    #endif//_cash_on_ex__GUARD__

    #ifndef _strike_ratio__GUARD__
    #define _strike_ratio__GUARD__
    DECL_STRONG_TYPE(strike_ratio, float);
    #endif//_strike_ratio__GUARD__

    #ifndef _u_prc_ratio__float__GUARD__
    #define _u_prc_ratio__float__GUARD__
    DECL_STRONG_TYPE(u_prc_ratio__float, float);
    #endif//_u_prc_ratio__float__GUARD__

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

    #ifndef _price_format__GUARD__
    #define _price_format__GUARD__
    DECL_STRONG_TYPE(price_format, spiderrock::protobuf::api::PriceFormat);
    #endif//_price_format__GUARD__

    #ifndef _u_price_format__GUARD__
    #define _u_price_format__GUARD__
    DECL_STRONG_TYPE(u_price_format, spiderrock::protobuf::api::PriceFormat);
    #endif//_u_price_format__GUARD__

    #ifndef _u_prc__double__GUARD__
    #define _u_prc__double__GUARD__
    DECL_STRONG_TYPE(u_prc__double, double);
    #endif//_u_prc__double__GUARD__

    #ifndef _u_bid__double__GUARD__
    #define _u_bid__double__GUARD__
    DECL_STRONG_TYPE(u_bid__double, double);
    #endif//_u_bid__double__GUARD__

    #ifndef _u_ask__double__GUARD__
    #define _u_ask__double__GUARD__
    DECL_STRONG_TYPE(u_ask__double, double);
    #endif//_u_ask__double__GUARD__

    #ifndef _u_mark__double__GUARD__
    #define _u_mark__double__GUARD__
    DECL_STRONG_TYPE(u_mark__double, double);
    #endif//_u_mark__double__GUARD__

    #ifndef _u_mark_source__GUARD__
    #define _u_mark_source__GUARD__
    DECL_STRONG_TYPE(u_mark_source, spiderrock::protobuf::api::UMarkSource);
    #endif//_u_mark_source__GUARD__

    #ifndef _opt_bid__GUARD__
    #define _opt_bid__GUARD__
    DECL_STRONG_TYPE(opt_bid, float);
    #endif//_opt_bid__GUARD__

    #ifndef _opt_ask__GUARD__
    #define _opt_ask__GUARD__
    DECL_STRONG_TYPE(opt_ask, float);
    #endif//_opt_ask__GUARD__

    #ifndef _opt_mid_mark__GUARD__
    #define _opt_mid_mark__GUARD__
    DECL_STRONG_TYPE(opt_mid_mark, double);
    #endif//_opt_mid_mark__GUARD__

    #ifndef _opt_vol_mark__GUARD__
    #define _opt_vol_mark__GUARD__
    DECL_STRONG_TYPE(opt_vol_mark, double);
    #endif//_opt_vol_mark__GUARD__

    #ifndef _u_opn_mark__GUARD__
    #define _u_opn_mark__GUARD__
    DECL_STRONG_TYPE(u_opn_mark, double);
    #endif//_u_opn_mark__GUARD__

    #ifndef _opt_opn_vol_mark__GUARD__
    #define _opt_opn_vol_mark__GUARD__
    DECL_STRONG_TYPE(opt_opn_vol_mark, double);
    #endif//_opt_opn_vol_mark__GUARD__

    #ifndef _opt_opn_mid_mark__GUARD__
    #define _opt_opn_mid_mark__GUARD__
    DECL_STRONG_TYPE(opt_opn_mid_mark, double);
    #endif//_opt_opn_mid_mark__GUARD__

    #ifndef _opt_opn_clr_mark__GUARD__
    #define _opt_opn_clr_mark__GUARD__
    DECL_STRONG_TYPE(opt_opn_clr_mark, double);
    #endif//_opt_opn_clr_mark__GUARD__

    #ifndef _opt_opn_pos_prv__GUARD__
    #define _opt_opn_pos_prv__GUARD__
    DECL_STRONG_TYPE(opt_opn_pos_prv, int32);
    #endif//_opt_opn_pos_prv__GUARD__

    #ifndef _opt_opn_pos_clr__GUARD__
    #define _opt_opn_pos_clr__GUARD__
    DECL_STRONG_TYPE(opt_opn_pos_clr, int32);
    #endif//_opt_opn_pos_clr__GUARD__

    #ifndef _opt_opn_pos__GUARD__
    #define _opt_opn_pos__GUARD__
    DECL_STRONG_TYPE(opt_opn_pos, int32);
    #endif//_opt_opn_pos__GUARD__

    #ifndef _opt_opn_pos_src__GUARD__
    #define _opt_opn_pos_src__GUARD__
    DECL_STRONG_TYPE(opt_opn_pos_src, spiderrock::protobuf::api::PositionSource);
    #endif//_opt_opn_pos_src__GUARD__

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

    #ifndef _edge_opened__GUARD__
    #define _edge_opened__GUARD__
    DECL_STRONG_TYPE(edge_opened, float);
    #endif//_edge_opened__GUARD__

    #ifndef _edge_closed__GUARD__
    #define _edge_closed__GUARD__
    DECL_STRONG_TYPE(edge_closed, float);
    #endif//_edge_closed__GUARD__

    #ifndef _trd_delta__GUARD__
    #define _trd_delta__GUARD__
    DECL_STRONG_TYPE(trd_delta, float);
    #endif//_trd_delta__GUARD__

    #ifndef _trd_gamma__GUARD__
    #define _trd_gamma__GUARD__
    DECL_STRONG_TYPE(trd_gamma, float);
    #endif//_trd_gamma__GUARD__

    #ifndef _trd_delta_mny__GUARD__
    #define _trd_delta_mny__GUARD__
    DECL_STRONG_TYPE(trd_delta_mny, float);
    #endif//_trd_delta_mny__GUARD__

    #ifndef _opt_mny_bot__GUARD__
    #define _opt_mny_bot__GUARD__
    DECL_STRONG_TYPE(opt_mny_bot, double);
    #endif//_opt_mny_bot__GUARD__

    #ifndef _opt_mny_sld__GUARD__
    #define _opt_mny_sld__GUARD__
    DECL_STRONG_TYPE(opt_mny_sld, double);
    #endif//_opt_mny_sld__GUARD__

    #ifndef _day_pnl__GUARD__
    #define _day_pnl__GUARD__
    DECL_STRONG_TYPE(day_pnl, float);
    #endif//_day_pnl__GUARD__

    #ifndef _dn_day_pnl__GUARD__
    #define _dn_day_pnl__GUARD__
    DECL_STRONG_TYPE(dn_day_pnl, float);
    #endif//_dn_day_pnl__GUARD__

    #ifndef _opn_pnl_mid_mark__GUARD__
    #define _opn_pnl_mid_mark__GUARD__
    DECL_STRONG_TYPE(opn_pnl_mid_mark, float);
    #endif//_opn_pnl_mid_mark__GUARD__

    #ifndef _opn_pnl_vol_mark__GUARD__
    #define _opn_pnl_vol_mark__GUARD__
    DECL_STRONG_TYPE(opn_pnl_vol_mark, float);
    #endif//_opn_pnl_vol_mark__GUARD__

    #ifndef _opn_pnl_clr_mark__GUARD__
    #define _opn_pnl_clr_mark__GUARD__
    DECL_STRONG_TYPE(opn_pnl_clr_mark, float);
    #endif//_opn_pnl_clr_mark__GUARD__

    #ifndef _cn_net_opn_pos__GUARD__
    #define _cn_net_opn_pos__GUARD__
    DECL_STRONG_TYPE(cn_net_opn_pos, int32);
    #endif//_cn_net_opn_pos__GUARD__

    #ifndef _cn_net_cur_pos__GUARD__
    #define _cn_net_cur_pos__GUARD__
    DECL_STRONG_TYPE(cn_net_cur_pos, int32);
    #endif//_cn_net_cur_pos__GUARD__

    #ifndef _cn_atm_equiv__GUARD__
    #define _cn_atm_equiv__GUARD__
    DECL_STRONG_TYPE(cn_atm_equiv, float);
    #endif//_cn_atm_equiv__GUARD__

    #ifndef _beta__GUARD__
    #define _beta__GUARD__
    DECL_STRONG_TYPE(beta, float);
    #endif//_beta__GUARD__

    #ifndef _beta_source__GUARD__
    #define _beta_source__GUARD__
    DECL_STRONG_TYPE(beta_source, spiderrock::protobuf::api::BetaSource);
    #endif//_beta_source__GUARD__

    #ifndef _div_days__GUARD__
    #define _div_days__GUARD__
    DECL_STRONG_TYPE(div_days, int32);
    #endif//_div_days__GUARD__

    #ifndef _hedge_delta_rule__GUARD__
    #define _hedge_delta_rule__GUARD__
    DECL_STRONG_TYPE(hedge_delta_rule, spiderrock::protobuf::api::HedgeDeltaRule);
    #endif//_hedge_delta_rule__GUARD__

    #ifndef _binary_days__GUARD__
    #define _binary_days__GUARD__
    DECL_STRONG_TYPE(binary_days, float);
    #endif//_binary_days__GUARD__

    #ifndef _days__GUARD__
    #define _days__GUARD__
    DECL_STRONG_TYPE(days, int32);
    #endif//_days__GUARD__

    #ifndef _years__float__GUARD__
    #define _years__float__GUARD__
    DECL_STRONG_TYPE(years__float, float);
    #endif//_years__float__GUARD__

    #ifndef _rate__float__GUARD__
    #define _rate__float__GUARD__
    DECL_STRONG_TYPE(rate__float, float);
    #endif//_rate__float__GUARD__

    #ifndef _sdiv__float__GUARD__
    #define _sdiv__float__GUARD__
    DECL_STRONG_TYPE(sdiv__float, float);
    #endif//_sdiv__float__GUARD__

    #ifndef _ddiv__float__GUARD__
    #define _ddiv__float__GUARD__
    DECL_STRONG_TYPE(ddiv__float, float);
    #endif//_ddiv__float__GUARD__

    #ifndef _dadj__GUARD__
    #define _dadj__GUARD__
    DECL_STRONG_TYPE(dadj, float);
    #endif//_dadj__GUARD__

    #ifndef _atm_vol__GUARD__
    #define _atm_vol__GUARD__
    DECL_STRONG_TYPE(atm_vol, float);
    #endif//_atm_vol__GUARD__

    #ifndef _atm_vega__GUARD__
    #define _atm_vega__GUARD__
    DECL_STRONG_TYPE(atm_vega, float);
    #endif//_atm_vega__GUARD__

    #ifndef _smny__GUARD__
    #define _smny__GUARD__
    DECL_STRONG_TYPE(smny, float);
    #endif//_smny__GUARD__

    #ifndef _i_vol__GUARD__
    #define _i_vol__GUARD__
    DECL_STRONG_TYPE(i_vol, float);
    #endif//_i_vol__GUARD__

    #ifndef _i_vol_src__GUARD__
    #define _i_vol_src__GUARD__
    DECL_STRONG_TYPE(i_vol_src, spiderrock::protobuf::api::MarkSource);
    #endif//_i_vol_src__GUARD__

    #ifndef _de__GUARD__
    #define _de__GUARD__
    DECL_STRONG_TYPE(de, float);
    #endif//_de__GUARD__

    #ifndef _ga__GUARD__
    #define _ga__GUARD__
    DECL_STRONG_TYPE(ga, float);
    #endif//_ga__GUARD__

    #ifndef _th__GUARD__
    #define _th__GUARD__
    DECL_STRONG_TYPE(th, float);
    #endif//_th__GUARD__

    #ifndef _ve__GUARD__
    #define _ve__GUARD__
    DECL_STRONG_TYPE(ve, float);
    #endif//_ve__GUARD__

    #ifndef _rh__GUARD__
    #define _rh__GUARD__
    DECL_STRONG_TYPE(rh, float);
    #endif//_rh__GUARD__

    #ifndef _ph__GUARD__
    #define _ph__GUARD__
    DECL_STRONG_TYPE(ph, float);
    #endif//_ph__GUARD__

    #ifndef _vo__GUARD__
    #define _vo__GUARD__
    DECL_STRONG_TYPE(vo, float);
    #endif//_vo__GUARD__

    #ifndef _va__GUARD__
    #define _va__GUARD__
    DECL_STRONG_TYPE(va, float);
    #endif//_va__GUARD__

    #ifndef _de_decay__GUARD__
    #define _de_decay__GUARD__
    DECL_STRONG_TYPE(de_decay, float);
    #endif//_de_decay__GUARD__

    #ifndef _err__GUARD__
    #define _err__GUARD__
    DECL_STRONG_TYPE(err, int32);
    #endif//_err__GUARD__

    #ifndef _ve_slope__GUARD__
    #define _ve_slope__GUARD__
    DECL_STRONG_TYPE(ve_slope, float);
    #endif//_ve_slope__GUARD__

    #ifndef _hedge_de__GUARD__
    #define _hedge_de__GUARD__
    DECL_STRONG_TYPE(hedge_de, float);
    #endif//_hedge_de__GUARD__

    #ifndef _hedge_ga__GUARD__
    #define _hedge_ga__GUARD__
    DECL_STRONG_TYPE(hedge_ga, float);
    #endif//_hedge_ga__GUARD__

    #ifndef _sr_slope__GUARD__
    #define _sr_slope__GUARD__
    DECL_STRONG_TYPE(sr_slope, float);
    #endif//_sr_slope__GUARD__

    #ifndef _is_binary__GUARD__
    #define _is_binary__GUARD__
    DECL_STRONG_TYPE(is_binary, spiderrock::protobuf::api::YesNo);
    #endif//_is_binary__GUARD__

    #ifndef _prem_ov_par__GUARD__
    #define _prem_ov_par__GUARD__
    DECL_STRONG_TYPE(prem_ov_par, float);
    #endif//_prem_ov_par__GUARD__

    #ifndef _xde__GUARD__
    #define _xde__GUARD__
    DECL_STRONG_TYPE(xde, float);
    #endif//_xde__GUARD__

    #ifndef _lo_bound__GUARD__
    #define _lo_bound__GUARD__
    DECL_STRONG_TYPE(lo_bound, float);
    #endif//_lo_bound__GUARD__

    #ifndef _su90__GUARD__
    #define _su90__GUARD__
    DECL_STRONG_TYPE(su90, float);
    #endif//_su90__GUARD__

    #ifndef _sd90__GUARD__
    #define _sd90__GUARD__
    DECL_STRONG_TYPE(sd90, float);
    #endif//_sd90__GUARD__

    #ifndef _su50__GUARD__
    #define _su50__GUARD__
    DECL_STRONG_TYPE(su50, float);
    #endif//_su50__GUARD__

    #ifndef _sd50__GUARD__
    #define _sd50__GUARD__
    DECL_STRONG_TYPE(sd50, float);
    #endif//_sd50__GUARD__

    #ifndef _su15__GUARD__
    #define _su15__GUARD__
    DECL_STRONG_TYPE(su15, float);
    #endif//_su15__GUARD__

    #ifndef _sd15__GUARD__
    #define _sd15__GUARD__
    DECL_STRONG_TYPE(sd15, float);
    #endif//_sd15__GUARD__

    #ifndef _su10__GUARD__
    #define _su10__GUARD__
    DECL_STRONG_TYPE(su10, float);
    #endif//_su10__GUARD__

    #ifndef _sd10__GUARD__
    #define _sd10__GUARD__
    DECL_STRONG_TYPE(sd10, float);
    #endif//_sd10__GUARD__

    #ifndef _su06__GUARD__
    #define _su06__GUARD__
    DECL_STRONG_TYPE(su06, float);
    #endif//_su06__GUARD__

    #ifndef _sd08__GUARD__
    #define _sd08__GUARD__
    DECL_STRONG_TYPE(sd08, float);
    #endif//_sd08__GUARD__

    #ifndef _su05__GUARD__
    #define _su05__GUARD__
    DECL_STRONG_TYPE(su05, float);
    #endif//_su05__GUARD__

    #ifndef _sd05__GUARD__
    #define _sd05__GUARD__
    DECL_STRONG_TYPE(sd05, float);
    #endif//_sd05__GUARD__

    #ifndef _su1e__GUARD__
    #define _su1e__GUARD__
    DECL_STRONG_TYPE(su1e, float);
    #endif//_su1e__GUARD__

    #ifndef _sd1e__GUARD__
    #define _sd1e__GUARD__
    DECL_STRONG_TYPE(sd1e, float);
    #endif//_sd1e__GUARD__

    #ifndef _su2e__GUARD__
    #define _su2e__GUARD__
    DECL_STRONG_TYPE(su2e, float);
    #endif//_su2e__GUARD__

    #ifndef _sd2e__GUARD__
    #define _sd2e__GUARD__
    DECL_STRONG_TYPE(sd2e, float);
    #endif//_sd2e__GUARD__

    #ifndef _earn__GUARD__
    #define _earn__GUARD__
    DECL_STRONG_TYPE(earn, float);
    #endif//_earn__GUARD__

    #ifndef _cash__GUARD__
    #define _cash__GUARD__
    DECL_STRONG_TYPE(cash, float);
    #endif//_cash__GUARD__

    #ifndef _theo_model__GUARD__
    #define _theo_model__GUARD__
    DECL_STRONG_TYPE(theo_model, string);
    #endif//_theo_model__GUARD__

    #ifndef _t_vol__GUARD__
    #define _t_vol__GUARD__
    DECL_STRONG_TYPE(t_vol, float);
    #endif//_t_vol__GUARD__

    #ifndef _t_opx__GUARD__
    #define _t_opx__GUARD__
    DECL_STRONG_TYPE(t_opx, float);
    #endif//_t_opx__GUARD__

    #ifndef _t_bopn_px__GUARD__
    #define _t_bopn_px__GUARD__
    DECL_STRONG_TYPE(t_bopn_px, float);
    #endif//_t_bopn_px__GUARD__

    #ifndef _t_sopn_px__GUARD__
    #define _t_sopn_px__GUARD__
    DECL_STRONG_TYPE(t_sopn_px, float);
    #endif//_t_sopn_px__GUARD__

    #ifndef _t_bcls_px__GUARD__
    #define _t_bcls_px__GUARD__
    DECL_STRONG_TYPE(t_bcls_px, float);
    #endif//_t_bcls_px__GUARD__

    #ifndef _t_scls_px__GUARD__
    #define _t_scls_px__GUARD__
    DECL_STRONG_TYPE(t_scls_px, float);
    #endif//_t_scls_px__GUARD__

    #ifndef _t_de__GUARD__
    #define _t_de__GUARD__
    DECL_STRONG_TYPE(t_de, float);
    #endif//_t_de__GUARD__

    #ifndef _t_ga__GUARD__
    #define _t_ga__GUARD__
    DECL_STRONG_TYPE(t_ga, float);
    #endif//_t_ga__GUARD__

    #ifndef _t_err__GUARD__
    #define _t_err__GUARD__
    DECL_STRONG_TYPE(t_err, int32);
    #endif//_t_err__GUARD__

    #ifndef _theo_model2__GUARD__
    #define _theo_model2__GUARD__
    DECL_STRONG_TYPE(theo_model2, string);
    #endif//_theo_model2__GUARD__

    #ifndef _t_vol2__GUARD__
    #define _t_vol2__GUARD__
    DECL_STRONG_TYPE(t_vol2, float);
    #endif//_t_vol2__GUARD__

    #ifndef _t_opx2__GUARD__
    #define _t_opx2__GUARD__
    DECL_STRONG_TYPE(t_opx2, float);
    #endif//_t_opx2__GUARD__

    #ifndef _t_err2__GUARD__
    #define _t_err2__GUARD__
    DECL_STRONG_TYPE(t_err2, int32);
    #endif//_t_err2__GUARD__

    #ifndef _years_pr__GUARD__
    #define _years_pr__GUARD__
    DECL_STRONG_TYPE(years_pr, float);
    #endif//_years_pr__GUARD__

    #ifndef _rate_pr__GUARD__
    #define _rate_pr__GUARD__
    DECL_STRONG_TYPE(rate_pr, float);
    #endif//_rate_pr__GUARD__

    #ifndef _sdiv_pr__GUARD__
    #define _sdiv_pr__GUARD__
    DECL_STRONG_TYPE(sdiv_pr, float);
    #endif//_sdiv_pr__GUARD__

    #ifndef _ddiv_pr__GUARD__
    #define _ddiv_pr__GUARD__
    DECL_STRONG_TYPE(ddiv_pr, float);
    #endif//_ddiv_pr__GUARD__

    #ifndef _i_vol_pr__GUARD__
    #define _i_vol_pr__GUARD__
    DECL_STRONG_TYPE(i_vol_pr, float);
    #endif//_i_vol_pr__GUARD__

    #ifndef _de_pr__GUARD__
    #define _de_pr__GUARD__
    DECL_STRONG_TYPE(de_pr, float);
    #endif//_de_pr__GUARD__

    #ifndef _ga_pr__GUARD__
    #define _ga_pr__GUARD__
    DECL_STRONG_TYPE(ga_pr, float);
    #endif//_ga_pr__GUARD__

    #ifndef _th_pr__GUARD__
    #define _th_pr__GUARD__
    DECL_STRONG_TYPE(th_pr, float);
    #endif//_th_pr__GUARD__

    #ifndef _ve_pr__GUARD__
    #define _ve_pr__GUARD__
    DECL_STRONG_TYPE(ve_pr, float);
    #endif//_ve_pr__GUARD__

    #ifndef _rh_pr__GUARD__
    #define _rh_pr__GUARD__
    DECL_STRONG_TYPE(rh_pr, float);
    #endif//_rh_pr__GUARD__

    #ifndef _ph_pr__GUARD__
    #define _ph_pr__GUARD__
    DECL_STRONG_TYPE(ph_pr, float);
    #endif//_ph_pr__GUARD__

    #ifndef _vo_pr__GUARD__
    #define _vo_pr__GUARD__
    DECL_STRONG_TYPE(vo_pr, float);
    #endif//_vo_pr__GUARD__

    #ifndef _va_pr__GUARD__
    #define _va_pr__GUARD__
    DECL_STRONG_TYPE(va_pr, float);
    #endif//_va_pr__GUARD__

    #ifndef _err_pr__GUARD__
    #define _err_pr__GUARD__
    DECL_STRONG_TYPE(err_pr, int32);
    #endif//_err_pr__GUARD__

    #ifndef _ve_slope_pr__GUARD__
    #define _ve_slope_pr__GUARD__
    DECL_STRONG_TYPE(ve_slope_pr, float);
    #endif//_ve_slope_pr__GUARD__

    #ifndef _hedge_de_pr__GUARD__
    #define _hedge_de_pr__GUARD__
    DECL_STRONG_TYPE(hedge_de_pr, float);
    #endif//_hedge_de_pr__GUARD__

    #ifndef _t_vol_pr__GUARD__
    #define _t_vol_pr__GUARD__
    DECL_STRONG_TYPE(t_vol_pr, float);
    #endif//_t_vol_pr__GUARD__

    #ifndef _t_opx_pr__GUARD__
    #define _t_opx_pr__GUARD__
    DECL_STRONG_TYPE(t_opx_pr, float);
    #endif//_t_opx_pr__GUARD__

    #ifndef _t_de_pr__GUARD__
    #define _t_de_pr__GUARD__
    DECL_STRONG_TYPE(t_de_pr, float);
    #endif//_t_de_pr__GUARD__

    #ifndef _t_vol_pr2__GUARD__
    #define _t_vol_pr2__GUARD__
    DECL_STRONG_TYPE(t_vol_pr2, float);
    #endif//_t_vol_pr2__GUARD__

    #ifndef _t_opx_pr2__GUARD__
    #define _t_opx_pr2__GUARD__
    DECL_STRONG_TYPE(t_opx_pr2, float);
    #endif//_t_opx_pr2__GUARD__

    #ifndef _t_de_pr2__GUARD__
    #define _t_de_pr2__GUARD__
    DECL_STRONG_TYPE(t_de_pr2, float);
    #endif//_t_de_pr2__GUARD__

    #ifndef _xde_pr__GUARD__
    #define _xde_pr__GUARD__
    DECL_STRONG_TYPE(xde_pr, float);
    #endif//_xde_pr__GUARD__

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

    #ifndef _opn_pnl_sv__GUARD__
    #define _opn_pnl_sv__GUARD__
    DECL_STRONG_TYPE(opn_pnl_sv, float);
    #endif//_opn_pnl_sv__GUARD__

    #ifndef _opn_pnl_err__GUARD__
    #define _opn_pnl_err__GUARD__
    DECL_STRONG_TYPE(opn_pnl_err, float);
    #endif//_opn_pnl_err__GUARD__

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

    #ifndef _mark_err_codes__GUARD__
    #define _mark_err_codes__GUARD__
    DECL_STRONG_TYPE(mark_err_codes, spiderrock::protobuf::api::MarkErrorCode);
    #endif//_mark_err_codes__GUARD__

    #ifndef _ex_value__GUARD__
    #define _ex_value__GUARD__
    DECL_STRONG_TYPE(ex_value, float);
    #endif//_ex_value__GUARD__

    #ifndef _risk_alert__GUARD__
    #define _risk_alert__GUARD__
    DECL_STRONG_TYPE(risk_alert, spiderrock::protobuf::api::AlertCode);
    #endif//_risk_alert__GUARD__

    #ifndef _num_executions__GUARD__
    #define _num_executions__GUARD__
    DECL_STRONG_TYPE(num_executions, int32);
    #endif//_num_executions__GUARD__

    #ifndef _max_exec_dttm__GUARD__
    #define _max_exec_dttm__GUARD__
    DECL_STRONG_TYPE(max_exec_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_max_exec_dttm__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _okey__GUARD__
    #define _okey__GUARD__
    DECL_STRONG_TYPE(okey, OptionKey);
    #endif//_okey__GUARD__

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

    
    class OptionPositionRecordV5_PKey {
        public:
        //using statements for all types used in this class
        using okey = spiderrock::protobuf::api::okey;
        using accnt = spiderrock::protobuf::api::accnt;
        using trade_date = spiderrock::protobuf::api::trade_date;
        using risk_session = spiderrock::protobuf::api::risk_session;
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        okey m_okey{};
        accnt m_accnt{};
        trade_date m_trade_date{};
        risk_session m_risk_session{};
        client_firm m_client_firm{};

        public:
		okey get_okey() const {
            return m_okey;
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
        void set_okey(const okey& value)  {
            m_okey = value;
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionPositionRecordV5_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionPositionRecordV5_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const okey & value) { set_okey(value); }
        void set(const accnt & value) { set_accnt(value); }
        void set(const trade_date & value) { set_trade_date(value); }
        void set(const risk_session & value) { set_risk_session(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        OptionPositionRecordV5_PKey() {}

        virtual ~OptionPositionRecordV5_PKey() {
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
        bool IncludeOkey() const {
            return (m_okey.ByteSizeLong() > 0);
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
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_okey;
                m_okey.setCodecOptionKey(optionKeyLayout_okey);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(10,optionKeyLayout_okey);
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
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_okey;
                m_okey.setCodecOptionKey(optionKeyLayout_okey);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 10, optionKeyLayout_okey);
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
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_okey.setFromCodec(optionKey);
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
    

    class OptionPositionRecordV5 {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::OptionPositionRecordV5_PKey;
        using risk_server_code = spiderrock::protobuf::api::risk_server_code;
        using agg_group = spiderrock::protobuf::api::agg_group;
        using fkey = spiderrock::protobuf::api::fkey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using ex_type = spiderrock::protobuf::api::ex_type__ExerciseType;
        using multihedge = spiderrock::protobuf::api::multihedge;
        using multihedge_source = spiderrock::protobuf::api::multihedge_source;
        using multihedge_pvratio = spiderrock::protobuf::api::multihedge_pvratio;
        using option_type = spiderrock::protobuf::api::option_type;
        using cash_on_ex = spiderrock::protobuf::api::cash_on_ex;
        using strike_ratio = spiderrock::protobuf::api::strike_ratio;
        using u_prc_ratio = spiderrock::protobuf::api::u_prc_ratio__float;
        using underliers_per_cn = spiderrock::protobuf::api::underliers_per_cn;
        using underlier_type = spiderrock::protobuf::api::underlier_type__UnderlierType;
        using tick_value = spiderrock::protobuf::api::tick_value;
        using point_value = spiderrock::protobuf::api::point_value__float;
        using point_currency = spiderrock::protobuf::api::point_currency;
        using price_format = spiderrock::protobuf::api::price_format;
        using u_price_format = spiderrock::protobuf::api::u_price_format;
        using u_prc = spiderrock::protobuf::api::u_prc__double;
        using u_bid = spiderrock::protobuf::api::u_bid__double;
        using u_ask = spiderrock::protobuf::api::u_ask__double;
        using u_mark = spiderrock::protobuf::api::u_mark__double;
        using u_mark_source = spiderrock::protobuf::api::u_mark_source;
        using opt_bid = spiderrock::protobuf::api::opt_bid;
        using opt_ask = spiderrock::protobuf::api::opt_ask;
        using opt_mid_mark = spiderrock::protobuf::api::opt_mid_mark;
        using opt_vol_mark = spiderrock::protobuf::api::opt_vol_mark;
        using u_opn_mark = spiderrock::protobuf::api::u_opn_mark;
        using opt_opn_vol_mark = spiderrock::protobuf::api::opt_opn_vol_mark;
        using opt_opn_mid_mark = spiderrock::protobuf::api::opt_opn_mid_mark;
        using opt_opn_clr_mark = spiderrock::protobuf::api::opt_opn_clr_mark;
        using opt_opn_pos_prv = spiderrock::protobuf::api::opt_opn_pos_prv;
        using opt_opn_pos_clr = spiderrock::protobuf::api::opt_opn_pos_clr;
        using opt_opn_pos = spiderrock::protobuf::api::opt_opn_pos;
        using opt_opn_pos_src = spiderrock::protobuf::api::opt_opn_pos_src;
        using cn_bot = spiderrock::protobuf::api::cn_bot;
        using cn_sld = spiderrock::protobuf::api::cn_sld;
        using cn_opened = spiderrock::protobuf::api::cn_opened;
        using cn_closed = spiderrock::protobuf::api::cn_closed;
        using edge_opened = spiderrock::protobuf::api::edge_opened;
        using edge_closed = spiderrock::protobuf::api::edge_closed;
        using trd_delta = spiderrock::protobuf::api::trd_delta;
        using trd_gamma = spiderrock::protobuf::api::trd_gamma;
        using trd_delta_mny = spiderrock::protobuf::api::trd_delta_mny;
        using opt_mny_bot = spiderrock::protobuf::api::opt_mny_bot;
        using opt_mny_sld = spiderrock::protobuf::api::opt_mny_sld;
        using day_pnl = spiderrock::protobuf::api::day_pnl;
        using dn_day_pnl = spiderrock::protobuf::api::dn_day_pnl;
        using opn_pnl_mid_mark = spiderrock::protobuf::api::opn_pnl_mid_mark;
        using opn_pnl_vol_mark = spiderrock::protobuf::api::opn_pnl_vol_mark;
        using opn_pnl_clr_mark = spiderrock::protobuf::api::opn_pnl_clr_mark;
        using cn_net_opn_pos = spiderrock::protobuf::api::cn_net_opn_pos;
        using cn_net_cur_pos = spiderrock::protobuf::api::cn_net_cur_pos;
        using cn_atm_equiv = spiderrock::protobuf::api::cn_atm_equiv;
        using beta = spiderrock::protobuf::api::beta;
        using beta_source = spiderrock::protobuf::api::beta_source;
        using div_days = spiderrock::protobuf::api::div_days;
        using hedge_delta_rule = spiderrock::protobuf::api::hedge_delta_rule;
        using binary_days = spiderrock::protobuf::api::binary_days;
        using days = spiderrock::protobuf::api::days;
        using years = spiderrock::protobuf::api::years__float;
        using rate = spiderrock::protobuf::api::rate__float;
        using sdiv = spiderrock::protobuf::api::sdiv__float;
        using ddiv = spiderrock::protobuf::api::ddiv__float;
        using dadj = spiderrock::protobuf::api::dadj;
        using atm_vol = spiderrock::protobuf::api::atm_vol;
        using atm_vega = spiderrock::protobuf::api::atm_vega;
        using smny = spiderrock::protobuf::api::smny;
        using i_vol = spiderrock::protobuf::api::i_vol;
        using i_vol_src = spiderrock::protobuf::api::i_vol_src;
        using de = spiderrock::protobuf::api::de;
        using ga = spiderrock::protobuf::api::ga;
        using th = spiderrock::protobuf::api::th;
        using ve = spiderrock::protobuf::api::ve;
        using rh = spiderrock::protobuf::api::rh;
        using ph = spiderrock::protobuf::api::ph;
        using vo = spiderrock::protobuf::api::vo;
        using va = spiderrock::protobuf::api::va;
        using de_decay = spiderrock::protobuf::api::de_decay;
        using err = spiderrock::protobuf::api::err;
        using ve_slope = spiderrock::protobuf::api::ve_slope;
        using hedge_de = spiderrock::protobuf::api::hedge_de;
        using hedge_ga = spiderrock::protobuf::api::hedge_ga;
        using sr_slope = spiderrock::protobuf::api::sr_slope;
        using is_binary = spiderrock::protobuf::api::is_binary;
        using prem_ov_par = spiderrock::protobuf::api::prem_ov_par;
        using xde = spiderrock::protobuf::api::xde;
        using lo_bound = spiderrock::protobuf::api::lo_bound;
        using su90 = spiderrock::protobuf::api::su90;
        using sd90 = spiderrock::protobuf::api::sd90;
        using su50 = spiderrock::protobuf::api::su50;
        using sd50 = spiderrock::protobuf::api::sd50;
        using su15 = spiderrock::protobuf::api::su15;
        using sd15 = spiderrock::protobuf::api::sd15;
        using su10 = spiderrock::protobuf::api::su10;
        using sd10 = spiderrock::protobuf::api::sd10;
        using su06 = spiderrock::protobuf::api::su06;
        using sd08 = spiderrock::protobuf::api::sd08;
        using su05 = spiderrock::protobuf::api::su05;
        using sd05 = spiderrock::protobuf::api::sd05;
        using su1e = spiderrock::protobuf::api::su1e;
        using sd1e = spiderrock::protobuf::api::sd1e;
        using su2e = spiderrock::protobuf::api::su2e;
        using sd2e = spiderrock::protobuf::api::sd2e;
        using earn = spiderrock::protobuf::api::earn;
        using cash = spiderrock::protobuf::api::cash;
        using theo_model = spiderrock::protobuf::api::theo_model;
        using t_vol = spiderrock::protobuf::api::t_vol;
        using t_opx = spiderrock::protobuf::api::t_opx;
        using t_bopn_px = spiderrock::protobuf::api::t_bopn_px;
        using t_sopn_px = spiderrock::protobuf::api::t_sopn_px;
        using t_bcls_px = spiderrock::protobuf::api::t_bcls_px;
        using t_scls_px = spiderrock::protobuf::api::t_scls_px;
        using t_de = spiderrock::protobuf::api::t_de;
        using t_ga = spiderrock::protobuf::api::t_ga;
        using t_err = spiderrock::protobuf::api::t_err;
        using theo_model2 = spiderrock::protobuf::api::theo_model2;
        using t_vol2 = spiderrock::protobuf::api::t_vol2;
        using t_opx2 = spiderrock::protobuf::api::t_opx2;
        using t_err2 = spiderrock::protobuf::api::t_err2;
        using years_pr = spiderrock::protobuf::api::years_pr;
        using rate_pr = spiderrock::protobuf::api::rate_pr;
        using sdiv_pr = spiderrock::protobuf::api::sdiv_pr;
        using ddiv_pr = spiderrock::protobuf::api::ddiv_pr;
        using i_vol_pr = spiderrock::protobuf::api::i_vol_pr;
        using de_pr = spiderrock::protobuf::api::de_pr;
        using ga_pr = spiderrock::protobuf::api::ga_pr;
        using th_pr = spiderrock::protobuf::api::th_pr;
        using ve_pr = spiderrock::protobuf::api::ve_pr;
        using rh_pr = spiderrock::protobuf::api::rh_pr;
        using ph_pr = spiderrock::protobuf::api::ph_pr;
        using vo_pr = spiderrock::protobuf::api::vo_pr;
        using va_pr = spiderrock::protobuf::api::va_pr;
        using err_pr = spiderrock::protobuf::api::err_pr;
        using ve_slope_pr = spiderrock::protobuf::api::ve_slope_pr;
        using hedge_de_pr = spiderrock::protobuf::api::hedge_de_pr;
        using t_vol_pr = spiderrock::protobuf::api::t_vol_pr;
        using t_opx_pr = spiderrock::protobuf::api::t_opx_pr;
        using t_de_pr = spiderrock::protobuf::api::t_de_pr;
        using t_vol_pr2 = spiderrock::protobuf::api::t_vol_pr2;
        using t_opx_pr2 = spiderrock::protobuf::api::t_opx_pr2;
        using t_de_pr2 = spiderrock::protobuf::api::t_de_pr2;
        using xde_pr = spiderrock::protobuf::api::xde_pr;
        using margin_udn_vdn = spiderrock::protobuf::api::margin_udn_vdn;
        using margin_udn_vup = spiderrock::protobuf::api::margin_udn_vup;
        using margin_uup_vdn = spiderrock::protobuf::api::margin_uup_vdn;
        using margin_uup_vup = spiderrock::protobuf::api::margin_uup_vup;
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
        using opn_pnl_sv = spiderrock::protobuf::api::opn_pnl_sv;
        using opn_pnl_err = spiderrock::protobuf::api::opn_pnl_err;
        using sh_bot_c0 = spiderrock::protobuf::api::sh_bot_c0;
        using sh_sld_c0 = spiderrock::protobuf::api::sh_sld_c0;
        using sh_mny_c0 = spiderrock::protobuf::api::sh_mny_c0;
        using sh_bot_c1 = spiderrock::protobuf::api::sh_bot_c1;
        using sh_sld_c1 = spiderrock::protobuf::api::sh_sld_c1;
        using sh_mny_c1 = spiderrock::protobuf::api::sh_mny_c1;
        using mark_err_codes = spiderrock::protobuf::api::mark_err_codes;
        using ex_value = spiderrock::protobuf::api::ex_value;
        using risk_alert = spiderrock::protobuf::api::risk_alert;
        using num_executions = spiderrock::protobuf::api::num_executions;
        using max_exec_dttm = spiderrock::protobuf::api::max_exec_dttm;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        risk_server_code m_risk_server_code{};
        agg_group m_agg_group{};
        fkey m_fkey{};
        ticker m_ticker{};
        ex_type m_ex_type{};
        multihedge m_multihedge{};
        multihedge_source m_multihedge_source{};
        multihedge_pvratio m_multihedge_pvratio{};
        option_type m_option_type{};
        cash_on_ex m_cash_on_ex{};
        strike_ratio m_strike_ratio{};
        u_prc_ratio m_u_prc_ratio{};
        underliers_per_cn m_underliers_per_cn{};
        underlier_type m_underlier_type{};
        tick_value m_tick_value{};
        point_value m_point_value{};
        point_currency m_point_currency{};
        price_format m_price_format{};
        u_price_format m_u_price_format{};
        u_prc m_u_prc{};
        u_bid m_u_bid{};
        u_ask m_u_ask{};
        u_mark m_u_mark{};
        u_mark_source m_u_mark_source{};
        opt_bid m_opt_bid{};
        opt_ask m_opt_ask{};
        opt_mid_mark m_opt_mid_mark{};
        opt_vol_mark m_opt_vol_mark{};
        u_opn_mark m_u_opn_mark{};
        opt_opn_vol_mark m_opt_opn_vol_mark{};
        opt_opn_mid_mark m_opt_opn_mid_mark{};
        opt_opn_clr_mark m_opt_opn_clr_mark{};
        opt_opn_pos_prv m_opt_opn_pos_prv{};
        opt_opn_pos_clr m_opt_opn_pos_clr{};
        opt_opn_pos m_opt_opn_pos{};
        opt_opn_pos_src m_opt_opn_pos_src{};
        cn_bot m_cn_bot{};
        cn_sld m_cn_sld{};
        cn_opened m_cn_opened{};
        cn_closed m_cn_closed{};
        edge_opened m_edge_opened{};
        edge_closed m_edge_closed{};
        trd_delta m_trd_delta{};
        trd_gamma m_trd_gamma{};
        trd_delta_mny m_trd_delta_mny{};
        opt_mny_bot m_opt_mny_bot{};
        opt_mny_sld m_opt_mny_sld{};
        day_pnl m_day_pnl{};
        dn_day_pnl m_dn_day_pnl{};
        opn_pnl_mid_mark m_opn_pnl_mid_mark{};
        opn_pnl_vol_mark m_opn_pnl_vol_mark{};
        opn_pnl_clr_mark m_opn_pnl_clr_mark{};
        cn_net_opn_pos m_cn_net_opn_pos{};
        cn_net_cur_pos m_cn_net_cur_pos{};
        cn_atm_equiv m_cn_atm_equiv{};
        beta m_beta{};
        beta_source m_beta_source{};
        div_days m_div_days{};
        hedge_delta_rule m_hedge_delta_rule{};
        binary_days m_binary_days{};
        days m_days{};
        years m_years{};
        rate m_rate{};
        sdiv m_sdiv{};
        ddiv m_ddiv{};
        dadj m_dadj{};
        atm_vol m_atm_vol{};
        atm_vega m_atm_vega{};
        smny m_smny{};
        i_vol m_i_vol{};
        i_vol_src m_i_vol_src{};
        de m_de{};
        ga m_ga{};
        th m_th{};
        ve m_ve{};
        rh m_rh{};
        ph m_ph{};
        vo m_vo{};
        va m_va{};
        de_decay m_de_decay{};
        err m_err{};
        ve_slope m_ve_slope{};
        hedge_de m_hedge_de{};
        hedge_ga m_hedge_ga{};
        sr_slope m_sr_slope{};
        is_binary m_is_binary{};
        prem_ov_par m_prem_ov_par{};
        xde m_xde{};
        lo_bound m_lo_bound{};
        su90 m_su90{};
        sd90 m_sd90{};
        su50 m_su50{};
        sd50 m_sd50{};
        su15 m_su15{};
        sd15 m_sd15{};
        su10 m_su10{};
        sd10 m_sd10{};
        su06 m_su06{};
        sd08 m_sd08{};
        su05 m_su05{};
        sd05 m_sd05{};
        su1e m_su1e{};
        sd1e m_sd1e{};
        su2e m_su2e{};
        sd2e m_sd2e{};
        earn m_earn{};
        cash m_cash{};
        theo_model m_theo_model{};
        t_vol m_t_vol{};
        t_opx m_t_opx{};
        t_bopn_px m_t_bopn_px{};
        t_sopn_px m_t_sopn_px{};
        t_bcls_px m_t_bcls_px{};
        t_scls_px m_t_scls_px{};
        t_de m_t_de{};
        t_ga m_t_ga{};
        t_err m_t_err{};
        theo_model2 m_theo_model2{};
        t_vol2 m_t_vol2{};
        t_opx2 m_t_opx2{};
        t_err2 m_t_err2{};
        years_pr m_years_pr{};
        rate_pr m_rate_pr{};
        sdiv_pr m_sdiv_pr{};
        ddiv_pr m_ddiv_pr{};
        i_vol_pr m_i_vol_pr{};
        de_pr m_de_pr{};
        ga_pr m_ga_pr{};
        th_pr m_th_pr{};
        ve_pr m_ve_pr{};
        rh_pr m_rh_pr{};
        ph_pr m_ph_pr{};
        vo_pr m_vo_pr{};
        va_pr m_va_pr{};
        err_pr m_err_pr{};
        ve_slope_pr m_ve_slope_pr{};
        hedge_de_pr m_hedge_de_pr{};
        t_vol_pr m_t_vol_pr{};
        t_opx_pr m_t_opx_pr{};
        t_de_pr m_t_de_pr{};
        t_vol_pr2 m_t_vol_pr2{};
        t_opx_pr2 m_t_opx_pr2{};
        t_de_pr2 m_t_de_pr2{};
        xde_pr m_xde_pr{};
        margin_udn_vdn m_margin_udn_vdn{};
        margin_udn_vup m_margin_udn_vup{};
        margin_uup_vdn m_margin_uup_vdn{};
        margin_uup_vup m_margin_uup_vup{};
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
        opn_pnl_sv m_opn_pnl_sv{};
        opn_pnl_err m_opn_pnl_err{};
        sh_bot_c0 m_sh_bot_c0{};
        sh_sld_c0 m_sh_sld_c0{};
        sh_mny_c0 m_sh_mny_c0{};
        sh_bot_c1 m_sh_bot_c1{};
        sh_sld_c1 m_sh_sld_c1{};
        sh_mny_c1 m_sh_mny_c1{};
        mark_err_codes m_mark_err_codes{};
        ex_value m_ex_value{};
        risk_alert m_risk_alert{};
        num_executions m_num_executions{};
        max_exec_dttm m_max_exec_dttm{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        risk_server_code get_risk_server_code() const {
            return m_risk_server_code;
        }		
        agg_group get_agg_group() const {
            return m_agg_group;
        }		
        fkey get_fkey() const {
            return m_fkey;
        }		
        ticker get_ticker() const {
            return m_ticker;
        }		
        ex_type get_ex_type() const {
            return m_ex_type;
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
        option_type get_option_type() const {
            return m_option_type;
        }		
        cash_on_ex get_cash_on_ex() const {
            return m_cash_on_ex;
        }		
        strike_ratio get_strike_ratio() const {
            return m_strike_ratio;
        }		
        u_prc_ratio get_u_prc_ratio() const {
            return m_u_prc_ratio;
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
        price_format get_price_format() const {
            return m_price_format;
        }		
        u_price_format get_u_price_format() const {
            return m_u_price_format;
        }		
        u_prc get_u_prc() const {
            return m_u_prc;
        }		
        u_bid get_u_bid() const {
            return m_u_bid;
        }		
        u_ask get_u_ask() const {
            return m_u_ask;
        }		
        u_mark get_u_mark() const {
            return m_u_mark;
        }		
        u_mark_source get_u_mark_source() const {
            return m_u_mark_source;
        }		
        opt_bid get_opt_bid() const {
            return m_opt_bid;
        }		
        opt_ask get_opt_ask() const {
            return m_opt_ask;
        }		
        opt_mid_mark get_opt_mid_mark() const {
            return m_opt_mid_mark;
        }		
        opt_vol_mark get_opt_vol_mark() const {
            return m_opt_vol_mark;
        }		
        u_opn_mark get_u_opn_mark() const {
            return m_u_opn_mark;
        }		
        opt_opn_vol_mark get_opt_opn_vol_mark() const {
            return m_opt_opn_vol_mark;
        }		
        opt_opn_mid_mark get_opt_opn_mid_mark() const {
            return m_opt_opn_mid_mark;
        }		
        opt_opn_clr_mark get_opt_opn_clr_mark() const {
            return m_opt_opn_clr_mark;
        }		
        opt_opn_pos_prv get_opt_opn_pos_prv() const {
            return m_opt_opn_pos_prv;
        }		
        opt_opn_pos_clr get_opt_opn_pos_clr() const {
            return m_opt_opn_pos_clr;
        }		
        opt_opn_pos get_opt_opn_pos() const {
            return m_opt_opn_pos;
        }		
        opt_opn_pos_src get_opt_opn_pos_src() const {
            return m_opt_opn_pos_src;
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
        edge_opened get_edge_opened() const {
            return m_edge_opened;
        }		
        edge_closed get_edge_closed() const {
            return m_edge_closed;
        }		
        trd_delta get_trd_delta() const {
            return m_trd_delta;
        }		
        trd_gamma get_trd_gamma() const {
            return m_trd_gamma;
        }		
        trd_delta_mny get_trd_delta_mny() const {
            return m_trd_delta_mny;
        }		
        opt_mny_bot get_opt_mny_bot() const {
            return m_opt_mny_bot;
        }		
        opt_mny_sld get_opt_mny_sld() const {
            return m_opt_mny_sld;
        }		
        day_pnl get_day_pnl() const {
            return m_day_pnl;
        }		
        dn_day_pnl get_dn_day_pnl() const {
            return m_dn_day_pnl;
        }		
        opn_pnl_mid_mark get_opn_pnl_mid_mark() const {
            return m_opn_pnl_mid_mark;
        }		
        opn_pnl_vol_mark get_opn_pnl_vol_mark() const {
            return m_opn_pnl_vol_mark;
        }		
        opn_pnl_clr_mark get_opn_pnl_clr_mark() const {
            return m_opn_pnl_clr_mark;
        }		
        cn_net_opn_pos get_cn_net_opn_pos() const {
            return m_cn_net_opn_pos;
        }		
        cn_net_cur_pos get_cn_net_cur_pos() const {
            return m_cn_net_cur_pos;
        }		
        cn_atm_equiv get_cn_atm_equiv() const {
            return m_cn_atm_equiv;
        }		
        beta get_beta() const {
            return m_beta;
        }		
        beta_source get_beta_source() const {
            return m_beta_source;
        }		
        div_days get_div_days() const {
            return m_div_days;
        }		
        hedge_delta_rule get_hedge_delta_rule() const {
            return m_hedge_delta_rule;
        }		
        binary_days get_binary_days() const {
            return m_binary_days;
        }		
        days get_days() const {
            return m_days;
        }		
        years get_years() const {
            return m_years;
        }		
        rate get_rate() const {
            return m_rate;
        }		
        sdiv get_sdiv() const {
            return m_sdiv;
        }		
        ddiv get_ddiv() const {
            return m_ddiv;
        }		
        dadj get_dadj() const {
            return m_dadj;
        }		
        atm_vol get_atm_vol() const {
            return m_atm_vol;
        }		
        atm_vega get_atm_vega() const {
            return m_atm_vega;
        }		
        smny get_smny() const {
            return m_smny;
        }		
        i_vol get_i_vol() const {
            return m_i_vol;
        }		
        i_vol_src get_i_vol_src() const {
            return m_i_vol_src;
        }		
        de get_de() const {
            return m_de;
        }		
        ga get_ga() const {
            return m_ga;
        }		
        th get_th() const {
            return m_th;
        }		
        ve get_ve() const {
            return m_ve;
        }		
        rh get_rh() const {
            return m_rh;
        }		
        ph get_ph() const {
            return m_ph;
        }		
        vo get_vo() const {
            return m_vo;
        }		
        va get_va() const {
            return m_va;
        }		
        de_decay get_de_decay() const {
            return m_de_decay;
        }		
        err get_err() const {
            return m_err;
        }		
        ve_slope get_ve_slope() const {
            return m_ve_slope;
        }		
        hedge_de get_hedge_de() const {
            return m_hedge_de;
        }		
        hedge_ga get_hedge_ga() const {
            return m_hedge_ga;
        }		
        sr_slope get_sr_slope() const {
            return m_sr_slope;
        }		
        is_binary get_is_binary() const {
            return m_is_binary;
        }		
        prem_ov_par get_prem_ov_par() const {
            return m_prem_ov_par;
        }		
        xde get_xde() const {
            return m_xde;
        }		
        lo_bound get_lo_bound() const {
            return m_lo_bound;
        }		
        su90 get_su90() const {
            return m_su90;
        }		
        sd90 get_sd90() const {
            return m_sd90;
        }		
        su50 get_su50() const {
            return m_su50;
        }		
        sd50 get_sd50() const {
            return m_sd50;
        }		
        su15 get_su15() const {
            return m_su15;
        }		
        sd15 get_sd15() const {
            return m_sd15;
        }		
        su10 get_su10() const {
            return m_su10;
        }		
        sd10 get_sd10() const {
            return m_sd10;
        }		
        su06 get_su06() const {
            return m_su06;
        }		
        sd08 get_sd08() const {
            return m_sd08;
        }		
        su05 get_su05() const {
            return m_su05;
        }		
        sd05 get_sd05() const {
            return m_sd05;
        }		
        su1e get_su1e() const {
            return m_su1e;
        }		
        sd1e get_sd1e() const {
            return m_sd1e;
        }		
        su2e get_su2e() const {
            return m_su2e;
        }		
        sd2e get_sd2e() const {
            return m_sd2e;
        }		
        earn get_earn() const {
            return m_earn;
        }		
        cash get_cash() const {
            return m_cash;
        }		
        theo_model get_theo_model() const {
            return m_theo_model;
        }		
        t_vol get_t_vol() const {
            return m_t_vol;
        }		
        t_opx get_t_opx() const {
            return m_t_opx;
        }		
        t_bopn_px get_t_bopn_px() const {
            return m_t_bopn_px;
        }		
        t_sopn_px get_t_sopn_px() const {
            return m_t_sopn_px;
        }		
        t_bcls_px get_t_bcls_px() const {
            return m_t_bcls_px;
        }		
        t_scls_px get_t_scls_px() const {
            return m_t_scls_px;
        }		
        t_de get_t_de() const {
            return m_t_de;
        }		
        t_ga get_t_ga() const {
            return m_t_ga;
        }		
        t_err get_t_err() const {
            return m_t_err;
        }		
        theo_model2 get_theo_model2() const {
            return m_theo_model2;
        }		
        t_vol2 get_t_vol2() const {
            return m_t_vol2;
        }		
        t_opx2 get_t_opx2() const {
            return m_t_opx2;
        }		
        t_err2 get_t_err2() const {
            return m_t_err2;
        }		
        years_pr get_years_pr() const {
            return m_years_pr;
        }		
        rate_pr get_rate_pr() const {
            return m_rate_pr;
        }		
        sdiv_pr get_sdiv_pr() const {
            return m_sdiv_pr;
        }		
        ddiv_pr get_ddiv_pr() const {
            return m_ddiv_pr;
        }		
        i_vol_pr get_i_vol_pr() const {
            return m_i_vol_pr;
        }		
        de_pr get_de_pr() const {
            return m_de_pr;
        }		
        ga_pr get_ga_pr() const {
            return m_ga_pr;
        }		
        th_pr get_th_pr() const {
            return m_th_pr;
        }		
        ve_pr get_ve_pr() const {
            return m_ve_pr;
        }		
        rh_pr get_rh_pr() const {
            return m_rh_pr;
        }		
        ph_pr get_ph_pr() const {
            return m_ph_pr;
        }		
        vo_pr get_vo_pr() const {
            return m_vo_pr;
        }		
        va_pr get_va_pr() const {
            return m_va_pr;
        }		
        err_pr get_err_pr() const {
            return m_err_pr;
        }		
        ve_slope_pr get_ve_slope_pr() const {
            return m_ve_slope_pr;
        }		
        hedge_de_pr get_hedge_de_pr() const {
            return m_hedge_de_pr;
        }		
        t_vol_pr get_t_vol_pr() const {
            return m_t_vol_pr;
        }		
        t_opx_pr get_t_opx_pr() const {
            return m_t_opx_pr;
        }		
        t_de_pr get_t_de_pr() const {
            return m_t_de_pr;
        }		
        t_vol_pr2 get_t_vol_pr2() const {
            return m_t_vol_pr2;
        }		
        t_opx_pr2 get_t_opx_pr2() const {
            return m_t_opx_pr2;
        }		
        t_de_pr2 get_t_de_pr2() const {
            return m_t_de_pr2;
        }		
        xde_pr get_xde_pr() const {
            return m_xde_pr;
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
        opn_pnl_sv get_opn_pnl_sv() const {
            return m_opn_pnl_sv;
        }		
        opn_pnl_err get_opn_pnl_err() const {
            return m_opn_pnl_err;
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
        mark_err_codes get_mark_err_codes() const {
            return m_mark_err_codes;
        }		
        ex_value get_ex_value() const {
            return m_ex_value;
        }		
        risk_alert get_risk_alert() const {
            return m_risk_alert;
        }		
        num_executions get_num_executions() const {
            return m_num_executions;
        }		
        max_exec_dttm get_max_exec_dttm() const {
            return m_max_exec_dttm;
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
        void set_risk_server_code(const risk_server_code& value)  {
            m_risk_server_code = value;
        }
        void set_agg_group(const agg_group& value)  {
            m_agg_group = value;
        }
        void set_fkey(const fkey& value)  {
            m_fkey = value;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_ex_type(const ex_type& value)  {
            m_ex_type = value;
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
        void set_option_type(const option_type& value)  {
            m_option_type = value;
        }
        void set_cash_on_ex(const cash_on_ex& value)  {
            m_cash_on_ex = value;
        }
        void set_strike_ratio(const strike_ratio& value)  {
            m_strike_ratio = value;
        }
        void set_u_prc_ratio(const u_prc_ratio& value)  {
            m_u_prc_ratio = value;
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
        void set_price_format(const price_format& value)  {
            m_price_format = value;
        }
        void set_u_price_format(const u_price_format& value)  {
            m_u_price_format = value;
        }
        void set_u_prc(const u_prc& value)  {
            m_u_prc = value;
        }
        void set_u_bid(const u_bid& value)  {
            m_u_bid = value;
        }
        void set_u_ask(const u_ask& value)  {
            m_u_ask = value;
        }
        void set_u_mark(const u_mark& value)  {
            m_u_mark = value;
        }
        void set_u_mark_source(const u_mark_source& value)  {
            m_u_mark_source = value;
        }
        void set_opt_bid(const opt_bid& value)  {
            m_opt_bid = value;
        }
        void set_opt_ask(const opt_ask& value)  {
            m_opt_ask = value;
        }
        void set_opt_mid_mark(const opt_mid_mark& value)  {
            m_opt_mid_mark = value;
        }
        void set_opt_vol_mark(const opt_vol_mark& value)  {
            m_opt_vol_mark = value;
        }
        void set_u_opn_mark(const u_opn_mark& value)  {
            m_u_opn_mark = value;
        }
        void set_opt_opn_vol_mark(const opt_opn_vol_mark& value)  {
            m_opt_opn_vol_mark = value;
        }
        void set_opt_opn_mid_mark(const opt_opn_mid_mark& value)  {
            m_opt_opn_mid_mark = value;
        }
        void set_opt_opn_clr_mark(const opt_opn_clr_mark& value)  {
            m_opt_opn_clr_mark = value;
        }
        void set_opt_opn_pos_prv(const opt_opn_pos_prv& value)  {
            m_opt_opn_pos_prv = value;
        }
        void set_opt_opn_pos_clr(const opt_opn_pos_clr& value)  {
            m_opt_opn_pos_clr = value;
        }
        void set_opt_opn_pos(const opt_opn_pos& value)  {
            m_opt_opn_pos = value;
        }
        void set_opt_opn_pos_src(const opt_opn_pos_src& value)  {
            m_opt_opn_pos_src = value;
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
        void set_edge_opened(const edge_opened& value)  {
            m_edge_opened = value;
        }
        void set_edge_closed(const edge_closed& value)  {
            m_edge_closed = value;
        }
        void set_trd_delta(const trd_delta& value)  {
            m_trd_delta = value;
        }
        void set_trd_gamma(const trd_gamma& value)  {
            m_trd_gamma = value;
        }
        void set_trd_delta_mny(const trd_delta_mny& value)  {
            m_trd_delta_mny = value;
        }
        void set_opt_mny_bot(const opt_mny_bot& value)  {
            m_opt_mny_bot = value;
        }
        void set_opt_mny_sld(const opt_mny_sld& value)  {
            m_opt_mny_sld = value;
        }
        void set_day_pnl(const day_pnl& value)  {
            m_day_pnl = value;
        }
        void set_dn_day_pnl(const dn_day_pnl& value)  {
            m_dn_day_pnl = value;
        }
        void set_opn_pnl_mid_mark(const opn_pnl_mid_mark& value)  {
            m_opn_pnl_mid_mark = value;
        }
        void set_opn_pnl_vol_mark(const opn_pnl_vol_mark& value)  {
            m_opn_pnl_vol_mark = value;
        }
        void set_opn_pnl_clr_mark(const opn_pnl_clr_mark& value)  {
            m_opn_pnl_clr_mark = value;
        }
        void set_cn_net_opn_pos(const cn_net_opn_pos& value)  {
            m_cn_net_opn_pos = value;
        }
        void set_cn_net_cur_pos(const cn_net_cur_pos& value)  {
            m_cn_net_cur_pos = value;
        }
        void set_cn_atm_equiv(const cn_atm_equiv& value)  {
            m_cn_atm_equiv = value;
        }
        void set_beta(const beta& value)  {
            m_beta = value;
        }
        void set_beta_source(const beta_source& value)  {
            m_beta_source = value;
        }
        void set_div_days(const div_days& value)  {
            m_div_days = value;
        }
        void set_hedge_delta_rule(const hedge_delta_rule& value)  {
            m_hedge_delta_rule = value;
        }
        void set_binary_days(const binary_days& value)  {
            m_binary_days = value;
        }
        void set_days(const days& value)  {
            m_days = value;
        }
        void set_years(const years& value)  {
            m_years = value;
        }
        void set_rate(const rate& value)  {
            m_rate = value;
        }
        void set_sdiv(const sdiv& value)  {
            m_sdiv = value;
        }
        void set_ddiv(const ddiv& value)  {
            m_ddiv = value;
        }
        void set_dadj(const dadj& value)  {
            m_dadj = value;
        }
        void set_atm_vol(const atm_vol& value)  {
            m_atm_vol = value;
        }
        void set_atm_vega(const atm_vega& value)  {
            m_atm_vega = value;
        }
        void set_smny(const smny& value)  {
            m_smny = value;
        }
        void set_i_vol(const i_vol& value)  {
            m_i_vol = value;
        }
        void set_i_vol_src(const i_vol_src& value)  {
            m_i_vol_src = value;
        }
        void set_de(const de& value)  {
            m_de = value;
        }
        void set_ga(const ga& value)  {
            m_ga = value;
        }
        void set_th(const th& value)  {
            m_th = value;
        }
        void set_ve(const ve& value)  {
            m_ve = value;
        }
        void set_rh(const rh& value)  {
            m_rh = value;
        }
        void set_ph(const ph& value)  {
            m_ph = value;
        }
        void set_vo(const vo& value)  {
            m_vo = value;
        }
        void set_va(const va& value)  {
            m_va = value;
        }
        void set_de_decay(const de_decay& value)  {
            m_de_decay = value;
        }
        void set_err(const err& value)  {
            m_err = value;
        }
        void set_ve_slope(const ve_slope& value)  {
            m_ve_slope = value;
        }
        void set_hedge_de(const hedge_de& value)  {
            m_hedge_de = value;
        }
        void set_hedge_ga(const hedge_ga& value)  {
            m_hedge_ga = value;
        }
        void set_sr_slope(const sr_slope& value)  {
            m_sr_slope = value;
        }
        void set_is_binary(const is_binary& value)  {
            m_is_binary = value;
        }
        void set_prem_ov_par(const prem_ov_par& value)  {
            m_prem_ov_par = value;
        }
        void set_xde(const xde& value)  {
            m_xde = value;
        }
        void set_lo_bound(const lo_bound& value)  {
            m_lo_bound = value;
        }
        void set_su90(const su90& value)  {
            m_su90 = value;
        }
        void set_sd90(const sd90& value)  {
            m_sd90 = value;
        }
        void set_su50(const su50& value)  {
            m_su50 = value;
        }
        void set_sd50(const sd50& value)  {
            m_sd50 = value;
        }
        void set_su15(const su15& value)  {
            m_su15 = value;
        }
        void set_sd15(const sd15& value)  {
            m_sd15 = value;
        }
        void set_su10(const su10& value)  {
            m_su10 = value;
        }
        void set_sd10(const sd10& value)  {
            m_sd10 = value;
        }
        void set_su06(const su06& value)  {
            m_su06 = value;
        }
        void set_sd08(const sd08& value)  {
            m_sd08 = value;
        }
        void set_su05(const su05& value)  {
            m_su05 = value;
        }
        void set_sd05(const sd05& value)  {
            m_sd05 = value;
        }
        void set_su1e(const su1e& value)  {
            m_su1e = value;
        }
        void set_sd1e(const sd1e& value)  {
            m_sd1e = value;
        }
        void set_su2e(const su2e& value)  {
            m_su2e = value;
        }
        void set_sd2e(const sd2e& value)  {
            m_sd2e = value;
        }
        void set_earn(const earn& value)  {
            m_earn = value;
        }
        void set_cash(const cash& value)  {
            m_cash = value;
        }
        void set_theo_model(const theo_model& value)  {
            m_theo_model = value;
        }
        void set_t_vol(const t_vol& value)  {
            m_t_vol = value;
        }
        void set_t_opx(const t_opx& value)  {
            m_t_opx = value;
        }
        void set_t_bopn_px(const t_bopn_px& value)  {
            m_t_bopn_px = value;
        }
        void set_t_sopn_px(const t_sopn_px& value)  {
            m_t_sopn_px = value;
        }
        void set_t_bcls_px(const t_bcls_px& value)  {
            m_t_bcls_px = value;
        }
        void set_t_scls_px(const t_scls_px& value)  {
            m_t_scls_px = value;
        }
        void set_t_de(const t_de& value)  {
            m_t_de = value;
        }
        void set_t_ga(const t_ga& value)  {
            m_t_ga = value;
        }
        void set_t_err(const t_err& value)  {
            m_t_err = value;
        }
        void set_theo_model2(const theo_model2& value)  {
            m_theo_model2 = value;
        }
        void set_t_vol2(const t_vol2& value)  {
            m_t_vol2 = value;
        }
        void set_t_opx2(const t_opx2& value)  {
            m_t_opx2 = value;
        }
        void set_t_err2(const t_err2& value)  {
            m_t_err2 = value;
        }
        void set_years_pr(const years_pr& value)  {
            m_years_pr = value;
        }
        void set_rate_pr(const rate_pr& value)  {
            m_rate_pr = value;
        }
        void set_sdiv_pr(const sdiv_pr& value)  {
            m_sdiv_pr = value;
        }
        void set_ddiv_pr(const ddiv_pr& value)  {
            m_ddiv_pr = value;
        }
        void set_i_vol_pr(const i_vol_pr& value)  {
            m_i_vol_pr = value;
        }
        void set_de_pr(const de_pr& value)  {
            m_de_pr = value;
        }
        void set_ga_pr(const ga_pr& value)  {
            m_ga_pr = value;
        }
        void set_th_pr(const th_pr& value)  {
            m_th_pr = value;
        }
        void set_ve_pr(const ve_pr& value)  {
            m_ve_pr = value;
        }
        void set_rh_pr(const rh_pr& value)  {
            m_rh_pr = value;
        }
        void set_ph_pr(const ph_pr& value)  {
            m_ph_pr = value;
        }
        void set_vo_pr(const vo_pr& value)  {
            m_vo_pr = value;
        }
        void set_va_pr(const va_pr& value)  {
            m_va_pr = value;
        }
        void set_err_pr(const err_pr& value)  {
            m_err_pr = value;
        }
        void set_ve_slope_pr(const ve_slope_pr& value)  {
            m_ve_slope_pr = value;
        }
        void set_hedge_de_pr(const hedge_de_pr& value)  {
            m_hedge_de_pr = value;
        }
        void set_t_vol_pr(const t_vol_pr& value)  {
            m_t_vol_pr = value;
        }
        void set_t_opx_pr(const t_opx_pr& value)  {
            m_t_opx_pr = value;
        }
        void set_t_de_pr(const t_de_pr& value)  {
            m_t_de_pr = value;
        }
        void set_t_vol_pr2(const t_vol_pr2& value)  {
            m_t_vol_pr2 = value;
        }
        void set_t_opx_pr2(const t_opx_pr2& value)  {
            m_t_opx_pr2 = value;
        }
        void set_t_de_pr2(const t_de_pr2& value)  {
            m_t_de_pr2 = value;
        }
        void set_xde_pr(const xde_pr& value)  {
            m_xde_pr = value;
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
        void set_opn_pnl_sv(const opn_pnl_sv& value)  {
            m_opn_pnl_sv = value;
        }
        void set_opn_pnl_err(const opn_pnl_err& value)  {
            m_opn_pnl_err = value;
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
        void set_mark_err_codes(const mark_err_codes& value)  {
            m_mark_err_codes = value;
        }
        void set_ex_value(const ex_value& value)  {
            m_ex_value = value;
        }
        void set_risk_alert(const risk_alert& value)  {
            m_risk_alert = value;
        }
        void set_num_executions(const num_executions& value)  {
            m_num_executions = value;
        }
        void set_max_exec_dttm(const max_exec_dttm& value)  {
            m_max_exec_dttm = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionPositionRecordV5::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const risk_server_code & value) {
            set_risk_server_code(value);
        }
        void set(const agg_group & value) {
            set_agg_group(value);
        }
        void set(const fkey & value) {
            set_fkey(value);
        }
        void set(const ticker & value) {
            set_ticker(value);
        }
        void set(const ex_type & value) {
            set_ex_type(value);
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
        void set(const option_type & value) {
            set_option_type(value);
        }
        void set(const cash_on_ex & value) {
            set_cash_on_ex(value);
        }
        void set(const strike_ratio & value) {
            set_strike_ratio(value);
        }
        void set(const u_prc_ratio & value) {
            set_u_prc_ratio(value);
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
        void set(const price_format & value) {
            set_price_format(value);
        }
        void set(const u_price_format & value) {
            set_u_price_format(value);
        }
        void set(const u_prc & value) {
            set_u_prc(value);
        }
        void set(const u_bid & value) {
            set_u_bid(value);
        }
        void set(const u_ask & value) {
            set_u_ask(value);
        }
        void set(const u_mark & value) {
            set_u_mark(value);
        }
        void set(const u_mark_source & value) {
            set_u_mark_source(value);
        }
        void set(const opt_bid & value) {
            set_opt_bid(value);
        }
        void set(const opt_ask & value) {
            set_opt_ask(value);
        }
        void set(const opt_mid_mark & value) {
            set_opt_mid_mark(value);
        }
        void set(const opt_vol_mark & value) {
            set_opt_vol_mark(value);
        }
        void set(const u_opn_mark & value) {
            set_u_opn_mark(value);
        }
        void set(const opt_opn_vol_mark & value) {
            set_opt_opn_vol_mark(value);
        }
        void set(const opt_opn_mid_mark & value) {
            set_opt_opn_mid_mark(value);
        }
        void set(const opt_opn_clr_mark & value) {
            set_opt_opn_clr_mark(value);
        }
        void set(const opt_opn_pos_prv & value) {
            set_opt_opn_pos_prv(value);
        }
        void set(const opt_opn_pos_clr & value) {
            set_opt_opn_pos_clr(value);
        }
        void set(const opt_opn_pos & value) {
            set_opt_opn_pos(value);
        }
        void set(const opt_opn_pos_src & value) {
            set_opt_opn_pos_src(value);
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
        void set(const edge_opened & value) {
            set_edge_opened(value);
        }
        void set(const edge_closed & value) {
            set_edge_closed(value);
        }
        void set(const trd_delta & value) {
            set_trd_delta(value);
        }
        void set(const trd_gamma & value) {
            set_trd_gamma(value);
        }
        void set(const trd_delta_mny & value) {
            set_trd_delta_mny(value);
        }
        void set(const opt_mny_bot & value) {
            set_opt_mny_bot(value);
        }
        void set(const opt_mny_sld & value) {
            set_opt_mny_sld(value);
        }
        void set(const day_pnl & value) {
            set_day_pnl(value);
        }
        void set(const dn_day_pnl & value) {
            set_dn_day_pnl(value);
        }
        void set(const opn_pnl_mid_mark & value) {
            set_opn_pnl_mid_mark(value);
        }
        void set(const opn_pnl_vol_mark & value) {
            set_opn_pnl_vol_mark(value);
        }
        void set(const opn_pnl_clr_mark & value) {
            set_opn_pnl_clr_mark(value);
        }
        void set(const cn_net_opn_pos & value) {
            set_cn_net_opn_pos(value);
        }
        void set(const cn_net_cur_pos & value) {
            set_cn_net_cur_pos(value);
        }
        void set(const cn_atm_equiv & value) {
            set_cn_atm_equiv(value);
        }
        void set(const beta & value) {
            set_beta(value);
        }
        void set(const beta_source & value) {
            set_beta_source(value);
        }
        void set(const div_days & value) {
            set_div_days(value);
        }
        void set(const hedge_delta_rule & value) {
            set_hedge_delta_rule(value);
        }
        void set(const binary_days & value) {
            set_binary_days(value);
        }
        void set(const days & value) {
            set_days(value);
        }
        void set(const years & value) {
            set_years(value);
        }
        void set(const rate & value) {
            set_rate(value);
        }
        void set(const sdiv & value) {
            set_sdiv(value);
        }
        void set(const ddiv & value) {
            set_ddiv(value);
        }
        void set(const dadj & value) {
            set_dadj(value);
        }
        void set(const atm_vol & value) {
            set_atm_vol(value);
        }
        void set(const atm_vega & value) {
            set_atm_vega(value);
        }
        void set(const smny & value) {
            set_smny(value);
        }
        void set(const i_vol & value) {
            set_i_vol(value);
        }
        void set(const i_vol_src & value) {
            set_i_vol_src(value);
        }
        void set(const de & value) {
            set_de(value);
        }
        void set(const ga & value) {
            set_ga(value);
        }
        void set(const th & value) {
            set_th(value);
        }
        void set(const ve & value) {
            set_ve(value);
        }
        void set(const rh & value) {
            set_rh(value);
        }
        void set(const ph & value) {
            set_ph(value);
        }
        void set(const vo & value) {
            set_vo(value);
        }
        void set(const va & value) {
            set_va(value);
        }
        void set(const de_decay & value) {
            set_de_decay(value);
        }
        void set(const err & value) {
            set_err(value);
        }
        void set(const ve_slope & value) {
            set_ve_slope(value);
        }
        void set(const hedge_de & value) {
            set_hedge_de(value);
        }
        void set(const hedge_ga & value) {
            set_hedge_ga(value);
        }
        void set(const sr_slope & value) {
            set_sr_slope(value);
        }
        void set(const is_binary & value) {
            set_is_binary(value);
        }
        void set(const prem_ov_par & value) {
            set_prem_ov_par(value);
        }
        void set(const xde & value) {
            set_xde(value);
        }
        void set(const lo_bound & value) {
            set_lo_bound(value);
        }
        void set(const su90 & value) {
            set_su90(value);
        }
        void set(const sd90 & value) {
            set_sd90(value);
        }
        void set(const su50 & value) {
            set_su50(value);
        }
        void set(const sd50 & value) {
            set_sd50(value);
        }
        void set(const su15 & value) {
            set_su15(value);
        }
        void set(const sd15 & value) {
            set_sd15(value);
        }
        void set(const su10 & value) {
            set_su10(value);
        }
        void set(const sd10 & value) {
            set_sd10(value);
        }
        void set(const su06 & value) {
            set_su06(value);
        }
        void set(const sd08 & value) {
            set_sd08(value);
        }
        void set(const su05 & value) {
            set_su05(value);
        }
        void set(const sd05 & value) {
            set_sd05(value);
        }
        void set(const su1e & value) {
            set_su1e(value);
        }
        void set(const sd1e & value) {
            set_sd1e(value);
        }
        void set(const su2e & value) {
            set_su2e(value);
        }
        void set(const sd2e & value) {
            set_sd2e(value);
        }
        void set(const earn & value) {
            set_earn(value);
        }
        void set(const cash & value) {
            set_cash(value);
        }
        void set(const theo_model & value) {
            set_theo_model(value);
        }
        void set(const t_vol & value) {
            set_t_vol(value);
        }
        void set(const t_opx & value) {
            set_t_opx(value);
        }
        void set(const t_bopn_px & value) {
            set_t_bopn_px(value);
        }
        void set(const t_sopn_px & value) {
            set_t_sopn_px(value);
        }
        void set(const t_bcls_px & value) {
            set_t_bcls_px(value);
        }
        void set(const t_scls_px & value) {
            set_t_scls_px(value);
        }
        void set(const t_de & value) {
            set_t_de(value);
        }
        void set(const t_ga & value) {
            set_t_ga(value);
        }
        void set(const t_err & value) {
            set_t_err(value);
        }
        void set(const theo_model2 & value) {
            set_theo_model2(value);
        }
        void set(const t_vol2 & value) {
            set_t_vol2(value);
        }
        void set(const t_opx2 & value) {
            set_t_opx2(value);
        }
        void set(const t_err2 & value) {
            set_t_err2(value);
        }
        void set(const years_pr & value) {
            set_years_pr(value);
        }
        void set(const rate_pr & value) {
            set_rate_pr(value);
        }
        void set(const sdiv_pr & value) {
            set_sdiv_pr(value);
        }
        void set(const ddiv_pr & value) {
            set_ddiv_pr(value);
        }
        void set(const i_vol_pr & value) {
            set_i_vol_pr(value);
        }
        void set(const de_pr & value) {
            set_de_pr(value);
        }
        void set(const ga_pr & value) {
            set_ga_pr(value);
        }
        void set(const th_pr & value) {
            set_th_pr(value);
        }
        void set(const ve_pr & value) {
            set_ve_pr(value);
        }
        void set(const rh_pr & value) {
            set_rh_pr(value);
        }
        void set(const ph_pr & value) {
            set_ph_pr(value);
        }
        void set(const vo_pr & value) {
            set_vo_pr(value);
        }
        void set(const va_pr & value) {
            set_va_pr(value);
        }
        void set(const err_pr & value) {
            set_err_pr(value);
        }
        void set(const ve_slope_pr & value) {
            set_ve_slope_pr(value);
        }
        void set(const hedge_de_pr & value) {
            set_hedge_de_pr(value);
        }
        void set(const t_vol_pr & value) {
            set_t_vol_pr(value);
        }
        void set(const t_opx_pr & value) {
            set_t_opx_pr(value);
        }
        void set(const t_de_pr & value) {
            set_t_de_pr(value);
        }
        void set(const t_vol_pr2 & value) {
            set_t_vol_pr2(value);
        }
        void set(const t_opx_pr2 & value) {
            set_t_opx_pr2(value);
        }
        void set(const t_de_pr2 & value) {
            set_t_de_pr2(value);
        }
        void set(const xde_pr & value) {
            set_xde_pr(value);
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
        void set(const opn_pnl_sv & value) {
            set_opn_pnl_sv(value);
        }
        void set(const opn_pnl_err & value) {
            set_opn_pnl_err(value);
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
        void set(const mark_err_codes & value) {
            set_mark_err_codes(value);
        }
        void set(const ex_value & value) {
            set_ex_value(value);
        }
        void set(const risk_alert & value) {
            set_risk_alert(value);
        }
        void set(const num_executions & value) {
            set_num_executions(value);
        }
        void set(const max_exec_dttm & value) {
            set_max_exec_dttm(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const OptionPositionRecordV5 & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_risk_server_code);
            set(value.m_agg_group);
            set(value.m_fkey);
            set(value.m_ticker);
            set(value.m_ex_type);
            set(value.m_multihedge);
            set(value.m_multihedge_source);
            set(value.m_multihedge_pvratio);
            set(value.m_option_type);
            set(value.m_cash_on_ex);
            set(value.m_strike_ratio);
            set(value.m_u_prc_ratio);
            set(value.m_underliers_per_cn);
            set(value.m_underlier_type);
            set(value.m_tick_value);
            set(value.m_point_value);
            set(value.m_point_currency);
            set(value.m_price_format);
            set(value.m_u_price_format);
            set(value.m_u_prc);
            set(value.m_u_bid);
            set(value.m_u_ask);
            set(value.m_u_mark);
            set(value.m_u_mark_source);
            set(value.m_opt_bid);
            set(value.m_opt_ask);
            set(value.m_opt_mid_mark);
            set(value.m_opt_vol_mark);
            set(value.m_u_opn_mark);
            set(value.m_opt_opn_vol_mark);
            set(value.m_opt_opn_mid_mark);
            set(value.m_opt_opn_clr_mark);
            set(value.m_opt_opn_pos_prv);
            set(value.m_opt_opn_pos_clr);
            set(value.m_opt_opn_pos);
            set(value.m_opt_opn_pos_src);
            set(value.m_cn_bot);
            set(value.m_cn_sld);
            set(value.m_cn_opened);
            set(value.m_cn_closed);
            set(value.m_edge_opened);
            set(value.m_edge_closed);
            set(value.m_trd_delta);
            set(value.m_trd_gamma);
            set(value.m_trd_delta_mny);
            set(value.m_opt_mny_bot);
            set(value.m_opt_mny_sld);
            set(value.m_day_pnl);
            set(value.m_dn_day_pnl);
            set(value.m_opn_pnl_mid_mark);
            set(value.m_opn_pnl_vol_mark);
            set(value.m_opn_pnl_clr_mark);
            set(value.m_cn_net_opn_pos);
            set(value.m_cn_net_cur_pos);
            set(value.m_cn_atm_equiv);
            set(value.m_beta);
            set(value.m_beta_source);
            set(value.m_div_days);
            set(value.m_hedge_delta_rule);
            set(value.m_binary_days);
            set(value.m_days);
            set(value.m_years);
            set(value.m_rate);
            set(value.m_sdiv);
            set(value.m_ddiv);
            set(value.m_dadj);
            set(value.m_atm_vol);
            set(value.m_atm_vega);
            set(value.m_smny);
            set(value.m_i_vol);
            set(value.m_i_vol_src);
            set(value.m_de);
            set(value.m_ga);
            set(value.m_th);
            set(value.m_ve);
            set(value.m_rh);
            set(value.m_ph);
            set(value.m_vo);
            set(value.m_va);
            set(value.m_de_decay);
            set(value.m_err);
            set(value.m_ve_slope);
            set(value.m_hedge_de);
            set(value.m_hedge_ga);
            set(value.m_sr_slope);
            set(value.m_is_binary);
            set(value.m_prem_ov_par);
            set(value.m_xde);
            set(value.m_lo_bound);
            set(value.m_su90);
            set(value.m_sd90);
            set(value.m_su50);
            set(value.m_sd50);
            set(value.m_su15);
            set(value.m_sd15);
            set(value.m_su10);
            set(value.m_sd10);
            set(value.m_su06);
            set(value.m_sd08);
            set(value.m_su05);
            set(value.m_sd05);
            set(value.m_su1e);
            set(value.m_sd1e);
            set(value.m_su2e);
            set(value.m_sd2e);
            set(value.m_earn);
            set(value.m_cash);
            set(value.m_theo_model);
            set(value.m_t_vol);
            set(value.m_t_opx);
            set(value.m_t_bopn_px);
            set(value.m_t_sopn_px);
            set(value.m_t_bcls_px);
            set(value.m_t_scls_px);
            set(value.m_t_de);
            set(value.m_t_ga);
            set(value.m_t_err);
            set(value.m_theo_model2);
            set(value.m_t_vol2);
            set(value.m_t_opx2);
            set(value.m_t_err2);
            set(value.m_years_pr);
            set(value.m_rate_pr);
            set(value.m_sdiv_pr);
            set(value.m_ddiv_pr);
            set(value.m_i_vol_pr);
            set(value.m_de_pr);
            set(value.m_ga_pr);
            set(value.m_th_pr);
            set(value.m_ve_pr);
            set(value.m_rh_pr);
            set(value.m_ph_pr);
            set(value.m_vo_pr);
            set(value.m_va_pr);
            set(value.m_err_pr);
            set(value.m_ve_slope_pr);
            set(value.m_hedge_de_pr);
            set(value.m_t_vol_pr);
            set(value.m_t_opx_pr);
            set(value.m_t_de_pr);
            set(value.m_t_vol_pr2);
            set(value.m_t_opx_pr2);
            set(value.m_t_de_pr2);
            set(value.m_xde_pr);
            set(value.m_margin_udn_vdn);
            set(value.m_margin_udn_vup);
            set(value.m_margin_uup_vdn);
            set(value.m_margin_uup_vup);
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
            set(value.m_opn_pnl_sv);
            set(value.m_opn_pnl_err);
            set(value.m_sh_bot_c0);
            set(value.m_sh_sld_c0);
            set(value.m_sh_mny_c0);
            set(value.m_sh_bot_c1);
            set(value.m_sh_sld_c1);
            set(value.m_sh_mny_c1);
            set(value.m_mark_err_codes);
            set(value.m_ex_value);
            set(value.m_risk_alert);
            set(value.m_num_executions);
            set(value.m_max_exec_dttm);
            set(value.m_timestamp);
        }

        OptionPositionRecordV5() {
            m__meta.set_message_type("OptionPositionRecordV5");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4805, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4805, length);
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
             *this = OptionPositionRecordV5{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeRiskServerCode() const {
            return !(m_risk_server_code.empty());
        }
        bool IncludeAggGroup() const {
            return !(m_agg_group.empty());
        }
        bool IncludeFkey() const {
            return (m_fkey.ByteSizeLong() > 0);
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeMultihedgeSource() const {
            return (m_multihedge_source.ByteSizeLong() > 0);
        }
        bool IncludeMultihedgePvratio() const {
            return !(m_multihedge_pvratio == 0.0);
        }
        bool IncludeCashOnEx() const {
            return !(m_cash_on_ex == 0.0);
        }
        bool IncludeStrikeRatio() const {
            return !(m_strike_ratio == 0.0);
        }
        bool IncludeUPrcRatio() const {
            return !(m_u_prc_ratio == 0.0);
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
        bool IncludeUPrc() const {
            return !(m_u_prc == 0.0);
        }
        bool IncludeUBid() const {
            return !(m_u_bid == 0.0);
        }
        bool IncludeUAsk() const {
            return !(m_u_ask == 0.0);
        }
        bool IncludeUMark() const {
            return !(m_u_mark == 0.0);
        }
        bool IncludeOptBid() const {
            return !(m_opt_bid == 0.0);
        }
        bool IncludeOptAsk() const {
            return !(m_opt_ask == 0.0);
        }
        bool IncludeOptMidMark() const {
            return !(m_opt_mid_mark == 0.0);
        }
        bool IncludeOptVolMark() const {
            return !(m_opt_vol_mark == 0.0);
        }
        bool IncludeUOpnMark() const {
            return !(m_u_opn_mark == 0.0);
        }
        bool IncludeOptOpnVolMark() const {
            return !(m_opt_opn_vol_mark == 0.0);
        }
        bool IncludeOptOpnMidMark() const {
            return !(m_opt_opn_mid_mark == 0.0);
        }
        bool IncludeOptOpnClrMark() const {
            return !(m_opt_opn_clr_mark == 0.0);
        }
        bool IncludeOptOpnPosPrv() const {
            return !(m_opt_opn_pos_prv == 0);
        }
        bool IncludeOptOpnPosClr() const {
            return !(m_opt_opn_pos_clr == 0);
        }
        bool IncludeOptOpnPos() const {
            return !(m_opt_opn_pos == 0);
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
        bool IncludeEdgeOpened() const {
            return !(m_edge_opened == 0.0);
        }
        bool IncludeEdgeClosed() const {
            return !(m_edge_closed == 0.0);
        }
        bool IncludeTrdDelta() const {
            return !(m_trd_delta == 0.0);
        }
        bool IncludeTrdGamma() const {
            return !(m_trd_gamma == 0.0);
        }
        bool IncludeTrdDeltaMny() const {
            return !(m_trd_delta_mny == 0.0);
        }
        bool IncludeOptMnyBot() const {
            return !(m_opt_mny_bot == 0.0);
        }
        bool IncludeOptMnySld() const {
            return !(m_opt_mny_sld == 0.0);
        }
        bool IncludeDayPnl() const {
            return !(m_day_pnl == 0.0);
        }
        bool IncludeDnDayPnl() const {
            return !(m_dn_day_pnl == 0.0);
        }
        bool IncludeOpnPnlMidMark() const {
            return !(m_opn_pnl_mid_mark == 0.0);
        }
        bool IncludeOpnPnlVolMark() const {
            return !(m_opn_pnl_vol_mark == 0.0);
        }
        bool IncludeOpnPnlClrMark() const {
            return !(m_opn_pnl_clr_mark == 0.0);
        }
        bool IncludeCnNetOpnPos() const {
            return !(m_cn_net_opn_pos == 0);
        }
        bool IncludeCnNetCurPos() const {
            return !(m_cn_net_cur_pos == 0);
        }
        bool IncludeCnAtmEquiv() const {
            return !(m_cn_atm_equiv == 0.0);
        }
        bool IncludeBeta() const {
            return !(m_beta == 0.0);
        }
        bool IncludeDivDays() const {
            return !(m_div_days == 0);
        }
        bool IncludeBinaryDays() const {
            return !(m_binary_days == 0.0);
        }
        bool IncludeDays() const {
            return !(m_days == 0);
        }
        bool IncludeYears() const {
            return !(m_years == 0.0);
        }
        bool IncludeRate() const {
            return !(m_rate == 0.0);
        }
        bool IncludeSdiv() const {
            return !(m_sdiv == 0.0);
        }
        bool IncludeDdiv() const {
            return !(m_ddiv == 0.0);
        }
        bool IncludeDadj() const {
            return !(m_dadj == 0.0);
        }
        bool IncludeAtmVol() const {
            return !(m_atm_vol == 0.0);
        }
        bool IncludeAtmVega() const {
            return !(m_atm_vega == 0.0);
        }
        bool IncludeSmny() const {
            return !(m_smny == 0.0);
        }
        bool IncludeIVol() const {
            return !(m_i_vol == 0.0);
        }
        bool IncludeDe() const {
            return !(m_de == 0.0);
        }
        bool IncludeGa() const {
            return !(m_ga == 0.0);
        }
        bool IncludeTh() const {
            return !(m_th == 0.0);
        }
        bool IncludeVe() const {
            return !(m_ve == 0.0);
        }
        bool IncludeRh() const {
            return !(m_rh == 0.0);
        }
        bool IncludePh() const {
            return !(m_ph == 0.0);
        }
        bool IncludeVo() const {
            return !(m_vo == 0.0);
        }
        bool IncludeVa() const {
            return !(m_va == 0.0);
        }
        bool IncludeDeDecay() const {
            return !(m_de_decay == 0.0);
        }
        bool IncludeErr() const {
            return !(m_err == 0);
        }
        bool IncludeVeSlope() const {
            return !(m_ve_slope == 0.0);
        }
        bool IncludeHedgeDe() const {
            return !(m_hedge_de == 0.0);
        }
        bool IncludeHedgeGa() const {
            return !(m_hedge_ga == 0.0);
        }
        bool IncludeSrSlope() const {
            return !(m_sr_slope == 0.0);
        }
        bool IncludePremOvPar() const {
            return !(m_prem_ov_par == 0.0);
        }
        bool IncludeXde() const {
            return !(m_xde == 0.0);
        }
        bool IncludeLoBound() const {
            return !(m_lo_bound == 0.0);
        }
        bool IncludeSu90() const {
            return !(m_su90 == 0.0);
        }
        bool IncludeSd90() const {
            return !(m_sd90 == 0.0);
        }
        bool IncludeSu50() const {
            return !(m_su50 == 0.0);
        }
        bool IncludeSd50() const {
            return !(m_sd50 == 0.0);
        }
        bool IncludeSu15() const {
            return !(m_su15 == 0.0);
        }
        bool IncludeSd15() const {
            return !(m_sd15 == 0.0);
        }
        bool IncludeSu10() const {
            return !(m_su10 == 0.0);
        }
        bool IncludeSd10() const {
            return !(m_sd10 == 0.0);
        }
        bool IncludeSu06() const {
            return !(m_su06 == 0.0);
        }
        bool IncludeSd08() const {
            return !(m_sd08 == 0.0);
        }
        bool IncludeSu05() const {
            return !(m_su05 == 0.0);
        }
        bool IncludeSd05() const {
            return !(m_sd05 == 0.0);
        }
        bool IncludeSu1e() const {
            return !(m_su1e == 0.0);
        }
        bool IncludeSd1e() const {
            return !(m_sd1e == 0.0);
        }
        bool IncludeSu2e() const {
            return !(m_su2e == 0.0);
        }
        bool IncludeSd2e() const {
            return !(m_sd2e == 0.0);
        }
        bool IncludeEarn() const {
            return !(m_earn == 0.0);
        }
        bool IncludeCash() const {
            return !(m_cash == 0.0);
        }
        bool IncludeTheoModel() const {
            return !(m_theo_model.empty());
        }
        bool IncludeTVol() const {
            return !(m_t_vol == 0.0);
        }
        bool IncludeTOpx() const {
            return !(m_t_opx == 0.0);
        }
        bool IncludeTBopnPx() const {
            return !(m_t_bopn_px == 0.0);
        }
        bool IncludeTSopnPx() const {
            return !(m_t_sopn_px == 0.0);
        }
        bool IncludeTBclsPx() const {
            return !(m_t_bcls_px == 0.0);
        }
        bool IncludeTSclsPx() const {
            return !(m_t_scls_px == 0.0);
        }
        bool IncludeTDe() const {
            return !(m_t_de == 0.0);
        }
        bool IncludeTGa() const {
            return !(m_t_ga == 0.0);
        }
        bool IncludeTErr() const {
            return !(m_t_err == 0);
        }
        bool IncludeTheoModel2() const {
            return !(m_theo_model2.empty());
        }
        bool IncludeTVol2() const {
            return !(m_t_vol2 == 0.0);
        }
        bool IncludeTOpx2() const {
            return !(m_t_opx2 == 0.0);
        }
        bool IncludeTErr2() const {
            return !(m_t_err2 == 0);
        }
        bool IncludeYearsPr() const {
            return !(m_years_pr == 0.0);
        }
        bool IncludeRatePr() const {
            return !(m_rate_pr == 0.0);
        }
        bool IncludeSdivPr() const {
            return !(m_sdiv_pr == 0.0);
        }
        bool IncludeDdivPr() const {
            return !(m_ddiv_pr == 0.0);
        }
        bool IncludeIVolPr() const {
            return !(m_i_vol_pr == 0.0);
        }
        bool IncludeDePr() const {
            return !(m_de_pr == 0.0);
        }
        bool IncludeGaPr() const {
            return !(m_ga_pr == 0.0);
        }
        bool IncludeThPr() const {
            return !(m_th_pr == 0.0);
        }
        bool IncludeVePr() const {
            return !(m_ve_pr == 0.0);
        }
        bool IncludeRhPr() const {
            return !(m_rh_pr == 0.0);
        }
        bool IncludePhPr() const {
            return !(m_ph_pr == 0.0);
        }
        bool IncludeVoPr() const {
            return !(m_vo_pr == 0.0);
        }
        bool IncludeVaPr() const {
            return !(m_va_pr == 0.0);
        }
        bool IncludeErrPr() const {
            return !(m_err_pr == 0);
        }
        bool IncludeVeSlopePr() const {
            return !(m_ve_slope_pr == 0.0);
        }
        bool IncludeHedgeDePr() const {
            return !(m_hedge_de_pr == 0.0);
        }
        bool IncludeTVolPr() const {
            return !(m_t_vol_pr == 0.0);
        }
        bool IncludeTOpxPr() const {
            return !(m_t_opx_pr == 0.0);
        }
        bool IncludeTDePr() const {
            return !(m_t_de_pr == 0.0);
        }
        bool IncludeTVolPr2() const {
            return !(m_t_vol_pr2 == 0.0);
        }
        bool IncludeTOpxPr2() const {
            return !(m_t_opx_pr2 == 0.0);
        }
        bool IncludeTDePr2() const {
            return !(m_t_de_pr2 == 0.0);
        }
        bool IncludeXdePr() const {
            return !(m_xde_pr == 0.0);
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
        bool IncludeOpnPnlSv() const {
            return !(m_opn_pnl_sv == 0.0);
        }
        bool IncludeOpnPnlErr() const {
            return !(m_opn_pnl_err == 0.0);
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
        bool IncludeExValue() const {
            return !(m_ex_value == 0.0);
        }
        bool IncludeNumExecutions() const {
            return !(m_num_executions == 0);
        }
        bool IncludeMaxExecDttm() const {
            return (m_max_exec_dttm.time_since_epoch().count() != 0);
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
            if ( IncludeRiskServerCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_risk_server_code);
            }
            if ( IncludeAggGroup()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_agg_group);
            }
            if ( IncludeFkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_fkey{};
                m_fkey.setCodecExpiryKey(expiryKeyLayout_fkey);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(109, expiryKeyLayout_fkey);
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(112, tickerKeyLayout_ticker);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>(m_ex_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Multihedge>(m_multihedge)));
            if ( IncludeMultihedgeSource()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_multihedge_source{};
                m_multihedge_source.setCodecTickerKey(tickerKeyLayout_multihedge_source);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(121, tickerKeyLayout_multihedge_source);
            }
            if ( IncludeMultihedgePvratio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_multihedge_pvratio);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptionType>(m_option_type)));
            if ( IncludeCashOnEx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_cash_on_ex);
            }
            if ( IncludeStrikeRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_strike_ratio);
            }
            if ( IncludeUPrcRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_u_prc_ratio);
            }
            if ( IncludeUnderliersPerCn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(139,m_underliers_per_cn);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>(m_underlier_type)));
            if ( IncludeTickValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(145,m_tick_value);
            }
            if ( IncludePointValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(148,m_point_value);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(157,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_u_price_format)));
            if ( IncludeUPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(160,m_u_prc);
            }
            if ( IncludeUBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(163,m_u_bid);
            }
            if ( IncludeUAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(166,m_u_ask);
            }
            if ( IncludeUMark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(169,m_u_mark);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(172,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UMarkSource>(m_u_mark_source)));
            if ( IncludeOptBid()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(175,m_opt_bid);
            }
            if ( IncludeOptAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_opt_ask);
            }
            if ( IncludeOptMidMark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(181,m_opt_mid_mark);
            }
            if ( IncludeOptVolMark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(184,m_opt_vol_mark);
            }
            if ( IncludeUOpnMark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(187,m_u_opn_mark);
            }
            if ( IncludeOptOpnVolMark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(190,m_opt_opn_vol_mark);
            }
            if ( IncludeOptOpnMidMark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(193,m_opt_opn_mid_mark);
            }
            if ( IncludeOptOpnClrMark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(196,m_opt_opn_clr_mark);
            }
            if ( IncludeOptOpnPosPrv()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(199,m_opt_opn_pos_prv);
            }
            if ( IncludeOptOpnPosClr()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(202,m_opt_opn_pos_clr);
            }
            if ( IncludeOptOpnPos()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(205,m_opt_opn_pos);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(208,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionSource>(m_opt_opn_pos_src)));
            if ( IncludeCnBot()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(211,m_cn_bot);
            }
            if ( IncludeCnSld()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(214,m_cn_sld);
            }
            if ( IncludeCnOpened()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(217,m_cn_opened);
            }
            if ( IncludeCnClosed()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(220,m_cn_closed);
            }
            if ( IncludeEdgeOpened()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(223,m_edge_opened);
            }
            if ( IncludeEdgeClosed()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(226,m_edge_closed);
            }
            if ( IncludeTrdDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(229,m_trd_delta);
            }
            if ( IncludeTrdGamma()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(232,m_trd_gamma);
            }
            if ( IncludeTrdDeltaMny()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(235,m_trd_delta_mny);
            }
            if ( IncludeOptMnyBot()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(238,m_opt_mny_bot);
            }
            if ( IncludeOptMnySld()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(241,m_opt_mny_sld);
            }
            if ( IncludeDayPnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(244,m_day_pnl);
            }
            if ( IncludeDnDayPnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(247,m_dn_day_pnl);
            }
            if ( IncludeOpnPnlMidMark()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(250,m_opn_pnl_mid_mark);
            }
            if ( IncludeOpnPnlVolMark()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(253,m_opn_pnl_vol_mark);
            }
            if ( IncludeOpnPnlClrMark()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(256,m_opn_pnl_clr_mark);
            }
            if ( IncludeCnNetOpnPos()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(259,m_cn_net_opn_pos);
            }
            if ( IncludeCnNetCurPos()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(262,m_cn_net_cur_pos);
            }
            if ( IncludeCnAtmEquiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(265,m_cn_atm_equiv);
            }
            if ( IncludeBeta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(268,m_beta);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(271,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BetaSource>(m_beta_source)));
            if ( IncludeDivDays()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(274,m_div_days);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(277,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeDeltaRule>(m_hedge_delta_rule)));
            if ( IncludeBinaryDays()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(280,m_binary_days);
            }
            if ( IncludeDays()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(283,m_days);
            }
            if ( IncludeYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(286,m_years);
            }
            if ( IncludeRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(289,m_rate);
            }
            if ( IncludeSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(292,m_sdiv);
            }
            if ( IncludeDdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(295,m_ddiv);
            }
            if ( IncludeDadj()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(298,m_dadj);
            }
            if ( IncludeAtmVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(301,m_atm_vol);
            }
            if ( IncludeAtmVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(304,m_atm_vega);
            }
            if ( IncludeSmny()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(606,m_smny);
            }
            if ( IncludeIVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(307,m_i_vol);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(310,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarkSource>(m_i_vol_src)));
            if ( IncludeDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(313,m_de);
            }
            if ( IncludeGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(316,m_ga);
            }
            if ( IncludeTh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(319,m_th);
            }
            if ( IncludeVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(322,m_ve);
            }
            if ( IncludeRh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(325,m_rh);
            }
            if ( IncludePh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(328,m_ph);
            }
            if ( IncludeVo()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(331,m_vo);
            }
            if ( IncludeVa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(334,m_va);
            }
            if ( IncludeDeDecay()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(337,m_de_decay);
            }
            if ( IncludeErr()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(340,m_err);
            }
            if ( IncludeVeSlope()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(343,m_ve_slope);
            }
            if ( IncludeHedgeDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(346,m_hedge_de);
            }
            if ( IncludeHedgeGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(349,m_hedge_ga);
            }
            if ( IncludeSrSlope()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(352,m_sr_slope);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(355,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_binary)));
            if ( IncludePremOvPar()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(358,m_prem_ov_par);
            }
            if ( IncludeXde()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(361,m_xde);
            }
            if ( IncludeLoBound()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(364,m_lo_bound);
            }
            if ( IncludeSu90()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(367,m_su90);
            }
            if ( IncludeSd90()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(370,m_sd90);
            }
            if ( IncludeSu50()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(373,m_su50);
            }
            if ( IncludeSd50()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(376,m_sd50);
            }
            if ( IncludeSu15()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(379,m_su15);
            }
            if ( IncludeSd15()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(382,m_sd15);
            }
            if ( IncludeSu10()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(385,m_su10);
            }
            if ( IncludeSd10()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(388,m_sd10);
            }
            if ( IncludeSu06()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(391,m_su06);
            }
            if ( IncludeSd08()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(394,m_sd08);
            }
            if ( IncludeSu05()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(397,m_su05);
            }
            if ( IncludeSd05()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(400,m_sd05);
            }
            if ( IncludeSu1e()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(403,m_su1e);
            }
            if ( IncludeSd1e()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(406,m_sd1e);
            }
            if ( IncludeSu2e()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(409,m_su2e);
            }
            if ( IncludeSd2e()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(412,m_sd2e);
            }
            if ( IncludeEarn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(415,m_earn);
            }
            if ( IncludeCash()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(418,m_cash);
            }
            if ( IncludeTheoModel()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(421,m_theo_model);
            }
            if ( IncludeTVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(424,m_t_vol);
            }
            if ( IncludeTOpx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(427,m_t_opx);
            }
            if ( IncludeTBopnPx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(430,m_t_bopn_px);
            }
            if ( IncludeTSopnPx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(433,m_t_sopn_px);
            }
            if ( IncludeTBclsPx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(436,m_t_bcls_px);
            }
            if ( IncludeTSclsPx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(439,m_t_scls_px);
            }
            if ( IncludeTDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(442,m_t_de);
            }
            if ( IncludeTGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(445,m_t_ga);
            }
            if ( IncludeTErr()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(448,m_t_err);
            }
            if ( IncludeTheoModel2()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(451,m_theo_model2);
            }
            if ( IncludeTVol2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(454,m_t_vol2);
            }
            if ( IncludeTOpx2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(457,m_t_opx2);
            }
            if ( IncludeTErr2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(460,m_t_err2);
            }
            if ( IncludeYearsPr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(463,m_years_pr);
            }
            if ( IncludeRatePr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(466,m_rate_pr);
            }
            if ( IncludeSdivPr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(469,m_sdiv_pr);
            }
            if ( IncludeDdivPr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(472,m_ddiv_pr);
            }
            if ( IncludeIVolPr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(475,m_i_vol_pr);
            }
            if ( IncludeDePr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(478,m_de_pr);
            }
            if ( IncludeGaPr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(481,m_ga_pr);
            }
            if ( IncludeThPr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(484,m_th_pr);
            }
            if ( IncludeVePr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(487,m_ve_pr);
            }
            if ( IncludeRhPr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(490,m_rh_pr);
            }
            if ( IncludePhPr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(493,m_ph_pr);
            }
            if ( IncludeVoPr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(496,m_vo_pr);
            }
            if ( IncludeVaPr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(499,m_va_pr);
            }
            if ( IncludeErrPr()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(502,m_err_pr);
            }
            if ( IncludeVeSlopePr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(505,m_ve_slope_pr);
            }
            if ( IncludeHedgeDePr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(508,m_hedge_de_pr);
            }
            if ( IncludeTVolPr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(511,m_t_vol_pr);
            }
            if ( IncludeTOpxPr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(514,m_t_opx_pr);
            }
            if ( IncludeTDePr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(517,m_t_de_pr);
            }
            if ( IncludeTVolPr2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(520,m_t_vol_pr2);
            }
            if ( IncludeTOpxPr2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(523,m_t_opx_pr2);
            }
            if ( IncludeTDePr2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(526,m_t_de_pr2);
            }
            if ( IncludeXdePr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(529,m_xde_pr);
            }
            if ( IncludeMarginUdnVdn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(602,m_margin_udn_vdn);
            }
            if ( IncludeMarginUdnVup()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(603,m_margin_udn_vup);
            }
            if ( IncludeMarginUupVdn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(604,m_margin_uup_vdn);
            }
            if ( IncludeMarginUupVup()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(605,m_margin_uup_vup);
            }
            if ( IncludeOpnPnlDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(532,m_opn_pnl_de);
            }
            if ( IncludeOpnPnlGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(535,m_opn_pnl_ga);
            }
            if ( IncludeOpnPnlTh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(538,m_opn_pnl_th);
            }
            if ( IncludeOpnPnlVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(541,m_opn_pnl_ve);
            }
            if ( IncludeOpnPnlVo()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(544,m_opn_pnl_vo);
            }
            if ( IncludeOpnPnlVa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(547,m_opn_pnl_va);
            }
            if ( IncludeOpnPnlSl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(550,m_opn_pnl_sl);
            }
            if ( IncludeOpnPnlRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(553,m_opn_pnl_rate);
            }
            if ( IncludeOpnPnlSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(556,m_opn_pnl_sdiv);
            }
            if ( IncludeOpnPnlDdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(559,m_opn_pnl_ddiv);
            }
            if ( IncludeOpnPnlSv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(562,m_opn_pnl_sv);
            }
            if ( IncludeOpnPnlErr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(565,m_opn_pnl_err);
            }
            if ( IncludeShBotC0()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(568,m_sh_bot_c0);
            }
            if ( IncludeShSldC0()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(571,m_sh_sld_c0);
            }
            if ( IncludeShMnyC0()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(574,m_sh_mny_c0);
            }
            if ( IncludeShBotC1()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(577,m_sh_bot_c1);
            }
            if ( IncludeShSldC1()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(580,m_sh_sld_c1);
            }
            if ( IncludeShMnyC1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(583,m_sh_mny_c1);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(586,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarkErrorCode>(m_mark_err_codes)));
            if ( IncludeExValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(589,m_ex_value);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(592,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlertCode>(m_risk_alert)));
            if ( IncludeNumExecutions()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(595,m_num_executions);
            }
            if ( IncludeMaxExecDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(598, m_max_exec_dttm);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(601, m_timestamp);
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
            if ( IncludeRiskServerCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_risk_server_code));
            }
            if ( IncludeAggGroup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_agg_group));
            }
            if ( IncludeFkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_fkey{};
                m_fkey.setCodecExpiryKey(expiryKeyLayout_fkey);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 109, expiryKeyLayout_fkey);
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 112, tickerKeyLayout_ticker);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>(m_ex_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Multihedge>(m_multihedge)));
            if ( IncludeMultihedgeSource()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_multihedge_source{};
                m_multihedge_source.setCodecTickerKey(tickerKeyLayout_multihedge_source);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 121, tickerKeyLayout_multihedge_source);
            }
            if ( IncludeMultihedgePvratio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_multihedge_pvratio);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptionType>(m_option_type)));
            if ( IncludeCashOnEx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_cash_on_ex);
            }
            if ( IncludeStrikeRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_strike_ratio);
            }
            if ( IncludeUPrcRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_u_prc_ratio);
            }
            if ( IncludeUnderliersPerCn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,139,m_underliers_per_cn);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>(m_underlier_type)));
            if ( IncludeTickValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,145,m_tick_value);
            }
            if ( IncludePointValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,148,m_point_value);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,157,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_u_price_format)));
            if ( IncludeUPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,160,m_u_prc);
            }
            if ( IncludeUBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,163,m_u_bid);
            }
            if ( IncludeUAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,166,m_u_ask);
            }
            if ( IncludeUMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,169,m_u_mark);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,172,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UMarkSource>(m_u_mark_source)));
            if ( IncludeOptBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,175,m_opt_bid);
            }
            if ( IncludeOptAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_opt_ask);
            }
            if ( IncludeOptMidMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,181,m_opt_mid_mark);
            }
            if ( IncludeOptVolMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,184,m_opt_vol_mark);
            }
            if ( IncludeUOpnMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,187,m_u_opn_mark);
            }
            if ( IncludeOptOpnVolMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,190,m_opt_opn_vol_mark);
            }
            if ( IncludeOptOpnMidMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,193,m_opt_opn_mid_mark);
            }
            if ( IncludeOptOpnClrMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,196,m_opt_opn_clr_mark);
            }
            if ( IncludeOptOpnPosPrv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,199,m_opt_opn_pos_prv);
            }
            if ( IncludeOptOpnPosClr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,202,m_opt_opn_pos_clr);
            }
            if ( IncludeOptOpnPos()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,205,m_opt_opn_pos);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,208,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionSource>(m_opt_opn_pos_src)));
            if ( IncludeCnBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,211,m_cn_bot);
            }
            if ( IncludeCnSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,214,m_cn_sld);
            }
            if ( IncludeCnOpened()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,217,m_cn_opened);
            }
            if ( IncludeCnClosed()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,220,m_cn_closed);
            }
            if ( IncludeEdgeOpened()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,223,m_edge_opened);
            }
            if ( IncludeEdgeClosed()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,226,m_edge_closed);
            }
            if ( IncludeTrdDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,229,m_trd_delta);
            }
            if ( IncludeTrdGamma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,232,m_trd_gamma);
            }
            if ( IncludeTrdDeltaMny()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,235,m_trd_delta_mny);
            }
            if ( IncludeOptMnyBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,238,m_opt_mny_bot);
            }
            if ( IncludeOptMnySld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,241,m_opt_mny_sld);
            }
            if ( IncludeDayPnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,244,m_day_pnl);
            }
            if ( IncludeDnDayPnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,247,m_dn_day_pnl);
            }
            if ( IncludeOpnPnlMidMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,250,m_opn_pnl_mid_mark);
            }
            if ( IncludeOpnPnlVolMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,253,m_opn_pnl_vol_mark);
            }
            if ( IncludeOpnPnlClrMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,256,m_opn_pnl_clr_mark);
            }
            if ( IncludeCnNetOpnPos()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,259,m_cn_net_opn_pos);
            }
            if ( IncludeCnNetCurPos()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,262,m_cn_net_cur_pos);
            }
            if ( IncludeCnAtmEquiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,265,m_cn_atm_equiv);
            }
            if ( IncludeBeta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,268,m_beta);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,271,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BetaSource>(m_beta_source)));
            if ( IncludeDivDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,274,m_div_days);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,277,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeDeltaRule>(m_hedge_delta_rule)));
            if ( IncludeBinaryDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,280,m_binary_days);
            }
            if ( IncludeDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,283,m_days);
            }
            if ( IncludeYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,286,m_years);
            }
            if ( IncludeRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,289,m_rate);
            }
            if ( IncludeSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,292,m_sdiv);
            }
            if ( IncludeDdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,295,m_ddiv);
            }
            if ( IncludeDadj()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,298,m_dadj);
            }
            if ( IncludeAtmVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,301,m_atm_vol);
            }
            if ( IncludeAtmVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,304,m_atm_vega);
            }
            if ( IncludeSmny()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,606,m_smny);
            }
            if ( IncludeIVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,307,m_i_vol);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,310,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarkSource>(m_i_vol_src)));
            if ( IncludeDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,313,m_de);
            }
            if ( IncludeGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,316,m_ga);
            }
            if ( IncludeTh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,319,m_th);
            }
            if ( IncludeVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,322,m_ve);
            }
            if ( IncludeRh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,325,m_rh);
            }
            if ( IncludePh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,328,m_ph);
            }
            if ( IncludeVo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,331,m_vo);
            }
            if ( IncludeVa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,334,m_va);
            }
            if ( IncludeDeDecay()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,337,m_de_decay);
            }
            if ( IncludeErr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,340,m_err);
            }
            if ( IncludeVeSlope()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,343,m_ve_slope);
            }
            if ( IncludeHedgeDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,346,m_hedge_de);
            }
            if ( IncludeHedgeGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,349,m_hedge_ga);
            }
            if ( IncludeSrSlope()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,352,m_sr_slope);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,355,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_binary)));
            if ( IncludePremOvPar()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,358,m_prem_ov_par);
            }
            if ( IncludeXde()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,361,m_xde);
            }
            if ( IncludeLoBound()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,364,m_lo_bound);
            }
            if ( IncludeSu90()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,367,m_su90);
            }
            if ( IncludeSd90()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,370,m_sd90);
            }
            if ( IncludeSu50()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,373,m_su50);
            }
            if ( IncludeSd50()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,376,m_sd50);
            }
            if ( IncludeSu15()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,379,m_su15);
            }
            if ( IncludeSd15()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,382,m_sd15);
            }
            if ( IncludeSu10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,385,m_su10);
            }
            if ( IncludeSd10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,388,m_sd10);
            }
            if ( IncludeSu06()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,391,m_su06);
            }
            if ( IncludeSd08()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,394,m_sd08);
            }
            if ( IncludeSu05()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,397,m_su05);
            }
            if ( IncludeSd05()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,400,m_sd05);
            }
            if ( IncludeSu1e()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,403,m_su1e);
            }
            if ( IncludeSd1e()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,406,m_sd1e);
            }
            if ( IncludeSu2e()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,409,m_su2e);
            }
            if ( IncludeSd2e()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,412,m_sd2e);
            }
            if ( IncludeEarn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,415,m_earn);
            }
            if ( IncludeCash()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,418,m_cash);
            }
            if ( IncludeTheoModel()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,421,static_cast<string>(m_theo_model));
            }
            if ( IncludeTVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,424,m_t_vol);
            }
            if ( IncludeTOpx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,427,m_t_opx);
            }
            if ( IncludeTBopnPx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,430,m_t_bopn_px);
            }
            if ( IncludeTSopnPx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,433,m_t_sopn_px);
            }
            if ( IncludeTBclsPx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,436,m_t_bcls_px);
            }
            if ( IncludeTSclsPx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,439,m_t_scls_px);
            }
            if ( IncludeTDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,442,m_t_de);
            }
            if ( IncludeTGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,445,m_t_ga);
            }
            if ( IncludeTErr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,448,m_t_err);
            }
            if ( IncludeTheoModel2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,451,static_cast<string>(m_theo_model2));
            }
            if ( IncludeTVol2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,454,m_t_vol2);
            }
            if ( IncludeTOpx2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,457,m_t_opx2);
            }
            if ( IncludeTErr2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,460,m_t_err2);
            }
            if ( IncludeYearsPr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,463,m_years_pr);
            }
            if ( IncludeRatePr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,466,m_rate_pr);
            }
            if ( IncludeSdivPr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,469,m_sdiv_pr);
            }
            if ( IncludeDdivPr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,472,m_ddiv_pr);
            }
            if ( IncludeIVolPr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,475,m_i_vol_pr);
            }
            if ( IncludeDePr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,478,m_de_pr);
            }
            if ( IncludeGaPr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,481,m_ga_pr);
            }
            if ( IncludeThPr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,484,m_th_pr);
            }
            if ( IncludeVePr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,487,m_ve_pr);
            }
            if ( IncludeRhPr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,490,m_rh_pr);
            }
            if ( IncludePhPr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,493,m_ph_pr);
            }
            if ( IncludeVoPr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,496,m_vo_pr);
            }
            if ( IncludeVaPr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,499,m_va_pr);
            }
            if ( IncludeErrPr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,502,m_err_pr);
            }
            if ( IncludeVeSlopePr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,505,m_ve_slope_pr);
            }
            if ( IncludeHedgeDePr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,508,m_hedge_de_pr);
            }
            if ( IncludeTVolPr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,511,m_t_vol_pr);
            }
            if ( IncludeTOpxPr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,514,m_t_opx_pr);
            }
            if ( IncludeTDePr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,517,m_t_de_pr);
            }
            if ( IncludeTVolPr2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,520,m_t_vol_pr2);
            }
            if ( IncludeTOpxPr2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,523,m_t_opx_pr2);
            }
            if ( IncludeTDePr2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,526,m_t_de_pr2);
            }
            if ( IncludeXdePr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,529,m_xde_pr);
            }
            if ( IncludeMarginUdnVdn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,602,m_margin_udn_vdn);
            }
            if ( IncludeMarginUdnVup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,603,m_margin_udn_vup);
            }
            if ( IncludeMarginUupVdn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,604,m_margin_uup_vdn);
            }
            if ( IncludeMarginUupVup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,605,m_margin_uup_vup);
            }
            if ( IncludeOpnPnlDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,532,m_opn_pnl_de);
            }
            if ( IncludeOpnPnlGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,535,m_opn_pnl_ga);
            }
            if ( IncludeOpnPnlTh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,538,m_opn_pnl_th);
            }
            if ( IncludeOpnPnlVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,541,m_opn_pnl_ve);
            }
            if ( IncludeOpnPnlVo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,544,m_opn_pnl_vo);
            }
            if ( IncludeOpnPnlVa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,547,m_opn_pnl_va);
            }
            if ( IncludeOpnPnlSl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,550,m_opn_pnl_sl);
            }
            if ( IncludeOpnPnlRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,553,m_opn_pnl_rate);
            }
            if ( IncludeOpnPnlSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,556,m_opn_pnl_sdiv);
            }
            if ( IncludeOpnPnlDdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,559,m_opn_pnl_ddiv);
            }
            if ( IncludeOpnPnlSv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,562,m_opn_pnl_sv);
            }
            if ( IncludeOpnPnlErr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,565,m_opn_pnl_err);
            }
            if ( IncludeShBotC0()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,568,m_sh_bot_c0);
            }
            if ( IncludeShSldC0()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,571,m_sh_sld_c0);
            }
            if ( IncludeShMnyC0()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,574,m_sh_mny_c0);
            }
            if ( IncludeShBotC1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,577,m_sh_bot_c1);
            }
            if ( IncludeShSldC1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,580,m_sh_sld_c1);
            }
            if ( IncludeShMnyC1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,583,m_sh_mny_c1);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,586,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarkErrorCode>(m_mark_err_codes)));
            if ( IncludeExValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,589,m_ex_value);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,592,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlertCode>(m_risk_alert)));
            if ( IncludeNumExecutions()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,595,m_num_executions);
            }
            if ( IncludeMaxExecDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 598, m_max_exec_dttm);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 601, m_timestamp);
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
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_risk_server_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_agg_group = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_fkey.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ex_type = static_cast<spiderrock::protobuf::api::ExerciseType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_multihedge = static_cast<spiderrock::protobuf::api::Multihedge>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_multihedge_source.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_multihedge_pvratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_option_type = static_cast<spiderrock::protobuf::api::OptionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cash_on_ex = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_strike_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_prc_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_underliers_per_cn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 142: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_underlier_type = static_cast<spiderrock::protobuf::api::UnderlierType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_tick_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_point_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 151: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_point_currency = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 154: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_format = static_cast<spiderrock::protobuf::api::PriceFormat>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 157: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_u_price_format = static_cast<spiderrock::protobuf::api::PriceFormat>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_mark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 172: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_u_mark_source = static_cast<spiderrock::protobuf::api::UMarkSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opt_bid = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opt_ask = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_opt_mid_mark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_opt_vol_mark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_opn_mark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_opt_opn_vol_mark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_opt_opn_mid_mark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_opt_opn_clr_mark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_opt_opn_pos_prv = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_opt_opn_pos_clr = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_opt_opn_pos = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 208: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_opt_opn_pos_src = static_cast<spiderrock::protobuf::api::PositionSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cn_bot = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cn_sld = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cn_opened = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cn_closed = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_edge_opened = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 226: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_edge_closed = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 229: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_trd_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 232: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_trd_gamma = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_trd_delta_mny = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 238: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_opt_mny_bot = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 241: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_opt_mny_sld = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 244: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 247: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_dn_day_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 250: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_mid_mark = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 253: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_vol_mark = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 256: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_clr_mark = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 259: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cn_net_opn_pos = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 262: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cn_net_cur_pos = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 265: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cn_atm_equiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 268: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 271: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_beta_source = static_cast<spiderrock::protobuf::api::BetaSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 274: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_div_days = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 277: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_delta_rule = static_cast<spiderrock::protobuf::api::HedgeDeltaRule>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 280: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_binary_days = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 283: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_days = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 286: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 289: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 292: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 295: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ddiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 298: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_dadj = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 301: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 304: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 606: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_smny = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 307: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_i_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 310: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_i_vol_src = static_cast<spiderrock::protobuf::api::MarkSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 313: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 316: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 319: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_th = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 322: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 325: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 328: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ph = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 331: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vo = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 334: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 337: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_de_decay = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 340: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_err = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 343: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve_slope = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 346: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_hedge_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 349: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_hedge_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 352: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sr_slope = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 355: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_binary = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 358: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prem_ov_par = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 361: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_xde = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 364: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_lo_bound = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 367: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_su90 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 370: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sd90 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 373: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_su50 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 376: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sd50 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 379: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_su15 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 382: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sd15 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 385: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_su10 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 388: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sd10 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 391: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_su06 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 394: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sd08 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 397: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_su05 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 400: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sd05 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 403: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_su1e = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 406: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sd1e = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 409: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_su2e = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 412: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sd2e = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 415: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_earn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 418: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cash = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 421: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_theo_model = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 424: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 427: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_opx = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 430: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_bopn_px = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 433: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_sopn_px = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 436: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_bcls_px = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 439: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_scls_px = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 442: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 445: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 448: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_t_err = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 451: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_theo_model2 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 454: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_vol2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 457: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_opx2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 460: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_t_err2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 463: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_years_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 466: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rate_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 469: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sdiv_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 472: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ddiv_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 475: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_i_vol_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 478: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_de_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 481: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ga_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 484: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_th_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 487: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 490: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rh_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 493: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ph_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 496: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vo_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 499: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 502: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_err_pr = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 505: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve_slope_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 508: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_hedge_de_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 511: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_vol_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 514: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_opx_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 517: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_de_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 520: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_vol_pr2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 523: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_opx_pr2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 526: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_de_pr2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 529: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_xde_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 602: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_udn_vdn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 603: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_udn_vup = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 604: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_uup_vdn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 605: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_uup_vup = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 532: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 535: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 538: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_th = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 541: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 544: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_vo = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 547: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_va = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 550: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_sl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 553: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 556: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 559: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_ddiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 562: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_sv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 565: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_pnl_err = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 568: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_bot_c0 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 571: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_sld_c0 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 574: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sh_mny_c0 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 577: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_bot_c1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 580: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sh_sld_c1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 583: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sh_mny_c1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 586: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_mark_err_codes = static_cast<spiderrock::protobuf::api::MarkErrorCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 589: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ex_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 592: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_risk_alert = static_cast<spiderrock::protobuf::api::AlertCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 595: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_executions = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 598: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_max_exec_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 601: {
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

    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::_meta>() const { return OptionPositionRecordV5::_meta{ m__meta}; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::pkey>() const { return OptionPositionRecordV5::pkey{ m_pkey}; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::risk_server_code>() const { return m_risk_server_code; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::agg_group>() const { return m_agg_group; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::fkey>() const { return OptionPositionRecordV5::fkey{ m_fkey}; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::ticker>() const { return OptionPositionRecordV5::ticker{ m_ticker}; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::ex_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>( m_ex_type)); }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::multihedge>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Multihedge>( m_multihedge)); }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::multihedge_source>() const { return OptionPositionRecordV5::multihedge_source{ m_multihedge_source}; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::multihedge_pvratio>() const { return m_multihedge_pvratio; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::option_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptionType>( m_option_type)); }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::cash_on_ex>() const { return m_cash_on_ex; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::strike_ratio>() const { return m_strike_ratio; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::u_prc_ratio>() const { return m_u_prc_ratio; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::underliers_per_cn>() const { return m_underliers_per_cn; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::underlier_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>( m_underlier_type)); }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::tick_value>() const { return m_tick_value; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::point_value>() const { return m_point_value; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::point_currency>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>( m_point_currency)); }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::price_format>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>( m_price_format)); }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::u_price_format>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>( m_u_price_format)); }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::u_prc>() const { return m_u_prc; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::u_bid>() const { return m_u_bid; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::u_ask>() const { return m_u_ask; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::u_mark>() const { return m_u_mark; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::u_mark_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UMarkSource>( m_u_mark_source)); }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::opt_bid>() const { return m_opt_bid; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::opt_ask>() const { return m_opt_ask; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::opt_mid_mark>() const { return m_opt_mid_mark; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::opt_vol_mark>() const { return m_opt_vol_mark; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::u_opn_mark>() const { return m_u_opn_mark; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::opt_opn_vol_mark>() const { return m_opt_opn_vol_mark; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::opt_opn_mid_mark>() const { return m_opt_opn_mid_mark; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::opt_opn_clr_mark>() const { return m_opt_opn_clr_mark; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::opt_opn_pos_prv>() const { return m_opt_opn_pos_prv; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::opt_opn_pos_clr>() const { return m_opt_opn_pos_clr; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::opt_opn_pos>() const { return m_opt_opn_pos; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::opt_opn_pos_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionSource>( m_opt_opn_pos_src)); }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::cn_bot>() const { return m_cn_bot; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::cn_sld>() const { return m_cn_sld; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::cn_opened>() const { return m_cn_opened; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::cn_closed>() const { return m_cn_closed; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::edge_opened>() const { return m_edge_opened; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::edge_closed>() const { return m_edge_closed; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::trd_delta>() const { return m_trd_delta; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::trd_gamma>() const { return m_trd_gamma; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::trd_delta_mny>() const { return m_trd_delta_mny; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::opt_mny_bot>() const { return m_opt_mny_bot; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::opt_mny_sld>() const { return m_opt_mny_sld; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::day_pnl>() const { return m_day_pnl; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::dn_day_pnl>() const { return m_dn_day_pnl; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::opn_pnl_mid_mark>() const { return m_opn_pnl_mid_mark; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::opn_pnl_vol_mark>() const { return m_opn_pnl_vol_mark; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::opn_pnl_clr_mark>() const { return m_opn_pnl_clr_mark; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::cn_net_opn_pos>() const { return m_cn_net_opn_pos; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::cn_net_cur_pos>() const { return m_cn_net_cur_pos; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::cn_atm_equiv>() const { return m_cn_atm_equiv; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::beta>() const { return m_beta; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::beta_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BetaSource>( m_beta_source)); }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::div_days>() const { return m_div_days; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::hedge_delta_rule>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeDeltaRule>( m_hedge_delta_rule)); }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::binary_days>() const { return m_binary_days; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::days>() const { return m_days; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::years>() const { return m_years; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::rate>() const { return m_rate; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::sdiv>() const { return m_sdiv; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::ddiv>() const { return m_ddiv; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::dadj>() const { return m_dadj; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::atm_vol>() const { return m_atm_vol; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::atm_vega>() const { return m_atm_vega; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::smny>() const { return m_smny; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::i_vol>() const { return m_i_vol; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::i_vol_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarkSource>( m_i_vol_src)); }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::de>() const { return m_de; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::ga>() const { return m_ga; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::th>() const { return m_th; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::ve>() const { return m_ve; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::rh>() const { return m_rh; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::ph>() const { return m_ph; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::vo>() const { return m_vo; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::va>() const { return m_va; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::de_decay>() const { return m_de_decay; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::err>() const { return m_err; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::ve_slope>() const { return m_ve_slope; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::hedge_de>() const { return m_hedge_de; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::hedge_ga>() const { return m_hedge_ga; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::sr_slope>() const { return m_sr_slope; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::is_binary>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_binary)); }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::prem_ov_par>() const { return m_prem_ov_par; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::xde>() const { return m_xde; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::lo_bound>() const { return m_lo_bound; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::su90>() const { return m_su90; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::sd90>() const { return m_sd90; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::su50>() const { return m_su50; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::sd50>() const { return m_sd50; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::su15>() const { return m_su15; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::sd15>() const { return m_sd15; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::su10>() const { return m_su10; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::sd10>() const { return m_sd10; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::su06>() const { return m_su06; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::sd08>() const { return m_sd08; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::su05>() const { return m_su05; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::sd05>() const { return m_sd05; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::su1e>() const { return m_su1e; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::sd1e>() const { return m_sd1e; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::su2e>() const { return m_su2e; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::sd2e>() const { return m_sd2e; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::earn>() const { return m_earn; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::cash>() const { return m_cash; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::theo_model>() const { return m_theo_model; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::t_vol>() const { return m_t_vol; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::t_opx>() const { return m_t_opx; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::t_bopn_px>() const { return m_t_bopn_px; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::t_sopn_px>() const { return m_t_sopn_px; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::t_bcls_px>() const { return m_t_bcls_px; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::t_scls_px>() const { return m_t_scls_px; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::t_de>() const { return m_t_de; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::t_ga>() const { return m_t_ga; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::t_err>() const { return m_t_err; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::theo_model2>() const { return m_theo_model2; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::t_vol2>() const { return m_t_vol2; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::t_opx2>() const { return m_t_opx2; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::t_err2>() const { return m_t_err2; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::years_pr>() const { return m_years_pr; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::rate_pr>() const { return m_rate_pr; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::sdiv_pr>() const { return m_sdiv_pr; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::ddiv_pr>() const { return m_ddiv_pr; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::i_vol_pr>() const { return m_i_vol_pr; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::de_pr>() const { return m_de_pr; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::ga_pr>() const { return m_ga_pr; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::th_pr>() const { return m_th_pr; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::ve_pr>() const { return m_ve_pr; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::rh_pr>() const { return m_rh_pr; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::ph_pr>() const { return m_ph_pr; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::vo_pr>() const { return m_vo_pr; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::va_pr>() const { return m_va_pr; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::err_pr>() const { return m_err_pr; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::ve_slope_pr>() const { return m_ve_slope_pr; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::hedge_de_pr>() const { return m_hedge_de_pr; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::t_vol_pr>() const { return m_t_vol_pr; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::t_opx_pr>() const { return m_t_opx_pr; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::t_de_pr>() const { return m_t_de_pr; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::t_vol_pr2>() const { return m_t_vol_pr2; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::t_opx_pr2>() const { return m_t_opx_pr2; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::t_de_pr2>() const { return m_t_de_pr2; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::xde_pr>() const { return m_xde_pr; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::margin_udn_vdn>() const { return m_margin_udn_vdn; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::margin_udn_vup>() const { return m_margin_udn_vup; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::margin_uup_vdn>() const { return m_margin_uup_vdn; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::margin_uup_vup>() const { return m_margin_uup_vup; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::opn_pnl_de>() const { return m_opn_pnl_de; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::opn_pnl_ga>() const { return m_opn_pnl_ga; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::opn_pnl_th>() const { return m_opn_pnl_th; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::opn_pnl_ve>() const { return m_opn_pnl_ve; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::opn_pnl_vo>() const { return m_opn_pnl_vo; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::opn_pnl_va>() const { return m_opn_pnl_va; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::opn_pnl_sl>() const { return m_opn_pnl_sl; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::opn_pnl_rate>() const { return m_opn_pnl_rate; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::opn_pnl_sdiv>() const { return m_opn_pnl_sdiv; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::opn_pnl_ddiv>() const { return m_opn_pnl_ddiv; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::opn_pnl_sv>() const { return m_opn_pnl_sv; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::opn_pnl_err>() const { return m_opn_pnl_err; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::sh_bot_c0>() const { return m_sh_bot_c0; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::sh_sld_c0>() const { return m_sh_sld_c0; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::sh_mny_c0>() const { return m_sh_mny_c0; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::sh_bot_c1>() const { return m_sh_bot_c1; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::sh_sld_c1>() const { return m_sh_sld_c1; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::sh_mny_c1>() const { return m_sh_mny_c1; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::mark_err_codes>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarkErrorCode>( m_mark_err_codes)); }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::ex_value>() const { return m_ex_value; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::risk_alert>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlertCode>( m_risk_alert)); }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::num_executions>() const { return m_num_executions; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::max_exec_dttm>() const { return m_max_exec_dttm; }
    template<> inline const auto OptionPositionRecordV5::get<OptionPositionRecordV5::timestamp>() const { return m_timestamp; }
    template<> inline const auto OptionPositionRecordV5_PKey::get<OptionPositionRecordV5_PKey::okey>() const { return OptionPositionRecordV5_PKey::okey{m_okey}; }
    template<> inline const auto OptionPositionRecordV5_PKey::get<OptionPositionRecordV5_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto OptionPositionRecordV5_PKey::get<OptionPositionRecordV5_PKey::trade_date>() const { return OptionPositionRecordV5_PKey::trade_date{m_trade_date}; }
    template<> inline const auto OptionPositionRecordV5_PKey::get<OptionPositionRecordV5_PKey::risk_session>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskSession>(m_risk_session));}
    template<> inline const auto OptionPositionRecordV5_PKey::get<OptionPositionRecordV5_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const OptionPositionRecordV5_PKey& m) {
        o << "\"okey\":{" << m.get<OptionPositionRecordV5_PKey::okey>() << "}";
        o << ",\"accnt\":\"" << m.get<OptionPositionRecordV5_PKey::accnt>() << "\"";
        o << ",\"trade_date\":{" << m.get<OptionPositionRecordV5_PKey::trade_date>() << "}";
        o << ",\"risk_session\":" << (int64_t)m.get<OptionPositionRecordV5_PKey::risk_session>();
        o << ",\"client_firm\":\"" << m.get<OptionPositionRecordV5_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const OptionPositionRecordV5& m) {
        o << "\"_meta\":{" << m.get<OptionPositionRecordV5::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<OptionPositionRecordV5::pkey>() << "}";
        o << ",\"risk_server_code\":\"" << m.get<OptionPositionRecordV5::risk_server_code>() << "\"";
        o << ",\"agg_group\":\"" << m.get<OptionPositionRecordV5::agg_group>() << "\"";
        o << ",\"fkey\":{" << m.get<OptionPositionRecordV5::fkey>() << "}";
        o << ",\"ticker\":{" << m.get<OptionPositionRecordV5::ticker>() << "}";
        o << ",\"ex_type\":" << (int64_t)m.get<OptionPositionRecordV5::ex_type>();
        o << ",\"multihedge\":" << (int64_t)m.get<OptionPositionRecordV5::multihedge>();
        o << ",\"multihedge_source\":{" << m.get<OptionPositionRecordV5::multihedge_source>() << "}";
        o << ",\"multihedge_pvratio\":" << m.get<OptionPositionRecordV5::multihedge_pvratio>();
        o << ",\"option_type\":" << (int64_t)m.get<OptionPositionRecordV5::option_type>();
        o << ",\"cash_on_ex\":" << m.get<OptionPositionRecordV5::cash_on_ex>();
        o << ",\"strike_ratio\":" << m.get<OptionPositionRecordV5::strike_ratio>();
        o << ",\"u_prc_ratio\":" << m.get<OptionPositionRecordV5::u_prc_ratio>();
        o << ",\"underliers_per_cn\":" << m.get<OptionPositionRecordV5::underliers_per_cn>();
        o << ",\"underlier_type\":" << (int64_t)m.get<OptionPositionRecordV5::underlier_type>();
        o << ",\"tick_value\":" << m.get<OptionPositionRecordV5::tick_value>();
        o << ",\"point_value\":" << m.get<OptionPositionRecordV5::point_value>();
        o << ",\"point_currency\":" << (int64_t)m.get<OptionPositionRecordV5::point_currency>();
        o << ",\"price_format\":" << (int64_t)m.get<OptionPositionRecordV5::price_format>();
        o << ",\"u_price_format\":" << (int64_t)m.get<OptionPositionRecordV5::u_price_format>();
        o << ",\"u_prc\":" << m.get<OptionPositionRecordV5::u_prc>();
        o << ",\"u_bid\":" << m.get<OptionPositionRecordV5::u_bid>();
        o << ",\"u_ask\":" << m.get<OptionPositionRecordV5::u_ask>();
        o << ",\"u_mark\":" << m.get<OptionPositionRecordV5::u_mark>();
        o << ",\"u_mark_source\":" << (int64_t)m.get<OptionPositionRecordV5::u_mark_source>();
        o << ",\"opt_bid\":" << m.get<OptionPositionRecordV5::opt_bid>();
        o << ",\"opt_ask\":" << m.get<OptionPositionRecordV5::opt_ask>();
        o << ",\"opt_mid_mark\":" << m.get<OptionPositionRecordV5::opt_mid_mark>();
        o << ",\"opt_vol_mark\":" << m.get<OptionPositionRecordV5::opt_vol_mark>();
        o << ",\"u_opn_mark\":" << m.get<OptionPositionRecordV5::u_opn_mark>();
        o << ",\"opt_opn_vol_mark\":" << m.get<OptionPositionRecordV5::opt_opn_vol_mark>();
        o << ",\"opt_opn_mid_mark\":" << m.get<OptionPositionRecordV5::opt_opn_mid_mark>();
        o << ",\"opt_opn_clr_mark\":" << m.get<OptionPositionRecordV5::opt_opn_clr_mark>();
        o << ",\"opt_opn_pos_prv\":" << m.get<OptionPositionRecordV5::opt_opn_pos_prv>();
        o << ",\"opt_opn_pos_clr\":" << m.get<OptionPositionRecordV5::opt_opn_pos_clr>();
        o << ",\"opt_opn_pos\":" << m.get<OptionPositionRecordV5::opt_opn_pos>();
        o << ",\"opt_opn_pos_src\":" << (int64_t)m.get<OptionPositionRecordV5::opt_opn_pos_src>();
        o << ",\"cn_bot\":" << m.get<OptionPositionRecordV5::cn_bot>();
        o << ",\"cn_sld\":" << m.get<OptionPositionRecordV5::cn_sld>();
        o << ",\"cn_opened\":" << m.get<OptionPositionRecordV5::cn_opened>();
        o << ",\"cn_closed\":" << m.get<OptionPositionRecordV5::cn_closed>();
        o << ",\"edge_opened\":" << m.get<OptionPositionRecordV5::edge_opened>();
        o << ",\"edge_closed\":" << m.get<OptionPositionRecordV5::edge_closed>();
        o << ",\"trd_delta\":" << m.get<OptionPositionRecordV5::trd_delta>();
        o << ",\"trd_gamma\":" << m.get<OptionPositionRecordV5::trd_gamma>();
        o << ",\"trd_delta_mny\":" << m.get<OptionPositionRecordV5::trd_delta_mny>();
        o << ",\"opt_mny_bot\":" << m.get<OptionPositionRecordV5::opt_mny_bot>();
        o << ",\"opt_mny_sld\":" << m.get<OptionPositionRecordV5::opt_mny_sld>();
        o << ",\"day_pnl\":" << m.get<OptionPositionRecordV5::day_pnl>();
        o << ",\"dn_day_pnl\":" << m.get<OptionPositionRecordV5::dn_day_pnl>();
        o << ",\"opn_pnl_mid_mark\":" << m.get<OptionPositionRecordV5::opn_pnl_mid_mark>();
        o << ",\"opn_pnl_vol_mark\":" << m.get<OptionPositionRecordV5::opn_pnl_vol_mark>();
        o << ",\"opn_pnl_clr_mark\":" << m.get<OptionPositionRecordV5::opn_pnl_clr_mark>();
        o << ",\"cn_net_opn_pos\":" << m.get<OptionPositionRecordV5::cn_net_opn_pos>();
        o << ",\"cn_net_cur_pos\":" << m.get<OptionPositionRecordV5::cn_net_cur_pos>();
        o << ",\"cn_atm_equiv\":" << m.get<OptionPositionRecordV5::cn_atm_equiv>();
        o << ",\"beta\":" << m.get<OptionPositionRecordV5::beta>();
        o << ",\"beta_source\":" << (int64_t)m.get<OptionPositionRecordV5::beta_source>();
        o << ",\"div_days\":" << m.get<OptionPositionRecordV5::div_days>();
        o << ",\"hedge_delta_rule\":" << (int64_t)m.get<OptionPositionRecordV5::hedge_delta_rule>();
        o << ",\"binary_days\":" << m.get<OptionPositionRecordV5::binary_days>();
        o << ",\"days\":" << m.get<OptionPositionRecordV5::days>();
        o << ",\"years\":" << m.get<OptionPositionRecordV5::years>();
        o << ",\"rate\":" << m.get<OptionPositionRecordV5::rate>();
        o << ",\"sdiv\":" << m.get<OptionPositionRecordV5::sdiv>();
        o << ",\"ddiv\":" << m.get<OptionPositionRecordV5::ddiv>();
        o << ",\"dadj\":" << m.get<OptionPositionRecordV5::dadj>();
        o << ",\"atm_vol\":" << m.get<OptionPositionRecordV5::atm_vol>();
        o << ",\"atm_vega\":" << m.get<OptionPositionRecordV5::atm_vega>();
        o << ",\"smny\":" << m.get<OptionPositionRecordV5::smny>();
        o << ",\"i_vol\":" << m.get<OptionPositionRecordV5::i_vol>();
        o << ",\"i_vol_src\":" << (int64_t)m.get<OptionPositionRecordV5::i_vol_src>();
        o << ",\"de\":" << m.get<OptionPositionRecordV5::de>();
        o << ",\"ga\":" << m.get<OptionPositionRecordV5::ga>();
        o << ",\"th\":" << m.get<OptionPositionRecordV5::th>();
        o << ",\"ve\":" << m.get<OptionPositionRecordV5::ve>();
        o << ",\"rh\":" << m.get<OptionPositionRecordV5::rh>();
        o << ",\"ph\":" << m.get<OptionPositionRecordV5::ph>();
        o << ",\"vo\":" << m.get<OptionPositionRecordV5::vo>();
        o << ",\"va\":" << m.get<OptionPositionRecordV5::va>();
        o << ",\"de_decay\":" << m.get<OptionPositionRecordV5::de_decay>();
        o << ",\"err\":" << m.get<OptionPositionRecordV5::err>();
        o << ",\"ve_slope\":" << m.get<OptionPositionRecordV5::ve_slope>();
        o << ",\"hedge_de\":" << m.get<OptionPositionRecordV5::hedge_de>();
        o << ",\"hedge_ga\":" << m.get<OptionPositionRecordV5::hedge_ga>();
        o << ",\"sr_slope\":" << m.get<OptionPositionRecordV5::sr_slope>();
        o << ",\"is_binary\":" << (int64_t)m.get<OptionPositionRecordV5::is_binary>();
        o << ",\"prem_ov_par\":" << m.get<OptionPositionRecordV5::prem_ov_par>();
        o << ",\"xde\":" << m.get<OptionPositionRecordV5::xde>();
        o << ",\"lo_bound\":" << m.get<OptionPositionRecordV5::lo_bound>();
        o << ",\"su90\":" << m.get<OptionPositionRecordV5::su90>();
        o << ",\"sd90\":" << m.get<OptionPositionRecordV5::sd90>();
        o << ",\"su50\":" << m.get<OptionPositionRecordV5::su50>();
        o << ",\"sd50\":" << m.get<OptionPositionRecordV5::sd50>();
        o << ",\"su15\":" << m.get<OptionPositionRecordV5::su15>();
        o << ",\"sd15\":" << m.get<OptionPositionRecordV5::sd15>();
        o << ",\"su10\":" << m.get<OptionPositionRecordV5::su10>();
        o << ",\"sd10\":" << m.get<OptionPositionRecordV5::sd10>();
        o << ",\"su06\":" << m.get<OptionPositionRecordV5::su06>();
        o << ",\"sd08\":" << m.get<OptionPositionRecordV5::sd08>();
        o << ",\"su05\":" << m.get<OptionPositionRecordV5::su05>();
        o << ",\"sd05\":" << m.get<OptionPositionRecordV5::sd05>();
        o << ",\"su1e\":" << m.get<OptionPositionRecordV5::su1e>();
        o << ",\"sd1e\":" << m.get<OptionPositionRecordV5::sd1e>();
        o << ",\"su2e\":" << m.get<OptionPositionRecordV5::su2e>();
        o << ",\"sd2e\":" << m.get<OptionPositionRecordV5::sd2e>();
        o << ",\"earn\":" << m.get<OptionPositionRecordV5::earn>();
        o << ",\"cash\":" << m.get<OptionPositionRecordV5::cash>();
        o << ",\"theo_model\":\"" << m.get<OptionPositionRecordV5::theo_model>() << "\"";
        o << ",\"t_vol\":" << m.get<OptionPositionRecordV5::t_vol>();
        o << ",\"t_opx\":" << m.get<OptionPositionRecordV5::t_opx>();
        o << ",\"t_bopn_px\":" << m.get<OptionPositionRecordV5::t_bopn_px>();
        o << ",\"t_sopn_px\":" << m.get<OptionPositionRecordV5::t_sopn_px>();
        o << ",\"t_bcls_px\":" << m.get<OptionPositionRecordV5::t_bcls_px>();
        o << ",\"t_scls_px\":" << m.get<OptionPositionRecordV5::t_scls_px>();
        o << ",\"t_de\":" << m.get<OptionPositionRecordV5::t_de>();
        o << ",\"t_ga\":" << m.get<OptionPositionRecordV5::t_ga>();
        o << ",\"t_err\":" << m.get<OptionPositionRecordV5::t_err>();
        o << ",\"theo_model2\":\"" << m.get<OptionPositionRecordV5::theo_model2>() << "\"";
        o << ",\"t_vol2\":" << m.get<OptionPositionRecordV5::t_vol2>();
        o << ",\"t_opx2\":" << m.get<OptionPositionRecordV5::t_opx2>();
        o << ",\"t_err2\":" << m.get<OptionPositionRecordV5::t_err2>();
        o << ",\"years_pr\":" << m.get<OptionPositionRecordV5::years_pr>();
        o << ",\"rate_pr\":" << m.get<OptionPositionRecordV5::rate_pr>();
        o << ",\"sdiv_pr\":" << m.get<OptionPositionRecordV5::sdiv_pr>();
        o << ",\"ddiv_pr\":" << m.get<OptionPositionRecordV5::ddiv_pr>();
        o << ",\"i_vol_pr\":" << m.get<OptionPositionRecordV5::i_vol_pr>();
        o << ",\"de_pr\":" << m.get<OptionPositionRecordV5::de_pr>();
        o << ",\"ga_pr\":" << m.get<OptionPositionRecordV5::ga_pr>();
        o << ",\"th_pr\":" << m.get<OptionPositionRecordV5::th_pr>();
        o << ",\"ve_pr\":" << m.get<OptionPositionRecordV5::ve_pr>();
        o << ",\"rh_pr\":" << m.get<OptionPositionRecordV5::rh_pr>();
        o << ",\"ph_pr\":" << m.get<OptionPositionRecordV5::ph_pr>();
        o << ",\"vo_pr\":" << m.get<OptionPositionRecordV5::vo_pr>();
        o << ",\"va_pr\":" << m.get<OptionPositionRecordV5::va_pr>();
        o << ",\"err_pr\":" << m.get<OptionPositionRecordV5::err_pr>();
        o << ",\"ve_slope_pr\":" << m.get<OptionPositionRecordV5::ve_slope_pr>();
        o << ",\"hedge_de_pr\":" << m.get<OptionPositionRecordV5::hedge_de_pr>();
        o << ",\"t_vol_pr\":" << m.get<OptionPositionRecordV5::t_vol_pr>();
        o << ",\"t_opx_pr\":" << m.get<OptionPositionRecordV5::t_opx_pr>();
        o << ",\"t_de_pr\":" << m.get<OptionPositionRecordV5::t_de_pr>();
        o << ",\"t_vol_pr2\":" << m.get<OptionPositionRecordV5::t_vol_pr2>();
        o << ",\"t_opx_pr2\":" << m.get<OptionPositionRecordV5::t_opx_pr2>();
        o << ",\"t_de_pr2\":" << m.get<OptionPositionRecordV5::t_de_pr2>();
        o << ",\"xde_pr\":" << m.get<OptionPositionRecordV5::xde_pr>();
        o << ",\"margin_udn_vdn\":" << m.get<OptionPositionRecordV5::margin_udn_vdn>();
        o << ",\"margin_udn_vup\":" << m.get<OptionPositionRecordV5::margin_udn_vup>();
        o << ",\"margin_uup_vdn\":" << m.get<OptionPositionRecordV5::margin_uup_vdn>();
        o << ",\"margin_uup_vup\":" << m.get<OptionPositionRecordV5::margin_uup_vup>();
        o << ",\"opn_pnl_de\":" << m.get<OptionPositionRecordV5::opn_pnl_de>();
        o << ",\"opn_pnl_ga\":" << m.get<OptionPositionRecordV5::opn_pnl_ga>();
        o << ",\"opn_pnl_th\":" << m.get<OptionPositionRecordV5::opn_pnl_th>();
        o << ",\"opn_pnl_ve\":" << m.get<OptionPositionRecordV5::opn_pnl_ve>();
        o << ",\"opn_pnl_vo\":" << m.get<OptionPositionRecordV5::opn_pnl_vo>();
        o << ",\"opn_pnl_va\":" << m.get<OptionPositionRecordV5::opn_pnl_va>();
        o << ",\"opn_pnl_sl\":" << m.get<OptionPositionRecordV5::opn_pnl_sl>();
        o << ",\"opn_pnl_rate\":" << m.get<OptionPositionRecordV5::opn_pnl_rate>();
        o << ",\"opn_pnl_sdiv\":" << m.get<OptionPositionRecordV5::opn_pnl_sdiv>();
        o << ",\"opn_pnl_ddiv\":" << m.get<OptionPositionRecordV5::opn_pnl_ddiv>();
        o << ",\"opn_pnl_sv\":" << m.get<OptionPositionRecordV5::opn_pnl_sv>();
        o << ",\"opn_pnl_err\":" << m.get<OptionPositionRecordV5::opn_pnl_err>();
        o << ",\"sh_bot_c0\":" << m.get<OptionPositionRecordV5::sh_bot_c0>();
        o << ",\"sh_sld_c0\":" << m.get<OptionPositionRecordV5::sh_sld_c0>();
        o << ",\"sh_mny_c0\":" << m.get<OptionPositionRecordV5::sh_mny_c0>();
        o << ",\"sh_bot_c1\":" << m.get<OptionPositionRecordV5::sh_bot_c1>();
        o << ",\"sh_sld_c1\":" << m.get<OptionPositionRecordV5::sh_sld_c1>();
        o << ",\"sh_mny_c1\":" << m.get<OptionPositionRecordV5::sh_mny_c1>();
        o << ",\"mark_err_codes\":" << (int64_t)m.get<OptionPositionRecordV5::mark_err_codes>();
        o << ",\"ex_value\":" << m.get<OptionPositionRecordV5::ex_value>();
        o << ",\"risk_alert\":" << (int64_t)m.get<OptionPositionRecordV5::risk_alert>();
        o << ",\"num_executions\":" << m.get<OptionPositionRecordV5::num_executions>();
        {
            std::time_t tt = m.get<OptionPositionRecordV5::max_exec_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"max_exec_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<OptionPositionRecordV5::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}