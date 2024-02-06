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

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _fkey__GUARD__
    #define _fkey__GUARD__
    DECL_STRONG_TYPE(fkey, ExpiryKey);
    #endif//_fkey__GUARD__

    #ifndef _u_prc_driver_key__GUARD__
    #define _u_prc_driver_key__GUARD__
    DECL_STRONG_TYPE(u_prc_driver_key, ExpiryKey);
    #endif//_u_prc_driver_key__GUARD__

    #ifndef _u_prc_driver_type__GUARD__
    #define _u_prc_driver_type__GUARD__
    DECL_STRONG_TYPE(u_prc_driver_type, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_u_prc_driver_type__GUARD__

    #ifndef _u_prc_driver__GUARD__
    #define _u_prc_driver__GUARD__
    DECL_STRONG_TYPE(u_prc_driver, double);
    #endif//_u_prc_driver__GUARD__

    #ifndef _u_prc__double__GUARD__
    #define _u_prc__double__GUARD__
    DECL_STRONG_TYPE(u_prc__double, double);
    #endif//_u_prc__double__GUARD__

    #ifndef _u_bid__GUARD__
    #define _u_bid__GUARD__
    DECL_STRONG_TYPE(u_bid, double);
    #endif//_u_bid__GUARD__

    #ifndef _u_ask__GUARD__
    #define _u_ask__GUARD__
    DECL_STRONG_TYPE(u_ask, double);
    #endif//_u_ask__GUARD__

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

    #ifndef _ddiv__GUARD__
    #define _ddiv__GUARD__
    DECL_STRONG_TYPE(ddiv, float);
    #endif//_ddiv__GUARD__

    #ifndef _ddiv_pv__GUARD__
    #define _ddiv_pv__GUARD__
    DECL_STRONG_TYPE(ddiv_pv, float);
    #endif//_ddiv_pv__GUARD__

    #ifndef _ddiv_source__GUARD__
    #define _ddiv_source__GUARD__
    DECL_STRONG_TYPE(ddiv_source, spiderrock::protobuf::api::DDivSource);
    #endif//_ddiv_source__GUARD__

    #ifndef _symbol_ratio__GUARD__
    #define _symbol_ratio__GUARD__
    DECL_STRONG_TYPE(symbol_ratio, float);
    #endif//_symbol_ratio__GUARD__

    #ifndef _ex_type__GUARD__
    #define _ex_type__GUARD__
    DECL_STRONG_TYPE(ex_type, spiderrock::protobuf::api::ExerciseType);
    #endif//_ex_type__GUARD__

    #ifndef _model_type__GUARD__
    #define _model_type__GUARD__
    DECL_STRONG_TYPE(model_type, spiderrock::protobuf::api::CalcModelType);
    #endif//_model_type__GUARD__

    #ifndef _price_type__CalcPriceType__GUARD__
    #define _price_type__CalcPriceType__GUARD__
    DECL_STRONG_TYPE(price_type__CalcPriceType, spiderrock::protobuf::api::CalcPriceType);
    #endif//_price_type__CalcPriceType__GUARD__

    #ifndef _earn_cnt__GUARD__
    #define _earn_cnt__GUARD__
    DECL_STRONG_TYPE(earn_cnt, float);
    #endif//_earn_cnt__GUARD__

    #ifndef _earn_cnt_adj__GUARD__
    #define _earn_cnt_adj__GUARD__
    DECL_STRONG_TYPE(earn_cnt_adj, float);
    #endif//_earn_cnt_adj__GUARD__

    #ifndef _axis_vol_rt__GUARD__
    #define _axis_vol_rt__GUARD__
    DECL_STRONG_TYPE(axis_vol_rt, float);
    #endif//_axis_vol_rt__GUARD__

    #ifndef _axis_fuprc__GUARD__
    #define _axis_fuprc__GUARD__
    DECL_STRONG_TYPE(axis_fuprc, float);
    #endif//_axis_fuprc__GUARD__

    #ifndef _moneyness_type__GUARD__
    #define _moneyness_type__GUARD__
    DECL_STRONG_TYPE(moneyness_type, spiderrock::protobuf::api::MoneynessType);
    #endif//_moneyness_type__GUARD__

    #ifndef _price_quote_type__GUARD__
    #define _price_quote_type__GUARD__
    DECL_STRONG_TYPE(price_quote_type, spiderrock::protobuf::api::PriceQuoteType);
    #endif//_price_quote_type__GUARD__

    #ifndef _atm_vol__GUARD__
    #define _atm_vol__GUARD__
    DECL_STRONG_TYPE(atm_vol, float);
    #endif//_atm_vol__GUARD__

    #ifndef _atm_cen__GUARD__
    #define _atm_cen__GUARD__
    DECL_STRONG_TYPE(atm_cen, float);
    #endif//_atm_cen__GUARD__

    #ifndef _atm_vol_hist__GUARD__
    #define _atm_vol_hist__GUARD__
    DECL_STRONG_TYPE(atm_vol_hist, float);
    #endif//_atm_vol_hist__GUARD__

    #ifndef _atm_cen_hist__GUARD__
    #define _atm_cen_hist__GUARD__
    DECL_STRONG_TYPE(atm_cen_hist, float);
    #endif//_atm_cen_hist__GUARD__

    #ifndef _e_move__GUARD__
    #define _e_move__GUARD__
    DECL_STRONG_TYPE(e_move, float);
    #endif//_e_move__GUARD__

    #ifndef _e_move_hist__GUARD__
    #define _e_move_hist__GUARD__
    DECL_STRONG_TYPE(e_move_hist, float);
    #endif//_e_move_hist__GUARD__

    #ifndef _u_prc_ratio__GUARD__
    #define _u_prc_ratio__GUARD__
    DECL_STRONG_TYPE(u_prc_ratio, double);
    #endif//_u_prc_ratio__GUARD__

    #ifndef _min_atm_vol__GUARD__
    #define _min_atm_vol__GUARD__
    DECL_STRONG_TYPE(min_atm_vol, float);
    #endif//_min_atm_vol__GUARD__

    #ifndef _max_atm_vol__GUARD__
    #define _max_atm_vol__GUARD__
    DECL_STRONG_TYPE(max_atm_vol, float);
    #endif//_max_atm_vol__GUARD__

    #ifndef _min_cpadj_val__GUARD__
    #define _min_cpadj_val__GUARD__
    DECL_STRONG_TYPE(min_cpadj_val, double);
    #endif//_min_cpadj_val__GUARD__

    #ifndef _max_cpadj_val__GUARD__
    #define _max_cpadj_val__GUARD__
    DECL_STRONG_TYPE(max_cpadj_val, double);
    #endif//_max_cpadj_val__GUARD__

    #ifndef _atm_fixed_move__GUARD__
    #define _atm_fixed_move__GUARD__
    DECL_STRONG_TYPE(atm_fixed_move, float);
    #endif//_atm_fixed_move__GUARD__

    #ifndef _atm_phi__GUARD__
    #define _atm_phi__GUARD__
    DECL_STRONG_TYPE(atm_phi, float);
    #endif//_atm_phi__GUARD__

    #ifndef _atm_rho__GUARD__
    #define _atm_rho__GUARD__
    DECL_STRONG_TYPE(atm_rho, float);
    #endif//_atm_rho__GUARD__

    #ifndef _atm_vega__GUARD__
    #define _atm_vega__GUARD__
    DECL_STRONG_TYPE(atm_vega, float);
    #endif//_atm_vega__GUARD__

    #ifndef _slope__GUARD__
    #define _slope__GUARD__
    DECL_STRONG_TYPE(slope, float);
    #endif//_slope__GUARD__

    #ifndef _var_swap_fv__GUARD__
    #define _var_swap_fv__GUARD__
    DECL_STRONG_TYPE(var_swap_fv, float);
    #endif//_var_swap_fv__GUARD__

    #ifndef _min_xaxis__GUARD__
    #define _min_xaxis__GUARD__
    DECL_STRONG_TYPE(min_xaxis, float);
    #endif//_min_xaxis__GUARD__

    #ifndef _max_xaxis__GUARD__
    #define _max_xaxis__GUARD__
    DECL_STRONG_TYPE(max_xaxis, float);
    #endif//_max_xaxis__GUARD__

    #ifndef _skew_ticker__GUARD__
    #define _skew_ticker__GUARD__
    DECL_STRONG_TYPE(skew_ticker, TickerKey);
    #endif//_skew_ticker__GUARD__

    #ifndef _x_shift__GUARD__
    #define _x_shift__GUARD__
    DECL_STRONG_TYPE(x_shift, double);
    #endif//_x_shift__GUARD__

    #ifndef _x_mult__GUARD__
    #define _x_mult__GUARD__
    DECL_STRONG_TYPE(x_mult, double);
    #endif//_x_mult__GUARD__

    #ifndef _skew_mult__GUARD__
    #define _skew_mult__GUARD__
    DECL_STRONG_TYPE(skew_mult, double);
    #endif//_skew_mult__GUARD__

    #ifndef _skew_c00__GUARD__
    #define _skew_c00__GUARD__
    DECL_STRONG_TYPE(skew_c00, float);
    #endif//_skew_c00__GUARD__

    #ifndef _skew_c01__GUARD__
    #define _skew_c01__GUARD__
    DECL_STRONG_TYPE(skew_c01, float);
    #endif//_skew_c01__GUARD__

    #ifndef _skew_c02__GUARD__
    #define _skew_c02__GUARD__
    DECL_STRONG_TYPE(skew_c02, float);
    #endif//_skew_c02__GUARD__

    #ifndef _skew_c03__GUARD__
    #define _skew_c03__GUARD__
    DECL_STRONG_TYPE(skew_c03, float);
    #endif//_skew_c03__GUARD__

    #ifndef _skew_c04__GUARD__
    #define _skew_c04__GUARD__
    DECL_STRONG_TYPE(skew_c04, float);
    #endif//_skew_c04__GUARD__

    #ifndef _skew_c05__GUARD__
    #define _skew_c05__GUARD__
    DECL_STRONG_TYPE(skew_c05, float);
    #endif//_skew_c05__GUARD__

    #ifndef _skew_c06__GUARD__
    #define _skew_c06__GUARD__
    DECL_STRONG_TYPE(skew_c06, float);
    #endif//_skew_c06__GUARD__

    #ifndef _skew_c07__GUARD__
    #define _skew_c07__GUARD__
    DECL_STRONG_TYPE(skew_c07, float);
    #endif//_skew_c07__GUARD__

    #ifndef _skew_c08__GUARD__
    #define _skew_c08__GUARD__
    DECL_STRONG_TYPE(skew_c08, float);
    #endif//_skew_c08__GUARD__

    #ifndef _skew_c09__GUARD__
    #define _skew_c09__GUARD__
    DECL_STRONG_TYPE(skew_c09, float);
    #endif//_skew_c09__GUARD__

    #ifndef _skew_c10__GUARD__
    #define _skew_c10__GUARD__
    DECL_STRONG_TYPE(skew_c10, float);
    #endif//_skew_c10__GUARD__

    #ifndef _skew_c11__GUARD__
    #define _skew_c11__GUARD__
    DECL_STRONG_TYPE(skew_c11, float);
    #endif//_skew_c11__GUARD__

    #ifndef _skew_c12__GUARD__
    #define _skew_c12__GUARD__
    DECL_STRONG_TYPE(skew_c12, float);
    #endif//_skew_c12__GUARD__

    #ifndef _skew_c13__GUARD__
    #define _skew_c13__GUARD__
    DECL_STRONG_TYPE(skew_c13, float);
    #endif//_skew_c13__GUARD__

    #ifndef _skew_c14__GUARD__
    #define _skew_c14__GUARD__
    DECL_STRONG_TYPE(skew_c14, float);
    #endif//_skew_c14__GUARD__

    #ifndef _skew_c15__GUARD__
    #define _skew_c15__GUARD__
    DECL_STRONG_TYPE(skew_c15, float);
    #endif//_skew_c15__GUARD__

    #ifndef _skew_c16__GUARD__
    #define _skew_c16__GUARD__
    DECL_STRONG_TYPE(skew_c16, float);
    #endif//_skew_c16__GUARD__

    #ifndef _skew_c17__GUARD__
    #define _skew_c17__GUARD__
    DECL_STRONG_TYPE(skew_c17, float);
    #endif//_skew_c17__GUARD__

    #ifndef _skew_c18__GUARD__
    #define _skew_c18__GUARD__
    DECL_STRONG_TYPE(skew_c18, float);
    #endif//_skew_c18__GUARD__

    #ifndef _skew_c19__GUARD__
    #define _skew_c19__GUARD__
    DECL_STRONG_TYPE(skew_c19, float);
    #endif//_skew_c19__GUARD__

    #ifndef _skew_c20__GUARD__
    #define _skew_c20__GUARD__
    DECL_STRONG_TYPE(skew_c20, float);
    #endif//_skew_c20__GUARD__

    #ifndef _skew_c21__GUARD__
    #define _skew_c21__GUARD__
    DECL_STRONG_TYPE(skew_c21, float);
    #endif//_skew_c21__GUARD__

    #ifndef _skew_c22__GUARD__
    #define _skew_c22__GUARD__
    DECL_STRONG_TYPE(skew_c22, float);
    #endif//_skew_c22__GUARD__

    #ifndef _skew_c23__GUARD__
    #define _skew_c23__GUARD__
    DECL_STRONG_TYPE(skew_c23, float);
    #endif//_skew_c23__GUARD__

    #ifndef _skew_c24__GUARD__
    #define _skew_c24__GUARD__
    DECL_STRONG_TYPE(skew_c24, float);
    #endif//_skew_c24__GUARD__

    #ifndef _skew_c25__GUARD__
    #define _skew_c25__GUARD__
    DECL_STRONG_TYPE(skew_c25, float);
    #endif//_skew_c25__GUARD__

    #ifndef _skew_c26__GUARD__
    #define _skew_c26__GUARD__
    DECL_STRONG_TYPE(skew_c26, float);
    #endif//_skew_c26__GUARD__

    #ifndef _skew_c27__GUARD__
    #define _skew_c27__GUARD__
    DECL_STRONG_TYPE(skew_c27, float);
    #endif//_skew_c27__GUARD__

    #ifndef _skew_c28__GUARD__
    #define _skew_c28__GUARD__
    DECL_STRONG_TYPE(skew_c28, float);
    #endif//_skew_c28__GUARD__

    #ifndef _skew_c29__GUARD__
    #define _skew_c29__GUARD__
    DECL_STRONG_TYPE(skew_c29, float);
    #endif//_skew_c29__GUARD__

    #ifndef _skew_c30__GUARD__
    #define _skew_c30__GUARD__
    DECL_STRONG_TYPE(skew_c30, float);
    #endif//_skew_c30__GUARD__

    #ifndef _cp_adj_d04__GUARD__
    #define _cp_adj_d04__GUARD__
    DECL_STRONG_TYPE(cp_adj_d04, float);
    #endif//_cp_adj_d04__GUARD__

    #ifndef _cp_adj_d03__GUARD__
    #define _cp_adj_d03__GUARD__
    DECL_STRONG_TYPE(cp_adj_d03, float);
    #endif//_cp_adj_d03__GUARD__

    #ifndef _cp_adj_d02__GUARD__
    #define _cp_adj_d02__GUARD__
    DECL_STRONG_TYPE(cp_adj_d02, float);
    #endif//_cp_adj_d02__GUARD__

    #ifndef _cp_adj_d01__GUARD__
    #define _cp_adj_d01__GUARD__
    DECL_STRONG_TYPE(cp_adj_d01, float);
    #endif//_cp_adj_d01__GUARD__

    #ifndef _cp_adj_u01__GUARD__
    #define _cp_adj_u01__GUARD__
    DECL_STRONG_TYPE(cp_adj_u01, float);
    #endif//_cp_adj_u01__GUARD__

    #ifndef _cp_adj_u02__GUARD__
    #define _cp_adj_u02__GUARD__
    DECL_STRONG_TYPE(cp_adj_u02, float);
    #endif//_cp_adj_u02__GUARD__

    #ifndef _cp_adj_u03__GUARD__
    #define _cp_adj_u03__GUARD__
    DECL_STRONG_TYPE(cp_adj_u03, float);
    #endif//_cp_adj_u03__GUARD__

    #ifndef _cp_adj_u04__GUARD__
    #define _cp_adj_u04__GUARD__
    DECL_STRONG_TYPE(cp_adj_u04, float);
    #endif//_cp_adj_u04__GUARD__

    #ifndef _pwidth__GUARD__
    #define _pwidth__GUARD__
    DECL_STRONG_TYPE(pwidth, float);
    #endif//_pwidth__GUARD__

    #ifndef _vwidth__GUARD__
    #define _vwidth__GUARD__
    DECL_STRONG_TYPE(vwidth, float);
    #endif//_vwidth__GUARD__

    #ifndef _c_cnt__GUARD__
    #define _c_cnt__GUARD__
    DECL_STRONG_TYPE(c_cnt, int32);
    #endif//_c_cnt__GUARD__

    #ifndef _p_cnt__GUARD__
    #define _p_cnt__GUARD__
    DECL_STRONG_TYPE(p_cnt, int32);
    #endif//_p_cnt__GUARD__

    #ifndef _c_bid_miss__GUARD__
    #define _c_bid_miss__GUARD__
    DECL_STRONG_TYPE(c_bid_miss, int32);
    #endif//_c_bid_miss__GUARD__

    #ifndef _c_ask_miss__GUARD__
    #define _c_ask_miss__GUARD__
    DECL_STRONG_TYPE(c_ask_miss, int32);
    #endif//_c_ask_miss__GUARD__

    #ifndef _p_bid_miss__GUARD__
    #define _p_bid_miss__GUARD__
    DECL_STRONG_TYPE(p_bid_miss, int32);
    #endif//_p_bid_miss__GUARD__

    #ifndef _p_ask_miss__GUARD__
    #define _p_ask_miss__GUARD__
    DECL_STRONG_TYPE(p_ask_miss, int32);
    #endif//_p_ask_miss__GUARD__

    #ifndef _fit_avg_err__GUARD__
    #define _fit_avg_err__GUARD__
    DECL_STRONG_TYPE(fit_avg_err, float);
    #endif//_fit_avg_err__GUARD__

    #ifndef _fit_avg_abs_err__GUARD__
    #define _fit_avg_abs_err__GUARD__
    DECL_STRONG_TYPE(fit_avg_abs_err, float);
    #endif//_fit_avg_abs_err__GUARD__

    #ifndef _fit_max_prc_err__GUARD__
    #define _fit_max_prc_err__GUARD__
    DECL_STRONG_TYPE(fit_max_prc_err, float);
    #endif//_fit_max_prc_err__GUARD__

    #ifndef _fit_err_xx__GUARD__
    #define _fit_err_xx__GUARD__
    DECL_STRONG_TYPE(fit_err_xx, float);
    #endif//_fit_err_xx__GUARD__

    #ifndef _fit_err_cp__GUARD__
    #define _fit_err_cp__GUARD__
    DECL_STRONG_TYPE(fit_err_cp, spiderrock::protobuf::api::CallPut);
    #endif//_fit_err_cp__GUARD__

    #ifndef _fit_err_de__GUARD__
    #define _fit_err_de__GUARD__
    DECL_STRONG_TYPE(fit_err_de, float);
    #endif//_fit_err_de__GUARD__

    #ifndef _fit_err_bid__GUARD__
    #define _fit_err_bid__GUARD__
    DECL_STRONG_TYPE(fit_err_bid, float);
    #endif//_fit_err_bid__GUARD__

    #ifndef _fit_err_ask__GUARD__
    #define _fit_err_ask__GUARD__
    DECL_STRONG_TYPE(fit_err_ask, float);
    #endif//_fit_err_ask__GUARD__

    #ifndef _fit_err_prc__GUARD__
    #define _fit_err_prc__GUARD__
    DECL_STRONG_TYPE(fit_err_prc, float);
    #endif//_fit_err_prc__GUARD__

    #ifndef _fit_err_vol__GUARD__
    #define _fit_err_vol__GUARD__
    DECL_STRONG_TYPE(fit_err_vol, float);
    #endif//_fit_err_vol__GUARD__

    #ifndef _num_saddle_pts__GUARD__
    #define _num_saddle_pts__GUARD__
    DECL_STRONG_TYPE(num_saddle_pts, int32);
    #endif//_num_saddle_pts__GUARD__

    #ifndef _min_saddle_span__GUARD__
    #define _min_saddle_span__GUARD__
    DECL_STRONG_TYPE(min_saddle_span, float);
    #endif//_min_saddle_span__GUARD__

    #ifndef _max_saddle_curvature__GUARD__
    #define _max_saddle_curvature__GUARD__
    DECL_STRONG_TYPE(max_saddle_curvature, float);
    #endif//_max_saddle_curvature__GUARD__

    #ifndef _market_session__GUARD__
    #define _market_session__GUARD__
    DECL_STRONG_TYPE(market_session, spiderrock::protobuf::api::MarketSession);
    #endif//_market_session__GUARD__

    #ifndef _tradeable_status__GUARD__
    #define _tradeable_status__GUARD__
    DECL_STRONG_TYPE(tradeable_status, spiderrock::protobuf::api::TradeableStatus);
    #endif//_tradeable_status__GUARD__

    #ifndef _surface_result__SurfaceResult__GUARD__
    #define _surface_result__SurfaceResult__GUARD__
    DECL_STRONG_TYPE(surface_result__SurfaceResult, spiderrock::protobuf::api::SurfaceResult);
    #endif//_surface_result__SurfaceResult__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ekey__GUARD__
    #define _ekey__GUARD__
    DECL_STRONG_TYPE(ekey, ExpiryKey);
    #endif//_ekey__GUARD__

    #ifndef _surface_type__GUARD__
    #define _surface_type__GUARD__
    DECL_STRONG_TYPE(surface_type, spiderrock::protobuf::api::SurfaceCurveType);
    #endif//_surface_type__GUARD__

    
    class LiveSurfaceCurveV4_PKey {
        public:
        //using statements for all types used in this class
        using ekey = spiderrock::protobuf::api::ekey;
        using surface_type = spiderrock::protobuf::api::surface_type;

        private:
        ekey m_ekey{};
        surface_type m_surface_type{};

        public:
        surface_type get_surface_type() const {
            return m_surface_type;
        }
        void set_ekey(const ekey& value)  {
            m_ekey = value;
        }
        void set_surface_type(const surface_type& value)  {
            m_surface_type = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveSurfaceCurveV4_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveSurfaceCurveV4_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ekey & value) { set_ekey(value); }
        void set(const surface_type & value) { set_surface_type(value); }


        LiveSurfaceCurveV4_PKey() {}

        virtual ~LiveSurfaceCurveV4_PKey() {
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
        bool IncludeEkey() const {
            return (m_ekey.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout;
                m_ekey.setCodecExpiryKey(expiryKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(10,expiryKeyLayout);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SurfaceCurveType>(m_surface_type)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout;
                m_ekey.setCodecExpiryKey(expiryKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 10, expiryKeyLayout);
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
                    case 10: {auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                        m_ekey.setFromCodec(expiryKey);
                        break;
                    }
                    case 11: {m_surface_type = static_cast<spiderrock::protobuf::api::SurfaceCurveType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class LiveSurfaceCurveV4 {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::LiveSurfaceCurveV4_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using fkey = spiderrock::protobuf::api::fkey;
        using u_prc_driver_key = spiderrock::protobuf::api::u_prc_driver_key;
        using u_prc_driver_type = spiderrock::protobuf::api::u_prc_driver_type;
        using u_prc_driver = spiderrock::protobuf::api::u_prc_driver;
        using u_prc = spiderrock::protobuf::api::u_prc__double;
        using u_bid = spiderrock::protobuf::api::u_bid;
        using u_ask = spiderrock::protobuf::api::u_ask;
        using years = spiderrock::protobuf::api::years__float;
        using rate = spiderrock::protobuf::api::rate__float;
        using sdiv = spiderrock::protobuf::api::sdiv__float;
        using ddiv = spiderrock::protobuf::api::ddiv;
        using ddiv_pv = spiderrock::protobuf::api::ddiv_pv;
        using ddiv_source = spiderrock::protobuf::api::ddiv_source;
        using symbol_ratio = spiderrock::protobuf::api::symbol_ratio;
        using ex_type = spiderrock::protobuf::api::ex_type;
        using model_type = spiderrock::protobuf::api::model_type;
        using price_type = spiderrock::protobuf::api::price_type__CalcPriceType;
        using earn_cnt = spiderrock::protobuf::api::earn_cnt;
        using earn_cnt_adj = spiderrock::protobuf::api::earn_cnt_adj;
        using axis_vol_rt = spiderrock::protobuf::api::axis_vol_rt;
        using axis_fuprc = spiderrock::protobuf::api::axis_fuprc;
        using moneyness_type = spiderrock::protobuf::api::moneyness_type;
        using price_quote_type = spiderrock::protobuf::api::price_quote_type;
        using atm_vol = spiderrock::protobuf::api::atm_vol;
        using atm_cen = spiderrock::protobuf::api::atm_cen;
        using atm_vol_hist = spiderrock::protobuf::api::atm_vol_hist;
        using atm_cen_hist = spiderrock::protobuf::api::atm_cen_hist;
        using e_move = spiderrock::protobuf::api::e_move;
        using e_move_hist = spiderrock::protobuf::api::e_move_hist;
        using u_prc_ratio = spiderrock::protobuf::api::u_prc_ratio;
        using min_atm_vol = spiderrock::protobuf::api::min_atm_vol;
        using max_atm_vol = spiderrock::protobuf::api::max_atm_vol;
        using min_cpadj_val = spiderrock::protobuf::api::min_cpadj_val;
        using max_cpadj_val = spiderrock::protobuf::api::max_cpadj_val;
        using atm_fixed_move = spiderrock::protobuf::api::atm_fixed_move;
        using atm_phi = spiderrock::protobuf::api::atm_phi;
        using atm_rho = spiderrock::protobuf::api::atm_rho;
        using atm_vega = spiderrock::protobuf::api::atm_vega;
        using slope = spiderrock::protobuf::api::slope;
        using var_swap_fv = spiderrock::protobuf::api::var_swap_fv;
        using min_xaxis = spiderrock::protobuf::api::min_xaxis;
        using max_xaxis = spiderrock::protobuf::api::max_xaxis;
        using skew_ticker = spiderrock::protobuf::api::skew_ticker;
        using x_shift = spiderrock::protobuf::api::x_shift;
        using x_mult = spiderrock::protobuf::api::x_mult;
        using skew_mult = spiderrock::protobuf::api::skew_mult;
        using skew_c00 = spiderrock::protobuf::api::skew_c00;
        using skew_c01 = spiderrock::protobuf::api::skew_c01;
        using skew_c02 = spiderrock::protobuf::api::skew_c02;
        using skew_c03 = spiderrock::protobuf::api::skew_c03;
        using skew_c04 = spiderrock::protobuf::api::skew_c04;
        using skew_c05 = spiderrock::protobuf::api::skew_c05;
        using skew_c06 = spiderrock::protobuf::api::skew_c06;
        using skew_c07 = spiderrock::protobuf::api::skew_c07;
        using skew_c08 = spiderrock::protobuf::api::skew_c08;
        using skew_c09 = spiderrock::protobuf::api::skew_c09;
        using skew_c10 = spiderrock::protobuf::api::skew_c10;
        using skew_c11 = spiderrock::protobuf::api::skew_c11;
        using skew_c12 = spiderrock::protobuf::api::skew_c12;
        using skew_c13 = spiderrock::protobuf::api::skew_c13;
        using skew_c14 = spiderrock::protobuf::api::skew_c14;
        using skew_c15 = spiderrock::protobuf::api::skew_c15;
        using skew_c16 = spiderrock::protobuf::api::skew_c16;
        using skew_c17 = spiderrock::protobuf::api::skew_c17;
        using skew_c18 = spiderrock::protobuf::api::skew_c18;
        using skew_c19 = spiderrock::protobuf::api::skew_c19;
        using skew_c20 = spiderrock::protobuf::api::skew_c20;
        using skew_c21 = spiderrock::protobuf::api::skew_c21;
        using skew_c22 = spiderrock::protobuf::api::skew_c22;
        using skew_c23 = spiderrock::protobuf::api::skew_c23;
        using skew_c24 = spiderrock::protobuf::api::skew_c24;
        using skew_c25 = spiderrock::protobuf::api::skew_c25;
        using skew_c26 = spiderrock::protobuf::api::skew_c26;
        using skew_c27 = spiderrock::protobuf::api::skew_c27;
        using skew_c28 = spiderrock::protobuf::api::skew_c28;
        using skew_c29 = spiderrock::protobuf::api::skew_c29;
        using skew_c30 = spiderrock::protobuf::api::skew_c30;
        using cp_adj_d04 = spiderrock::protobuf::api::cp_adj_d04;
        using cp_adj_d03 = spiderrock::protobuf::api::cp_adj_d03;
        using cp_adj_d02 = spiderrock::protobuf::api::cp_adj_d02;
        using cp_adj_d01 = spiderrock::protobuf::api::cp_adj_d01;
        using cp_adj_u01 = spiderrock::protobuf::api::cp_adj_u01;
        using cp_adj_u02 = spiderrock::protobuf::api::cp_adj_u02;
        using cp_adj_u03 = spiderrock::protobuf::api::cp_adj_u03;
        using cp_adj_u04 = spiderrock::protobuf::api::cp_adj_u04;
        using pwidth = spiderrock::protobuf::api::pwidth;
        using vwidth = spiderrock::protobuf::api::vwidth;
        using c_cnt = spiderrock::protobuf::api::c_cnt;
        using p_cnt = spiderrock::protobuf::api::p_cnt;
        using c_bid_miss = spiderrock::protobuf::api::c_bid_miss;
        using c_ask_miss = spiderrock::protobuf::api::c_ask_miss;
        using p_bid_miss = spiderrock::protobuf::api::p_bid_miss;
        using p_ask_miss = spiderrock::protobuf::api::p_ask_miss;
        using fit_avg_err = spiderrock::protobuf::api::fit_avg_err;
        using fit_avg_abs_err = spiderrock::protobuf::api::fit_avg_abs_err;
        using fit_max_prc_err = spiderrock::protobuf::api::fit_max_prc_err;
        using fit_err_xx = spiderrock::protobuf::api::fit_err_xx;
        using fit_err_cp = spiderrock::protobuf::api::fit_err_cp;
        using fit_err_de = spiderrock::protobuf::api::fit_err_de;
        using fit_err_bid = spiderrock::protobuf::api::fit_err_bid;
        using fit_err_ask = spiderrock::protobuf::api::fit_err_ask;
        using fit_err_prc = spiderrock::protobuf::api::fit_err_prc;
        using fit_err_vol = spiderrock::protobuf::api::fit_err_vol;
        using num_saddle_pts = spiderrock::protobuf::api::num_saddle_pts;
        using min_saddle_span = spiderrock::protobuf::api::min_saddle_span;
        using max_saddle_curvature = spiderrock::protobuf::api::max_saddle_curvature;
        using market_session = spiderrock::protobuf::api::market_session;
        using tradeable_status = spiderrock::protobuf::api::tradeable_status;
        using surface_result = spiderrock::protobuf::api::surface_result__SurfaceResult;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        fkey m_fkey{};
        u_prc_driver_key m_u_prc_driver_key{};
        u_prc_driver_type m_u_prc_driver_type{};
        u_prc_driver m_u_prc_driver{};
        u_prc m_u_prc{};
        u_bid m_u_bid{};
        u_ask m_u_ask{};
        years m_years{};
        rate m_rate{};
        sdiv m_sdiv{};
        ddiv m_ddiv{};
        ddiv_pv m_ddiv_pv{};
        ddiv_source m_ddiv_source{};
        symbol_ratio m_symbol_ratio{};
        ex_type m_ex_type{};
        model_type m_model_type{};
        price_type m_price_type{};
        earn_cnt m_earn_cnt{};
        earn_cnt_adj m_earn_cnt_adj{};
        axis_vol_rt m_axis_vol_rt{};
        axis_fuprc m_axis_fuprc{};
        moneyness_type m_moneyness_type{};
        price_quote_type m_price_quote_type{};
        atm_vol m_atm_vol{};
        atm_cen m_atm_cen{};
        atm_vol_hist m_atm_vol_hist{};
        atm_cen_hist m_atm_cen_hist{};
        e_move m_e_move{};
        e_move_hist m_e_move_hist{};
        u_prc_ratio m_u_prc_ratio{};
        min_atm_vol m_min_atm_vol{};
        max_atm_vol m_max_atm_vol{};
        min_cpadj_val m_min_cpadj_val{};
        max_cpadj_val m_max_cpadj_val{};
        atm_fixed_move m_atm_fixed_move{};
        atm_phi m_atm_phi{};
        atm_rho m_atm_rho{};
        atm_vega m_atm_vega{};
        slope m_slope{};
        var_swap_fv m_var_swap_fv{};
        min_xaxis m_min_xaxis{};
        max_xaxis m_max_xaxis{};
        skew_ticker m_skew_ticker{};
        x_shift m_x_shift{};
        x_mult m_x_mult{};
        skew_mult m_skew_mult{};
        skew_c00 m_skew_c00{};
        skew_c01 m_skew_c01{};
        skew_c02 m_skew_c02{};
        skew_c03 m_skew_c03{};
        skew_c04 m_skew_c04{};
        skew_c05 m_skew_c05{};
        skew_c06 m_skew_c06{};
        skew_c07 m_skew_c07{};
        skew_c08 m_skew_c08{};
        skew_c09 m_skew_c09{};
        skew_c10 m_skew_c10{};
        skew_c11 m_skew_c11{};
        skew_c12 m_skew_c12{};
        skew_c13 m_skew_c13{};
        skew_c14 m_skew_c14{};
        skew_c15 m_skew_c15{};
        skew_c16 m_skew_c16{};
        skew_c17 m_skew_c17{};
        skew_c18 m_skew_c18{};
        skew_c19 m_skew_c19{};
        skew_c20 m_skew_c20{};
        skew_c21 m_skew_c21{};
        skew_c22 m_skew_c22{};
        skew_c23 m_skew_c23{};
        skew_c24 m_skew_c24{};
        skew_c25 m_skew_c25{};
        skew_c26 m_skew_c26{};
        skew_c27 m_skew_c27{};
        skew_c28 m_skew_c28{};
        skew_c29 m_skew_c29{};
        skew_c30 m_skew_c30{};
        cp_adj_d04 m_cp_adj_d04{};
        cp_adj_d03 m_cp_adj_d03{};
        cp_adj_d02 m_cp_adj_d02{};
        cp_adj_d01 m_cp_adj_d01{};
        cp_adj_u01 m_cp_adj_u01{};
        cp_adj_u02 m_cp_adj_u02{};
        cp_adj_u03 m_cp_adj_u03{};
        cp_adj_u04 m_cp_adj_u04{};
        pwidth m_pwidth{};
        vwidth m_vwidth{};
        c_cnt m_c_cnt{};
        p_cnt m_p_cnt{};
        c_bid_miss m_c_bid_miss{};
        c_ask_miss m_c_ask_miss{};
        p_bid_miss m_p_bid_miss{};
        p_ask_miss m_p_ask_miss{};
        fit_avg_err m_fit_avg_err{};
        fit_avg_abs_err m_fit_avg_abs_err{};
        fit_max_prc_err m_fit_max_prc_err{};
        fit_err_xx m_fit_err_xx{};
        fit_err_cp m_fit_err_cp{};
        fit_err_de m_fit_err_de{};
        fit_err_bid m_fit_err_bid{};
        fit_err_ask m_fit_err_ask{};
        fit_err_prc m_fit_err_prc{};
        fit_err_vol m_fit_err_vol{};
        num_saddle_pts m_num_saddle_pts{};
        min_saddle_span m_min_saddle_span{};
        max_saddle_curvature m_max_saddle_curvature{};
        market_session m_market_session{};
        tradeable_status m_tradeable_status{};
        surface_result m_surface_result{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        ticker get_ticker() const {
            return m_ticker;
        }		
        fkey get_fkey() const {
            return m_fkey;
        }		
        u_prc_driver_key get_u_prc_driver_key() const {
            return m_u_prc_driver_key;
        }		
        u_prc_driver_type get_u_prc_driver_type() const {
            return m_u_prc_driver_type;
        }		
        u_prc_driver get_u_prc_driver() const {
            return m_u_prc_driver;
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
        ddiv_pv get_ddiv_pv() const {
            return m_ddiv_pv;
        }		
        ddiv_source get_ddiv_source() const {
            return m_ddiv_source;
        }		
        symbol_ratio get_symbol_ratio() const {
            return m_symbol_ratio;
        }		
        ex_type get_ex_type() const {
            return m_ex_type;
        }		
        model_type get_model_type() const {
            return m_model_type;
        }		
        price_type get_price_type() const {
            return m_price_type;
        }		
        earn_cnt get_earn_cnt() const {
            return m_earn_cnt;
        }		
        earn_cnt_adj get_earn_cnt_adj() const {
            return m_earn_cnt_adj;
        }		
        axis_vol_rt get_axis_vol_rt() const {
            return m_axis_vol_rt;
        }		
        axis_fuprc get_axis_fuprc() const {
            return m_axis_fuprc;
        }		
        moneyness_type get_moneyness_type() const {
            return m_moneyness_type;
        }		
        price_quote_type get_price_quote_type() const {
            return m_price_quote_type;
        }		
        atm_vol get_atm_vol() const {
            return m_atm_vol;
        }		
        atm_cen get_atm_cen() const {
            return m_atm_cen;
        }		
        atm_vol_hist get_atm_vol_hist() const {
            return m_atm_vol_hist;
        }		
        atm_cen_hist get_atm_cen_hist() const {
            return m_atm_cen_hist;
        }		
        e_move get_e_move() const {
            return m_e_move;
        }		
        e_move_hist get_e_move_hist() const {
            return m_e_move_hist;
        }		
        u_prc_ratio get_u_prc_ratio() const {
            return m_u_prc_ratio;
        }		
        min_atm_vol get_min_atm_vol() const {
            return m_min_atm_vol;
        }		
        max_atm_vol get_max_atm_vol() const {
            return m_max_atm_vol;
        }		
        min_cpadj_val get_min_cpadj_val() const {
            return m_min_cpadj_val;
        }		
        max_cpadj_val get_max_cpadj_val() const {
            return m_max_cpadj_val;
        }		
        atm_fixed_move get_atm_fixed_move() const {
            return m_atm_fixed_move;
        }		
        atm_phi get_atm_phi() const {
            return m_atm_phi;
        }		
        atm_rho get_atm_rho() const {
            return m_atm_rho;
        }		
        atm_vega get_atm_vega() const {
            return m_atm_vega;
        }		
        slope get_slope() const {
            return m_slope;
        }		
        var_swap_fv get_var_swap_fv() const {
            return m_var_swap_fv;
        }		
        min_xaxis get_min_xaxis() const {
            return m_min_xaxis;
        }		
        max_xaxis get_max_xaxis() const {
            return m_max_xaxis;
        }		
        skew_ticker get_skew_ticker() const {
            return m_skew_ticker;
        }		
        x_shift get_x_shift() const {
            return m_x_shift;
        }		
        x_mult get_x_mult() const {
            return m_x_mult;
        }		
        skew_mult get_skew_mult() const {
            return m_skew_mult;
        }		
        skew_c00 get_skew_c00() const {
            return m_skew_c00;
        }		
        skew_c01 get_skew_c01() const {
            return m_skew_c01;
        }		
        skew_c02 get_skew_c02() const {
            return m_skew_c02;
        }		
        skew_c03 get_skew_c03() const {
            return m_skew_c03;
        }		
        skew_c04 get_skew_c04() const {
            return m_skew_c04;
        }		
        skew_c05 get_skew_c05() const {
            return m_skew_c05;
        }		
        skew_c06 get_skew_c06() const {
            return m_skew_c06;
        }		
        skew_c07 get_skew_c07() const {
            return m_skew_c07;
        }		
        skew_c08 get_skew_c08() const {
            return m_skew_c08;
        }		
        skew_c09 get_skew_c09() const {
            return m_skew_c09;
        }		
        skew_c10 get_skew_c10() const {
            return m_skew_c10;
        }		
        skew_c11 get_skew_c11() const {
            return m_skew_c11;
        }		
        skew_c12 get_skew_c12() const {
            return m_skew_c12;
        }		
        skew_c13 get_skew_c13() const {
            return m_skew_c13;
        }		
        skew_c14 get_skew_c14() const {
            return m_skew_c14;
        }		
        skew_c15 get_skew_c15() const {
            return m_skew_c15;
        }		
        skew_c16 get_skew_c16() const {
            return m_skew_c16;
        }		
        skew_c17 get_skew_c17() const {
            return m_skew_c17;
        }		
        skew_c18 get_skew_c18() const {
            return m_skew_c18;
        }		
        skew_c19 get_skew_c19() const {
            return m_skew_c19;
        }		
        skew_c20 get_skew_c20() const {
            return m_skew_c20;
        }		
        skew_c21 get_skew_c21() const {
            return m_skew_c21;
        }		
        skew_c22 get_skew_c22() const {
            return m_skew_c22;
        }		
        skew_c23 get_skew_c23() const {
            return m_skew_c23;
        }		
        skew_c24 get_skew_c24() const {
            return m_skew_c24;
        }		
        skew_c25 get_skew_c25() const {
            return m_skew_c25;
        }		
        skew_c26 get_skew_c26() const {
            return m_skew_c26;
        }		
        skew_c27 get_skew_c27() const {
            return m_skew_c27;
        }		
        skew_c28 get_skew_c28() const {
            return m_skew_c28;
        }		
        skew_c29 get_skew_c29() const {
            return m_skew_c29;
        }		
        skew_c30 get_skew_c30() const {
            return m_skew_c30;
        }		
        cp_adj_d04 get_cp_adj_d04() const {
            return m_cp_adj_d04;
        }		
        cp_adj_d03 get_cp_adj_d03() const {
            return m_cp_adj_d03;
        }		
        cp_adj_d02 get_cp_adj_d02() const {
            return m_cp_adj_d02;
        }		
        cp_adj_d01 get_cp_adj_d01() const {
            return m_cp_adj_d01;
        }		
        cp_adj_u01 get_cp_adj_u01() const {
            return m_cp_adj_u01;
        }		
        cp_adj_u02 get_cp_adj_u02() const {
            return m_cp_adj_u02;
        }		
        cp_adj_u03 get_cp_adj_u03() const {
            return m_cp_adj_u03;
        }		
        cp_adj_u04 get_cp_adj_u04() const {
            return m_cp_adj_u04;
        }		
        pwidth get_pwidth() const {
            return m_pwidth;
        }		
        vwidth get_vwidth() const {
            return m_vwidth;
        }		
        c_cnt get_c_cnt() const {
            return m_c_cnt;
        }		
        p_cnt get_p_cnt() const {
            return m_p_cnt;
        }		
        c_bid_miss get_c_bid_miss() const {
            return m_c_bid_miss;
        }		
        c_ask_miss get_c_ask_miss() const {
            return m_c_ask_miss;
        }		
        p_bid_miss get_p_bid_miss() const {
            return m_p_bid_miss;
        }		
        p_ask_miss get_p_ask_miss() const {
            return m_p_ask_miss;
        }		
        fit_avg_err get_fit_avg_err() const {
            return m_fit_avg_err;
        }		
        fit_avg_abs_err get_fit_avg_abs_err() const {
            return m_fit_avg_abs_err;
        }		
        fit_max_prc_err get_fit_max_prc_err() const {
            return m_fit_max_prc_err;
        }		
        fit_err_xx get_fit_err_xx() const {
            return m_fit_err_xx;
        }		
        fit_err_cp get_fit_err_cp() const {
            return m_fit_err_cp;
        }		
        fit_err_de get_fit_err_de() const {
            return m_fit_err_de;
        }		
        fit_err_bid get_fit_err_bid() const {
            return m_fit_err_bid;
        }		
        fit_err_ask get_fit_err_ask() const {
            return m_fit_err_ask;
        }		
        fit_err_prc get_fit_err_prc() const {
            return m_fit_err_prc;
        }		
        fit_err_vol get_fit_err_vol() const {
            return m_fit_err_vol;
        }		
        num_saddle_pts get_num_saddle_pts() const {
            return m_num_saddle_pts;
        }		
        min_saddle_span get_min_saddle_span() const {
            return m_min_saddle_span;
        }		
        max_saddle_curvature get_max_saddle_curvature() const {
            return m_max_saddle_curvature;
        }		
        market_session get_market_session() const {
            return m_market_session;
        }		
        tradeable_status get_tradeable_status() const {
            return m_tradeable_status;
        }		
        surface_result get_surface_result() const {
            return m_surface_result;
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
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_fkey(const fkey& value)  {
            m_fkey = value;
        }
        void set_u_prc_driver_key(const u_prc_driver_key& value)  {
            m_u_prc_driver_key = value;
        }
        void set_u_prc_driver_type(const u_prc_driver_type& value)  {
            m_u_prc_driver_type = value;
        }
        void set_u_prc_driver(const u_prc_driver& value)  {
            m_u_prc_driver = value;
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
        void set_ddiv_pv(const ddiv_pv& value)  {
            m_ddiv_pv = value;
        }
        void set_ddiv_source(const ddiv_source& value)  {
            m_ddiv_source = value;
        }
        void set_symbol_ratio(const symbol_ratio& value)  {
            m_symbol_ratio = value;
        }
        void set_ex_type(const ex_type& value)  {
            m_ex_type = value;
        }
        void set_model_type(const model_type& value)  {
            m_model_type = value;
        }
        void set_price_type(const price_type& value)  {
            m_price_type = value;
        }
        void set_earn_cnt(const earn_cnt& value)  {
            m_earn_cnt = value;
        }
        void set_earn_cnt_adj(const earn_cnt_adj& value)  {
            m_earn_cnt_adj = value;
        }
        void set_axis_vol_rt(const axis_vol_rt& value)  {
            m_axis_vol_rt = value;
        }
        void set_axis_fuprc(const axis_fuprc& value)  {
            m_axis_fuprc = value;
        }
        void set_moneyness_type(const moneyness_type& value)  {
            m_moneyness_type = value;
        }
        void set_price_quote_type(const price_quote_type& value)  {
            m_price_quote_type = value;
        }
        void set_atm_vol(const atm_vol& value)  {
            m_atm_vol = value;
        }
        void set_atm_cen(const atm_cen& value)  {
            m_atm_cen = value;
        }
        void set_atm_vol_hist(const atm_vol_hist& value)  {
            m_atm_vol_hist = value;
        }
        void set_atm_cen_hist(const atm_cen_hist& value)  {
            m_atm_cen_hist = value;
        }
        void set_e_move(const e_move& value)  {
            m_e_move = value;
        }
        void set_e_move_hist(const e_move_hist& value)  {
            m_e_move_hist = value;
        }
        void set_u_prc_ratio(const u_prc_ratio& value)  {
            m_u_prc_ratio = value;
        }
        void set_min_atm_vol(const min_atm_vol& value)  {
            m_min_atm_vol = value;
        }
        void set_max_atm_vol(const max_atm_vol& value)  {
            m_max_atm_vol = value;
        }
        void set_min_cpadj_val(const min_cpadj_val& value)  {
            m_min_cpadj_val = value;
        }
        void set_max_cpadj_val(const max_cpadj_val& value)  {
            m_max_cpadj_val = value;
        }
        void set_atm_fixed_move(const atm_fixed_move& value)  {
            m_atm_fixed_move = value;
        }
        void set_atm_phi(const atm_phi& value)  {
            m_atm_phi = value;
        }
        void set_atm_rho(const atm_rho& value)  {
            m_atm_rho = value;
        }
        void set_atm_vega(const atm_vega& value)  {
            m_atm_vega = value;
        }
        void set_slope(const slope& value)  {
            m_slope = value;
        }
        void set_var_swap_fv(const var_swap_fv& value)  {
            m_var_swap_fv = value;
        }
        void set_min_xaxis(const min_xaxis& value)  {
            m_min_xaxis = value;
        }
        void set_max_xaxis(const max_xaxis& value)  {
            m_max_xaxis = value;
        }
        void set_skew_ticker(const skew_ticker& value)  {
            m_skew_ticker = value;
        }
        void set_x_shift(const x_shift& value)  {
            m_x_shift = value;
        }
        void set_x_mult(const x_mult& value)  {
            m_x_mult = value;
        }
        void set_skew_mult(const skew_mult& value)  {
            m_skew_mult = value;
        }
        void set_skew_c00(const skew_c00& value)  {
            m_skew_c00 = value;
        }
        void set_skew_c01(const skew_c01& value)  {
            m_skew_c01 = value;
        }
        void set_skew_c02(const skew_c02& value)  {
            m_skew_c02 = value;
        }
        void set_skew_c03(const skew_c03& value)  {
            m_skew_c03 = value;
        }
        void set_skew_c04(const skew_c04& value)  {
            m_skew_c04 = value;
        }
        void set_skew_c05(const skew_c05& value)  {
            m_skew_c05 = value;
        }
        void set_skew_c06(const skew_c06& value)  {
            m_skew_c06 = value;
        }
        void set_skew_c07(const skew_c07& value)  {
            m_skew_c07 = value;
        }
        void set_skew_c08(const skew_c08& value)  {
            m_skew_c08 = value;
        }
        void set_skew_c09(const skew_c09& value)  {
            m_skew_c09 = value;
        }
        void set_skew_c10(const skew_c10& value)  {
            m_skew_c10 = value;
        }
        void set_skew_c11(const skew_c11& value)  {
            m_skew_c11 = value;
        }
        void set_skew_c12(const skew_c12& value)  {
            m_skew_c12 = value;
        }
        void set_skew_c13(const skew_c13& value)  {
            m_skew_c13 = value;
        }
        void set_skew_c14(const skew_c14& value)  {
            m_skew_c14 = value;
        }
        void set_skew_c15(const skew_c15& value)  {
            m_skew_c15 = value;
        }
        void set_skew_c16(const skew_c16& value)  {
            m_skew_c16 = value;
        }
        void set_skew_c17(const skew_c17& value)  {
            m_skew_c17 = value;
        }
        void set_skew_c18(const skew_c18& value)  {
            m_skew_c18 = value;
        }
        void set_skew_c19(const skew_c19& value)  {
            m_skew_c19 = value;
        }
        void set_skew_c20(const skew_c20& value)  {
            m_skew_c20 = value;
        }
        void set_skew_c21(const skew_c21& value)  {
            m_skew_c21 = value;
        }
        void set_skew_c22(const skew_c22& value)  {
            m_skew_c22 = value;
        }
        void set_skew_c23(const skew_c23& value)  {
            m_skew_c23 = value;
        }
        void set_skew_c24(const skew_c24& value)  {
            m_skew_c24 = value;
        }
        void set_skew_c25(const skew_c25& value)  {
            m_skew_c25 = value;
        }
        void set_skew_c26(const skew_c26& value)  {
            m_skew_c26 = value;
        }
        void set_skew_c27(const skew_c27& value)  {
            m_skew_c27 = value;
        }
        void set_skew_c28(const skew_c28& value)  {
            m_skew_c28 = value;
        }
        void set_skew_c29(const skew_c29& value)  {
            m_skew_c29 = value;
        }
        void set_skew_c30(const skew_c30& value)  {
            m_skew_c30 = value;
        }
        void set_cp_adj_d04(const cp_adj_d04& value)  {
            m_cp_adj_d04 = value;
        }
        void set_cp_adj_d03(const cp_adj_d03& value)  {
            m_cp_adj_d03 = value;
        }
        void set_cp_adj_d02(const cp_adj_d02& value)  {
            m_cp_adj_d02 = value;
        }
        void set_cp_adj_d01(const cp_adj_d01& value)  {
            m_cp_adj_d01 = value;
        }
        void set_cp_adj_u01(const cp_adj_u01& value)  {
            m_cp_adj_u01 = value;
        }
        void set_cp_adj_u02(const cp_adj_u02& value)  {
            m_cp_adj_u02 = value;
        }
        void set_cp_adj_u03(const cp_adj_u03& value)  {
            m_cp_adj_u03 = value;
        }
        void set_cp_adj_u04(const cp_adj_u04& value)  {
            m_cp_adj_u04 = value;
        }
        void set_pwidth(const pwidth& value)  {
            m_pwidth = value;
        }
        void set_vwidth(const vwidth& value)  {
            m_vwidth = value;
        }
        void set_c_cnt(const c_cnt& value)  {
            m_c_cnt = value;
        }
        void set_p_cnt(const p_cnt& value)  {
            m_p_cnt = value;
        }
        void set_c_bid_miss(const c_bid_miss& value)  {
            m_c_bid_miss = value;
        }
        void set_c_ask_miss(const c_ask_miss& value)  {
            m_c_ask_miss = value;
        }
        void set_p_bid_miss(const p_bid_miss& value)  {
            m_p_bid_miss = value;
        }
        void set_p_ask_miss(const p_ask_miss& value)  {
            m_p_ask_miss = value;
        }
        void set_fit_avg_err(const fit_avg_err& value)  {
            m_fit_avg_err = value;
        }
        void set_fit_avg_abs_err(const fit_avg_abs_err& value)  {
            m_fit_avg_abs_err = value;
        }
        void set_fit_max_prc_err(const fit_max_prc_err& value)  {
            m_fit_max_prc_err = value;
        }
        void set_fit_err_xx(const fit_err_xx& value)  {
            m_fit_err_xx = value;
        }
        void set_fit_err_cp(const fit_err_cp& value)  {
            m_fit_err_cp = value;
        }
        void set_fit_err_de(const fit_err_de& value)  {
            m_fit_err_de = value;
        }
        void set_fit_err_bid(const fit_err_bid& value)  {
            m_fit_err_bid = value;
        }
        void set_fit_err_ask(const fit_err_ask& value)  {
            m_fit_err_ask = value;
        }
        void set_fit_err_prc(const fit_err_prc& value)  {
            m_fit_err_prc = value;
        }
        void set_fit_err_vol(const fit_err_vol& value)  {
            m_fit_err_vol = value;
        }
        void set_num_saddle_pts(const num_saddle_pts& value)  {
            m_num_saddle_pts = value;
        }
        void set_min_saddle_span(const min_saddle_span& value)  {
            m_min_saddle_span = value;
        }
        void set_max_saddle_curvature(const max_saddle_curvature& value)  {
            m_max_saddle_curvature = value;
        }
        void set_market_session(const market_session& value)  {
            m_market_session = value;
        }
        void set_tradeable_status(const tradeable_status& value)  {
            m_tradeable_status = value;
        }
        void set_surface_result(const surface_result& value)  {
            m_surface_result = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveSurfaceCurveV4::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const ticker & value) {
            set_ticker(value);
        }
        void set(const fkey & value) {
            set_fkey(value);
        }
        void set(const u_prc_driver_key & value) {
            set_u_prc_driver_key(value);
        }
        void set(const u_prc_driver_type & value) {
            set_u_prc_driver_type(value);
        }
        void set(const u_prc_driver & value) {
            set_u_prc_driver(value);
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
        void set(const ddiv_pv & value) {
            set_ddiv_pv(value);
        }
        void set(const ddiv_source & value) {
            set_ddiv_source(value);
        }
        void set(const symbol_ratio & value) {
            set_symbol_ratio(value);
        }
        void set(const ex_type & value) {
            set_ex_type(value);
        }
        void set(const model_type & value) {
            set_model_type(value);
        }
        void set(const price_type & value) {
            set_price_type(value);
        }
        void set(const earn_cnt & value) {
            set_earn_cnt(value);
        }
        void set(const earn_cnt_adj & value) {
            set_earn_cnt_adj(value);
        }
        void set(const axis_vol_rt & value) {
            set_axis_vol_rt(value);
        }
        void set(const axis_fuprc & value) {
            set_axis_fuprc(value);
        }
        void set(const moneyness_type & value) {
            set_moneyness_type(value);
        }
        void set(const price_quote_type & value) {
            set_price_quote_type(value);
        }
        void set(const atm_vol & value) {
            set_atm_vol(value);
        }
        void set(const atm_cen & value) {
            set_atm_cen(value);
        }
        void set(const atm_vol_hist & value) {
            set_atm_vol_hist(value);
        }
        void set(const atm_cen_hist & value) {
            set_atm_cen_hist(value);
        }
        void set(const e_move & value) {
            set_e_move(value);
        }
        void set(const e_move_hist & value) {
            set_e_move_hist(value);
        }
        void set(const u_prc_ratio & value) {
            set_u_prc_ratio(value);
        }
        void set(const min_atm_vol & value) {
            set_min_atm_vol(value);
        }
        void set(const max_atm_vol & value) {
            set_max_atm_vol(value);
        }
        void set(const min_cpadj_val & value) {
            set_min_cpadj_val(value);
        }
        void set(const max_cpadj_val & value) {
            set_max_cpadj_val(value);
        }
        void set(const atm_fixed_move & value) {
            set_atm_fixed_move(value);
        }
        void set(const atm_phi & value) {
            set_atm_phi(value);
        }
        void set(const atm_rho & value) {
            set_atm_rho(value);
        }
        void set(const atm_vega & value) {
            set_atm_vega(value);
        }
        void set(const slope & value) {
            set_slope(value);
        }
        void set(const var_swap_fv & value) {
            set_var_swap_fv(value);
        }
        void set(const min_xaxis & value) {
            set_min_xaxis(value);
        }
        void set(const max_xaxis & value) {
            set_max_xaxis(value);
        }
        void set(const skew_ticker & value) {
            set_skew_ticker(value);
        }
        void set(const x_shift & value) {
            set_x_shift(value);
        }
        void set(const x_mult & value) {
            set_x_mult(value);
        }
        void set(const skew_mult & value) {
            set_skew_mult(value);
        }
        void set(const skew_c00 & value) {
            set_skew_c00(value);
        }
        void set(const skew_c01 & value) {
            set_skew_c01(value);
        }
        void set(const skew_c02 & value) {
            set_skew_c02(value);
        }
        void set(const skew_c03 & value) {
            set_skew_c03(value);
        }
        void set(const skew_c04 & value) {
            set_skew_c04(value);
        }
        void set(const skew_c05 & value) {
            set_skew_c05(value);
        }
        void set(const skew_c06 & value) {
            set_skew_c06(value);
        }
        void set(const skew_c07 & value) {
            set_skew_c07(value);
        }
        void set(const skew_c08 & value) {
            set_skew_c08(value);
        }
        void set(const skew_c09 & value) {
            set_skew_c09(value);
        }
        void set(const skew_c10 & value) {
            set_skew_c10(value);
        }
        void set(const skew_c11 & value) {
            set_skew_c11(value);
        }
        void set(const skew_c12 & value) {
            set_skew_c12(value);
        }
        void set(const skew_c13 & value) {
            set_skew_c13(value);
        }
        void set(const skew_c14 & value) {
            set_skew_c14(value);
        }
        void set(const skew_c15 & value) {
            set_skew_c15(value);
        }
        void set(const skew_c16 & value) {
            set_skew_c16(value);
        }
        void set(const skew_c17 & value) {
            set_skew_c17(value);
        }
        void set(const skew_c18 & value) {
            set_skew_c18(value);
        }
        void set(const skew_c19 & value) {
            set_skew_c19(value);
        }
        void set(const skew_c20 & value) {
            set_skew_c20(value);
        }
        void set(const skew_c21 & value) {
            set_skew_c21(value);
        }
        void set(const skew_c22 & value) {
            set_skew_c22(value);
        }
        void set(const skew_c23 & value) {
            set_skew_c23(value);
        }
        void set(const skew_c24 & value) {
            set_skew_c24(value);
        }
        void set(const skew_c25 & value) {
            set_skew_c25(value);
        }
        void set(const skew_c26 & value) {
            set_skew_c26(value);
        }
        void set(const skew_c27 & value) {
            set_skew_c27(value);
        }
        void set(const skew_c28 & value) {
            set_skew_c28(value);
        }
        void set(const skew_c29 & value) {
            set_skew_c29(value);
        }
        void set(const skew_c30 & value) {
            set_skew_c30(value);
        }
        void set(const cp_adj_d04 & value) {
            set_cp_adj_d04(value);
        }
        void set(const cp_adj_d03 & value) {
            set_cp_adj_d03(value);
        }
        void set(const cp_adj_d02 & value) {
            set_cp_adj_d02(value);
        }
        void set(const cp_adj_d01 & value) {
            set_cp_adj_d01(value);
        }
        void set(const cp_adj_u01 & value) {
            set_cp_adj_u01(value);
        }
        void set(const cp_adj_u02 & value) {
            set_cp_adj_u02(value);
        }
        void set(const cp_adj_u03 & value) {
            set_cp_adj_u03(value);
        }
        void set(const cp_adj_u04 & value) {
            set_cp_adj_u04(value);
        }
        void set(const pwidth & value) {
            set_pwidth(value);
        }
        void set(const vwidth & value) {
            set_vwidth(value);
        }
        void set(const c_cnt & value) {
            set_c_cnt(value);
        }
        void set(const p_cnt & value) {
            set_p_cnt(value);
        }
        void set(const c_bid_miss & value) {
            set_c_bid_miss(value);
        }
        void set(const c_ask_miss & value) {
            set_c_ask_miss(value);
        }
        void set(const p_bid_miss & value) {
            set_p_bid_miss(value);
        }
        void set(const p_ask_miss & value) {
            set_p_ask_miss(value);
        }
        void set(const fit_avg_err & value) {
            set_fit_avg_err(value);
        }
        void set(const fit_avg_abs_err & value) {
            set_fit_avg_abs_err(value);
        }
        void set(const fit_max_prc_err & value) {
            set_fit_max_prc_err(value);
        }
        void set(const fit_err_xx & value) {
            set_fit_err_xx(value);
        }
        void set(const fit_err_cp & value) {
            set_fit_err_cp(value);
        }
        void set(const fit_err_de & value) {
            set_fit_err_de(value);
        }
        void set(const fit_err_bid & value) {
            set_fit_err_bid(value);
        }
        void set(const fit_err_ask & value) {
            set_fit_err_ask(value);
        }
        void set(const fit_err_prc & value) {
            set_fit_err_prc(value);
        }
        void set(const fit_err_vol & value) {
            set_fit_err_vol(value);
        }
        void set(const num_saddle_pts & value) {
            set_num_saddle_pts(value);
        }
        void set(const min_saddle_span & value) {
            set_min_saddle_span(value);
        }
        void set(const max_saddle_curvature & value) {
            set_max_saddle_curvature(value);
        }
        void set(const market_session & value) {
            set_market_session(value);
        }
        void set(const tradeable_status & value) {
            set_tradeable_status(value);
        }
        void set(const surface_result & value) {
            set_surface_result(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const LiveSurfaceCurveV4 & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_fkey);
            set(value.m_u_prc_driver_key);
            set(value.m_u_prc_driver_type);
            set(value.m_u_prc_driver);
            set(value.m_u_prc);
            set(value.m_u_bid);
            set(value.m_u_ask);
            set(value.m_years);
            set(value.m_rate);
            set(value.m_sdiv);
            set(value.m_ddiv);
            set(value.m_ddiv_pv);
            set(value.m_ddiv_source);
            set(value.m_symbol_ratio);
            set(value.m_ex_type);
            set(value.m_model_type);
            set(value.m_price_type);
            set(value.m_earn_cnt);
            set(value.m_earn_cnt_adj);
            set(value.m_axis_vol_rt);
            set(value.m_axis_fuprc);
            set(value.m_moneyness_type);
            set(value.m_price_quote_type);
            set(value.m_atm_vol);
            set(value.m_atm_cen);
            set(value.m_atm_vol_hist);
            set(value.m_atm_cen_hist);
            set(value.m_e_move);
            set(value.m_e_move_hist);
            set(value.m_u_prc_ratio);
            set(value.m_min_atm_vol);
            set(value.m_max_atm_vol);
            set(value.m_min_cpadj_val);
            set(value.m_max_cpadj_val);
            set(value.m_atm_fixed_move);
            set(value.m_atm_phi);
            set(value.m_atm_rho);
            set(value.m_atm_vega);
            set(value.m_slope);
            set(value.m_var_swap_fv);
            set(value.m_min_xaxis);
            set(value.m_max_xaxis);
            set(value.m_skew_ticker);
            set(value.m_x_shift);
            set(value.m_x_mult);
            set(value.m_skew_mult);
            set(value.m_skew_c00);
            set(value.m_skew_c01);
            set(value.m_skew_c02);
            set(value.m_skew_c03);
            set(value.m_skew_c04);
            set(value.m_skew_c05);
            set(value.m_skew_c06);
            set(value.m_skew_c07);
            set(value.m_skew_c08);
            set(value.m_skew_c09);
            set(value.m_skew_c10);
            set(value.m_skew_c11);
            set(value.m_skew_c12);
            set(value.m_skew_c13);
            set(value.m_skew_c14);
            set(value.m_skew_c15);
            set(value.m_skew_c16);
            set(value.m_skew_c17);
            set(value.m_skew_c18);
            set(value.m_skew_c19);
            set(value.m_skew_c20);
            set(value.m_skew_c21);
            set(value.m_skew_c22);
            set(value.m_skew_c23);
            set(value.m_skew_c24);
            set(value.m_skew_c25);
            set(value.m_skew_c26);
            set(value.m_skew_c27);
            set(value.m_skew_c28);
            set(value.m_skew_c29);
            set(value.m_skew_c30);
            set(value.m_cp_adj_d04);
            set(value.m_cp_adj_d03);
            set(value.m_cp_adj_d02);
            set(value.m_cp_adj_d01);
            set(value.m_cp_adj_u01);
            set(value.m_cp_adj_u02);
            set(value.m_cp_adj_u03);
            set(value.m_cp_adj_u04);
            set(value.m_pwidth);
            set(value.m_vwidth);
            set(value.m_c_cnt);
            set(value.m_p_cnt);
            set(value.m_c_bid_miss);
            set(value.m_c_ask_miss);
            set(value.m_p_bid_miss);
            set(value.m_p_ask_miss);
            set(value.m_fit_avg_err);
            set(value.m_fit_avg_abs_err);
            set(value.m_fit_max_prc_err);
            set(value.m_fit_err_xx);
            set(value.m_fit_err_cp);
            set(value.m_fit_err_de);
            set(value.m_fit_err_bid);
            set(value.m_fit_err_ask);
            set(value.m_fit_err_prc);
            set(value.m_fit_err_vol);
            set(value.m_num_saddle_pts);
            set(value.m_min_saddle_span);
            set(value.m_max_saddle_curvature);
            set(value.m_market_session);
            set(value.m_tradeable_status);
            set(value.m_surface_result);
            set(value.m_timestamp);
        }

        LiveSurfaceCurveV4() {
            m__meta.set_message_type("LiveSurfaceCurveV4");
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
            
            return false;
        }

        bool SerializeToString(std::string *s) const {
            
            return false;
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
             *this = LiveSurfaceCurveV4{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeFkey() const {
            return (m_fkey.ByteSizeLong() > 0);
        }
        bool IncludeUPrcDriverKey() const {
            return (m_u_prc_driver_key.ByteSizeLong() > 0);
        }
        bool IncludeUPrcDriver() const {
            return !(m_u_prc_driver == 0.0);
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
        bool IncludeDdivPv() const {
            return !(m_ddiv_pv == 0.0);
        }
        bool IncludeSymbolRatio() const {
            return !(m_symbol_ratio == 0.0);
        }
        bool IncludeEarnCnt() const {
            return !(m_earn_cnt == 0.0);
        }
        bool IncludeEarnCntAdj() const {
            return !(m_earn_cnt_adj == 0.0);
        }
        bool IncludeAxisVolRt() const {
            return !(m_axis_vol_rt == 0.0);
        }
        bool IncludeAxisFuprc() const {
            return !(m_axis_fuprc == 0.0);
        }
        bool IncludeAtmVol() const {
            return !(m_atm_vol == 0.0);
        }
        bool IncludeAtmCen() const {
            return !(m_atm_cen == 0.0);
        }
        bool IncludeAtmVolHist() const {
            return !(m_atm_vol_hist == 0.0);
        }
        bool IncludeAtmCenHist() const {
            return !(m_atm_cen_hist == 0.0);
        }
        bool IncludeEMove() const {
            return !(m_e_move == 0.0);
        }
        bool IncludeEMoveHist() const {
            return !(m_e_move_hist == 0.0);
        }
        bool IncludeUPrcRatio() const {
            return !(m_u_prc_ratio == 0.0);
        }
        bool IncludeMinAtmVol() const {
            return !(m_min_atm_vol == 0.0);
        }
        bool IncludeMaxAtmVol() const {
            return !(m_max_atm_vol == 0.0);
        }
        bool IncludeMinCpadjVal() const {
            return !(m_min_cpadj_val == 0.0);
        }
        bool IncludeMaxCpadjVal() const {
            return !(m_max_cpadj_val == 0.0);
        }
        bool IncludeAtmFixedMove() const {
            return !(m_atm_fixed_move == 0.0);
        }
        bool IncludeAtmPhi() const {
            return !(m_atm_phi == 0.0);
        }
        bool IncludeAtmRho() const {
            return !(m_atm_rho == 0.0);
        }
        bool IncludeAtmVega() const {
            return !(m_atm_vega == 0.0);
        }
        bool IncludeSlope() const {
            return !(m_slope == 0.0);
        }
        bool IncludeVarSwapFv() const {
            return !(m_var_swap_fv == 0.0);
        }
        bool IncludeMinXaxis() const {
            return !(m_min_xaxis == 0.0);
        }
        bool IncludeMaxXaxis() const {
            return !(m_max_xaxis == 0.0);
        }
        bool IncludeSkewTicker() const {
            return (m_skew_ticker.ByteSizeLong() > 0);
        }
        bool IncludeXShift() const {
            return !(m_x_shift == 0.0);
        }
        bool IncludeXMult() const {
            return !(m_x_mult == 0.0);
        }
        bool IncludeSkewMult() const {
            return !(m_skew_mult == 0.0);
        }
        bool IncludeSkewC00() const {
            return !(m_skew_c00 == 0.0);
        }
        bool IncludeSkewC01() const {
            return !(m_skew_c01 == 0.0);
        }
        bool IncludeSkewC02() const {
            return !(m_skew_c02 == 0.0);
        }
        bool IncludeSkewC03() const {
            return !(m_skew_c03 == 0.0);
        }
        bool IncludeSkewC04() const {
            return !(m_skew_c04 == 0.0);
        }
        bool IncludeSkewC05() const {
            return !(m_skew_c05 == 0.0);
        }
        bool IncludeSkewC06() const {
            return !(m_skew_c06 == 0.0);
        }
        bool IncludeSkewC07() const {
            return !(m_skew_c07 == 0.0);
        }
        bool IncludeSkewC08() const {
            return !(m_skew_c08 == 0.0);
        }
        bool IncludeSkewC09() const {
            return !(m_skew_c09 == 0.0);
        }
        bool IncludeSkewC10() const {
            return !(m_skew_c10 == 0.0);
        }
        bool IncludeSkewC11() const {
            return !(m_skew_c11 == 0.0);
        }
        bool IncludeSkewC12() const {
            return !(m_skew_c12 == 0.0);
        }
        bool IncludeSkewC13() const {
            return !(m_skew_c13 == 0.0);
        }
        bool IncludeSkewC14() const {
            return !(m_skew_c14 == 0.0);
        }
        bool IncludeSkewC15() const {
            return !(m_skew_c15 == 0.0);
        }
        bool IncludeSkewC16() const {
            return !(m_skew_c16 == 0.0);
        }
        bool IncludeSkewC17() const {
            return !(m_skew_c17 == 0.0);
        }
        bool IncludeSkewC18() const {
            return !(m_skew_c18 == 0.0);
        }
        bool IncludeSkewC19() const {
            return !(m_skew_c19 == 0.0);
        }
        bool IncludeSkewC20() const {
            return !(m_skew_c20 == 0.0);
        }
        bool IncludeSkewC21() const {
            return !(m_skew_c21 == 0.0);
        }
        bool IncludeSkewC22() const {
            return !(m_skew_c22 == 0.0);
        }
        bool IncludeSkewC23() const {
            return !(m_skew_c23 == 0.0);
        }
        bool IncludeSkewC24() const {
            return !(m_skew_c24 == 0.0);
        }
        bool IncludeSkewC25() const {
            return !(m_skew_c25 == 0.0);
        }
        bool IncludeSkewC26() const {
            return !(m_skew_c26 == 0.0);
        }
        bool IncludeSkewC27() const {
            return !(m_skew_c27 == 0.0);
        }
        bool IncludeSkewC28() const {
            return !(m_skew_c28 == 0.0);
        }
        bool IncludeSkewC29() const {
            return !(m_skew_c29 == 0.0);
        }
        bool IncludeSkewC30() const {
            return !(m_skew_c30 == 0.0);
        }
        bool IncludeCpAdjD04() const {
            return !(m_cp_adj_d04 == 0.0);
        }
        bool IncludeCpAdjD03() const {
            return !(m_cp_adj_d03 == 0.0);
        }
        bool IncludeCpAdjD02() const {
            return !(m_cp_adj_d02 == 0.0);
        }
        bool IncludeCpAdjD01() const {
            return !(m_cp_adj_d01 == 0.0);
        }
        bool IncludeCpAdjU01() const {
            return !(m_cp_adj_u01 == 0.0);
        }
        bool IncludeCpAdjU02() const {
            return !(m_cp_adj_u02 == 0.0);
        }
        bool IncludeCpAdjU03() const {
            return !(m_cp_adj_u03 == 0.0);
        }
        bool IncludeCpAdjU04() const {
            return !(m_cp_adj_u04 == 0.0);
        }
        bool IncludePwidth() const {
            return !(m_pwidth == 0.0);
        }
        bool IncludeVwidth() const {
            return !(m_vwidth == 0.0);
        }
        bool IncludeCCnt() const {
            return !(m_c_cnt == 0);
        }
        bool IncludePCnt() const {
            return !(m_p_cnt == 0);
        }
        bool IncludeCBidMiss() const {
            return !(m_c_bid_miss == 0);
        }
        bool IncludeCAskMiss() const {
            return !(m_c_ask_miss == 0);
        }
        bool IncludePBidMiss() const {
            return !(m_p_bid_miss == 0);
        }
        bool IncludePAskMiss() const {
            return !(m_p_ask_miss == 0);
        }
        bool IncludeFitAvgErr() const {
            return !(m_fit_avg_err == 0.0);
        }
        bool IncludeFitAvgAbsErr() const {
            return !(m_fit_avg_abs_err == 0.0);
        }
        bool IncludeFitMaxPrcErr() const {
            return !(m_fit_max_prc_err == 0.0);
        }
        bool IncludeFitErrXx() const {
            return !(m_fit_err_xx == 0.0);
        }
        bool IncludeFitErrDe() const {
            return !(m_fit_err_de == 0.0);
        }
        bool IncludeFitErrBid() const {
            return !(m_fit_err_bid == 0.0);
        }
        bool IncludeFitErrAsk() const {
            return !(m_fit_err_ask == 0.0);
        }
        bool IncludeFitErrPrc() const {
            return !(m_fit_err_prc == 0.0);
        }
        bool IncludeFitErrVol() const {
            return !(m_fit_err_vol == 0.0);
        }
        bool IncludeNumSaddlePts() const {
            return !(m_num_saddle_pts == 0);
        }
        bool IncludeMinSaddleSpan() const {
            return !(m_min_saddle_span == 0.0);
        }
        bool IncludeMaxSaddleCurvature() const {
            return !(m_max_saddle_curvature == 0.0);
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
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(100, tickerKeyLayout);
            }
            if ( IncludeFkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_fkey.setCodecExpiryKey(expiryKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(103, expiryKeyLayout);
            }
            if ( IncludeUPrcDriverKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_u_prc_driver_key.setCodecExpiryKey(expiryKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(106, expiryKeyLayout);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_u_prc_driver_type)));
            if ( IncludeUPrcDriver()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(112,m_u_prc_driver);
            }
            if ( IncludeUPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(115,m_u_prc);
            }
            if ( IncludeUBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(118,m_u_bid);
            }
            if ( IncludeUAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(121,m_u_ask);
            }
            if ( IncludeYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_years);
            }
            if ( IncludeRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_rate);
            }
            if ( IncludeSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_sdiv);
            }
            if ( IncludeDdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_ddiv);
            }
            if ( IncludeDdivPv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_ddiv_pv);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DDivSource>(m_ddiv_source)));
            if ( IncludeSymbolRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_symbol_ratio);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>(m_ex_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcModelType>(m_model_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcPriceType>(m_price_type)));
            if ( IncludeEarnCnt()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(154,m_earn_cnt);
            }
            if ( IncludeEarnCntAdj()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_earn_cnt_adj);
            }
            if ( IncludeAxisVolRt()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(160,m_axis_vol_rt);
            }
            if ( IncludeAxisFuprc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_axis_fuprc);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(166,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MoneynessType>(m_moneyness_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(169,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceQuoteType>(m_price_quote_type)));
            if ( IncludeAtmVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(172,m_atm_vol);
            }
            if ( IncludeAtmCen()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(175,m_atm_cen);
            }
            if ( IncludeAtmVolHist()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_atm_vol_hist);
            }
            if ( IncludeAtmCenHist()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(181,m_atm_cen_hist);
            }
            if ( IncludeEMove()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(184,m_e_move);
            }
            if ( IncludeEMoveHist()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(187,m_e_move_hist);
            }
            if ( IncludeUPrcRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(190,m_u_prc_ratio);
            }
            if ( IncludeMinAtmVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(193,m_min_atm_vol);
            }
            if ( IncludeMaxAtmVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(196,m_max_atm_vol);
            }
            if ( IncludeMinCpadjVal()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(199,m_min_cpadj_val);
            }
            if ( IncludeMaxCpadjVal()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(202,m_max_cpadj_val);
            }
            if ( IncludeAtmFixedMove()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(205,m_atm_fixed_move);
            }
            if ( IncludeAtmPhi()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(208,m_atm_phi);
            }
            if ( IncludeAtmRho()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(211,m_atm_rho);
            }
            if ( IncludeAtmVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(214,m_atm_vega);
            }
            if ( IncludeSlope()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(217,m_slope);
            }
            if ( IncludeVarSwapFv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(220,m_var_swap_fv);
            }
            if ( IncludeMinXaxis()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(223,m_min_xaxis);
            }
            if ( IncludeMaxXaxis()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(226,m_max_xaxis);
            }
            if ( IncludeSkewTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_skew_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(229, tickerKeyLayout);
            }
            if ( IncludeXShift()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(232,m_x_shift);
            }
            if ( IncludeXMult()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(235,m_x_mult);
            }
            if ( IncludeSkewMult()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(238,m_skew_mult);
            }
            if ( IncludeSkewC00()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(241,m_skew_c00);
            }
            if ( IncludeSkewC01()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(244,m_skew_c01);
            }
            if ( IncludeSkewC02()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(247,m_skew_c02);
            }
            if ( IncludeSkewC03()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(250,m_skew_c03);
            }
            if ( IncludeSkewC04()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(253,m_skew_c04);
            }
            if ( IncludeSkewC05()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(256,m_skew_c05);
            }
            if ( IncludeSkewC06()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(259,m_skew_c06);
            }
            if ( IncludeSkewC07()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(262,m_skew_c07);
            }
            if ( IncludeSkewC08()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(265,m_skew_c08);
            }
            if ( IncludeSkewC09()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(268,m_skew_c09);
            }
            if ( IncludeSkewC10()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(271,m_skew_c10);
            }
            if ( IncludeSkewC11()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(274,m_skew_c11);
            }
            if ( IncludeSkewC12()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(277,m_skew_c12);
            }
            if ( IncludeSkewC13()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(280,m_skew_c13);
            }
            if ( IncludeSkewC14()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(283,m_skew_c14);
            }
            if ( IncludeSkewC15()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(286,m_skew_c15);
            }
            if ( IncludeSkewC16()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(289,m_skew_c16);
            }
            if ( IncludeSkewC17()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(292,m_skew_c17);
            }
            if ( IncludeSkewC18()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(295,m_skew_c18);
            }
            if ( IncludeSkewC19()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(298,m_skew_c19);
            }
            if ( IncludeSkewC20()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(301,m_skew_c20);
            }
            if ( IncludeSkewC21()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(304,m_skew_c21);
            }
            if ( IncludeSkewC22()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(307,m_skew_c22);
            }
            if ( IncludeSkewC23()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(310,m_skew_c23);
            }
            if ( IncludeSkewC24()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(313,m_skew_c24);
            }
            if ( IncludeSkewC25()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(316,m_skew_c25);
            }
            if ( IncludeSkewC26()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(319,m_skew_c26);
            }
            if ( IncludeSkewC27()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(322,m_skew_c27);
            }
            if ( IncludeSkewC28()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(325,m_skew_c28);
            }
            if ( IncludeSkewC29()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(328,m_skew_c29);
            }
            if ( IncludeSkewC30()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(331,m_skew_c30);
            }
            if ( IncludeCpAdjD04()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(334,m_cp_adj_d04);
            }
            if ( IncludeCpAdjD03()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(337,m_cp_adj_d03);
            }
            if ( IncludeCpAdjD02()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(340,m_cp_adj_d02);
            }
            if ( IncludeCpAdjD01()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(343,m_cp_adj_d01);
            }
            if ( IncludeCpAdjU01()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(346,m_cp_adj_u01);
            }
            if ( IncludeCpAdjU02()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(349,m_cp_adj_u02);
            }
            if ( IncludeCpAdjU03()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(352,m_cp_adj_u03);
            }
            if ( IncludeCpAdjU04()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(355,m_cp_adj_u04);
            }
            if ( IncludePwidth()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(358,m_pwidth);
            }
            if ( IncludeVwidth()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(361,m_vwidth);
            }
            if ( IncludeCCnt()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(364,m_c_cnt);
            }
            if ( IncludePCnt()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(367,m_p_cnt);
            }
            if ( IncludeCBidMiss()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(370,m_c_bid_miss);
            }
            if ( IncludeCAskMiss()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(373,m_c_ask_miss);
            }
            if ( IncludePBidMiss()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(376,m_p_bid_miss);
            }
            if ( IncludePAskMiss()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(379,m_p_ask_miss);
            }
            if ( IncludeFitAvgErr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(382,m_fit_avg_err);
            }
            if ( IncludeFitAvgAbsErr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(385,m_fit_avg_abs_err);
            }
            if ( IncludeFitMaxPrcErr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(388,m_fit_max_prc_err);
            }
            if ( IncludeFitErrXx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(391,m_fit_err_xx);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(394,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CallPut>(m_fit_err_cp)));
            if ( IncludeFitErrDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(397,m_fit_err_de);
            }
            if ( IncludeFitErrBid()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(400,m_fit_err_bid);
            }
            if ( IncludeFitErrAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(403,m_fit_err_ask);
            }
            if ( IncludeFitErrPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(406,m_fit_err_prc);
            }
            if ( IncludeFitErrVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(409,m_fit_err_vol);
            }
            if ( IncludeNumSaddlePts()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(412,m_num_saddle_pts);
            }
            if ( IncludeMinSaddleSpan()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(415,m_min_saddle_span);
            }
            if ( IncludeMaxSaddleCurvature()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(418,m_max_saddle_curvature);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(421,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>(m_market_session)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(424,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradeableStatus>(m_tradeable_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(427,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SurfaceResult>(m_surface_result)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(430, m_timestamp);
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
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 100, tickerKeyLayout);
            }
            if ( IncludeFkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_fkey.setCodecExpiryKey(expiryKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 103, expiryKeyLayout);
            }
            if ( IncludeUPrcDriverKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_u_prc_driver_key.setCodecExpiryKey(expiryKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 106, expiryKeyLayout);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_u_prc_driver_type)));
            if ( IncludeUPrcDriver()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,112,m_u_prc_driver);
            }
            if ( IncludeUPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,115,m_u_prc);
            }
            if ( IncludeUBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,118,m_u_bid);
            }
            if ( IncludeUAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,121,m_u_ask);
            }
            if ( IncludeYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_years);
            }
            if ( IncludeRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_rate);
            }
            if ( IncludeSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_sdiv);
            }
            if ( IncludeDdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_ddiv);
            }
            if ( IncludeDdivPv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_ddiv_pv);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DDivSource>(m_ddiv_source)));
            if ( IncludeSymbolRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_symbol_ratio);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>(m_ex_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcModelType>(m_model_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcPriceType>(m_price_type)));
            if ( IncludeEarnCnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,154,m_earn_cnt);
            }
            if ( IncludeEarnCntAdj()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_earn_cnt_adj);
            }
            if ( IncludeAxisVolRt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,160,m_axis_vol_rt);
            }
            if ( IncludeAxisFuprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_axis_fuprc);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,166,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MoneynessType>(m_moneyness_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,169,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceQuoteType>(m_price_quote_type)));
            if ( IncludeAtmVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,172,m_atm_vol);
            }
            if ( IncludeAtmCen()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,175,m_atm_cen);
            }
            if ( IncludeAtmVolHist()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_atm_vol_hist);
            }
            if ( IncludeAtmCenHist()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,181,m_atm_cen_hist);
            }
            if ( IncludeEMove()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,184,m_e_move);
            }
            if ( IncludeEMoveHist()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,187,m_e_move_hist);
            }
            if ( IncludeUPrcRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,190,m_u_prc_ratio);
            }
            if ( IncludeMinAtmVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,193,m_min_atm_vol);
            }
            if ( IncludeMaxAtmVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,196,m_max_atm_vol);
            }
            if ( IncludeMinCpadjVal()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,199,m_min_cpadj_val);
            }
            if ( IncludeMaxCpadjVal()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,202,m_max_cpadj_val);
            }
            if ( IncludeAtmFixedMove()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,205,m_atm_fixed_move);
            }
            if ( IncludeAtmPhi()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,208,m_atm_phi);
            }
            if ( IncludeAtmRho()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,211,m_atm_rho);
            }
            if ( IncludeAtmVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,214,m_atm_vega);
            }
            if ( IncludeSlope()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,217,m_slope);
            }
            if ( IncludeVarSwapFv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,220,m_var_swap_fv);
            }
            if ( IncludeMinXaxis()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,223,m_min_xaxis);
            }
            if ( IncludeMaxXaxis()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,226,m_max_xaxis);
            }
            if ( IncludeSkewTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_skew_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 229, tickerKeyLayout);
            }
            if ( IncludeXShift()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,232,m_x_shift);
            }
            if ( IncludeXMult()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,235,m_x_mult);
            }
            if ( IncludeSkewMult()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,238,m_skew_mult);
            }
            if ( IncludeSkewC00()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,241,m_skew_c00);
            }
            if ( IncludeSkewC01()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,244,m_skew_c01);
            }
            if ( IncludeSkewC02()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,247,m_skew_c02);
            }
            if ( IncludeSkewC03()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,250,m_skew_c03);
            }
            if ( IncludeSkewC04()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,253,m_skew_c04);
            }
            if ( IncludeSkewC05()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,256,m_skew_c05);
            }
            if ( IncludeSkewC06()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,259,m_skew_c06);
            }
            if ( IncludeSkewC07()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,262,m_skew_c07);
            }
            if ( IncludeSkewC08()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,265,m_skew_c08);
            }
            if ( IncludeSkewC09()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,268,m_skew_c09);
            }
            if ( IncludeSkewC10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,271,m_skew_c10);
            }
            if ( IncludeSkewC11()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,274,m_skew_c11);
            }
            if ( IncludeSkewC12()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,277,m_skew_c12);
            }
            if ( IncludeSkewC13()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,280,m_skew_c13);
            }
            if ( IncludeSkewC14()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,283,m_skew_c14);
            }
            if ( IncludeSkewC15()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,286,m_skew_c15);
            }
            if ( IncludeSkewC16()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,289,m_skew_c16);
            }
            if ( IncludeSkewC17()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,292,m_skew_c17);
            }
            if ( IncludeSkewC18()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,295,m_skew_c18);
            }
            if ( IncludeSkewC19()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,298,m_skew_c19);
            }
            if ( IncludeSkewC20()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,301,m_skew_c20);
            }
            if ( IncludeSkewC21()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,304,m_skew_c21);
            }
            if ( IncludeSkewC22()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,307,m_skew_c22);
            }
            if ( IncludeSkewC23()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,310,m_skew_c23);
            }
            if ( IncludeSkewC24()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,313,m_skew_c24);
            }
            if ( IncludeSkewC25()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,316,m_skew_c25);
            }
            if ( IncludeSkewC26()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,319,m_skew_c26);
            }
            if ( IncludeSkewC27()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,322,m_skew_c27);
            }
            if ( IncludeSkewC28()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,325,m_skew_c28);
            }
            if ( IncludeSkewC29()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,328,m_skew_c29);
            }
            if ( IncludeSkewC30()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,331,m_skew_c30);
            }
            if ( IncludeCpAdjD04()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,334,m_cp_adj_d04);
            }
            if ( IncludeCpAdjD03()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,337,m_cp_adj_d03);
            }
            if ( IncludeCpAdjD02()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,340,m_cp_adj_d02);
            }
            if ( IncludeCpAdjD01()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,343,m_cp_adj_d01);
            }
            if ( IncludeCpAdjU01()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,346,m_cp_adj_u01);
            }
            if ( IncludeCpAdjU02()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,349,m_cp_adj_u02);
            }
            if ( IncludeCpAdjU03()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,352,m_cp_adj_u03);
            }
            if ( IncludeCpAdjU04()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,355,m_cp_adj_u04);
            }
            if ( IncludePwidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,358,m_pwidth);
            }
            if ( IncludeVwidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,361,m_vwidth);
            }
            if ( IncludeCCnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,364,m_c_cnt);
            }
            if ( IncludePCnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,367,m_p_cnt);
            }
            if ( IncludeCBidMiss()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,370,m_c_bid_miss);
            }
            if ( IncludeCAskMiss()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,373,m_c_ask_miss);
            }
            if ( IncludePBidMiss()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,376,m_p_bid_miss);
            }
            if ( IncludePAskMiss()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,379,m_p_ask_miss);
            }
            if ( IncludeFitAvgErr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,382,m_fit_avg_err);
            }
            if ( IncludeFitAvgAbsErr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,385,m_fit_avg_abs_err);
            }
            if ( IncludeFitMaxPrcErr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,388,m_fit_max_prc_err);
            }
            if ( IncludeFitErrXx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,391,m_fit_err_xx);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,394,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CallPut>(m_fit_err_cp)));
            if ( IncludeFitErrDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,397,m_fit_err_de);
            }
            if ( IncludeFitErrBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,400,m_fit_err_bid);
            }
            if ( IncludeFitErrAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,403,m_fit_err_ask);
            }
            if ( IncludeFitErrPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,406,m_fit_err_prc);
            }
            if ( IncludeFitErrVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,409,m_fit_err_vol);
            }
            if ( IncludeNumSaddlePts()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,412,m_num_saddle_pts);
            }
            if ( IncludeMinSaddleSpan()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,415,m_min_saddle_span);
            }
            if ( IncludeMaxSaddleCurvature()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,418,m_max_saddle_curvature);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,421,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>(m_market_session)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,424,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradeableStatus>(m_tradeable_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,427,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SurfaceResult>(m_surface_result)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 430, m_timestamp);
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
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_fkey.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_u_prc_driver_key.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_u_prc_driver_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc_driver = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ddiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ddiv_pv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ddiv_source = static_cast<spiderrock::protobuf::api::DDivSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_symbol_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ex_type = static_cast<spiderrock::protobuf::api::ExerciseType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 148: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_model_type = static_cast<spiderrock::protobuf::api::CalcModelType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 151: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_type = static_cast<spiderrock::protobuf::api::CalcPriceType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_earn_cnt = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_earn_cnt_adj = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_axis_vol_rt = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_axis_fuprc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 166: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_moneyness_type = static_cast<spiderrock::protobuf::api::MoneynessType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 169: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_quote_type = static_cast<spiderrock::protobuf::api::PriceQuoteType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_vol_hist = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_hist = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_e_move = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_e_move_hist = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc_ratio = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_atm_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_atm_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_min_cpadj_val = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_max_cpadj_val = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_fixed_move = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_phi = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_rho = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_slope = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_var_swap_fv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_xaxis = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 226: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_xaxis = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 229: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_skew_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 232: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_x_shift = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_x_mult = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 238: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_skew_mult = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 241: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c00 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 244: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c01 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 247: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c02 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 250: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c03 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 253: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c04 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 256: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c05 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 259: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c06 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 262: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c07 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 265: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c08 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 268: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c09 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 271: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c10 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 274: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c11 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 277: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c12 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 280: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c13 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 283: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c14 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 286: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c15 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 289: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c16 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 292: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c17 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 295: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c18 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 298: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c19 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 301: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c20 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 304: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c21 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 307: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c22 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 310: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c23 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 313: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c24 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 316: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c25 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 319: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c26 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 322: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c27 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 325: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c28 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 328: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c29 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 331: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c30 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 334: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cp_adj_d04 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 337: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cp_adj_d03 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 340: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cp_adj_d02 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 343: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cp_adj_d01 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 346: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cp_adj_u01 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 349: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cp_adj_u02 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 352: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cp_adj_u03 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 355: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cp_adj_u04 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 358: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pwidth = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 361: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vwidth = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 364: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_c_cnt = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 367: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_p_cnt = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 370: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_c_bid_miss = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 373: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_c_ask_miss = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 376: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_p_bid_miss = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 379: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_p_ask_miss = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 382: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fit_avg_err = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 385: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fit_avg_abs_err = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 388: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fit_max_prc_err = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 391: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fit_err_xx = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 394: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_fit_err_cp = static_cast<spiderrock::protobuf::api::CallPut>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 397: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fit_err_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 400: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fit_err_bid = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 403: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fit_err_ask = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 406: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fit_err_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 409: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fit_err_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 412: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_saddle_pts = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 415: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_saddle_span = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 418: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_saddle_curvature = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 421: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_market_session = static_cast<spiderrock::protobuf::api::MarketSession>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 424: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_tradeable_status = static_cast<spiderrock::protobuf::api::TradeableStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 427: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_surface_result = static_cast<spiderrock::protobuf::api::SurfaceResult>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 430: {
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

    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::_meta>() const { return LiveSurfaceCurveV4::_meta{ m__meta}; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::pkey>() const { return LiveSurfaceCurveV4::pkey{ m_pkey}; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::ticker>() const { return LiveSurfaceCurveV4::ticker{ m_ticker}; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::fkey>() const { return LiveSurfaceCurveV4::fkey{ m_fkey}; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::u_prc_driver_key>() const { return LiveSurfaceCurveV4::u_prc_driver_key{ m_u_prc_driver_key}; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::u_prc_driver_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_u_prc_driver_type)); }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::u_prc_driver>() const { return m_u_prc_driver; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::u_prc>() const { return m_u_prc; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::u_bid>() const { return m_u_bid; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::u_ask>() const { return m_u_ask; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::years>() const { return m_years; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::rate>() const { return m_rate; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::sdiv>() const { return m_sdiv; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::ddiv>() const { return m_ddiv; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::ddiv_pv>() const { return m_ddiv_pv; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::ddiv_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DDivSource>( m_ddiv_source)); }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::symbol_ratio>() const { return m_symbol_ratio; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::ex_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>( m_ex_type)); }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::model_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcModelType>( m_model_type)); }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::price_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcPriceType>( m_price_type)); }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::earn_cnt>() const { return m_earn_cnt; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::earn_cnt_adj>() const { return m_earn_cnt_adj; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::axis_vol_rt>() const { return m_axis_vol_rt; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::axis_fuprc>() const { return m_axis_fuprc; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::moneyness_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MoneynessType>( m_moneyness_type)); }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::price_quote_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceQuoteType>( m_price_quote_type)); }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::atm_vol>() const { return m_atm_vol; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::atm_cen>() const { return m_atm_cen; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::atm_vol_hist>() const { return m_atm_vol_hist; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::atm_cen_hist>() const { return m_atm_cen_hist; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::e_move>() const { return m_e_move; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::e_move_hist>() const { return m_e_move_hist; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::u_prc_ratio>() const { return m_u_prc_ratio; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::min_atm_vol>() const { return m_min_atm_vol; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::max_atm_vol>() const { return m_max_atm_vol; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::min_cpadj_val>() const { return m_min_cpadj_val; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::max_cpadj_val>() const { return m_max_cpadj_val; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::atm_fixed_move>() const { return m_atm_fixed_move; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::atm_phi>() const { return m_atm_phi; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::atm_rho>() const { return m_atm_rho; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::atm_vega>() const { return m_atm_vega; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::slope>() const { return m_slope; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::var_swap_fv>() const { return m_var_swap_fv; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::min_xaxis>() const { return m_min_xaxis; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::max_xaxis>() const { return m_max_xaxis; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_ticker>() const { return LiveSurfaceCurveV4::skew_ticker{ m_skew_ticker}; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::x_shift>() const { return m_x_shift; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::x_mult>() const { return m_x_mult; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_mult>() const { return m_skew_mult; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c00>() const { return m_skew_c00; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c01>() const { return m_skew_c01; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c02>() const { return m_skew_c02; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c03>() const { return m_skew_c03; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c04>() const { return m_skew_c04; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c05>() const { return m_skew_c05; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c06>() const { return m_skew_c06; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c07>() const { return m_skew_c07; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c08>() const { return m_skew_c08; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c09>() const { return m_skew_c09; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c10>() const { return m_skew_c10; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c11>() const { return m_skew_c11; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c12>() const { return m_skew_c12; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c13>() const { return m_skew_c13; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c14>() const { return m_skew_c14; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c15>() const { return m_skew_c15; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c16>() const { return m_skew_c16; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c17>() const { return m_skew_c17; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c18>() const { return m_skew_c18; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c19>() const { return m_skew_c19; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c20>() const { return m_skew_c20; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c21>() const { return m_skew_c21; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c22>() const { return m_skew_c22; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c23>() const { return m_skew_c23; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c24>() const { return m_skew_c24; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c25>() const { return m_skew_c25; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c26>() const { return m_skew_c26; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c27>() const { return m_skew_c27; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c28>() const { return m_skew_c28; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c29>() const { return m_skew_c29; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::skew_c30>() const { return m_skew_c30; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::cp_adj_d04>() const { return m_cp_adj_d04; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::cp_adj_d03>() const { return m_cp_adj_d03; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::cp_adj_d02>() const { return m_cp_adj_d02; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::cp_adj_d01>() const { return m_cp_adj_d01; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::cp_adj_u01>() const { return m_cp_adj_u01; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::cp_adj_u02>() const { return m_cp_adj_u02; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::cp_adj_u03>() const { return m_cp_adj_u03; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::cp_adj_u04>() const { return m_cp_adj_u04; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::pwidth>() const { return m_pwidth; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::vwidth>() const { return m_vwidth; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::c_cnt>() const { return m_c_cnt; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::p_cnt>() const { return m_p_cnt; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::c_bid_miss>() const { return m_c_bid_miss; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::c_ask_miss>() const { return m_c_ask_miss; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::p_bid_miss>() const { return m_p_bid_miss; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::p_ask_miss>() const { return m_p_ask_miss; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::fit_avg_err>() const { return m_fit_avg_err; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::fit_avg_abs_err>() const { return m_fit_avg_abs_err; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::fit_max_prc_err>() const { return m_fit_max_prc_err; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::fit_err_xx>() const { return m_fit_err_xx; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::fit_err_cp>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CallPut>( m_fit_err_cp)); }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::fit_err_de>() const { return m_fit_err_de; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::fit_err_bid>() const { return m_fit_err_bid; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::fit_err_ask>() const { return m_fit_err_ask; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::fit_err_prc>() const { return m_fit_err_prc; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::fit_err_vol>() const { return m_fit_err_vol; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::num_saddle_pts>() const { return m_num_saddle_pts; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::min_saddle_span>() const { return m_min_saddle_span; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::max_saddle_curvature>() const { return m_max_saddle_curvature; }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::market_session>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>( m_market_session)); }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::tradeable_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradeableStatus>( m_tradeable_status)); }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::surface_result>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SurfaceResult>( m_surface_result)); }
    template<> inline const auto LiveSurfaceCurveV4::get<LiveSurfaceCurveV4::timestamp>() const { return m_timestamp; }
    template<> inline const auto LiveSurfaceCurveV4_PKey::get<LiveSurfaceCurveV4_PKey::ekey>() const { return LiveSurfaceCurveV4_PKey::ekey{m_ekey}; }
    template<> inline const auto LiveSurfaceCurveV4_PKey::get<LiveSurfaceCurveV4_PKey::surface_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SurfaceCurveType>(m_surface_type));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const LiveSurfaceCurveV4_PKey& m) {
        o << "\"ekey\":{" << m.get<LiveSurfaceCurveV4_PKey::ekey>() << "}";
        o << ",\"surface_type\":" << (int64_t)m.get<LiveSurfaceCurveV4_PKey::surface_type>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const LiveSurfaceCurveV4& m) {
        o << "\"_meta\":{" << m.get<LiveSurfaceCurveV4::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<LiveSurfaceCurveV4::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<LiveSurfaceCurveV4::ticker>() << "}";
        o << ",\"fkey\":{" << m.get<LiveSurfaceCurveV4::fkey>() << "}";
        o << ",\"u_prc_driver_key\":{" << m.get<LiveSurfaceCurveV4::u_prc_driver_key>() << "}";
        o << ",\"u_prc_driver_type\":" << (int64_t)m.get<LiveSurfaceCurveV4::u_prc_driver_type>();
        o << ",\"u_prc_driver\":" << m.get<LiveSurfaceCurveV4::u_prc_driver>();
        o << ",\"u_prc\":" << m.get<LiveSurfaceCurveV4::u_prc>();
        o << ",\"u_bid\":" << m.get<LiveSurfaceCurveV4::u_bid>();
        o << ",\"u_ask\":" << m.get<LiveSurfaceCurveV4::u_ask>();
        o << ",\"years\":" << m.get<LiveSurfaceCurveV4::years>();
        o << ",\"rate\":" << m.get<LiveSurfaceCurveV4::rate>();
        o << ",\"sdiv\":" << m.get<LiveSurfaceCurveV4::sdiv>();
        o << ",\"ddiv\":" << m.get<LiveSurfaceCurveV4::ddiv>();
        o << ",\"ddiv_pv\":" << m.get<LiveSurfaceCurveV4::ddiv_pv>();
        o << ",\"ddiv_source\":" << (int64_t)m.get<LiveSurfaceCurveV4::ddiv_source>();
        o << ",\"symbol_ratio\":" << m.get<LiveSurfaceCurveV4::symbol_ratio>();
        o << ",\"ex_type\":" << (int64_t)m.get<LiveSurfaceCurveV4::ex_type>();
        o << ",\"model_type\":" << (int64_t)m.get<LiveSurfaceCurveV4::model_type>();
        o << ",\"price_type\":" << (int64_t)m.get<LiveSurfaceCurveV4::price_type>();
        o << ",\"earn_cnt\":" << m.get<LiveSurfaceCurveV4::earn_cnt>();
        o << ",\"earn_cnt_adj\":" << m.get<LiveSurfaceCurveV4::earn_cnt_adj>();
        o << ",\"axis_vol_rt\":" << m.get<LiveSurfaceCurveV4::axis_vol_rt>();
        o << ",\"axis_fuprc\":" << m.get<LiveSurfaceCurveV4::axis_fuprc>();
        o << ",\"moneyness_type\":" << (int64_t)m.get<LiveSurfaceCurveV4::moneyness_type>();
        o << ",\"price_quote_type\":" << (int64_t)m.get<LiveSurfaceCurveV4::price_quote_type>();
        o << ",\"atm_vol\":" << m.get<LiveSurfaceCurveV4::atm_vol>();
        o << ",\"atm_cen\":" << m.get<LiveSurfaceCurveV4::atm_cen>();
        o << ",\"atm_vol_hist\":" << m.get<LiveSurfaceCurveV4::atm_vol_hist>();
        o << ",\"atm_cen_hist\":" << m.get<LiveSurfaceCurveV4::atm_cen_hist>();
        o << ",\"e_move\":" << m.get<LiveSurfaceCurveV4::e_move>();
        o << ",\"e_move_hist\":" << m.get<LiveSurfaceCurveV4::e_move_hist>();
        o << ",\"u_prc_ratio\":" << m.get<LiveSurfaceCurveV4::u_prc_ratio>();
        o << ",\"min_atm_vol\":" << m.get<LiveSurfaceCurveV4::min_atm_vol>();
        o << ",\"max_atm_vol\":" << m.get<LiveSurfaceCurveV4::max_atm_vol>();
        o << ",\"min_cpadj_val\":" << m.get<LiveSurfaceCurveV4::min_cpadj_val>();
        o << ",\"max_cpadj_val\":" << m.get<LiveSurfaceCurveV4::max_cpadj_val>();
        o << ",\"atm_fixed_move\":" << m.get<LiveSurfaceCurveV4::atm_fixed_move>();
        o << ",\"atm_phi\":" << m.get<LiveSurfaceCurveV4::atm_phi>();
        o << ",\"atm_rho\":" << m.get<LiveSurfaceCurveV4::atm_rho>();
        o << ",\"atm_vega\":" << m.get<LiveSurfaceCurveV4::atm_vega>();
        o << ",\"slope\":" << m.get<LiveSurfaceCurveV4::slope>();
        o << ",\"var_swap_fv\":" << m.get<LiveSurfaceCurveV4::var_swap_fv>();
        o << ",\"min_xaxis\":" << m.get<LiveSurfaceCurveV4::min_xaxis>();
        o << ",\"max_xaxis\":" << m.get<LiveSurfaceCurveV4::max_xaxis>();
        o << ",\"skew_ticker\":{" << m.get<LiveSurfaceCurveV4::skew_ticker>() << "}";
        o << ",\"x_shift\":" << m.get<LiveSurfaceCurveV4::x_shift>();
        o << ",\"x_mult\":" << m.get<LiveSurfaceCurveV4::x_mult>();
        o << ",\"skew_mult\":" << m.get<LiveSurfaceCurveV4::skew_mult>();
        o << ",\"skew_c00\":" << m.get<LiveSurfaceCurveV4::skew_c00>();
        o << ",\"skew_c01\":" << m.get<LiveSurfaceCurveV4::skew_c01>();
        o << ",\"skew_c02\":" << m.get<LiveSurfaceCurveV4::skew_c02>();
        o << ",\"skew_c03\":" << m.get<LiveSurfaceCurveV4::skew_c03>();
        o << ",\"skew_c04\":" << m.get<LiveSurfaceCurveV4::skew_c04>();
        o << ",\"skew_c05\":" << m.get<LiveSurfaceCurveV4::skew_c05>();
        o << ",\"skew_c06\":" << m.get<LiveSurfaceCurveV4::skew_c06>();
        o << ",\"skew_c07\":" << m.get<LiveSurfaceCurveV4::skew_c07>();
        o << ",\"skew_c08\":" << m.get<LiveSurfaceCurveV4::skew_c08>();
        o << ",\"skew_c09\":" << m.get<LiveSurfaceCurveV4::skew_c09>();
        o << ",\"skew_c10\":" << m.get<LiveSurfaceCurveV4::skew_c10>();
        o << ",\"skew_c11\":" << m.get<LiveSurfaceCurveV4::skew_c11>();
        o << ",\"skew_c12\":" << m.get<LiveSurfaceCurveV4::skew_c12>();
        o << ",\"skew_c13\":" << m.get<LiveSurfaceCurveV4::skew_c13>();
        o << ",\"skew_c14\":" << m.get<LiveSurfaceCurveV4::skew_c14>();
        o << ",\"skew_c15\":" << m.get<LiveSurfaceCurveV4::skew_c15>();
        o << ",\"skew_c16\":" << m.get<LiveSurfaceCurveV4::skew_c16>();
        o << ",\"skew_c17\":" << m.get<LiveSurfaceCurveV4::skew_c17>();
        o << ",\"skew_c18\":" << m.get<LiveSurfaceCurveV4::skew_c18>();
        o << ",\"skew_c19\":" << m.get<LiveSurfaceCurveV4::skew_c19>();
        o << ",\"skew_c20\":" << m.get<LiveSurfaceCurveV4::skew_c20>();
        o << ",\"skew_c21\":" << m.get<LiveSurfaceCurveV4::skew_c21>();
        o << ",\"skew_c22\":" << m.get<LiveSurfaceCurveV4::skew_c22>();
        o << ",\"skew_c23\":" << m.get<LiveSurfaceCurveV4::skew_c23>();
        o << ",\"skew_c24\":" << m.get<LiveSurfaceCurveV4::skew_c24>();
        o << ",\"skew_c25\":" << m.get<LiveSurfaceCurveV4::skew_c25>();
        o << ",\"skew_c26\":" << m.get<LiveSurfaceCurveV4::skew_c26>();
        o << ",\"skew_c27\":" << m.get<LiveSurfaceCurveV4::skew_c27>();
        o << ",\"skew_c28\":" << m.get<LiveSurfaceCurveV4::skew_c28>();
        o << ",\"skew_c29\":" << m.get<LiveSurfaceCurveV4::skew_c29>();
        o << ",\"skew_c30\":" << m.get<LiveSurfaceCurveV4::skew_c30>();
        o << ",\"cp_adj_d04\":" << m.get<LiveSurfaceCurveV4::cp_adj_d04>();
        o << ",\"cp_adj_d03\":" << m.get<LiveSurfaceCurveV4::cp_adj_d03>();
        o << ",\"cp_adj_d02\":" << m.get<LiveSurfaceCurveV4::cp_adj_d02>();
        o << ",\"cp_adj_d01\":" << m.get<LiveSurfaceCurveV4::cp_adj_d01>();
        o << ",\"cp_adj_u01\":" << m.get<LiveSurfaceCurveV4::cp_adj_u01>();
        o << ",\"cp_adj_u02\":" << m.get<LiveSurfaceCurveV4::cp_adj_u02>();
        o << ",\"cp_adj_u03\":" << m.get<LiveSurfaceCurveV4::cp_adj_u03>();
        o << ",\"cp_adj_u04\":" << m.get<LiveSurfaceCurveV4::cp_adj_u04>();
        o << ",\"pwidth\":" << m.get<LiveSurfaceCurveV4::pwidth>();
        o << ",\"vwidth\":" << m.get<LiveSurfaceCurveV4::vwidth>();
        o << ",\"c_cnt\":" << m.get<LiveSurfaceCurveV4::c_cnt>();
        o << ",\"p_cnt\":" << m.get<LiveSurfaceCurveV4::p_cnt>();
        o << ",\"c_bid_miss\":" << m.get<LiveSurfaceCurveV4::c_bid_miss>();
        o << ",\"c_ask_miss\":" << m.get<LiveSurfaceCurveV4::c_ask_miss>();
        o << ",\"p_bid_miss\":" << m.get<LiveSurfaceCurveV4::p_bid_miss>();
        o << ",\"p_ask_miss\":" << m.get<LiveSurfaceCurveV4::p_ask_miss>();
        o << ",\"fit_avg_err\":" << m.get<LiveSurfaceCurveV4::fit_avg_err>();
        o << ",\"fit_avg_abs_err\":" << m.get<LiveSurfaceCurveV4::fit_avg_abs_err>();
        o << ",\"fit_max_prc_err\":" << m.get<LiveSurfaceCurveV4::fit_max_prc_err>();
        o << ",\"fit_err_xx\":" << m.get<LiveSurfaceCurveV4::fit_err_xx>();
        o << ",\"fit_err_cp\":" << (int64_t)m.get<LiveSurfaceCurveV4::fit_err_cp>();
        o << ",\"fit_err_de\":" << m.get<LiveSurfaceCurveV4::fit_err_de>();
        o << ",\"fit_err_bid\":" << m.get<LiveSurfaceCurveV4::fit_err_bid>();
        o << ",\"fit_err_ask\":" << m.get<LiveSurfaceCurveV4::fit_err_ask>();
        o << ",\"fit_err_prc\":" << m.get<LiveSurfaceCurveV4::fit_err_prc>();
        o << ",\"fit_err_vol\":" << m.get<LiveSurfaceCurveV4::fit_err_vol>();
        o << ",\"num_saddle_pts\":" << m.get<LiveSurfaceCurveV4::num_saddle_pts>();
        o << ",\"min_saddle_span\":" << m.get<LiveSurfaceCurveV4::min_saddle_span>();
        o << ",\"max_saddle_curvature\":" << m.get<LiveSurfaceCurveV4::max_saddle_curvature>();
        o << ",\"market_session\":" << (int64_t)m.get<LiveSurfaceCurveV4::market_session>();
        o << ",\"tradeable_status\":" << (int64_t)m.get<LiveSurfaceCurveV4::tradeable_status>();
        o << ",\"surface_result\":" << (int64_t)m.get<LiveSurfaceCurveV4::surface_result>();
        {
            std::time_t tt = m.get<LiveSurfaceCurveV4::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}