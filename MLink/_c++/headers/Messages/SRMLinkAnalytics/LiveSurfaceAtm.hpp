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

    #ifndef _u_bid__double__GUARD__
    #define _u_bid__double__GUARD__
    DECL_STRONG_TYPE(u_bid__double, double);
    #endif//_u_bid__double__GUARD__

    #ifndef _u_ask__double__GUARD__
    #define _u_ask__double__GUARD__
    DECL_STRONG_TYPE(u_ask__double, double);
    #endif//_u_ask__double__GUARD__

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

    #ifndef _ex_type__int32__GUARD__
    #define _ex_type__int32__GUARD__
    DECL_STRONG_TYPE(ex_type__int32, int32);
    #endif//_ex_type__int32__GUARD__

    #ifndef _model_type__int32__GUARD__
    #define _model_type__int32__GUARD__
    DECL_STRONG_TYPE(model_type__int32, int32);
    #endif//_model_type__int32__GUARD__

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

    #ifndef _underlier_mode__GUARD__
    #define _underlier_mode__GUARD__
    DECL_STRONG_TYPE(underlier_mode, spiderrock::protobuf::api::UnderlierMode);
    #endif//_underlier_mode__GUARD__

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

    #ifndef _min_atm_vol__GUARD__
    #define _min_atm_vol__GUARD__
    DECL_STRONG_TYPE(min_atm_vol, float);
    #endif//_min_atm_vol__GUARD__

    #ifndef _max_atm_vol__GUARD__
    #define _max_atm_vol__GUARD__
    DECL_STRONG_TYPE(max_atm_vol, float);
    #endif//_max_atm_vol__GUARD__

    #ifndef _e_move__GUARD__
    #define _e_move__GUARD__
    DECL_STRONG_TYPE(e_move, float);
    #endif//_e_move__GUARD__

    #ifndef _e_move_hist__GUARD__
    #define _e_move_hist__GUARD__
    DECL_STRONG_TYPE(e_move_hist, float);
    #endif//_e_move_hist__GUARD__

    #ifndef _atm_move__GUARD__
    #define _atm_move__GUARD__
    DECL_STRONG_TYPE(atm_move, float);
    #endif//_atm_move__GUARD__

    #ifndef _atm_cen_move__GUARD__
    #define _atm_cen_move__GUARD__
    DECL_STRONG_TYPE(atm_cen_move, float);
    #endif//_atm_cen_move__GUARD__

    #ifndef _atm_phi__GUARD__
    #define _atm_phi__GUARD__
    DECL_STRONG_TYPE(atm_phi, float);
    #endif//_atm_phi__GUARD__

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

    #ifndef _grid_type__GUARD__
    #define _grid_type__GUARD__
    DECL_STRONG_TYPE(grid_type, spiderrock::protobuf::api::GridType);
    #endif//_grid_type__GUARD__

    #ifndef _min_xaxis__GUARD__
    #define _min_xaxis__GUARD__
    DECL_STRONG_TYPE(min_xaxis, float);
    #endif//_min_xaxis__GUARD__

    #ifndef _max_xaxis__GUARD__
    #define _max_xaxis__GUARD__
    DECL_STRONG_TYPE(max_xaxis, float);
    #endif//_max_xaxis__GUARD__

    #ifndef _min_curv_value__GUARD__
    #define _min_curv_value__GUARD__
    DECL_STRONG_TYPE(min_curv_value, float);
    #endif//_min_curv_value__GUARD__

    #ifndef _min_curv_xaxis__GUARD__
    #define _min_curv_xaxis__GUARD__
    DECL_STRONG_TYPE(min_curv_xaxis, float);
    #endif//_min_curv_xaxis__GUARD__

    #ifndef _max_curv_value__GUARD__
    #define _max_curv_value__GUARD__
    DECL_STRONG_TYPE(max_curv_value, float);
    #endif//_max_curv_value__GUARD__

    #ifndef _max_curv_xaxis__GUARD__
    #define _max_curv_xaxis__GUARD__
    DECL_STRONG_TYPE(max_curv_xaxis, float);
    #endif//_max_curv_xaxis__GUARD__

    #ifndef _skew_min_x__GUARD__
    #define _skew_min_x__GUARD__
    DECL_STRONG_TYPE(skew_min_x, float);
    #endif//_skew_min_x__GUARD__

    #ifndef _skew_min_y__GUARD__
    #define _skew_min_y__GUARD__
    DECL_STRONG_TYPE(skew_min_y, float);
    #endif//_skew_min_y__GUARD__

    #ifndef _skew_d11__GUARD__
    #define _skew_d11__GUARD__
    DECL_STRONG_TYPE(skew_d11, float);
    #endif//_skew_d11__GUARD__

    #ifndef _skew_d10__GUARD__
    #define _skew_d10__GUARD__
    DECL_STRONG_TYPE(skew_d10, float);
    #endif//_skew_d10__GUARD__

    #ifndef _skew_d9__GUARD__
    #define _skew_d9__GUARD__
    DECL_STRONG_TYPE(skew_d9, float);
    #endif//_skew_d9__GUARD__

    #ifndef _skew_d8__GUARD__
    #define _skew_d8__GUARD__
    DECL_STRONG_TYPE(skew_d8, float);
    #endif//_skew_d8__GUARD__

    #ifndef _skew_d7__GUARD__
    #define _skew_d7__GUARD__
    DECL_STRONG_TYPE(skew_d7, float);
    #endif//_skew_d7__GUARD__

    #ifndef _skew_d6__GUARD__
    #define _skew_d6__GUARD__
    DECL_STRONG_TYPE(skew_d6, float);
    #endif//_skew_d6__GUARD__

    #ifndef _skew_d5__GUARD__
    #define _skew_d5__GUARD__
    DECL_STRONG_TYPE(skew_d5, float);
    #endif//_skew_d5__GUARD__

    #ifndef _skew_d4__GUARD__
    #define _skew_d4__GUARD__
    DECL_STRONG_TYPE(skew_d4, float);
    #endif//_skew_d4__GUARD__

    #ifndef _skew_d3__GUARD__
    #define _skew_d3__GUARD__
    DECL_STRONG_TYPE(skew_d3, float);
    #endif//_skew_d3__GUARD__

    #ifndef _skew_d2__GUARD__
    #define _skew_d2__GUARD__
    DECL_STRONG_TYPE(skew_d2, float);
    #endif//_skew_d2__GUARD__

    #ifndef _skew_d1__GUARD__
    #define _skew_d1__GUARD__
    DECL_STRONG_TYPE(skew_d1, float);
    #endif//_skew_d1__GUARD__

    #ifndef _skew_c0__GUARD__
    #define _skew_c0__GUARD__
    DECL_STRONG_TYPE(skew_c0, float);
    #endif//_skew_c0__GUARD__

    #ifndef _skew_u1__GUARD__
    #define _skew_u1__GUARD__
    DECL_STRONG_TYPE(skew_u1, float);
    #endif//_skew_u1__GUARD__

    #ifndef _skew_u2__GUARD__
    #define _skew_u2__GUARD__
    DECL_STRONG_TYPE(skew_u2, float);
    #endif//_skew_u2__GUARD__

    #ifndef _skew_u3__GUARD__
    #define _skew_u3__GUARD__
    DECL_STRONG_TYPE(skew_u3, float);
    #endif//_skew_u3__GUARD__

    #ifndef _skew_u4__GUARD__
    #define _skew_u4__GUARD__
    DECL_STRONG_TYPE(skew_u4, float);
    #endif//_skew_u4__GUARD__

    #ifndef _skew_u5__GUARD__
    #define _skew_u5__GUARD__
    DECL_STRONG_TYPE(skew_u5, float);
    #endif//_skew_u5__GUARD__

    #ifndef _skew_u6__GUARD__
    #define _skew_u6__GUARD__
    DECL_STRONG_TYPE(skew_u6, float);
    #endif//_skew_u6__GUARD__

    #ifndef _skew_u7__GUARD__
    #define _skew_u7__GUARD__
    DECL_STRONG_TYPE(skew_u7, float);
    #endif//_skew_u7__GUARD__

    #ifndef _skew_u8__GUARD__
    #define _skew_u8__GUARD__
    DECL_STRONG_TYPE(skew_u8, float);
    #endif//_skew_u8__GUARD__

    #ifndef _skew_u9__GUARD__
    #define _skew_u9__GUARD__
    DECL_STRONG_TYPE(skew_u9, float);
    #endif//_skew_u9__GUARD__

    #ifndef _skew_u10__GUARD__
    #define _skew_u10__GUARD__
    DECL_STRONG_TYPE(skew_u10, float);
    #endif//_skew_u10__GUARD__

    #ifndef _skew_u11__GUARD__
    #define _skew_u11__GUARD__
    DECL_STRONG_TYPE(skew_u11, float);
    #endif//_skew_u11__GUARD__

    #ifndef _sdiv_d3__GUARD__
    #define _sdiv_d3__GUARD__
    DECL_STRONG_TYPE(sdiv_d3, float);
    #endif//_sdiv_d3__GUARD__

    #ifndef _sdiv_d2__GUARD__
    #define _sdiv_d2__GUARD__
    DECL_STRONG_TYPE(sdiv_d2, float);
    #endif//_sdiv_d2__GUARD__

    #ifndef _sdiv_d1__GUARD__
    #define _sdiv_d1__GUARD__
    DECL_STRONG_TYPE(sdiv_d1, float);
    #endif//_sdiv_d1__GUARD__

    #ifndef _sdiv_u1__GUARD__
    #define _sdiv_u1__GUARD__
    DECL_STRONG_TYPE(sdiv_u1, float);
    #endif//_sdiv_u1__GUARD__

    #ifndef _sdiv_u2__GUARD__
    #define _sdiv_u2__GUARD__
    DECL_STRONG_TYPE(sdiv_u2, float);
    #endif//_sdiv_u2__GUARD__

    #ifndef _sdiv_u3__GUARD__
    #define _sdiv_u3__GUARD__
    DECL_STRONG_TYPE(sdiv_u3, float);
    #endif//_sdiv_u3__GUARD__

    #ifndef _pwidth__GUARD__
    #define _pwidth__GUARD__
    DECL_STRONG_TYPE(pwidth, float);
    #endif//_pwidth__GUARD__

    #ifndef _vwidth__GUARD__
    #define _vwidth__GUARD__
    DECL_STRONG_TYPE(vwidth, float);
    #endif//_vwidth__GUARD__

    #ifndef _c_cnt__int32__GUARD__
    #define _c_cnt__int32__GUARD__
    DECL_STRONG_TYPE(c_cnt__int32, int32);
    #endif//_c_cnt__int32__GUARD__

    #ifndef _p_cnt__int32__GUARD__
    #define _p_cnt__int32__GUARD__
    DECL_STRONG_TYPE(p_cnt__int32, int32);
    #endif//_p_cnt__int32__GUARD__

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

    #ifndef _counter__GUARD__
    #define _counter__GUARD__
    DECL_STRONG_TYPE(counter, int32);
    #endif//_counter__GUARD__

    #ifndef _skew_counter__GUARD__
    #define _skew_counter__GUARD__
    DECL_STRONG_TYPE(skew_counter, int32);
    #endif//_skew_counter__GUARD__

    #ifndef _sdiv_counter__GUARD__
    #define _sdiv_counter__GUARD__
    DECL_STRONG_TYPE(sdiv_counter, int32);
    #endif//_sdiv_counter__GUARD__

    #ifndef _trading_session__GUARD__
    #define _trading_session__GUARD__
    DECL_STRONG_TYPE(trading_session, spiderrock::protobuf::api::TradingSession);
    #endif//_trading_session__GUARD__

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

    
    class LiveSurfaceAtm_PKey {
        public:
        //using statements for all types used in this class
        using ekey = spiderrock::protobuf::api::ekey;

        private:
        ekey m_ekey{};

        public:
		ekey get_ekey() const {
            return m_ekey;
        }
        void set_ekey(const ekey& value)  {
            m_ekey = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveSurfaceAtm_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveSurfaceAtm_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ekey & value) { set_ekey(value); }


        LiveSurfaceAtm_PKey() {}

        virtual ~LiveSurfaceAtm_PKey() {
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
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout;
                m_ekey.setCodecExpiryKey(expiryKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 10, expiryKeyLayout);
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
                    case 10: {auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                        m_ekey.setFromCodec(expiryKey);
                        break;
                    }
                }
            }
        }

    };
    

    class LiveSurfaceAtm {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::LiveSurfaceAtm_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using fkey = spiderrock::protobuf::api::fkey;
        using u_bid = spiderrock::protobuf::api::u_bid__double;
        using u_ask = spiderrock::protobuf::api::u_ask__double;
        using years = spiderrock::protobuf::api::years__float;
        using rate = spiderrock::protobuf::api::rate__float;
        using sdiv = spiderrock::protobuf::api::sdiv__float;
        using ddiv = spiderrock::protobuf::api::ddiv__float;
        using ex_type = spiderrock::protobuf::api::ex_type__int32;
        using model_type = spiderrock::protobuf::api::model_type__int32;
        using earn_cnt = spiderrock::protobuf::api::earn_cnt;
        using earn_cnt_adj = spiderrock::protobuf::api::earn_cnt_adj;
        using axis_vol_rt = spiderrock::protobuf::api::axis_vol_rt;
        using axis_fuprc = spiderrock::protobuf::api::axis_fuprc;
        using moneyness_type = spiderrock::protobuf::api::moneyness_type;
        using underlier_mode = spiderrock::protobuf::api::underlier_mode;
        using price_quote_type = spiderrock::protobuf::api::price_quote_type;
        using atm_vol = spiderrock::protobuf::api::atm_vol;
        using atm_cen = spiderrock::protobuf::api::atm_cen;
        using atm_vol_hist = spiderrock::protobuf::api::atm_vol_hist;
        using atm_cen_hist = spiderrock::protobuf::api::atm_cen_hist;
        using min_atm_vol = spiderrock::protobuf::api::min_atm_vol;
        using max_atm_vol = spiderrock::protobuf::api::max_atm_vol;
        using e_move = spiderrock::protobuf::api::e_move;
        using e_move_hist = spiderrock::protobuf::api::e_move_hist;
        using atm_move = spiderrock::protobuf::api::atm_move;
        using atm_cen_move = spiderrock::protobuf::api::atm_cen_move;
        using atm_phi = spiderrock::protobuf::api::atm_phi;
        using atm_vega = spiderrock::protobuf::api::atm_vega;
        using slope = spiderrock::protobuf::api::slope;
        using var_swap_fv = spiderrock::protobuf::api::var_swap_fv;
        using grid_type = spiderrock::protobuf::api::grid_type;
        using min_xaxis = spiderrock::protobuf::api::min_xaxis;
        using max_xaxis = spiderrock::protobuf::api::max_xaxis;
        using min_curv_value = spiderrock::protobuf::api::min_curv_value;
        using min_curv_xaxis = spiderrock::protobuf::api::min_curv_xaxis;
        using max_curv_value = spiderrock::protobuf::api::max_curv_value;
        using max_curv_xaxis = spiderrock::protobuf::api::max_curv_xaxis;
        using skew_min_x = spiderrock::protobuf::api::skew_min_x;
        using skew_min_y = spiderrock::protobuf::api::skew_min_y;
        using skew_d11 = spiderrock::protobuf::api::skew_d11;
        using skew_d10 = spiderrock::protobuf::api::skew_d10;
        using skew_d9 = spiderrock::protobuf::api::skew_d9;
        using skew_d8 = spiderrock::protobuf::api::skew_d8;
        using skew_d7 = spiderrock::protobuf::api::skew_d7;
        using skew_d6 = spiderrock::protobuf::api::skew_d6;
        using skew_d5 = spiderrock::protobuf::api::skew_d5;
        using skew_d4 = spiderrock::protobuf::api::skew_d4;
        using skew_d3 = spiderrock::protobuf::api::skew_d3;
        using skew_d2 = spiderrock::protobuf::api::skew_d2;
        using skew_d1 = spiderrock::protobuf::api::skew_d1;
        using skew_c0 = spiderrock::protobuf::api::skew_c0;
        using skew_u1 = spiderrock::protobuf::api::skew_u1;
        using skew_u2 = spiderrock::protobuf::api::skew_u2;
        using skew_u3 = spiderrock::protobuf::api::skew_u3;
        using skew_u4 = spiderrock::protobuf::api::skew_u4;
        using skew_u5 = spiderrock::protobuf::api::skew_u5;
        using skew_u6 = spiderrock::protobuf::api::skew_u6;
        using skew_u7 = spiderrock::protobuf::api::skew_u7;
        using skew_u8 = spiderrock::protobuf::api::skew_u8;
        using skew_u9 = spiderrock::protobuf::api::skew_u9;
        using skew_u10 = spiderrock::protobuf::api::skew_u10;
        using skew_u11 = spiderrock::protobuf::api::skew_u11;
        using sdiv_d3 = spiderrock::protobuf::api::sdiv_d3;
        using sdiv_d2 = spiderrock::protobuf::api::sdiv_d2;
        using sdiv_d1 = spiderrock::protobuf::api::sdiv_d1;
        using sdiv_u1 = spiderrock::protobuf::api::sdiv_u1;
        using sdiv_u2 = spiderrock::protobuf::api::sdiv_u2;
        using sdiv_u3 = spiderrock::protobuf::api::sdiv_u3;
        using pwidth = spiderrock::protobuf::api::pwidth;
        using vwidth = spiderrock::protobuf::api::vwidth;
        using c_cnt = spiderrock::protobuf::api::c_cnt__int32;
        using p_cnt = spiderrock::protobuf::api::p_cnt__int32;
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
        using counter = spiderrock::protobuf::api::counter;
        using skew_counter = spiderrock::protobuf::api::skew_counter;
        using sdiv_counter = spiderrock::protobuf::api::sdiv_counter;
        using trading_session = spiderrock::protobuf::api::trading_session;
        using tradeable_status = spiderrock::protobuf::api::tradeable_status;
        using surface_result = spiderrock::protobuf::api::surface_result__SurfaceResult;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        fkey m_fkey{};
        u_bid m_u_bid{};
        u_ask m_u_ask{};
        years m_years{};
        rate m_rate{};
        sdiv m_sdiv{};
        ddiv m_ddiv{};
        ex_type m_ex_type{};
        model_type m_model_type{};
        earn_cnt m_earn_cnt{};
        earn_cnt_adj m_earn_cnt_adj{};
        axis_vol_rt m_axis_vol_rt{};
        axis_fuprc m_axis_fuprc{};
        moneyness_type m_moneyness_type{};
        underlier_mode m_underlier_mode{};
        price_quote_type m_price_quote_type{};
        atm_vol m_atm_vol{};
        atm_cen m_atm_cen{};
        atm_vol_hist m_atm_vol_hist{};
        atm_cen_hist m_atm_cen_hist{};
        min_atm_vol m_min_atm_vol{};
        max_atm_vol m_max_atm_vol{};
        e_move m_e_move{};
        e_move_hist m_e_move_hist{};
        atm_move m_atm_move{};
        atm_cen_move m_atm_cen_move{};
        atm_phi m_atm_phi{};
        atm_vega m_atm_vega{};
        slope m_slope{};
        var_swap_fv m_var_swap_fv{};
        grid_type m_grid_type{};
        min_xaxis m_min_xaxis{};
        max_xaxis m_max_xaxis{};
        min_curv_value m_min_curv_value{};
        min_curv_xaxis m_min_curv_xaxis{};
        max_curv_value m_max_curv_value{};
        max_curv_xaxis m_max_curv_xaxis{};
        skew_min_x m_skew_min_x{};
        skew_min_y m_skew_min_y{};
        skew_d11 m_skew_d11{};
        skew_d10 m_skew_d10{};
        skew_d9 m_skew_d9{};
        skew_d8 m_skew_d8{};
        skew_d7 m_skew_d7{};
        skew_d6 m_skew_d6{};
        skew_d5 m_skew_d5{};
        skew_d4 m_skew_d4{};
        skew_d3 m_skew_d3{};
        skew_d2 m_skew_d2{};
        skew_d1 m_skew_d1{};
        skew_c0 m_skew_c0{};
        skew_u1 m_skew_u1{};
        skew_u2 m_skew_u2{};
        skew_u3 m_skew_u3{};
        skew_u4 m_skew_u4{};
        skew_u5 m_skew_u5{};
        skew_u6 m_skew_u6{};
        skew_u7 m_skew_u7{};
        skew_u8 m_skew_u8{};
        skew_u9 m_skew_u9{};
        skew_u10 m_skew_u10{};
        skew_u11 m_skew_u11{};
        sdiv_d3 m_sdiv_d3{};
        sdiv_d2 m_sdiv_d2{};
        sdiv_d1 m_sdiv_d1{};
        sdiv_u1 m_sdiv_u1{};
        sdiv_u2 m_sdiv_u2{};
        sdiv_u3 m_sdiv_u3{};
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
        counter m_counter{};
        skew_counter m_skew_counter{};
        sdiv_counter m_sdiv_counter{};
        trading_session m_trading_session{};
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
        ex_type get_ex_type() const {
            return m_ex_type;
        }		
        model_type get_model_type() const {
            return m_model_type;
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
        underlier_mode get_underlier_mode() const {
            return m_underlier_mode;
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
        min_atm_vol get_min_atm_vol() const {
            return m_min_atm_vol;
        }		
        max_atm_vol get_max_atm_vol() const {
            return m_max_atm_vol;
        }		
        e_move get_e_move() const {
            return m_e_move;
        }		
        e_move_hist get_e_move_hist() const {
            return m_e_move_hist;
        }		
        atm_move get_atm_move() const {
            return m_atm_move;
        }		
        atm_cen_move get_atm_cen_move() const {
            return m_atm_cen_move;
        }		
        atm_phi get_atm_phi() const {
            return m_atm_phi;
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
        grid_type get_grid_type() const {
            return m_grid_type;
        }		
        min_xaxis get_min_xaxis() const {
            return m_min_xaxis;
        }		
        max_xaxis get_max_xaxis() const {
            return m_max_xaxis;
        }		
        min_curv_value get_min_curv_value() const {
            return m_min_curv_value;
        }		
        min_curv_xaxis get_min_curv_xaxis() const {
            return m_min_curv_xaxis;
        }		
        max_curv_value get_max_curv_value() const {
            return m_max_curv_value;
        }		
        max_curv_xaxis get_max_curv_xaxis() const {
            return m_max_curv_xaxis;
        }		
        skew_min_x get_skew_min_x() const {
            return m_skew_min_x;
        }		
        skew_min_y get_skew_min_y() const {
            return m_skew_min_y;
        }		
        skew_d11 get_skew_d11() const {
            return m_skew_d11;
        }		
        skew_d10 get_skew_d10() const {
            return m_skew_d10;
        }		
        skew_d9 get_skew_d9() const {
            return m_skew_d9;
        }		
        skew_d8 get_skew_d8() const {
            return m_skew_d8;
        }		
        skew_d7 get_skew_d7() const {
            return m_skew_d7;
        }		
        skew_d6 get_skew_d6() const {
            return m_skew_d6;
        }		
        skew_d5 get_skew_d5() const {
            return m_skew_d5;
        }		
        skew_d4 get_skew_d4() const {
            return m_skew_d4;
        }		
        skew_d3 get_skew_d3() const {
            return m_skew_d3;
        }		
        skew_d2 get_skew_d2() const {
            return m_skew_d2;
        }		
        skew_d1 get_skew_d1() const {
            return m_skew_d1;
        }		
        skew_c0 get_skew_c0() const {
            return m_skew_c0;
        }		
        skew_u1 get_skew_u1() const {
            return m_skew_u1;
        }		
        skew_u2 get_skew_u2() const {
            return m_skew_u2;
        }		
        skew_u3 get_skew_u3() const {
            return m_skew_u3;
        }		
        skew_u4 get_skew_u4() const {
            return m_skew_u4;
        }		
        skew_u5 get_skew_u5() const {
            return m_skew_u5;
        }		
        skew_u6 get_skew_u6() const {
            return m_skew_u6;
        }		
        skew_u7 get_skew_u7() const {
            return m_skew_u7;
        }		
        skew_u8 get_skew_u8() const {
            return m_skew_u8;
        }		
        skew_u9 get_skew_u9() const {
            return m_skew_u9;
        }		
        skew_u10 get_skew_u10() const {
            return m_skew_u10;
        }		
        skew_u11 get_skew_u11() const {
            return m_skew_u11;
        }		
        sdiv_d3 get_sdiv_d3() const {
            return m_sdiv_d3;
        }		
        sdiv_d2 get_sdiv_d2() const {
            return m_sdiv_d2;
        }		
        sdiv_d1 get_sdiv_d1() const {
            return m_sdiv_d1;
        }		
        sdiv_u1 get_sdiv_u1() const {
            return m_sdiv_u1;
        }		
        sdiv_u2 get_sdiv_u2() const {
            return m_sdiv_u2;
        }		
        sdiv_u3 get_sdiv_u3() const {
            return m_sdiv_u3;
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
        counter get_counter() const {
            return m_counter;
        }		
        skew_counter get_skew_counter() const {
            return m_skew_counter;
        }		
        sdiv_counter get_sdiv_counter() const {
            return m_sdiv_counter;
        }		
        trading_session get_trading_session() const {
            return m_trading_session;
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
        void set_ex_type(const ex_type& value)  {
            m_ex_type = value;
        }
        void set_model_type(const model_type& value)  {
            m_model_type = value;
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
        void set_underlier_mode(const underlier_mode& value)  {
            m_underlier_mode = value;
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
        void set_min_atm_vol(const min_atm_vol& value)  {
            m_min_atm_vol = value;
        }
        void set_max_atm_vol(const max_atm_vol& value)  {
            m_max_atm_vol = value;
        }
        void set_e_move(const e_move& value)  {
            m_e_move = value;
        }
        void set_e_move_hist(const e_move_hist& value)  {
            m_e_move_hist = value;
        }
        void set_atm_move(const atm_move& value)  {
            m_atm_move = value;
        }
        void set_atm_cen_move(const atm_cen_move& value)  {
            m_atm_cen_move = value;
        }
        void set_atm_phi(const atm_phi& value)  {
            m_atm_phi = value;
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
        void set_grid_type(const grid_type& value)  {
            m_grid_type = value;
        }
        void set_min_xaxis(const min_xaxis& value)  {
            m_min_xaxis = value;
        }
        void set_max_xaxis(const max_xaxis& value)  {
            m_max_xaxis = value;
        }
        void set_min_curv_value(const min_curv_value& value)  {
            m_min_curv_value = value;
        }
        void set_min_curv_xaxis(const min_curv_xaxis& value)  {
            m_min_curv_xaxis = value;
        }
        void set_max_curv_value(const max_curv_value& value)  {
            m_max_curv_value = value;
        }
        void set_max_curv_xaxis(const max_curv_xaxis& value)  {
            m_max_curv_xaxis = value;
        }
        void set_skew_min_x(const skew_min_x& value)  {
            m_skew_min_x = value;
        }
        void set_skew_min_y(const skew_min_y& value)  {
            m_skew_min_y = value;
        }
        void set_skew_d11(const skew_d11& value)  {
            m_skew_d11 = value;
        }
        void set_skew_d10(const skew_d10& value)  {
            m_skew_d10 = value;
        }
        void set_skew_d9(const skew_d9& value)  {
            m_skew_d9 = value;
        }
        void set_skew_d8(const skew_d8& value)  {
            m_skew_d8 = value;
        }
        void set_skew_d7(const skew_d7& value)  {
            m_skew_d7 = value;
        }
        void set_skew_d6(const skew_d6& value)  {
            m_skew_d6 = value;
        }
        void set_skew_d5(const skew_d5& value)  {
            m_skew_d5 = value;
        }
        void set_skew_d4(const skew_d4& value)  {
            m_skew_d4 = value;
        }
        void set_skew_d3(const skew_d3& value)  {
            m_skew_d3 = value;
        }
        void set_skew_d2(const skew_d2& value)  {
            m_skew_d2 = value;
        }
        void set_skew_d1(const skew_d1& value)  {
            m_skew_d1 = value;
        }
        void set_skew_c0(const skew_c0& value)  {
            m_skew_c0 = value;
        }
        void set_skew_u1(const skew_u1& value)  {
            m_skew_u1 = value;
        }
        void set_skew_u2(const skew_u2& value)  {
            m_skew_u2 = value;
        }
        void set_skew_u3(const skew_u3& value)  {
            m_skew_u3 = value;
        }
        void set_skew_u4(const skew_u4& value)  {
            m_skew_u4 = value;
        }
        void set_skew_u5(const skew_u5& value)  {
            m_skew_u5 = value;
        }
        void set_skew_u6(const skew_u6& value)  {
            m_skew_u6 = value;
        }
        void set_skew_u7(const skew_u7& value)  {
            m_skew_u7 = value;
        }
        void set_skew_u8(const skew_u8& value)  {
            m_skew_u8 = value;
        }
        void set_skew_u9(const skew_u9& value)  {
            m_skew_u9 = value;
        }
        void set_skew_u10(const skew_u10& value)  {
            m_skew_u10 = value;
        }
        void set_skew_u11(const skew_u11& value)  {
            m_skew_u11 = value;
        }
        void set_sdiv_d3(const sdiv_d3& value)  {
            m_sdiv_d3 = value;
        }
        void set_sdiv_d2(const sdiv_d2& value)  {
            m_sdiv_d2 = value;
        }
        void set_sdiv_d1(const sdiv_d1& value)  {
            m_sdiv_d1 = value;
        }
        void set_sdiv_u1(const sdiv_u1& value)  {
            m_sdiv_u1 = value;
        }
        void set_sdiv_u2(const sdiv_u2& value)  {
            m_sdiv_u2 = value;
        }
        void set_sdiv_u3(const sdiv_u3& value)  {
            m_sdiv_u3 = value;
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
        void set_counter(const counter& value)  {
            m_counter = value;
        }
        void set_skew_counter(const skew_counter& value)  {
            m_skew_counter = value;
        }
        void set_sdiv_counter(const sdiv_counter& value)  {
            m_sdiv_counter = value;
        }
        void set_trading_session(const trading_session& value)  {
            m_trading_session = value;
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveSurfaceAtm::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const ex_type & value) {
            set_ex_type(value);
        }
        void set(const model_type & value) {
            set_model_type(value);
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
        void set(const underlier_mode & value) {
            set_underlier_mode(value);
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
        void set(const min_atm_vol & value) {
            set_min_atm_vol(value);
        }
        void set(const max_atm_vol & value) {
            set_max_atm_vol(value);
        }
        void set(const e_move & value) {
            set_e_move(value);
        }
        void set(const e_move_hist & value) {
            set_e_move_hist(value);
        }
        void set(const atm_move & value) {
            set_atm_move(value);
        }
        void set(const atm_cen_move & value) {
            set_atm_cen_move(value);
        }
        void set(const atm_phi & value) {
            set_atm_phi(value);
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
        void set(const grid_type & value) {
            set_grid_type(value);
        }
        void set(const min_xaxis & value) {
            set_min_xaxis(value);
        }
        void set(const max_xaxis & value) {
            set_max_xaxis(value);
        }
        void set(const min_curv_value & value) {
            set_min_curv_value(value);
        }
        void set(const min_curv_xaxis & value) {
            set_min_curv_xaxis(value);
        }
        void set(const max_curv_value & value) {
            set_max_curv_value(value);
        }
        void set(const max_curv_xaxis & value) {
            set_max_curv_xaxis(value);
        }
        void set(const skew_min_x & value) {
            set_skew_min_x(value);
        }
        void set(const skew_min_y & value) {
            set_skew_min_y(value);
        }
        void set(const skew_d11 & value) {
            set_skew_d11(value);
        }
        void set(const skew_d10 & value) {
            set_skew_d10(value);
        }
        void set(const skew_d9 & value) {
            set_skew_d9(value);
        }
        void set(const skew_d8 & value) {
            set_skew_d8(value);
        }
        void set(const skew_d7 & value) {
            set_skew_d7(value);
        }
        void set(const skew_d6 & value) {
            set_skew_d6(value);
        }
        void set(const skew_d5 & value) {
            set_skew_d5(value);
        }
        void set(const skew_d4 & value) {
            set_skew_d4(value);
        }
        void set(const skew_d3 & value) {
            set_skew_d3(value);
        }
        void set(const skew_d2 & value) {
            set_skew_d2(value);
        }
        void set(const skew_d1 & value) {
            set_skew_d1(value);
        }
        void set(const skew_c0 & value) {
            set_skew_c0(value);
        }
        void set(const skew_u1 & value) {
            set_skew_u1(value);
        }
        void set(const skew_u2 & value) {
            set_skew_u2(value);
        }
        void set(const skew_u3 & value) {
            set_skew_u3(value);
        }
        void set(const skew_u4 & value) {
            set_skew_u4(value);
        }
        void set(const skew_u5 & value) {
            set_skew_u5(value);
        }
        void set(const skew_u6 & value) {
            set_skew_u6(value);
        }
        void set(const skew_u7 & value) {
            set_skew_u7(value);
        }
        void set(const skew_u8 & value) {
            set_skew_u8(value);
        }
        void set(const skew_u9 & value) {
            set_skew_u9(value);
        }
        void set(const skew_u10 & value) {
            set_skew_u10(value);
        }
        void set(const skew_u11 & value) {
            set_skew_u11(value);
        }
        void set(const sdiv_d3 & value) {
            set_sdiv_d3(value);
        }
        void set(const sdiv_d2 & value) {
            set_sdiv_d2(value);
        }
        void set(const sdiv_d1 & value) {
            set_sdiv_d1(value);
        }
        void set(const sdiv_u1 & value) {
            set_sdiv_u1(value);
        }
        void set(const sdiv_u2 & value) {
            set_sdiv_u2(value);
        }
        void set(const sdiv_u3 & value) {
            set_sdiv_u3(value);
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
        void set(const counter & value) {
            set_counter(value);
        }
        void set(const skew_counter & value) {
            set_skew_counter(value);
        }
        void set(const sdiv_counter & value) {
            set_sdiv_counter(value);
        }
        void set(const trading_session & value) {
            set_trading_session(value);
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

        void set(const LiveSurfaceAtm & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_fkey);
            set(value.m_u_bid);
            set(value.m_u_ask);
            set(value.m_years);
            set(value.m_rate);
            set(value.m_sdiv);
            set(value.m_ddiv);
            set(value.m_ex_type);
            set(value.m_model_type);
            set(value.m_earn_cnt);
            set(value.m_earn_cnt_adj);
            set(value.m_axis_vol_rt);
            set(value.m_axis_fuprc);
            set(value.m_moneyness_type);
            set(value.m_underlier_mode);
            set(value.m_price_quote_type);
            set(value.m_atm_vol);
            set(value.m_atm_cen);
            set(value.m_atm_vol_hist);
            set(value.m_atm_cen_hist);
            set(value.m_min_atm_vol);
            set(value.m_max_atm_vol);
            set(value.m_e_move);
            set(value.m_e_move_hist);
            set(value.m_atm_move);
            set(value.m_atm_cen_move);
            set(value.m_atm_phi);
            set(value.m_atm_vega);
            set(value.m_slope);
            set(value.m_var_swap_fv);
            set(value.m_grid_type);
            set(value.m_min_xaxis);
            set(value.m_max_xaxis);
            set(value.m_min_curv_value);
            set(value.m_min_curv_xaxis);
            set(value.m_max_curv_value);
            set(value.m_max_curv_xaxis);
            set(value.m_skew_min_x);
            set(value.m_skew_min_y);
            set(value.m_skew_d11);
            set(value.m_skew_d10);
            set(value.m_skew_d9);
            set(value.m_skew_d8);
            set(value.m_skew_d7);
            set(value.m_skew_d6);
            set(value.m_skew_d5);
            set(value.m_skew_d4);
            set(value.m_skew_d3);
            set(value.m_skew_d2);
            set(value.m_skew_d1);
            set(value.m_skew_c0);
            set(value.m_skew_u1);
            set(value.m_skew_u2);
            set(value.m_skew_u3);
            set(value.m_skew_u4);
            set(value.m_skew_u5);
            set(value.m_skew_u6);
            set(value.m_skew_u7);
            set(value.m_skew_u8);
            set(value.m_skew_u9);
            set(value.m_skew_u10);
            set(value.m_skew_u11);
            set(value.m_sdiv_d3);
            set(value.m_sdiv_d2);
            set(value.m_sdiv_d1);
            set(value.m_sdiv_u1);
            set(value.m_sdiv_u2);
            set(value.m_sdiv_u3);
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
            set(value.m_counter);
            set(value.m_skew_counter);
            set(value.m_sdiv_counter);
            set(value.m_trading_session);
            set(value.m_tradeable_status);
            set(value.m_surface_result);
            set(value.m_timestamp);
        }

        LiveSurfaceAtm() {
            m__meta.set_message_type("LiveSurfaceAtm");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1030, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1030, length);
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
             *this = LiveSurfaceAtm{};
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
        bool IncludeExType() const {
            return !(m_ex_type == 0);
        }
        bool IncludeModelType() const {
            return !(m_model_type == 0);
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
        bool IncludeMinAtmVol() const {
            return !(m_min_atm_vol == 0.0);
        }
        bool IncludeMaxAtmVol() const {
            return !(m_max_atm_vol == 0.0);
        }
        bool IncludeEMove() const {
            return !(m_e_move == 0.0);
        }
        bool IncludeEMoveHist() const {
            return !(m_e_move_hist == 0.0);
        }
        bool IncludeAtmMove() const {
            return !(m_atm_move == 0.0);
        }
        bool IncludeAtmCenMove() const {
            return !(m_atm_cen_move == 0.0);
        }
        bool IncludeAtmPhi() const {
            return !(m_atm_phi == 0.0);
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
        bool IncludeMinCurvValue() const {
            return !(m_min_curv_value == 0.0);
        }
        bool IncludeMinCurvXaxis() const {
            return !(m_min_curv_xaxis == 0.0);
        }
        bool IncludeMaxCurvValue() const {
            return !(m_max_curv_value == 0.0);
        }
        bool IncludeMaxCurvXaxis() const {
            return !(m_max_curv_xaxis == 0.0);
        }
        bool IncludeSkewMinX() const {
            return !(m_skew_min_x == 0.0);
        }
        bool IncludeSkewMinY() const {
            return !(m_skew_min_y == 0.0);
        }
        bool IncludeSkewD11() const {
            return !(m_skew_d11 == 0.0);
        }
        bool IncludeSkewD10() const {
            return !(m_skew_d10 == 0.0);
        }
        bool IncludeSkewD9() const {
            return !(m_skew_d9 == 0.0);
        }
        bool IncludeSkewD8() const {
            return !(m_skew_d8 == 0.0);
        }
        bool IncludeSkewD7() const {
            return !(m_skew_d7 == 0.0);
        }
        bool IncludeSkewD6() const {
            return !(m_skew_d6 == 0.0);
        }
        bool IncludeSkewD5() const {
            return !(m_skew_d5 == 0.0);
        }
        bool IncludeSkewD4() const {
            return !(m_skew_d4 == 0.0);
        }
        bool IncludeSkewD3() const {
            return !(m_skew_d3 == 0.0);
        }
        bool IncludeSkewD2() const {
            return !(m_skew_d2 == 0.0);
        }
        bool IncludeSkewD1() const {
            return !(m_skew_d1 == 0.0);
        }
        bool IncludeSkewC0() const {
            return !(m_skew_c0 == 0.0);
        }
        bool IncludeSkewU1() const {
            return !(m_skew_u1 == 0.0);
        }
        bool IncludeSkewU2() const {
            return !(m_skew_u2 == 0.0);
        }
        bool IncludeSkewU3() const {
            return !(m_skew_u3 == 0.0);
        }
        bool IncludeSkewU4() const {
            return !(m_skew_u4 == 0.0);
        }
        bool IncludeSkewU5() const {
            return !(m_skew_u5 == 0.0);
        }
        bool IncludeSkewU6() const {
            return !(m_skew_u6 == 0.0);
        }
        bool IncludeSkewU7() const {
            return !(m_skew_u7 == 0.0);
        }
        bool IncludeSkewU8() const {
            return !(m_skew_u8 == 0.0);
        }
        bool IncludeSkewU9() const {
            return !(m_skew_u9 == 0.0);
        }
        bool IncludeSkewU10() const {
            return !(m_skew_u10 == 0.0);
        }
        bool IncludeSkewU11() const {
            return !(m_skew_u11 == 0.0);
        }
        bool IncludeSdivD3() const {
            return !(m_sdiv_d3 == 0.0);
        }
        bool IncludeSdivD2() const {
            return !(m_sdiv_d2 == 0.0);
        }
        bool IncludeSdivD1() const {
            return !(m_sdiv_d1 == 0.0);
        }
        bool IncludeSdivU1() const {
            return !(m_sdiv_u1 == 0.0);
        }
        bool IncludeSdivU2() const {
            return !(m_sdiv_u2 == 0.0);
        }
        bool IncludeSdivU3() const {
            return !(m_sdiv_u3 == 0.0);
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
        bool IncludeCounter() const {
            return !(m_counter == 0);
        }
        bool IncludeSkewCounter() const {
            return !(m_skew_counter == 0);
        }
        bool IncludeSdivCounter() const {
            return !(m_sdiv_counter == 0);
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
            if ( IncludeUBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(106,m_u_bid);
            }
            if ( IncludeUAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(109,m_u_ask);
            }
            if ( IncludeYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_years);
            }
            if ( IncludeRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_rate);
            }
            if ( IncludeSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_sdiv);
            }
            if ( IncludeDdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_ddiv);
            }
            if ( IncludeExType()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(124,m_ex_type);
            }
            if ( IncludeModelType()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(127,m_model_type);
            }
            if ( IncludeEarnCnt()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_earn_cnt);
            }
            if ( IncludeEarnCntAdj()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_earn_cnt_adj);
            }
            if ( IncludeAxisVolRt()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_axis_vol_rt);
            }
            if ( IncludeAxisFuprc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_axis_fuprc);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MoneynessType>(m_moneyness_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierMode>(m_underlier_mode)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceQuoteType>(m_price_quote_type)));
            if ( IncludeAtmVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(151,m_atm_vol);
            }
            if ( IncludeAtmCen()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(154,m_atm_cen);
            }
            if ( IncludeAtmVolHist()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_atm_vol_hist);
            }
            if ( IncludeAtmCenHist()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(160,m_atm_cen_hist);
            }
            if ( IncludeMinAtmVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_min_atm_vol);
            }
            if ( IncludeMaxAtmVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_max_atm_vol);
            }
            if ( IncludeEMove()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(169,m_e_move);
            }
            if ( IncludeEMoveHist()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(172,m_e_move_hist);
            }
            if ( IncludeAtmMove()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(175,m_atm_move);
            }
            if ( IncludeAtmCenMove()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_atm_cen_move);
            }
            if ( IncludeAtmPhi()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(181,m_atm_phi);
            }
            if ( IncludeAtmVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(184,m_atm_vega);
            }
            if ( IncludeSlope()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(187,m_slope);
            }
            if ( IncludeVarSwapFv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(190,m_var_swap_fv);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(193,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::GridType>(m_grid_type)));
            if ( IncludeMinXaxis()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(196,m_min_xaxis);
            }
            if ( IncludeMaxXaxis()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(199,m_max_xaxis);
            }
            if ( IncludeMinCurvValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(202,m_min_curv_value);
            }
            if ( IncludeMinCurvXaxis()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(205,m_min_curv_xaxis);
            }
            if ( IncludeMaxCurvValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(208,m_max_curv_value);
            }
            if ( IncludeMaxCurvXaxis()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(211,m_max_curv_xaxis);
            }
            if ( IncludeSkewMinX()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(214,m_skew_min_x);
            }
            if ( IncludeSkewMinY()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(217,m_skew_min_y);
            }
            if ( IncludeSkewD11()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(220,m_skew_d11);
            }
            if ( IncludeSkewD10()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(223,m_skew_d10);
            }
            if ( IncludeSkewD9()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(226,m_skew_d9);
            }
            if ( IncludeSkewD8()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(229,m_skew_d8);
            }
            if ( IncludeSkewD7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(232,m_skew_d7);
            }
            if ( IncludeSkewD6()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(235,m_skew_d6);
            }
            if ( IncludeSkewD5()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(238,m_skew_d5);
            }
            if ( IncludeSkewD4()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(241,m_skew_d4);
            }
            if ( IncludeSkewD3()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(244,m_skew_d3);
            }
            if ( IncludeSkewD2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(247,m_skew_d2);
            }
            if ( IncludeSkewD1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(250,m_skew_d1);
            }
            if ( IncludeSkewC0()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(253,m_skew_c0);
            }
            if ( IncludeSkewU1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(256,m_skew_u1);
            }
            if ( IncludeSkewU2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(259,m_skew_u2);
            }
            if ( IncludeSkewU3()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(262,m_skew_u3);
            }
            if ( IncludeSkewU4()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(265,m_skew_u4);
            }
            if ( IncludeSkewU5()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(268,m_skew_u5);
            }
            if ( IncludeSkewU6()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(271,m_skew_u6);
            }
            if ( IncludeSkewU7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(274,m_skew_u7);
            }
            if ( IncludeSkewU8()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(277,m_skew_u8);
            }
            if ( IncludeSkewU9()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(280,m_skew_u9);
            }
            if ( IncludeSkewU10()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(283,m_skew_u10);
            }
            if ( IncludeSkewU11()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(286,m_skew_u11);
            }
            if ( IncludeSdivD3()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(289,m_sdiv_d3);
            }
            if ( IncludeSdivD2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(292,m_sdiv_d2);
            }
            if ( IncludeSdivD1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(295,m_sdiv_d1);
            }
            if ( IncludeSdivU1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(298,m_sdiv_u1);
            }
            if ( IncludeSdivU2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(301,m_sdiv_u2);
            }
            if ( IncludeSdivU3()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(304,m_sdiv_u3);
            }
            if ( IncludePwidth()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(307,m_pwidth);
            }
            if ( IncludeVwidth()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(310,m_vwidth);
            }
            if ( IncludeCCnt()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(313,m_c_cnt);
            }
            if ( IncludePCnt()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(316,m_p_cnt);
            }
            if ( IncludeCBidMiss()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(319,m_c_bid_miss);
            }
            if ( IncludeCAskMiss()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(322,m_c_ask_miss);
            }
            if ( IncludePBidMiss()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(325,m_p_bid_miss);
            }
            if ( IncludePAskMiss()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(328,m_p_ask_miss);
            }
            if ( IncludeFitAvgErr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(331,m_fit_avg_err);
            }
            if ( IncludeFitAvgAbsErr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(334,m_fit_avg_abs_err);
            }
            if ( IncludeFitMaxPrcErr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(337,m_fit_max_prc_err);
            }
            if ( IncludeFitErrXx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(340,m_fit_err_xx);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(343,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CallPut>(m_fit_err_cp)));
            if ( IncludeFitErrDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(346,m_fit_err_de);
            }
            if ( IncludeFitErrBid()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(349,m_fit_err_bid);
            }
            if ( IncludeFitErrAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(352,m_fit_err_ask);
            }
            if ( IncludeFitErrPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(355,m_fit_err_prc);
            }
            if ( IncludeFitErrVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(358,m_fit_err_vol);
            }
            if ( IncludeCounter()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(361,m_counter);
            }
            if ( IncludeSkewCounter()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(364,m_skew_counter);
            }
            if ( IncludeSdivCounter()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(367,m_sdiv_counter);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(380,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradingSession>(m_trading_session)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(373,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradeableStatus>(m_tradeable_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(376,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SurfaceResult>(m_surface_result)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(379, m_timestamp);
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
            if ( IncludeUBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,106,m_u_bid);
            }
            if ( IncludeUAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,109,m_u_ask);
            }
            if ( IncludeYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_years);
            }
            if ( IncludeRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_rate);
            }
            if ( IncludeSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_sdiv);
            }
            if ( IncludeDdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_ddiv);
            }
            if ( IncludeExType()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,124,m_ex_type);
            }
            if ( IncludeModelType()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,127,m_model_type);
            }
            if ( IncludeEarnCnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_earn_cnt);
            }
            if ( IncludeEarnCntAdj()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_earn_cnt_adj);
            }
            if ( IncludeAxisVolRt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_axis_vol_rt);
            }
            if ( IncludeAxisFuprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_axis_fuprc);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MoneynessType>(m_moneyness_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierMode>(m_underlier_mode)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceQuoteType>(m_price_quote_type)));
            if ( IncludeAtmVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,151,m_atm_vol);
            }
            if ( IncludeAtmCen()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,154,m_atm_cen);
            }
            if ( IncludeAtmVolHist()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_atm_vol_hist);
            }
            if ( IncludeAtmCenHist()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,160,m_atm_cen_hist);
            }
            if ( IncludeMinAtmVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_min_atm_vol);
            }
            if ( IncludeMaxAtmVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_max_atm_vol);
            }
            if ( IncludeEMove()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,169,m_e_move);
            }
            if ( IncludeEMoveHist()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,172,m_e_move_hist);
            }
            if ( IncludeAtmMove()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,175,m_atm_move);
            }
            if ( IncludeAtmCenMove()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_atm_cen_move);
            }
            if ( IncludeAtmPhi()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,181,m_atm_phi);
            }
            if ( IncludeAtmVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,184,m_atm_vega);
            }
            if ( IncludeSlope()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,187,m_slope);
            }
            if ( IncludeVarSwapFv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,190,m_var_swap_fv);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,193,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::GridType>(m_grid_type)));
            if ( IncludeMinXaxis()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,196,m_min_xaxis);
            }
            if ( IncludeMaxXaxis()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,199,m_max_xaxis);
            }
            if ( IncludeMinCurvValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,202,m_min_curv_value);
            }
            if ( IncludeMinCurvXaxis()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,205,m_min_curv_xaxis);
            }
            if ( IncludeMaxCurvValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,208,m_max_curv_value);
            }
            if ( IncludeMaxCurvXaxis()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,211,m_max_curv_xaxis);
            }
            if ( IncludeSkewMinX()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,214,m_skew_min_x);
            }
            if ( IncludeSkewMinY()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,217,m_skew_min_y);
            }
            if ( IncludeSkewD11()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,220,m_skew_d11);
            }
            if ( IncludeSkewD10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,223,m_skew_d10);
            }
            if ( IncludeSkewD9()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,226,m_skew_d9);
            }
            if ( IncludeSkewD8()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,229,m_skew_d8);
            }
            if ( IncludeSkewD7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,232,m_skew_d7);
            }
            if ( IncludeSkewD6()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,235,m_skew_d6);
            }
            if ( IncludeSkewD5()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,238,m_skew_d5);
            }
            if ( IncludeSkewD4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,241,m_skew_d4);
            }
            if ( IncludeSkewD3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,244,m_skew_d3);
            }
            if ( IncludeSkewD2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,247,m_skew_d2);
            }
            if ( IncludeSkewD1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,250,m_skew_d1);
            }
            if ( IncludeSkewC0()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,253,m_skew_c0);
            }
            if ( IncludeSkewU1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,256,m_skew_u1);
            }
            if ( IncludeSkewU2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,259,m_skew_u2);
            }
            if ( IncludeSkewU3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,262,m_skew_u3);
            }
            if ( IncludeSkewU4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,265,m_skew_u4);
            }
            if ( IncludeSkewU5()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,268,m_skew_u5);
            }
            if ( IncludeSkewU6()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,271,m_skew_u6);
            }
            if ( IncludeSkewU7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,274,m_skew_u7);
            }
            if ( IncludeSkewU8()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,277,m_skew_u8);
            }
            if ( IncludeSkewU9()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,280,m_skew_u9);
            }
            if ( IncludeSkewU10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,283,m_skew_u10);
            }
            if ( IncludeSkewU11()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,286,m_skew_u11);
            }
            if ( IncludeSdivD3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,289,m_sdiv_d3);
            }
            if ( IncludeSdivD2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,292,m_sdiv_d2);
            }
            if ( IncludeSdivD1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,295,m_sdiv_d1);
            }
            if ( IncludeSdivU1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,298,m_sdiv_u1);
            }
            if ( IncludeSdivU2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,301,m_sdiv_u2);
            }
            if ( IncludeSdivU3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,304,m_sdiv_u3);
            }
            if ( IncludePwidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,307,m_pwidth);
            }
            if ( IncludeVwidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,310,m_vwidth);
            }
            if ( IncludeCCnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,313,m_c_cnt);
            }
            if ( IncludePCnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,316,m_p_cnt);
            }
            if ( IncludeCBidMiss()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,319,m_c_bid_miss);
            }
            if ( IncludeCAskMiss()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,322,m_c_ask_miss);
            }
            if ( IncludePBidMiss()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,325,m_p_bid_miss);
            }
            if ( IncludePAskMiss()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,328,m_p_ask_miss);
            }
            if ( IncludeFitAvgErr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,331,m_fit_avg_err);
            }
            if ( IncludeFitAvgAbsErr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,334,m_fit_avg_abs_err);
            }
            if ( IncludeFitMaxPrcErr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,337,m_fit_max_prc_err);
            }
            if ( IncludeFitErrXx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,340,m_fit_err_xx);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,343,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CallPut>(m_fit_err_cp)));
            if ( IncludeFitErrDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,346,m_fit_err_de);
            }
            if ( IncludeFitErrBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,349,m_fit_err_bid);
            }
            if ( IncludeFitErrAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,352,m_fit_err_ask);
            }
            if ( IncludeFitErrPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,355,m_fit_err_prc);
            }
            if ( IncludeFitErrVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,358,m_fit_err_vol);
            }
            if ( IncludeCounter()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,361,m_counter);
            }
            if ( IncludeSkewCounter()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,364,m_skew_counter);
            }
            if ( IncludeSdivCounter()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,367,m_sdiv_counter);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,380,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradingSession>(m_trading_session)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,373,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradeableStatus>(m_tradeable_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,376,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SurfaceResult>(m_surface_result)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 379, m_timestamp);
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
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ddiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ex_type = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_model_type = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_earn_cnt = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_earn_cnt_adj = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_axis_vol_rt = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_axis_fuprc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 142: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_moneyness_type = static_cast<spiderrock::protobuf::api::MoneynessType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 145: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_underlier_mode = static_cast<spiderrock::protobuf::api::UnderlierMode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 148: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_quote_type = static_cast<spiderrock::protobuf::api::PriceQuoteType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_vol_hist = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_hist = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_atm_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_atm_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_e_move = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_e_move_hist = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_move = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_move = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_phi = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_slope = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_var_swap_fv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 193: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_grid_type = static_cast<spiderrock::protobuf::api::GridType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_xaxis = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_xaxis = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_curv_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_curv_xaxis = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_curv_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_curv_xaxis = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_min_x = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_min_y = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_d11 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_d10 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 226: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_d9 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 229: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_d8 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 232: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_d7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_d6 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 238: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_d5 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 241: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_d4 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 244: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_d3 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 247: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_d2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 250: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_d1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 253: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_c0 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 256: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_u1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 259: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_u2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 262: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_u3 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 265: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_u4 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 268: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_u5 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 271: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_u6 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 274: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_u7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 277: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_u8 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 280: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_u9 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 283: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_u10 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 286: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_u11 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 289: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sdiv_d3 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 292: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sdiv_d2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 295: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sdiv_d1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 298: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sdiv_u1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 301: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sdiv_u2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 304: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sdiv_u3 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 307: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pwidth = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 310: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vwidth = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 313: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_c_cnt = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 316: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_p_cnt = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 319: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_c_bid_miss = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 322: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_c_ask_miss = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 325: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_p_bid_miss = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 328: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_p_ask_miss = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 331: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fit_avg_err = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 334: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fit_avg_abs_err = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 337: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fit_max_prc_err = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 340: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fit_err_xx = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 343: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_fit_err_cp = static_cast<spiderrock::protobuf::api::CallPut>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 346: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fit_err_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 349: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fit_err_bid = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 352: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fit_err_ask = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 355: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fit_err_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 358: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fit_err_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 361: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_counter = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 364: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_skew_counter = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 367: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sdiv_counter = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 380: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_trading_session = static_cast<spiderrock::protobuf::api::TradingSession>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 373: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_tradeable_status = static_cast<spiderrock::protobuf::api::TradeableStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 376: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_surface_result = static_cast<spiderrock::protobuf::api::SurfaceResult>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 379: {
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

    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::_meta>() const { return LiveSurfaceAtm::_meta{ m__meta}; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::pkey>() const { return LiveSurfaceAtm::pkey{ m_pkey}; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::ticker>() const { return LiveSurfaceAtm::ticker{ m_ticker}; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::fkey>() const { return LiveSurfaceAtm::fkey{ m_fkey}; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::u_bid>() const { return m_u_bid; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::u_ask>() const { return m_u_ask; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::years>() const { return m_years; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::rate>() const { return m_rate; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::sdiv>() const { return m_sdiv; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::ddiv>() const { return m_ddiv; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::ex_type>() const { return m_ex_type; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::model_type>() const { return m_model_type; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::earn_cnt>() const { return m_earn_cnt; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::earn_cnt_adj>() const { return m_earn_cnt_adj; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::axis_vol_rt>() const { return m_axis_vol_rt; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::axis_fuprc>() const { return m_axis_fuprc; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::moneyness_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MoneynessType>( m_moneyness_type)); }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::underlier_mode>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierMode>( m_underlier_mode)); }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::price_quote_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceQuoteType>( m_price_quote_type)); }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::atm_vol>() const { return m_atm_vol; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::atm_cen>() const { return m_atm_cen; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::atm_vol_hist>() const { return m_atm_vol_hist; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::atm_cen_hist>() const { return m_atm_cen_hist; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::min_atm_vol>() const { return m_min_atm_vol; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::max_atm_vol>() const { return m_max_atm_vol; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::e_move>() const { return m_e_move; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::e_move_hist>() const { return m_e_move_hist; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::atm_move>() const { return m_atm_move; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::atm_cen_move>() const { return m_atm_cen_move; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::atm_phi>() const { return m_atm_phi; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::atm_vega>() const { return m_atm_vega; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::slope>() const { return m_slope; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::var_swap_fv>() const { return m_var_swap_fv; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::grid_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::GridType>( m_grid_type)); }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::min_xaxis>() const { return m_min_xaxis; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::max_xaxis>() const { return m_max_xaxis; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::min_curv_value>() const { return m_min_curv_value; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::min_curv_xaxis>() const { return m_min_curv_xaxis; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::max_curv_value>() const { return m_max_curv_value; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::max_curv_xaxis>() const { return m_max_curv_xaxis; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::skew_min_x>() const { return m_skew_min_x; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::skew_min_y>() const { return m_skew_min_y; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::skew_d11>() const { return m_skew_d11; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::skew_d10>() const { return m_skew_d10; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::skew_d9>() const { return m_skew_d9; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::skew_d8>() const { return m_skew_d8; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::skew_d7>() const { return m_skew_d7; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::skew_d6>() const { return m_skew_d6; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::skew_d5>() const { return m_skew_d5; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::skew_d4>() const { return m_skew_d4; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::skew_d3>() const { return m_skew_d3; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::skew_d2>() const { return m_skew_d2; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::skew_d1>() const { return m_skew_d1; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::skew_c0>() const { return m_skew_c0; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::skew_u1>() const { return m_skew_u1; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::skew_u2>() const { return m_skew_u2; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::skew_u3>() const { return m_skew_u3; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::skew_u4>() const { return m_skew_u4; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::skew_u5>() const { return m_skew_u5; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::skew_u6>() const { return m_skew_u6; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::skew_u7>() const { return m_skew_u7; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::skew_u8>() const { return m_skew_u8; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::skew_u9>() const { return m_skew_u9; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::skew_u10>() const { return m_skew_u10; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::skew_u11>() const { return m_skew_u11; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::sdiv_d3>() const { return m_sdiv_d3; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::sdiv_d2>() const { return m_sdiv_d2; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::sdiv_d1>() const { return m_sdiv_d1; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::sdiv_u1>() const { return m_sdiv_u1; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::sdiv_u2>() const { return m_sdiv_u2; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::sdiv_u3>() const { return m_sdiv_u3; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::pwidth>() const { return m_pwidth; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::vwidth>() const { return m_vwidth; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::c_cnt>() const { return m_c_cnt; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::p_cnt>() const { return m_p_cnt; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::c_bid_miss>() const { return m_c_bid_miss; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::c_ask_miss>() const { return m_c_ask_miss; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::p_bid_miss>() const { return m_p_bid_miss; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::p_ask_miss>() const { return m_p_ask_miss; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::fit_avg_err>() const { return m_fit_avg_err; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::fit_avg_abs_err>() const { return m_fit_avg_abs_err; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::fit_max_prc_err>() const { return m_fit_max_prc_err; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::fit_err_xx>() const { return m_fit_err_xx; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::fit_err_cp>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CallPut>( m_fit_err_cp)); }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::fit_err_de>() const { return m_fit_err_de; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::fit_err_bid>() const { return m_fit_err_bid; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::fit_err_ask>() const { return m_fit_err_ask; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::fit_err_prc>() const { return m_fit_err_prc; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::fit_err_vol>() const { return m_fit_err_vol; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::counter>() const { return m_counter; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::skew_counter>() const { return m_skew_counter; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::sdiv_counter>() const { return m_sdiv_counter; }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::trading_session>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradingSession>( m_trading_session)); }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::tradeable_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradeableStatus>( m_tradeable_status)); }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::surface_result>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SurfaceResult>( m_surface_result)); }
    template<> inline const auto LiveSurfaceAtm::get<LiveSurfaceAtm::timestamp>() const { return m_timestamp; }
    template<> inline const auto LiveSurfaceAtm_PKey::get<LiveSurfaceAtm_PKey::ekey>() const { return LiveSurfaceAtm_PKey::ekey{m_ekey}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const LiveSurfaceAtm_PKey& m) {
        o << "\"ekey\":{" << m.get<LiveSurfaceAtm_PKey::ekey>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const LiveSurfaceAtm& m) {
        o << "\"_meta\":{" << m.get<LiveSurfaceAtm::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<LiveSurfaceAtm::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<LiveSurfaceAtm::ticker>() << "}";
        o << ",\"fkey\":{" << m.get<LiveSurfaceAtm::fkey>() << "}";
        o << ",\"u_bid\":" << m.get<LiveSurfaceAtm::u_bid>();
        o << ",\"u_ask\":" << m.get<LiveSurfaceAtm::u_ask>();
        o << ",\"years\":" << m.get<LiveSurfaceAtm::years>();
        o << ",\"rate\":" << m.get<LiveSurfaceAtm::rate>();
        o << ",\"sdiv\":" << m.get<LiveSurfaceAtm::sdiv>();
        o << ",\"ddiv\":" << m.get<LiveSurfaceAtm::ddiv>();
        o << ",\"ex_type\":" << m.get<LiveSurfaceAtm::ex_type>();
        o << ",\"model_type\":" << m.get<LiveSurfaceAtm::model_type>();
        o << ",\"earn_cnt\":" << m.get<LiveSurfaceAtm::earn_cnt>();
        o << ",\"earn_cnt_adj\":" << m.get<LiveSurfaceAtm::earn_cnt_adj>();
        o << ",\"axis_vol_rt\":" << m.get<LiveSurfaceAtm::axis_vol_rt>();
        o << ",\"axis_fuprc\":" << m.get<LiveSurfaceAtm::axis_fuprc>();
        o << ",\"moneyness_type\":" << (int64_t)m.get<LiveSurfaceAtm::moneyness_type>();
        o << ",\"underlier_mode\":" << (int64_t)m.get<LiveSurfaceAtm::underlier_mode>();
        o << ",\"price_quote_type\":" << (int64_t)m.get<LiveSurfaceAtm::price_quote_type>();
        o << ",\"atm_vol\":" << m.get<LiveSurfaceAtm::atm_vol>();
        o << ",\"atm_cen\":" << m.get<LiveSurfaceAtm::atm_cen>();
        o << ",\"atm_vol_hist\":" << m.get<LiveSurfaceAtm::atm_vol_hist>();
        o << ",\"atm_cen_hist\":" << m.get<LiveSurfaceAtm::atm_cen_hist>();
        o << ",\"min_atm_vol\":" << m.get<LiveSurfaceAtm::min_atm_vol>();
        o << ",\"max_atm_vol\":" << m.get<LiveSurfaceAtm::max_atm_vol>();
        o << ",\"e_move\":" << m.get<LiveSurfaceAtm::e_move>();
        o << ",\"e_move_hist\":" << m.get<LiveSurfaceAtm::e_move_hist>();
        o << ",\"atm_move\":" << m.get<LiveSurfaceAtm::atm_move>();
        o << ",\"atm_cen_move\":" << m.get<LiveSurfaceAtm::atm_cen_move>();
        o << ",\"atm_phi\":" << m.get<LiveSurfaceAtm::atm_phi>();
        o << ",\"atm_vega\":" << m.get<LiveSurfaceAtm::atm_vega>();
        o << ",\"slope\":" << m.get<LiveSurfaceAtm::slope>();
        o << ",\"var_swap_fv\":" << m.get<LiveSurfaceAtm::var_swap_fv>();
        o << ",\"grid_type\":" << (int64_t)m.get<LiveSurfaceAtm::grid_type>();
        o << ",\"min_xaxis\":" << m.get<LiveSurfaceAtm::min_xaxis>();
        o << ",\"max_xaxis\":" << m.get<LiveSurfaceAtm::max_xaxis>();
        o << ",\"min_curv_value\":" << m.get<LiveSurfaceAtm::min_curv_value>();
        o << ",\"min_curv_xaxis\":" << m.get<LiveSurfaceAtm::min_curv_xaxis>();
        o << ",\"max_curv_value\":" << m.get<LiveSurfaceAtm::max_curv_value>();
        o << ",\"max_curv_xaxis\":" << m.get<LiveSurfaceAtm::max_curv_xaxis>();
        o << ",\"skew_min_x\":" << m.get<LiveSurfaceAtm::skew_min_x>();
        o << ",\"skew_min_y\":" << m.get<LiveSurfaceAtm::skew_min_y>();
        o << ",\"skew_d11\":" << m.get<LiveSurfaceAtm::skew_d11>();
        o << ",\"skew_d10\":" << m.get<LiveSurfaceAtm::skew_d10>();
        o << ",\"skew_d9\":" << m.get<LiveSurfaceAtm::skew_d9>();
        o << ",\"skew_d8\":" << m.get<LiveSurfaceAtm::skew_d8>();
        o << ",\"skew_d7\":" << m.get<LiveSurfaceAtm::skew_d7>();
        o << ",\"skew_d6\":" << m.get<LiveSurfaceAtm::skew_d6>();
        o << ",\"skew_d5\":" << m.get<LiveSurfaceAtm::skew_d5>();
        o << ",\"skew_d4\":" << m.get<LiveSurfaceAtm::skew_d4>();
        o << ",\"skew_d3\":" << m.get<LiveSurfaceAtm::skew_d3>();
        o << ",\"skew_d2\":" << m.get<LiveSurfaceAtm::skew_d2>();
        o << ",\"skew_d1\":" << m.get<LiveSurfaceAtm::skew_d1>();
        o << ",\"skew_c0\":" << m.get<LiveSurfaceAtm::skew_c0>();
        o << ",\"skew_u1\":" << m.get<LiveSurfaceAtm::skew_u1>();
        o << ",\"skew_u2\":" << m.get<LiveSurfaceAtm::skew_u2>();
        o << ",\"skew_u3\":" << m.get<LiveSurfaceAtm::skew_u3>();
        o << ",\"skew_u4\":" << m.get<LiveSurfaceAtm::skew_u4>();
        o << ",\"skew_u5\":" << m.get<LiveSurfaceAtm::skew_u5>();
        o << ",\"skew_u6\":" << m.get<LiveSurfaceAtm::skew_u6>();
        o << ",\"skew_u7\":" << m.get<LiveSurfaceAtm::skew_u7>();
        o << ",\"skew_u8\":" << m.get<LiveSurfaceAtm::skew_u8>();
        o << ",\"skew_u9\":" << m.get<LiveSurfaceAtm::skew_u9>();
        o << ",\"skew_u10\":" << m.get<LiveSurfaceAtm::skew_u10>();
        o << ",\"skew_u11\":" << m.get<LiveSurfaceAtm::skew_u11>();
        o << ",\"sdiv_d3\":" << m.get<LiveSurfaceAtm::sdiv_d3>();
        o << ",\"sdiv_d2\":" << m.get<LiveSurfaceAtm::sdiv_d2>();
        o << ",\"sdiv_d1\":" << m.get<LiveSurfaceAtm::sdiv_d1>();
        o << ",\"sdiv_u1\":" << m.get<LiveSurfaceAtm::sdiv_u1>();
        o << ",\"sdiv_u2\":" << m.get<LiveSurfaceAtm::sdiv_u2>();
        o << ",\"sdiv_u3\":" << m.get<LiveSurfaceAtm::sdiv_u3>();
        o << ",\"pwidth\":" << m.get<LiveSurfaceAtm::pwidth>();
        o << ",\"vwidth\":" << m.get<LiveSurfaceAtm::vwidth>();
        o << ",\"c_cnt\":" << m.get<LiveSurfaceAtm::c_cnt>();
        o << ",\"p_cnt\":" << m.get<LiveSurfaceAtm::p_cnt>();
        o << ",\"c_bid_miss\":" << m.get<LiveSurfaceAtm::c_bid_miss>();
        o << ",\"c_ask_miss\":" << m.get<LiveSurfaceAtm::c_ask_miss>();
        o << ",\"p_bid_miss\":" << m.get<LiveSurfaceAtm::p_bid_miss>();
        o << ",\"p_ask_miss\":" << m.get<LiveSurfaceAtm::p_ask_miss>();
        o << ",\"fit_avg_err\":" << m.get<LiveSurfaceAtm::fit_avg_err>();
        o << ",\"fit_avg_abs_err\":" << m.get<LiveSurfaceAtm::fit_avg_abs_err>();
        o << ",\"fit_max_prc_err\":" << m.get<LiveSurfaceAtm::fit_max_prc_err>();
        o << ",\"fit_err_xx\":" << m.get<LiveSurfaceAtm::fit_err_xx>();
        o << ",\"fit_err_cp\":" << (int64_t)m.get<LiveSurfaceAtm::fit_err_cp>();
        o << ",\"fit_err_de\":" << m.get<LiveSurfaceAtm::fit_err_de>();
        o << ",\"fit_err_bid\":" << m.get<LiveSurfaceAtm::fit_err_bid>();
        o << ",\"fit_err_ask\":" << m.get<LiveSurfaceAtm::fit_err_ask>();
        o << ",\"fit_err_prc\":" << m.get<LiveSurfaceAtm::fit_err_prc>();
        o << ",\"fit_err_vol\":" << m.get<LiveSurfaceAtm::fit_err_vol>();
        o << ",\"counter\":" << m.get<LiveSurfaceAtm::counter>();
        o << ",\"skew_counter\":" << m.get<LiveSurfaceAtm::skew_counter>();
        o << ",\"sdiv_counter\":" << m.get<LiveSurfaceAtm::sdiv_counter>();
        o << ",\"trading_session\":" << (int64_t)m.get<LiveSurfaceAtm::trading_session>();
        o << ",\"tradeable_status\":" << (int64_t)m.get<LiveSurfaceAtm::tradeable_status>();
        o << ",\"surface_result\":" << (int64_t)m.get<LiveSurfaceAtm::surface_result>();
        {
            std::time_t tt = m.get<LiveSurfaceAtm::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}