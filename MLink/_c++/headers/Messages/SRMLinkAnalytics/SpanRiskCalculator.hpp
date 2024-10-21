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

    #ifndef _vol__GUARD__
    #define _vol__GUARD__
    DECL_STRONG_TYPE(vol, double);
    #endif//_vol__GUARD__

    #ifndef _vol_src__GUARD__
    #define _vol_src__GUARD__
    DECL_STRONG_TYPE(vol_src, spiderrock::protobuf::api::FieldSrc);
    #endif//_vol_src__GUARD__

    #ifndef _u_prc__double__GUARD__
    #define _u_prc__double__GUARD__
    DECL_STRONG_TYPE(u_prc__double, double);
    #endif//_u_prc__double__GUARD__

    #ifndef _u_prc_src__GUARD__
    #define _u_prc_src__GUARD__
    DECL_STRONG_TYPE(u_prc_src, spiderrock::protobuf::api::FieldSrc);
    #endif//_u_prc_src__GUARD__

    #ifndef _years__double__GUARD__
    #define _years__double__GUARD__
    DECL_STRONG_TYPE(years__double, double);
    #endif//_years__double__GUARD__

    #ifndef _years_src__GUARD__
    #define _years_src__GUARD__
    DECL_STRONG_TYPE(years_src, spiderrock::protobuf::api::FieldSrc);
    #endif//_years_src__GUARD__

    #ifndef _sdiv__double__GUARD__
    #define _sdiv__double__GUARD__
    DECL_STRONG_TYPE(sdiv__double, double);
    #endif//_sdiv__double__GUARD__

    #ifndef _sdiv_src__GUARD__
    #define _sdiv_src__GUARD__
    DECL_STRONG_TYPE(sdiv_src, spiderrock::protobuf::api::FieldSrc);
    #endif//_sdiv_src__GUARD__

    #ifndef _rate__double__GUARD__
    #define _rate__double__GUARD__
    DECL_STRONG_TYPE(rate__double, double);
    #endif//_rate__double__GUARD__

    #ifndef _rate_src__GUARD__
    #define _rate_src__GUARD__
    DECL_STRONG_TYPE(rate_src, spiderrock::protobuf::api::FieldSrc);
    #endif//_rate_src__GUARD__

    #ifndef _ex_type__ExerciseType__GUARD__
    #define _ex_type__ExerciseType__GUARD__
    DECL_STRONG_TYPE(ex_type__ExerciseType, spiderrock::protobuf::api::ExerciseType);
    #endif//_ex_type__ExerciseType__GUARD__

    #ifndef _ex_type_src__GUARD__
    #define _ex_type_src__GUARD__
    DECL_STRONG_TYPE(ex_type_src, spiderrock::protobuf::api::FieldSrc);
    #endif//_ex_type_src__GUARD__

    #ifndef _eff_strike__GUARD__
    #define _eff_strike__GUARD__
    DECL_STRONG_TYPE(eff_strike, double);
    #endif//_eff_strike__GUARD__

    #ifndef _eff_strike_src__GUARD__
    #define _eff_strike_src__GUARD__
    DECL_STRONG_TYPE(eff_strike_src, spiderrock::protobuf::api::FieldSrc);
    #endif//_eff_strike_src__GUARD__

    #ifndef _sym_ratio__GUARD__
    #define _sym_ratio__GUARD__
    DECL_STRONG_TYPE(sym_ratio, double);
    #endif//_sym_ratio__GUARD__

    #ifndef _sym_ratio_src__GUARD__
    #define _sym_ratio_src__GUARD__
    DECL_STRONG_TYPE(sym_ratio_src, spiderrock::protobuf::api::FieldSrc);
    #endif//_sym_ratio_src__GUARD__

    #ifndef _div_string__GUARD__
    #define _div_string__GUARD__
    DECL_STRONG_TYPE(div_string, string);
    #endif//_div_string__GUARD__

    #ifndef _div_src__GUARD__
    #define _div_src__GUARD__
    DECL_STRONG_TYPE(div_src, spiderrock::protobuf::api::FieldSrc);
    #endif//_div_src__GUARD__

    #ifndef _model_type__CalcModelType__GUARD__
    #define _model_type__CalcModelType__GUARD__
    DECL_STRONG_TYPE(model_type__CalcModelType, spiderrock::protobuf::api::CalcModelType);
    #endif//_model_type__CalcModelType__GUARD__

    #ifndef _model_type_src__GUARD__
    #define _model_type_src__GUARD__
    DECL_STRONG_TYPE(model_type_src, spiderrock::protobuf::api::FieldSrc);
    #endif//_model_type_src__GUARD__

    #ifndef _calc_precision__GUARD__
    #define _calc_precision__GUARD__
    DECL_STRONG_TYPE(calc_precision, spiderrock::protobuf::api::CalcPrecision);
    #endif//_calc_precision__GUARD__

    #ifndef _point_value__double__GUARD__
    #define _point_value__double__GUARD__
    DECL_STRONG_TYPE(point_value__double, double);
    #endif//_point_value__double__GUARD__

    #ifndef _point_currency__GUARD__
    #define _point_currency__GUARD__
    DECL_STRONG_TYPE(point_currency, spiderrock::protobuf::api::Currency);
    #endif//_point_currency__GUARD__

    #ifndef _point_value_src__GUARD__
    #define _point_value_src__GUARD__
    DECL_STRONG_TYPE(point_value_src, spiderrock::protobuf::api::FieldSrc);
    #endif//_point_value_src__GUARD__

    #ifndef _prc_span_up__GUARD__
    #define _prc_span_up__GUARD__
    DECL_STRONG_TYPE(prc_span_up, float);
    #endif//_prc_span_up__GUARD__

    #ifndef _prc_span_dn__GUARD__
    #define _prc_span_dn__GUARD__
    DECL_STRONG_TYPE(prc_span_dn, float);
    #endif//_prc_span_dn__GUARD__

    #ifndef _prc_span_type__GUARD__
    #define _prc_span_type__GUARD__
    DECL_STRONG_TYPE(prc_span_type, spiderrock::protobuf::api::PrcSpanType);
    #endif//_prc_span_type__GUARD__

    #ifndef _vol_span__GUARD__
    #define _vol_span__GUARD__
    DECL_STRONG_TYPE(vol_span, float);
    #endif//_vol_span__GUARD__

    #ifndef _vol_span_type__GUARD__
    #define _vol_span_type__GUARD__
    DECL_STRONG_TYPE(vol_span_type, spiderrock::protobuf::api::VolSpanType);
    #endif//_vol_span_type__GUARD__

    #ifndef _span_calc_type__GUARD__
    #define _span_calc_type__GUARD__
    DECL_STRONG_TYPE(span_calc_type, spiderrock::protobuf::api::SpanCalcType);
    #endif//_span_calc_type__GUARD__

    #ifndef _hedge_delta_neutral__GUARD__
    #define _hedge_delta_neutral__GUARD__
    DECL_STRONG_TYPE(hedge_delta_neutral, spiderrock::protobuf::api::YesNo);
    #endif//_hedge_delta_neutral__GUARD__

    #ifndef _adj_years__GUARD__
    #define _adj_years__GUARD__
    DECL_STRONG_TYPE(adj_years, double);
    #endif//_adj_years__GUARD__

    #ifndef _max_years__double__GUARD__
    #define _max_years__double__GUARD__
    DECL_STRONG_TYPE(max_years__double, double);
    #endif//_max_years__double__GUARD__

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

    #ifndef _error__string__GUARD__
    #define _error__string__GUARD__
    DECL_STRONG_TYPE(error__string, string);
    #endif//_error__string__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _sec_key__GUARD__
    #define _sec_key__GUARD__
    DECL_STRONG_TYPE(sec_key, OptionKey);
    #endif//_sec_key__GUARD__

    #ifndef _sec_type__SpdrKeyType__GUARD__
    #define _sec_type__SpdrKeyType__GUARD__
    DECL_STRONG_TYPE(sec_type__SpdrKeyType, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__SpdrKeyType__GUARD__

    #ifndef _user_name__GUARD__
    #define _user_name__GUARD__
    DECL_STRONG_TYPE(user_name, string);
    #endif//_user_name__GUARD__

    
    class SpanRiskCalculator_PKey {
        public:
        //using statements for all types used in this class
        using sec_key = spiderrock::protobuf::api::sec_key;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using user_name = spiderrock::protobuf::api::user_name;

        private:
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        user_name m_user_name{};

        public:
		sec_key get_sec_key() const {
            return m_sec_key;
        }
        sec_type get_sec_type() const {
            return m_sec_type;
        }
        user_name get_user_name() const {
            return m_user_name;
        }
        void set_sec_key(const sec_key& value)  {
            m_sec_key = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        void set_user_name(const user_name& value)  {
            m_user_name = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpanRiskCalculator_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpanRiskCalculator_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const sec_key & value) { set_sec_key(value); }
        void set(const sec_type & value) { set_sec_type(value); }
        void set(const user_name & value) { set_user_name(value); }


        SpanRiskCalculator_PKey() {}

        virtual ~SpanRiskCalculator_PKey() {
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
        bool IncludeSecKey() const {
            return (m_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeUserName() const {
            return !(m_user_name.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout;
                m_sec_key.setCodecOptionKey(optionKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(10,optionKeyLayout);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(12,m_user_name);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout;
                m_sec_key.setCodecOptionKey(optionKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 10, optionKeyLayout);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,12,static_cast<string>(m_user_name));
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
                        m_sec_key.setFromCodec(optionKey);
                        break;
                    }
                    case 11: {m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 12: {m_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SpanRiskCalculator {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpanRiskCalculator_PKey;
        using vol = spiderrock::protobuf::api::vol;
        using vol_src = spiderrock::protobuf::api::vol_src;
        using u_prc = spiderrock::protobuf::api::u_prc__double;
        using u_prc_src = spiderrock::protobuf::api::u_prc_src;
        using years = spiderrock::protobuf::api::years__double;
        using years_src = spiderrock::protobuf::api::years_src;
        using sdiv = spiderrock::protobuf::api::sdiv__double;
        using sdiv_src = spiderrock::protobuf::api::sdiv_src;
        using rate = spiderrock::protobuf::api::rate__double;
        using rate_src = spiderrock::protobuf::api::rate_src;
        using ex_type = spiderrock::protobuf::api::ex_type__ExerciseType;
        using ex_type_src = spiderrock::protobuf::api::ex_type_src;
        using eff_strike = spiderrock::protobuf::api::eff_strike;
        using eff_strike_src = spiderrock::protobuf::api::eff_strike_src;
        using sym_ratio = spiderrock::protobuf::api::sym_ratio;
        using sym_ratio_src = spiderrock::protobuf::api::sym_ratio_src;
        using div_string = spiderrock::protobuf::api::div_string;
        using div_src = spiderrock::protobuf::api::div_src;
        using model_type = spiderrock::protobuf::api::model_type__CalcModelType;
        using model_type_src = spiderrock::protobuf::api::model_type_src;
        using calc_precision = spiderrock::protobuf::api::calc_precision;
        using point_value = spiderrock::protobuf::api::point_value__double;
        using point_currency = spiderrock::protobuf::api::point_currency;
        using point_value_src = spiderrock::protobuf::api::point_value_src;
        using prc_span_up = spiderrock::protobuf::api::prc_span_up;
        using prc_span_dn = spiderrock::protobuf::api::prc_span_dn;
        using prc_span_type = spiderrock::protobuf::api::prc_span_type;
        using vol_span = spiderrock::protobuf::api::vol_span;
        using vol_span_type = spiderrock::protobuf::api::vol_span_type;
        using span_calc_type = spiderrock::protobuf::api::span_calc_type;
        using hedge_delta_neutral = spiderrock::protobuf::api::hedge_delta_neutral;
        using adj_years = spiderrock::protobuf::api::adj_years;
        using max_years = spiderrock::protobuf::api::max_years__double;
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
        using error = spiderrock::protobuf::api::error__string;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        vol m_vol{};
        vol_src m_vol_src{};
        u_prc m_u_prc{};
        u_prc_src m_u_prc_src{};
        years m_years{};
        years_src m_years_src{};
        sdiv m_sdiv{};
        sdiv_src m_sdiv_src{};
        rate m_rate{};
        rate_src m_rate_src{};
        ex_type m_ex_type{};
        ex_type_src m_ex_type_src{};
        eff_strike m_eff_strike{};
        eff_strike_src m_eff_strike_src{};
        sym_ratio m_sym_ratio{};
        sym_ratio_src m_sym_ratio_src{};
        div_string m_div_string{};
        div_src m_div_src{};
        model_type m_model_type{};
        model_type_src m_model_type_src{};
        calc_precision m_calc_precision{};
        point_value m_point_value{};
        point_currency m_point_currency{};
        point_value_src m_point_value_src{};
        prc_span_up m_prc_span_up{};
        prc_span_dn m_prc_span_dn{};
        prc_span_type m_prc_span_type{};
        vol_span m_vol_span{};
        vol_span_type m_vol_span_type{};
        span_calc_type m_span_calc_type{};
        hedge_delta_neutral m_hedge_delta_neutral{};
        adj_years m_adj_years{};
        max_years m_max_years{};
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
        error m_error{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        vol get_vol() const {
            return m_vol;
        }		
        vol_src get_vol_src() const {
            return m_vol_src;
        }		
        u_prc get_u_prc() const {
            return m_u_prc;
        }		
        u_prc_src get_u_prc_src() const {
            return m_u_prc_src;
        }		
        years get_years() const {
            return m_years;
        }		
        years_src get_years_src() const {
            return m_years_src;
        }		
        sdiv get_sdiv() const {
            return m_sdiv;
        }		
        sdiv_src get_sdiv_src() const {
            return m_sdiv_src;
        }		
        rate get_rate() const {
            return m_rate;
        }		
        rate_src get_rate_src() const {
            return m_rate_src;
        }		
        ex_type get_ex_type() const {
            return m_ex_type;
        }		
        ex_type_src get_ex_type_src() const {
            return m_ex_type_src;
        }		
        eff_strike get_eff_strike() const {
            return m_eff_strike;
        }		
        eff_strike_src get_eff_strike_src() const {
            return m_eff_strike_src;
        }		
        sym_ratio get_sym_ratio() const {
            return m_sym_ratio;
        }		
        sym_ratio_src get_sym_ratio_src() const {
            return m_sym_ratio_src;
        }		
        div_string get_div_string() const {
            return m_div_string;
        }		
        div_src get_div_src() const {
            return m_div_src;
        }		
        model_type get_model_type() const {
            return m_model_type;
        }		
        model_type_src get_model_type_src() const {
            return m_model_type_src;
        }		
        calc_precision get_calc_precision() const {
            return m_calc_precision;
        }		
        point_value get_point_value() const {
            return m_point_value;
        }		
        point_currency get_point_currency() const {
            return m_point_currency;
        }		
        point_value_src get_point_value_src() const {
            return m_point_value_src;
        }		
        prc_span_up get_prc_span_up() const {
            return m_prc_span_up;
        }		
        prc_span_dn get_prc_span_dn() const {
            return m_prc_span_dn;
        }		
        prc_span_type get_prc_span_type() const {
            return m_prc_span_type;
        }		
        vol_span get_vol_span() const {
            return m_vol_span;
        }		
        vol_span_type get_vol_span_type() const {
            return m_vol_span_type;
        }		
        span_calc_type get_span_calc_type() const {
            return m_span_calc_type;
        }		
        hedge_delta_neutral get_hedge_delta_neutral() const {
            return m_hedge_delta_neutral;
        }		
        adj_years get_adj_years() const {
            return m_adj_years;
        }		
        max_years get_max_years() const {
            return m_max_years;
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
        error get_error() const {
            return m_error;
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
        void set_vol(const vol& value)  {
            m_vol = value;
        }
        void set_vol_src(const vol_src& value)  {
            m_vol_src = value;
        }
        void set_u_prc(const u_prc& value)  {
            m_u_prc = value;
        }
        void set_u_prc_src(const u_prc_src& value)  {
            m_u_prc_src = value;
        }
        void set_years(const years& value)  {
            m_years = value;
        }
        void set_years_src(const years_src& value)  {
            m_years_src = value;
        }
        void set_sdiv(const sdiv& value)  {
            m_sdiv = value;
        }
        void set_sdiv_src(const sdiv_src& value)  {
            m_sdiv_src = value;
        }
        void set_rate(const rate& value)  {
            m_rate = value;
        }
        void set_rate_src(const rate_src& value)  {
            m_rate_src = value;
        }
        void set_ex_type(const ex_type& value)  {
            m_ex_type = value;
        }
        void set_ex_type_src(const ex_type_src& value)  {
            m_ex_type_src = value;
        }
        void set_eff_strike(const eff_strike& value)  {
            m_eff_strike = value;
        }
        void set_eff_strike_src(const eff_strike_src& value)  {
            m_eff_strike_src = value;
        }
        void set_sym_ratio(const sym_ratio& value)  {
            m_sym_ratio = value;
        }
        void set_sym_ratio_src(const sym_ratio_src& value)  {
            m_sym_ratio_src = value;
        }
        void set_div_string(const div_string& value)  {
            m_div_string = value;
        }
        void set_div_src(const div_src& value)  {
            m_div_src = value;
        }
        void set_model_type(const model_type& value)  {
            m_model_type = value;
        }
        void set_model_type_src(const model_type_src& value)  {
            m_model_type_src = value;
        }
        void set_calc_precision(const calc_precision& value)  {
            m_calc_precision = value;
        }
        void set_point_value(const point_value& value)  {
            m_point_value = value;
        }
        void set_point_currency(const point_currency& value)  {
            m_point_currency = value;
        }
        void set_point_value_src(const point_value_src& value)  {
            m_point_value_src = value;
        }
        void set_prc_span_up(const prc_span_up& value)  {
            m_prc_span_up = value;
        }
        void set_prc_span_dn(const prc_span_dn& value)  {
            m_prc_span_dn = value;
        }
        void set_prc_span_type(const prc_span_type& value)  {
            m_prc_span_type = value;
        }
        void set_vol_span(const vol_span& value)  {
            m_vol_span = value;
        }
        void set_vol_span_type(const vol_span_type& value)  {
            m_vol_span_type = value;
        }
        void set_span_calc_type(const span_calc_type& value)  {
            m_span_calc_type = value;
        }
        void set_hedge_delta_neutral(const hedge_delta_neutral& value)  {
            m_hedge_delta_neutral = value;
        }
        void set_adj_years(const adj_years& value)  {
            m_adj_years = value;
        }
        void set_max_years(const max_years& value)  {
            m_max_years = value;
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
        void set_error(const error& value)  {
            m_error = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpanRiskCalculator::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const vol & value) {
            set_vol(value);
        }
        void set(const vol_src & value) {
            set_vol_src(value);
        }
        void set(const u_prc & value) {
            set_u_prc(value);
        }
        void set(const u_prc_src & value) {
            set_u_prc_src(value);
        }
        void set(const years & value) {
            set_years(value);
        }
        void set(const years_src & value) {
            set_years_src(value);
        }
        void set(const sdiv & value) {
            set_sdiv(value);
        }
        void set(const sdiv_src & value) {
            set_sdiv_src(value);
        }
        void set(const rate & value) {
            set_rate(value);
        }
        void set(const rate_src & value) {
            set_rate_src(value);
        }
        void set(const ex_type & value) {
            set_ex_type(value);
        }
        void set(const ex_type_src & value) {
            set_ex_type_src(value);
        }
        void set(const eff_strike & value) {
            set_eff_strike(value);
        }
        void set(const eff_strike_src & value) {
            set_eff_strike_src(value);
        }
        void set(const sym_ratio & value) {
            set_sym_ratio(value);
        }
        void set(const sym_ratio_src & value) {
            set_sym_ratio_src(value);
        }
        void set(const div_string & value) {
            set_div_string(value);
        }
        void set(const div_src & value) {
            set_div_src(value);
        }
        void set(const model_type & value) {
            set_model_type(value);
        }
        void set(const model_type_src & value) {
            set_model_type_src(value);
        }
        void set(const calc_precision & value) {
            set_calc_precision(value);
        }
        void set(const point_value & value) {
            set_point_value(value);
        }
        void set(const point_currency & value) {
            set_point_currency(value);
        }
        void set(const point_value_src & value) {
            set_point_value_src(value);
        }
        void set(const prc_span_up & value) {
            set_prc_span_up(value);
        }
        void set(const prc_span_dn & value) {
            set_prc_span_dn(value);
        }
        void set(const prc_span_type & value) {
            set_prc_span_type(value);
        }
        void set(const vol_span & value) {
            set_vol_span(value);
        }
        void set(const vol_span_type & value) {
            set_vol_span_type(value);
        }
        void set(const span_calc_type & value) {
            set_span_calc_type(value);
        }
        void set(const hedge_delta_neutral & value) {
            set_hedge_delta_neutral(value);
        }
        void set(const adj_years & value) {
            set_adj_years(value);
        }
        void set(const max_years & value) {
            set_max_years(value);
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
        void set(const error & value) {
            set_error(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const SpanRiskCalculator & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_vol);
            set(value.m_vol_src);
            set(value.m_u_prc);
            set(value.m_u_prc_src);
            set(value.m_years);
            set(value.m_years_src);
            set(value.m_sdiv);
            set(value.m_sdiv_src);
            set(value.m_rate);
            set(value.m_rate_src);
            set(value.m_ex_type);
            set(value.m_ex_type_src);
            set(value.m_eff_strike);
            set(value.m_eff_strike_src);
            set(value.m_sym_ratio);
            set(value.m_sym_ratio_src);
            set(value.m_div_string);
            set(value.m_div_src);
            set(value.m_model_type);
            set(value.m_model_type_src);
            set(value.m_calc_precision);
            set(value.m_point_value);
            set(value.m_point_currency);
            set(value.m_point_value_src);
            set(value.m_prc_span_up);
            set(value.m_prc_span_dn);
            set(value.m_prc_span_type);
            set(value.m_vol_span);
            set(value.m_vol_span_type);
            set(value.m_span_calc_type);
            set(value.m_hedge_delta_neutral);
            set(value.m_adj_years);
            set(value.m_max_years);
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
            set(value.m_error);
            set(value.m_timestamp);
        }

        SpanRiskCalculator() {
            m__meta.set_message_type("SpanRiskCalculator");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 5060, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 5060, length);
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
             *this = SpanRiskCalculator{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeVol() const {
            return !(m_vol == 0.0);
        }
        bool IncludeUPrc() const {
            return !(m_u_prc == 0.0);
        }
        bool IncludeYears() const {
            return !(m_years == 0.0);
        }
        bool IncludeSdiv() const {
            return !(m_sdiv == 0.0);
        }
        bool IncludeRate() const {
            return !(m_rate == 0.0);
        }
        bool IncludeEffStrike() const {
            return !(m_eff_strike == 0.0);
        }
        bool IncludeSymRatio() const {
            return !(m_sym_ratio == 0.0);
        }
        bool IncludeDivString() const {
            return !(m_div_string.empty());
        }
        bool IncludePointValue() const {
            return !(m_point_value == 0.0);
        }
        bool IncludePrcSpanUp() const {
            return !(m_prc_span_up == 0.0);
        }
        bool IncludePrcSpanDn() const {
            return !(m_prc_span_dn == 0.0);
        }
        bool IncludeVolSpan() const {
            return !(m_vol_span == 0.0);
        }
        bool IncludeAdjYears() const {
            return !(m_adj_years == 0.0);
        }
        bool IncludeMaxYears() const {
            return !(m_max_years == 0.0);
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
        bool IncludeError() const {
            return !(m_error.empty());
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
            if ( IncludeVol()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(100,m_vol);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>(m_vol_src)));
            if ( IncludeUPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(106,m_u_prc);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>(m_u_prc_src)));
            if ( IncludeYears()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(112,m_years);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>(m_years_src)));
            if ( IncludeSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(118,m_sdiv);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>(m_sdiv_src)));
            if ( IncludeRate()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(124,m_rate);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>(m_rate_src)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>(m_ex_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>(m_ex_type_src)));
            if ( IncludeEffStrike()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(136,m_eff_strike);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>(m_eff_strike_src)));
            if ( IncludeSymRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(142,m_sym_ratio);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>(m_sym_ratio_src)));
            if ( IncludeDivString()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(148,m_div_string);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>(m_div_src)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcModelType>(m_model_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(157,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>(m_model_type_src)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(160,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcPrecision>(m_calc_precision)));
            if ( IncludePointValue()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(163,m_point_value);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(248,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(166,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>(m_point_value_src)));
            if ( IncludePrcSpanUp()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(169,m_prc_span_up);
            }
            if ( IncludePrcSpanDn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(172,m_prc_span_dn);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(175,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrcSpanType>(m_prc_span_type)));
            if ( IncludeVolSpan()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_vol_span);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(181,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::VolSpanType>(m_vol_span_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpanCalcType>(m_span_calc_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(187,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_hedge_delta_neutral)));
            if ( IncludeAdjYears()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(190,m_adj_years);
            }
            if ( IncludeMaxYears()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(193,m_max_years);
            }
            if ( IncludeSpan01()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(196,m_span01);
            }
            if ( IncludeSpan02()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(199,m_span02);
            }
            if ( IncludeSpan03()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(202,m_span03);
            }
            if ( IncludeSpan04()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(205,m_span04);
            }
            if ( IncludeSpan05()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(208,m_span05);
            }
            if ( IncludeSpan06()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(211,m_span06);
            }
            if ( IncludeSpan07()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(214,m_span07);
            }
            if ( IncludeSpan08()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(217,m_span08);
            }
            if ( IncludeSpan09()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(220,m_span09);
            }
            if ( IncludeSpan10()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(223,m_span10);
            }
            if ( IncludeSpan11()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(226,m_span11);
            }
            if ( IncludeSpan12()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(229,m_span12);
            }
            if ( IncludeSpan13()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(232,m_span13);
            }
            if ( IncludeSpan14()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(235,m_span14);
            }
            if ( IncludeSpan15()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(238,m_span15);
            }
            if ( IncludeSpan16()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(241,m_span16);
            }
            if ( IncludeError()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(244,m_error);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(247, m_timestamp);
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
            if ( IncludeVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,100,m_vol);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>(m_vol_src)));
            if ( IncludeUPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,106,m_u_prc);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>(m_u_prc_src)));
            if ( IncludeYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,112,m_years);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>(m_years_src)));
            if ( IncludeSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,118,m_sdiv);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>(m_sdiv_src)));
            if ( IncludeRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,124,m_rate);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>(m_rate_src)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>(m_ex_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>(m_ex_type_src)));
            if ( IncludeEffStrike()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,136,m_eff_strike);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>(m_eff_strike_src)));
            if ( IncludeSymRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,142,m_sym_ratio);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>(m_sym_ratio_src)));
            if ( IncludeDivString()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,148,static_cast<string>(m_div_string));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>(m_div_src)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcModelType>(m_model_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,157,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>(m_model_type_src)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,160,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcPrecision>(m_calc_precision)));
            if ( IncludePointValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,163,m_point_value);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,248,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,166,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>(m_point_value_src)));
            if ( IncludePrcSpanUp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,169,m_prc_span_up);
            }
            if ( IncludePrcSpanDn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,172,m_prc_span_dn);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,175,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrcSpanType>(m_prc_span_type)));
            if ( IncludeVolSpan()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_vol_span);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,181,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::VolSpanType>(m_vol_span_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpanCalcType>(m_span_calc_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,187,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_hedge_delta_neutral)));
            if ( IncludeAdjYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,190,m_adj_years);
            }
            if ( IncludeMaxYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,193,m_max_years);
            }
            if ( IncludeSpan01()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,196,m_span01);
            }
            if ( IncludeSpan02()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,199,m_span02);
            }
            if ( IncludeSpan03()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,202,m_span03);
            }
            if ( IncludeSpan04()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,205,m_span04);
            }
            if ( IncludeSpan05()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,208,m_span05);
            }
            if ( IncludeSpan06()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,211,m_span06);
            }
            if ( IncludeSpan07()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,214,m_span07);
            }
            if ( IncludeSpan08()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,217,m_span08);
            }
            if ( IncludeSpan09()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,220,m_span09);
            }
            if ( IncludeSpan10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,223,m_span10);
            }
            if ( IncludeSpan11()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,226,m_span11);
            }
            if ( IncludeSpan12()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,229,m_span12);
            }
            if ( IncludeSpan13()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,232,m_span13);
            }
            if ( IncludeSpan14()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,235,m_span14);
            }
            if ( IncludeSpan15()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,238,m_span15);
            }
            if ( IncludeSpan16()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,241,m_span16);
            }
            if ( IncludeError()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,244,static_cast<string>(m_error));
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 247, m_timestamp);
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
                            m_vol = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_vol_src = static_cast<spiderrock::protobuf::api::FieldSrc>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_u_prc_src = static_cast<spiderrock::protobuf::api::FieldSrc>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_years = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_years_src = static_cast<spiderrock::protobuf::api::FieldSrc>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_sdiv = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 121: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sdiv_src = static_cast<spiderrock::protobuf::api::FieldSrc>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_rate = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 127: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_rate_src = static_cast<spiderrock::protobuf::api::FieldSrc>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 130: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ex_type = static_cast<spiderrock::protobuf::api::ExerciseType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 133: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ex_type_src = static_cast<spiderrock::protobuf::api::FieldSrc>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_eff_strike = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 139: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_eff_strike_src = static_cast<spiderrock::protobuf::api::FieldSrc>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_sym_ratio = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 145: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sym_ratio_src = static_cast<spiderrock::protobuf::api::FieldSrc>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_div_string = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 151: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_div_src = static_cast<spiderrock::protobuf::api::FieldSrc>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 154: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_model_type = static_cast<spiderrock::protobuf::api::CalcModelType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 157: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_model_type_src = static_cast<spiderrock::protobuf::api::FieldSrc>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 160: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_calc_precision = static_cast<spiderrock::protobuf::api::CalcPrecision>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_point_value = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 248: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_point_currency = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 166: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_point_value_src = static_cast<spiderrock::protobuf::api::FieldSrc>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prc_span_up = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prc_span_dn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 175: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_prc_span_type = static_cast<spiderrock::protobuf::api::PrcSpanType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vol_span = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 181: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_vol_span_type = static_cast<spiderrock::protobuf::api::VolSpanType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 184: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_span_calc_type = static_cast<spiderrock::protobuf::api::SpanCalcType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 187: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_delta_neutral = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_adj_years = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_max_years = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span01 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span02 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span03 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span04 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span05 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span06 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span07 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span08 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span09 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span10 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 226: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span11 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 229: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span12 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 232: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span13 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span14 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 238: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span15 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 241: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_span16 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 244: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_error = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 247: {
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

    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::_meta>() const { return SpanRiskCalculator::_meta{ m__meta}; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::pkey>() const { return SpanRiskCalculator::pkey{ m_pkey}; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::vol>() const { return m_vol; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::vol_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>( m_vol_src)); }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::u_prc>() const { return m_u_prc; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::u_prc_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>( m_u_prc_src)); }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::years>() const { return m_years; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::years_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>( m_years_src)); }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::sdiv>() const { return m_sdiv; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::sdiv_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>( m_sdiv_src)); }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::rate>() const { return m_rate; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::rate_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>( m_rate_src)); }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::ex_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>( m_ex_type)); }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::ex_type_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>( m_ex_type_src)); }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::eff_strike>() const { return m_eff_strike; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::eff_strike_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>( m_eff_strike_src)); }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::sym_ratio>() const { return m_sym_ratio; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::sym_ratio_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>( m_sym_ratio_src)); }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::div_string>() const { return m_div_string; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::div_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>( m_div_src)); }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::model_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcModelType>( m_model_type)); }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::model_type_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>( m_model_type_src)); }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::calc_precision>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcPrecision>( m_calc_precision)); }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::point_value>() const { return m_point_value; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::point_currency>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>( m_point_currency)); }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::point_value_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>( m_point_value_src)); }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::prc_span_up>() const { return m_prc_span_up; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::prc_span_dn>() const { return m_prc_span_dn; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::prc_span_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrcSpanType>( m_prc_span_type)); }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::vol_span>() const { return m_vol_span; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::vol_span_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::VolSpanType>( m_vol_span_type)); }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::span_calc_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpanCalcType>( m_span_calc_type)); }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::hedge_delta_neutral>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_hedge_delta_neutral)); }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::adj_years>() const { return m_adj_years; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::max_years>() const { return m_max_years; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::span01>() const { return m_span01; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::span02>() const { return m_span02; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::span03>() const { return m_span03; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::span04>() const { return m_span04; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::span05>() const { return m_span05; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::span06>() const { return m_span06; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::span07>() const { return m_span07; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::span08>() const { return m_span08; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::span09>() const { return m_span09; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::span10>() const { return m_span10; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::span11>() const { return m_span11; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::span12>() const { return m_span12; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::span13>() const { return m_span13; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::span14>() const { return m_span14; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::span15>() const { return m_span15; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::span16>() const { return m_span16; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::error>() const { return m_error; }
    template<> inline const auto SpanRiskCalculator::get<SpanRiskCalculator::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpanRiskCalculator_PKey::get<SpanRiskCalculator_PKey::sec_key>() const { return SpanRiskCalculator_PKey::sec_key{m_sec_key}; }
    template<> inline const auto SpanRiskCalculator_PKey::get<SpanRiskCalculator_PKey::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type));}
    template<> inline const auto SpanRiskCalculator_PKey::get<SpanRiskCalculator_PKey::user_name>() const { return m_user_name; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpanRiskCalculator_PKey& m) {
        o << "\"sec_key\":{" << m.get<SpanRiskCalculator_PKey::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<SpanRiskCalculator_PKey::sec_type>();
        o << ",\"user_name\":\"" << m.get<SpanRiskCalculator_PKey::user_name>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpanRiskCalculator& m) {
        o << "\"_meta\":{" << m.get<SpanRiskCalculator::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpanRiskCalculator::pkey>() << "}";
        o << ",\"vol\":" << m.get<SpanRiskCalculator::vol>();
        o << ",\"vol_src\":" << (int64_t)m.get<SpanRiskCalculator::vol_src>();
        o << ",\"u_prc\":" << m.get<SpanRiskCalculator::u_prc>();
        o << ",\"u_prc_src\":" << (int64_t)m.get<SpanRiskCalculator::u_prc_src>();
        o << ",\"years\":" << m.get<SpanRiskCalculator::years>();
        o << ",\"years_src\":" << (int64_t)m.get<SpanRiskCalculator::years_src>();
        o << ",\"sdiv\":" << m.get<SpanRiskCalculator::sdiv>();
        o << ",\"sdiv_src\":" << (int64_t)m.get<SpanRiskCalculator::sdiv_src>();
        o << ",\"rate\":" << m.get<SpanRiskCalculator::rate>();
        o << ",\"rate_src\":" << (int64_t)m.get<SpanRiskCalculator::rate_src>();
        o << ",\"ex_type\":" << (int64_t)m.get<SpanRiskCalculator::ex_type>();
        o << ",\"ex_type_src\":" << (int64_t)m.get<SpanRiskCalculator::ex_type_src>();
        o << ",\"eff_strike\":" << m.get<SpanRiskCalculator::eff_strike>();
        o << ",\"eff_strike_src\":" << (int64_t)m.get<SpanRiskCalculator::eff_strike_src>();
        o << ",\"sym_ratio\":" << m.get<SpanRiskCalculator::sym_ratio>();
        o << ",\"sym_ratio_src\":" << (int64_t)m.get<SpanRiskCalculator::sym_ratio_src>();
        o << ",\"div_string\":\"" << m.get<SpanRiskCalculator::div_string>() << "\"";
        o << ",\"div_src\":" << (int64_t)m.get<SpanRiskCalculator::div_src>();
        o << ",\"model_type\":" << (int64_t)m.get<SpanRiskCalculator::model_type>();
        o << ",\"model_type_src\":" << (int64_t)m.get<SpanRiskCalculator::model_type_src>();
        o << ",\"calc_precision\":" << (int64_t)m.get<SpanRiskCalculator::calc_precision>();
        o << ",\"point_value\":" << m.get<SpanRiskCalculator::point_value>();
        o << ",\"point_currency\":" << (int64_t)m.get<SpanRiskCalculator::point_currency>();
        o << ",\"point_value_src\":" << (int64_t)m.get<SpanRiskCalculator::point_value_src>();
        o << ",\"prc_span_up\":" << m.get<SpanRiskCalculator::prc_span_up>();
        o << ",\"prc_span_dn\":" << m.get<SpanRiskCalculator::prc_span_dn>();
        o << ",\"prc_span_type\":" << (int64_t)m.get<SpanRiskCalculator::prc_span_type>();
        o << ",\"vol_span\":" << m.get<SpanRiskCalculator::vol_span>();
        o << ",\"vol_span_type\":" << (int64_t)m.get<SpanRiskCalculator::vol_span_type>();
        o << ",\"span_calc_type\":" << (int64_t)m.get<SpanRiskCalculator::span_calc_type>();
        o << ",\"hedge_delta_neutral\":" << (int64_t)m.get<SpanRiskCalculator::hedge_delta_neutral>();
        o << ",\"adj_years\":" << m.get<SpanRiskCalculator::adj_years>();
        o << ",\"max_years\":" << m.get<SpanRiskCalculator::max_years>();
        o << ",\"span01\":" << m.get<SpanRiskCalculator::span01>();
        o << ",\"span02\":" << m.get<SpanRiskCalculator::span02>();
        o << ",\"span03\":" << m.get<SpanRiskCalculator::span03>();
        o << ",\"span04\":" << m.get<SpanRiskCalculator::span04>();
        o << ",\"span05\":" << m.get<SpanRiskCalculator::span05>();
        o << ",\"span06\":" << m.get<SpanRiskCalculator::span06>();
        o << ",\"span07\":" << m.get<SpanRiskCalculator::span07>();
        o << ",\"span08\":" << m.get<SpanRiskCalculator::span08>();
        o << ",\"span09\":" << m.get<SpanRiskCalculator::span09>();
        o << ",\"span10\":" << m.get<SpanRiskCalculator::span10>();
        o << ",\"span11\":" << m.get<SpanRiskCalculator::span11>();
        o << ",\"span12\":" << m.get<SpanRiskCalculator::span12>();
        o << ",\"span13\":" << m.get<SpanRiskCalculator::span13>();
        o << ",\"span14\":" << m.get<SpanRiskCalculator::span14>();
        o << ",\"span15\":" << m.get<SpanRiskCalculator::span15>();
        o << ",\"span16\":" << m.get<SpanRiskCalculator::span16>();
        o << ",\"error\":\"" << m.get<SpanRiskCalculator::error>() << "\"";
        {
            std::time_t tt = m.get<SpanRiskCalculator::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}