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

    #ifndef _futexch__GUARD__
    #define _futexch__GUARD__
    DECL_STRONG_TYPE(futexch, spiderrock::protobuf::api::FutExch);
    #endif//_futexch__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _settle_time__GUARD__
    #define _settle_time__GUARD__
    DECL_STRONG_TYPE(settle_time, spiderrock::protobuf::api::SettleTime);
    #endif//_settle_time__GUARD__

    #ifndef _position_limit__GUARD__
    #define _position_limit__GUARD__
    DECL_STRONG_TYPE(position_limit, int32);
    #endif//_position_limit__GUARD__

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

    #ifndef _price_scaling__GUARD__
    #define _price_scaling__GUARD__
    DECL_STRONG_TYPE(price_scaling, float);
    #endif//_price_scaling__GUARD__

    #ifndef _underliers_per_cn__GUARD__
    #define _underliers_per_cn__GUARD__
    DECL_STRONG_TYPE(underliers_per_cn, int32);
    #endif//_underliers_per_cn__GUARD__

    #ifndef _underlier_type__UnderlierType__GUARD__
    #define _underlier_type__UnderlierType__GUARD__
    DECL_STRONG_TYPE(underlier_type__UnderlierType, spiderrock::protobuf::api::UnderlierType);
    #endif//_underlier_type__UnderlierType__GUARD__

    #ifndef _clearing_code__GUARD__
    #define _clearing_code__GUARD__
    DECL_STRONG_TYPE(clearing_code, string);
    #endif//_clearing_code__GUARD__

    #ifndef _ric_root__GUARD__
    #define _ric_root__GUARD__
    DECL_STRONG_TYPE(ric_root, string);
    #endif//_ric_root__GUARD__

    #ifndef _bbg_root__GUARD__
    #define _bbg_root__GUARD__
    DECL_STRONG_TYPE(bbg_root, string);
    #endif//_bbg_root__GUARD__

    #ifndef _bbg_group__GUARD__
    #define _bbg_group__GUARD__
    DECL_STRONG_TYPE(bbg_group, spiderrock::protobuf::api::YellowKey);
    #endif//_bbg_group__GUARD__

    #ifndef _gmi_exchange__GUARD__
    #define _gmi_exchange__GUARD__
    DECL_STRONG_TYPE(gmi_exchange, string);
    #endif//_gmi_exchange__GUARD__

    #ifndef _gmi_product__GUARD__
    #define _gmi_product__GUARD__
    DECL_STRONG_TYPE(gmi_product, string);
    #endif//_gmi_product__GUARD__

    #ifndef _gmi_sub_type__GUARD__
    #define _gmi_sub_type__GUARD__
    DECL_STRONG_TYPE(gmi_sub_type, string);
    #endif//_gmi_sub_type__GUARD__

    #ifndef _display_price_scaling__GUARD__
    #define _display_price_scaling__GUARD__
    DECL_STRONG_TYPE(display_price_scaling, float);
    #endif//_display_price_scaling__GUARD__

    #ifndef _strike_scaling__GUARD__
    #define _strike_scaling__GUARD__
    DECL_STRONG_TYPE(strike_scaling, float);
    #endif//_strike_scaling__GUARD__

    #ifndef _description__GUARD__
    #define _description__GUARD__
    DECL_STRONG_TYPE(description, string);
    #endif//_description__GUARD__

    #ifndef _market_center__GUARD__
    #define _market_center__GUARD__
    DECL_STRONG_TYPE(market_center, string);
    #endif//_market_center__GUARD__

    #ifndef _trading_period__TradingPeriod__GUARD__
    #define _trading_period__TradingPeriod__GUARD__
    DECL_STRONG_TYPE(trading_period__TradingPeriod, spiderrock::protobuf::api::TradingPeriod);
    #endif//_trading_period__TradingPeriod__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ric_code__v7__GUARD__
    #define _ric_code__v7__GUARD__
    DECL_STRONG_TYPE(ric_code__v7, string);
    #endif//_ric_code__v7__GUARD__

    #ifndef _ccode__GUARD__
    #define _ccode__GUARD__
    DECL_STRONG_TYPE(ccode, TickerKey);
    #endif//_ccode__GUARD__

    
    class CCodeDefinition_PKey {
        public:
        //using statements for all types used in this class
        using ccode = spiderrock::protobuf::api::ccode;

        private:
        ccode m_ccode{};

        public:
		ccode get_ccode() const {
            return m_ccode;
        }
        void set_ccode(const ccode& value)  {
            m_ccode = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to CCodeDefinition_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to CCodeDefinition_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ccode & value) { set_ccode(value); }


        CCodeDefinition_PKey() {}

        virtual ~CCodeDefinition_PKey() {
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
        bool IncludeCcode() const {
            return (m_ccode.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeCcode()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ccode.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeCcode()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ccode.setCodecTickerKey(tickerKeyLayout);
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
                        m_ccode.setFromCodec(tickerKey);
                        break;
                    }
                }
            }
        }

    };
    

    class CCodeDefinition {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::CCodeDefinition_PKey;
        using futexch = spiderrock::protobuf::api::futexch;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using settle_time = spiderrock::protobuf::api::settle_time;
        using position_limit = spiderrock::protobuf::api::position_limit;
        using tick_value = spiderrock::protobuf::api::tick_value;
        using point_value = spiderrock::protobuf::api::point_value__float;
        using point_currency = spiderrock::protobuf::api::point_currency;
        using price_scaling = spiderrock::protobuf::api::price_scaling;
        using underliers_per_cn = spiderrock::protobuf::api::underliers_per_cn;
        using underlier_type = spiderrock::protobuf::api::underlier_type__UnderlierType;
        using clearing_code = spiderrock::protobuf::api::clearing_code;
        using ric_root = spiderrock::protobuf::api::ric_root;
        using bbg_root = spiderrock::protobuf::api::bbg_root;
        using bbg_group = spiderrock::protobuf::api::bbg_group;
        using gmi_exchange = spiderrock::protobuf::api::gmi_exchange;
        using gmi_product = spiderrock::protobuf::api::gmi_product;
        using gmi_sub_type = spiderrock::protobuf::api::gmi_sub_type;
        using display_price_scaling = spiderrock::protobuf::api::display_price_scaling;
        using strike_scaling = spiderrock::protobuf::api::strike_scaling;
        using description = spiderrock::protobuf::api::description;
        using market_center = spiderrock::protobuf::api::market_center;
        using trading_period = spiderrock::protobuf::api::trading_period__TradingPeriod;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using ric_code__v7 = spiderrock::protobuf::api::ric_code__v7;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        futexch m_futexch{};
        ticker m_ticker{};
        settle_time m_settle_time{};
        position_limit m_position_limit{};
        tick_value m_tick_value{};
        point_value m_point_value{};
        point_currency m_point_currency{};
        price_scaling m_price_scaling{};
        underliers_per_cn m_underliers_per_cn{};
        underlier_type m_underlier_type{};
        clearing_code m_clearing_code{};
        ric_root m_ric_root{};
        bbg_root m_bbg_root{};
        bbg_group m_bbg_group{};
        gmi_exchange m_gmi_exchange{};
        gmi_product m_gmi_product{};
        gmi_sub_type m_gmi_sub_type{};
        display_price_scaling m_display_price_scaling{};
        strike_scaling m_strike_scaling{};
        description m_description{};
        market_center m_market_center{};
        trading_period m_trading_period{};
        timestamp m_timestamp{};
        ric_code__v7 m_ric_code__v7{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        futexch get_futexch() const {
            return m_futexch;
        }		
        ticker get_ticker() const {
            return m_ticker;
        }		
        settle_time get_settle_time() const {
            return m_settle_time;
        }		
        position_limit get_position_limit() const {
            return m_position_limit;
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
        price_scaling get_price_scaling() const {
            return m_price_scaling;
        }		
        underliers_per_cn get_underliers_per_cn() const {
            return m_underliers_per_cn;
        }		
        underlier_type get_underlier_type() const {
            return m_underlier_type;
        }		
        clearing_code get_clearing_code() const {
            return m_clearing_code;
        }		
        ric_root get_ric_root() const {
            return m_ric_root;
        }		
        bbg_root get_bbg_root() const {
            return m_bbg_root;
        }		
        bbg_group get_bbg_group() const {
            return m_bbg_group;
        }		
        gmi_exchange get_gmi_exchange() const {
            return m_gmi_exchange;
        }		
        gmi_product get_gmi_product() const {
            return m_gmi_product;
        }		
        gmi_sub_type get_gmi_sub_type() const {
            return m_gmi_sub_type;
        }		
        display_price_scaling get_display_price_scaling() const {
            return m_display_price_scaling;
        }		
        strike_scaling get_strike_scaling() const {
            return m_strike_scaling;
        }		
        description get_description() const {
            return m_description;
        }		
        market_center get_market_center() const {
            return m_market_center;
        }		
        trading_period get_trading_period() const {
            return m_trading_period;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }		
        ric_code__v7 get_ric_code__v7() const {
            return m_ric_code__v7;
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
        void set_futexch(const futexch& value)  {
            m_futexch = value;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_settle_time(const settle_time& value)  {
            m_settle_time = value;
        }
        void set_position_limit(const position_limit& value)  {
            m_position_limit = value;
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
        void set_price_scaling(const price_scaling& value)  {
            m_price_scaling = value;
        }
        void set_underliers_per_cn(const underliers_per_cn& value)  {
            m_underliers_per_cn = value;
        }
        void set_underlier_type(const underlier_type& value)  {
            m_underlier_type = value;
        }
        void set_clearing_code(const clearing_code& value)  {
            m_clearing_code = value;
        }
        void set_ric_root(const ric_root& value)  {
            m_ric_root = value;
        }
        void set_bbg_root(const bbg_root& value)  {
            m_bbg_root = value;
        }
        void set_bbg_group(const bbg_group& value)  {
            m_bbg_group = value;
        }
        void set_gmi_exchange(const gmi_exchange& value)  {
            m_gmi_exchange = value;
        }
        void set_gmi_product(const gmi_product& value)  {
            m_gmi_product = value;
        }
        void set_gmi_sub_type(const gmi_sub_type& value)  {
            m_gmi_sub_type = value;
        }
        void set_display_price_scaling(const display_price_scaling& value)  {
            m_display_price_scaling = value;
        }
        void set_strike_scaling(const strike_scaling& value)  {
            m_strike_scaling = value;
        }
        void set_description(const description& value)  {
            m_description = value;
        }
        void set_market_center(const market_center& value)  {
            m_market_center = value;
        }
        void set_trading_period(const trading_period& value)  {
            m_trading_period = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_ric_code__v7(const ric_code__v7& value)  {
            m_ric_code__v7 = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to CCodeDefinition::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const futexch & value) {
            set_futexch(value);
        }
        void set(const ticker & value) {
            set_ticker(value);
        }
        void set(const settle_time & value) {
            set_settle_time(value);
        }
        void set(const position_limit & value) {
            set_position_limit(value);
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
        void set(const price_scaling & value) {
            set_price_scaling(value);
        }
        void set(const underliers_per_cn & value) {
            set_underliers_per_cn(value);
        }
        void set(const underlier_type & value) {
            set_underlier_type(value);
        }
        void set(const clearing_code & value) {
            set_clearing_code(value);
        }
        void set(const ric_root & value) {
            set_ric_root(value);
        }
        void set(const bbg_root & value) {
            set_bbg_root(value);
        }
        void set(const bbg_group & value) {
            set_bbg_group(value);
        }
        void set(const gmi_exchange & value) {
            set_gmi_exchange(value);
        }
        void set(const gmi_product & value) {
            set_gmi_product(value);
        }
        void set(const gmi_sub_type & value) {
            set_gmi_sub_type(value);
        }
        void set(const display_price_scaling & value) {
            set_display_price_scaling(value);
        }
        void set(const strike_scaling & value) {
            set_strike_scaling(value);
        }
        void set(const description & value) {
            set_description(value);
        }
        void set(const market_center & value) {
            set_market_center(value);
        }
        void set(const trading_period & value) {
            set_trading_period(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const ric_code__v7 & value) {
            set_ric_code__v7(value);
        }

        void set(const CCodeDefinition & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_futexch);
            set(value.m_ticker);
            set(value.m_settle_time);
            set(value.m_position_limit);
            set(value.m_tick_value);
            set(value.m_point_value);
            set(value.m_point_currency);
            set(value.m_price_scaling);
            set(value.m_underliers_per_cn);
            set(value.m_underlier_type);
            set(value.m_clearing_code);
            set(value.m_ric_root);
            set(value.m_bbg_root);
            set(value.m_bbg_group);
            set(value.m_gmi_exchange);
            set(value.m_gmi_product);
            set(value.m_gmi_sub_type);
            set(value.m_display_price_scaling);
            set(value.m_strike_scaling);
            set(value.m_description);
            set(value.m_market_center);
            set(value.m_trading_period);
            set(value.m_timestamp);
            set(value.m_ric_code__v7);
        }

        CCodeDefinition() {
            m__meta.set_message_type("CCodeDefinition");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4335, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4335, length);
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
             *this = CCodeDefinition{};
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
        bool IncludePositionLimit() const {
            return !(m_position_limit == 0);
        }
        bool IncludeTickValue() const {
            return !(m_tick_value == 0.0);
        }
        bool IncludePointValue() const {
            return !(m_point_value == 0.0);
        }
        bool IncludePriceScaling() const {
            return !(m_price_scaling == 0.0);
        }
        bool IncludeUnderliersPerCn() const {
            return !(m_underliers_per_cn == 0);
        }
        bool IncludeClearingCode() const {
            return !(m_clearing_code.empty());
        }
        bool IncludeRicRoot() const {
            return !(m_ric_root.empty());
        }
        bool IncludeBbgRoot() const {
            return !(m_bbg_root.empty());
        }
        bool IncludeGmiExchange() const {
            return !(m_gmi_exchange.empty());
        }
        bool IncludeGmiProduct() const {
            return !(m_gmi_product.empty());
        }
        bool IncludeGmiSubType() const {
            return !(m_gmi_sub_type.empty());
        }
        bool IncludeDisplayPriceScaling() const {
            return !(m_display_price_scaling == 0.0);
        }
        bool IncludeStrikeScaling() const {
            return !(m_strike_scaling == 0.0);
        }
        bool IncludeDescription() const {
            return !(m_description.empty());
        }
        bool IncludeMarketCenter() const {
            return !(m_market_center.empty());
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeRicCodeV7() const {
            return !(m_ric_code__v7.empty());
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FutExch>(m_futexch)));
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(103, tickerKeyLayout);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SettleTime>(m_settle_time)));
            if ( IncludePositionLimit()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(109,m_position_limit);
            }
            if ( IncludeTickValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_tick_value);
            }
            if ( IncludePointValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_point_value);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            if ( IncludePriceScaling()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_price_scaling);
            }
            if ( IncludeUnderliersPerCn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(124,m_underliers_per_cn);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>(m_underlier_type)));
            if ( IncludeClearingCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(130,m_clearing_code);
            }
            if ( IncludeRicRoot()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(164,m_ric_root);
            }
            if ( IncludeBbgRoot()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(136,m_bbg_root);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YellowKey>(m_bbg_group)));
            if ( IncludeGmiExchange()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(142,m_gmi_exchange);
            }
            if ( IncludeGmiProduct()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(145,m_gmi_product);
            }
            if ( IncludeGmiSubType()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(148,m_gmi_sub_type);
            }
            if ( IncludeDisplayPriceScaling()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(151,m_display_price_scaling);
            }
            if ( IncludeStrikeScaling()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(154,m_strike_scaling);
            }
            if ( IncludeDescription()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(157,m_description);
            }
            if ( IncludeMarketCenter()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(160,m_market_center);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(165,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradingPeriod>(m_trading_period)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(163, m_timestamp);
            }
            if ( IncludeRicCodeV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5000,m_ric_code__v7);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FutExch>(m_futexch)));
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 103, tickerKeyLayout);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SettleTime>(m_settle_time)));
            if ( IncludePositionLimit()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,109,m_position_limit);
            }
            if ( IncludeTickValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_tick_value);
            }
            if ( IncludePointValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_point_value);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            if ( IncludePriceScaling()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_price_scaling);
            }
            if ( IncludeUnderliersPerCn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,124,m_underliers_per_cn);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>(m_underlier_type)));
            if ( IncludeClearingCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,130,static_cast<string>(m_clearing_code));
            }
            if ( IncludeRicRoot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,164,static_cast<string>(m_ric_root));
            }
            if ( IncludeBbgRoot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,136,static_cast<string>(m_bbg_root));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YellowKey>(m_bbg_group)));
            if ( IncludeGmiExchange()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,142,static_cast<string>(m_gmi_exchange));
            }
            if ( IncludeGmiProduct()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,145,static_cast<string>(m_gmi_product));
            }
            if ( IncludeGmiSubType()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,148,static_cast<string>(m_gmi_sub_type));
            }
            if ( IncludeDisplayPriceScaling()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,151,m_display_price_scaling);
            }
            if ( IncludeStrikeScaling()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,154,m_strike_scaling);
            }
            if ( IncludeDescription()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,157,static_cast<string>(m_description));
            }
            if ( IncludeMarketCenter()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,160,static_cast<string>(m_market_center));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,165,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradingPeriod>(m_trading_period)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 163, m_timestamp);
            }
            if ( IncludeRicCodeV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5000,static_cast<string>(m_ric_code__v7));
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
                            m_futexch = static_cast<spiderrock::protobuf::api::FutExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_settle_time = static_cast<spiderrock::protobuf::api::SettleTime>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_position_limit = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_tick_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_point_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_point_currency = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_price_scaling = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_underliers_per_cn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 127: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_underlier_type = static_cast<spiderrock::protobuf::api::UnderlierType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_clearing_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 164: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_ric_root = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_bbg_root = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 139: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_bbg_group = static_cast<spiderrock::protobuf::api::YellowKey>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_gmi_exchange = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_gmi_product = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_gmi_sub_type = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_display_price_scaling = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_strike_scaling = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_description = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_market_center = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 165: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_trading_period = static_cast<spiderrock::protobuf::api::TradingPeriod>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 5000: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_ric_code__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto CCodeDefinition::get<CCodeDefinition::_meta>() const { return CCodeDefinition::_meta{ m__meta}; }
    template<> inline const auto CCodeDefinition::get<CCodeDefinition::pkey>() const { return CCodeDefinition::pkey{ m_pkey}; }
    template<> inline const auto CCodeDefinition::get<CCodeDefinition::futexch>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FutExch>( m_futexch)); }
    template<> inline const auto CCodeDefinition::get<CCodeDefinition::ticker>() const { return CCodeDefinition::ticker{ m_ticker}; }
    template<> inline const auto CCodeDefinition::get<CCodeDefinition::settle_time>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SettleTime>( m_settle_time)); }
    template<> inline const auto CCodeDefinition::get<CCodeDefinition::position_limit>() const { return m_position_limit; }
    template<> inline const auto CCodeDefinition::get<CCodeDefinition::tick_value>() const { return m_tick_value; }
    template<> inline const auto CCodeDefinition::get<CCodeDefinition::point_value>() const { return m_point_value; }
    template<> inline const auto CCodeDefinition::get<CCodeDefinition::point_currency>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>( m_point_currency)); }
    template<> inline const auto CCodeDefinition::get<CCodeDefinition::price_scaling>() const { return m_price_scaling; }
    template<> inline const auto CCodeDefinition::get<CCodeDefinition::underliers_per_cn>() const { return m_underliers_per_cn; }
    template<> inline const auto CCodeDefinition::get<CCodeDefinition::underlier_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>( m_underlier_type)); }
    template<> inline const auto CCodeDefinition::get<CCodeDefinition::clearing_code>() const { return m_clearing_code; }
    template<> inline const auto CCodeDefinition::get<CCodeDefinition::ric_root>() const { return m_ric_root; }
    template<> inline const auto CCodeDefinition::get<CCodeDefinition::bbg_root>() const { return m_bbg_root; }
    template<> inline const auto CCodeDefinition::get<CCodeDefinition::bbg_group>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YellowKey>( m_bbg_group)); }
    template<> inline const auto CCodeDefinition::get<CCodeDefinition::gmi_exchange>() const { return m_gmi_exchange; }
    template<> inline const auto CCodeDefinition::get<CCodeDefinition::gmi_product>() const { return m_gmi_product; }
    template<> inline const auto CCodeDefinition::get<CCodeDefinition::gmi_sub_type>() const { return m_gmi_sub_type; }
    template<> inline const auto CCodeDefinition::get<CCodeDefinition::display_price_scaling>() const { return m_display_price_scaling; }
    template<> inline const auto CCodeDefinition::get<CCodeDefinition::strike_scaling>() const { return m_strike_scaling; }
    template<> inline const auto CCodeDefinition::get<CCodeDefinition::description>() const { return m_description; }
    template<> inline const auto CCodeDefinition::get<CCodeDefinition::market_center>() const { return m_market_center; }
    template<> inline const auto CCodeDefinition::get<CCodeDefinition::trading_period>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradingPeriod>( m_trading_period)); }
    template<> inline const auto CCodeDefinition::get<CCodeDefinition::timestamp>() const { return m_timestamp; }
    template<> inline const auto CCodeDefinition::get<CCodeDefinition::ric_code__v7>() const { return m_ric_code__v7; }
    template<> inline const auto CCodeDefinition_PKey::get<CCodeDefinition_PKey::ccode>() const { return CCodeDefinition_PKey::ccode{m_ccode}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const CCodeDefinition_PKey& m) {
        o << "\"ccode\":{" << m.get<CCodeDefinition_PKey::ccode>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const CCodeDefinition& m) {
        o << "\"_meta\":{" << m.get<CCodeDefinition::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<CCodeDefinition::pkey>() << "}";
        o << ",\"futexch\":" << (int64_t)m.get<CCodeDefinition::futexch>();
        o << ",\"ticker\":{" << m.get<CCodeDefinition::ticker>() << "}";
        o << ",\"settle_time\":" << (int64_t)m.get<CCodeDefinition::settle_time>();
        o << ",\"position_limit\":" << m.get<CCodeDefinition::position_limit>();
        o << ",\"tick_value\":" << m.get<CCodeDefinition::tick_value>();
        o << ",\"point_value\":" << m.get<CCodeDefinition::point_value>();
        o << ",\"point_currency\":" << (int64_t)m.get<CCodeDefinition::point_currency>();
        o << ",\"price_scaling\":" << m.get<CCodeDefinition::price_scaling>();
        o << ",\"underliers_per_cn\":" << m.get<CCodeDefinition::underliers_per_cn>();
        o << ",\"underlier_type\":" << (int64_t)m.get<CCodeDefinition::underlier_type>();
        o << ",\"clearing_code\":\"" << m.get<CCodeDefinition::clearing_code>() << "\"";
        o << ",\"ric_root\":\"" << m.get<CCodeDefinition::ric_root>() << "\"";
        o << ",\"bbg_root\":\"" << m.get<CCodeDefinition::bbg_root>() << "\"";
        o << ",\"bbg_group\":" << (int64_t)m.get<CCodeDefinition::bbg_group>();
        o << ",\"gmi_exchange\":\"" << m.get<CCodeDefinition::gmi_exchange>() << "\"";
        o << ",\"gmi_product\":\"" << m.get<CCodeDefinition::gmi_product>() << "\"";
        o << ",\"gmi_sub_type\":\"" << m.get<CCodeDefinition::gmi_sub_type>() << "\"";
        o << ",\"display_price_scaling\":" << m.get<CCodeDefinition::display_price_scaling>();
        o << ",\"strike_scaling\":" << m.get<CCodeDefinition::strike_scaling>();
        o << ",\"description\":\"" << m.get<CCodeDefinition::description>() << "\"";
        o << ",\"market_center\":\"" << m.get<CCodeDefinition::market_center>() << "\"";
        o << ",\"trading_period\":" << (int64_t)m.get<CCodeDefinition::trading_period>();
        {
            std::time_t tt = m.get<CCodeDefinition::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"ric_code__v7\":\"" << m.get<CCodeDefinition::ric_code__v7>() << "\"";
        return o;
    }

}
}
}