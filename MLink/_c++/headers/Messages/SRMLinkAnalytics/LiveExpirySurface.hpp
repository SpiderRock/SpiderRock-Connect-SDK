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

    #ifndef _u_prc__double__GUARD__
    #define _u_prc__double__GUARD__
    DECL_STRONG_TYPE(u_prc__double, double);
    #endif//_u_prc__double__GUARD__

    #ifndef _u_prc_driver__GUARD__
    #define _u_prc_driver__GUARD__
    DECL_STRONG_TYPE(u_prc_driver, double);
    #endif//_u_prc_driver__GUARD__

    #ifndef _i_days__int32__GUARD__
    #define _i_days__int32__GUARD__
    DECL_STRONG_TYPE(i_days__int32, int32);
    #endif//_i_days__int32__GUARD__

    #ifndef _years__float__GUARD__
    #define _years__float__GUARD__
    DECL_STRONG_TYPE(years__float, float);
    #endif//_years__float__GUARD__

    #ifndef _rate__float__GUARD__
    #define _rate__float__GUARD__
    DECL_STRONG_TYPE(rate__float, float);
    #endif//_rate__float__GUARD__

    #ifndef _atm_vol__GUARD__
    #define _atm_vol__GUARD__
    DECL_STRONG_TYPE(atm_vol, float);
    #endif//_atm_vol__GUARD__

    #ifndef _atm_cen__GUARD__
    #define _atm_cen__GUARD__
    DECL_STRONG_TYPE(atm_cen, float);
    #endif//_atm_cen__GUARD__

    #ifndef _atm_slope__GUARD__
    #define _atm_slope__GUARD__
    DECL_STRONG_TYPE(atm_slope, float);
    #endif//_atm_slope__GUARD__

    #ifndef _atm_skew_yy__GUARD__
    #define _atm_skew_yy__GUARD__
    DECL_STRONG_TYPE(atm_skew_yy, float);
    #endif//_atm_skew_yy__GUARD__

    #ifndef _atm_vresidual__GUARD__
    #define _atm_vresidual__GUARD__
    DECL_STRONG_TYPE(atm_vresidual, float);
    #endif//_atm_vresidual__GUARD__

    #ifndef _atm_sdiv__GUARD__
    #define _atm_sdiv__GUARD__
    DECL_STRONG_TYPE(atm_sdiv, float);
    #endif//_atm_sdiv__GUARD__

    #ifndef _basis_ekey__GUARD__
    #define _basis_ekey__GUARD__
    DECL_STRONG_TYPE(basis_ekey, ExpiryKey);
    #endif//_basis_ekey__GUARD__

    #ifndef _basis_timestamp__GUARD__
    #define _basis_timestamp__GUARD__
    DECL_STRONG_TYPE(basis_timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_basis_timestamp__GUARD__

    #ifndef _axis_fuprc__GUARD__
    #define _axis_fuprc__GUARD__
    DECL_STRONG_TYPE(axis_fuprc, float);
    #endif//_axis_fuprc__GUARD__

    #ifndef _axis_vol_rt__GUARD__
    #define _axis_vol_rt__GUARD__
    DECL_STRONG_TYPE(axis_vol_rt, float);
    #endif//_axis_vol_rt__GUARD__

    #ifndef _x_mult__GUARD__
    #define _x_mult__GUARD__
    DECL_STRONG_TYPE(x_mult, float);
    #endif//_x_mult__GUARD__

    #ifndef _x_shift__GUARD__
    #define _x_shift__GUARD__
    DECL_STRONG_TYPE(x_shift, float);
    #endif//_x_shift__GUARD__

    #ifndef _skew_mult__GUARD__
    #define _skew_mult__GUARD__
    DECL_STRONG_TYPE(skew_mult, float);
    #endif//_skew_mult__GUARD__

    #ifndef _max_residual_err__GUARD__
    #define _max_residual_err__GUARD__
    DECL_STRONG_TYPE(max_residual_err, float);
    #endif//_max_residual_err__GUARD__

    #ifndef _cp_adj_a__GUARD__
    #define _cp_adj_a__GUARD__
    DECL_STRONG_TYPE(cp_adj_a, float);
    #endif//_cp_adj_a__GUARD__

    #ifndef _cp_adj_b__GUARD__
    #define _cp_adj_b__GUARD__
    DECL_STRONG_TYPE(cp_adj_b, float);
    #endif//_cp_adj_b__GUARD__

    #ifndef _cp_adj_c__GUARD__
    #define _cp_adj_c__GUARD__
    DECL_STRONG_TYPE(cp_adj_c, float);
    #endif//_cp_adj_c__GUARD__

    #ifndef _cp_adj_ref_vol__GUARD__
    #define _cp_adj_ref_vol__GUARD__
    DECL_STRONG_TYPE(cp_adj_ref_vol, float);
    #endif//_cp_adj_ref_vol__GUARD__

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

    #ifndef _ddiv__float__GUARD__
    #define _ddiv__float__GUARD__
    DECL_STRONG_TYPE(ddiv__float, float);
    #endif//_ddiv__float__GUARD__

    #ifndef _ddiv_pv__float__GUARD__
    #define _ddiv_pv__float__GUARD__
    DECL_STRONG_TYPE(ddiv_pv__float, float);
    #endif//_ddiv_pv__float__GUARD__

    #ifndef _ddiv_source__GUARD__
    #define _ddiv_source__GUARD__
    DECL_STRONG_TYPE(ddiv_source, spiderrock::protobuf::api::DDivSource);
    #endif//_ddiv_source__GUARD__

    #ifndef _symbol_ratio__GUARD__
    #define _symbol_ratio__GUARD__
    DECL_STRONG_TYPE(symbol_ratio, float);
    #endif//_symbol_ratio__GUARD__

    #ifndef _ex_type__ExerciseType__GUARD__
    #define _ex_type__ExerciseType__GUARD__
    DECL_STRONG_TYPE(ex_type__ExerciseType, spiderrock::protobuf::api::ExerciseType);
    #endif//_ex_type__ExerciseType__GUARD__

    #ifndef _model_type__CalcModelType__GUARD__
    #define _model_type__CalcModelType__GUARD__
    DECL_STRONG_TYPE(model_type__CalcModelType, spiderrock::protobuf::api::CalcModelType);
    #endif//_model_type__CalcModelType__GUARD__

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

    #ifndef _moneyness_type__GUARD__
    #define _moneyness_type__GUARD__
    DECL_STRONG_TYPE(moneyness_type, spiderrock::protobuf::api::MoneynessType);
    #endif//_moneyness_type__GUARD__

    #ifndef _price_quote_type__GUARD__
    #define _price_quote_type__GUARD__
    DECL_STRONG_TYPE(price_quote_type, spiderrock::protobuf::api::PriceQuoteType);
    #endif//_price_quote_type__GUARD__

    #ifndef _atm_vol_hist__GUARD__
    #define _atm_vol_hist__GUARD__
    DECL_STRONG_TYPE(atm_vol_hist, float);
    #endif//_atm_vol_hist__GUARD__

    #ifndef _atm_cen_hist__GUARD__
    #define _atm_cen_hist__GUARD__
    DECL_STRONG_TYPE(atm_cen_hist, float);
    #endif//_atm_cen_hist__GUARD__

    #ifndef _u_beta_hist__GUARD__
    #define _u_beta_hist__GUARD__
    DECL_STRONG_TYPE(u_beta_hist, float);
    #endif//_u_beta_hist__GUARD__

    #ifndef _e_move__GUARD__
    #define _e_move__GUARD__
    DECL_STRONG_TYPE(e_move, float);
    #endif//_e_move__GUARD__

    #ifndef _e_move_hist__GUARD__
    #define _e_move_hist__GUARD__
    DECL_STRONG_TYPE(e_move_hist, float);
    #endif//_e_move_hist__GUARD__

    #ifndef _min_xaxis__GUARD__
    #define _min_xaxis__GUARD__
    DECL_STRONG_TYPE(min_xaxis, float);
    #endif//_min_xaxis__GUARD__

    #ifndef _max_xaxis__GUARD__
    #define _max_xaxis__GUARD__
    DECL_STRONG_TYPE(max_xaxis, float);
    #endif//_max_xaxis__GUARD__

    #ifndef _syn_spot__float__GUARD__
    #define _syn_spot__float__GUARD__
    DECL_STRONG_TYPE(syn_spot__float, float);
    #endif//_syn_spot__float__GUARD__

    #ifndef _syn_carry__float__GUARD__
    #define _syn_carry__float__GUARD__
    DECL_STRONG_TYPE(syn_carry__float, float);
    #endif//_syn_carry__float__GUARD__

    #ifndef _u_prc_ratio__GUARD__
    #define _u_prc_ratio__GUARD__
    DECL_STRONG_TYPE(u_prc_ratio, double);
    #endif//_u_prc_ratio__GUARD__

    #ifndef _p_width__GUARD__
    #define _p_width__GUARD__
    DECL_STRONG_TYPE(p_width, float);
    #endif//_p_width__GUARD__

    #ifndef _v_width__GUARD__
    #define _v_width__GUARD__
    DECL_STRONG_TYPE(v_width, float);
    #endif//_v_width__GUARD__

    #ifndef _c_cnt__uint32__GUARD__
    #define _c_cnt__uint32__GUARD__
    DECL_STRONG_TYPE(c_cnt__uint32, uint32);
    #endif//_c_cnt__uint32__GUARD__

    #ifndef _p_cnt__uint32__GUARD__
    #define _p_cnt__uint32__GUARD__
    DECL_STRONG_TYPE(p_cnt__uint32, uint32);
    #endif//_p_cnt__uint32__GUARD__

    #ifndef _has_bracket_min__GUARD__
    #define _has_bracket_min__GUARD__
    DECL_STRONG_TYPE(has_bracket_min, spiderrock::protobuf::api::YesNo);
    #endif//_has_bracket_min__GUARD__

    #ifndef _has_min_point__GUARD__
    #define _has_min_point__GUARD__
    DECL_STRONG_TYPE(has_min_point, spiderrock::protobuf::api::YesNo);
    #endif//_has_min_point__GUARD__

    #ifndef _has_xmult_abfit__GUARD__
    #define _has_xmult_abfit__GUARD__
    DECL_STRONG_TYPE(has_xmult_abfit, spiderrock::protobuf::api::YesNo);
    #endif//_has_xmult_abfit__GUARD__

    #ifndef _x_mult_abfit_error__GUARD__
    #define _x_mult_abfit_error__GUARD__
    DECL_STRONG_TYPE(x_mult_abfit_error, double);
    #endif//_x_mult_abfit_error__GUARD__

    #ifndef _has_skew_mult_fit__GUARD__
    #define _has_skew_mult_fit__GUARD__
    DECL_STRONG_TYPE(has_skew_mult_fit, spiderrock::protobuf::api::YesNo);
    #endif//_has_skew_mult_fit__GUARD__

    #ifndef _skew_mult_fit_error__GUARD__
    #define _skew_mult_fit_error__GUARD__
    DECL_STRONG_TYPE(skew_mult_fit_error, double);
    #endif//_skew_mult_fit_error__GUARD__

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

    #ifndef _fit_score__GUARD__
    #define _fit_score__GUARD__
    DECL_STRONG_TYPE(fit_score, float);
    #endif//_fit_score__GUARD__

    #ifndef _cum_fit_score__GUARD__
    #define _cum_fit_score__GUARD__
    DECL_STRONG_TYPE(cum_fit_score, float);
    #endif//_cum_fit_score__GUARD__

    #ifndef _fit_counter__GUARD__
    #define _fit_counter__GUARD__
    DECL_STRONG_TYPE(fit_counter, int32);
    #endif//_fit_counter__GUARD__

    #ifndef _tradeable_status__GUARD__
    #define _tradeable_status__GUARD__
    DECL_STRONG_TYPE(tradeable_status, spiderrock::protobuf::api::TradeableStatus);
    #endif//_tradeable_status__GUARD__

    #ifndef _market_session__GUARD__
    #define _market_session__GUARD__
    DECL_STRONG_TYPE(market_session, spiderrock::protobuf::api::MarketSession);
    #endif//_market_session__GUARD__

    #ifndef _surface_fit_result__GUARD__
    #define _surface_fit_result__GUARD__
    DECL_STRONG_TYPE(surface_fit_result, spiderrock::protobuf::api::SurfaceFitResult);
    #endif//_surface_fit_result__GUARD__

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

    #ifndef _x__float__GUARD__
    #define _x__float__GUARD__
    DECL_STRONG_TYPE(x__float, float);
    #endif//_x__float__GUARD__

    #ifndef _y__float__GUARD__
    #define _y__float__GUARD__
    DECL_STRONG_TYPE(y__float, float);
    #endif//_y__float__GUARD__

    
    class LiveExpirySurface_PKey {
        public:
        //using statements for all types used in this class
        using ekey = spiderrock::protobuf::api::ekey;
        using surface_type = spiderrock::protobuf::api::surface_type;

        private:
        ekey m_ekey{};
        surface_type m_surface_type{};

        public:
		ekey get_ekey() const {
            return m_ekey;
        }
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveExpirySurface_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveExpirySurface_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ekey & value) { set_ekey(value); }
        void set(const surface_type & value) { set_surface_type(value); }


        LiveExpirySurface_PKey() {}

        virtual ~LiveExpirySurface_PKey() {
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
    
    class LiveExpirySurface_Residual {
        public:
        //using statements for all types used in this class
        using x = spiderrock::protobuf::api::x__float;
        using y = spiderrock::protobuf::api::y__float;

        private:
        x m_x{};
        y m_y{};

        public:
        x get_x() const {
            return m_x;
        }
        y get_y() const {
            return m_y;
        }
        void set_x(const x& value)  {
            m_x = value;
        }
        void set_y(const y& value)  {
            m_y = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveExpirySurface_Residual::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveExpirySurface_Residual::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const x & value) { set_x(value); }
        void set(const y & value) { set_y(value); }


        LiveExpirySurface_Residual() {}

        virtual ~LiveExpirySurface_Residual() {
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

        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(162,m_x);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_y);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,162,m_x);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_y);
            return dest;
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
                    case 162: {m_x = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 163: {m_y = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class LiveExpirySurface {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::LiveExpirySurface_PKey;
        using u_prc = spiderrock::protobuf::api::u_prc__double;
        using u_prc_driver = spiderrock::protobuf::api::u_prc_driver;
        using i_days = spiderrock::protobuf::api::i_days__int32;
        using years = spiderrock::protobuf::api::years__float;
        using rate = spiderrock::protobuf::api::rate__float;
        using atm_vol = spiderrock::protobuf::api::atm_vol;
        using atm_cen = spiderrock::protobuf::api::atm_cen;
        using atm_slope = spiderrock::protobuf::api::atm_slope;
        using atm_skew_yy = spiderrock::protobuf::api::atm_skew_yy;
        using atm_vresidual = spiderrock::protobuf::api::atm_vresidual;
        using atm_sdiv = spiderrock::protobuf::api::atm_sdiv;
        using basis_ekey = spiderrock::protobuf::api::basis_ekey;
        using basis_timestamp = spiderrock::protobuf::api::basis_timestamp;
        using axis_fuprc = spiderrock::protobuf::api::axis_fuprc;
        using axis_vol_rt = spiderrock::protobuf::api::axis_vol_rt;
        using x_mult = spiderrock::protobuf::api::x_mult;
        using x_shift = spiderrock::protobuf::api::x_shift;
        using skew_mult = spiderrock::protobuf::api::skew_mult;
        using max_residual_err = spiderrock::protobuf::api::max_residual_err;
        using cp_adj_a = spiderrock::protobuf::api::cp_adj_a;
        using cp_adj_b = spiderrock::protobuf::api::cp_adj_b;
        using cp_adj_c = spiderrock::protobuf::api::cp_adj_c;
        using cp_adj_ref_vol = spiderrock::protobuf::api::cp_adj_ref_vol;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using fkey = spiderrock::protobuf::api::fkey;
        using u_prc_driver_key = spiderrock::protobuf::api::u_prc_driver_key;
        using u_prc_driver_type = spiderrock::protobuf::api::u_prc_driver_type;
        using ddiv = spiderrock::protobuf::api::ddiv__float;
        using ddiv_pv = spiderrock::protobuf::api::ddiv_pv__float;
        using ddiv_source = spiderrock::protobuf::api::ddiv_source;
        using symbol_ratio = spiderrock::protobuf::api::symbol_ratio;
        using ex_type = spiderrock::protobuf::api::ex_type__ExerciseType;
        using model_type = spiderrock::protobuf::api::model_type__CalcModelType;
        using price_type = spiderrock::protobuf::api::price_type__CalcPriceType;
        using earn_cnt = spiderrock::protobuf::api::earn_cnt;
        using earn_cnt_adj = spiderrock::protobuf::api::earn_cnt_adj;
        using moneyness_type = spiderrock::protobuf::api::moneyness_type;
        using price_quote_type = spiderrock::protobuf::api::price_quote_type;
        using atm_vol_hist = spiderrock::protobuf::api::atm_vol_hist;
        using atm_cen_hist = spiderrock::protobuf::api::atm_cen_hist;
        using u_beta_hist = spiderrock::protobuf::api::u_beta_hist;
        using e_move = spiderrock::protobuf::api::e_move;
        using e_move_hist = spiderrock::protobuf::api::e_move_hist;
        using min_xaxis = spiderrock::protobuf::api::min_xaxis;
        using max_xaxis = spiderrock::protobuf::api::max_xaxis;
        using syn_spot = spiderrock::protobuf::api::syn_spot__float;
        using syn_carry = spiderrock::protobuf::api::syn_carry__float;
        using u_prc_ratio = spiderrock::protobuf::api::u_prc_ratio;
        using p_width = spiderrock::protobuf::api::p_width;
        using v_width = spiderrock::protobuf::api::v_width;
        using c_cnt = spiderrock::protobuf::api::c_cnt__uint32;
        using p_cnt = spiderrock::protobuf::api::p_cnt__uint32;
        using has_bracket_min = spiderrock::protobuf::api::has_bracket_min;
        using has_min_point = spiderrock::protobuf::api::has_min_point;
        using has_xmult_abfit = spiderrock::protobuf::api::has_xmult_abfit;
        using x_mult_abfit_error = spiderrock::protobuf::api::x_mult_abfit_error;
        using has_skew_mult_fit = spiderrock::protobuf::api::has_skew_mult_fit;
        using skew_mult_fit_error = spiderrock::protobuf::api::skew_mult_fit_error;
        using c_bid_miss = spiderrock::protobuf::api::c_bid_miss;
        using c_ask_miss = spiderrock::protobuf::api::c_ask_miss;
        using p_bid_miss = spiderrock::protobuf::api::p_bid_miss;
        using p_ask_miss = spiderrock::protobuf::api::p_ask_miss;
        using fit_score = spiderrock::protobuf::api::fit_score;
        using cum_fit_score = spiderrock::protobuf::api::cum_fit_score;
        using fit_counter = spiderrock::protobuf::api::fit_counter;
        using tradeable_status = spiderrock::protobuf::api::tradeable_status;
        using market_session = spiderrock::protobuf::api::market_session;
        using surface_fit_result = spiderrock::protobuf::api::surface_fit_result;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using residual = spiderrock::protobuf::api::LiveExpirySurface_Residual;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        u_prc m_u_prc{};
        u_prc_driver m_u_prc_driver{};
        i_days m_i_days{};
        years m_years{};
        rate m_rate{};
        atm_vol m_atm_vol{};
        atm_cen m_atm_cen{};
        atm_slope m_atm_slope{};
        atm_skew_yy m_atm_skew_yy{};
        atm_vresidual m_atm_vresidual{};
        atm_sdiv m_atm_sdiv{};
        basis_ekey m_basis_ekey{};
        basis_timestamp m_basis_timestamp{};
        axis_fuprc m_axis_fuprc{};
        axis_vol_rt m_axis_vol_rt{};
        x_mult m_x_mult{};
        x_shift m_x_shift{};
        skew_mult m_skew_mult{};
        max_residual_err m_max_residual_err{};
        cp_adj_a m_cp_adj_a{};
        cp_adj_b m_cp_adj_b{};
        cp_adj_c m_cp_adj_c{};
        cp_adj_ref_vol m_cp_adj_ref_vol{};
        ticker m_ticker{};
        fkey m_fkey{};
        u_prc_driver_key m_u_prc_driver_key{};
        u_prc_driver_type m_u_prc_driver_type{};
        ddiv m_ddiv{};
        ddiv_pv m_ddiv_pv{};
        ddiv_source m_ddiv_source{};
        symbol_ratio m_symbol_ratio{};
        ex_type m_ex_type{};
        model_type m_model_type{};
        price_type m_price_type{};
        earn_cnt m_earn_cnt{};
        earn_cnt_adj m_earn_cnt_adj{};
        moneyness_type m_moneyness_type{};
        price_quote_type m_price_quote_type{};
        atm_vol_hist m_atm_vol_hist{};
        atm_cen_hist m_atm_cen_hist{};
        u_beta_hist m_u_beta_hist{};
        e_move m_e_move{};
        e_move_hist m_e_move_hist{};
        min_xaxis m_min_xaxis{};
        max_xaxis m_max_xaxis{};
        syn_spot m_syn_spot{};
        syn_carry m_syn_carry{};
        u_prc_ratio m_u_prc_ratio{};
        p_width m_p_width{};
        v_width m_v_width{};
        c_cnt m_c_cnt{};
        p_cnt m_p_cnt{};
        has_bracket_min m_has_bracket_min{};
        has_min_point m_has_min_point{};
        has_xmult_abfit m_has_xmult_abfit{};
        x_mult_abfit_error m_x_mult_abfit_error{};
        has_skew_mult_fit m_has_skew_mult_fit{};
        skew_mult_fit_error m_skew_mult_fit_error{};
        c_bid_miss m_c_bid_miss{};
        c_ask_miss m_c_ask_miss{};
        p_bid_miss m_p_bid_miss{};
        p_ask_miss m_p_ask_miss{};
        fit_score m_fit_score{};
        cum_fit_score m_cum_fit_score{};
        fit_counter m_fit_counter{};
        tradeable_status m_tradeable_status{};
        market_session m_market_session{};
        surface_fit_result m_surface_fit_result{};
        timestamp m_timestamp{};
        std::vector<residual> m_residual{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        u_prc get_u_prc() const {
            return m_u_prc;
        }		
        u_prc_driver get_u_prc_driver() const {
            return m_u_prc_driver;
        }		
        i_days get_i_days() const {
            return m_i_days;
        }		
        years get_years() const {
            return m_years;
        }		
        rate get_rate() const {
            return m_rate;
        }		
        atm_vol get_atm_vol() const {
            return m_atm_vol;
        }		
        atm_cen get_atm_cen() const {
            return m_atm_cen;
        }		
        atm_slope get_atm_slope() const {
            return m_atm_slope;
        }		
        atm_skew_yy get_atm_skew_yy() const {
            return m_atm_skew_yy;
        }		
        atm_vresidual get_atm_vresidual() const {
            return m_atm_vresidual;
        }		
        atm_sdiv get_atm_sdiv() const {
            return m_atm_sdiv;
        }		
        basis_ekey get_basis_ekey() const {
            return m_basis_ekey;
        }		
        basis_timestamp get_basis_timestamp() const {
            return m_basis_timestamp;
        }		
        axis_fuprc get_axis_fuprc() const {
            return m_axis_fuprc;
        }		
        axis_vol_rt get_axis_vol_rt() const {
            return m_axis_vol_rt;
        }		
        x_mult get_x_mult() const {
            return m_x_mult;
        }		
        x_shift get_x_shift() const {
            return m_x_shift;
        }		
        skew_mult get_skew_mult() const {
            return m_skew_mult;
        }		
        max_residual_err get_max_residual_err() const {
            return m_max_residual_err;
        }		
        cp_adj_a get_cp_adj_a() const {
            return m_cp_adj_a;
        }		
        cp_adj_b get_cp_adj_b() const {
            return m_cp_adj_b;
        }		
        cp_adj_c get_cp_adj_c() const {
            return m_cp_adj_c;
        }		
        cp_adj_ref_vol get_cp_adj_ref_vol() const {
            return m_cp_adj_ref_vol;
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
        moneyness_type get_moneyness_type() const {
            return m_moneyness_type;
        }		
        price_quote_type get_price_quote_type() const {
            return m_price_quote_type;
        }		
        atm_vol_hist get_atm_vol_hist() const {
            return m_atm_vol_hist;
        }		
        atm_cen_hist get_atm_cen_hist() const {
            return m_atm_cen_hist;
        }		
        u_beta_hist get_u_beta_hist() const {
            return m_u_beta_hist;
        }		
        e_move get_e_move() const {
            return m_e_move;
        }		
        e_move_hist get_e_move_hist() const {
            return m_e_move_hist;
        }		
        min_xaxis get_min_xaxis() const {
            return m_min_xaxis;
        }		
        max_xaxis get_max_xaxis() const {
            return m_max_xaxis;
        }		
        syn_spot get_syn_spot() const {
            return m_syn_spot;
        }		
        syn_carry get_syn_carry() const {
            return m_syn_carry;
        }		
        u_prc_ratio get_u_prc_ratio() const {
            return m_u_prc_ratio;
        }		
        p_width get_p_width() const {
            return m_p_width;
        }		
        v_width get_v_width() const {
            return m_v_width;
        }		
        c_cnt get_c_cnt() const {
            return m_c_cnt;
        }		
        p_cnt get_p_cnt() const {
            return m_p_cnt;
        }		
        has_bracket_min get_has_bracket_min() const {
            return m_has_bracket_min;
        }		
        has_min_point get_has_min_point() const {
            return m_has_min_point;
        }		
        has_xmult_abfit get_has_xmult_abfit() const {
            return m_has_xmult_abfit;
        }		
        x_mult_abfit_error get_x_mult_abfit_error() const {
            return m_x_mult_abfit_error;
        }		
        has_skew_mult_fit get_has_skew_mult_fit() const {
            return m_has_skew_mult_fit;
        }		
        skew_mult_fit_error get_skew_mult_fit_error() const {
            return m_skew_mult_fit_error;
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
        fit_score get_fit_score() const {
            return m_fit_score;
        }		
        cum_fit_score get_cum_fit_score() const {
            return m_cum_fit_score;
        }		
        fit_counter get_fit_counter() const {
            return m_fit_counter;
        }		
        tradeable_status get_tradeable_status() const {
            return m_tradeable_status;
        }		
        market_session get_market_session() const {
            return m_market_session;
        }		
        surface_fit_result get_surface_fit_result() const {
            return m_surface_fit_result;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }
        const std::vector<residual>& get_residual_list() const {
            return m_residual;
        }
        const residual& get_residual(const int i) const {
            return m_residual.at(i);
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
        void set_u_prc(const u_prc& value)  {
            m_u_prc = value;
        }
        void set_u_prc_driver(const u_prc_driver& value)  {
            m_u_prc_driver = value;
        }
        void set_i_days(const i_days& value)  {
            m_i_days = value;
        }
        void set_years(const years& value)  {
            m_years = value;
        }
        void set_rate(const rate& value)  {
            m_rate = value;
        }
        void set_atm_vol(const atm_vol& value)  {
            m_atm_vol = value;
        }
        void set_atm_cen(const atm_cen& value)  {
            m_atm_cen = value;
        }
        void set_atm_slope(const atm_slope& value)  {
            m_atm_slope = value;
        }
        void set_atm_skew_yy(const atm_skew_yy& value)  {
            m_atm_skew_yy = value;
        }
        void set_atm_vresidual(const atm_vresidual& value)  {
            m_atm_vresidual = value;
        }
        void set_atm_sdiv(const atm_sdiv& value)  {
            m_atm_sdiv = value;
        }
        void set_basis_ekey(const basis_ekey& value)  {
            m_basis_ekey = value;
        }
        void set_basis_timestamp(const basis_timestamp& value)  {
            m_basis_timestamp = value;
        }
        void set_axis_fuprc(const axis_fuprc& value)  {
            m_axis_fuprc = value;
        }
        void set_axis_vol_rt(const axis_vol_rt& value)  {
            m_axis_vol_rt = value;
        }
        void set_x_mult(const x_mult& value)  {
            m_x_mult = value;
        }
        void set_x_shift(const x_shift& value)  {
            m_x_shift = value;
        }
        void set_skew_mult(const skew_mult& value)  {
            m_skew_mult = value;
        }
        void set_max_residual_err(const max_residual_err& value)  {
            m_max_residual_err = value;
        }
        void set_cp_adj_a(const cp_adj_a& value)  {
            m_cp_adj_a = value;
        }
        void set_cp_adj_b(const cp_adj_b& value)  {
            m_cp_adj_b = value;
        }
        void set_cp_adj_c(const cp_adj_c& value)  {
            m_cp_adj_c = value;
        }
        void set_cp_adj_ref_vol(const cp_adj_ref_vol& value)  {
            m_cp_adj_ref_vol = value;
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
        void set_moneyness_type(const moneyness_type& value)  {
            m_moneyness_type = value;
        }
        void set_price_quote_type(const price_quote_type& value)  {
            m_price_quote_type = value;
        }
        void set_atm_vol_hist(const atm_vol_hist& value)  {
            m_atm_vol_hist = value;
        }
        void set_atm_cen_hist(const atm_cen_hist& value)  {
            m_atm_cen_hist = value;
        }
        void set_u_beta_hist(const u_beta_hist& value)  {
            m_u_beta_hist = value;
        }
        void set_e_move(const e_move& value)  {
            m_e_move = value;
        }
        void set_e_move_hist(const e_move_hist& value)  {
            m_e_move_hist = value;
        }
        void set_min_xaxis(const min_xaxis& value)  {
            m_min_xaxis = value;
        }
        void set_max_xaxis(const max_xaxis& value)  {
            m_max_xaxis = value;
        }
        void set_syn_spot(const syn_spot& value)  {
            m_syn_spot = value;
        }
        void set_syn_carry(const syn_carry& value)  {
            m_syn_carry = value;
        }
        void set_u_prc_ratio(const u_prc_ratio& value)  {
            m_u_prc_ratio = value;
        }
        void set_p_width(const p_width& value)  {
            m_p_width = value;
        }
        void set_v_width(const v_width& value)  {
            m_v_width = value;
        }
        void set_c_cnt(const c_cnt& value)  {
            m_c_cnt = value;
        }
        void set_p_cnt(const p_cnt& value)  {
            m_p_cnt = value;
        }
        void set_has_bracket_min(const has_bracket_min& value)  {
            m_has_bracket_min = value;
        }
        void set_has_min_point(const has_min_point& value)  {
            m_has_min_point = value;
        }
        void set_has_xmult_abfit(const has_xmult_abfit& value)  {
            m_has_xmult_abfit = value;
        }
        void set_x_mult_abfit_error(const x_mult_abfit_error& value)  {
            m_x_mult_abfit_error = value;
        }
        void set_has_skew_mult_fit(const has_skew_mult_fit& value)  {
            m_has_skew_mult_fit = value;
        }
        void set_skew_mult_fit_error(const skew_mult_fit_error& value)  {
            m_skew_mult_fit_error = value;
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
        void set_fit_score(const fit_score& value)  {
            m_fit_score = value;
        }
        void set_cum_fit_score(const cum_fit_score& value)  {
            m_cum_fit_score = value;
        }
        void set_fit_counter(const fit_counter& value)  {
            m_fit_counter = value;
        }
        void set_tradeable_status(const tradeable_status& value)  {
            m_tradeable_status = value;
        }
        void set_market_session(const market_session& value)  {
            m_market_session = value;
        }
        void set_surface_fit_result(const surface_fit_result& value)  {
            m_surface_fit_result = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_residual_list(const std::vector<residual>& list)  {
            m_residual = list;
        }
        void add_residual(const residual& item) {
            m_residual.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveExpirySurface::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveExpirySurface::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveExpirySurface::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const u_prc & value) {
            set_u_prc(value);
        }
        void set(const u_prc_driver & value) {
            set_u_prc_driver(value);
        }
        void set(const i_days & value) {
            set_i_days(value);
        }
        void set(const years & value) {
            set_years(value);
        }
        void set(const rate & value) {
            set_rate(value);
        }
        void set(const atm_vol & value) {
            set_atm_vol(value);
        }
        void set(const atm_cen & value) {
            set_atm_cen(value);
        }
        void set(const atm_slope & value) {
            set_atm_slope(value);
        }
        void set(const atm_skew_yy & value) {
            set_atm_skew_yy(value);
        }
        void set(const atm_vresidual & value) {
            set_atm_vresidual(value);
        }
        void set(const atm_sdiv & value) {
            set_atm_sdiv(value);
        }
        void set(const basis_ekey & value) {
            set_basis_ekey(value);
        }
        void set(const basis_timestamp & value) {
            set_basis_timestamp(value);
        }
        void set(const axis_fuprc & value) {
            set_axis_fuprc(value);
        }
        void set(const axis_vol_rt & value) {
            set_axis_vol_rt(value);
        }
        void set(const x_mult & value) {
            set_x_mult(value);
        }
        void set(const x_shift & value) {
            set_x_shift(value);
        }
        void set(const skew_mult & value) {
            set_skew_mult(value);
        }
        void set(const max_residual_err & value) {
            set_max_residual_err(value);
        }
        void set(const cp_adj_a & value) {
            set_cp_adj_a(value);
        }
        void set(const cp_adj_b & value) {
            set_cp_adj_b(value);
        }
        void set(const cp_adj_c & value) {
            set_cp_adj_c(value);
        }
        void set(const cp_adj_ref_vol & value) {
            set_cp_adj_ref_vol(value);
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
        void set(const moneyness_type & value) {
            set_moneyness_type(value);
        }
        void set(const price_quote_type & value) {
            set_price_quote_type(value);
        }
        void set(const atm_vol_hist & value) {
            set_atm_vol_hist(value);
        }
        void set(const atm_cen_hist & value) {
            set_atm_cen_hist(value);
        }
        void set(const u_beta_hist & value) {
            set_u_beta_hist(value);
        }
        void set(const e_move & value) {
            set_e_move(value);
        }
        void set(const e_move_hist & value) {
            set_e_move_hist(value);
        }
        void set(const min_xaxis & value) {
            set_min_xaxis(value);
        }
        void set(const max_xaxis & value) {
            set_max_xaxis(value);
        }
        void set(const syn_spot & value) {
            set_syn_spot(value);
        }
        void set(const syn_carry & value) {
            set_syn_carry(value);
        }
        void set(const u_prc_ratio & value) {
            set_u_prc_ratio(value);
        }
        void set(const p_width & value) {
            set_p_width(value);
        }
        void set(const v_width & value) {
            set_v_width(value);
        }
        void set(const c_cnt & value) {
            set_c_cnt(value);
        }
        void set(const p_cnt & value) {
            set_p_cnt(value);
        }
        void set(const has_bracket_min & value) {
            set_has_bracket_min(value);
        }
        void set(const has_min_point & value) {
            set_has_min_point(value);
        }
        void set(const has_xmult_abfit & value) {
            set_has_xmult_abfit(value);
        }
        void set(const x_mult_abfit_error & value) {
            set_x_mult_abfit_error(value);
        }
        void set(const has_skew_mult_fit & value) {
            set_has_skew_mult_fit(value);
        }
        void set(const skew_mult_fit_error & value) {
            set_skew_mult_fit_error(value);
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
        void set(const fit_score & value) {
            set_fit_score(value);
        }
        void set(const cum_fit_score & value) {
            set_cum_fit_score(value);
        }
        void set(const fit_counter & value) {
            set_fit_counter(value);
        }
        void set(const tradeable_status & value) {
            set_tradeable_status(value);
        }
        void set(const market_session & value) {
            set_market_session(value);
        }
        void set(const surface_fit_result & value) {
            set_surface_fit_result(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const residual & value) {
            add_residual(value);
        }

        void set(const LiveExpirySurface & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_u_prc);
            set(value.m_u_prc_driver);
            set(value.m_i_days);
            set(value.m_years);
            set(value.m_rate);
            set(value.m_atm_vol);
            set(value.m_atm_cen);
            set(value.m_atm_slope);
            set(value.m_atm_skew_yy);
            set(value.m_atm_vresidual);
            set(value.m_atm_sdiv);
            set(value.m_basis_ekey);
            set(value.m_basis_timestamp);
            set(value.m_axis_fuprc);
            set(value.m_axis_vol_rt);
            set(value.m_x_mult);
            set(value.m_x_shift);
            set(value.m_skew_mult);
            set(value.m_max_residual_err);
            set(value.m_cp_adj_a);
            set(value.m_cp_adj_b);
            set(value.m_cp_adj_c);
            set(value.m_cp_adj_ref_vol);
            set(value.m_ticker);
            set(value.m_fkey);
            set(value.m_u_prc_driver_key);
            set(value.m_u_prc_driver_type);
            set(value.m_ddiv);
            set(value.m_ddiv_pv);
            set(value.m_ddiv_source);
            set(value.m_symbol_ratio);
            set(value.m_ex_type);
            set(value.m_model_type);
            set(value.m_price_type);
            set(value.m_earn_cnt);
            set(value.m_earn_cnt_adj);
            set(value.m_moneyness_type);
            set(value.m_price_quote_type);
            set(value.m_atm_vol_hist);
            set(value.m_atm_cen_hist);
            set(value.m_u_beta_hist);
            set(value.m_e_move);
            set(value.m_e_move_hist);
            set(value.m_min_xaxis);
            set(value.m_max_xaxis);
            set(value.m_syn_spot);
            set(value.m_syn_carry);
            set(value.m_u_prc_ratio);
            set(value.m_p_width);
            set(value.m_v_width);
            set(value.m_c_cnt);
            set(value.m_p_cnt);
            set(value.m_has_bracket_min);
            set(value.m_has_min_point);
            set(value.m_has_xmult_abfit);
            set(value.m_x_mult_abfit_error);
            set(value.m_has_skew_mult_fit);
            set(value.m_skew_mult_fit_error);
            set(value.m_c_bid_miss);
            set(value.m_c_ask_miss);
            set(value.m_p_bid_miss);
            set(value.m_p_ask_miss);
            set(value.m_fit_score);
            set(value.m_cum_fit_score);
            set(value.m_fit_counter);
            set(value.m_tradeable_status);
            set(value.m_market_session);
            set(value.m_surface_fit_result);
            set(value.m_timestamp);set_residual_list(value.m_residual);
        }

        LiveExpirySurface() {
            m__meta.set_message_type("LiveExpirySurface");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1132, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1132, length);
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
             *this = LiveExpirySurface{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeUPrc() const {
            return !(m_u_prc == 0.0);
        }
        bool IncludeUPrcDriver() const {
            return !(m_u_prc_driver == 0.0);
        }
        bool IncludeIDays() const {
            return !(m_i_days == 0);
        }
        bool IncludeYears() const {
            return !(m_years == 0.0);
        }
        bool IncludeRate() const {
            return !(m_rate == 0.0);
        }
        bool IncludeAtmVol() const {
            return !(m_atm_vol == 0.0);
        }
        bool IncludeAtmCen() const {
            return !(m_atm_cen == 0.0);
        }
        bool IncludeAtmSlope() const {
            return !(m_atm_slope == 0.0);
        }
        bool IncludeAtmSkewYy() const {
            return !(m_atm_skew_yy == 0.0);
        }
        bool IncludeAtmVresidual() const {
            return !(m_atm_vresidual == 0.0);
        }
        bool IncludeAtmSdiv() const {
            return !(m_atm_sdiv == 0.0);
        }
        bool IncludeBasisEkey() const {
            return (m_basis_ekey.ByteSizeLong() > 0);
        }
        bool IncludeBasisTimestamp() const {
            return (m_basis_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeAxisFuprc() const {
            return !(m_axis_fuprc == 0.0);
        }
        bool IncludeAxisVolRt() const {
            return !(m_axis_vol_rt == 0.0);
        }
        bool IncludeXMult() const {
            return !(m_x_mult == 0.0);
        }
        bool IncludeXShift() const {
            return !(m_x_shift == 0.0);
        }
        bool IncludeSkewMult() const {
            return !(m_skew_mult == 0.0);
        }
        bool IncludeMaxResidualErr() const {
            return !(m_max_residual_err == 0.0);
        }
        bool IncludeCpAdjA() const {
            return !(m_cp_adj_a == 0.0);
        }
        bool IncludeCpAdjB() const {
            return !(m_cp_adj_b == 0.0);
        }
        bool IncludeCpAdjC() const {
            return !(m_cp_adj_c == 0.0);
        }
        bool IncludeCpAdjRefVol() const {
            return !(m_cp_adj_ref_vol == 0.0);
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
        bool IncludeAtmVolHist() const {
            return !(m_atm_vol_hist == 0.0);
        }
        bool IncludeAtmCenHist() const {
            return !(m_atm_cen_hist == 0.0);
        }
        bool IncludeUBetaHist() const {
            return !(m_u_beta_hist == 0.0);
        }
        bool IncludeEMove() const {
            return !(m_e_move == 0.0);
        }
        bool IncludeEMoveHist() const {
            return !(m_e_move_hist == 0.0);
        }
        bool IncludeMinXaxis() const {
            return !(m_min_xaxis == 0.0);
        }
        bool IncludeMaxXaxis() const {
            return !(m_max_xaxis == 0.0);
        }
        bool IncludeSynSpot() const {
            return !(m_syn_spot == 0.0);
        }
        bool IncludeSynCarry() const {
            return !(m_syn_carry == 0.0);
        }
        bool IncludeUPrcRatio() const {
            return !(m_u_prc_ratio == 0.0);
        }
        bool IncludePWidth() const {
            return !(m_p_width == 0.0);
        }
        bool IncludeVWidth() const {
            return !(m_v_width == 0.0);
        }
        bool IncludeCCnt() const {
            return !(m_c_cnt == 0);
        }
        bool IncludePCnt() const {
            return !(m_p_cnt == 0);
        }
        bool IncludeXMultAbfitError() const {
            return !(m_x_mult_abfit_error == 0.0);
        }
        bool IncludeSkewMultFitError() const {
            return !(m_skew_mult_fit_error == 0.0);
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
        bool IncludeFitScore() const {
            return !(m_fit_score == 0.0);
        }
        bool IncludeCumFitScore() const {
            return !(m_cum_fit_score == 0.0);
        }
        bool IncludeFitCounter() const {
            return !(m_fit_counter == 0);
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeResidual() const {
            return (!m_residual.empty());
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
            if ( IncludeUPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(100,m_u_prc);
            }
            if ( IncludeUPrcDriver()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(101,m_u_prc_driver);
            }
            if ( IncludeIDays()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(154,m_i_days);
            }
            if ( IncludeYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(102,m_years);
            }
            if ( IncludeRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(103,m_rate);
            }
            if ( IncludeAtmVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(105,m_atm_vol);
            }
            if ( IncludeAtmCen()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(155,m_atm_cen);
            }
            if ( IncludeAtmSlope()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_atm_slope);
            }
            if ( IncludeAtmSkewYy()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(156,m_atm_skew_yy);
            }
            if ( IncludeAtmVresidual()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_atm_vresidual);
            }
            if ( IncludeAtmSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(158,m_atm_sdiv);
            }
            if ( IncludeBasisEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_basis_ekey.setCodecExpiryKey(expiryKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(159, expiryKeyLayout);
            }
            if ( IncludeBasisTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(160, m_basis_timestamp);
            }
            if ( IncludeAxisFuprc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(108,m_axis_fuprc);
            }
            if ( IncludeAxisVolRt()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_axis_vol_rt);
            }
            if ( IncludeXMult()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(111,m_x_mult);
            }
            if ( IncludeXShift()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_x_shift);
            }
            if ( IncludeSkewMult()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(110,m_skew_mult);
            }
            if ( IncludeMaxResidualErr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(164,m_max_residual_err);
            }
            if ( IncludeCpAdjA()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(165,m_cp_adj_a);
            }
            if ( IncludeCpAdjB()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_cp_adj_b);
            }
            if ( IncludeCpAdjC()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(167,m_cp_adj_c);
            }
            if ( IncludeCpAdjRefVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(168,m_cp_adj_ref_vol);
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(169, tickerKeyLayout);
            }
            if ( IncludeFkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_fkey.setCodecExpiryKey(expiryKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(170, expiryKeyLayout);
            }
            if ( IncludeUPrcDriverKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_u_prc_driver_key.setCodecExpiryKey(expiryKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(171, expiryKeyLayout);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(172,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_u_prc_driver_type)));
            if ( IncludeDdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(173,m_ddiv);
            }
            if ( IncludeDdivPv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(174,m_ddiv_pv);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(175,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DDivSource>(m_ddiv_source)));
            if ( IncludeSymbolRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(176,m_symbol_ratio);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(177,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>(m_ex_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(178,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcModelType>(m_model_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(179,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcPriceType>(m_price_type)));
            if ( IncludeEarnCnt()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(180,m_earn_cnt);
            }
            if ( IncludeEarnCntAdj()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(181,m_earn_cnt_adj);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(182,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MoneynessType>(m_moneyness_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(183,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceQuoteType>(m_price_quote_type)));
            if ( IncludeAtmVolHist()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(184,m_atm_vol_hist);
            }
            if ( IncludeAtmCenHist()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(185,m_atm_cen_hist);
            }
            if ( IncludeUBetaHist()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(186,m_u_beta_hist);
            }
            if ( IncludeEMove()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(187,m_e_move);
            }
            if ( IncludeEMoveHist()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(188,m_e_move_hist);
            }
            if ( IncludeMinXaxis()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(189,m_min_xaxis);
            }
            if ( IncludeMaxXaxis()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(190,m_max_xaxis);
            }
            if ( IncludeSynSpot()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(191,m_syn_spot);
            }
            if ( IncludeSynCarry()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(192,m_syn_carry);
            }
            if ( IncludeUPrcRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(193,m_u_prc_ratio);
            }
            if ( IncludePWidth()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(194,m_p_width);
            }
            if ( IncludeVWidth()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(195,m_v_width);
            }
            if ( IncludeCCnt()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(196,m_c_cnt);
            }
            if ( IncludePCnt()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(197,m_p_cnt);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(198,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_bracket_min)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(199,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_min_point)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(200,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_xmult_abfit)));
            if ( IncludeXMultAbfitError()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(201,m_x_mult_abfit_error);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(202,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_skew_mult_fit)));
            if ( IncludeSkewMultFitError()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(203,m_skew_mult_fit_error);
            }
            if ( IncludeCBidMiss()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(204,m_c_bid_miss);
            }
            if ( IncludeCAskMiss()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(205,m_c_ask_miss);
            }
            if ( IncludePBidMiss()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(206,m_p_bid_miss);
            }
            if ( IncludePAskMiss()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(207,m_p_ask_miss);
            }
            if ( IncludeFitScore()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(208,m_fit_score);
            }
            if ( IncludeCumFitScore()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(209,m_cum_fit_score);
            }
            if ( IncludeFitCounter()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(210,m_fit_counter);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(150,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradeableStatus>(m_tradeable_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(152,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>(m_market_session)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(211,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SurfaceFitResult>(m_surface_fit_result)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(153, m_timestamp);
            }
            if ( IncludeResidual()) {
                for (auto& item : m_residual) {
					totalSize += SRProtobufCPP::TagCodec::Size(161, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
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
            if ( IncludeUPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,100,m_u_prc);
            }
            if ( IncludeUPrcDriver()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,101,m_u_prc_driver);
            }
            if ( IncludeIDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,154,m_i_days);
            }
            if ( IncludeYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,102,m_years);
            }
            if ( IncludeRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,103,m_rate);
            }
            if ( IncludeAtmVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,105,m_atm_vol);
            }
            if ( IncludeAtmCen()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,155,m_atm_cen);
            }
            if ( IncludeAtmSlope()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_atm_slope);
            }
            if ( IncludeAtmSkewYy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,156,m_atm_skew_yy);
            }
            if ( IncludeAtmVresidual()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_atm_vresidual);
            }
            if ( IncludeAtmSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,158,m_atm_sdiv);
            }
            if ( IncludeBasisEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_basis_ekey.setCodecExpiryKey(expiryKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 159, expiryKeyLayout);
            }
            if ( IncludeBasisTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 160, m_basis_timestamp);
            }
            if ( IncludeAxisFuprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,108,m_axis_fuprc);
            }
            if ( IncludeAxisVolRt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_axis_vol_rt);
            }
            if ( IncludeXMult()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,111,m_x_mult);
            }
            if ( IncludeXShift()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_x_shift);
            }
            if ( IncludeSkewMult()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,110,m_skew_mult);
            }
            if ( IncludeMaxResidualErr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,164,m_max_residual_err);
            }
            if ( IncludeCpAdjA()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,165,m_cp_adj_a);
            }
            if ( IncludeCpAdjB()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_cp_adj_b);
            }
            if ( IncludeCpAdjC()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,167,m_cp_adj_c);
            }
            if ( IncludeCpAdjRefVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,168,m_cp_adj_ref_vol);
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 169, tickerKeyLayout);
            }
            if ( IncludeFkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_fkey.setCodecExpiryKey(expiryKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 170, expiryKeyLayout);
            }
            if ( IncludeUPrcDriverKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_u_prc_driver_key.setCodecExpiryKey(expiryKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 171, expiryKeyLayout);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,172,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_u_prc_driver_type)));
            if ( IncludeDdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,173,m_ddiv);
            }
            if ( IncludeDdivPv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,174,m_ddiv_pv);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,175,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DDivSource>(m_ddiv_source)));
            if ( IncludeSymbolRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,176,m_symbol_ratio);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,177,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>(m_ex_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,178,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcModelType>(m_model_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,179,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcPriceType>(m_price_type)));
            if ( IncludeEarnCnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,180,m_earn_cnt);
            }
            if ( IncludeEarnCntAdj()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,181,m_earn_cnt_adj);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,182,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MoneynessType>(m_moneyness_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,183,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceQuoteType>(m_price_quote_type)));
            if ( IncludeAtmVolHist()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,184,m_atm_vol_hist);
            }
            if ( IncludeAtmCenHist()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,185,m_atm_cen_hist);
            }
            if ( IncludeUBetaHist()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,186,m_u_beta_hist);
            }
            if ( IncludeEMove()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,187,m_e_move);
            }
            if ( IncludeEMoveHist()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,188,m_e_move_hist);
            }
            if ( IncludeMinXaxis()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,189,m_min_xaxis);
            }
            if ( IncludeMaxXaxis()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,190,m_max_xaxis);
            }
            if ( IncludeSynSpot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,191,m_syn_spot);
            }
            if ( IncludeSynCarry()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,192,m_syn_carry);
            }
            if ( IncludeUPrcRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,193,m_u_prc_ratio);
            }
            if ( IncludePWidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,194,m_p_width);
            }
            if ( IncludeVWidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,195,m_v_width);
            }
            if ( IncludeCCnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,196,m_c_cnt);
            }
            if ( IncludePCnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,197,m_p_cnt);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,198,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_bracket_min)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,199,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_min_point)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,200,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_xmult_abfit)));
            if ( IncludeXMultAbfitError()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,201,m_x_mult_abfit_error);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,202,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_skew_mult_fit)));
            if ( IncludeSkewMultFitError()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,203,m_skew_mult_fit_error);
            }
            if ( IncludeCBidMiss()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,204,m_c_bid_miss);
            }
            if ( IncludeCAskMiss()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,205,m_c_ask_miss);
            }
            if ( IncludePBidMiss()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,206,m_p_bid_miss);
            }
            if ( IncludePAskMiss()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,207,m_p_ask_miss);
            }
            if ( IncludeFitScore()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,208,m_fit_score);
            }
            if ( IncludeCumFitScore()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,209,m_cum_fit_score);
            }
            if ( IncludeFitCounter()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,210,m_fit_counter);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,150,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradeableStatus>(m_tradeable_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,152,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>(m_market_session)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,211,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SurfaceFitResult>(m_surface_fit_result)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 153, m_timestamp);
            }
            if ( IncludeResidual()) {
                for (auto& item : m_residual) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 161, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
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
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 101: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc_driver = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_i_days = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 102: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 105: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 155: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_slope = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 156: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_skew_yy = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_vresidual = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 158: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 159: {
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_basis_ekey.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_basis_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 108: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_axis_fuprc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_axis_vol_rt = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 111: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_x_mult = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_x_shift = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 110: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_mult = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 164: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_residual_err = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 165: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cp_adj_a = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cp_adj_b = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 167: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cp_adj_c = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 168: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cp_adj_ref_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 170: {
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_fkey.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 171: {
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_u_prc_driver_key.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 172: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_u_prc_driver_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 173: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ddiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 174: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ddiv_pv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 175: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ddiv_source = static_cast<spiderrock::protobuf::api::DDivSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 176: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_symbol_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 177: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ex_type = static_cast<spiderrock::protobuf::api::ExerciseType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 178: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_model_type = static_cast<spiderrock::protobuf::api::CalcModelType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 179: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_type = static_cast<spiderrock::protobuf::api::CalcPriceType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 180: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_earn_cnt = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_earn_cnt_adj = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 182: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_moneyness_type = static_cast<spiderrock::protobuf::api::MoneynessType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 183: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_quote_type = static_cast<spiderrock::protobuf::api::PriceQuoteType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_vol_hist = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 185: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_cen_hist = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 186: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_beta_hist = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_e_move = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 188: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_e_move_hist = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 189: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_xaxis = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_xaxis = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 191: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_syn_spot = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 192: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_syn_carry = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc_ratio = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 194: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_p_width = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 195: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_v_width = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_c_cnt = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 197: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_p_cnt = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 198: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_bracket_min = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 199: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_min_point = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 200: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_xmult_abfit = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 201: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_x_mult_abfit_error = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 202: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_skew_mult_fit = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 203: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_skew_mult_fit_error = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 204: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_c_bid_miss = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_c_ask_miss = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 206: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_p_bid_miss = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 207: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_p_ask_miss = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fit_score = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 209: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cum_fit_score = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 210: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fit_counter = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 150: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_tradeable_status = static_cast<spiderrock::protobuf::api::TradeableStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 152: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_market_session = static_cast<spiderrock::protobuf::api::MarketSession>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 211: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_surface_fit_result = static_cast<spiderrock::protobuf::api::SurfaceFitResult>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 153: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 161: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            residual item_residual;
                            item_residual.Decode(pos, pos+length);  
                            m_residual.emplace_back(item_residual);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::_meta>() const { return LiveExpirySurface::_meta{ m__meta}; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::pkey>() const { return LiveExpirySurface::pkey{ m_pkey}; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::u_prc>() const { return m_u_prc; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::u_prc_driver>() const { return m_u_prc_driver; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::i_days>() const { return m_i_days; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::years>() const { return m_years; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::rate>() const { return m_rate; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::atm_vol>() const { return m_atm_vol; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::atm_cen>() const { return m_atm_cen; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::atm_slope>() const { return m_atm_slope; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::atm_skew_yy>() const { return m_atm_skew_yy; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::atm_vresidual>() const { return m_atm_vresidual; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::atm_sdiv>() const { return m_atm_sdiv; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::basis_ekey>() const { return LiveExpirySurface::basis_ekey{ m_basis_ekey}; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::basis_timestamp>() const { return m_basis_timestamp; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::axis_fuprc>() const { return m_axis_fuprc; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::axis_vol_rt>() const { return m_axis_vol_rt; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::x_mult>() const { return m_x_mult; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::x_shift>() const { return m_x_shift; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::skew_mult>() const { return m_skew_mult; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::max_residual_err>() const { return m_max_residual_err; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::cp_adj_a>() const { return m_cp_adj_a; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::cp_adj_b>() const { return m_cp_adj_b; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::cp_adj_c>() const { return m_cp_adj_c; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::cp_adj_ref_vol>() const { return m_cp_adj_ref_vol; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::ticker>() const { return LiveExpirySurface::ticker{ m_ticker}; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::fkey>() const { return LiveExpirySurface::fkey{ m_fkey}; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::u_prc_driver_key>() const { return LiveExpirySurface::u_prc_driver_key{ m_u_prc_driver_key}; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::u_prc_driver_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_u_prc_driver_type)); }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::ddiv>() const { return m_ddiv; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::ddiv_pv>() const { return m_ddiv_pv; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::ddiv_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DDivSource>( m_ddiv_source)); }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::symbol_ratio>() const { return m_symbol_ratio; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::ex_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>( m_ex_type)); }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::model_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcModelType>( m_model_type)); }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::price_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcPriceType>( m_price_type)); }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::earn_cnt>() const { return m_earn_cnt; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::earn_cnt_adj>() const { return m_earn_cnt_adj; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::moneyness_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MoneynessType>( m_moneyness_type)); }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::price_quote_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceQuoteType>( m_price_quote_type)); }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::atm_vol_hist>() const { return m_atm_vol_hist; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::atm_cen_hist>() const { return m_atm_cen_hist; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::u_beta_hist>() const { return m_u_beta_hist; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::e_move>() const { return m_e_move; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::e_move_hist>() const { return m_e_move_hist; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::min_xaxis>() const { return m_min_xaxis; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::max_xaxis>() const { return m_max_xaxis; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::syn_spot>() const { return m_syn_spot; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::syn_carry>() const { return m_syn_carry; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::u_prc_ratio>() const { return m_u_prc_ratio; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::p_width>() const { return m_p_width; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::v_width>() const { return m_v_width; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::c_cnt>() const { return m_c_cnt; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::p_cnt>() const { return m_p_cnt; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::has_bracket_min>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_bracket_min)); }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::has_min_point>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_min_point)); }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::has_xmult_abfit>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_xmult_abfit)); }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::x_mult_abfit_error>() const { return m_x_mult_abfit_error; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::has_skew_mult_fit>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_skew_mult_fit)); }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::skew_mult_fit_error>() const { return m_skew_mult_fit_error; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::c_bid_miss>() const { return m_c_bid_miss; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::c_ask_miss>() const { return m_c_ask_miss; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::p_bid_miss>() const { return m_p_bid_miss; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::p_ask_miss>() const { return m_p_ask_miss; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::fit_score>() const { return m_fit_score; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::cum_fit_score>() const { return m_cum_fit_score; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::fit_counter>() const { return m_fit_counter; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::tradeable_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradeableStatus>( m_tradeable_status)); }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::market_session>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>( m_market_session)); }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::surface_fit_result>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SurfaceFitResult>( m_surface_fit_result)); }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::timestamp>() const { return m_timestamp; }
    template<> inline const auto LiveExpirySurface::get<LiveExpirySurface::residual>(int i) const { return LiveExpirySurface::residual{ get_residual(i)}; }
    template<> inline int LiveExpirySurface::count<LiveExpirySurface::residual>() const { return static_cast<int>( m_residual.size()); }
    template<> inline const auto LiveExpirySurface_PKey::get<LiveExpirySurface_PKey::ekey>() const { return LiveExpirySurface_PKey::ekey{m_ekey}; }
    template<> inline const auto LiveExpirySurface_PKey::get<LiveExpirySurface_PKey::surface_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SurfaceCurveType>(m_surface_type));}
    
    template<> inline const auto LiveExpirySurface_Residual::get<LiveExpirySurface_Residual::x>() const { return m_x; }
    template<> inline const auto LiveExpirySurface_Residual::get<LiveExpirySurface_Residual::y>() const { return m_y; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const LiveExpirySurface_PKey& m) {
        o << "\"ekey\":{" << m.get<LiveExpirySurface_PKey::ekey>() << "}";
        o << ",\"surface_type\":" << (int64_t)m.get<LiveExpirySurface_PKey::surface_type>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const LiveExpirySurface_Residual& m) {
        o << "\"x\":" << m.get<LiveExpirySurface_Residual::x>();
        o << ",\"y\":" << m.get<LiveExpirySurface_Residual::y>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const LiveExpirySurface& m) {
        o << "\"_meta\":{" << m.get<LiveExpirySurface::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<LiveExpirySurface::pkey>() << "}";
        o << ",\"u_prc\":" << m.get<LiveExpirySurface::u_prc>();
        o << ",\"u_prc_driver\":" << m.get<LiveExpirySurface::u_prc_driver>();
        o << ",\"i_days\":" << m.get<LiveExpirySurface::i_days>();
        o << ",\"years\":" << m.get<LiveExpirySurface::years>();
        o << ",\"rate\":" << m.get<LiveExpirySurface::rate>();
        o << ",\"atm_vol\":" << m.get<LiveExpirySurface::atm_vol>();
        o << ",\"atm_cen\":" << m.get<LiveExpirySurface::atm_cen>();
        o << ",\"atm_slope\":" << m.get<LiveExpirySurface::atm_slope>();
        o << ",\"atm_skew_yy\":" << m.get<LiveExpirySurface::atm_skew_yy>();
        o << ",\"atm_vresidual\":" << m.get<LiveExpirySurface::atm_vresidual>();
        o << ",\"atm_sdiv\":" << m.get<LiveExpirySurface::atm_sdiv>();
        o << ",\"basis_ekey\":{" << m.get<LiveExpirySurface::basis_ekey>() << "}";
        {
            std::time_t tt = m.get<LiveExpirySurface::basis_timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"basis_timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"axis_fuprc\":" << m.get<LiveExpirySurface::axis_fuprc>();
        o << ",\"axis_vol_rt\":" << m.get<LiveExpirySurface::axis_vol_rt>();
        o << ",\"x_mult\":" << m.get<LiveExpirySurface::x_mult>();
        o << ",\"x_shift\":" << m.get<LiveExpirySurface::x_shift>();
        o << ",\"skew_mult\":" << m.get<LiveExpirySurface::skew_mult>();
        o << ",\"max_residual_err\":" << m.get<LiveExpirySurface::max_residual_err>();
        o << ",\"cp_adj_a\":" << m.get<LiveExpirySurface::cp_adj_a>();
        o << ",\"cp_adj_b\":" << m.get<LiveExpirySurface::cp_adj_b>();
        o << ",\"cp_adj_c\":" << m.get<LiveExpirySurface::cp_adj_c>();
        o << ",\"cp_adj_ref_vol\":" << m.get<LiveExpirySurface::cp_adj_ref_vol>();
        o << ",\"ticker\":{" << m.get<LiveExpirySurface::ticker>() << "}";
        o << ",\"fkey\":{" << m.get<LiveExpirySurface::fkey>() << "}";
        o << ",\"u_prc_driver_key\":{" << m.get<LiveExpirySurface::u_prc_driver_key>() << "}";
        o << ",\"u_prc_driver_type\":" << (int64_t)m.get<LiveExpirySurface::u_prc_driver_type>();
        o << ",\"ddiv\":" << m.get<LiveExpirySurface::ddiv>();
        o << ",\"ddiv_pv\":" << m.get<LiveExpirySurface::ddiv_pv>();
        o << ",\"ddiv_source\":" << (int64_t)m.get<LiveExpirySurface::ddiv_source>();
        o << ",\"symbol_ratio\":" << m.get<LiveExpirySurface::symbol_ratio>();
        o << ",\"ex_type\":" << (int64_t)m.get<LiveExpirySurface::ex_type>();
        o << ",\"model_type\":" << (int64_t)m.get<LiveExpirySurface::model_type>();
        o << ",\"price_type\":" << (int64_t)m.get<LiveExpirySurface::price_type>();
        o << ",\"earn_cnt\":" << m.get<LiveExpirySurface::earn_cnt>();
        o << ",\"earn_cnt_adj\":" << m.get<LiveExpirySurface::earn_cnt_adj>();
        o << ",\"moneyness_type\":" << (int64_t)m.get<LiveExpirySurface::moneyness_type>();
        o << ",\"price_quote_type\":" << (int64_t)m.get<LiveExpirySurface::price_quote_type>();
        o << ",\"atm_vol_hist\":" << m.get<LiveExpirySurface::atm_vol_hist>();
        o << ",\"atm_cen_hist\":" << m.get<LiveExpirySurface::atm_cen_hist>();
        o << ",\"u_beta_hist\":" << m.get<LiveExpirySurface::u_beta_hist>();
        o << ",\"e_move\":" << m.get<LiveExpirySurface::e_move>();
        o << ",\"e_move_hist\":" << m.get<LiveExpirySurface::e_move_hist>();
        o << ",\"min_xaxis\":" << m.get<LiveExpirySurface::min_xaxis>();
        o << ",\"max_xaxis\":" << m.get<LiveExpirySurface::max_xaxis>();
        o << ",\"syn_spot\":" << m.get<LiveExpirySurface::syn_spot>();
        o << ",\"syn_carry\":" << m.get<LiveExpirySurface::syn_carry>();
        o << ",\"u_prc_ratio\":" << m.get<LiveExpirySurface::u_prc_ratio>();
        o << ",\"p_width\":" << m.get<LiveExpirySurface::p_width>();
        o << ",\"v_width\":" << m.get<LiveExpirySurface::v_width>();
        o << ",\"c_cnt\":" << m.get<LiveExpirySurface::c_cnt>();
        o << ",\"p_cnt\":" << m.get<LiveExpirySurface::p_cnt>();
        o << ",\"has_bracket_min\":" << (int64_t)m.get<LiveExpirySurface::has_bracket_min>();
        o << ",\"has_min_point\":" << (int64_t)m.get<LiveExpirySurface::has_min_point>();
        o << ",\"has_xmult_abfit\":" << (int64_t)m.get<LiveExpirySurface::has_xmult_abfit>();
        o << ",\"x_mult_abfit_error\":" << m.get<LiveExpirySurface::x_mult_abfit_error>();
        o << ",\"has_skew_mult_fit\":" << (int64_t)m.get<LiveExpirySurface::has_skew_mult_fit>();
        o << ",\"skew_mult_fit_error\":" << m.get<LiveExpirySurface::skew_mult_fit_error>();
        o << ",\"c_bid_miss\":" << m.get<LiveExpirySurface::c_bid_miss>();
        o << ",\"c_ask_miss\":" << m.get<LiveExpirySurface::c_ask_miss>();
        o << ",\"p_bid_miss\":" << m.get<LiveExpirySurface::p_bid_miss>();
        o << ",\"p_ask_miss\":" << m.get<LiveExpirySurface::p_ask_miss>();
        o << ",\"fit_score\":" << m.get<LiveExpirySurface::fit_score>();
        o << ",\"cum_fit_score\":" << m.get<LiveExpirySurface::cum_fit_score>();
        o << ",\"fit_counter\":" << m.get<LiveExpirySurface::fit_counter>();
        o << ",\"tradeable_status\":" << (int64_t)m.get<LiveExpirySurface::tradeable_status>();
        o << ",\"market_session\":" << (int64_t)m.get<LiveExpirySurface::market_session>();
        o << ",\"surface_fit_result\":" << (int64_t)m.get<LiveExpirySurface::surface_fit_result>();
        {
            std::time_t tt = m.get<LiveExpirySurface::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"residual\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<LiveExpirySurface::residual>(); ++i) {
                o << delim << m.get<LiveExpirySurface::residual>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}