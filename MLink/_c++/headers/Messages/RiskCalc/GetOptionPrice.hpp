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

    #ifndef _root__GUARD__
    #define _root__GUARD__
    DECL_STRONG_TYPE(root, TickerKey);
    #endif//_root__GUARD__

    #ifndef _expiry__GUARD__
    #define _expiry__GUARD__
    DECL_STRONG_TYPE(expiry, DateKey);
    #endif//_expiry__GUARD__

    #ifndef _strike__GUARD__
    #define _strike__GUARD__
    DECL_STRONG_TYPE(strike, double);
    #endif//_strike__GUARD__

    #ifndef _call_put__GUARD__
    #define _call_put__GUARD__
    DECL_STRONG_TYPE(call_put, spiderrock::protobuf::api::CallPut);
    #endif//_call_put__GUARD__

    #ifndef _vol__GUARD__
    #define _vol__GUARD__
    DECL_STRONG_TYPE(vol, double);
    #endif//_vol__GUARD__

    #ifndef _u_prc__double__GUARD__
    #define _u_prc__double__GUARD__
    DECL_STRONG_TYPE(u_prc__double, double);
    #endif//_u_prc__double__GUARD__

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

    #ifndef _model_type__GUARD__
    #define _model_type__GUARD__
    DECL_STRONG_TYPE(model_type, spiderrock::protobuf::api::CalcModelType);
    #endif//_model_type__GUARD__

    #ifndef _calc_engine__GUARD__
    #define _calc_engine__GUARD__
    DECL_STRONG_TYPE(calc_engine, spiderrock::protobuf::api::CalcEngine);
    #endif//_calc_engine__GUARD__

    #ifndef _inc_greeks__GUARD__
    #define _inc_greeks__GUARD__
    DECL_STRONG_TYPE(inc_greeks, spiderrock::protobuf::api::YesNo);
    #endif//_inc_greeks__GUARD__

    #ifndef _price__GUARD__
    #define _price__GUARD__
    DECL_STRONG_TYPE(price, double);
    #endif//_price__GUARD__

    #ifndef _eff_strike__GUARD__
    #define _eff_strike__GUARD__
    DECL_STRONG_TYPE(eff_strike, double);
    #endif//_eff_strike__GUARD__

    #ifndef _dividend_amount__GUARD__
    #define _dividend_amount__GUARD__
    DECL_STRONG_TYPE(dividend_amount, float);
    #endif//_dividend_amount__GUARD__

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

    #ifndef _date__timestamp__GUARD__
    #define _date__timestamp__GUARD__
    DECL_STRONG_TYPE(date__timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_date__timestamp__GUARD__

    #ifndef _amount__GUARD__
    #define _amount__GUARD__
    DECL_STRONG_TYPE(amount, float);
    #endif//_amount__GUARD__

    
    class GetOptionPrice_DiscreteDividend {
        public:
        //using statements for all types used in this class
        using date = spiderrock::protobuf::api::date__timestamp;
        using amount = spiderrock::protobuf::api::amount;

        private:
        date m_date{};
        amount m_amount{};

        public:
        date get_date() const {
            return m_date;
        }
        amount get_amount() const {
            return m_amount;
        }
        void set_date(const date& value)  {
            m_date = value;
        }
        void set_amount(const amount& value)  {
            m_amount = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to GetOptionPrice_DiscreteDividend::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to GetOptionPrice_DiscreteDividend::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const date & value) { set_date(value); }
        void set(const amount & value) { set_amount(value); }


        GetOptionPrice_DiscreteDividend() {}

        virtual ~GetOptionPrice_DiscreteDividend() {
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
            totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(139, m_date);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_amount);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 139, m_date);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_amount);
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
                    case 139: {
                        m_date = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        break;
                    }
                    case 142: {m_amount = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class GetOptionPrice {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using root = spiderrock::protobuf::api::root;
        using expiry = spiderrock::protobuf::api::expiry;
        using strike = spiderrock::protobuf::api::strike;
        using call_put = spiderrock::protobuf::api::call_put;
        using vol = spiderrock::protobuf::api::vol;
        using u_prc = spiderrock::protobuf::api::u_prc__double;
        using years = spiderrock::protobuf::api::years__double;
        using sdiv = spiderrock::protobuf::api::sdiv__double;
        using rate = spiderrock::protobuf::api::rate__double;
        using ex_type = spiderrock::protobuf::api::ex_type;
        using ex_time = spiderrock::protobuf::api::ex_time;
        using time_metric = spiderrock::protobuf::api::time_metric;
        using model_type = spiderrock::protobuf::api::model_type;
        using calc_engine = spiderrock::protobuf::api::calc_engine;
        using inc_greeks = spiderrock::protobuf::api::inc_greeks;
        using price = spiderrock::protobuf::api::price;
        using eff_strike = spiderrock::protobuf::api::eff_strike;
        using dividend_amount = spiderrock::protobuf::api::dividend_amount;
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
        using discrete_dividend = spiderrock::protobuf::api::GetOptionPrice_DiscreteDividend;

        private:
        _meta m__meta{};
        root m_root{};
        expiry m_expiry{};
        strike m_strike{};
        call_put m_call_put{};
        vol m_vol{};
        u_prc m_u_prc{};
        years m_years{};
        sdiv m_sdiv{};
        rate m_rate{};
        ex_type m_ex_type{};
        ex_time m_ex_time{};
        time_metric m_time_metric{};
        model_type m_model_type{};
        calc_engine m_calc_engine{};
        inc_greeks m_inc_greeks{};
        price m_price{};
        eff_strike m_eff_strike{};
        dividend_amount m_dividend_amount{};
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
        std::vector<discrete_dividend> m_discrete_dividend{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        root get_root() const {
            return m_root;
        }		
        expiry get_expiry() const {
            return m_expiry;
        }		
        strike get_strike() const {
            return m_strike;
        }		
        call_put get_call_put() const {
            return m_call_put;
        }		
        vol get_vol() const {
            return m_vol;
        }		
        u_prc get_u_prc() const {
            return m_u_prc;
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
        ex_type get_ex_type() const {
            return m_ex_type;
        }		
        ex_time get_ex_time() const {
            return m_ex_time;
        }		
        time_metric get_time_metric() const {
            return m_time_metric;
        }		
        model_type get_model_type() const {
            return m_model_type;
        }		
        calc_engine get_calc_engine() const {
            return m_calc_engine;
        }		
        inc_greeks get_inc_greeks() const {
            return m_inc_greeks;
        }		
        price get_price() const {
            return m_price;
        }		
        eff_strike get_eff_strike() const {
            return m_eff_strike;
        }		
        dividend_amount get_dividend_amount() const {
            return m_dividend_amount;
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
        const std::vector<discrete_dividend>& get_discrete_dividend_list() const {
            return m_discrete_dividend;
        }
        const discrete_dividend& get_discrete_dividend(const int i) const {
            return m_discrete_dividend.at(i);
        }
        size_t getMLinkHeaderLength() const
        {
            return _mlinkHeaderLength;
        }
        void set__meta(const _meta& value)  {
            m__meta = value;
        }
        void set_root(const root& value)  {
            m_root = value;
        }
        void set_expiry(const expiry& value)  {
            m_expiry = value;
        }
        void set_strike(const strike& value)  {
            m_strike = value;
        }
        void set_call_put(const call_put& value)  {
            m_call_put = value;
        }
        void set_vol(const vol& value)  {
            m_vol = value;
        }
        void set_u_prc(const u_prc& value)  {
            m_u_prc = value;
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
        void set_ex_type(const ex_type& value)  {
            m_ex_type = value;
        }
        void set_ex_time(const ex_time& value)  {
            m_ex_time = value;
        }
        void set_time_metric(const time_metric& value)  {
            m_time_metric = value;
        }
        void set_model_type(const model_type& value)  {
            m_model_type = value;
        }
        void set_calc_engine(const calc_engine& value)  {
            m_calc_engine = value;
        }
        void set_inc_greeks(const inc_greeks& value)  {
            m_inc_greeks = value;
        }
        void set_price(const price& value)  {
            m_price = value;
        }
        void set_eff_strike(const eff_strike& value)  {
            m_eff_strike = value;
        }
        void set_dividend_amount(const dividend_amount& value)  {
            m_dividend_amount = value;
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
        void set_discrete_dividend_list(const std::vector<discrete_dividend>& list)  {
            m_discrete_dividend = list;
        }
        void add_discrete_dividend(const discrete_dividend& item) {
            m_discrete_dividend.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to GetOptionPrice::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to GetOptionPrice::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to GetOptionPrice::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const root & value) {
            set_root(value);
        }
        void set(const expiry & value) {
            set_expiry(value);
        }
        void set(const strike & value) {
            set_strike(value);
        }
        void set(const call_put & value) {
            set_call_put(value);
        }
        void set(const vol & value) {
            set_vol(value);
        }
        void set(const u_prc & value) {
            set_u_prc(value);
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
        void set(const ex_type & value) {
            set_ex_type(value);
        }
        void set(const ex_time & value) {
            set_ex_time(value);
        }
        void set(const time_metric & value) {
            set_time_metric(value);
        }
        void set(const model_type & value) {
            set_model_type(value);
        }
        void set(const calc_engine & value) {
            set_calc_engine(value);
        }
        void set(const inc_greeks & value) {
            set_inc_greeks(value);
        }
        void set(const price & value) {
            set_price(value);
        }
        void set(const eff_strike & value) {
            set_eff_strike(value);
        }
        void set(const dividend_amount & value) {
            set_dividend_amount(value);
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
        void set(const discrete_dividend & value) {
            add_discrete_dividend(value);
        }

        void set(const GetOptionPrice & value) {
            set(value.m__meta);
            set(value.m_root);
            set(value.m_expiry);
            set(value.m_strike);
            set(value.m_call_put);
            set(value.m_vol);
            set(value.m_u_prc);
            set(value.m_years);
            set(value.m_sdiv);
            set(value.m_rate);
            set(value.m_ex_type);
            set(value.m_ex_time);
            set(value.m_time_metric);
            set(value.m_model_type);
            set(value.m_calc_engine);
            set(value.m_inc_greeks);
            set(value.m_price);
            set(value.m_eff_strike);
            set(value.m_dividend_amount);
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
            set(value.m_timestamp);set_discrete_dividend_list(value.m_discrete_dividend);
        }

        GetOptionPrice() {
            m__meta.set_message_type("GetOptionPrice");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3335, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3335, length);
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
             *this = GetOptionPrice{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludeRoot() const {
            return (m_root.ByteSizeLong() > 0);
        }
        bool IncludeExpiry() const {
            return (m_expiry.ByteSizeLong() > 0);
        }
        bool IncludeStrike() const {
            return !(m_strike == 0.0);
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
        bool IncludePrice() const {
            return !(m_price == 0.0);
        }
        bool IncludeEffStrike() const {
            return !(m_eff_strike == 0.0);
        }
        bool IncludeDividendAmount() const {
            return !(m_dividend_amount == 0.0);
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
        bool IncludeDiscreteDividend() const {
            return (!m_discrete_dividend.empty());
        }

        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeMeta()) {
                SRProtobufCPP::MessageMetadata messageMetadata{};
                m__meta.setCodecMessageMetadata(messageMetadata);
                totalSize += SRProtobufCPP::FieldCodec::MessageMetadataFieldSize(1, messageMetadata);
            }
            if ( IncludeRoot()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_root.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(100, tickerKeyLayout);
            }
            if ( IncludeExpiry()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(103, m_expiry.get_year(), m_expiry.get_month(), m_expiry.get_day());
            }
            if ( IncludeStrike()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(106,m_strike);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CallPut>(m_call_put)));
            if ( IncludeVol()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(112,m_vol);
            }
            if ( IncludeUPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(115,m_u_prc);
            }
            if ( IncludeYears()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(118,m_years);
            }
            if ( IncludeSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(121,m_sdiv);
            }
            if ( IncludeRate()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(124,m_rate);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>(m_ex_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseTime>(m_ex_time)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TimeMetric>(m_time_metric)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcModelType>(m_model_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcEngine>(m_calc_engine)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_inc_greeks)));
            if ( IncludePrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(154,m_price);
            }
            if ( IncludeEffStrike()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(157,m_eff_strike);
            }
            if ( IncludeDividendAmount()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(160,m_dividend_amount);
            }
            if ( IncludeDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_delta);
            }
            if ( IncludeGamma()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_gamma);
            }
            if ( IncludeTheta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(169,m_theta);
            }
            if ( IncludeVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(172,m_vega);
            }
            if ( IncludeVolga()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(175,m_volga);
            }
            if ( IncludeVanna()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_vanna);
            }
            if ( IncludeDeDecay()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(181,m_de_decay);
            }
            if ( IncludeRho()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(184,m_rho);
            }
            if ( IncludePhi()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(187,m_phi);
            }
            if ( IncludeError()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(190,m_error);
            }
            if ( IncludePricerModel()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(193,m_pricer_model);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(196, m_timestamp);
            }
            if ( IncludeDiscreteDividend()) {
                for (auto& item : m_discrete_dividend) {
					totalSize += SRProtobufCPP::TagCodec::Size(136, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            if ( IncludeRoot()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_root.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 100, tickerKeyLayout);
            }
            if ( IncludeExpiry()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,103, m_expiry.get_year(), m_expiry.get_month(), m_expiry.get_day());
            }
            if ( IncludeStrike()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,106,m_strike);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CallPut>(m_call_put)));
            if ( IncludeVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,112,m_vol);
            }
            if ( IncludeUPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,115,m_u_prc);
            }
            if ( IncludeYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,118,m_years);
            }
            if ( IncludeSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,121,m_sdiv);
            }
            if ( IncludeRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,124,m_rate);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>(m_ex_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseTime>(m_ex_time)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TimeMetric>(m_time_metric)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcModelType>(m_model_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcEngine>(m_calc_engine)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_inc_greeks)));
            if ( IncludePrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,154,m_price);
            }
            if ( IncludeEffStrike()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,157,m_eff_strike);
            }
            if ( IncludeDividendAmount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,160,m_dividend_amount);
            }
            if ( IncludeDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_delta);
            }
            if ( IncludeGamma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_gamma);
            }
            if ( IncludeTheta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,169,m_theta);
            }
            if ( IncludeVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,172,m_vega);
            }
            if ( IncludeVolga()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,175,m_volga);
            }
            if ( IncludeVanna()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_vanna);
            }
            if ( IncludeDeDecay()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,181,m_de_decay);
            }
            if ( IncludeRho()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,184,m_rho);
            }
            if ( IncludePhi()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,187,m_phi);
            }
            if ( IncludeError()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,190,static_cast<string>(m_error));
            }
            if ( IncludePricerModel()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,193,static_cast<string>(m_pricer_model));
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 196, m_timestamp);
            }
            if ( IncludeDiscreteDividend()) {
                for (auto& item : m_discrete_dividend) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 136, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                    case 100: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_root.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                            m_expiry.set_year(dateKey.year());
                            m_expiry.set_month(dateKey.month());
                            m_expiry.set_day(dateKey.day());
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_strike = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_call_put = static_cast<spiderrock::protobuf::api::CallPut>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_vol = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
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
                            m_years = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_sdiv = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
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
                            m_ex_type = static_cast<spiderrock::protobuf::api::ExerciseType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 130: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ex_time = static_cast<spiderrock::protobuf::api::ExerciseTime>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 133: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_time_metric = static_cast<spiderrock::protobuf::api::TimeMetric>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 145: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_model_type = static_cast<spiderrock::protobuf::api::CalcModelType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 148: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_calc_engine = static_cast<spiderrock::protobuf::api::CalcEngine>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 151: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_inc_greeks = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_eff_strike = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_dividend_amount = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_gamma = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_theta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_volga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vanna = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_de_decay = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rho = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_phi = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_error = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_pricer_model = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            discrete_dividend item_discrete_dividend;
                            item_discrete_dividend.Decode(pos, pos+length);  
                            m_discrete_dividend.emplace_back(item_discrete_dividend);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto GetOptionPrice::get<GetOptionPrice::_meta>() const { return GetOptionPrice::_meta{ m__meta}; }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::root>() const { return GetOptionPrice::root{ m_root}; }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::expiry>() const { return GetOptionPrice::expiry{ m_expiry}; }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::strike>() const { return m_strike; }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::call_put>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CallPut>( m_call_put)); }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::vol>() const { return m_vol; }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::u_prc>() const { return m_u_prc; }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::years>() const { return m_years; }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::sdiv>() const { return m_sdiv; }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::rate>() const { return m_rate; }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::ex_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>( m_ex_type)); }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::ex_time>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseTime>( m_ex_time)); }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::time_metric>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TimeMetric>( m_time_metric)); }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::model_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcModelType>( m_model_type)); }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::calc_engine>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcEngine>( m_calc_engine)); }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::inc_greeks>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_inc_greeks)); }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::price>() const { return m_price; }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::eff_strike>() const { return m_eff_strike; }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::dividend_amount>() const { return m_dividend_amount; }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::delta>() const { return m_delta; }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::gamma>() const { return m_gamma; }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::theta>() const { return m_theta; }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::vega>() const { return m_vega; }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::volga>() const { return m_volga; }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::vanna>() const { return m_vanna; }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::de_decay>() const { return m_de_decay; }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::rho>() const { return m_rho; }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::phi>() const { return m_phi; }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::error>() const { return m_error; }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::pricer_model>() const { return m_pricer_model; }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::timestamp>() const { return m_timestamp; }
    template<> inline const auto GetOptionPrice::get<GetOptionPrice::discrete_dividend>(int i) const { return GetOptionPrice::discrete_dividend{ get_discrete_dividend(i)}; }
    template<> inline int GetOptionPrice::count<GetOptionPrice::discrete_dividend>() const { return static_cast<int>( m_discrete_dividend.size()); }
    template<> inline const auto GetOptionPrice_DiscreteDividend::get<GetOptionPrice_DiscreteDividend::date>() const { return m_date; }
    template<> inline const auto GetOptionPrice_DiscreteDividend::get<GetOptionPrice_DiscreteDividend::amount>() const { return m_amount; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const GetOptionPrice_DiscreteDividend& m) {
        {
            std::time_t tt = m.get<GetOptionPrice_DiscreteDividend::date>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << "\"date\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"amount\":" << m.get<GetOptionPrice_DiscreteDividend::amount>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const GetOptionPrice& m) {
        o << "\"_meta\":{" << m.get<GetOptionPrice::_meta>() << "}";
        o << ",\"root\":{" << m.get<GetOptionPrice::root>() << "}";
        o << ",\"expiry\":{" << m.get<GetOptionPrice::expiry>() << "}";
        o << ",\"strike\":" << m.get<GetOptionPrice::strike>();
        o << ",\"call_put\":" << (int64_t)m.get<GetOptionPrice::call_put>();
        o << ",\"vol\":" << m.get<GetOptionPrice::vol>();
        o << ",\"u_prc\":" << m.get<GetOptionPrice::u_prc>();
        o << ",\"years\":" << m.get<GetOptionPrice::years>();
        o << ",\"sdiv\":" << m.get<GetOptionPrice::sdiv>();
        o << ",\"rate\":" << m.get<GetOptionPrice::rate>();
        o << ",\"ex_type\":" << (int64_t)m.get<GetOptionPrice::ex_type>();
        o << ",\"ex_time\":" << (int64_t)m.get<GetOptionPrice::ex_time>();
        o << ",\"time_metric\":" << (int64_t)m.get<GetOptionPrice::time_metric>();
        o << ",\"model_type\":" << (int64_t)m.get<GetOptionPrice::model_type>();
        o << ",\"calc_engine\":" << (int64_t)m.get<GetOptionPrice::calc_engine>();
        o << ",\"inc_greeks\":" << (int64_t)m.get<GetOptionPrice::inc_greeks>();
        o << ",\"price\":" << m.get<GetOptionPrice::price>();
        o << ",\"eff_strike\":" << m.get<GetOptionPrice::eff_strike>();
        o << ",\"dividend_amount\":" << m.get<GetOptionPrice::dividend_amount>();
        o << ",\"delta\":" << m.get<GetOptionPrice::delta>();
        o << ",\"gamma\":" << m.get<GetOptionPrice::gamma>();
        o << ",\"theta\":" << m.get<GetOptionPrice::theta>();
        o << ",\"vega\":" << m.get<GetOptionPrice::vega>();
        o << ",\"volga\":" << m.get<GetOptionPrice::volga>();
        o << ",\"vanna\":" << m.get<GetOptionPrice::vanna>();
        o << ",\"de_decay\":" << m.get<GetOptionPrice::de_decay>();
        o << ",\"rho\":" << m.get<GetOptionPrice::rho>();
        o << ",\"phi\":" << m.get<GetOptionPrice::phi>();
        o << ",\"error\":\"" << m.get<GetOptionPrice::error>() << "\"";
        o << ",\"pricer_model\":\"" << m.get<GetOptionPrice::pricer_model>() << "\"";
        {
            std::time_t tt = m.get<GetOptionPrice::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"discrete_dividend\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<GetOptionPrice::discrete_dividend>(); ++i) {
                o << delim << m.get<GetOptionPrice::discrete_dividend>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}