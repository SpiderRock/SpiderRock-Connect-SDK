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

    #ifndef _osi_root__GUARD__
    #define _osi_root__GUARD__
    DECL_STRONG_TYPE(osi_root, string);
    #endif//_osi_root__GUARD__

    #ifndef _ccode__GUARD__
    #define _ccode__GUARD__
    DECL_STRONG_TYPE(ccode, TickerKey);
    #endif//_ccode__GUARD__

    #ifndef _u_prc_driver_key__GUARD__
    #define _u_prc_driver_key__GUARD__
    DECL_STRONG_TYPE(u_prc_driver_key, ExpiryKey);
    #endif//_u_prc_driver_key__GUARD__

    #ifndef _u_prc_driver_type__GUARD__
    #define _u_prc_driver_type__GUARD__
    DECL_STRONG_TYPE(u_prc_driver_type, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_u_prc_driver_type__GUARD__

    #ifndef _u_prc_driver_key2__GUARD__
    #define _u_prc_driver_key2__GUARD__
    DECL_STRONG_TYPE(u_prc_driver_key2, ExpiryKey);
    #endif//_u_prc_driver_key2__GUARD__

    #ifndef _u_prc_driver_type2__GUARD__
    #define _u_prc_driver_type2__GUARD__
    DECL_STRONG_TYPE(u_prc_driver_type2, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_u_prc_driver_type2__GUARD__

    #ifndef _u_prc_bound_ccode__GUARD__
    #define _u_prc_bound_ccode__GUARD__
    DECL_STRONG_TYPE(u_prc_bound_ccode, spiderrock::protobuf::api::YesNo);
    #endif//_u_prc_bound_ccode__GUARD__

    #ifndef _expiration_map__GUARD__
    #define _expiration_map__GUARD__
    DECL_STRONG_TYPE(expiration_map, spiderrock::protobuf::api::ExpirationMap);
    #endif//_expiration_map__GUARD__

    #ifndef _underlier_mode__GUARD__
    #define _underlier_mode__GUARD__
    DECL_STRONG_TYPE(underlier_mode, spiderrock::protobuf::api::UnderlierMode);
    #endif//_underlier_mode__GUARD__

    #ifndef _option_type__GUARD__
    #define _option_type__GUARD__
    DECL_STRONG_TYPE(option_type, spiderrock::protobuf::api::OptionType);
    #endif//_option_type__GUARD__

    #ifndef _multihedge__GUARD__
    #define _multihedge__GUARD__
    DECL_STRONG_TYPE(multihedge, spiderrock::protobuf::api::Multihedge);
    #endif//_multihedge__GUARD__

    #ifndef _exercise_time__GUARD__
    #define _exercise_time__GUARD__
    DECL_STRONG_TYPE(exercise_time, spiderrock::protobuf::api::ExerciseTime);
    #endif//_exercise_time__GUARD__

    #ifndef _exercise_type__GUARD__
    #define _exercise_type__GUARD__
    DECL_STRONG_TYPE(exercise_type, spiderrock::protobuf::api::ExerciseType);
    #endif//_exercise_type__GUARD__

    #ifndef _time_metric__GUARD__
    #define _time_metric__GUARD__
    DECL_STRONG_TYPE(time_metric, spiderrock::protobuf::api::TimeMetric);
    #endif//_time_metric__GUARD__

    #ifndef _trading_period__TradingPeriod__GUARD__
    #define _trading_period__TradingPeriod__GUARD__
    DECL_STRONG_TYPE(trading_period__TradingPeriod, spiderrock::protobuf::api::TradingPeriod);
    #endif//_trading_period__TradingPeriod__GUARD__

    #ifndef _pricing_model__GUARD__
    #define _pricing_model__GUARD__
    DECL_STRONG_TYPE(pricing_model, spiderrock::protobuf::api::PricingModel);
    #endif//_pricing_model__GUARD__

    #ifndef _moneyness_type__GUARD__
    #define _moneyness_type__GUARD__
    DECL_STRONG_TYPE(moneyness_type, spiderrock::protobuf::api::MoneynessType);
    #endif//_moneyness_type__GUARD__

    #ifndef _price_quote_type__GUARD__
    #define _price_quote_type__GUARD__
    DECL_STRONG_TYPE(price_quote_type, spiderrock::protobuf::api::PriceQuoteType);
    #endif//_price_quote_type__GUARD__

    #ifndef _volume_tier__GUARD__
    #define _volume_tier__GUARD__
    DECL_STRONG_TYPE(volume_tier, spiderrock::protobuf::api::VolumeTier);
    #endif//_volume_tier__GUARD__

    #ifndef _position_limit__GUARD__
    #define _position_limit__GUARD__
    DECL_STRONG_TYPE(position_limit, int32);
    #endif//_position_limit__GUARD__

    #ifndef _exchanges__GUARD__
    #define _exchanges__GUARD__
    DECL_STRONG_TYPE(exchanges, string);
    #endif//_exchanges__GUARD__

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

    #ifndef _strike_scale__GUARD__
    #define _strike_scale__GUARD__
    DECL_STRONG_TYPE(strike_scale, double);
    #endif//_strike_scale__GUARD__

    #ifndef _strike_ratio__GUARD__
    #define _strike_ratio__GUARD__
    DECL_STRONG_TYPE(strike_ratio, float);
    #endif//_strike_ratio__GUARD__

    #ifndef _cash_on_exercise__GUARD__
    #define _cash_on_exercise__GUARD__
    DECL_STRONG_TYPE(cash_on_exercise, float);
    #endif//_cash_on_exercise__GUARD__

    #ifndef _underliers_per_cn__GUARD__
    #define _underliers_per_cn__GUARD__
    DECL_STRONG_TYPE(underliers_per_cn, int32);
    #endif//_underliers_per_cn__GUARD__

    #ifndef _premium_mult__GUARD__
    #define _premium_mult__GUARD__
    DECL_STRONG_TYPE(premium_mult, double);
    #endif//_premium_mult__GUARD__

    #ifndef _symbol_ratio__GUARD__
    #define _symbol_ratio__GUARD__
    DECL_STRONG_TYPE(symbol_ratio, float);
    #endif//_symbol_ratio__GUARD__

    #ifndef _adj_convention__GUARD__
    #define _adj_convention__GUARD__
    DECL_STRONG_TYPE(adj_convention, spiderrock::protobuf::api::AdjConvention);
    #endif//_adj_convention__GUARD__

    #ifndef _opt_price_inc__GUARD__
    #define _opt_price_inc__GUARD__
    DECL_STRONG_TYPE(opt_price_inc, spiderrock::protobuf::api::OptPriceInc);
    #endif//_opt_price_inc__GUARD__

    #ifndef _price_format__GUARD__
    #define _price_format__GUARD__
    DECL_STRONG_TYPE(price_format, spiderrock::protobuf::api::PriceFormat);
    #endif//_price_format__GUARD__

    #ifndef _trade_curr__GUARD__
    #define _trade_curr__GUARD__
    DECL_STRONG_TYPE(trade_curr, spiderrock::protobuf::api::Currency);
    #endif//_trade_curr__GUARD__

    #ifndef _settle_curr__GUARD__
    #define _settle_curr__GUARD__
    DECL_STRONG_TYPE(settle_curr, spiderrock::protobuf::api::Currency);
    #endif//_settle_curr__GUARD__

    #ifndef _strike_curr__GUARD__
    #define _strike_curr__GUARD__
    DECL_STRONG_TYPE(strike_curr, spiderrock::protobuf::api::Currency);
    #endif//_strike_curr__GUARD__

    #ifndef _default_surface_root__GUARD__
    #define _default_surface_root__GUARD__
    DECL_STRONG_TYPE(default_surface_root, TickerKey);
    #endif//_default_surface_root__GUARD__

    #ifndef _ric_root__GUARD__
    #define _ric_root__GUARD__
    DECL_STRONG_TYPE(ric_root, string);
    #endif//_ric_root__GUARD__

    #ifndef _regional_composite_root__GUARD__
    #define _regional_composite_root__GUARD__
    DECL_STRONG_TYPE(regional_composite_root, TickerKey);
    #endif//_regional_composite_root__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _pricing_source__v7__GUARD__
    #define _pricing_source__v7__GUARD__
    DECL_STRONG_TYPE(pricing_source__v7, spiderrock::protobuf::api::PricingSource_V7);
    #endif//_pricing_source__v7__GUARD__

    #ifndef _root__GUARD__
    #define _root__GUARD__
    DECL_STRONG_TYPE(root, TickerKey);
    #endif//_root__GUARD__

    #ifndef _opt_exch__GUARD__
    #define _opt_exch__GUARD__
    DECL_STRONG_TYPE(opt_exch, spiderrock::protobuf::api::OptExch);
    #endif//_opt_exch__GUARD__

    #ifndef _root__GUARD__
    #define _root__GUARD__
    DECL_STRONG_TYPE(root, TickerKey);
    #endif//_root__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _spc__GUARD__
    #define _spc__GUARD__
    DECL_STRONG_TYPE(spc, float);
    #endif//_spc__GUARD__

    
    class RootDefinition_PKey {
        public:
        //using statements for all types used in this class
        using root = spiderrock::protobuf::api::root;

        private:
        root m_root{};

        public:
		root get_root() const {
            return m_root;
        }
        void set_root(const root& value)  {
            m_root = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to RootDefinition_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to RootDefinition_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const root & value) { set_root(value); }


        RootDefinition_PKey() {}

        virtual ~RootDefinition_PKey() {
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
        bool IncludeRoot() const {
            return (m_root.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeRoot()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_root.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeRoot()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_root.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout);
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
                        m_root.setFromCodec(tickerKey);
                        break;
                    }
                }
            }
        }

    };
    
    class RootDefinition_Exchange {
        public:
        //using statements for all types used in this class
        using opt_exch = spiderrock::protobuf::api::opt_exch;
        using root = spiderrock::protobuf::api::root;

        private:
        opt_exch m_opt_exch{};
        root m_root{};

        public:
        opt_exch get_opt_exch() const {
            return m_opt_exch;
        }
		root get_root() const {
            return m_root;
        }
        void set_opt_exch(const opt_exch& value)  {
            m_opt_exch = value;
        }
        void set_root(const root& value)  {
            m_root = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to RootDefinition_Exchange::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to RootDefinition_Exchange::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const opt_exch & value) { set_opt_exch(value); }
        void set(const root & value) { set_root(value); }


        RootDefinition_Exchange() {}

        virtual ~RootDefinition_Exchange() {
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(220,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_opt_exch)));
            SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
            m_root.setCodecTickerKey(tickerKeyLayout);
            totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(224,tickerKeyLayout);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,220,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_opt_exch)));
            SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
            m_root.setCodecTickerKey(tickerKeyLayout);
            dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 224, tickerKeyLayout);
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
                    case 220: {m_opt_exch = static_cast<spiderrock::protobuf::api::OptExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 224: {
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_root.setFromCodec(tickerKey);
                        break;
                    }
                }
            }
        }

    };
    
    class RootDefinition_Underlying {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using spc = spiderrock::protobuf::api::spc;

        private:
        ticker m_ticker{};
        spc m_spc{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
        spc get_spc() const {
            return m_spc;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_spc(const spc& value)  {
            m_spc = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to RootDefinition_Underlying::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to RootDefinition_Underlying::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const spc & value) { set_spc(value); }


        RootDefinition_Underlying() {}

        virtual ~RootDefinition_Underlying() {
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
            SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
            m_ticker.setCodecTickerKey(tickerKeyLayout);
            totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(214,tickerKeyLayout);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(217,m_spc);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
            m_ticker.setCodecTickerKey(tickerKeyLayout);
            dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 214, tickerKeyLayout);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,217,m_spc);
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
                    case 214: {
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_ticker.setFromCodec(tickerKey);
                        break;
                    }
                    case 217: {m_spc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class RootDefinition {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::RootDefinition_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using osi_root = spiderrock::protobuf::api::osi_root;
        using ccode = spiderrock::protobuf::api::ccode;
        using u_prc_driver_key = spiderrock::protobuf::api::u_prc_driver_key;
        using u_prc_driver_type = spiderrock::protobuf::api::u_prc_driver_type;
        using u_prc_driver_key2 = spiderrock::protobuf::api::u_prc_driver_key2;
        using u_prc_driver_type2 = spiderrock::protobuf::api::u_prc_driver_type2;
        using u_prc_bound_ccode = spiderrock::protobuf::api::u_prc_bound_ccode;
        using expiration_map = spiderrock::protobuf::api::expiration_map;
        using underlier_mode = spiderrock::protobuf::api::underlier_mode;
        using option_type = spiderrock::protobuf::api::option_type;
        using multihedge = spiderrock::protobuf::api::multihedge;
        using exercise_time = spiderrock::protobuf::api::exercise_time;
        using exercise_type = spiderrock::protobuf::api::exercise_type;
        using time_metric = spiderrock::protobuf::api::time_metric;
        using trading_period = spiderrock::protobuf::api::trading_period__TradingPeriod;
        using pricing_model = spiderrock::protobuf::api::pricing_model;
        using moneyness_type = spiderrock::protobuf::api::moneyness_type;
        using price_quote_type = spiderrock::protobuf::api::price_quote_type;
        using volume_tier = spiderrock::protobuf::api::volume_tier;
        using position_limit = spiderrock::protobuf::api::position_limit;
        using exchanges = spiderrock::protobuf::api::exchanges;
        using tick_value = spiderrock::protobuf::api::tick_value;
        using point_value = spiderrock::protobuf::api::point_value__float;
        using point_currency = spiderrock::protobuf::api::point_currency;
        using strike_scale = spiderrock::protobuf::api::strike_scale;
        using strike_ratio = spiderrock::protobuf::api::strike_ratio;
        using cash_on_exercise = spiderrock::protobuf::api::cash_on_exercise;
        using underliers_per_cn = spiderrock::protobuf::api::underliers_per_cn;
        using premium_mult = spiderrock::protobuf::api::premium_mult;
        using symbol_ratio = spiderrock::protobuf::api::symbol_ratio;
        using adj_convention = spiderrock::protobuf::api::adj_convention;
        using opt_price_inc = spiderrock::protobuf::api::opt_price_inc;
        using price_format = spiderrock::protobuf::api::price_format;
        using trade_curr = spiderrock::protobuf::api::trade_curr;
        using settle_curr = spiderrock::protobuf::api::settle_curr;
        using strike_curr = spiderrock::protobuf::api::strike_curr;
        using default_surface_root = spiderrock::protobuf::api::default_surface_root;
        using ric_root = spiderrock::protobuf::api::ric_root;
        using regional_composite_root = spiderrock::protobuf::api::regional_composite_root;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using pricing_source__v7 = spiderrock::protobuf::api::pricing_source__v7;
        using exchange = spiderrock::protobuf::api::RootDefinition_Exchange;
        using underlying = spiderrock::protobuf::api::RootDefinition_Underlying;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        osi_root m_osi_root{};
        ccode m_ccode{};
        u_prc_driver_key m_u_prc_driver_key{};
        u_prc_driver_type m_u_prc_driver_type{};
        u_prc_driver_key2 m_u_prc_driver_key2{};
        u_prc_driver_type2 m_u_prc_driver_type2{};
        u_prc_bound_ccode m_u_prc_bound_ccode{};
        expiration_map m_expiration_map{};
        underlier_mode m_underlier_mode{};
        option_type m_option_type{};
        multihedge m_multihedge{};
        exercise_time m_exercise_time{};
        exercise_type m_exercise_type{};
        time_metric m_time_metric{};
        trading_period m_trading_period{};
        pricing_model m_pricing_model{};
        moneyness_type m_moneyness_type{};
        price_quote_type m_price_quote_type{};
        volume_tier m_volume_tier{};
        position_limit m_position_limit{};
        exchanges m_exchanges{};
        tick_value m_tick_value{};
        point_value m_point_value{};
        point_currency m_point_currency{};
        strike_scale m_strike_scale{};
        strike_ratio m_strike_ratio{};
        cash_on_exercise m_cash_on_exercise{};
        underliers_per_cn m_underliers_per_cn{};
        premium_mult m_premium_mult{};
        symbol_ratio m_symbol_ratio{};
        adj_convention m_adj_convention{};
        opt_price_inc m_opt_price_inc{};
        price_format m_price_format{};
        trade_curr m_trade_curr{};
        settle_curr m_settle_curr{};
        strike_curr m_strike_curr{};
        default_surface_root m_default_surface_root{};
        ric_root m_ric_root{};
        regional_composite_root m_regional_composite_root{};
        timestamp m_timestamp{};
        pricing_source__v7 m_pricing_source__v7{};
        std::vector<exchange> m_exchange{};
        std::vector<underlying> m_underlying{};

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
        osi_root get_osi_root() const {
            return m_osi_root;
        }		
        ccode get_ccode() const {
            return m_ccode;
        }		
        u_prc_driver_key get_u_prc_driver_key() const {
            return m_u_prc_driver_key;
        }		
        u_prc_driver_type get_u_prc_driver_type() const {
            return m_u_prc_driver_type;
        }		
        u_prc_driver_key2 get_u_prc_driver_key2() const {
            return m_u_prc_driver_key2;
        }		
        u_prc_driver_type2 get_u_prc_driver_type2() const {
            return m_u_prc_driver_type2;
        }		
        u_prc_bound_ccode get_u_prc_bound_ccode() const {
            return m_u_prc_bound_ccode;
        }		
        expiration_map get_expiration_map() const {
            return m_expiration_map;
        }		
        underlier_mode get_underlier_mode() const {
            return m_underlier_mode;
        }		
        option_type get_option_type() const {
            return m_option_type;
        }		
        multihedge get_multihedge() const {
            return m_multihedge;
        }		
        exercise_time get_exercise_time() const {
            return m_exercise_time;
        }		
        exercise_type get_exercise_type() const {
            return m_exercise_type;
        }		
        time_metric get_time_metric() const {
            return m_time_metric;
        }		
        trading_period get_trading_period() const {
            return m_trading_period;
        }		
        pricing_model get_pricing_model() const {
            return m_pricing_model;
        }		
        moneyness_type get_moneyness_type() const {
            return m_moneyness_type;
        }		
        price_quote_type get_price_quote_type() const {
            return m_price_quote_type;
        }		
        volume_tier get_volume_tier() const {
            return m_volume_tier;
        }		
        position_limit get_position_limit() const {
            return m_position_limit;
        }		
        exchanges get_exchanges() const {
            return m_exchanges;
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
        strike_scale get_strike_scale() const {
            return m_strike_scale;
        }		
        strike_ratio get_strike_ratio() const {
            return m_strike_ratio;
        }		
        cash_on_exercise get_cash_on_exercise() const {
            return m_cash_on_exercise;
        }		
        underliers_per_cn get_underliers_per_cn() const {
            return m_underliers_per_cn;
        }		
        premium_mult get_premium_mult() const {
            return m_premium_mult;
        }		
        symbol_ratio get_symbol_ratio() const {
            return m_symbol_ratio;
        }		
        adj_convention get_adj_convention() const {
            return m_adj_convention;
        }		
        opt_price_inc get_opt_price_inc() const {
            return m_opt_price_inc;
        }		
        price_format get_price_format() const {
            return m_price_format;
        }		
        trade_curr get_trade_curr() const {
            return m_trade_curr;
        }		
        settle_curr get_settle_curr() const {
            return m_settle_curr;
        }		
        strike_curr get_strike_curr() const {
            return m_strike_curr;
        }		
        default_surface_root get_default_surface_root() const {
            return m_default_surface_root;
        }		
        ric_root get_ric_root() const {
            return m_ric_root;
        }		
        regional_composite_root get_regional_composite_root() const {
            return m_regional_composite_root;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }		
        pricing_source__v7 get_pricing_source__v7() const {
            return m_pricing_source__v7;
        }
        const std::vector<exchange>& get_exchange_list() const {
            return m_exchange;
        }
        const exchange& get_exchange(const int i) const {
            return m_exchange.at(i);
        }
        const std::vector<underlying>& get_underlying_list() const {
            return m_underlying;
        }
        const underlying& get_underlying(const int i) const {
            return m_underlying.at(i);
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
        void set_osi_root(const osi_root& value)  {
            m_osi_root = value;
        }
        void set_ccode(const ccode& value)  {
            m_ccode = value;
        }
        void set_u_prc_driver_key(const u_prc_driver_key& value)  {
            m_u_prc_driver_key = value;
        }
        void set_u_prc_driver_type(const u_prc_driver_type& value)  {
            m_u_prc_driver_type = value;
        }
        void set_u_prc_driver_key2(const u_prc_driver_key2& value)  {
            m_u_prc_driver_key2 = value;
        }
        void set_u_prc_driver_type2(const u_prc_driver_type2& value)  {
            m_u_prc_driver_type2 = value;
        }
        void set_u_prc_bound_ccode(const u_prc_bound_ccode& value)  {
            m_u_prc_bound_ccode = value;
        }
        void set_expiration_map(const expiration_map& value)  {
            m_expiration_map = value;
        }
        void set_underlier_mode(const underlier_mode& value)  {
            m_underlier_mode = value;
        }
        void set_option_type(const option_type& value)  {
            m_option_type = value;
        }
        void set_multihedge(const multihedge& value)  {
            m_multihedge = value;
        }
        void set_exercise_time(const exercise_time& value)  {
            m_exercise_time = value;
        }
        void set_exercise_type(const exercise_type& value)  {
            m_exercise_type = value;
        }
        void set_time_metric(const time_metric& value)  {
            m_time_metric = value;
        }
        void set_trading_period(const trading_period& value)  {
            m_trading_period = value;
        }
        void set_pricing_model(const pricing_model& value)  {
            m_pricing_model = value;
        }
        void set_moneyness_type(const moneyness_type& value)  {
            m_moneyness_type = value;
        }
        void set_price_quote_type(const price_quote_type& value)  {
            m_price_quote_type = value;
        }
        void set_volume_tier(const volume_tier& value)  {
            m_volume_tier = value;
        }
        void set_position_limit(const position_limit& value)  {
            m_position_limit = value;
        }
        void set_exchanges(const exchanges& value)  {
            m_exchanges = value;
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
        void set_strike_scale(const strike_scale& value)  {
            m_strike_scale = value;
        }
        void set_strike_ratio(const strike_ratio& value)  {
            m_strike_ratio = value;
        }
        void set_cash_on_exercise(const cash_on_exercise& value)  {
            m_cash_on_exercise = value;
        }
        void set_underliers_per_cn(const underliers_per_cn& value)  {
            m_underliers_per_cn = value;
        }
        void set_premium_mult(const premium_mult& value)  {
            m_premium_mult = value;
        }
        void set_symbol_ratio(const symbol_ratio& value)  {
            m_symbol_ratio = value;
        }
        void set_adj_convention(const adj_convention& value)  {
            m_adj_convention = value;
        }
        void set_opt_price_inc(const opt_price_inc& value)  {
            m_opt_price_inc = value;
        }
        void set_price_format(const price_format& value)  {
            m_price_format = value;
        }
        void set_trade_curr(const trade_curr& value)  {
            m_trade_curr = value;
        }
        void set_settle_curr(const settle_curr& value)  {
            m_settle_curr = value;
        }
        void set_strike_curr(const strike_curr& value)  {
            m_strike_curr = value;
        }
        void set_default_surface_root(const default_surface_root& value)  {
            m_default_surface_root = value;
        }
        void set_ric_root(const ric_root& value)  {
            m_ric_root = value;
        }
        void set_regional_composite_root(const regional_composite_root& value)  {
            m_regional_composite_root = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_pricing_source__v7(const pricing_source__v7& value)  {
            m_pricing_source__v7 = value;
        }
        void set_exchange_list(const std::vector<exchange>& list)  {
            m_exchange = list;
        }
        void add_exchange(const exchange& item) {
            m_exchange.emplace_back(item);
        }
        void set_underlying_list(const std::vector<underlying>& list)  {
            m_underlying = list;
        }
        void add_underlying(const underlying& item) {
            m_underlying.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to RootDefinition::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to RootDefinition::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to RootDefinition::count()"); return 0;}  // specializations for valid types are listed below the class definition

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
        void set(const osi_root & value) {
            set_osi_root(value);
        }
        void set(const ccode & value) {
            set_ccode(value);
        }
        void set(const u_prc_driver_key & value) {
            set_u_prc_driver_key(value);
        }
        void set(const u_prc_driver_type & value) {
            set_u_prc_driver_type(value);
        }
        void set(const u_prc_driver_key2 & value) {
            set_u_prc_driver_key2(value);
        }
        void set(const u_prc_driver_type2 & value) {
            set_u_prc_driver_type2(value);
        }
        void set(const u_prc_bound_ccode & value) {
            set_u_prc_bound_ccode(value);
        }
        void set(const expiration_map & value) {
            set_expiration_map(value);
        }
        void set(const underlier_mode & value) {
            set_underlier_mode(value);
        }
        void set(const option_type & value) {
            set_option_type(value);
        }
        void set(const multihedge & value) {
            set_multihedge(value);
        }
        void set(const exercise_time & value) {
            set_exercise_time(value);
        }
        void set(const exercise_type & value) {
            set_exercise_type(value);
        }
        void set(const time_metric & value) {
            set_time_metric(value);
        }
        void set(const trading_period & value) {
            set_trading_period(value);
        }
        void set(const pricing_model & value) {
            set_pricing_model(value);
        }
        void set(const moneyness_type & value) {
            set_moneyness_type(value);
        }
        void set(const price_quote_type & value) {
            set_price_quote_type(value);
        }
        void set(const volume_tier & value) {
            set_volume_tier(value);
        }
        void set(const position_limit & value) {
            set_position_limit(value);
        }
        void set(const exchanges & value) {
            set_exchanges(value);
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
        void set(const strike_scale & value) {
            set_strike_scale(value);
        }
        void set(const strike_ratio & value) {
            set_strike_ratio(value);
        }
        void set(const cash_on_exercise & value) {
            set_cash_on_exercise(value);
        }
        void set(const underliers_per_cn & value) {
            set_underliers_per_cn(value);
        }
        void set(const premium_mult & value) {
            set_premium_mult(value);
        }
        void set(const symbol_ratio & value) {
            set_symbol_ratio(value);
        }
        void set(const adj_convention & value) {
            set_adj_convention(value);
        }
        void set(const opt_price_inc & value) {
            set_opt_price_inc(value);
        }
        void set(const price_format & value) {
            set_price_format(value);
        }
        void set(const trade_curr & value) {
            set_trade_curr(value);
        }
        void set(const settle_curr & value) {
            set_settle_curr(value);
        }
        void set(const strike_curr & value) {
            set_strike_curr(value);
        }
        void set(const default_surface_root & value) {
            set_default_surface_root(value);
        }
        void set(const ric_root & value) {
            set_ric_root(value);
        }
        void set(const regional_composite_root & value) {
            set_regional_composite_root(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const pricing_source__v7 & value) {
            set_pricing_source__v7(value);
        }
        void set(const exchange & value) {
            add_exchange(value);
        }
        void set(const underlying & value) {
            add_underlying(value);
        }

        void set(const RootDefinition & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_osi_root);
            set(value.m_ccode);
            set(value.m_u_prc_driver_key);
            set(value.m_u_prc_driver_type);
            set(value.m_u_prc_driver_key2);
            set(value.m_u_prc_driver_type2);
            set(value.m_u_prc_bound_ccode);
            set(value.m_expiration_map);
            set(value.m_underlier_mode);
            set(value.m_option_type);
            set(value.m_multihedge);
            set(value.m_exercise_time);
            set(value.m_exercise_type);
            set(value.m_time_metric);
            set(value.m_trading_period);
            set(value.m_pricing_model);
            set(value.m_moneyness_type);
            set(value.m_price_quote_type);
            set(value.m_volume_tier);
            set(value.m_position_limit);
            set(value.m_exchanges);
            set(value.m_tick_value);
            set(value.m_point_value);
            set(value.m_point_currency);
            set(value.m_strike_scale);
            set(value.m_strike_ratio);
            set(value.m_cash_on_exercise);
            set(value.m_underliers_per_cn);
            set(value.m_premium_mult);
            set(value.m_symbol_ratio);
            set(value.m_adj_convention);
            set(value.m_opt_price_inc);
            set(value.m_price_format);
            set(value.m_trade_curr);
            set(value.m_settle_curr);
            set(value.m_strike_curr);
            set(value.m_default_surface_root);
            set(value.m_ric_root);
            set(value.m_regional_composite_root);
            set(value.m_timestamp);
            set(value.m_pricing_source__v7);set_exchange_list(value.m_exchange);set_underlying_list(value.m_underlying);
        }

        RootDefinition() {
            m__meta.set_message_type("RootDefinition");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4365, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4365, length);
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
             *this = RootDefinition{};
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
        bool IncludeOsiRoot() const {
            return !(m_osi_root.empty());
        }
        bool IncludeCcode() const {
            return (m_ccode.ByteSizeLong() > 0);
        }
        bool IncludeUPrcDriverKey() const {
            return (m_u_prc_driver_key.ByteSizeLong() > 0);
        }
        bool IncludeUPrcDriverKey2() const {
            return (m_u_prc_driver_key2.ByteSizeLong() > 0);
        }
        bool IncludePositionLimit() const {
            return !(m_position_limit == 0);
        }
        bool IncludeExchanges() const {
            return !(m_exchanges.empty());
        }
        bool IncludeTickValue() const {
            return !(m_tick_value == 0.0);
        }
        bool IncludePointValue() const {
            return !(m_point_value == 0.0);
        }
        bool IncludeStrikeScale() const {
            return !(m_strike_scale == 0.0);
        }
        bool IncludeStrikeRatio() const {
            return !(m_strike_ratio == 0.0);
        }
        bool IncludeCashOnExercise() const {
            return !(m_cash_on_exercise == 0.0);
        }
        bool IncludeUnderliersPerCn() const {
            return !(m_underliers_per_cn == 0);
        }
        bool IncludePremiumMult() const {
            return !(m_premium_mult == 0.0);
        }
        bool IncludeSymbolRatio() const {
            return !(m_symbol_ratio == 0.0);
        }
        bool IncludeDefaultSurfaceRoot() const {
            return (m_default_surface_root.ByteSizeLong() > 0);
        }
        bool IncludeRicRoot() const {
            return !(m_ric_root.empty());
        }
        bool IncludeRegionalCompositeRoot() const {
            return (m_regional_composite_root.ByteSizeLong() > 0);
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeExchange() const {
            return (!m_exchange.empty());
        }
        bool IncludeUnderlying() const {
            return (!m_underlying.empty());
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
            if ( IncludeOsiRoot()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_osi_root);
            }
            if ( IncludeCcode()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ccode.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(106, tickerKeyLayout);
            }
            if ( IncludeUPrcDriverKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_u_prc_driver_key.setCodecExpiryKey(expiryKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(109, expiryKeyLayout);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_u_prc_driver_type)));
            if ( IncludeUPrcDriverKey2()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_u_prc_driver_key2.setCodecExpiryKey(expiryKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(115, expiryKeyLayout);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_u_prc_driver_type2)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_u_prc_bound_ccode)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExpirationMap>(m_expiration_map)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierMode>(m_underlier_mode)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptionType>(m_option_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Multihedge>(m_multihedge)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseTime>(m_exercise_time)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>(m_exercise_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TimeMetric>(m_time_metric)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(223,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradingPeriod>(m_trading_period)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PricingModel>(m_pricing_model)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MoneynessType>(m_moneyness_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceQuoteType>(m_price_quote_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::VolumeTier>(m_volume_tier)));
            if ( IncludePositionLimit()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(157,m_position_limit);
            }
            if ( IncludeExchanges()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(160,m_exchanges);
            }
            if ( IncludeTickValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_tick_value);
            }
            if ( IncludePointValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_point_value);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(169,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            if ( IncludeStrikeScale()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(172,m_strike_scale);
            }
            if ( IncludeStrikeRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(175,m_strike_ratio);
            }
            if ( IncludeCashOnExercise()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_cash_on_exercise);
            }
            if ( IncludeUnderliersPerCn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(181,m_underliers_per_cn);
            }
            if ( IncludePremiumMult()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(184,m_premium_mult);
            }
            if ( IncludeSymbolRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(222,m_symbol_ratio);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(187,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AdjConvention>(m_adj_convention)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(190,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptPriceInc>(m_opt_price_inc)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(193,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(196,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_trade_curr)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(199,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_settle_curr)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(202,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_strike_curr)));
            if ( IncludeDefaultSurfaceRoot()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_default_surface_root.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(205, tickerKeyLayout);
            }
            if ( IncludeRicRoot()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(218,m_ric_root);
            }
            if ( IncludeRegionalCompositeRoot()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_regional_composite_root.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(225, tickerKeyLayout);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(208, m_timestamp);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5000,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PricingSource_V7>(m_pricing_source__v7)));
            if ( IncludeExchange()) {
                for (auto& item : m_exchange) {
					totalSize += SRProtobufCPP::TagCodec::Size(219, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeUnderlying()) {
                for (auto& item : m_underlying) {
					totalSize += SRProtobufCPP::TagCodec::Size(211, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 100, tickerKeyLayout);
            }
            if ( IncludeOsiRoot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_osi_root));
            }
            if ( IncludeCcode()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ccode.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 106, tickerKeyLayout);
            }
            if ( IncludeUPrcDriverKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_u_prc_driver_key.setCodecExpiryKey(expiryKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 109, expiryKeyLayout);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_u_prc_driver_type)));
            if ( IncludeUPrcDriverKey2()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_u_prc_driver_key2.setCodecExpiryKey(expiryKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 115, expiryKeyLayout);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_u_prc_driver_type2)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_u_prc_bound_ccode)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExpirationMap>(m_expiration_map)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierMode>(m_underlier_mode)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptionType>(m_option_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Multihedge>(m_multihedge)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseTime>(m_exercise_time)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>(m_exercise_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TimeMetric>(m_time_metric)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,223,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradingPeriod>(m_trading_period)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PricingModel>(m_pricing_model)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MoneynessType>(m_moneyness_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceQuoteType>(m_price_quote_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::VolumeTier>(m_volume_tier)));
            if ( IncludePositionLimit()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,157,m_position_limit);
            }
            if ( IncludeExchanges()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,160,static_cast<string>(m_exchanges));
            }
            if ( IncludeTickValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_tick_value);
            }
            if ( IncludePointValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_point_value);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,169,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            if ( IncludeStrikeScale()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,172,m_strike_scale);
            }
            if ( IncludeStrikeRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,175,m_strike_ratio);
            }
            if ( IncludeCashOnExercise()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_cash_on_exercise);
            }
            if ( IncludeUnderliersPerCn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,181,m_underliers_per_cn);
            }
            if ( IncludePremiumMult()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,184,m_premium_mult);
            }
            if ( IncludeSymbolRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,222,m_symbol_ratio);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,187,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AdjConvention>(m_adj_convention)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,190,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptPriceInc>(m_opt_price_inc)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,193,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,196,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_trade_curr)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,199,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_settle_curr)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,202,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_strike_curr)));
            if ( IncludeDefaultSurfaceRoot()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_default_surface_root.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 205, tickerKeyLayout);
            }
            if ( IncludeRicRoot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,218,static_cast<string>(m_ric_root));
            }
            if ( IncludeRegionalCompositeRoot()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_regional_composite_root.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 225, tickerKeyLayout);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 208, m_timestamp);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5000,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PricingSource_V7>(m_pricing_source__v7)));
            if ( IncludeExchange()) {
                for (auto& item : m_exchange) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 219, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeUnderlying()) {
                for (auto& item : m_underlying) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 211, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_osi_root = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ccode.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_u_prc_driver_key.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_u_prc_driver_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_u_prc_driver_key2.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_u_prc_driver_type2 = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 121: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_u_prc_bound_ccode = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 124: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_expiration_map = static_cast<spiderrock::protobuf::api::ExpirationMap>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 127: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_underlier_mode = static_cast<spiderrock::protobuf::api::UnderlierMode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 130: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_option_type = static_cast<spiderrock::protobuf::api::OptionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 133: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_multihedge = static_cast<spiderrock::protobuf::api::Multihedge>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 136: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_exercise_time = static_cast<spiderrock::protobuf::api::ExerciseTime>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 139: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_exercise_type = static_cast<spiderrock::protobuf::api::ExerciseType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 142: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_time_metric = static_cast<spiderrock::protobuf::api::TimeMetric>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 223: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_trading_period = static_cast<spiderrock::protobuf::api::TradingPeriod>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 145: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_pricing_model = static_cast<spiderrock::protobuf::api::PricingModel>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 148: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_moneyness_type = static_cast<spiderrock::protobuf::api::MoneynessType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 151: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_quote_type = static_cast<spiderrock::protobuf::api::PriceQuoteType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 154: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_volume_tier = static_cast<spiderrock::protobuf::api::VolumeTier>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_position_limit = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exchanges = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_tick_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_point_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 169: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_point_currency = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_strike_scale = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_strike_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cash_on_exercise = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_underliers_per_cn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_premium_mult = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 222: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_symbol_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 187: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_adj_convention = static_cast<spiderrock::protobuf::api::AdjConvention>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 190: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_opt_price_inc = static_cast<spiderrock::protobuf::api::OptPriceInc>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 193: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_format = static_cast<spiderrock::protobuf::api::PriceFormat>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 196: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_trade_curr = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 199: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_settle_curr = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 202: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_strike_curr = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_default_surface_root.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 218: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_ric_root = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 225: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_regional_composite_root.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 5000: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_pricing_source__v7 = static_cast<spiderrock::protobuf::api::PricingSource_V7>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 219: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            exchange item_exchange;
                            item_exchange.Decode(pos, pos+length);  
                            m_exchange.emplace_back(item_exchange);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            underlying item_underlying;
                            item_underlying.Decode(pos, pos+length);  
                            m_underlying.emplace_back(item_underlying);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto RootDefinition::get<RootDefinition::_meta>() const { return RootDefinition::_meta{ m__meta}; }
    template<> inline const auto RootDefinition::get<RootDefinition::pkey>() const { return RootDefinition::pkey{ m_pkey}; }
    template<> inline const auto RootDefinition::get<RootDefinition::ticker>() const { return RootDefinition::ticker{ m_ticker}; }
    template<> inline const auto RootDefinition::get<RootDefinition::osi_root>() const { return m_osi_root; }
    template<> inline const auto RootDefinition::get<RootDefinition::ccode>() const { return RootDefinition::ccode{ m_ccode}; }
    template<> inline const auto RootDefinition::get<RootDefinition::u_prc_driver_key>() const { return RootDefinition::u_prc_driver_key{ m_u_prc_driver_key}; }
    template<> inline const auto RootDefinition::get<RootDefinition::u_prc_driver_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_u_prc_driver_type)); }
    template<> inline const auto RootDefinition::get<RootDefinition::u_prc_driver_key2>() const { return RootDefinition::u_prc_driver_key2{ m_u_prc_driver_key2}; }
    template<> inline const auto RootDefinition::get<RootDefinition::u_prc_driver_type2>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_u_prc_driver_type2)); }
    template<> inline const auto RootDefinition::get<RootDefinition::u_prc_bound_ccode>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_u_prc_bound_ccode)); }
    template<> inline const auto RootDefinition::get<RootDefinition::expiration_map>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExpirationMap>( m_expiration_map)); }
    template<> inline const auto RootDefinition::get<RootDefinition::underlier_mode>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierMode>( m_underlier_mode)); }
    template<> inline const auto RootDefinition::get<RootDefinition::option_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptionType>( m_option_type)); }
    template<> inline const auto RootDefinition::get<RootDefinition::multihedge>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Multihedge>( m_multihedge)); }
    template<> inline const auto RootDefinition::get<RootDefinition::exercise_time>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseTime>( m_exercise_time)); }
    template<> inline const auto RootDefinition::get<RootDefinition::exercise_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>( m_exercise_type)); }
    template<> inline const auto RootDefinition::get<RootDefinition::time_metric>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TimeMetric>( m_time_metric)); }
    template<> inline const auto RootDefinition::get<RootDefinition::trading_period>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradingPeriod>( m_trading_period)); }
    template<> inline const auto RootDefinition::get<RootDefinition::pricing_model>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PricingModel>( m_pricing_model)); }
    template<> inline const auto RootDefinition::get<RootDefinition::moneyness_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MoneynessType>( m_moneyness_type)); }
    template<> inline const auto RootDefinition::get<RootDefinition::price_quote_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceQuoteType>( m_price_quote_type)); }
    template<> inline const auto RootDefinition::get<RootDefinition::volume_tier>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::VolumeTier>( m_volume_tier)); }
    template<> inline const auto RootDefinition::get<RootDefinition::position_limit>() const { return m_position_limit; }
    template<> inline const auto RootDefinition::get<RootDefinition::exchanges>() const { return m_exchanges; }
    template<> inline const auto RootDefinition::get<RootDefinition::tick_value>() const { return m_tick_value; }
    template<> inline const auto RootDefinition::get<RootDefinition::point_value>() const { return m_point_value; }
    template<> inline const auto RootDefinition::get<RootDefinition::point_currency>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>( m_point_currency)); }
    template<> inline const auto RootDefinition::get<RootDefinition::strike_scale>() const { return m_strike_scale; }
    template<> inline const auto RootDefinition::get<RootDefinition::strike_ratio>() const { return m_strike_ratio; }
    template<> inline const auto RootDefinition::get<RootDefinition::cash_on_exercise>() const { return m_cash_on_exercise; }
    template<> inline const auto RootDefinition::get<RootDefinition::underliers_per_cn>() const { return m_underliers_per_cn; }
    template<> inline const auto RootDefinition::get<RootDefinition::premium_mult>() const { return m_premium_mult; }
    template<> inline const auto RootDefinition::get<RootDefinition::symbol_ratio>() const { return m_symbol_ratio; }
    template<> inline const auto RootDefinition::get<RootDefinition::adj_convention>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AdjConvention>( m_adj_convention)); }
    template<> inline const auto RootDefinition::get<RootDefinition::opt_price_inc>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptPriceInc>( m_opt_price_inc)); }
    template<> inline const auto RootDefinition::get<RootDefinition::price_format>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>( m_price_format)); }
    template<> inline const auto RootDefinition::get<RootDefinition::trade_curr>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>( m_trade_curr)); }
    template<> inline const auto RootDefinition::get<RootDefinition::settle_curr>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>( m_settle_curr)); }
    template<> inline const auto RootDefinition::get<RootDefinition::strike_curr>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>( m_strike_curr)); }
    template<> inline const auto RootDefinition::get<RootDefinition::default_surface_root>() const { return RootDefinition::default_surface_root{ m_default_surface_root}; }
    template<> inline const auto RootDefinition::get<RootDefinition::ric_root>() const { return m_ric_root; }
    template<> inline const auto RootDefinition::get<RootDefinition::regional_composite_root>() const { return RootDefinition::regional_composite_root{ m_regional_composite_root}; }
    template<> inline const auto RootDefinition::get<RootDefinition::timestamp>() const { return m_timestamp; }
    template<> inline const auto RootDefinition::get<RootDefinition::pricing_source__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PricingSource_V7>( m_pricing_source__v7)); }
    template<> inline const auto RootDefinition::get<RootDefinition::exchange>(int i) const { return RootDefinition::exchange{ get_exchange(i)}; }
    template<> inline int RootDefinition::count<RootDefinition::exchange>() const { return static_cast<int>( m_exchange.size()); }
    template<> inline const auto RootDefinition::get<RootDefinition::underlying>(int i) const { return RootDefinition::underlying{ get_underlying(i)}; }
    template<> inline int RootDefinition::count<RootDefinition::underlying>() const { return static_cast<int>( m_underlying.size()); }
    template<> inline const auto RootDefinition_PKey::get<RootDefinition_PKey::root>() const { return RootDefinition_PKey::root{m_root}; }
    
    template<> inline const auto RootDefinition_Exchange::get<RootDefinition_Exchange::opt_exch>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_opt_exch));}
    template<> inline const auto RootDefinition_Exchange::get<RootDefinition_Exchange::root>() const { return RootDefinition_Exchange::root{m_root}; }
    
    template<> inline const auto RootDefinition_Underlying::get<RootDefinition_Underlying::ticker>() const { return RootDefinition_Underlying::ticker{m_ticker}; }
    template<> inline const auto RootDefinition_Underlying::get<RootDefinition_Underlying::spc>() const { return m_spc; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const RootDefinition_PKey& m) {
        o << "\"root\":{" << m.get<RootDefinition_PKey::root>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const RootDefinition_Exchange& m) {
        o << "\"opt_exch\":" << (int64_t)m.get<RootDefinition_Exchange::opt_exch>();
        o << ",\"root\":{" << m.get<RootDefinition_Exchange::root>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const RootDefinition_Underlying& m) {
        o << "\"ticker\":{" << m.get<RootDefinition_Underlying::ticker>() << "}";
        o << ",\"spc\":" << m.get<RootDefinition_Underlying::spc>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const RootDefinition& m) {
        o << "\"_meta\":{" << m.get<RootDefinition::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<RootDefinition::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<RootDefinition::ticker>() << "}";
        o << ",\"osi_root\":\"" << m.get<RootDefinition::osi_root>() << "\"";
        o << ",\"ccode\":{" << m.get<RootDefinition::ccode>() << "}";
        o << ",\"u_prc_driver_key\":{" << m.get<RootDefinition::u_prc_driver_key>() << "}";
        o << ",\"u_prc_driver_type\":" << (int64_t)m.get<RootDefinition::u_prc_driver_type>();
        o << ",\"u_prc_driver_key2\":{" << m.get<RootDefinition::u_prc_driver_key2>() << "}";
        o << ",\"u_prc_driver_type2\":" << (int64_t)m.get<RootDefinition::u_prc_driver_type2>();
        o << ",\"u_prc_bound_ccode\":" << (int64_t)m.get<RootDefinition::u_prc_bound_ccode>();
        o << ",\"expiration_map\":" << (int64_t)m.get<RootDefinition::expiration_map>();
        o << ",\"underlier_mode\":" << (int64_t)m.get<RootDefinition::underlier_mode>();
        o << ",\"option_type\":" << (int64_t)m.get<RootDefinition::option_type>();
        o << ",\"multihedge\":" << (int64_t)m.get<RootDefinition::multihedge>();
        o << ",\"exercise_time\":" << (int64_t)m.get<RootDefinition::exercise_time>();
        o << ",\"exercise_type\":" << (int64_t)m.get<RootDefinition::exercise_type>();
        o << ",\"time_metric\":" << (int64_t)m.get<RootDefinition::time_metric>();
        o << ",\"trading_period\":" << (int64_t)m.get<RootDefinition::trading_period>();
        o << ",\"pricing_model\":" << (int64_t)m.get<RootDefinition::pricing_model>();
        o << ",\"moneyness_type\":" << (int64_t)m.get<RootDefinition::moneyness_type>();
        o << ",\"price_quote_type\":" << (int64_t)m.get<RootDefinition::price_quote_type>();
        o << ",\"volume_tier\":" << (int64_t)m.get<RootDefinition::volume_tier>();
        o << ",\"position_limit\":" << m.get<RootDefinition::position_limit>();
        o << ",\"exchanges\":\"" << m.get<RootDefinition::exchanges>() << "\"";
        o << ",\"tick_value\":" << m.get<RootDefinition::tick_value>();
        o << ",\"point_value\":" << m.get<RootDefinition::point_value>();
        o << ",\"point_currency\":" << (int64_t)m.get<RootDefinition::point_currency>();
        o << ",\"strike_scale\":" << m.get<RootDefinition::strike_scale>();
        o << ",\"strike_ratio\":" << m.get<RootDefinition::strike_ratio>();
        o << ",\"cash_on_exercise\":" << m.get<RootDefinition::cash_on_exercise>();
        o << ",\"underliers_per_cn\":" << m.get<RootDefinition::underliers_per_cn>();
        o << ",\"premium_mult\":" << m.get<RootDefinition::premium_mult>();
        o << ",\"symbol_ratio\":" << m.get<RootDefinition::symbol_ratio>();
        o << ",\"adj_convention\":" << (int64_t)m.get<RootDefinition::adj_convention>();
        o << ",\"opt_price_inc\":" << (int64_t)m.get<RootDefinition::opt_price_inc>();
        o << ",\"price_format\":" << (int64_t)m.get<RootDefinition::price_format>();
        o << ",\"trade_curr\":" << (int64_t)m.get<RootDefinition::trade_curr>();
        o << ",\"settle_curr\":" << (int64_t)m.get<RootDefinition::settle_curr>();
        o << ",\"strike_curr\":" << (int64_t)m.get<RootDefinition::strike_curr>();
        o << ",\"default_surface_root\":{" << m.get<RootDefinition::default_surface_root>() << "}";
        o << ",\"ric_root\":\"" << m.get<RootDefinition::ric_root>() << "\"";
        o << ",\"regional_composite_root\":{" << m.get<RootDefinition::regional_composite_root>() << "}";
        {
            std::time_t tt = m.get<RootDefinition::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"pricing_source__v7\":" << (int64_t)m.get<RootDefinition::pricing_source__v7>();
        o << ",\"exchange\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<RootDefinition::exchange>(); ++i) {
                o << delim << m.get<RootDefinition::exchange>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"underlying\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<RootDefinition::underlying>(); ++i) {
                o << delim << m.get<RootDefinition::underlying>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}