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

    #ifndef _okey__GUARD__
    #define _okey__GUARD__
    DECL_STRONG_TYPE(okey, OptionKey);
    #endif//_okey__GUARD__

    #ifndef _basket_number__GUARD__
    #define _basket_number__GUARD__
    DECL_STRONG_TYPE(basket_number, int64);
    #endif//_basket_number__GUARD__

    #ifndef _ex_type__GUARD__
    #define _ex_type__GUARD__
    DECL_STRONG_TYPE(ex_type, spiderrock::protobuf::api::ExerciseType);
    #endif//_ex_type__GUARD__

    #ifndef _ex_time__GUARD__
    #define _ex_time__GUARD__
    DECL_STRONG_TYPE(ex_time, spiderrock::protobuf::api::ExerciseTime);
    #endif//_ex_time__GUARD__

    #ifndef _time_metric__GUARD__
    #define _time_metric__GUARD__
    DECL_STRONG_TYPE(time_metric, spiderrock::protobuf::api::TimeMetric);
    #endif//_time_metric__GUARD__

    #ifndef _price_type__CalcPriceType__GUARD__
    #define _price_type__CalcPriceType__GUARD__
    DECL_STRONG_TYPE(price_type__CalcPriceType, spiderrock::protobuf::api::CalcPriceType);
    #endif//_price_type__CalcPriceType__GUARD__

    #ifndef _model_type__GUARD__
    #define _model_type__GUARD__
    DECL_STRONG_TYPE(model_type, spiderrock::protobuf::api::CalcModelType);
    #endif//_model_type__GUARD__

    #ifndef _inc_greeks__GUARD__
    #define _inc_greeks__GUARD__
    DECL_STRONG_TYPE(inc_greeks, spiderrock::protobuf::api::YesNo);
    #endif//_inc_greeks__GUARD__

    #ifndef _vol__GUARD__
    #define _vol__GUARD__
    DECL_STRONG_TYPE(vol, double);
    #endif//_vol__GUARD__

    #ifndef _u_prc__double__GUARD__
    #define _u_prc__double__GUARD__
    DECL_STRONG_TYPE(u_prc__double, double);
    #endif//_u_prc__double__GUARD__

    #ifndef _i_days__int32__GUARD__
    #define _i_days__int32__GUARD__
    DECL_STRONG_TYPE(i_days__int32, int32);
    #endif//_i_days__int32__GUARD__

    #ifndef _years__double__GUARD__
    #define _years__double__GUARD__
    DECL_STRONG_TYPE(years__double, double);
    #endif//_years__double__GUARD__

    #ifndef _sdiv__double__GUARD__
    #define _sdiv__double__GUARD__
    DECL_STRONG_TYPE(sdiv__double, double);
    #endif//_sdiv__double__GUARD__

    #ifndef _rate__double__GUARD__
    #define _rate__double__GUARD__
    DECL_STRONG_TYPE(rate__double, double);
    #endif//_rate__double__GUARD__

    #ifndef _ddiv__double__GUARD__
    #define _ddiv__double__GUARD__
    DECL_STRONG_TYPE(ddiv__double, double);
    #endif//_ddiv__double__GUARD__

    #ifndef _ddiv_pv__double__GUARD__
    #define _ddiv_pv__double__GUARD__
    DECL_STRONG_TYPE(ddiv_pv__double, double);
    #endif//_ddiv_pv__double__GUARD__

    #ifndef _price__GUARD__
    #define _price__GUARD__
    DECL_STRONG_TYPE(price, double);
    #endif//_price__GUARD__

    #ifndef _eff_strike__GUARD__
    #define _eff_strike__GUARD__
    DECL_STRONG_TYPE(eff_strike, double);
    #endif//_eff_strike__GUARD__

    #ifndef _delta__float__GUARD__
    #define _delta__float__GUARD__
    DECL_STRONG_TYPE(delta__float, float);
    #endif//_delta__float__GUARD__

    #ifndef _gamma__GUARD__
    #define _gamma__GUARD__
    DECL_STRONG_TYPE(gamma, float);
    #endif//_gamma__GUARD__

    #ifndef _theta__GUARD__
    #define _theta__GUARD__
    DECL_STRONG_TYPE(theta, float);
    #endif//_theta__GUARD__

    #ifndef _vega__GUARD__
    #define _vega__GUARD__
    DECL_STRONG_TYPE(vega, float);
    #endif//_vega__GUARD__

    #ifndef _volga__GUARD__
    #define _volga__GUARD__
    DECL_STRONG_TYPE(volga, float);
    #endif//_volga__GUARD__

    #ifndef _vanna__GUARD__
    #define _vanna__GUARD__
    DECL_STRONG_TYPE(vanna, float);
    #endif//_vanna__GUARD__

    #ifndef _de_decay__GUARD__
    #define _de_decay__GUARD__
    DECL_STRONG_TYPE(de_decay, float);
    #endif//_de_decay__GUARD__

    #ifndef _rho__GUARD__
    #define _rho__GUARD__
    DECL_STRONG_TYPE(rho, float);
    #endif//_rho__GUARD__

    #ifndef _phi__GUARD__
    #define _phi__GUARD__
    DECL_STRONG_TYPE(phi, float);
    #endif//_phi__GUARD__

    #ifndef _error__string__GUARD__
    #define _error__string__GUARD__
    DECL_STRONG_TYPE(error__string, string);
    #endif//_error__string__GUARD__

    #ifndef _pricer_model__GUARD__
    #define _pricer_model__GUARD__
    DECL_STRONG_TYPE(pricer_model, string);
    #endif//_pricer_model__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    

    class OptionItemCalc {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using okey = spiderrock::protobuf::api::okey;
        using basket_number = spiderrock::protobuf::api::basket_number;
        using ex_type = spiderrock::protobuf::api::ex_type;
        using ex_time = spiderrock::protobuf::api::ex_time;
        using time_metric = spiderrock::protobuf::api::time_metric;
        using price_type = spiderrock::protobuf::api::price_type__CalcPriceType;
        using model_type = spiderrock::protobuf::api::model_type;
        using inc_greeks = spiderrock::protobuf::api::inc_greeks;
        using vol = spiderrock::protobuf::api::vol;
        using u_prc = spiderrock::protobuf::api::u_prc__double;
        using i_days = spiderrock::protobuf::api::i_days__int32;
        using years = spiderrock::protobuf::api::years__double;
        using sdiv = spiderrock::protobuf::api::sdiv__double;
        using rate = spiderrock::protobuf::api::rate__double;
        using ddiv = spiderrock::protobuf::api::ddiv__double;
        using ddiv_pv = spiderrock::protobuf::api::ddiv_pv__double;
        using price = spiderrock::protobuf::api::price;
        using eff_strike = spiderrock::protobuf::api::eff_strike;
        using delta = spiderrock::protobuf::api::delta__float;
        using gamma = spiderrock::protobuf::api::gamma;
        using theta = spiderrock::protobuf::api::theta;
        using vega = spiderrock::protobuf::api::vega;
        using volga = spiderrock::protobuf::api::volga;
        using vanna = spiderrock::protobuf::api::vanna;
        using de_decay = spiderrock::protobuf::api::de_decay;
        using rho = spiderrock::protobuf::api::rho;
        using phi = spiderrock::protobuf::api::phi;
        using error = spiderrock::protobuf::api::error__string;
        using pricer_model = spiderrock::protobuf::api::pricer_model;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        okey m_okey{};
        basket_number m_basket_number{};
        ex_type m_ex_type{};
        ex_time m_ex_time{};
        time_metric m_time_metric{};
        price_type m_price_type{};
        model_type m_model_type{};
        inc_greeks m_inc_greeks{};
        vol m_vol{};
        u_prc m_u_prc{};
        i_days m_i_days{};
        years m_years{};
        sdiv m_sdiv{};
        rate m_rate{};
        ddiv m_ddiv{};
        ddiv_pv m_ddiv_pv{};
        price m_price{};
        eff_strike m_eff_strike{};
        delta m_delta{};
        gamma m_gamma{};
        theta m_theta{};
        vega m_vega{};
        volga m_volga{};
        vanna m_vanna{};
        de_decay m_de_decay{};
        rho m_rho{};
        phi m_phi{};
        error m_error{};
        pricer_model m_pricer_model{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        okey get_okey() const {
            return m_okey;
        }		
        basket_number get_basket_number() const {
            return m_basket_number;
        }		
        ex_type get_ex_type() const {
            return m_ex_type;
        }		
        ex_time get_ex_time() const {
            return m_ex_time;
        }		
        time_metric get_time_metric() const {
            return m_time_metric;
        }		
        price_type get_price_type() const {
            return m_price_type;
        }		
        model_type get_model_type() const {
            return m_model_type;
        }		
        inc_greeks get_inc_greeks() const {
            return m_inc_greeks;
        }		
        vol get_vol() const {
            return m_vol;
        }		
        u_prc get_u_prc() const {
            return m_u_prc;
        }		
        i_days get_i_days() const {
            return m_i_days;
        }		
        years get_years() const {
            return m_years;
        }		
        sdiv get_sdiv() const {
            return m_sdiv;
        }		
        rate get_rate() const {
            return m_rate;
        }		
        ddiv get_ddiv() const {
            return m_ddiv;
        }		
        ddiv_pv get_ddiv_pv() const {
            return m_ddiv_pv;
        }		
        price get_price() const {
            return m_price;
        }		
        eff_strike get_eff_strike() const {
            return m_eff_strike;
        }		
        delta get_delta() const {
            return m_delta;
        }		
        gamma get_gamma() const {
            return m_gamma;
        }		
        theta get_theta() const {
            return m_theta;
        }		
        vega get_vega() const {
            return m_vega;
        }		
        volga get_volga() const {
            return m_volga;
        }		
        vanna get_vanna() const {
            return m_vanna;
        }		
        de_decay get_de_decay() const {
            return m_de_decay;
        }		
        rho get_rho() const {
            return m_rho;
        }		
        phi get_phi() const {
            return m_phi;
        }		
        error get_error() const {
            return m_error;
        }		
        pricer_model get_pricer_model() const {
            return m_pricer_model;
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
        void set_okey(const okey& value)  {
            m_okey = value;
        }
        void set_basket_number(const basket_number& value)  {
            m_basket_number = value;
        }
        void set_ex_type(const ex_type& value)  {
            m_ex_type = value;
        }
        void set_ex_time(const ex_time& value)  {
            m_ex_time = value;
        }
        void set_time_metric(const time_metric& value)  {
            m_time_metric = value;
        }
        void set_price_type(const price_type& value)  {
            m_price_type = value;
        }
        void set_model_type(const model_type& value)  {
            m_model_type = value;
        }
        void set_inc_greeks(const inc_greeks& value)  {
            m_inc_greeks = value;
        }
        void set_vol(const vol& value)  {
            m_vol = value;
        }
        void set_u_prc(const u_prc& value)  {
            m_u_prc = value;
        }
        void set_i_days(const i_days& value)  {
            m_i_days = value;
        }
        void set_years(const years& value)  {
            m_years = value;
        }
        void set_sdiv(const sdiv& value)  {
            m_sdiv = value;
        }
        void set_rate(const rate& value)  {
            m_rate = value;
        }
        void set_ddiv(const ddiv& value)  {
            m_ddiv = value;
        }
        void set_ddiv_pv(const ddiv_pv& value)  {
            m_ddiv_pv = value;
        }
        void set_price(const price& value)  {
            m_price = value;
        }
        void set_eff_strike(const eff_strike& value)  {
            m_eff_strike = value;
        }
        void set_delta(const delta& value)  {
            m_delta = value;
        }
        void set_gamma(const gamma& value)  {
            m_gamma = value;
        }
        void set_theta(const theta& value)  {
            m_theta = value;
        }
        void set_vega(const vega& value)  {
            m_vega = value;
        }
        void set_volga(const volga& value)  {
            m_volga = value;
        }
        void set_vanna(const vanna& value)  {
            m_vanna = value;
        }
        void set_de_decay(const de_decay& value)  {
            m_de_decay = value;
        }
        void set_rho(const rho& value)  {
            m_rho = value;
        }
        void set_phi(const phi& value)  {
            m_phi = value;
        }
        void set_error(const error& value)  {
            m_error = value;
        }
        void set_pricer_model(const pricer_model& value)  {
            m_pricer_model = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionItemCalc::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const okey & value) {
            set_okey(value);
        }
        void set(const basket_number & value) {
            set_basket_number(value);
        }
        void set(const ex_type & value) {
            set_ex_type(value);
        }
        void set(const ex_time & value) {
            set_ex_time(value);
        }
        void set(const time_metric & value) {
            set_time_metric(value);
        }
        void set(const price_type & value) {
            set_price_type(value);
        }
        void set(const model_type & value) {
            set_model_type(value);
        }
        void set(const inc_greeks & value) {
            set_inc_greeks(value);
        }
        void set(const vol & value) {
            set_vol(value);
        }
        void set(const u_prc & value) {
            set_u_prc(value);
        }
        void set(const i_days & value) {
            set_i_days(value);
        }
        void set(const years & value) {
            set_years(value);
        }
        void set(const sdiv & value) {
            set_sdiv(value);
        }
        void set(const rate & value) {
            set_rate(value);
        }
        void set(const ddiv & value) {
            set_ddiv(value);
        }
        void set(const ddiv_pv & value) {
            set_ddiv_pv(value);
        }
        void set(const price & value) {
            set_price(value);
        }
        void set(const eff_strike & value) {
            set_eff_strike(value);
        }
        void set(const delta & value) {
            set_delta(value);
        }
        void set(const gamma & value) {
            set_gamma(value);
        }
        void set(const theta & value) {
            set_theta(value);
        }
        void set(const vega & value) {
            set_vega(value);
        }
        void set(const volga & value) {
            set_volga(value);
        }
        void set(const vanna & value) {
            set_vanna(value);
        }
        void set(const de_decay & value) {
            set_de_decay(value);
        }
        void set(const rho & value) {
            set_rho(value);
        }
        void set(const phi & value) {
            set_phi(value);
        }
        void set(const error & value) {
            set_error(value);
        }
        void set(const pricer_model & value) {
            set_pricer_model(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const OptionItemCalc & value) {
            set(value.m__meta);
            set(value.m_okey);
            set(value.m_basket_number);
            set(value.m_ex_type);
            set(value.m_ex_time);
            set(value.m_time_metric);
            set(value.m_price_type);
            set(value.m_model_type);
            set(value.m_inc_greeks);
            set(value.m_vol);
            set(value.m_u_prc);
            set(value.m_i_days);
            set(value.m_years);
            set(value.m_sdiv);
            set(value.m_rate);
            set(value.m_ddiv);
            set(value.m_ddiv_pv);
            set(value.m_price);
            set(value.m_eff_strike);
            set(value.m_delta);
            set(value.m_gamma);
            set(value.m_theta);
            set(value.m_vega);
            set(value.m_volga);
            set(value.m_vanna);
            set(value.m_de_decay);
            set(value.m_rho);
            set(value.m_phi);
            set(value.m_error);
            set(value.m_pricer_model);
            set(value.m_timestamp);
        }

        OptionItemCalc() {
            m__meta.set_message_type("OptionItemCalc");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3487, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3487, length);
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
             *this = OptionItemCalc{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludeOkey() const {
            return (m_okey.ByteSizeLong() > 0);
        }
        bool IncludeBasketNumber() const {
            return !(m_basket_number == 0);
        }
        bool IncludeVol() const {
            return !(m_vol == 0.0);
        }
        bool IncludeUPrc() const {
            return !(m_u_prc == 0.0);
        }
        bool IncludeIDays() const {
            return !(m_i_days == 0);
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
        bool IncludeDdiv() const {
            return !(m_ddiv == 0.0);
        }
        bool IncludeDdivPv() const {
            return !(m_ddiv_pv == 0.0);
        }
        bool IncludePrice() const {
            return !(m_price == 0.0);
        }
        bool IncludeEffStrike() const {
            return !(m_eff_strike == 0.0);
        }
        bool IncludeDelta() const {
            return !(m_delta == 0.0);
        }
        bool IncludeGamma() const {
            return !(m_gamma == 0.0);
        }
        bool IncludeTheta() const {
            return !(m_theta == 0.0);
        }
        bool IncludeVega() const {
            return !(m_vega == 0.0);
        }
        bool IncludeVolga() const {
            return !(m_volga == 0.0);
        }
        bool IncludeVanna() const {
            return !(m_vanna == 0.0);
        }
        bool IncludeDeDecay() const {
            return !(m_de_decay == 0.0);
        }
        bool IncludeRho() const {
            return !(m_rho == 0.0);
        }
        bool IncludePhi() const {
            return !(m_phi == 0.0);
        }
        bool IncludeError() const {
            return !(m_error.empty());
        }
        bool IncludePricerModel() const {
            return !(m_pricer_model.empty());
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
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout{};
                m_okey.setCodecOptionKey(optionKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(100, optionKeyLayout);
            }
            if ( IncludeBasketNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(103,m_basket_number);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>(m_ex_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseTime>(m_ex_time)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TimeMetric>(m_time_metric)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcPriceType>(m_price_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcModelType>(m_model_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_inc_greeks)));
            if ( IncludeVol()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(124,m_vol);
            }
            if ( IncludeUPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(127,m_u_prc);
            }
            if ( IncludeIDays()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(130,m_i_days);
            }
            if ( IncludeYears()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(133,m_years);
            }
            if ( IncludeSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(136,m_sdiv);
            }
            if ( IncludeRate()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(139,m_rate);
            }
            if ( IncludeDdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(142,m_ddiv);
            }
            if ( IncludeDdivPv()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(145,m_ddiv_pv);
            }
            if ( IncludePrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(148,m_price);
            }
            if ( IncludeEffStrike()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(151,m_eff_strike);
            }
            if ( IncludeDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(154,m_delta);
            }
            if ( IncludeGamma()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_gamma);
            }
            if ( IncludeTheta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(160,m_theta);
            }
            if ( IncludeVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_vega);
            }
            if ( IncludeVolga()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_volga);
            }
            if ( IncludeVanna()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(169,m_vanna);
            }
            if ( IncludeDeDecay()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(172,m_de_decay);
            }
            if ( IncludeRho()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(175,m_rho);
            }
            if ( IncludePhi()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_phi);
            }
            if ( IncludeError()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(181,m_error);
            }
            if ( IncludePricerModel()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(184,m_pricer_model);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(187, m_timestamp);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeMeta()) {
                SRProtobufCPP::MessageMetadata messageMetadata{};
                m__meta.setCodecMessageMetadata(messageMetadata);
                dest = SRProtobufCPP::FieldCodec::EncodeMessageMetadata(dest,1, messageMetadata);
            }
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout{};
                m_okey.setCodecOptionKey(optionKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 100, optionKeyLayout);
            }
            if ( IncludeBasketNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,103,m_basket_number);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>(m_ex_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseTime>(m_ex_time)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TimeMetric>(m_time_metric)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcPriceType>(m_price_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcModelType>(m_model_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_inc_greeks)));
            if ( IncludeVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,124,m_vol);
            }
            if ( IncludeUPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,127,m_u_prc);
            }
            if ( IncludeIDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,130,m_i_days);
            }
            if ( IncludeYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,133,m_years);
            }
            if ( IncludeSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,136,m_sdiv);
            }
            if ( IncludeRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,139,m_rate);
            }
            if ( IncludeDdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,142,m_ddiv);
            }
            if ( IncludeDdivPv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,145,m_ddiv_pv);
            }
            if ( IncludePrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,148,m_price);
            }
            if ( IncludeEffStrike()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,151,m_eff_strike);
            }
            if ( IncludeDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,154,m_delta);
            }
            if ( IncludeGamma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_gamma);
            }
            if ( IncludeTheta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,160,m_theta);
            }
            if ( IncludeVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_vega);
            }
            if ( IncludeVolga()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_volga);
            }
            if ( IncludeVanna()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,169,m_vanna);
            }
            if ( IncludeDeDecay()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,172,m_de_decay);
            }
            if ( IncludeRho()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,175,m_rho);
            }
            if ( IncludePhi()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_phi);
            }
            if ( IncludeError()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,181,static_cast<string>(m_error));
            }
            if ( IncludePricerModel()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,184,static_cast<string>(m_pricer_model));
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 187, m_timestamp);
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
                    case 100: {
                        if (tagType == SRProtobufCPP::OptionKeyCodec::TagType) {
                            auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                            m_okey.setFromCodec(optionKey);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_basket_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ex_type = static_cast<spiderrock::protobuf::api::ExerciseType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ex_time = static_cast<spiderrock::protobuf::api::ExerciseTime>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_time_metric = static_cast<spiderrock::protobuf::api::TimeMetric>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_type = static_cast<spiderrock::protobuf::api::CalcPriceType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_model_type = static_cast<spiderrock::protobuf::api::CalcModelType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 121: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_inc_greeks = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_vol = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_i_days = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_years = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_sdiv = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_rate = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ddiv = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ddiv_pv = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_eff_strike = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_gamma = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_theta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_volga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vanna = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_de_decay = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rho = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_phi = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_error = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_pricer_model = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 187: {
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

    template<> inline const auto OptionItemCalc::get<OptionItemCalc::_meta>() const { return OptionItemCalc::_meta{ m__meta}; }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::okey>() const { return OptionItemCalc::okey{ m_okey}; }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::basket_number>() const { return m_basket_number; }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::ex_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>( m_ex_type)); }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::ex_time>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseTime>( m_ex_time)); }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::time_metric>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TimeMetric>( m_time_metric)); }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::price_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcPriceType>( m_price_type)); }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::model_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcModelType>( m_model_type)); }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::inc_greeks>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_inc_greeks)); }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::vol>() const { return m_vol; }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::u_prc>() const { return m_u_prc; }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::i_days>() const { return m_i_days; }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::years>() const { return m_years; }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::sdiv>() const { return m_sdiv; }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::rate>() const { return m_rate; }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::ddiv>() const { return m_ddiv; }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::ddiv_pv>() const { return m_ddiv_pv; }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::price>() const { return m_price; }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::eff_strike>() const { return m_eff_strike; }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::delta>() const { return m_delta; }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::gamma>() const { return m_gamma; }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::theta>() const { return m_theta; }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::vega>() const { return m_vega; }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::volga>() const { return m_volga; }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::vanna>() const { return m_vanna; }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::de_decay>() const { return m_de_decay; }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::rho>() const { return m_rho; }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::phi>() const { return m_phi; }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::error>() const { return m_error; }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::pricer_model>() const { return m_pricer_model; }
    template<> inline const auto OptionItemCalc::get<OptionItemCalc::timestamp>() const { return m_timestamp; }
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const OptionItemCalc& m) {
        o << "\"_meta\":{" << m.get<OptionItemCalc::_meta>() << "}";
        o << ",\"okey\":{" << m.get<OptionItemCalc::okey>() << "}";
        o << ",\"basket_number\":" << m.get<OptionItemCalc::basket_number>();
        o << ",\"ex_type\":" << (int64_t)m.get<OptionItemCalc::ex_type>();
        o << ",\"ex_time\":" << (int64_t)m.get<OptionItemCalc::ex_time>();
        o << ",\"time_metric\":" << (int64_t)m.get<OptionItemCalc::time_metric>();
        o << ",\"price_type\":" << (int64_t)m.get<OptionItemCalc::price_type>();
        o << ",\"model_type\":" << (int64_t)m.get<OptionItemCalc::model_type>();
        o << ",\"inc_greeks\":" << (int64_t)m.get<OptionItemCalc::inc_greeks>();
        o << ",\"vol\":" << m.get<OptionItemCalc::vol>();
        o << ",\"u_prc\":" << m.get<OptionItemCalc::u_prc>();
        o << ",\"i_days\":" << m.get<OptionItemCalc::i_days>();
        o << ",\"years\":" << m.get<OptionItemCalc::years>();
        o << ",\"sdiv\":" << m.get<OptionItemCalc::sdiv>();
        o << ",\"rate\":" << m.get<OptionItemCalc::rate>();
        o << ",\"ddiv\":" << m.get<OptionItemCalc::ddiv>();
        o << ",\"ddiv_pv\":" << m.get<OptionItemCalc::ddiv_pv>();
        o << ",\"price\":" << m.get<OptionItemCalc::price>();
        o << ",\"eff_strike\":" << m.get<OptionItemCalc::eff_strike>();
        o << ",\"delta\":" << m.get<OptionItemCalc::delta>();
        o << ",\"gamma\":" << m.get<OptionItemCalc::gamma>();
        o << ",\"theta\":" << m.get<OptionItemCalc::theta>();
        o << ",\"vega\":" << m.get<OptionItemCalc::vega>();
        o << ",\"volga\":" << m.get<OptionItemCalc::volga>();
        o << ",\"vanna\":" << m.get<OptionItemCalc::vanna>();
        o << ",\"de_decay\":" << m.get<OptionItemCalc::de_decay>();
        o << ",\"rho\":" << m.get<OptionItemCalc::rho>();
        o << ",\"phi\":" << m.get<OptionItemCalc::phi>();
        o << ",\"error\":\"" << m.get<OptionItemCalc::error>() << "\"";
        o << ",\"pricer_model\":\"" << m.get<OptionItemCalc::pricer_model>() << "\"";
        {
            std::time_t tt = m.get<OptionItemCalc::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}